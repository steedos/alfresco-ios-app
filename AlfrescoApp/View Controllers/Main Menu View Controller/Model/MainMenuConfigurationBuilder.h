/*******************************************************************************
 * Copyright (C) 2005-2015 Alfresco Software Limited.
 *
 * This file is part of the Alfresco Mobile iOS App.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ******************************************************************************/

#import "MainMenuBuilder.h"

@class AlfrescoConfigService;

@interface MainMenuConfigurationBuilder : MainMenuBuilder

@property (nonatomic, strong) id<AlfrescoSession> session;
@property (nonatomic, strong) AlfrescoConfigService *configService;
@property (nonatomic, strong) NSDictionary *managedAccountConfiguration;

- (instancetype)initWithAccount:(UserAccount *)account session:(id<AlfrescoSession>)session;
- (void)viewConfigCollectionForMenuItemCollection:(NSArray *)menuItemsCollection completionBlock:(void (^)(NSArray *configs, NSError *error))completionBlock;

@end
