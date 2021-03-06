/**********************************************************************
 * File:        callnet.h  (Formerly callnet.h)
 * Description: Interface to Neural Net matcher
 * Author:      Phil Cheatle
 * Created:     Wed Nov 18 10:35:00 GMT 1992
 *
 * (C) Copyright 1992, Hewlett-Packard Ltd.
 ** Licensed under the Apache License, Version 2.0 (the "License");
 ** you may not use this file except in compliance with the License.
 ** You may obtain a copy of the License at
 ** http://www.apache.org/licenses/LICENSE-2.0
 ** Unless required by applicable law or agreed to in writing, software
 ** distributed under the License is distributed on an "AS IS" BASIS,
 ** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 ** See the License for the specific language governing permissions and
 ** limitations under the License.
 *
 **********************************************************************/

#ifndef           CALLNET_H
#define           CALLNET_H

//      extern "C" {
void init_net();  /* Initialise net */
void callnet(  /* Apply image to net */
             float *input_vector,
             char *top,
             float *top_score,
             char *next,
             float *next_score);
//      };
#endif
