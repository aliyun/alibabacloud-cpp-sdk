// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidActivity, androidActivity_);
      DARABONBA_PTR_TO_JSON(AndroidBadgeAddNum, androidBadgeAddNum_);
      DARABONBA_PTR_TO_JSON(AndroidBadgeClass, androidBadgeClass_);
      DARABONBA_PTR_TO_JSON(AndroidBadgeSetNum, androidBadgeSetNum_);
      DARABONBA_PTR_TO_JSON(AndroidBigBody, androidBigBody_);
      DARABONBA_PTR_TO_JSON(AndroidBigPictureUrl, androidBigPictureUrl_);
      DARABONBA_PTR_TO_JSON(AndroidBigTitle, androidBigTitle_);
      DARABONBA_PTR_TO_JSON(AndroidExtParameters, androidExtParameters_);
      DARABONBA_PTR_TO_JSON(AndroidHonorTargetUserType, androidHonorTargetUserType_);
      DARABONBA_PTR_TO_JSON(AndroidHuaweiBusinessType, androidHuaweiBusinessType_);
      DARABONBA_PTR_TO_JSON(AndroidHuaweiLiveNotificationPayload, androidHuaweiLiveNotificationPayload_);
      DARABONBA_PTR_TO_JSON(AndroidHuaweiReceiptId, androidHuaweiReceiptId_);
      DARABONBA_PTR_TO_JSON(AndroidHuaweiTargetUserType, androidHuaweiTargetUserType_);
      DARABONBA_PTR_TO_JSON(AndroidImageUrl, androidImageUrl_);
      DARABONBA_PTR_TO_JSON(AndroidInboxBody, androidInboxBody_);
      DARABONBA_PTR_TO_JSON(AndroidMeizuNoticeMsgType, androidMeizuNoticeMsgType_);
      DARABONBA_PTR_TO_JSON(AndroidMessageHuaweiCategory, androidMessageHuaweiCategory_);
      DARABONBA_PTR_TO_JSON(AndroidMessageHuaweiUrgency, androidMessageHuaweiUrgency_);
      DARABONBA_PTR_TO_JSON(AndroidMessageOppoCategory, androidMessageOppoCategory_);
      DARABONBA_PTR_TO_JSON(AndroidMessageOppoNotifyLevel, androidMessageOppoNotifyLevel_);
      DARABONBA_PTR_TO_JSON(AndroidMessageVivoCategory, androidMessageVivoCategory_);
      DARABONBA_PTR_TO_JSON(AndroidMusic, androidMusic_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationBarPriority, androidNotificationBarPriority_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationBarType, androidNotificationBarType_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationChannel, androidNotificationChannel_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationGroup, androidNotificationGroup_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationHonorChannel, androidNotificationHonorChannel_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationHuaweiChannel, androidNotificationHuaweiChannel_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationNotifyId, androidNotificationNotifyId_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationThreadId, androidNotificationThreadId_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationVivoChannel, androidNotificationVivoChannel_);
      DARABONBA_PTR_TO_JSON(AndroidNotificationXiaomiChannel, androidNotificationXiaomiChannel_);
      DARABONBA_PTR_TO_JSON(AndroidNotifyType, androidNotifyType_);
      DARABONBA_PTR_TO_JSON(AndroidOpenType, androidOpenType_);
      DARABONBA_PTR_TO_JSON(AndroidOpenUrl, androidOpenUrl_);
      DARABONBA_PTR_TO_JSON(AndroidOppoDeleteIntentData, androidOppoDeleteIntentData_);
      DARABONBA_PTR_TO_JSON(AndroidOppoIntelligentIntent, androidOppoIntelligentIntent_);
      DARABONBA_PTR_TO_JSON(AndroidOppoIntentEnv, androidOppoIntentEnv_);
      DARABONBA_PTR_TO_JSON(AndroidOppoPrivateContentParameters, androidOppoPrivateContentParameters_);
      DARABONBA_PTR_TO_JSON(AndroidOppoPrivateMsgTemplateId, androidOppoPrivateMsgTemplateId_);
      DARABONBA_PTR_TO_JSON(AndroidOppoPrivateTitleParameters, androidOppoPrivateTitleParameters_);
      DARABONBA_PTR_TO_JSON(AndroidPopupActivity, androidPopupActivity_);
      DARABONBA_PTR_TO_JSON(AndroidPopupBody, androidPopupBody_);
      DARABONBA_PTR_TO_JSON(AndroidPopupTitle, androidPopupTitle_);
      DARABONBA_PTR_TO_JSON(AndroidRemind, androidRemind_);
      DARABONBA_PTR_TO_JSON(AndroidRenderStyle, androidRenderStyle_);
      DARABONBA_PTR_TO_JSON(AndroidTargetUserType, androidTargetUserType_);
      DARABONBA_PTR_TO_JSON(AndroidVivoLiveMessage, androidVivoLiveMessage_);
      DARABONBA_PTR_TO_JSON(AndroidVivoPushMode, androidVivoPushMode_);
      DARABONBA_PTR_TO_JSON(AndroidVivoReceiptId, androidVivoReceiptId_);
      DARABONBA_PTR_TO_JSON(AndroidVivoTemplateId, androidVivoTemplateId_);
      DARABONBA_PTR_TO_JSON(AndroidVivoTemplateParams, androidVivoTemplateParams_);
      DARABONBA_PTR_TO_JSON(AndroidXiaoMiActivity, androidXiaoMiActivity_);
      DARABONBA_PTR_TO_JSON(AndroidXiaoMiNotifyBody, androidXiaoMiNotifyBody_);
      DARABONBA_PTR_TO_JSON(AndroidXiaoMiNotifyTitle, androidXiaoMiNotifyTitle_);
      DARABONBA_PTR_TO_JSON(AndroidXiaomiBigPictureUrl, androidXiaomiBigPictureUrl_);
      DARABONBA_PTR_TO_JSON(AndroidXiaomiFocusParam, androidXiaomiFocusParam_);
      DARABONBA_PTR_TO_JSON(AndroidXiaomiFocusPics, androidXiaomiFocusPics_);
      DARABONBA_PTR_TO_JSON(AndroidXiaomiImageUrl, androidXiaomiImageUrl_);
      DARABONBA_PTR_TO_JSON(AndroidXiaomiTemplateId, androidXiaomiTemplateId_);
      DARABONBA_PTR_TO_JSON(AndroidXiaomiTemplateParams, androidXiaomiTemplateParams_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HarmonyAction, harmonyAction_);
      DARABONBA_PTR_TO_JSON(HarmonyActionType, harmonyActionType_);
      DARABONBA_PTR_TO_JSON(HarmonyBadgeAddNum, harmonyBadgeAddNum_);
      DARABONBA_PTR_TO_JSON(HarmonyBadgeSetNum, harmonyBadgeSetNum_);
      DARABONBA_PTR_TO_JSON(HarmonyCategory, harmonyCategory_);
      DARABONBA_PTR_TO_JSON(HarmonyExtParameters, harmonyExtParameters_);
      DARABONBA_PTR_TO_JSON(HarmonyExtensionExtraData, harmonyExtensionExtraData_);
      DARABONBA_PTR_TO_JSON(HarmonyExtensionPush, harmonyExtensionPush_);
      DARABONBA_PTR_TO_JSON(HarmonyImageUrl, harmonyImageUrl_);
      DARABONBA_PTR_TO_JSON(HarmonyInboxContent, harmonyInboxContent_);
      DARABONBA_PTR_TO_JSON(HarmonyLiveViewPayload, harmonyLiveViewPayload_);
      DARABONBA_PTR_TO_JSON(HarmonyNotificationSlotType, harmonyNotificationSlotType_);
      DARABONBA_PTR_TO_JSON(HarmonyNotifyId, harmonyNotifyId_);
      DARABONBA_PTR_TO_JSON(HarmonyReceiptId, harmonyReceiptId_);
      DARABONBA_PTR_TO_JSON(HarmonyRemind, harmonyRemind_);
      DARABONBA_PTR_TO_JSON(HarmonyRemindBody, harmonyRemindBody_);
      DARABONBA_PTR_TO_JSON(HarmonyRemindTitle, harmonyRemindTitle_);
      DARABONBA_PTR_TO_JSON(HarmonyRenderStyle, harmonyRenderStyle_);
      DARABONBA_PTR_TO_JSON(HarmonyTestMessage, harmonyTestMessage_);
      DARABONBA_PTR_TO_JSON(HarmonyUri, harmonyUri_);
      DARABONBA_PTR_TO_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
      DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
      DARABONBA_PTR_TO_JSON(SendChannels, sendChannels_);
      DARABONBA_PTR_TO_JSON(SendSpeed, sendSpeed_);
      DARABONBA_PTR_TO_JSON(SmsDelaySecs, smsDelaySecs_);
      DARABONBA_PTR_TO_JSON(SmsParams, smsParams_);
      DARABONBA_PTR_TO_JSON(SmsSendPolicy, smsSendPolicy_);
      DARABONBA_PTR_TO_JSON(SmsSignName, smsSignName_);
      DARABONBA_PTR_TO_JSON(SmsTemplateName, smsTemplateName_);
      DARABONBA_PTR_TO_JSON(StoreOffline, storeOffline_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Trim, trim_);
      DARABONBA_PTR_TO_JSON(iOSApnsEnv, iOSApnsEnv_);
      DARABONBA_PTR_TO_JSON(iOSBadge, iOSBadge_);
      DARABONBA_PTR_TO_JSON(iOSBadgeAutoIncrement, iOSBadgeAutoIncrement_);
      DARABONBA_PTR_TO_JSON(iOSExtParameters, iOSExtParameters_);
      DARABONBA_PTR_TO_JSON(iOSInterruptionLevel, iOSInterruptionLevel_);
      DARABONBA_PTR_TO_JSON(iOSLiveActivityAttributes, iOSLiveActivityAttributes_);
      DARABONBA_PTR_TO_JSON(iOSLiveActivityAttributesType, iOSLiveActivityAttributesType_);
      DARABONBA_PTR_TO_JSON(iOSLiveActivityContentState, iOSLiveActivityContentState_);
      DARABONBA_PTR_TO_JSON(iOSLiveActivityDismissalDate, iOSLiveActivityDismissalDate_);
      DARABONBA_PTR_TO_JSON(iOSLiveActivityEvent, iOSLiveActivityEvent_);
      DARABONBA_PTR_TO_JSON(iOSLiveActivityId, iOSLiveActivityId_);
      DARABONBA_PTR_TO_JSON(iOSLiveActivityStaleDate, iOSLiveActivityStaleDate_);
      DARABONBA_PTR_TO_JSON(iOSMusic, iOSMusic_);
      DARABONBA_PTR_TO_JSON(iOSMutableContent, iOSMutableContent_);
      DARABONBA_PTR_TO_JSON(iOSNotificationCategory, iOSNotificationCategory_);
      DARABONBA_PTR_TO_JSON(iOSNotificationCollapseId, iOSNotificationCollapseId_);
      DARABONBA_PTR_TO_JSON(iOSNotificationThreadId, iOSNotificationThreadId_);
      DARABONBA_PTR_TO_JSON(iOSRelevanceScore, iOSRelevanceScore_);
      DARABONBA_PTR_TO_JSON(iOSRemind, iOSRemind_);
      DARABONBA_PTR_TO_JSON(iOSRemindBody, iOSRemindBody_);
      DARABONBA_PTR_TO_JSON(iOSSilentNotification, iOSSilentNotification_);
      DARABONBA_PTR_TO_JSON(iOSSubtitle, iOSSubtitle_);
    };
    friend void from_json(const Darabonba::Json& j, PushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidActivity, androidActivity_);
      DARABONBA_PTR_FROM_JSON(AndroidBadgeAddNum, androidBadgeAddNum_);
      DARABONBA_PTR_FROM_JSON(AndroidBadgeClass, androidBadgeClass_);
      DARABONBA_PTR_FROM_JSON(AndroidBadgeSetNum, androidBadgeSetNum_);
      DARABONBA_PTR_FROM_JSON(AndroidBigBody, androidBigBody_);
      DARABONBA_PTR_FROM_JSON(AndroidBigPictureUrl, androidBigPictureUrl_);
      DARABONBA_PTR_FROM_JSON(AndroidBigTitle, androidBigTitle_);
      DARABONBA_PTR_FROM_JSON(AndroidExtParameters, androidExtParameters_);
      DARABONBA_PTR_FROM_JSON(AndroidHonorTargetUserType, androidHonorTargetUserType_);
      DARABONBA_PTR_FROM_JSON(AndroidHuaweiBusinessType, androidHuaweiBusinessType_);
      DARABONBA_PTR_FROM_JSON(AndroidHuaweiLiveNotificationPayload, androidHuaweiLiveNotificationPayload_);
      DARABONBA_PTR_FROM_JSON(AndroidHuaweiReceiptId, androidHuaweiReceiptId_);
      DARABONBA_PTR_FROM_JSON(AndroidHuaweiTargetUserType, androidHuaweiTargetUserType_);
      DARABONBA_PTR_FROM_JSON(AndroidImageUrl, androidImageUrl_);
      DARABONBA_PTR_FROM_JSON(AndroidInboxBody, androidInboxBody_);
      DARABONBA_PTR_FROM_JSON(AndroidMeizuNoticeMsgType, androidMeizuNoticeMsgType_);
      DARABONBA_PTR_FROM_JSON(AndroidMessageHuaweiCategory, androidMessageHuaweiCategory_);
      DARABONBA_PTR_FROM_JSON(AndroidMessageHuaweiUrgency, androidMessageHuaweiUrgency_);
      DARABONBA_PTR_FROM_JSON(AndroidMessageOppoCategory, androidMessageOppoCategory_);
      DARABONBA_PTR_FROM_JSON(AndroidMessageOppoNotifyLevel, androidMessageOppoNotifyLevel_);
      DARABONBA_PTR_FROM_JSON(AndroidMessageVivoCategory, androidMessageVivoCategory_);
      DARABONBA_PTR_FROM_JSON(AndroidMusic, androidMusic_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationBarPriority, androidNotificationBarPriority_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationBarType, androidNotificationBarType_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationChannel, androidNotificationChannel_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationGroup, androidNotificationGroup_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationHonorChannel, androidNotificationHonorChannel_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationHuaweiChannel, androidNotificationHuaweiChannel_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationNotifyId, androidNotificationNotifyId_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationThreadId, androidNotificationThreadId_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationVivoChannel, androidNotificationVivoChannel_);
      DARABONBA_PTR_FROM_JSON(AndroidNotificationXiaomiChannel, androidNotificationXiaomiChannel_);
      DARABONBA_PTR_FROM_JSON(AndroidNotifyType, androidNotifyType_);
      DARABONBA_PTR_FROM_JSON(AndroidOpenType, androidOpenType_);
      DARABONBA_PTR_FROM_JSON(AndroidOpenUrl, androidOpenUrl_);
      DARABONBA_PTR_FROM_JSON(AndroidOppoDeleteIntentData, androidOppoDeleteIntentData_);
      DARABONBA_PTR_FROM_JSON(AndroidOppoIntelligentIntent, androidOppoIntelligentIntent_);
      DARABONBA_PTR_FROM_JSON(AndroidOppoIntentEnv, androidOppoIntentEnv_);
      DARABONBA_PTR_FROM_JSON(AndroidOppoPrivateContentParameters, androidOppoPrivateContentParameters_);
      DARABONBA_PTR_FROM_JSON(AndroidOppoPrivateMsgTemplateId, androidOppoPrivateMsgTemplateId_);
      DARABONBA_PTR_FROM_JSON(AndroidOppoPrivateTitleParameters, androidOppoPrivateTitleParameters_);
      DARABONBA_PTR_FROM_JSON(AndroidPopupActivity, androidPopupActivity_);
      DARABONBA_PTR_FROM_JSON(AndroidPopupBody, androidPopupBody_);
      DARABONBA_PTR_FROM_JSON(AndroidPopupTitle, androidPopupTitle_);
      DARABONBA_PTR_FROM_JSON(AndroidRemind, androidRemind_);
      DARABONBA_PTR_FROM_JSON(AndroidRenderStyle, androidRenderStyle_);
      DARABONBA_PTR_FROM_JSON(AndroidTargetUserType, androidTargetUserType_);
      DARABONBA_PTR_FROM_JSON(AndroidVivoLiveMessage, androidVivoLiveMessage_);
      DARABONBA_PTR_FROM_JSON(AndroidVivoPushMode, androidVivoPushMode_);
      DARABONBA_PTR_FROM_JSON(AndroidVivoReceiptId, androidVivoReceiptId_);
      DARABONBA_PTR_FROM_JSON(AndroidVivoTemplateId, androidVivoTemplateId_);
      DARABONBA_PTR_FROM_JSON(AndroidVivoTemplateParams, androidVivoTemplateParams_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaoMiActivity, androidXiaoMiActivity_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaoMiNotifyBody, androidXiaoMiNotifyBody_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaoMiNotifyTitle, androidXiaoMiNotifyTitle_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaomiBigPictureUrl, androidXiaomiBigPictureUrl_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaomiFocusParam, androidXiaomiFocusParam_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaomiFocusPics, androidXiaomiFocusPics_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaomiImageUrl, androidXiaomiImageUrl_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaomiTemplateId, androidXiaomiTemplateId_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaomiTemplateParams, androidXiaomiTemplateParams_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HarmonyAction, harmonyAction_);
      DARABONBA_PTR_FROM_JSON(HarmonyActionType, harmonyActionType_);
      DARABONBA_PTR_FROM_JSON(HarmonyBadgeAddNum, harmonyBadgeAddNum_);
      DARABONBA_PTR_FROM_JSON(HarmonyBadgeSetNum, harmonyBadgeSetNum_);
      DARABONBA_PTR_FROM_JSON(HarmonyCategory, harmonyCategory_);
      DARABONBA_PTR_FROM_JSON(HarmonyExtParameters, harmonyExtParameters_);
      DARABONBA_PTR_FROM_JSON(HarmonyExtensionExtraData, harmonyExtensionExtraData_);
      DARABONBA_PTR_FROM_JSON(HarmonyExtensionPush, harmonyExtensionPush_);
      DARABONBA_PTR_FROM_JSON(HarmonyImageUrl, harmonyImageUrl_);
      DARABONBA_PTR_FROM_JSON(HarmonyInboxContent, harmonyInboxContent_);
      DARABONBA_PTR_FROM_JSON(HarmonyLiveViewPayload, harmonyLiveViewPayload_);
      DARABONBA_PTR_FROM_JSON(HarmonyNotificationSlotType, harmonyNotificationSlotType_);
      DARABONBA_PTR_FROM_JSON(HarmonyNotifyId, harmonyNotifyId_);
      DARABONBA_PTR_FROM_JSON(HarmonyReceiptId, harmonyReceiptId_);
      DARABONBA_PTR_FROM_JSON(HarmonyRemind, harmonyRemind_);
      DARABONBA_PTR_FROM_JSON(HarmonyRemindBody, harmonyRemindBody_);
      DARABONBA_PTR_FROM_JSON(HarmonyRemindTitle, harmonyRemindTitle_);
      DARABONBA_PTR_FROM_JSON(HarmonyRenderStyle, harmonyRenderStyle_);
      DARABONBA_PTR_FROM_JSON(HarmonyTestMessage, harmonyTestMessage_);
      DARABONBA_PTR_FROM_JSON(HarmonyUri, harmonyUri_);
      DARABONBA_PTR_FROM_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
      DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
      DARABONBA_PTR_FROM_JSON(SendChannels, sendChannels_);
      DARABONBA_PTR_FROM_JSON(SendSpeed, sendSpeed_);
      DARABONBA_PTR_FROM_JSON(SmsDelaySecs, smsDelaySecs_);
      DARABONBA_PTR_FROM_JSON(SmsParams, smsParams_);
      DARABONBA_PTR_FROM_JSON(SmsSendPolicy, smsSendPolicy_);
      DARABONBA_PTR_FROM_JSON(SmsSignName, smsSignName_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateName, smsTemplateName_);
      DARABONBA_PTR_FROM_JSON(StoreOffline, storeOffline_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Trim, trim_);
      DARABONBA_PTR_FROM_JSON(iOSApnsEnv, iOSApnsEnv_);
      DARABONBA_PTR_FROM_JSON(iOSBadge, iOSBadge_);
      DARABONBA_PTR_FROM_JSON(iOSBadgeAutoIncrement, iOSBadgeAutoIncrement_);
      DARABONBA_PTR_FROM_JSON(iOSExtParameters, iOSExtParameters_);
      DARABONBA_PTR_FROM_JSON(iOSInterruptionLevel, iOSInterruptionLevel_);
      DARABONBA_PTR_FROM_JSON(iOSLiveActivityAttributes, iOSLiveActivityAttributes_);
      DARABONBA_PTR_FROM_JSON(iOSLiveActivityAttributesType, iOSLiveActivityAttributesType_);
      DARABONBA_PTR_FROM_JSON(iOSLiveActivityContentState, iOSLiveActivityContentState_);
      DARABONBA_PTR_FROM_JSON(iOSLiveActivityDismissalDate, iOSLiveActivityDismissalDate_);
      DARABONBA_PTR_FROM_JSON(iOSLiveActivityEvent, iOSLiveActivityEvent_);
      DARABONBA_PTR_FROM_JSON(iOSLiveActivityId, iOSLiveActivityId_);
      DARABONBA_PTR_FROM_JSON(iOSLiveActivityStaleDate, iOSLiveActivityStaleDate_);
      DARABONBA_PTR_FROM_JSON(iOSMusic, iOSMusic_);
      DARABONBA_PTR_FROM_JSON(iOSMutableContent, iOSMutableContent_);
      DARABONBA_PTR_FROM_JSON(iOSNotificationCategory, iOSNotificationCategory_);
      DARABONBA_PTR_FROM_JSON(iOSNotificationCollapseId, iOSNotificationCollapseId_);
      DARABONBA_PTR_FROM_JSON(iOSNotificationThreadId, iOSNotificationThreadId_);
      DARABONBA_PTR_FROM_JSON(iOSRelevanceScore, iOSRelevanceScore_);
      DARABONBA_PTR_FROM_JSON(iOSRemind, iOSRemind_);
      DARABONBA_PTR_FROM_JSON(iOSRemindBody, iOSRemindBody_);
      DARABONBA_PTR_FROM_JSON(iOSSilentNotification, iOSSilentNotification_);
      DARABONBA_PTR_FROM_JSON(iOSSubtitle, iOSSubtitle_);
    };
    PushRequest() = default ;
    PushRequest(const PushRequest &) = default ;
    PushRequest(PushRequest &&) = default ;
    PushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushRequest() = default ;
    PushRequest& operator=(const PushRequest &) = default ;
    PushRequest& operator=(PushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidActivity_ == nullptr
        && this->androidBadgeAddNum_ == nullptr && this->androidBadgeClass_ == nullptr && this->androidBadgeSetNum_ == nullptr && this->androidBigBody_ == nullptr && this->androidBigPictureUrl_ == nullptr
        && this->androidBigTitle_ == nullptr && this->androidExtParameters_ == nullptr && this->androidHonorTargetUserType_ == nullptr && this->androidHuaweiBusinessType_ == nullptr && this->androidHuaweiLiveNotificationPayload_ == nullptr
        && this->androidHuaweiReceiptId_ == nullptr && this->androidHuaweiTargetUserType_ == nullptr && this->androidImageUrl_ == nullptr && this->androidInboxBody_ == nullptr && this->androidMeizuNoticeMsgType_ == nullptr
        && this->androidMessageHuaweiCategory_ == nullptr && this->androidMessageHuaweiUrgency_ == nullptr && this->androidMessageOppoCategory_ == nullptr && this->androidMessageOppoNotifyLevel_ == nullptr && this->androidMessageVivoCategory_ == nullptr
        && this->androidMusic_ == nullptr && this->androidNotificationBarPriority_ == nullptr && this->androidNotificationBarType_ == nullptr && this->androidNotificationChannel_ == nullptr && this->androidNotificationGroup_ == nullptr
        && this->androidNotificationHonorChannel_ == nullptr && this->androidNotificationHuaweiChannel_ == nullptr && this->androidNotificationNotifyId_ == nullptr && this->androidNotificationThreadId_ == nullptr && this->androidNotificationVivoChannel_ == nullptr
        && this->androidNotificationXiaomiChannel_ == nullptr && this->androidNotifyType_ == nullptr && this->androidOpenType_ == nullptr && this->androidOpenUrl_ == nullptr && this->androidOppoDeleteIntentData_ == nullptr
        && this->androidOppoIntelligentIntent_ == nullptr && this->androidOppoIntentEnv_ == nullptr && this->androidOppoPrivateContentParameters_ == nullptr && this->androidOppoPrivateMsgTemplateId_ == nullptr && this->androidOppoPrivateTitleParameters_ == nullptr
        && this->androidPopupActivity_ == nullptr && this->androidPopupBody_ == nullptr && this->androidPopupTitle_ == nullptr && this->androidRemind_ == nullptr && this->androidRenderStyle_ == nullptr
        && this->androidTargetUserType_ == nullptr && this->androidVivoLiveMessage_ == nullptr && this->androidVivoPushMode_ == nullptr && this->androidVivoReceiptId_ == nullptr && this->androidVivoTemplateId_ == nullptr
        && this->androidVivoTemplateParams_ == nullptr && this->androidXiaoMiActivity_ == nullptr && this->androidXiaoMiNotifyBody_ == nullptr && this->androidXiaoMiNotifyTitle_ == nullptr && this->androidXiaomiBigPictureUrl_ == nullptr
        && this->androidXiaomiFocusParam_ == nullptr && this->androidXiaomiFocusPics_ == nullptr && this->androidXiaomiImageUrl_ == nullptr && this->androidXiaomiTemplateId_ == nullptr && this->androidXiaomiTemplateParams_ == nullptr
        && this->appKey_ == nullptr && this->body_ == nullptr && this->deviceType_ == nullptr && this->expireTime_ == nullptr && this->harmonyAction_ == nullptr
        && this->harmonyActionType_ == nullptr && this->harmonyBadgeAddNum_ == nullptr && this->harmonyBadgeSetNum_ == nullptr && this->harmonyCategory_ == nullptr && this->harmonyExtParameters_ == nullptr
        && this->harmonyExtensionExtraData_ == nullptr && this->harmonyExtensionPush_ == nullptr && this->harmonyImageUrl_ == nullptr && this->harmonyInboxContent_ == nullptr && this->harmonyLiveViewPayload_ == nullptr
        && this->harmonyNotificationSlotType_ == nullptr && this->harmonyNotifyId_ == nullptr && this->harmonyReceiptId_ == nullptr && this->harmonyRemind_ == nullptr && this->harmonyRemindBody_ == nullptr
        && this->harmonyRemindTitle_ == nullptr && this->harmonyRenderStyle_ == nullptr && this->harmonyTestMessage_ == nullptr && this->harmonyUri_ == nullptr && this->idempotentToken_ == nullptr
        && this->jobKey_ == nullptr && this->pushTime_ == nullptr && this->pushType_ == nullptr && this->sendChannels_ == nullptr && this->sendSpeed_ == nullptr
        && this->smsDelaySecs_ == nullptr && this->smsParams_ == nullptr && this->smsSendPolicy_ == nullptr && this->smsSignName_ == nullptr && this->smsTemplateName_ == nullptr
        && this->storeOffline_ == nullptr && this->target_ == nullptr && this->targetValue_ == nullptr && this->title_ == nullptr && this->trim_ == nullptr
        && this->iOSApnsEnv_ == nullptr && this->iOSBadge_ == nullptr && this->iOSBadgeAutoIncrement_ == nullptr && this->iOSExtParameters_ == nullptr && this->iOSInterruptionLevel_ == nullptr
        && this->iOSLiveActivityAttributes_ == nullptr && this->iOSLiveActivityAttributesType_ == nullptr && this->iOSLiveActivityContentState_ == nullptr && this->iOSLiveActivityDismissalDate_ == nullptr && this->iOSLiveActivityEvent_ == nullptr
        && this->iOSLiveActivityId_ == nullptr && this->iOSLiveActivityStaleDate_ == nullptr && this->iOSMusic_ == nullptr && this->iOSMutableContent_ == nullptr && this->iOSNotificationCategory_ == nullptr
        && this->iOSNotificationCollapseId_ == nullptr && this->iOSNotificationThreadId_ == nullptr && this->iOSRelevanceScore_ == nullptr && this->iOSRemind_ == nullptr && this->iOSRemindBody_ == nullptr
        && this->iOSSilentNotification_ == nullptr && this->iOSSubtitle_ == nullptr; };
    // androidActivity Field Functions 
    bool hasAndroidActivity() const { return this->androidActivity_ != nullptr;};
    void deleteAndroidActivity() { this->androidActivity_ = nullptr;};
    inline string getAndroidActivity() const { DARABONBA_PTR_GET_DEFAULT(androidActivity_, "") };
    inline PushRequest& setAndroidActivity(string androidActivity) { DARABONBA_PTR_SET_VALUE(androidActivity_, androidActivity) };


    // androidBadgeAddNum Field Functions 
    bool hasAndroidBadgeAddNum() const { return this->androidBadgeAddNum_ != nullptr;};
    void deleteAndroidBadgeAddNum() { this->androidBadgeAddNum_ = nullptr;};
    inline int32_t getAndroidBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeAddNum_, 0) };
    inline PushRequest& setAndroidBadgeAddNum(int32_t androidBadgeAddNum) { DARABONBA_PTR_SET_VALUE(androidBadgeAddNum_, androidBadgeAddNum) };


    // androidBadgeClass Field Functions 
    bool hasAndroidBadgeClass() const { return this->androidBadgeClass_ != nullptr;};
    void deleteAndroidBadgeClass() { this->androidBadgeClass_ = nullptr;};
    inline string getAndroidBadgeClass() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeClass_, "") };
    inline PushRequest& setAndroidBadgeClass(string androidBadgeClass) { DARABONBA_PTR_SET_VALUE(androidBadgeClass_, androidBadgeClass) };


    // androidBadgeSetNum Field Functions 
    bool hasAndroidBadgeSetNum() const { return this->androidBadgeSetNum_ != nullptr;};
    void deleteAndroidBadgeSetNum() { this->androidBadgeSetNum_ = nullptr;};
    inline int32_t getAndroidBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeSetNum_, 0) };
    inline PushRequest& setAndroidBadgeSetNum(int32_t androidBadgeSetNum) { DARABONBA_PTR_SET_VALUE(androidBadgeSetNum_, androidBadgeSetNum) };


    // androidBigBody Field Functions 
    bool hasAndroidBigBody() const { return this->androidBigBody_ != nullptr;};
    void deleteAndroidBigBody() { this->androidBigBody_ = nullptr;};
    inline string getAndroidBigBody() const { DARABONBA_PTR_GET_DEFAULT(androidBigBody_, "") };
    inline PushRequest& setAndroidBigBody(string androidBigBody) { DARABONBA_PTR_SET_VALUE(androidBigBody_, androidBigBody) };


    // androidBigPictureUrl Field Functions 
    bool hasAndroidBigPictureUrl() const { return this->androidBigPictureUrl_ != nullptr;};
    void deleteAndroidBigPictureUrl() { this->androidBigPictureUrl_ = nullptr;};
    inline string getAndroidBigPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(androidBigPictureUrl_, "") };
    inline PushRequest& setAndroidBigPictureUrl(string androidBigPictureUrl) { DARABONBA_PTR_SET_VALUE(androidBigPictureUrl_, androidBigPictureUrl) };


    // androidBigTitle Field Functions 
    bool hasAndroidBigTitle() const { return this->androidBigTitle_ != nullptr;};
    void deleteAndroidBigTitle() { this->androidBigTitle_ = nullptr;};
    inline string getAndroidBigTitle() const { DARABONBA_PTR_GET_DEFAULT(androidBigTitle_, "") };
    inline PushRequest& setAndroidBigTitle(string androidBigTitle) { DARABONBA_PTR_SET_VALUE(androidBigTitle_, androidBigTitle) };


    // androidExtParameters Field Functions 
    bool hasAndroidExtParameters() const { return this->androidExtParameters_ != nullptr;};
    void deleteAndroidExtParameters() { this->androidExtParameters_ = nullptr;};
    inline string getAndroidExtParameters() const { DARABONBA_PTR_GET_DEFAULT(androidExtParameters_, "") };
    inline PushRequest& setAndroidExtParameters(string androidExtParameters) { DARABONBA_PTR_SET_VALUE(androidExtParameters_, androidExtParameters) };


    // androidHonorTargetUserType Field Functions 
    bool hasAndroidHonorTargetUserType() const { return this->androidHonorTargetUserType_ != nullptr;};
    void deleteAndroidHonorTargetUserType() { this->androidHonorTargetUserType_ = nullptr;};
    inline int32_t getAndroidHonorTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidHonorTargetUserType_, 0) };
    inline PushRequest& setAndroidHonorTargetUserType(int32_t androidHonorTargetUserType) { DARABONBA_PTR_SET_VALUE(androidHonorTargetUserType_, androidHonorTargetUserType) };


    // androidHuaweiBusinessType Field Functions 
    bool hasAndroidHuaweiBusinessType() const { return this->androidHuaweiBusinessType_ != nullptr;};
    void deleteAndroidHuaweiBusinessType() { this->androidHuaweiBusinessType_ = nullptr;};
    inline int32_t getAndroidHuaweiBusinessType() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiBusinessType_, 0) };
    inline PushRequest& setAndroidHuaweiBusinessType(int32_t androidHuaweiBusinessType) { DARABONBA_PTR_SET_VALUE(androidHuaweiBusinessType_, androidHuaweiBusinessType) };


    // androidHuaweiLiveNotificationPayload Field Functions 
    bool hasAndroidHuaweiLiveNotificationPayload() const { return this->androidHuaweiLiveNotificationPayload_ != nullptr;};
    void deleteAndroidHuaweiLiveNotificationPayload() { this->androidHuaweiLiveNotificationPayload_ = nullptr;};
    inline string getAndroidHuaweiLiveNotificationPayload() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiLiveNotificationPayload_, "") };
    inline PushRequest& setAndroidHuaweiLiveNotificationPayload(string androidHuaweiLiveNotificationPayload) { DARABONBA_PTR_SET_VALUE(androidHuaweiLiveNotificationPayload_, androidHuaweiLiveNotificationPayload) };


    // androidHuaweiReceiptId Field Functions 
    bool hasAndroidHuaweiReceiptId() const { return this->androidHuaweiReceiptId_ != nullptr;};
    void deleteAndroidHuaweiReceiptId() { this->androidHuaweiReceiptId_ = nullptr;};
    inline string getAndroidHuaweiReceiptId() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiReceiptId_, "") };
    inline PushRequest& setAndroidHuaweiReceiptId(string androidHuaweiReceiptId) { DARABONBA_PTR_SET_VALUE(androidHuaweiReceiptId_, androidHuaweiReceiptId) };


    // androidHuaweiTargetUserType Field Functions 
    bool hasAndroidHuaweiTargetUserType() const { return this->androidHuaweiTargetUserType_ != nullptr;};
    void deleteAndroidHuaweiTargetUserType() { this->androidHuaweiTargetUserType_ = nullptr;};
    inline int32_t getAndroidHuaweiTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiTargetUserType_, 0) };
    inline PushRequest& setAndroidHuaweiTargetUserType(int32_t androidHuaweiTargetUserType) { DARABONBA_PTR_SET_VALUE(androidHuaweiTargetUserType_, androidHuaweiTargetUserType) };


    // androidImageUrl Field Functions 
    bool hasAndroidImageUrl() const { return this->androidImageUrl_ != nullptr;};
    void deleteAndroidImageUrl() { this->androidImageUrl_ = nullptr;};
    inline string getAndroidImageUrl() const { DARABONBA_PTR_GET_DEFAULT(androidImageUrl_, "") };
    inline PushRequest& setAndroidImageUrl(string androidImageUrl) { DARABONBA_PTR_SET_VALUE(androidImageUrl_, androidImageUrl) };


    // androidInboxBody Field Functions 
    bool hasAndroidInboxBody() const { return this->androidInboxBody_ != nullptr;};
    void deleteAndroidInboxBody() { this->androidInboxBody_ = nullptr;};
    inline string getAndroidInboxBody() const { DARABONBA_PTR_GET_DEFAULT(androidInboxBody_, "") };
    inline PushRequest& setAndroidInboxBody(string androidInboxBody) { DARABONBA_PTR_SET_VALUE(androidInboxBody_, androidInboxBody) };


    // androidMeizuNoticeMsgType Field Functions 
    bool hasAndroidMeizuNoticeMsgType() const { return this->androidMeizuNoticeMsgType_ != nullptr;};
    void deleteAndroidMeizuNoticeMsgType() { this->androidMeizuNoticeMsgType_ = nullptr;};
    inline int32_t getAndroidMeizuNoticeMsgType() const { DARABONBA_PTR_GET_DEFAULT(androidMeizuNoticeMsgType_, 0) };
    inline PushRequest& setAndroidMeizuNoticeMsgType(int32_t androidMeizuNoticeMsgType) { DARABONBA_PTR_SET_VALUE(androidMeizuNoticeMsgType_, androidMeizuNoticeMsgType) };


    // androidMessageHuaweiCategory Field Functions 
    bool hasAndroidMessageHuaweiCategory() const { return this->androidMessageHuaweiCategory_ != nullptr;};
    void deleteAndroidMessageHuaweiCategory() { this->androidMessageHuaweiCategory_ = nullptr;};
    inline string getAndroidMessageHuaweiCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageHuaweiCategory_, "") };
    inline PushRequest& setAndroidMessageHuaweiCategory(string androidMessageHuaweiCategory) { DARABONBA_PTR_SET_VALUE(androidMessageHuaweiCategory_, androidMessageHuaweiCategory) };


    // androidMessageHuaweiUrgency Field Functions 
    bool hasAndroidMessageHuaweiUrgency() const { return this->androidMessageHuaweiUrgency_ != nullptr;};
    void deleteAndroidMessageHuaweiUrgency() { this->androidMessageHuaweiUrgency_ = nullptr;};
    inline string getAndroidMessageHuaweiUrgency() const { DARABONBA_PTR_GET_DEFAULT(androidMessageHuaweiUrgency_, "") };
    inline PushRequest& setAndroidMessageHuaweiUrgency(string androidMessageHuaweiUrgency) { DARABONBA_PTR_SET_VALUE(androidMessageHuaweiUrgency_, androidMessageHuaweiUrgency) };


    // androidMessageOppoCategory Field Functions 
    bool hasAndroidMessageOppoCategory() const { return this->androidMessageOppoCategory_ != nullptr;};
    void deleteAndroidMessageOppoCategory() { this->androidMessageOppoCategory_ = nullptr;};
    inline string getAndroidMessageOppoCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageOppoCategory_, "") };
    inline PushRequest& setAndroidMessageOppoCategory(string androidMessageOppoCategory) { DARABONBA_PTR_SET_VALUE(androidMessageOppoCategory_, androidMessageOppoCategory) };


    // androidMessageOppoNotifyLevel Field Functions 
    bool hasAndroidMessageOppoNotifyLevel() const { return this->androidMessageOppoNotifyLevel_ != nullptr;};
    void deleteAndroidMessageOppoNotifyLevel() { this->androidMessageOppoNotifyLevel_ = nullptr;};
    inline int32_t getAndroidMessageOppoNotifyLevel() const { DARABONBA_PTR_GET_DEFAULT(androidMessageOppoNotifyLevel_, 0) };
    inline PushRequest& setAndroidMessageOppoNotifyLevel(int32_t androidMessageOppoNotifyLevel) { DARABONBA_PTR_SET_VALUE(androidMessageOppoNotifyLevel_, androidMessageOppoNotifyLevel) };


    // androidMessageVivoCategory Field Functions 
    bool hasAndroidMessageVivoCategory() const { return this->androidMessageVivoCategory_ != nullptr;};
    void deleteAndroidMessageVivoCategory() { this->androidMessageVivoCategory_ = nullptr;};
    inline string getAndroidMessageVivoCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageVivoCategory_, "") };
    inline PushRequest& setAndroidMessageVivoCategory(string androidMessageVivoCategory) { DARABONBA_PTR_SET_VALUE(androidMessageVivoCategory_, androidMessageVivoCategory) };


    // androidMusic Field Functions 
    bool hasAndroidMusic() const { return this->androidMusic_ != nullptr;};
    void deleteAndroidMusic() { this->androidMusic_ = nullptr;};
    inline string getAndroidMusic() const { DARABONBA_PTR_GET_DEFAULT(androidMusic_, "") };
    inline PushRequest& setAndroidMusic(string androidMusic) { DARABONBA_PTR_SET_VALUE(androidMusic_, androidMusic) };


    // androidNotificationBarPriority Field Functions 
    bool hasAndroidNotificationBarPriority() const { return this->androidNotificationBarPriority_ != nullptr;};
    void deleteAndroidNotificationBarPriority() { this->androidNotificationBarPriority_ = nullptr;};
    inline int32_t getAndroidNotificationBarPriority() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationBarPriority_, 0) };
    inline PushRequest& setAndroidNotificationBarPriority(int32_t androidNotificationBarPriority) { DARABONBA_PTR_SET_VALUE(androidNotificationBarPriority_, androidNotificationBarPriority) };


    // androidNotificationBarType Field Functions 
    bool hasAndroidNotificationBarType() const { return this->androidNotificationBarType_ != nullptr;};
    void deleteAndroidNotificationBarType() { this->androidNotificationBarType_ = nullptr;};
    inline int32_t getAndroidNotificationBarType() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationBarType_, 0) };
    inline PushRequest& setAndroidNotificationBarType(int32_t androidNotificationBarType) { DARABONBA_PTR_SET_VALUE(androidNotificationBarType_, androidNotificationBarType) };


    // androidNotificationChannel Field Functions 
    bool hasAndroidNotificationChannel() const { return this->androidNotificationChannel_ != nullptr;};
    void deleteAndroidNotificationChannel() { this->androidNotificationChannel_ = nullptr;};
    inline string getAndroidNotificationChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationChannel_, "") };
    inline PushRequest& setAndroidNotificationChannel(string androidNotificationChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationChannel_, androidNotificationChannel) };


    // androidNotificationGroup Field Functions 
    bool hasAndroidNotificationGroup() const { return this->androidNotificationGroup_ != nullptr;};
    void deleteAndroidNotificationGroup() { this->androidNotificationGroup_ = nullptr;};
    inline string getAndroidNotificationGroup() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationGroup_, "") };
    inline PushRequest& setAndroidNotificationGroup(string androidNotificationGroup) { DARABONBA_PTR_SET_VALUE(androidNotificationGroup_, androidNotificationGroup) };


    // androidNotificationHonorChannel Field Functions 
    bool hasAndroidNotificationHonorChannel() const { return this->androidNotificationHonorChannel_ != nullptr;};
    void deleteAndroidNotificationHonorChannel() { this->androidNotificationHonorChannel_ = nullptr;};
    inline string getAndroidNotificationHonorChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationHonorChannel_, "") };
    inline PushRequest& setAndroidNotificationHonorChannel(string androidNotificationHonorChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationHonorChannel_, androidNotificationHonorChannel) };


    // androidNotificationHuaweiChannel Field Functions 
    bool hasAndroidNotificationHuaweiChannel() const { return this->androidNotificationHuaweiChannel_ != nullptr;};
    void deleteAndroidNotificationHuaweiChannel() { this->androidNotificationHuaweiChannel_ = nullptr;};
    inline string getAndroidNotificationHuaweiChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationHuaweiChannel_, "") };
    inline PushRequest& setAndroidNotificationHuaweiChannel(string androidNotificationHuaweiChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationHuaweiChannel_, androidNotificationHuaweiChannel) };


    // androidNotificationNotifyId Field Functions 
    bool hasAndroidNotificationNotifyId() const { return this->androidNotificationNotifyId_ != nullptr;};
    void deleteAndroidNotificationNotifyId() { this->androidNotificationNotifyId_ = nullptr;};
    inline int32_t getAndroidNotificationNotifyId() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationNotifyId_, 0) };
    inline PushRequest& setAndroidNotificationNotifyId(int32_t androidNotificationNotifyId) { DARABONBA_PTR_SET_VALUE(androidNotificationNotifyId_, androidNotificationNotifyId) };


    // androidNotificationThreadId Field Functions 
    bool hasAndroidNotificationThreadId() const { return this->androidNotificationThreadId_ != nullptr;};
    void deleteAndroidNotificationThreadId() { this->androidNotificationThreadId_ = nullptr;};
    inline string getAndroidNotificationThreadId() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationThreadId_, "") };
    inline PushRequest& setAndroidNotificationThreadId(string androidNotificationThreadId) { DARABONBA_PTR_SET_VALUE(androidNotificationThreadId_, androidNotificationThreadId) };


    // androidNotificationVivoChannel Field Functions 
    bool hasAndroidNotificationVivoChannel() const { return this->androidNotificationVivoChannel_ != nullptr;};
    void deleteAndroidNotificationVivoChannel() { this->androidNotificationVivoChannel_ = nullptr;};
    inline string getAndroidNotificationVivoChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationVivoChannel_, "") };
    inline PushRequest& setAndroidNotificationVivoChannel(string androidNotificationVivoChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationVivoChannel_, androidNotificationVivoChannel) };


    // androidNotificationXiaomiChannel Field Functions 
    bool hasAndroidNotificationXiaomiChannel() const { return this->androidNotificationXiaomiChannel_ != nullptr;};
    void deleteAndroidNotificationXiaomiChannel() { this->androidNotificationXiaomiChannel_ = nullptr;};
    inline string getAndroidNotificationXiaomiChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationXiaomiChannel_, "") };
    inline PushRequest& setAndroidNotificationXiaomiChannel(string androidNotificationXiaomiChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationXiaomiChannel_, androidNotificationXiaomiChannel) };


    // androidNotifyType Field Functions 
    bool hasAndroidNotifyType() const { return this->androidNotifyType_ != nullptr;};
    void deleteAndroidNotifyType() { this->androidNotifyType_ = nullptr;};
    inline string getAndroidNotifyType() const { DARABONBA_PTR_GET_DEFAULT(androidNotifyType_, "") };
    inline PushRequest& setAndroidNotifyType(string androidNotifyType) { DARABONBA_PTR_SET_VALUE(androidNotifyType_, androidNotifyType) };


    // androidOpenType Field Functions 
    bool hasAndroidOpenType() const { return this->androidOpenType_ != nullptr;};
    void deleteAndroidOpenType() { this->androidOpenType_ = nullptr;};
    inline string getAndroidOpenType() const { DARABONBA_PTR_GET_DEFAULT(androidOpenType_, "") };
    inline PushRequest& setAndroidOpenType(string androidOpenType) { DARABONBA_PTR_SET_VALUE(androidOpenType_, androidOpenType) };


    // androidOpenUrl Field Functions 
    bool hasAndroidOpenUrl() const { return this->androidOpenUrl_ != nullptr;};
    void deleteAndroidOpenUrl() { this->androidOpenUrl_ = nullptr;};
    inline string getAndroidOpenUrl() const { DARABONBA_PTR_GET_DEFAULT(androidOpenUrl_, "") };
    inline PushRequest& setAndroidOpenUrl(string androidOpenUrl) { DARABONBA_PTR_SET_VALUE(androidOpenUrl_, androidOpenUrl) };


    // androidOppoDeleteIntentData Field Functions 
    bool hasAndroidOppoDeleteIntentData() const { return this->androidOppoDeleteIntentData_ != nullptr;};
    void deleteAndroidOppoDeleteIntentData() { this->androidOppoDeleteIntentData_ = nullptr;};
    inline string getAndroidOppoDeleteIntentData() const { DARABONBA_PTR_GET_DEFAULT(androidOppoDeleteIntentData_, "") };
    inline PushRequest& setAndroidOppoDeleteIntentData(string androidOppoDeleteIntentData) { DARABONBA_PTR_SET_VALUE(androidOppoDeleteIntentData_, androidOppoDeleteIntentData) };


    // androidOppoIntelligentIntent Field Functions 
    bool hasAndroidOppoIntelligentIntent() const { return this->androidOppoIntelligentIntent_ != nullptr;};
    void deleteAndroidOppoIntelligentIntent() { this->androidOppoIntelligentIntent_ = nullptr;};
    inline string getAndroidOppoIntelligentIntent() const { DARABONBA_PTR_GET_DEFAULT(androidOppoIntelligentIntent_, "") };
    inline PushRequest& setAndroidOppoIntelligentIntent(string androidOppoIntelligentIntent) { DARABONBA_PTR_SET_VALUE(androidOppoIntelligentIntent_, androidOppoIntelligentIntent) };


    // androidOppoIntentEnv Field Functions 
    bool hasAndroidOppoIntentEnv() const { return this->androidOppoIntentEnv_ != nullptr;};
    void deleteAndroidOppoIntentEnv() { this->androidOppoIntentEnv_ = nullptr;};
    inline int32_t getAndroidOppoIntentEnv() const { DARABONBA_PTR_GET_DEFAULT(androidOppoIntentEnv_, 0) };
    inline PushRequest& setAndroidOppoIntentEnv(int32_t androidOppoIntentEnv) { DARABONBA_PTR_SET_VALUE(androidOppoIntentEnv_, androidOppoIntentEnv) };


    // androidOppoPrivateContentParameters Field Functions 
    bool hasAndroidOppoPrivateContentParameters() const { return this->androidOppoPrivateContentParameters_ != nullptr;};
    void deleteAndroidOppoPrivateContentParameters() { this->androidOppoPrivateContentParameters_ = nullptr;};
    inline const map<string, string> & getAndroidOppoPrivateContentParameters() const { DARABONBA_PTR_GET_CONST(androidOppoPrivateContentParameters_, map<string, string>) };
    inline map<string, string> getAndroidOppoPrivateContentParameters() { DARABONBA_PTR_GET(androidOppoPrivateContentParameters_, map<string, string>) };
    inline PushRequest& setAndroidOppoPrivateContentParameters(const map<string, string> & androidOppoPrivateContentParameters) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateContentParameters_, androidOppoPrivateContentParameters) };
    inline PushRequest& setAndroidOppoPrivateContentParameters(map<string, string> && androidOppoPrivateContentParameters) { DARABONBA_PTR_SET_RVALUE(androidOppoPrivateContentParameters_, androidOppoPrivateContentParameters) };


    // androidOppoPrivateMsgTemplateId Field Functions 
    bool hasAndroidOppoPrivateMsgTemplateId() const { return this->androidOppoPrivateMsgTemplateId_ != nullptr;};
    void deleteAndroidOppoPrivateMsgTemplateId() { this->androidOppoPrivateMsgTemplateId_ = nullptr;};
    inline string getAndroidOppoPrivateMsgTemplateId() const { DARABONBA_PTR_GET_DEFAULT(androidOppoPrivateMsgTemplateId_, "") };
    inline PushRequest& setAndroidOppoPrivateMsgTemplateId(string androidOppoPrivateMsgTemplateId) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateMsgTemplateId_, androidOppoPrivateMsgTemplateId) };


    // androidOppoPrivateTitleParameters Field Functions 
    bool hasAndroidOppoPrivateTitleParameters() const { return this->androidOppoPrivateTitleParameters_ != nullptr;};
    void deleteAndroidOppoPrivateTitleParameters() { this->androidOppoPrivateTitleParameters_ = nullptr;};
    inline const map<string, string> & getAndroidOppoPrivateTitleParameters() const { DARABONBA_PTR_GET_CONST(androidOppoPrivateTitleParameters_, map<string, string>) };
    inline map<string, string> getAndroidOppoPrivateTitleParameters() { DARABONBA_PTR_GET(androidOppoPrivateTitleParameters_, map<string, string>) };
    inline PushRequest& setAndroidOppoPrivateTitleParameters(const map<string, string> & androidOppoPrivateTitleParameters) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateTitleParameters_, androidOppoPrivateTitleParameters) };
    inline PushRequest& setAndroidOppoPrivateTitleParameters(map<string, string> && androidOppoPrivateTitleParameters) { DARABONBA_PTR_SET_RVALUE(androidOppoPrivateTitleParameters_, androidOppoPrivateTitleParameters) };


    // androidPopupActivity Field Functions 
    bool hasAndroidPopupActivity() const { return this->androidPopupActivity_ != nullptr;};
    void deleteAndroidPopupActivity() { this->androidPopupActivity_ = nullptr;};
    inline string getAndroidPopupActivity() const { DARABONBA_PTR_GET_DEFAULT(androidPopupActivity_, "") };
    inline PushRequest& setAndroidPopupActivity(string androidPopupActivity) { DARABONBA_PTR_SET_VALUE(androidPopupActivity_, androidPopupActivity) };


    // androidPopupBody Field Functions 
    bool hasAndroidPopupBody() const { return this->androidPopupBody_ != nullptr;};
    void deleteAndroidPopupBody() { this->androidPopupBody_ = nullptr;};
    inline string getAndroidPopupBody() const { DARABONBA_PTR_GET_DEFAULT(androidPopupBody_, "") };
    inline PushRequest& setAndroidPopupBody(string androidPopupBody) { DARABONBA_PTR_SET_VALUE(androidPopupBody_, androidPopupBody) };


    // androidPopupTitle Field Functions 
    bool hasAndroidPopupTitle() const { return this->androidPopupTitle_ != nullptr;};
    void deleteAndroidPopupTitle() { this->androidPopupTitle_ = nullptr;};
    inline string getAndroidPopupTitle() const { DARABONBA_PTR_GET_DEFAULT(androidPopupTitle_, "") };
    inline PushRequest& setAndroidPopupTitle(string androidPopupTitle) { DARABONBA_PTR_SET_VALUE(androidPopupTitle_, androidPopupTitle) };


    // androidRemind Field Functions 
    bool hasAndroidRemind() const { return this->androidRemind_ != nullptr;};
    void deleteAndroidRemind() { this->androidRemind_ = nullptr;};
    inline bool getAndroidRemind() const { DARABONBA_PTR_GET_DEFAULT(androidRemind_, false) };
    inline PushRequest& setAndroidRemind(bool androidRemind) { DARABONBA_PTR_SET_VALUE(androidRemind_, androidRemind) };


    // androidRenderStyle Field Functions 
    bool hasAndroidRenderStyle() const { return this->androidRenderStyle_ != nullptr;};
    void deleteAndroidRenderStyle() { this->androidRenderStyle_ = nullptr;};
    inline int32_t getAndroidRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(androidRenderStyle_, 0) };
    inline PushRequest& setAndroidRenderStyle(int32_t androidRenderStyle) { DARABONBA_PTR_SET_VALUE(androidRenderStyle_, androidRenderStyle) };


    // androidTargetUserType Field Functions 
    bool hasAndroidTargetUserType() const { return this->androidTargetUserType_ != nullptr;};
    void deleteAndroidTargetUserType() { this->androidTargetUserType_ = nullptr;};
    inline int32_t getAndroidTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidTargetUserType_, 0) };
    inline PushRequest& setAndroidTargetUserType(int32_t androidTargetUserType) { DARABONBA_PTR_SET_VALUE(androidTargetUserType_, androidTargetUserType) };


    // androidVivoLiveMessage Field Functions 
    bool hasAndroidVivoLiveMessage() const { return this->androidVivoLiveMessage_ != nullptr;};
    void deleteAndroidVivoLiveMessage() { this->androidVivoLiveMessage_ = nullptr;};
    inline string getAndroidVivoLiveMessage() const { DARABONBA_PTR_GET_DEFAULT(androidVivoLiveMessage_, "") };
    inline PushRequest& setAndroidVivoLiveMessage(string androidVivoLiveMessage) { DARABONBA_PTR_SET_VALUE(androidVivoLiveMessage_, androidVivoLiveMessage) };


    // androidVivoPushMode Field Functions 
    bool hasAndroidVivoPushMode() const { return this->androidVivoPushMode_ != nullptr;};
    void deleteAndroidVivoPushMode() { this->androidVivoPushMode_ = nullptr;};
    inline int32_t getAndroidVivoPushMode() const { DARABONBA_PTR_GET_DEFAULT(androidVivoPushMode_, 0) };
    inline PushRequest& setAndroidVivoPushMode(int32_t androidVivoPushMode) { DARABONBA_PTR_SET_VALUE(androidVivoPushMode_, androidVivoPushMode) };


    // androidVivoReceiptId Field Functions 
    bool hasAndroidVivoReceiptId() const { return this->androidVivoReceiptId_ != nullptr;};
    void deleteAndroidVivoReceiptId() { this->androidVivoReceiptId_ = nullptr;};
    inline string getAndroidVivoReceiptId() const { DARABONBA_PTR_GET_DEFAULT(androidVivoReceiptId_, "") };
    inline PushRequest& setAndroidVivoReceiptId(string androidVivoReceiptId) { DARABONBA_PTR_SET_VALUE(androidVivoReceiptId_, androidVivoReceiptId) };


    // androidVivoTemplateId Field Functions 
    bool hasAndroidVivoTemplateId() const { return this->androidVivoTemplateId_ != nullptr;};
    void deleteAndroidVivoTemplateId() { this->androidVivoTemplateId_ = nullptr;};
    inline string getAndroidVivoTemplateId() const { DARABONBA_PTR_GET_DEFAULT(androidVivoTemplateId_, "") };
    inline PushRequest& setAndroidVivoTemplateId(string androidVivoTemplateId) { DARABONBA_PTR_SET_VALUE(androidVivoTemplateId_, androidVivoTemplateId) };


    // androidVivoTemplateParams Field Functions 
    bool hasAndroidVivoTemplateParams() const { return this->androidVivoTemplateParams_ != nullptr;};
    void deleteAndroidVivoTemplateParams() { this->androidVivoTemplateParams_ = nullptr;};
    inline string getAndroidVivoTemplateParams() const { DARABONBA_PTR_GET_DEFAULT(androidVivoTemplateParams_, "") };
    inline PushRequest& setAndroidVivoTemplateParams(string androidVivoTemplateParams) { DARABONBA_PTR_SET_VALUE(androidVivoTemplateParams_, androidVivoTemplateParams) };


    // androidXiaoMiActivity Field Functions 
    bool hasAndroidXiaoMiActivity() const { return this->androidXiaoMiActivity_ != nullptr;};
    void deleteAndroidXiaoMiActivity() { this->androidXiaoMiActivity_ = nullptr;};
    inline string getAndroidXiaoMiActivity() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiActivity_, "") };
    inline PushRequest& setAndroidXiaoMiActivity(string androidXiaoMiActivity) { DARABONBA_PTR_SET_VALUE(androidXiaoMiActivity_, androidXiaoMiActivity) };


    // androidXiaoMiNotifyBody Field Functions 
    bool hasAndroidXiaoMiNotifyBody() const { return this->androidXiaoMiNotifyBody_ != nullptr;};
    void deleteAndroidXiaoMiNotifyBody() { this->androidXiaoMiNotifyBody_ = nullptr;};
    inline string getAndroidXiaoMiNotifyBody() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiNotifyBody_, "") };
    inline PushRequest& setAndroidXiaoMiNotifyBody(string androidXiaoMiNotifyBody) { DARABONBA_PTR_SET_VALUE(androidXiaoMiNotifyBody_, androidXiaoMiNotifyBody) };


    // androidXiaoMiNotifyTitle Field Functions 
    bool hasAndroidXiaoMiNotifyTitle() const { return this->androidXiaoMiNotifyTitle_ != nullptr;};
    void deleteAndroidXiaoMiNotifyTitle() { this->androidXiaoMiNotifyTitle_ = nullptr;};
    inline string getAndroidXiaoMiNotifyTitle() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiNotifyTitle_, "") };
    inline PushRequest& setAndroidXiaoMiNotifyTitle(string androidXiaoMiNotifyTitle) { DARABONBA_PTR_SET_VALUE(androidXiaoMiNotifyTitle_, androidXiaoMiNotifyTitle) };


    // androidXiaomiBigPictureUrl Field Functions 
    bool hasAndroidXiaomiBigPictureUrl() const { return this->androidXiaomiBigPictureUrl_ != nullptr;};
    void deleteAndroidXiaomiBigPictureUrl() { this->androidXiaomiBigPictureUrl_ = nullptr;};
    inline string getAndroidXiaomiBigPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiBigPictureUrl_, "") };
    inline PushRequest& setAndroidXiaomiBigPictureUrl(string androidXiaomiBigPictureUrl) { DARABONBA_PTR_SET_VALUE(androidXiaomiBigPictureUrl_, androidXiaomiBigPictureUrl) };


    // androidXiaomiFocusParam Field Functions 
    bool hasAndroidXiaomiFocusParam() const { return this->androidXiaomiFocusParam_ != nullptr;};
    void deleteAndroidXiaomiFocusParam() { this->androidXiaomiFocusParam_ = nullptr;};
    inline string getAndroidXiaomiFocusParam() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiFocusParam_, "") };
    inline PushRequest& setAndroidXiaomiFocusParam(string androidXiaomiFocusParam) { DARABONBA_PTR_SET_VALUE(androidXiaomiFocusParam_, androidXiaomiFocusParam) };


    // androidXiaomiFocusPics Field Functions 
    bool hasAndroidXiaomiFocusPics() const { return this->androidXiaomiFocusPics_ != nullptr;};
    void deleteAndroidXiaomiFocusPics() { this->androidXiaomiFocusPics_ = nullptr;};
    inline string getAndroidXiaomiFocusPics() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiFocusPics_, "") };
    inline PushRequest& setAndroidXiaomiFocusPics(string androidXiaomiFocusPics) { DARABONBA_PTR_SET_VALUE(androidXiaomiFocusPics_, androidXiaomiFocusPics) };


    // androidXiaomiImageUrl Field Functions 
    bool hasAndroidXiaomiImageUrl() const { return this->androidXiaomiImageUrl_ != nullptr;};
    void deleteAndroidXiaomiImageUrl() { this->androidXiaomiImageUrl_ = nullptr;};
    inline string getAndroidXiaomiImageUrl() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiImageUrl_, "") };
    inline PushRequest& setAndroidXiaomiImageUrl(string androidXiaomiImageUrl) { DARABONBA_PTR_SET_VALUE(androidXiaomiImageUrl_, androidXiaomiImageUrl) };


    // androidXiaomiTemplateId Field Functions 
    bool hasAndroidXiaomiTemplateId() const { return this->androidXiaomiTemplateId_ != nullptr;};
    void deleteAndroidXiaomiTemplateId() { this->androidXiaomiTemplateId_ = nullptr;};
    inline string getAndroidXiaomiTemplateId() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiTemplateId_, "") };
    inline PushRequest& setAndroidXiaomiTemplateId(string androidXiaomiTemplateId) { DARABONBA_PTR_SET_VALUE(androidXiaomiTemplateId_, androidXiaomiTemplateId) };


    // androidXiaomiTemplateParams Field Functions 
    bool hasAndroidXiaomiTemplateParams() const { return this->androidXiaomiTemplateParams_ != nullptr;};
    void deleteAndroidXiaomiTemplateParams() { this->androidXiaomiTemplateParams_ = nullptr;};
    inline string getAndroidXiaomiTemplateParams() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiTemplateParams_, "") };
    inline PushRequest& setAndroidXiaomiTemplateParams(string androidXiaomiTemplateParams) { DARABONBA_PTR_SET_VALUE(androidXiaomiTemplateParams_, androidXiaomiTemplateParams) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline PushRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PushRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline PushRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline PushRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // harmonyAction Field Functions 
    bool hasHarmonyAction() const { return this->harmonyAction_ != nullptr;};
    void deleteHarmonyAction() { this->harmonyAction_ = nullptr;};
    inline string getHarmonyAction() const { DARABONBA_PTR_GET_DEFAULT(harmonyAction_, "") };
    inline PushRequest& setHarmonyAction(string harmonyAction) { DARABONBA_PTR_SET_VALUE(harmonyAction_, harmonyAction) };


    // harmonyActionType Field Functions 
    bool hasHarmonyActionType() const { return this->harmonyActionType_ != nullptr;};
    void deleteHarmonyActionType() { this->harmonyActionType_ = nullptr;};
    inline string getHarmonyActionType() const { DARABONBA_PTR_GET_DEFAULT(harmonyActionType_, "") };
    inline PushRequest& setHarmonyActionType(string harmonyActionType) { DARABONBA_PTR_SET_VALUE(harmonyActionType_, harmonyActionType) };


    // harmonyBadgeAddNum Field Functions 
    bool hasHarmonyBadgeAddNum() const { return this->harmonyBadgeAddNum_ != nullptr;};
    void deleteHarmonyBadgeAddNum() { this->harmonyBadgeAddNum_ = nullptr;};
    inline int32_t getHarmonyBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(harmonyBadgeAddNum_, 0) };
    inline PushRequest& setHarmonyBadgeAddNum(int32_t harmonyBadgeAddNum) { DARABONBA_PTR_SET_VALUE(harmonyBadgeAddNum_, harmonyBadgeAddNum) };


    // harmonyBadgeSetNum Field Functions 
    bool hasHarmonyBadgeSetNum() const { return this->harmonyBadgeSetNum_ != nullptr;};
    void deleteHarmonyBadgeSetNum() { this->harmonyBadgeSetNum_ = nullptr;};
    inline int32_t getHarmonyBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(harmonyBadgeSetNum_, 0) };
    inline PushRequest& setHarmonyBadgeSetNum(int32_t harmonyBadgeSetNum) { DARABONBA_PTR_SET_VALUE(harmonyBadgeSetNum_, harmonyBadgeSetNum) };


    // harmonyCategory Field Functions 
    bool hasHarmonyCategory() const { return this->harmonyCategory_ != nullptr;};
    void deleteHarmonyCategory() { this->harmonyCategory_ = nullptr;};
    inline string getHarmonyCategory() const { DARABONBA_PTR_GET_DEFAULT(harmonyCategory_, "") };
    inline PushRequest& setHarmonyCategory(string harmonyCategory) { DARABONBA_PTR_SET_VALUE(harmonyCategory_, harmonyCategory) };


    // harmonyExtParameters Field Functions 
    bool hasHarmonyExtParameters() const { return this->harmonyExtParameters_ != nullptr;};
    void deleteHarmonyExtParameters() { this->harmonyExtParameters_ = nullptr;};
    inline string getHarmonyExtParameters() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtParameters_, "") };
    inline PushRequest& setHarmonyExtParameters(string harmonyExtParameters) { DARABONBA_PTR_SET_VALUE(harmonyExtParameters_, harmonyExtParameters) };


    // harmonyExtensionExtraData Field Functions 
    bool hasHarmonyExtensionExtraData() const { return this->harmonyExtensionExtraData_ != nullptr;};
    void deleteHarmonyExtensionExtraData() { this->harmonyExtensionExtraData_ = nullptr;};
    inline string getHarmonyExtensionExtraData() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtensionExtraData_, "") };
    inline PushRequest& setHarmonyExtensionExtraData(string harmonyExtensionExtraData) { DARABONBA_PTR_SET_VALUE(harmonyExtensionExtraData_, harmonyExtensionExtraData) };


    // harmonyExtensionPush Field Functions 
    bool hasHarmonyExtensionPush() const { return this->harmonyExtensionPush_ != nullptr;};
    void deleteHarmonyExtensionPush() { this->harmonyExtensionPush_ = nullptr;};
    inline bool getHarmonyExtensionPush() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtensionPush_, false) };
    inline PushRequest& setHarmonyExtensionPush(bool harmonyExtensionPush) { DARABONBA_PTR_SET_VALUE(harmonyExtensionPush_, harmonyExtensionPush) };


    // harmonyImageUrl Field Functions 
    bool hasHarmonyImageUrl() const { return this->harmonyImageUrl_ != nullptr;};
    void deleteHarmonyImageUrl() { this->harmonyImageUrl_ = nullptr;};
    inline string getHarmonyImageUrl() const { DARABONBA_PTR_GET_DEFAULT(harmonyImageUrl_, "") };
    inline PushRequest& setHarmonyImageUrl(string harmonyImageUrl) { DARABONBA_PTR_SET_VALUE(harmonyImageUrl_, harmonyImageUrl) };


    // harmonyInboxContent Field Functions 
    bool hasHarmonyInboxContent() const { return this->harmonyInboxContent_ != nullptr;};
    void deleteHarmonyInboxContent() { this->harmonyInboxContent_ = nullptr;};
    inline string getHarmonyInboxContent() const { DARABONBA_PTR_GET_DEFAULT(harmonyInboxContent_, "") };
    inline PushRequest& setHarmonyInboxContent(string harmonyInboxContent) { DARABONBA_PTR_SET_VALUE(harmonyInboxContent_, harmonyInboxContent) };


    // harmonyLiveViewPayload Field Functions 
    bool hasHarmonyLiveViewPayload() const { return this->harmonyLiveViewPayload_ != nullptr;};
    void deleteHarmonyLiveViewPayload() { this->harmonyLiveViewPayload_ = nullptr;};
    inline string getHarmonyLiveViewPayload() const { DARABONBA_PTR_GET_DEFAULT(harmonyLiveViewPayload_, "") };
    inline PushRequest& setHarmonyLiveViewPayload(string harmonyLiveViewPayload) { DARABONBA_PTR_SET_VALUE(harmonyLiveViewPayload_, harmonyLiveViewPayload) };


    // harmonyNotificationSlotType Field Functions 
    bool hasHarmonyNotificationSlotType() const { return this->harmonyNotificationSlotType_ != nullptr;};
    void deleteHarmonyNotificationSlotType() { this->harmonyNotificationSlotType_ = nullptr;};
    inline string getHarmonyNotificationSlotType() const { DARABONBA_PTR_GET_DEFAULT(harmonyNotificationSlotType_, "") };
    inline PushRequest& setHarmonyNotificationSlotType(string harmonyNotificationSlotType) { DARABONBA_PTR_SET_VALUE(harmonyNotificationSlotType_, harmonyNotificationSlotType) };


    // harmonyNotifyId Field Functions 
    bool hasHarmonyNotifyId() const { return this->harmonyNotifyId_ != nullptr;};
    void deleteHarmonyNotifyId() { this->harmonyNotifyId_ = nullptr;};
    inline int32_t getHarmonyNotifyId() const { DARABONBA_PTR_GET_DEFAULT(harmonyNotifyId_, 0) };
    inline PushRequest& setHarmonyNotifyId(int32_t harmonyNotifyId) { DARABONBA_PTR_SET_VALUE(harmonyNotifyId_, harmonyNotifyId) };


    // harmonyReceiptId Field Functions 
    bool hasHarmonyReceiptId() const { return this->harmonyReceiptId_ != nullptr;};
    void deleteHarmonyReceiptId() { this->harmonyReceiptId_ = nullptr;};
    inline string getHarmonyReceiptId() const { DARABONBA_PTR_GET_DEFAULT(harmonyReceiptId_, "") };
    inline PushRequest& setHarmonyReceiptId(string harmonyReceiptId) { DARABONBA_PTR_SET_VALUE(harmonyReceiptId_, harmonyReceiptId) };


    // harmonyRemind Field Functions 
    bool hasHarmonyRemind() const { return this->harmonyRemind_ != nullptr;};
    void deleteHarmonyRemind() { this->harmonyRemind_ = nullptr;};
    inline bool getHarmonyRemind() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemind_, false) };
    inline PushRequest& setHarmonyRemind(bool harmonyRemind) { DARABONBA_PTR_SET_VALUE(harmonyRemind_, harmonyRemind) };


    // harmonyRemindBody Field Functions 
    bool hasHarmonyRemindBody() const { return this->harmonyRemindBody_ != nullptr;};
    void deleteHarmonyRemindBody() { this->harmonyRemindBody_ = nullptr;};
    inline string getHarmonyRemindBody() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemindBody_, "") };
    inline PushRequest& setHarmonyRemindBody(string harmonyRemindBody) { DARABONBA_PTR_SET_VALUE(harmonyRemindBody_, harmonyRemindBody) };


    // harmonyRemindTitle Field Functions 
    bool hasHarmonyRemindTitle() const { return this->harmonyRemindTitle_ != nullptr;};
    void deleteHarmonyRemindTitle() { this->harmonyRemindTitle_ = nullptr;};
    inline string getHarmonyRemindTitle() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemindTitle_, "") };
    inline PushRequest& setHarmonyRemindTitle(string harmonyRemindTitle) { DARABONBA_PTR_SET_VALUE(harmonyRemindTitle_, harmonyRemindTitle) };


    // harmonyRenderStyle Field Functions 
    bool hasHarmonyRenderStyle() const { return this->harmonyRenderStyle_ != nullptr;};
    void deleteHarmonyRenderStyle() { this->harmonyRenderStyle_ = nullptr;};
    inline string getHarmonyRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(harmonyRenderStyle_, "") };
    inline PushRequest& setHarmonyRenderStyle(string harmonyRenderStyle) { DARABONBA_PTR_SET_VALUE(harmonyRenderStyle_, harmonyRenderStyle) };


    // harmonyTestMessage Field Functions 
    bool hasHarmonyTestMessage() const { return this->harmonyTestMessage_ != nullptr;};
    void deleteHarmonyTestMessage() { this->harmonyTestMessage_ = nullptr;};
    inline bool getHarmonyTestMessage() const { DARABONBA_PTR_GET_DEFAULT(harmonyTestMessage_, false) };
    inline PushRequest& setHarmonyTestMessage(bool harmonyTestMessage) { DARABONBA_PTR_SET_VALUE(harmonyTestMessage_, harmonyTestMessage) };


    // harmonyUri Field Functions 
    bool hasHarmonyUri() const { return this->harmonyUri_ != nullptr;};
    void deleteHarmonyUri() { this->harmonyUri_ = nullptr;};
    inline string getHarmonyUri() const { DARABONBA_PTR_GET_DEFAULT(harmonyUri_, "") };
    inline PushRequest& setHarmonyUri(string harmonyUri) { DARABONBA_PTR_SET_VALUE(harmonyUri_, harmonyUri) };


    // idempotentToken Field Functions 
    bool hasIdempotentToken() const { return this->idempotentToken_ != nullptr;};
    void deleteIdempotentToken() { this->idempotentToken_ = nullptr;};
    inline string getIdempotentToken() const { DARABONBA_PTR_GET_DEFAULT(idempotentToken_, "") };
    inline PushRequest& setIdempotentToken(string idempotentToken) { DARABONBA_PTR_SET_VALUE(idempotentToken_, idempotentToken) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string getJobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline PushRequest& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline string getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
    inline PushRequest& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string getPushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline PushRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // sendChannels Field Functions 
    bool hasSendChannels() const { return this->sendChannels_ != nullptr;};
    void deleteSendChannels() { this->sendChannels_ = nullptr;};
    inline string getSendChannels() const { DARABONBA_PTR_GET_DEFAULT(sendChannels_, "") };
    inline PushRequest& setSendChannels(string sendChannels) { DARABONBA_PTR_SET_VALUE(sendChannels_, sendChannels) };


    // sendSpeed Field Functions 
    bool hasSendSpeed() const { return this->sendSpeed_ != nullptr;};
    void deleteSendSpeed() { this->sendSpeed_ = nullptr;};
    inline int32_t getSendSpeed() const { DARABONBA_PTR_GET_DEFAULT(sendSpeed_, 0) };
    inline PushRequest& setSendSpeed(int32_t sendSpeed) { DARABONBA_PTR_SET_VALUE(sendSpeed_, sendSpeed) };


    // smsDelaySecs Field Functions 
    bool hasSmsDelaySecs() const { return this->smsDelaySecs_ != nullptr;};
    void deleteSmsDelaySecs() { this->smsDelaySecs_ = nullptr;};
    inline int32_t getSmsDelaySecs() const { DARABONBA_PTR_GET_DEFAULT(smsDelaySecs_, 0) };
    inline PushRequest& setSmsDelaySecs(int32_t smsDelaySecs) { DARABONBA_PTR_SET_VALUE(smsDelaySecs_, smsDelaySecs) };


    // smsParams Field Functions 
    bool hasSmsParams() const { return this->smsParams_ != nullptr;};
    void deleteSmsParams() { this->smsParams_ = nullptr;};
    inline string getSmsParams() const { DARABONBA_PTR_GET_DEFAULT(smsParams_, "") };
    inline PushRequest& setSmsParams(string smsParams) { DARABONBA_PTR_SET_VALUE(smsParams_, smsParams) };


    // smsSendPolicy Field Functions 
    bool hasSmsSendPolicy() const { return this->smsSendPolicy_ != nullptr;};
    void deleteSmsSendPolicy() { this->smsSendPolicy_ = nullptr;};
    inline int32_t getSmsSendPolicy() const { DARABONBA_PTR_GET_DEFAULT(smsSendPolicy_, 0) };
    inline PushRequest& setSmsSendPolicy(int32_t smsSendPolicy) { DARABONBA_PTR_SET_VALUE(smsSendPolicy_, smsSendPolicy) };


    // smsSignName Field Functions 
    bool hasSmsSignName() const { return this->smsSignName_ != nullptr;};
    void deleteSmsSignName() { this->smsSignName_ = nullptr;};
    inline string getSmsSignName() const { DARABONBA_PTR_GET_DEFAULT(smsSignName_, "") };
    inline PushRequest& setSmsSignName(string smsSignName) { DARABONBA_PTR_SET_VALUE(smsSignName_, smsSignName) };


    // smsTemplateName Field Functions 
    bool hasSmsTemplateName() const { return this->smsTemplateName_ != nullptr;};
    void deleteSmsTemplateName() { this->smsTemplateName_ = nullptr;};
    inline string getSmsTemplateName() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateName_, "") };
    inline PushRequest& setSmsTemplateName(string smsTemplateName) { DARABONBA_PTR_SET_VALUE(smsTemplateName_, smsTemplateName) };


    // storeOffline Field Functions 
    bool hasStoreOffline() const { return this->storeOffline_ != nullptr;};
    void deleteStoreOffline() { this->storeOffline_ = nullptr;};
    inline bool getStoreOffline() const { DARABONBA_PTR_GET_DEFAULT(storeOffline_, false) };
    inline PushRequest& setStoreOffline(bool storeOffline) { DARABONBA_PTR_SET_VALUE(storeOffline_, storeOffline) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline PushRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline PushRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // trim Field Functions 
    bool hasTrim() const { return this->trim_ != nullptr;};
    void deleteTrim() { this->trim_ = nullptr;};
    inline bool getTrim() const { DARABONBA_PTR_GET_DEFAULT(trim_, false) };
    inline PushRequest& setTrim(bool trim) { DARABONBA_PTR_SET_VALUE(trim_, trim) };


    // iOSApnsEnv Field Functions 
    bool hasIOSApnsEnv() const { return this->iOSApnsEnv_ != nullptr;};
    void deleteIOSApnsEnv() { this->iOSApnsEnv_ = nullptr;};
    inline string getIOSApnsEnv() const { DARABONBA_PTR_GET_DEFAULT(iOSApnsEnv_, "") };
    inline PushRequest& setIOSApnsEnv(string iOSApnsEnv) { DARABONBA_PTR_SET_VALUE(iOSApnsEnv_, iOSApnsEnv) };


    // iOSBadge Field Functions 
    bool hasIOSBadge() const { return this->iOSBadge_ != nullptr;};
    void deleteIOSBadge() { this->iOSBadge_ = nullptr;};
    inline int32_t getIOSBadge() const { DARABONBA_PTR_GET_DEFAULT(iOSBadge_, 0) };
    inline PushRequest& setIOSBadge(int32_t iOSBadge) { DARABONBA_PTR_SET_VALUE(iOSBadge_, iOSBadge) };


    // iOSBadgeAutoIncrement Field Functions 
    bool hasIOSBadgeAutoIncrement() const { return this->iOSBadgeAutoIncrement_ != nullptr;};
    void deleteIOSBadgeAutoIncrement() { this->iOSBadgeAutoIncrement_ = nullptr;};
    inline bool getIOSBadgeAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(iOSBadgeAutoIncrement_, false) };
    inline PushRequest& setIOSBadgeAutoIncrement(bool iOSBadgeAutoIncrement) { DARABONBA_PTR_SET_VALUE(iOSBadgeAutoIncrement_, iOSBadgeAutoIncrement) };


    // iOSExtParameters Field Functions 
    bool hasIOSExtParameters() const { return this->iOSExtParameters_ != nullptr;};
    void deleteIOSExtParameters() { this->iOSExtParameters_ = nullptr;};
    inline string getIOSExtParameters() const { DARABONBA_PTR_GET_DEFAULT(iOSExtParameters_, "") };
    inline PushRequest& setIOSExtParameters(string iOSExtParameters) { DARABONBA_PTR_SET_VALUE(iOSExtParameters_, iOSExtParameters) };


    // iOSInterruptionLevel Field Functions 
    bool hasIOSInterruptionLevel() const { return this->iOSInterruptionLevel_ != nullptr;};
    void deleteIOSInterruptionLevel() { this->iOSInterruptionLevel_ = nullptr;};
    inline string getIOSInterruptionLevel() const { DARABONBA_PTR_GET_DEFAULT(iOSInterruptionLevel_, "") };
    inline PushRequest& setIOSInterruptionLevel(string iOSInterruptionLevel) { DARABONBA_PTR_SET_VALUE(iOSInterruptionLevel_, iOSInterruptionLevel) };


    // iOSLiveActivityAttributes Field Functions 
    bool hasIOSLiveActivityAttributes() const { return this->iOSLiveActivityAttributes_ != nullptr;};
    void deleteIOSLiveActivityAttributes() { this->iOSLiveActivityAttributes_ = nullptr;};
    inline string getIOSLiveActivityAttributes() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityAttributes_, "") };
    inline PushRequest& setIOSLiveActivityAttributes(string iOSLiveActivityAttributes) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityAttributes_, iOSLiveActivityAttributes) };


    // iOSLiveActivityAttributesType Field Functions 
    bool hasIOSLiveActivityAttributesType() const { return this->iOSLiveActivityAttributesType_ != nullptr;};
    void deleteIOSLiveActivityAttributesType() { this->iOSLiveActivityAttributesType_ = nullptr;};
    inline string getIOSLiveActivityAttributesType() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityAttributesType_, "") };
    inline PushRequest& setIOSLiveActivityAttributesType(string iOSLiveActivityAttributesType) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityAttributesType_, iOSLiveActivityAttributesType) };


    // iOSLiveActivityContentState Field Functions 
    bool hasIOSLiveActivityContentState() const { return this->iOSLiveActivityContentState_ != nullptr;};
    void deleteIOSLiveActivityContentState() { this->iOSLiveActivityContentState_ = nullptr;};
    inline string getIOSLiveActivityContentState() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityContentState_, "") };
    inline PushRequest& setIOSLiveActivityContentState(string iOSLiveActivityContentState) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityContentState_, iOSLiveActivityContentState) };


    // iOSLiveActivityDismissalDate Field Functions 
    bool hasIOSLiveActivityDismissalDate() const { return this->iOSLiveActivityDismissalDate_ != nullptr;};
    void deleteIOSLiveActivityDismissalDate() { this->iOSLiveActivityDismissalDate_ = nullptr;};
    inline int64_t getIOSLiveActivityDismissalDate() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityDismissalDate_, 0L) };
    inline PushRequest& setIOSLiveActivityDismissalDate(int64_t iOSLiveActivityDismissalDate) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityDismissalDate_, iOSLiveActivityDismissalDate) };


    // iOSLiveActivityEvent Field Functions 
    bool hasIOSLiveActivityEvent() const { return this->iOSLiveActivityEvent_ != nullptr;};
    void deleteIOSLiveActivityEvent() { this->iOSLiveActivityEvent_ = nullptr;};
    inline string getIOSLiveActivityEvent() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityEvent_, "") };
    inline PushRequest& setIOSLiveActivityEvent(string iOSLiveActivityEvent) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityEvent_, iOSLiveActivityEvent) };


    // iOSLiveActivityId Field Functions 
    bool hasIOSLiveActivityId() const { return this->iOSLiveActivityId_ != nullptr;};
    void deleteIOSLiveActivityId() { this->iOSLiveActivityId_ = nullptr;};
    inline string getIOSLiveActivityId() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityId_, "") };
    inline PushRequest& setIOSLiveActivityId(string iOSLiveActivityId) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityId_, iOSLiveActivityId) };


    // iOSLiveActivityStaleDate Field Functions 
    bool hasIOSLiveActivityStaleDate() const { return this->iOSLiveActivityStaleDate_ != nullptr;};
    void deleteIOSLiveActivityStaleDate() { this->iOSLiveActivityStaleDate_ = nullptr;};
    inline int64_t getIOSLiveActivityStaleDate() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityStaleDate_, 0L) };
    inline PushRequest& setIOSLiveActivityStaleDate(int64_t iOSLiveActivityStaleDate) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityStaleDate_, iOSLiveActivityStaleDate) };


    // iOSMusic Field Functions 
    bool hasIOSMusic() const { return this->iOSMusic_ != nullptr;};
    void deleteIOSMusic() { this->iOSMusic_ = nullptr;};
    inline string getIOSMusic() const { DARABONBA_PTR_GET_DEFAULT(iOSMusic_, "") };
    inline PushRequest& setIOSMusic(string iOSMusic) { DARABONBA_PTR_SET_VALUE(iOSMusic_, iOSMusic) };


    // iOSMutableContent Field Functions 
    bool hasIOSMutableContent() const { return this->iOSMutableContent_ != nullptr;};
    void deleteIOSMutableContent() { this->iOSMutableContent_ = nullptr;};
    inline bool getIOSMutableContent() const { DARABONBA_PTR_GET_DEFAULT(iOSMutableContent_, false) };
    inline PushRequest& setIOSMutableContent(bool iOSMutableContent) { DARABONBA_PTR_SET_VALUE(iOSMutableContent_, iOSMutableContent) };


    // iOSNotificationCategory Field Functions 
    bool hasIOSNotificationCategory() const { return this->iOSNotificationCategory_ != nullptr;};
    void deleteIOSNotificationCategory() { this->iOSNotificationCategory_ = nullptr;};
    inline string getIOSNotificationCategory() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationCategory_, "") };
    inline PushRequest& setIOSNotificationCategory(string iOSNotificationCategory) { DARABONBA_PTR_SET_VALUE(iOSNotificationCategory_, iOSNotificationCategory) };


    // iOSNotificationCollapseId Field Functions 
    bool hasIOSNotificationCollapseId() const { return this->iOSNotificationCollapseId_ != nullptr;};
    void deleteIOSNotificationCollapseId() { this->iOSNotificationCollapseId_ = nullptr;};
    inline string getIOSNotificationCollapseId() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationCollapseId_, "") };
    inline PushRequest& setIOSNotificationCollapseId(string iOSNotificationCollapseId) { DARABONBA_PTR_SET_VALUE(iOSNotificationCollapseId_, iOSNotificationCollapseId) };


    // iOSNotificationThreadId Field Functions 
    bool hasIOSNotificationThreadId() const { return this->iOSNotificationThreadId_ != nullptr;};
    void deleteIOSNotificationThreadId() { this->iOSNotificationThreadId_ = nullptr;};
    inline string getIOSNotificationThreadId() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationThreadId_, "") };
    inline PushRequest& setIOSNotificationThreadId(string iOSNotificationThreadId) { DARABONBA_PTR_SET_VALUE(iOSNotificationThreadId_, iOSNotificationThreadId) };


    // iOSRelevanceScore Field Functions 
    bool hasIOSRelevanceScore() const { return this->iOSRelevanceScore_ != nullptr;};
    void deleteIOSRelevanceScore() { this->iOSRelevanceScore_ = nullptr;};
    inline double getIOSRelevanceScore() const { DARABONBA_PTR_GET_DEFAULT(iOSRelevanceScore_, 0.0) };
    inline PushRequest& setIOSRelevanceScore(double iOSRelevanceScore) { DARABONBA_PTR_SET_VALUE(iOSRelevanceScore_, iOSRelevanceScore) };


    // iOSRemind Field Functions 
    bool hasIOSRemind() const { return this->iOSRemind_ != nullptr;};
    void deleteIOSRemind() { this->iOSRemind_ = nullptr;};
    inline bool getIOSRemind() const { DARABONBA_PTR_GET_DEFAULT(iOSRemind_, false) };
    inline PushRequest& setIOSRemind(bool iOSRemind) { DARABONBA_PTR_SET_VALUE(iOSRemind_, iOSRemind) };


    // iOSRemindBody Field Functions 
    bool hasIOSRemindBody() const { return this->iOSRemindBody_ != nullptr;};
    void deleteIOSRemindBody() { this->iOSRemindBody_ = nullptr;};
    inline string getIOSRemindBody() const { DARABONBA_PTR_GET_DEFAULT(iOSRemindBody_, "") };
    inline PushRequest& setIOSRemindBody(string iOSRemindBody) { DARABONBA_PTR_SET_VALUE(iOSRemindBody_, iOSRemindBody) };


    // iOSSilentNotification Field Functions 
    bool hasIOSSilentNotification() const { return this->iOSSilentNotification_ != nullptr;};
    void deleteIOSSilentNotification() { this->iOSSilentNotification_ = nullptr;};
    inline bool getIOSSilentNotification() const { DARABONBA_PTR_GET_DEFAULT(iOSSilentNotification_, false) };
    inline PushRequest& setIOSSilentNotification(bool iOSSilentNotification) { DARABONBA_PTR_SET_VALUE(iOSSilentNotification_, iOSSilentNotification) };


    // iOSSubtitle Field Functions 
    bool hasIOSSubtitle() const { return this->iOSSubtitle_ != nullptr;};
    void deleteIOSSubtitle() { this->iOSSubtitle_ = nullptr;};
    inline string getIOSSubtitle() const { DARABONBA_PTR_GET_DEFAULT(iOSSubtitle_, "") };
    inline PushRequest& setIOSSubtitle(string iOSSubtitle) { DARABONBA_PTR_SET_VALUE(iOSSubtitle_, iOSSubtitle) };


  protected:
    // The activity to be opened by the notification.
    // 
    // This parameter is passed only when AndroidOpenType is set to ACTIVITY. Example: `com.alibaba.cloudpushdemo.bizactivity`.
    shared_ptr<string> androidActivity_ {};
    // The increment value for the badge. The value is added to the current badge number. Valid values: 1 to 99.
    // > This parameter is valid only for push notifications sent through the Huawei or Honor vendor channel. If both AndroidBadgeAddNum and AndroidBadgeSetNum are specified, AndroidBadgeSetNum takes precedence.
    shared_ptr<int32_t> androidBadgeAddNum_ {};
    // The fully qualified class name of the entry Activity for badge settings.
    // > This parameter is valid only for push notifications sent through the Huawei or Honor vendor channel.
    shared_ptr<string> androidBadgeClass_ {};
    // The fixed number for the badge. Valid values: 0 to 99.
    // > This parameter takes effect only on the Huawei and Honor channels when push notifications are sent through vendor channels. When push notifications are sent through the Alibaba Cloud proprietary channel, this parameter takes effect only on Huawei, Honor, and vivo devices.
    shared_ptr<int32_t> androidBadgeSetNum_ {};
    // The body in long text mode. Maximum length: 1,000 bytes. One Chinese character counts as 3 bytes. The actual limit is subject to the specific vendor channel during delivery.
    // 
    // Currently supported by:
    // 
    // - Huawei: EMUI 10 and later.
    // 
    // - Honor: Magic UI 4.0 and later.
    // 
    // - Xiaomi: MIUI 10 and later.
    // 
    // - OPPO: ColorOS 5.0 and later.
    // 
    // - Meizu: Flyme. 
    // - Proprietary channel: Android SDK 3.6.0 and later.
    // 
    // >If this parameter is not provided in long text mode, the first non-empty value from Body and AndroidPopupBody is used.
    shared_ptr<string> androidBigBody_ {};
    // The image URL in big image mode. Currently supported by the proprietary channel for Android SDK 3.6.0 and later.
    shared_ptr<string> androidBigPictureUrl_ {};
    // The title in long text mode. Maximum length: 200 bytes. One Chinese character counts as 3 bytes.
    // 
    // - This parameter is currently supported only by the Honor channel and the Huawei channel for EMUI 11 and later.
    // 
    // - If this parameter is not provided in long text mode, the first non-empty value from Title and AndroidPopupTitle is used.
    shared_ptr<string> androidBigTitle_ {};
    // The extended attributes of the notification. This attribute does not take effect when the push type PushType is set to MESSAGE.
    // 
    // This parameter must be passed in JSON map format. Otherwise, a parsing error occurs.
    shared_ptr<string> androidExtParameters_ {};
    // The notification type for the Honor channel. Valid values:
    // - **0**: Formal notification. This is the default value.
    // - **1**: Test notification.
    // 
    // > Each app can send 1,000 test notifications per day, which is not subject to the daily push limit per device.
    shared_ptr<int32_t> androidHonorTargetUserType_ {};
    // The Huawei fast notification parameter. Valid values:
    // - **0**: Send Huawei standard notifications. This is the default value.
    // - **1**: Send Huawei fast notifications.
    shared_ptr<int32_t> androidHuaweiBusinessType_ {};
    // The JSON string of the Huawei Android Live Notification data structure [LiveNotificationPayload](https://developer.huawei.com/consumer/cn/doc/HMSCore-References/rest-live-0000001562939968#ZH-CN_TOPIC_0000001700850537__p195121620102511). For development and integration, refer to the [Huawei Live Notification push guide](https://help.aliyun.com/document_detail/2983768.html).
    shared_ptr<string> androidHuaweiLiveNotificationPayload_ {};
    // The receipt ID for the Huawei channel. You can view this receipt ID in the receipt parameter settings of the Huawei push operations platform.
    // > If the default receipt configuration on the Huawei push operations platform is set to the Alibaba Cloud receipt, this parameter is not required. Otherwise, we recommend that you configure the default receipt ID for the Huawei channel in the Alibaba Cloud EMAS Mobile Push console first.
    shared_ptr<string> androidHuaweiReceiptId_ {};
    // The notification type for the Huawei channel. Valid values:
    // - **0**: Formal notification. This is the default value.
    // - **1**: Test notification.
    // 
    // > Each app can send 500 test notifications per day, which is not subject to the daily push limit per device.
    shared_ptr<int32_t> androidHuaweiTargetUserType_ {};
    // The URL of the right-side icon. Currently supported by:
    // - Huawei EMUI: applicable only in long text mode and inbox mode.
    // 
    // - Honor Magic UI: applicable only in long text mode.
    // 
    // - Proprietary channel: Android SDK 3.5.0 and later.
    shared_ptr<string> androidImageUrl_ {};
    // The body in inbox mode. The content must be a valid JSON array with no more than 5 elements. Currently supported by:
    // 
    // - Huawei: EMUI 9 and later.
    // - Honor: Magic UI 4.0 and later.
    // - Xiaomi: MIUI 10 and later.
    // - OPPO: ColorOS 5.0 and later.
    // - Proprietary channel: Android SDK 3.6.0 and later.
    shared_ptr<string> androidInboxBody_ {};
    // The Meizu message type. Valid values:
    // - 0: Public message. This is the default value.
    // - 1: Private message.
    shared_ptr<int32_t> androidMeizuNoticeMsgType_ {};
    // Purpose 1: After you complete the [self-classification permission application](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835?#section3410731125514), this parameter is used to identify the message type and determine the [message reminder method](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#ZH-CN_TOPIC_0000001149358835__p3850133955718). It accelerates the delivery of specific types of messages. For valid values, refer to the [message classification standards](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#section1076611477914) in the official Huawei push documentation, and fill in the "Cloud notification category value" or "Local notification category value" in the documentation table.
    // 
    // Purpose 2: After you [apply for special permissions](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/faq-0000001050042183#section037425218509), this parameter is used to identify high-priority pass-through scenarios. Valid values:
    // - VOIP: Audio and video calls.
    // - PLAY_VOICE: Voice broadcast.
    // 
    // > For messages whose "Cloud notification category value" is "Not involved", the Alibaba Cloud proprietary channel is used. For messages whose "Local notification category value" is "Not involved", the Huawei channel is used.
    shared_ptr<string> androidMessageHuaweiCategory_ {};
    // The delivery priority of Huawei channel notifications. Valid values:
    // 
    // - **HIGH**
    // - **NORMAL**
    // 
    // You must apply for the permission. For more information, see [Application link](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/faq-0000001050042183#section037425218509).
    shared_ptr<string> androidMessageHuaweiUrgency_ {};
    // OPPO message categorization includes two categories for management: Communication and Service, and Content and Marketing.
    // 
    // Communication and Service (permission application required):
    // - IM: Instant chat, audio, and video calls.
    // - ACCOUNT: Individual account and asset changes.
    // - DEVICE_REMINDER: Personal device reminders.
    // - ORDER: Personal order and logistics status changes.
    // - TODO: Personal schedules and to-dos.
    // - SUBSCRIPTION: Individual subscribe.
    // 
    // Content and Marketing:
    // - NEWS: News and information.
    // - CONTENT: Content recommendations.
    // - MARKETING: Platform activities.
    // - SOCIAL: Social updates.
    // 
    // For more information, see [OPUSH message classification rules](https://open.oppomobile.com/new/developmentDoc/info?id=13189).
    shared_ptr<string> androidMessageOppoCategory_ {};
    // The reminder level of OPPO channel notification bar messages. Valid values:
    // - 1: Notification bar.
    // - 2: Notification bar, lock screen, ringtone, and vibrate. This is the default notification level for Communication and Service messages.
    // - 16: Notification bar, lock screen, ringtone, vibrate, and banner. Permission application is required.
    // 
    // > When you use the AndroidMessageOppoNotifyLevel parameter, you must also pass the AndroidMessageOppoCategory parameter.
    shared_ptr<int32_t> androidMessageOppoNotifyLevel_ {};
    // vivo message categorization includes two categories for management: System Messages and Operation Messages.
    // System Messages:
    // - IM: Instant messages.
    // - ACCOUNT: Accounts and assets.
    // - TODO: Schedules and to-dos.
    // - DEVICE_REMINDER: Device information.
    // - ORDER: Orders and logistics.
    // - SUBSCRIPTION: subscribe reminders.
    // 
    // Operation Messages:
    // - NEWS: News.
    // - CONTENT: Content recommendations.
    // - MARKETING: Operational activity.
    // - SOCIAL: Social updates.
    // 
    // For more information, see [Classification description](https://dev.vivo.com.cn/documentCenter/doc/359#s-ef3qugc3).
    shared_ptr<string> androidMessageVivoCategory_ {};
    // The notification sound for the Huawei vendor channel. Specify the name of the audio file stored in the `app/src/main/res/raw/` directory of the client project. Do not include the file extension.
    // If this parameter is not specified, the default ringtone is used.
    shared_ptr<string> androidMusic_ {};
    // The priority of the Android notification display position in the notification bar. Valid values: -2, -1, 0, 1, and 2.
    shared_ptr<int32_t> androidNotificationBarPriority_ {};
    // The custom notification bar style for Android. Valid values: 1 to 100.
    shared_ptr<int32_t> androidNotificationBarType_ {};
    // The channel ID of the Android app. It must correspond to the channel ID in the app.
    // - For more information about how to set the NotificationChannel parameter, see [FAQ: Notifications are not received on Android 8.0 and later devices](https://help.aliyun.com/document_detail/67398.html).
    // - Because the channel_id of the OPPO private message channel is the same as the channel ID of the app, this value is used as the channel_id when pushing through the OPPO channel.
    // - This value is used as the channel_id when pushing through the Huawei, FCM, and Alibaba Cloud proprietary channels.
    shared_ptr<string> androidNotificationChannel_ {};
    // The message group. For messages in the same group, only the latest message and the total number of messages received by the group are displayed in the notification bar. All messages are not displayed and cannot be expanded. Currently supported by:
    // 
    // - Huawei vendor channel.
    // - Honor vendor channel.
    // - Proprietary channel: Android SDK 3.9.1 and earlier.
    // 
    // > The proprietary channel no longer supports this parameter in Android SDK 3.9.2 and later.
    shared_ptr<string> androidNotificationGroup_ {};
    // The importance parameter for Honor notification message classification, which determines the notification behavior on user devices. Valid values:
    // 
    // - **LOW**: Information and marketing messages.
    // - **NORMAL**: Service and communication messages.
    // 
    // You must apply for this permission on the Honor platform. For more information, see [Application link](https://developer.honor.com/cn/docs/11002/guides/notification-class#%E8%87%AA%E5%88%86%E7%B1%BB%E6%9D%83%E7%9B%8A%E7%94%B3%E8%AF%B7).
    shared_ptr<string> androidNotificationHonorChannel_ {};
    // The importance parameter for Huawei notification message classification, which determines the notification behavior on user devices. Valid values:
    // 
    // - LOW: Information and marketing messages.
    // - NORMAL: Service and communication messages.
    // 
    // >- Use AndroidMessageHuaweiCategory for notification classification in the Huawei channel. AndroidNotificationHuaweiChannel is no longer required.
    // >- You must apply for this permission on the Huawei platform. For more information, see [Application link](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#section893184112272).
    shared_ptr<string> androidNotificationHuaweiChannel_ {};
    // The unique identifier of each message when displayed in the notification bar. Different notification bar messages can use the same NotifyId to allow new notification bar messages to overwrite old ones.
    shared_ptr<int32_t> androidNotificationNotifyId_ {};
    // The message thread ID. Messages in the same group are collapsed and can be expanded in the notification bar. Notifications in different groups are displayed separately. Currently supported by:
    // 
    // - Proprietary channel: Android SDK 3.9.2 and later.
    shared_ptr<string> androidNotificationThreadId_ {};
    // The vivo notification message classification. Valid values:
    // 
    // - 0: Operation messages. This is the default value.
    // - 1: System messages.
    // 
    // >- Use AndroidMessageVivoCategory for notification classification in the vivo channel. AndroidNotificationVivoChannel is no longer required.
    // >- You must apply for this permission on the vivo platform. For more information, see [Application link](https://dev.vivo.com.cn/documentCenter/doc/359).
    shared_ptr<string> androidNotificationVivoChannel_ {};
    // The channel ID for Xiaomi notification types. You must apply for it on the Xiaomi platform. For more information, see [Application link](https://dev.mi.com/console/doc/detail?pId=2422#_4).
    // >- A single app can apply for a maximum of 8 channels on the Xiaomi channel. Plan ahead.
    shared_ptr<string> androidNotificationXiaomiChannel_ {};
    // The reminder method of the notification. Valid values:
    // 
    // - **VIBRATE**: Vibrate. This is the default value.
    // - **SOUND**: Sound.
    // - **BOTH**: Sound and vibrate.
    // - **NONE**: Silent.
    shared_ptr<string> androidNotifyType_ {};
    // The action performed after the notification is clicked. Valid values:
    // 
    // - **APPLICATION**: Open the app. This is the default value.
    // - **ACTIVITY**: Open the specified Android activity.
    // - **URL**: Open the specified URL.
    // - **NONE**: No redirection.
    shared_ptr<string> androidOpenType_ {};
    // The URL to be opened after the Android device receives the push.
    // 
    // This parameter is passed only when AndroidOpenType is set to URL.
    shared_ptr<string> androidOpenUrl_ {};
    // The JSON character string of the OPPO Fluid Cloud intent delete data structure [data](https://open.oppomobile.com/documentation/page/info?id=13578). This parameter is invalid when the AndroidOppoIntelligentIntent parameter is specified. For development and integration, see References: [OPPO Fluid Cloud push guide](https://help.aliyun.com/document_detail/2997310.html).
    shared_ptr<string> androidOppoDeleteIntentData_ {};
    // The JSON character string of the OPPO Fluid Cloud intent sharing data structure [IntelligentIntent](https://open.oppomobile.com/documentation/page/info?id=13565). For development and integration, see References: [OPPO Fluid Cloud push guide](https://help.aliyun.com/document_detail/2997310.html).
    shared_ptr<string> androidOppoIntelligentIntent_ {};
    // The push environment for OPPO Fluid Cloud. Valid values:
    // - **0**: Formal environment. This is the default value.
    // - **1**: Test environment.
    // 
    // > For the OPPO Fluid Cloud test environment, refer to [Environment setup](https://open.oppomobile.com/documentation/page/info?id=13590) to set up the client.
    shared_ptr<int32_t> androidOppoIntentEnv_ {};
    // The content parameters for the OPPO private message template.
    shared_ptr<map<string, string>> androidOppoPrivateContentParameters_ {};
    // The OPPO private message template ID.
    shared_ptr<string> androidOppoPrivateMsgTemplateId_ {};
    // The title parameters for the OPPO private message template.
    shared_ptr<map<string, string>> androidOppoPrivateTitleParameters_ {};
    // The activity to which the user is redirected after the notification is clicked.
    shared_ptr<string> androidPopupActivity_ {};
    // The body content in auxiliary pop-up window mode. This parameter is required when the **AndroidPopupActivity** parameter is not empty.
    // 
    // Maximum length: 200 characters. Both Chinese and English characters count as one character.
    // 
    // If a vendor channel is used, the limits of the vendor channel must also be met. For more information, see [Limits on auxiliary channel pushes for Android](https://help.aliyun.com/document_detail/165253.html).
    shared_ptr<string> androidPopupBody_ {};
    // The title content in auxiliary pop-up window mode. This parameter is required when the **AndroidPopupActivity** parameter is not empty. 
    // 
    // Maximum length: 50 characters. Both Chinese and English characters count as one character.
    // 
    // If a vendor channel is used, the limits of the vendor channel must also be met. For more information, see [Limits on auxiliary channel pushes for Android](https://help.aliyun.com/document_detail/165253.html).
    shared_ptr<string> androidPopupTitle_ {};
    // Specifies whether to use the auxiliary pop-up window feature when the device is offline during a message push. Default value: false. This parameter takes effect only when PushType is set to MESSAGE.
    // 
    // If the message is successfully converted into a notification and pushed, the data displayed in the received notification is the values of the AndroidPopupTitle and AndroidPopupBody parameters set on the server. The data obtained in the onSysNoticeOpened method of the auxiliary pop-up window when the notification is clicked is the values of the Title and Body parameters set on the server.
    shared_ptr<bool> androidRemind_ {};
    // The notification style. Valid values:
    // - **0**: Standard mode. This is the default value.
    // - **1**: Long text mode. Supported by Huawei, Honor, Xiaomi, OPPO, Meizu, and the proprietary channel.
    // - **2**: Big image mode. Supported by the proprietary channel, but not supported by Xiaomi devices.
    // - **3**: Inbox mode. Supported by Huawei, Honor, Xiaomi, OPPO, and the proprietary channel.
    // > If a non-standard mode is used, this parameter must be provided.
    shared_ptr<int32_t> androidRenderStyle_ {};
    // Settings for the vendor channel notification type. Valid values:
    // - **0**: Formal notification. This is the default value.
    // - **1**: Test notification.
    // 
    // >- These parameter settings are equivalent to configuring the AndroidHuaweiTargetUserType, AndroidHonorTargetUserType, AndroidVivoPushMode, and AndroidOppoIntentEnv parameters at the same time. The corresponding parameters for specific vendor channels can overwrite this parameter.
    // >- Currently supported by: Huawei channel, Honor channel, vivo channel, and OPPO Fluid Cloud.
    shared_ptr<int32_t> androidTargetUserType_ {};
    // The JSON character string of the vivo Atomic Island data structure [liveMessage](https://dev.vivo.com.cn/documentCenter/doc/896#s-fdagzbd4). For development and integration, see References: [vivo Atomic Island push guide](https://www.alibabacloud.com/help/en/document_detail/3030718.html).
    shared_ptr<string> androidVivoLiveMessage_ {};
    // The notification type for the vivo channel. Valid values:
    // - **0**: Formal push. This is the default value.
    // - **1**: Test push.
    // 
    // > For test pushes, configure test devices in the vivo console in advance. You can search for "onReceiveRegId regId" in the device startup logs to obtain the RegId of the test device.
    shared_ptr<int32_t> androidVivoPushMode_ {};
    // The receipt ID for the vivo channel. You can view this receipt ID in the application information of the push service on the vivo Open Platform.
    // > If the default receipt configuration on the vivo Open Platform is set to the Alibaba Cloud receipt, this parameter is not required. Otherwise, we recommend that you configure the default receipt ID for the vivo channel in the Alibaba Cloud EMAS Mobile Push console first.
    shared_ptr<string> androidVivoReceiptId_ {};
    // The vivo template ID.
    shared_ptr<string> androidVivoTemplateId_ {};
    // The parameters for the vivo template. The value is a JSON object string.
    shared_ptr<string> androidVivoTemplateParams_ {};
    // **[Deprecated]** This parameter is deprecated. All third-party auxiliary pop-up windows are uniformly supported by the new **AndroidPopupActivity** parameter.
    shared_ptr<string> androidXiaoMiActivity_ {};
    // **[Deprecated]** This parameter is deprecated. All third-party auxiliary pop-up windows are uniformly supported by the new **AndroidPopupBody** parameter.
    shared_ptr<string> androidXiaoMiNotifyBody_ {};
    // **[Deprecated]** This parameter is deprecated. All third-party auxiliary pop-up windows are uniformly supported by the new **AndroidPopupTitle** parameter.
    shared_ptr<string> androidXiaoMiNotifyTitle_ {};
    // **[Deprecated]** Starting from August 2023, Xiaomi officially no longer supports dynamically setting small icons, right-side icons, and big images during pushes on new devices and systems.
    shared_ptr<string> androidXiaomiBigPictureUrl_ {};
    // The JSON character string of the Xiaomi Hyper Island data structure [miui.focus.param](https://dev.mi.com/xiaomihyperos/documentation/detail?pId=2131). For development and integration, see References: [Xiaomi Hyper Island push guide](https://www.alibabacloud.com/help/en/document_detail/3037956.html).
    shared_ptr<string> androidXiaomiFocusParam_ {};
    // The JSON character string of the Xiaomi Hyper Island image data [miui.focus.pic_xxx](https://dev.mi.com/xiaomihyperos/documentation/detail?pId=2131). For development and integration, see References: [Xiaomi Hyper Island push guide](https://www.alibabacloud.com/help/en/document_detail/3037956.html).
    shared_ptr<string> androidXiaomiFocusPics_ {};
    // **[Deprecated]** Starting from August 2023, Xiaomi officially no longer supports dynamically setting small icons, right-side icons, and big images during pushes on new devices and systems.
    shared_ptr<string> androidXiaomiImageUrl_ {};
    // The Xiaomi private message template ID.
    shared_ptr<string> androidXiaomiTemplateId_ {};
    // The parameters for the Xiaomi private message template. The value is a JSON string.
    shared_ptr<string> androidXiaomiTemplateParams_ {};
    // The AppKey information.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // The content of the notification or message for Android and HarmonyOS pushes, or the content of the iOS message or notification. The content size is limited. For more information, see [Limits](https://help.aliyun.com/document_detail/434629.html).
    shared_ptr<string> body_ {};
    // The device type. Valid values:
    // 
    // - **HARMONY**: HarmonyOS devices.
    // - **iOS**: iOS devices.
    // - **ANDROID**: Android devices.
    // - **ALL**: If the AppKey belongs to a legacy dual-platform app, this value indicates that the push is sent to both Android and iOS devices. If the AppKey belongs to a new single-platform app, this value has the same effect as specifying the device type corresponding to the app type.
    // 
    // This parameter is required.
    shared_ptr<string> deviceType_ {};
    // The expiration time of offline messages and notifications. This parameter is used together with StoreOffline. Expired messages and notifications are not delivered. The maximum retention period is 72 hours. Default value: 72 hours.
    // 
    // The time must be in the ISO 8601 standard format and use UTC time. Format: YYYY-MM-DDThh:mm:ssZ. The expiration time cannot be earlier than the current time or the scheduled delivery time plus 3 seconds (ExpireTime > PushTime + 3 seconds). The 3 seconds are reserved to compensate for network and system latency. Set the expiration time to at least 1 minute for single pushes and at least 10 minutes for full pushes and batch pushes.
    shared_ptr<string> expireTime_ {};
    // The action corresponding to the ability of the built-in page in the application.
    // >Notice: When HarmonyActionType is set to APP_CUSTOM_PAGE, you must specify at least one of the HarmonyUri and HarmonyAction fields.
    // For more information, see [ClickAction.action](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section152462191216) on the HarmonyOS official website.
    shared_ptr<string> harmonyAction_ {};
    // The action to perform after the notification is tapped. Valid values:
    // - APP_HOME_PAGE: Opens the application home page.
    // - APP_CUSTOM_PAGE: Opens a custom page in the application.
    shared_ptr<string> harmonyActionType_ {};
    // The increment value for the badge of the HarmonyOS application. For more information, see [Description of the addNum field for HarmonyOS badges](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section266310382145).</br>
    // This parameter is supported in HarmonyOS SDK 1.2.0 and later.
    shared_ptr<int32_t> harmonyBadgeAddNum_ {};
    // The fixed number for the badge of the HarmonyOS application. For more information, see [Description of the setNum field for HarmonyOS badges](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section266310382145).
    // This parameter is supported in HarmonyOS SDK 1.2.0 and later.
    shared_ptr<int32_t> harmonyBadgeSetNum_ {};
    // The category of the notification message. After you apply for the notification message auto-categorization permission, this parameter is used as the identity of the message type. Different notification message types affect the display and reminder methods of the message. Valid values:
    // 
    // - IM: Instant chat.
    // - VOIP: Audio and video calls.
    // - SUBSCRIPTION: subscribe.
    // - TRAVEL: Travel.
    // - HEALTH: Health.
    // - WORK: Work reminders.
    // - ACCOUNT: Account updates.
    // - EXPRESS: Orders and logistics.
    // - FINANCE: Finance.
    // - DEVICE_REMINDER: Device reminders.
    // - MAIL: Emails.
    // - CUSTOMER_SERVICE: Customer service messages.
    // - MARKETING: News, content recommendations, social updates, product promotions, financial updates, lifestyle information, surveys, feature recommendations, and operational activity. This category only serves as the identity for the content and does not send messages faster. These are collectively referred to as information and marketing messages.
    // 
    // For details, see [Notification.category](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the HarmonyOS official website.
    shared_ptr<string> harmonyCategory_ {};
    // The extended attributes of the notification. This attribute does not take effect when the push type PushType is set to MESSAGE.
    // 
    // This parameter must be passed in JSON map format. Otherwise, a parsing error occurs.
    shared_ptr<string> harmonyExtParameters_ {};
    // The extra data for the extended notification message.</br>
    // This parameter is valid when you send HarmonyOS extended notification messages.</br>
    // This parameter is conceptually equivalent to the extraData field of a HarmonyOS extended notification message. For the specific definition, see [HarmonyOS ExtensionPayload description](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section161192514234).</br>
    // This parameter is supported in HarmonyOS SDK 1.2.0 and later.
    shared_ptr<string> harmonyExtensionExtraData_ {};
    // Specifies whether to send a HarmonyOS extended notification message when PushType is set to NOTICE. Valid values:
    // - true: Sends an extended notification message.
    // - false: Sends a normal notification message. This is the default value.
    // You must apply for the required permissions on the HarmonyOS side before you can send extended notification messages. For more information, see [Sending extended notification messages](https://developer.huawei.com/consumer/cn/doc/harmonyos-guides-V5/push-send-extend-noti-V5) in the HarmonyOS documentation.</br>
    // This parameter is supported in HarmonyOS SDK 1.2.0 and later.
    shared_ptr<bool> harmonyExtensionPush_ {};
    // The URL of the large icon on the right side of the notification. The URL must use the HTTPS protocol.
    // > Supported image formats include PNG, JPG, JPEG, HEIF, GIF, and BMP. The product of the image width and height must be less than 25,000 pixels.
    // For more information, see [Notification.image](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the HarmonyOS official website.
    shared_ptr<string> harmonyImageUrl_ {};
    // The content for the multi-line text style. This field is required when HarmonyRenderStyle is set to MULTI_LINE. A maximum of three content items are supported.
    shared_ptr<string> harmonyInboxContent_ {};
    // The JSON string of the HarmonyOS Live View data structure [LiveViewPayload](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V13/push-scenariozed-api-request-param-V13#section66881469306). For development and integration, refer to the [HarmonyOS Live View push guide](https://help.aliyun.com/document_detail/2982112.html).
    shared_ptr<string> harmonyLiveViewPayload_ {};
    // The type of the notification channel to use. This parameter is valid only when the Alibaba Cloud proprietary channel is online. Valid values:
    // - SOCIAL_COMMUNICATION: Social communication.
    // - SERVICE_INFORMATION: Service reminders.
    // - CONTENT_INFORMATION: Content information.
    // - CUSTOMER_SERVICE: Customer service messages. This type is used for customer service messages between users and merchants, and must be initiated by the user.
    // - OTHER_TYPES: Other types.
    // For more information, see [SlotType](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/js-apis-notificationmanager-V5#slottype) on the HarmonyOS official website.
    shared_ptr<string> harmonyNotificationSlotType_ {};
    // The unique identifier of each message when the notification is displayed. If this parameter is not specified, the push service automatically generates a unique identifier for each message. Different notification messages can have the same notifyId to allow new messages to overwrite old ones.
    // For more information, see [Notification.notifyId](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the HarmonyOS official website.
    shared_ptr<int32_t> harmonyNotifyId_ {};
    // The receipt ID for the HarmonyOS channel. You can view this receipt ID in the receipt parameter settings of the HarmonyOS push operations platform.
    // > If the default receipt configuration on the HarmonyOS push operations platform is set to the Alibaba Cloud receipt, this parameter is not required. Otherwise, we recommend that you configure the default receipt ID for the HarmonyOS channel in the Alibaba Cloud EMAS Mobile Push console first.
    // For more information, see [pushOptions.receiptId](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section418321011212) on the HarmonyOS official website.
    shared_ptr<string> harmonyReceiptId_ {};
    // Specifies whether to use the auxiliary pop-up window feature when the device is offline and the push type is message. Default value: false. This parameter takes effect only when PushType is set to MESSAGE.
    // If the message-to-notification push is successful, the notification displays the data specified by the HarmonyRemindTitle and HarmonyRemindBody parameters on the server.
    shared_ptr<bool> harmonyRemind_ {};
    // The HarmonyOS notification content used when a message is converted to a notification. This parameter is valid only when HarmonyRemind is set to true.
    shared_ptr<string> harmonyRemindBody_ {};
    // The HarmonyOS notification title used when a message is converted to a notification. This parameter is valid only when HarmonyRemind is set to true.
    shared_ptr<string> harmonyRemindTitle_ {};
    // The style of the notification message. Valid values:
    // - NORMAL: Normal notification. This is the default value.
    // - MULTI_LINE: Multi-line text style.
    shared_ptr<string> harmonyRenderStyle_ {};
    // The test message identifier. Valid values:
    // - false: Normal message. This is the default value.
    // - true: Test message.
    // For more information, see [pushOptions.testMessage](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section418321011212) on the HarmonyOS official website.
    shared_ptr<bool> harmonyTestMessage_ {};
    // The URI corresponding to the ability of the built-in page in the application.
    // >Notice: When HarmonyActionType is set to APP_CUSTOM_PAGE, you must specify at least one of the HarmonyUri and HarmonyAction fields. If multiple abilities exist, specify the action and URI for each ability. The action is used first to find the corresponding built-in page in the application.
    // For more information, see [ClickAction.uri](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section152462191216) on the HarmonyOS official website.
    shared_ptr<string> harmonyUri_ {};
    // An idempotent parameter used to prevent duplicate push notifications on the server caused by retries from the API client. If the same IdempotentToken is used for calls within 15 minutes, only one push notification is sent, and subsequent calls return the result of the first successful push.
    // > 
    // > - The parameter format is a standard 36-character UUID (8-4-4-4-12). Each valid character is a hexadecimal digit in the range of 0-9 or a-f, and it is case-insensitive.
    // > - This parameter is used only to prevent duplicate push notifications caused by retries. It cannot prevent duplicate push notifications caused by concurrent calls.
    shared_ptr<string> idempotentToken_ {};
    // The custom identifier of the push task. If JobKey is not empty, this field is included in the receipt log. For more information, see [Receipt logs](https://help.aliyun.com/document_detail/434651.html).
    // >Format requirements: The value can only contain letters, digits, underscores (_), and hyphens (-), and cannot exceed 32 characters in length.
    shared_ptr<string> jobKey_ {};
    // The scheduled delivery time. If this parameter is not set, the push is delivered immediately.
    // The scheduled delivery time cannot be later than 7 days from the current time.
    // 
    // The time must be in the ISO 8601 standard format and use UTC time. Format: YYYY-MM-DDThh:mm:ssZ.
    // >This parameter is not supported when Target is set to TBD (continuous push).
    shared_ptr<string> pushTime_ {};
    // The push type. Valid values:
    // - **NOTICE**: Notification. Notifications are delivered to device endpoints through vendor channels such as APNs, Huawei, Xiaomi, and HarmonyOS, and are displayed directly in the notification bar of the device. When an Android device is online (the app process is alive), the notification is preferentially delivered through the Alibaba Cloud proprietary channel. The push SDK constructs and displays the notification to achieve better push performance and save vendor push message quotas in certain scenarios.
    // - **MESSAGE**: Message. Messages are delivered through the Alibaba Cloud proprietary online channel. They are not displayed in the notification bar by default. Instead, the app must receive and process them when the process is active, and the business logic determines whether to trigger specific business behaviors. When the device is offline (the app process is inactive), messages cannot be received in a timely manner. In this case, you can use the iOSRemind or AndroidRemind parameter described below to convert messages into notifications for delivery when the device is offline. Alternatively, you can set the StoreOffline parameter described below to allow the push system to save the message when the device is offline and automatically deliver it when the device comes online.
    // 
    // This parameter is required.
    shared_ptr<string> pushType_ {};
    // The specified delivery channels. Valid values:
    // 
    // - accs: Alibaba Cloud proprietary channel.
    // - huawei: Huawei channel.
    // - honor: Honor channel.
    // - xiaomi: Xiaomi channel.
    // - oppo: OPPO channel.
    // - vivo: vivo channel.
    // - meizu: Meizu channel.
    // - gcm: Google GCM channel (legacy HTTP).
    // - fcm: Google Firebase channel (HTTP v1 API).
    // - apns: APNs channel.
    // - harmony: HarmonyOS channel.
    // 
    // >- If this parameter is not configured, all channels can be used.
    // >- If this parameter is configured, only the specified channels are used.
    // >- If the configured channels conflict with the delivery policy (for example, iOS notifications can only be delivered through the APNs channel, but apns is not included in this parameter), the push is not delivered.
    // >- If gcm is configured, both Google GCM and FCM channels can be used. If fcm is configured, only the Google FCM channel can be used.
    shared_ptr<string> sendChannels_ {};
    // **[Deprecated]** This parameter is deprecated.
    shared_ptr<int32_t> sendSpeed_ {};
    // The delay time before the SMS message is triggered. Unit: seconds.
    // This parameter is required if you use the SMS linkage feature. We recommend that you set this parameter to 15 seconds or more, and the maximum value cannot exceed 3 days. This prevents duplicate SMS and push messages.
    // > When the SMS linkage feature is used, the ExpireTime parameter becomes invalid. The expiration time of the notification is calculated based on the SmsDelaySecs parameter. The expiration time is the current time plus the value of SmsDelaySecs.
    shared_ptr<int32_t> smsDelaySecs_ {};
    // The key-value pairs of the variables in the SMS template. Format: `key1=value1&key2=value2`.
    shared_ptr<string> smsParams_ {};
    // The condition that triggers the SMS message. Valid values:
    // - **0**: Triggered when the push message is not received.
    // - **1**: Triggered when the user does not open the push message.
    shared_ptr<int32_t> smsSendPolicy_ {};
    // The signature for the fallback SMS message.
    shared_ptr<string> smsSignName_ {};
    // The name of the SMS template used for fallback SMS messages. You can obtain this name on the SMS template management page. This is the name assigned by the system, not the name set by the developer.
    shared_ptr<string> smsTemplateName_ {};
    // Specifies whether to save offline messages and notifications. Default value: **false**.
    // 
    // If this parameter is set to true and the user is offline during the push, the message or notification is sent again when the user comes online within the expiration time specified by ExpireTime. The default value of ExpireTime is 72 hours. iOS notifications are delivered through the APNs channel and are not affected by StoreOffline.
    shared_ptr<bool> storeOffline_ {};
    // The push target. Valid values:
    // 
    // - **DEVICE**: Push by device.
    // - **ACCOUNT**: Push by account.
    // - **ALIAS**: Push by alias.
    // - **TAG**: Push by tag.
    // - **ALL**: Push to all devices. The interval between two full pushes of the same DeviceType must be at least 1 second.
    //  > For a full push to iOS devices, the push is sent to devices that have been active within the last 24 months and have not been uninstalled. Once Apple Push Notification service (APNs) receives the push request and does not return an error message, the push is considered delivered. This may cause a surge in the number of active devices and incur high costs. Use this value with caution.
    // - **TBD**: Initialize a continuous push. The push target is specified by the subsequent [ContinuouslyPush](https://help.aliyun.com/document_detail/2249917.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> target_ {};
    // The target value, which is set based on the Target type. Separate multiple values with commas. If the number of values exceeds the limit, you must send the push in multiple batches.
    // 
    // - If Target is set to DEVICE, the value is in the format of `deviceid1,deviceid2`. A maximum of 1,000 devices are supported.
    // - If Target is set to ACCOUNT, the value is in the format of `account1,account2`. A maximum of 1,000 accounts are supported.
    // - If Target is set to ALIAS, the value is in the format of `alias1,alias2`. A maximum of 1,000 aliases are supported.
    // - If Target is set to TAG, single or multiple tags are supported. For more information about the format, see [Tag format](https://help.aliyun.com/document_detail/434847.html).
    // - If Target is set to ALL, the value is **ALL**, which is a fixed parameter combination for full pushes.
    // - If Target is set to TBD, the value is **TBD**, which is a fixed parameter combination for continuous pushes.
    // 
    // This parameter is required.
    shared_ptr<string> targetValue_ {};
    // The title of the notification or message during the push. Maximum length: 200 bytes.
    // 
    // This parameter is required for Android and HarmonyOS pushes. This parameter is optional for iOS notifications. If this parameter is specified:
    // 
    // - For iOS 10 and later, the title is displayed in the notification.
    // 
    // - For iOS 8.2 to iOS 9.x, the title replaces the app name in the notification.
    shared_ptr<string> title_ {};
    // Specifies whether to automatically truncate excessively long titles and content.
    // 
    // >This parameter applies only to vendor channels that explicitly limit the length of titles and content. It does not apply to channels such as APNs, Huawei, and Honor, which do not limit the length of titles and content but only limit the total request body size.
    shared_ptr<bool> trim_ {};
    // To send iOS notifications through the APNs center, you must specify the corresponding environment context. Valid values:
    // 
    // - **DEV**: Development environment. This value applies to apps that are directly installed and debugged by using Xcode.
    // - **PRODUCT**: Production environment. This value applies to apps distributed through the App Store, TestFlight, Ad Hoc, and enterprise distribution.
    shared_ptr<string> iOSApnsEnv_ {};
    // The badge number displayed in the upper-right corner of the iOS app icon.
    // 
    // > If iOSBadgeAutoIncrement is set to true, this parameter must be left empty.
    shared_ptr<int32_t> iOSBadge_ {};
    // Specifies whether to enable the automatic badge increment feature. Default value: false.
    // 
    // >When this parameter is set to true, iOSBadge must be left empty.
    // 
    // The automatic badge increment feature maintains the badge count for each device on the push server. To use this feature, you must use SDK version 1.9.5 or later and actively synchronize the badge number to the server.
    shared_ptr<bool> iOSBadgeAutoIncrement_ {};
    // The extension property of the iOS notification.
    // 
    // For iOS 10 and later, you can specify the resource URL for rich media push notifications in this parameter: `{"attachment": "https://www.example.com/notification_pic.png"}`. This parameter must be passed in JSON map format. Otherwise, a parse error occurs.
    shared_ptr<string> iOSExtParameters_ {};
    // The interruption level. Valid values:
    // 
    // - **passive**: The system adds the notification to the notification list without lighting up the screen or playing a sound.
    // - **active**: The system immediately displays the notification, lights up the screen, and can play a sound.
    // - **time-sensitive**: The system immediately presents the notification, lights up the screen, and can play a sound, but does not break through the system notification controls.
    // - **critical**: The system immediately displays the notification, lights up the screen, and plays a sound bypassing the silent switch.
    shared_ptr<string> iOSInterruptionLevel_ {};
    // The JSON character string that contains the pass-through static parameter for Dynamic Island pushes. It includes static user-defined information, such as product IDs and order information.
    // 
    // > This parameter is required when iOSLiveActivityEvent is set to start.
    shared_ptr<string> iOSLiveActivityAttributes_ {};
    // The type of the Live Activity to be started.
    // > This parameter is required when iOSLiveActivityEvent is set to start.
    shared_ptr<string> iOSLiveActivityAttributesType_ {};
    // The pass-through dynamic parameter for Dynamic Island pushes. It includes real-time update information, such as price and inventory changes.
    shared_ptr<string> iOSLiveActivityContentState_ {};
    // The UNIX timestamp in seconds. The ended Live Activity is retained on the Lock Screen until the specified time. The maximum retention period is 4 hours.
    shared_ptr<int64_t> iOSLiveActivityDismissalDate_ {};
    // The event to start, update, or end a Live Activity. Valid values: start, update, and end.
    shared_ptr<string> iOSLiveActivityEvent_ {};
    // The Live Activity ID reported by the device to the user server. It is the unique identifier of the Live Activity.
    shared_ptr<string> iOSLiveActivityId_ {};
    // The UNIX timestamp in seconds that marks the expiration time of the activity content.
    shared_ptr<int64_t> iOSLiveActivityStaleDate_ {};
    // The sound of the iOS notification. Specify the name of the audio file stored in the app bundle or the sandbox Library/Sounds directory. For more information, see [How to set the notification sound for iOS pushes](https://help.aliyun.com/document_detail/48906.html).
    // 
    // If this parameter is set to an empty string (""), the notification is silent. If this parameter is not set, the default value is default, which indicates the system prompt sound.
    shared_ptr<string> iOSMusic_ {};
    // The iOS notification processing extension flag (iOS 10 and later). If this parameter is set to true, notifications pushed by APNs can be processed by the extension before they are displayed. This parameter must be set to true for silent notifications.
    shared_ptr<bool> iOSMutableContent_ {};
    // The category of the iOS notification (iOS 10 and later).
    shared_ptr<string> iOSNotificationCategory_ {};
    // The collapse ID of the iOS notification. If a device receives messages with the same CollapseId, the messages are merged into one. If the device is offline and continuously receives messages with the same CollapseId, only one notification is displayed in the notification bar. This parameter is supported in iOS 10 and later.
    shared_ptr<string> iOSNotificationCollapseId_ {};
    // The thread ID used to group iOS remote notifications and mark the identifier of the collapsed group. This parameter is supported only in iOS 12.0 and later.
    shared_ptr<string> iOSNotificationThreadId_ {};
    // The relevance score for summary highlighting. Valid values: a floating-point number in the range of [0,1\\].
    shared_ptr<double> iOSRelevanceScore_ {};
    // Specifies whether to convert a message into a notification and deliver it once through the Apple APNs channel when the device is offline (that is, the persistent connection channel to the Mobile Push server is disconnected) during a message push.
    // 
    // > Converting offline messages into notifications applies only to the production environment.
    shared_ptr<bool> iOSRemind_ {};
    // The iOS notification content used when an iOS message is converted into a notification. This parameter is valid only when iOSApnsEnv is set to PRODUCT and iOSRemind is set to true.
    shared_ptr<string> iOSRemindBody_ {};
    // Specifies whether to enable iOS silent notifications.
    shared_ptr<bool> iOSSilentNotification_ {};
    // The subtitle of the iOS notification (iOS 10 and later).
    shared_ptr<string> iOSSubtitle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
