/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 03:22:25 by yabenman          #+#    #+#             */
/*   Updated: 2025/02/26 03:30:07 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct data
{
    int id;
    char *message;
} t_data;


void *myFunc(void *args)
{
    t_data *data = (t_data *)args;
    printf("Thread %d: %s\n", data->id, data->message);
    return NULL;

}


int main()
{
    pthread_t id1;
    pthread_t id2;
    
    t_data data1 = {1,"hello world 1"};
    t_data data2 = {2,"hello world 2"};

    pthread_create(&id1,NULL,myFunc,&data1);
    pthread_create(&id2,NULL,myFunc,&data2);

    pthread_join(id1, NULL);
    pthread_join(id2, NULL);

    return 0;

}

