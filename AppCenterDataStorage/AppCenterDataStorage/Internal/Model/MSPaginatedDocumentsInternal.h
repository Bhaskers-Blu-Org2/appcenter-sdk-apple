// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#import "MSPage.h"
#import "MSReadOptions.h"

@interface MSPaginatedDocuments()

// Read-only.
@property(nonatomic, copy, readonly) NSString *partition;
@property(nonatomic, readonly) Class documentType;
@property(nonatomic, readonly) MSReadOptions *readOptions;

// Read-write (to implement pagination).
@property(nonatomic, readwrite) MSPage *currentPage;
@property(nonatomic, copy, readwrite, nullable) NSString *continuationToken;

@end
