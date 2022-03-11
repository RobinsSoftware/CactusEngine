/*
Copyright 2022 Robins Software

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

Created by Lola Robins
<lola@robinssoftware.ca>
*/

#include <stdio.h>
#include <stdlib.h>

#include <lolasengine/engine.h>

void print(string message)
{
    string buffer = malloc(20);
    timeutil_get_timestamp(buffer);
    printf("[%s] INFO: %s\n", buffer, message);
    free(buffer);
}

void print_debug(string message)
{
    string buffer = malloc(20);
    timeutil_get_timestamp(buffer);
    printf("[%s] DEBUG: %s\n", buffer, message);
    free(buffer);
}

void print_error(string message)
{
    string buffer = malloc(20);
    timeutil_get_timestamp(buffer);
    printf("[%s] ERROR: %s\n", buffer, message);
    free(buffer);
}