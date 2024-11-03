/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef St7735_Widgets.h
#define	St7735_Widgets

#include <xc.h> // include processor files - each processor file is guarded. 

typedef union {
    double Parameters;
   struct{
       unsigned char x_start;
       unsigned char y_start;
       unsigned char Widht;
       unsigned char Height;
       int Color_border;
       int Color_background;
       
       
       
   }Coordinates;
    
    
    
}ProgressBar;


typedef union {
   unsigned long Animating_Values;
   struct{
       int Current_Value;
       int Last_Value;
       
       
   }Get_Values;
}Animation_Progress;

Animation_Progress ProgressBar_animation;
Animation_Progress *P_ProgressBar_animation = &ProgressBar_animation;
//Matrix For Display 7 Segmentos Circuit
int *const Segments_Display_pixel[11][8] = 
{
    0x3F7E, 0x5E3D, 0x6003, 0x6003, 0x6003, 0x6003, 0x5E3D, 0x3F7E,//0
    0x0000, 0x0000, 0x0000, 0x1E3C, 0x3F7E, 0x0000, 0x0000, 0x0000,//1
    0x3F00, 0x5E81, 0x61C3, 0x61C3, 0x61C3, 0x61C3, 0x40BD, 0x007E, //2      
    0x0000, 0x4081, 0x61C3, 0x61C3, 0x61C3, 0x61C3, 0x5E3D, 0x3F7E,//3 
    0x007E, 0x00BC, 0x01C0, 0x01C0, 0x01C0, 0x01C0, 0x1E3C, 0x3F7E,//4
    0x007E, 0x40BD, 0x61C3, 0x61C3, 0x61C3, 0x61C3, 0x5E81, 0x6300,//5
    0x3F7E, 0x5EBD, 0x61C3, 0x61C3, 0x61C3, 0x61C3, 0x5E81, 0x3F00,//6
    0x0000, 0x0001, 0x0003, 0x0003, 0x0003, 0x0003, 0x1E3D, 0x3F7E,//7
    0x3F7E, 0x5E3D, 0x61C3, 0x61C3, 0x61C3, 0x61C3, 0x5E3D, 0x3F7E,//8
    0x007E, 0x20BD, 0x61C3, 0x61C3, 0x61C3, 0x61C3, 0x5E3D, 0x3F7E//9      

 
            
            
     

    
    
    
};
int line_Display_pixel;

#endif	/* XC_HEADER_TEMPLATE_H */

