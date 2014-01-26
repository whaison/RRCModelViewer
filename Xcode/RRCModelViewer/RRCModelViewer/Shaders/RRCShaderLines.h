//
//  RRCShaderLines.h
//  RRCModelViewer
//
//  Created by RRC on 1/25/14.
//  Copyright (c) 2014 RendonCepeda. All rights reserved.
//

#import "RRCShaderProgram.h"

@interface RRCShaderLines : RRCShaderProgram

// Attribute Handles
@property (assign, nonatomic, readonly) GLint aPosition;

// Uniform Handles
@property (assign, nonatomic, readonly) GLint uProjectionMatrix;
@property (assign, nonatomic, readonly) GLint uModelViewMatrix;

@end