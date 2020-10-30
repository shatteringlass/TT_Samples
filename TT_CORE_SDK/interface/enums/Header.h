/***************************************************************************
*                                                                           
*                  Unpublished Work Copyright (c) 2019-2020                 
*                  Trading Technologies International, Inc.                 
*                       All Rights Reserved Worldwide                       
*                                                                           
*          * * *   S T R I C T L Y   P R O P R I E T A R Y   * * *          
*                                                                           
* WARNING:  This program (or document) is unpublished, proprietary property 
* of Trading Technologies International, Inc. and is to be maintained in    
* strict confidence. Unauthorized reproduction, distribution or disclosure  
* of this program (or document), or any program (or document) derived from  
* it is prohibited by State and Federal law, and by local law outside of    
* the U.S.                                                                  
*                                                                           
****************************************************************************
*                                                                           
* This file is auto generated - do not modify by hand.                      
* Run the auto generation against the message template files.               
* Generated from messaging\header.proto
* Package tt.messaging
*                                                                           
***************************************************************************/
#pragma once

namespace core_wrapper
{
    private ref class Header    {
    public: 
        enum class MessageType
        {
            NotSet                                          = -1,
            Unknown                                         = 0,
            MsgHeader                                       = 1,
            MsgPayload                                      = 2,
            MsgNewOrderSingle                               = 3,
            MsgExecutionReport                              = 4,
            MsgOrderCancelReject                            = 5,
            MsgNewOrderList                                 = 6,
            MsgOrderCancelRequest                           = 7,
            MsgOrderCancelReplaceRequest                    = 8,
            MsgOrderStatusRequest                           = 9,
            MsgAccountListRequest                           = 10,
            MsgAccountListResponse                          = 11,
            MsgUserLoginRequest                             = 12,
            MsgUserLoginResponse                            = 13,
            MsgOrderSub                                     = 17,
            MsgOrderSubResponse                             = 18,
            MsgPriceSub                                     = 19,
            MsgPriceSubResponse                             = 20,
            MsgProductUpdateSub                             = 23,
            MsgProductUpdateSubResponse                     = 24,
            MsgAccountMetadataSub                           = 25,
            MsgAccountMetadataSubResponse                   = 26,
            MsgOrderQueryRequest                            = 27,
            MsgOrderQueryResponse                           = 28,
            MsgPriceQueryRequest                            = 29,
            MsgPriceQueryResponse                           = 30,
            MsgEdgeserverErrorResponse                      = 33,
            MsgPriceSubscriptionSnapshot                    = 34,
            MsgPriceSubscriptionUpdate                      = 35,
            MsgUserLoginRenewalRequest                      = 37,
            MsgLedgerRequestFailedResponse                  = 38,
            MsgNews                                         = 42,
            MsgReject                                       = 43,
            MsgCrossRequest                                 = 44,
            MsgCrossRequestResponse                         = 45,
            MsgNewOrderCross                                = 46,
            MsgTradeCaptureReport                           = 47,
            MsgTradeCaptureReportAck                        = 48,
            MsgSecurityDefinitionRequest                    = 49,
            MsgSecurityDefinition                           = 50,
            MsgOrderUpdate                                  = 51,
            MsgTestRequest                                  = 52,
            MsgFillUpdate                                   = 53,
            MsgFillUpdateResp                               = 54,
            MsgQuoteRequest                                 = 55,
            MsgQuoteRequestResponse                         = 56,
            MsgOrderFillUpdate                              = 57,
            MsgOrderFillUpdateResp                          = 58,
            MsgNewQuote                                     = 59,
            MsgQuoteResponse                                = 60,
            MsgQuoteCancel                                  = 61,
            MsgQuoteReplace                                 = 62,
            MsgQuoteCancelReject                            = 63,
            MsgOrderSmallPriceQtyRequest                    = 64,
            MsgUpdateExchangeSessionData                    = 65,
            MsgInternalFillRequest                          = 66,
            MsgNewTradeCapture                              = 67,
            MsgTradeReport                                  = 68,
            MsgTradeCaptureReplace                          = 69,
            MsgTradeCaptureCancel                           = 70,
            MsgAlgoServerBegin                              = 200,
            MsgGetAlgoDefinitionList                        = 205,
            MsgStartNewAlgoInstance                         = 206,
            MsgControlRunningAlgoInstance                   = 208,
            MsgGetRunningAlgoInstances                      = 209,
            MsgRequestAlgoServerStatus                      = 210,
            MsgRegisterOrderInterest                        = 211,
            MsgUnregisterOrderInterest                      = 212,
            MsgAlgoSideChannelRequest                       = 213,
            MsgGetAlgoDefinitionListResponse                = 245,
            MsgControlRunningAlgoInstanceReject             = 248,
            MsgGetRunningAlgoInstancesResponse              = 249,
            MsgAlgoSideChannelResponse                      = 250,
            MsgAlgoServerCliResponse                        = 251,
            MsgAlgoServerCliListUserAlgos                   = 252,
            MsgAlgoServerCliCancelAlgo                      = 253,
            MsgAlgoServerCliPauseAlgo                       = 254,
            MsgAlgoServerCliPrintInstrBook                  = 255,
            MsgAlgoServerCliSetLogLevel                     = 256,
            MsgAlgoServerCliResetUserInfo                   = 257,
            MsgAlgoServerCliDegrade                         = 258,
            MsgAlgoServerCliUpgrade                         = 259,
            MsgAlgoServerCliReloadExchangeSchedule          = 260,
            MsgAlgoServerCliPrintAlgojobStatistics          = 261,
            MsgAlgoServerCliDumprl                          = 262,
            MsgAlgoServerCliAddRoutingEntry                 = 263,
            MsgAlgoServerCliSetAdlPermission                = 264,
            MsgAlgoServerCliSetAdlCircularLoopCheck         = 265,
            MsgAlgoServerCliSetAlgoObvAccess                = 266,
            MsgAlgoServerCliSetEnableSsepr                  = 267,
            MsgAlgoServerCliRetryRecovery                   = 268,
            MsgAlgoServerCliTransferAlgos                   = 269,
            MsgAlgoServerCliClearPdsInstrument              = 270,
            MsgAlgoServerCliDropEmptyBook                   = 271,
            MsgAlgoServerCliSetMaxTtnotify                  = 272,
            MsgAlgoServerCliSetEnableAppToken               = 273,
            MsgAlgoServerCliRefreshAppToken                 = 274,
            MsgAlgoServerCliSetEnableAnalytics              = 275,
            MsgAlgoServerCliSetEnableBookieDownloadRetry    = 276,
            MsgAlgoServerCliHeartbeat                       = 277,
            MsgAlgoInstanceStatusReport                     = 281,
            MsgAlgoServerStatus                             = 283,
            MsgAlgoParamUpdate                              = 284,
            MsgAlgoSideChannelMsg                           = 285,
            MsgAlgoServerEnd                                = 299,
            MsgOrderBookDownloadRequest                     = 300,
            MsgOrderBookDownloadResponse                    = 301,
            MsgExecutionDownloadRequest                     = 302,
            MsgExecutionDownloadResponse                    = 303,
            MsgPositionRequest                              = 304,
            MsgPositionResponse                             = 305,
            MsgLedgerSyncRequest                            = 307,
            MsgLedgerSyncResponse                           = 308,
            MsgOrderDownloadRequest                         = 309,
            MsgOrderDownloadResponse                        = 310,
            MsgOrderHistoryRequest                          = 311,
            MsgOrderHistoryResponse                         = 312,
            MsgPdsChecksum                                  = 400,
            MsgCreditBroadcastIncremental                   = 500,
            MsgCreditBroadcastSnapshot                      = 501,
            MsgJunoSubscribe                                = 502,
            MsgJunoForceSnapshot                            = 503,
            MsgJunoModification                             = 504,
            MsgJunoCliPositionDownloadRequest               = 505,
            MsgJunoCliPositionDownloadResponse              = 506,
            MsgJunoUpCliRequest                             = 507,
            MsgJunoUpCliResponse                            = 508,
            MsgJunoReqCliRequest                            = 509,
            MsgJunoReqCliResponse                           = 510,
            MsgEdgeServerUngracefulConnectionClose          = 700,
            MsgEdgeServerTtnotifySubscriptionRequest        = 701,
            MsgEdgeServerTtnotifySubscriptionsRequest       = 702,
            MsgEdgeServerTtnotifySubscriptionResponse       = 703,
            MsgEdgeServerTtnotifySubscriptionsResponse      = 704,
            MsgEdgeServerTtnotifyData                       = 705,
            MsgEdgeServerCliFindUserSession                 = 706,
            MsgEdgeServerCliUserSessionAction               = 707,
            MsgEdgeServerCliResponse                        = 708,
            MsgEdgeServerKillUserPriceSubscriptions         = 709,
            MsgEdgeServerKillUserPriceSubscriptionsAck      = 710,
            MsgEdgeServerCliUserConflationChange            = 711,
            MsgEdgeServerCliConflationChange                = 712,
            MsgEdgeServerCliRlAction                        = 713,
            MsgEdgeServerCliConfigChange                    = 714,
            MsgEdgeServerCliReconnectRequest                = 715,
            MsgEdgeServerCliStateChange                     = 716,
            MsgEdgeServerCliPriceSubscriptionInfoRequest    = 717,
            MsgEdgeServerUserProxyPriceSubscription         = 730,
            MsgEdgeServerUserProxyPriceSubscriptionResponse = 731,
            MsgEdgeServerProxyStatus                        = 732,
            MsgEdgeServerCliProxyReconnectRequest           = 733,
            MsgEdgeServerUserProxySubscriptionBatch         = 734,
            MsgEdgeServerUserProxyForceUnsubscribe          = 735,
            MsgEdgeServerCliRebuildProductUsageRequest      = 736,
            MsgEdgeServerCliRemoteProxyLoggingRequest       = 737,
            MsgEdgeServerCloseRemoteUserSession             = 740,
            MsgEdgeServerCloseRemoteUserSessionAck          = 741,
            MsgEdgeServerCliRestartAccountRequest           = 742,
            MsgAseServerBegin                               = 800,
            MsgAseLogPricesRequest                          = 801,
            MsgAseLogLevelRequest                           = 802,
            MsgNewPositionReserveRequest                    = 803,
            MsgPositionReserveCancelReplaceRequest          = 804,
            MsgPositionReserveCancelRequest                 = 805,
            MsgPositionReserveUpdate                        = 806,
            MsgPositionReserveAck                           = 807,
            MsgAseServerEnd                                 = 899,
            MsgManualFillRequest                            = 900,
            MsgStagedNewOrder                               = 901,
            MsgStagedReplaceOrder                           = 902,
            MsgStagedCancelOrder                            = 903,
            MsgStagedUpdate                                 = 904,
            MsgLiquidationStatus                            = 905,
            MsgBouncerCliRequest                            = 906,
            MsgBouncerCliResponse                           = 907,
            MsgBulkOrder                                    = 908,
            MsgDebulkOrder                                  = 909,
            MsgAddToBulkedOrder                             = 910,
            MsgRemoveFromBulkedOrder                        = 911,
            MsgLockStagedOrder                              = 912,
            MsgUnlockStagedOrder                            = 913,
            MsgReleaseStagedOrderFills                      = 914,
            MsgEpiqsLastValueRequest                        = 1000,
            MsgEpiqsEpiq                                    = 1001,
            MsgOcCommand                                    = 1100,
            MsgOcCommandResponse                            = 1101,
            MsgOcTriageRequest                              = 1102,
            MsgOcTriageResponse                             = 1103,
            MsgOpsActionCancelOrders                        = 1200,
            MsgOpsTriageAction                              = 1300,
            MsgOpsTriageActionWithWire                      = 1301,
            MsgOpsTriageActionResponse                      = 1302,
            MsgOpsTriageTestRequest                         = 1303,
            MsgBookieCliRequest                             = 1400,
            MsgBookieCliResponse                            = 1401,
            MsgExchangeSessionDataNotification              = 1402,
            MsgImbookieCliRequest                           = 1451,
            MsgImbookieCliResponse                          = 1452,
            MsgLedgerReqCliRequest                          = 1500,
            MsgLedgerReqCliResponse                         = 1501,
            MsgLedgerUpCliRequest                           = 1502,
            MsgLedgerUpCliResponse                          = 1503,
            MsgWardenReqCliRequest                          = 1550,
            MsgWardenReqCliResponse                         = 1551,
            MsgKafkaUploaderCliRequest                      = 1600,
            MsgKafkaUploaderCliResponse                     = 1601,
            MsgPriceServerCliRequest                        = 1700,
            MsgPriceServerCliResponse                       = 1701,
            MsgFixadapterCliRequest                         = 1800,
            MsgFixadapterCliResponse                        = 1801,
            MsgMdsCliRequest                                = 1900,
            MsgMdsCliResponse                               = 1901,
            MsgOptionsRiskRequest                           = 2000,
            MsgOptionsRiskResponse                          = 2001,
        };

    };
}
