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
      DARABONBA_PTR_TO_JSON(AndroidOppoPrivateContentParameters, androidOppoPrivateContentParameters_);
      DARABONBA_PTR_TO_JSON(AndroidOppoPrivateMsgTemplateId, androidOppoPrivateMsgTemplateId_);
      DARABONBA_PTR_TO_JSON(AndroidOppoPrivateTitleParameters, androidOppoPrivateTitleParameters_);
      DARABONBA_PTR_TO_JSON(AndroidPopupActivity, androidPopupActivity_);
      DARABONBA_PTR_TO_JSON(AndroidPopupBody, androidPopupBody_);
      DARABONBA_PTR_TO_JSON(AndroidPopupTitle, androidPopupTitle_);
      DARABONBA_PTR_TO_JSON(AndroidRemind, androidRemind_);
      DARABONBA_PTR_TO_JSON(AndroidRenderStyle, androidRenderStyle_);
      DARABONBA_PTR_TO_JSON(AndroidTargetUserType, androidTargetUserType_);
      DARABONBA_PTR_TO_JSON(AndroidVivoPushMode, androidVivoPushMode_);
      DARABONBA_PTR_TO_JSON(AndroidVivoReceiptId, androidVivoReceiptId_);
      DARABONBA_PTR_TO_JSON(AndroidXiaoMiActivity, androidXiaoMiActivity_);
      DARABONBA_PTR_TO_JSON(AndroidXiaoMiNotifyBody, androidXiaoMiNotifyBody_);
      DARABONBA_PTR_TO_JSON(AndroidXiaoMiNotifyTitle, androidXiaoMiNotifyTitle_);
      DARABONBA_PTR_TO_JSON(AndroidXiaomiBigPictureUrl, androidXiaomiBigPictureUrl_);
      DARABONBA_PTR_TO_JSON(AndroidXiaomiImageUrl, androidXiaomiImageUrl_);
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
      DARABONBA_PTR_FROM_JSON(AndroidOppoPrivateContentParameters, androidOppoPrivateContentParameters_);
      DARABONBA_PTR_FROM_JSON(AndroidOppoPrivateMsgTemplateId, androidOppoPrivateMsgTemplateId_);
      DARABONBA_PTR_FROM_JSON(AndroidOppoPrivateTitleParameters, androidOppoPrivateTitleParameters_);
      DARABONBA_PTR_FROM_JSON(AndroidPopupActivity, androidPopupActivity_);
      DARABONBA_PTR_FROM_JSON(AndroidPopupBody, androidPopupBody_);
      DARABONBA_PTR_FROM_JSON(AndroidPopupTitle, androidPopupTitle_);
      DARABONBA_PTR_FROM_JSON(AndroidRemind, androidRemind_);
      DARABONBA_PTR_FROM_JSON(AndroidRenderStyle, androidRenderStyle_);
      DARABONBA_PTR_FROM_JSON(AndroidTargetUserType, androidTargetUserType_);
      DARABONBA_PTR_FROM_JSON(AndroidVivoPushMode, androidVivoPushMode_);
      DARABONBA_PTR_FROM_JSON(AndroidVivoReceiptId, androidVivoReceiptId_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaoMiActivity, androidXiaoMiActivity_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaoMiNotifyBody, androidXiaoMiNotifyBody_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaoMiNotifyTitle, androidXiaoMiNotifyTitle_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaomiBigPictureUrl, androidXiaomiBigPictureUrl_);
      DARABONBA_PTR_FROM_JSON(AndroidXiaomiImageUrl, androidXiaomiImageUrl_);
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
        && return this->androidBadgeAddNum_ == nullptr && return this->androidBadgeClass_ == nullptr && return this->androidBadgeSetNum_ == nullptr && return this->androidBigBody_ == nullptr && return this->androidBigPictureUrl_ == nullptr
        && return this->androidBigTitle_ == nullptr && return this->androidExtParameters_ == nullptr && return this->androidHonorTargetUserType_ == nullptr && return this->androidHuaweiLiveNotificationPayload_ == nullptr && return this->androidHuaweiReceiptId_ == nullptr
        && return this->androidHuaweiTargetUserType_ == nullptr && return this->androidImageUrl_ == nullptr && return this->androidInboxBody_ == nullptr && return this->androidMeizuNoticeMsgType_ == nullptr && return this->androidMessageHuaweiCategory_ == nullptr
        && return this->androidMessageHuaweiUrgency_ == nullptr && return this->androidMessageOppoCategory_ == nullptr && return this->androidMessageOppoNotifyLevel_ == nullptr && return this->androidMessageVivoCategory_ == nullptr && return this->androidMusic_ == nullptr
        && return this->androidNotificationBarPriority_ == nullptr && return this->androidNotificationBarType_ == nullptr && return this->androidNotificationChannel_ == nullptr && return this->androidNotificationGroup_ == nullptr && return this->androidNotificationHonorChannel_ == nullptr
        && return this->androidNotificationHuaweiChannel_ == nullptr && return this->androidNotificationNotifyId_ == nullptr && return this->androidNotificationThreadId_ == nullptr && return this->androidNotificationVivoChannel_ == nullptr && return this->androidNotificationXiaomiChannel_ == nullptr
        && return this->androidNotifyType_ == nullptr && return this->androidOpenType_ == nullptr && return this->androidOpenUrl_ == nullptr && return this->androidOppoPrivateContentParameters_ == nullptr && return this->androidOppoPrivateMsgTemplateId_ == nullptr
        && return this->androidOppoPrivateTitleParameters_ == nullptr && return this->androidPopupActivity_ == nullptr && return this->androidPopupBody_ == nullptr && return this->androidPopupTitle_ == nullptr && return this->androidRemind_ == nullptr
        && return this->androidRenderStyle_ == nullptr && return this->androidTargetUserType_ == nullptr && return this->androidVivoPushMode_ == nullptr && return this->androidVivoReceiptId_ == nullptr && return this->androidXiaoMiActivity_ == nullptr
        && return this->androidXiaoMiNotifyBody_ == nullptr && return this->androidXiaoMiNotifyTitle_ == nullptr && return this->androidXiaomiBigPictureUrl_ == nullptr && return this->androidXiaomiImageUrl_ == nullptr && return this->appKey_ == nullptr
        && return this->body_ == nullptr && return this->deviceType_ == nullptr && return this->expireTime_ == nullptr && return this->harmonyAction_ == nullptr && return this->harmonyActionType_ == nullptr
        && return this->harmonyBadgeAddNum_ == nullptr && return this->harmonyBadgeSetNum_ == nullptr && return this->harmonyCategory_ == nullptr && return this->harmonyExtParameters_ == nullptr && return this->harmonyExtensionExtraData_ == nullptr
        && return this->harmonyExtensionPush_ == nullptr && return this->harmonyImageUrl_ == nullptr && return this->harmonyInboxContent_ == nullptr && return this->harmonyLiveViewPayload_ == nullptr && return this->harmonyNotificationSlotType_ == nullptr
        && return this->harmonyNotifyId_ == nullptr && return this->harmonyReceiptId_ == nullptr && return this->harmonyRemind_ == nullptr && return this->harmonyRemindBody_ == nullptr && return this->harmonyRemindTitle_ == nullptr
        && return this->harmonyRenderStyle_ == nullptr && return this->harmonyTestMessage_ == nullptr && return this->harmonyUri_ == nullptr && return this->idempotentToken_ == nullptr && return this->jobKey_ == nullptr
        && return this->pushTime_ == nullptr && return this->pushType_ == nullptr && return this->sendChannels_ == nullptr && return this->sendSpeed_ == nullptr && return this->smsDelaySecs_ == nullptr
        && return this->smsParams_ == nullptr && return this->smsSendPolicy_ == nullptr && return this->smsSignName_ == nullptr && return this->smsTemplateName_ == nullptr && return this->storeOffline_ == nullptr
        && return this->target_ == nullptr && return this->targetValue_ == nullptr && return this->title_ == nullptr && return this->trim_ == nullptr && return this->iOSApnsEnv_ == nullptr
        && return this->iOSBadge_ == nullptr && return this->iOSBadgeAutoIncrement_ == nullptr && return this->iOSExtParameters_ == nullptr && return this->iOSInterruptionLevel_ == nullptr && return this->iOSLiveActivityAttributes_ == nullptr
        && return this->iOSLiveActivityAttributesType_ == nullptr && return this->iOSLiveActivityContentState_ == nullptr && return this->iOSLiveActivityDismissalDate_ == nullptr && return this->iOSLiveActivityEvent_ == nullptr && return this->iOSLiveActivityId_ == nullptr
        && return this->iOSLiveActivityStaleDate_ == nullptr && return this->iOSMusic_ == nullptr && return this->iOSMutableContent_ == nullptr && return this->iOSNotificationCategory_ == nullptr && return this->iOSNotificationCollapseId_ == nullptr
        && return this->iOSNotificationThreadId_ == nullptr && return this->iOSRelevanceScore_ == nullptr && return this->iOSRemind_ == nullptr && return this->iOSRemindBody_ == nullptr && return this->iOSSilentNotification_ == nullptr
        && return this->iOSSubtitle_ == nullptr; };
    // androidActivity Field Functions 
    bool hasAndroidActivity() const { return this->androidActivity_ != nullptr;};
    void deleteAndroidActivity() { this->androidActivity_ = nullptr;};
    inline string androidActivity() const { DARABONBA_PTR_GET_DEFAULT(androidActivity_, "") };
    inline PushRequest& setAndroidActivity(string androidActivity) { DARABONBA_PTR_SET_VALUE(androidActivity_, androidActivity) };


    // androidBadgeAddNum Field Functions 
    bool hasAndroidBadgeAddNum() const { return this->androidBadgeAddNum_ != nullptr;};
    void deleteAndroidBadgeAddNum() { this->androidBadgeAddNum_ = nullptr;};
    inline int32_t androidBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeAddNum_, 0) };
    inline PushRequest& setAndroidBadgeAddNum(int32_t androidBadgeAddNum) { DARABONBA_PTR_SET_VALUE(androidBadgeAddNum_, androidBadgeAddNum) };


    // androidBadgeClass Field Functions 
    bool hasAndroidBadgeClass() const { return this->androidBadgeClass_ != nullptr;};
    void deleteAndroidBadgeClass() { this->androidBadgeClass_ = nullptr;};
    inline string androidBadgeClass() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeClass_, "") };
    inline PushRequest& setAndroidBadgeClass(string androidBadgeClass) { DARABONBA_PTR_SET_VALUE(androidBadgeClass_, androidBadgeClass) };


    // androidBadgeSetNum Field Functions 
    bool hasAndroidBadgeSetNum() const { return this->androidBadgeSetNum_ != nullptr;};
    void deleteAndroidBadgeSetNum() { this->androidBadgeSetNum_ = nullptr;};
    inline int32_t androidBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeSetNum_, 0) };
    inline PushRequest& setAndroidBadgeSetNum(int32_t androidBadgeSetNum) { DARABONBA_PTR_SET_VALUE(androidBadgeSetNum_, androidBadgeSetNum) };


    // androidBigBody Field Functions 
    bool hasAndroidBigBody() const { return this->androidBigBody_ != nullptr;};
    void deleteAndroidBigBody() { this->androidBigBody_ = nullptr;};
    inline string androidBigBody() const { DARABONBA_PTR_GET_DEFAULT(androidBigBody_, "") };
    inline PushRequest& setAndroidBigBody(string androidBigBody) { DARABONBA_PTR_SET_VALUE(androidBigBody_, androidBigBody) };


    // androidBigPictureUrl Field Functions 
    bool hasAndroidBigPictureUrl() const { return this->androidBigPictureUrl_ != nullptr;};
    void deleteAndroidBigPictureUrl() { this->androidBigPictureUrl_ = nullptr;};
    inline string androidBigPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(androidBigPictureUrl_, "") };
    inline PushRequest& setAndroidBigPictureUrl(string androidBigPictureUrl) { DARABONBA_PTR_SET_VALUE(androidBigPictureUrl_, androidBigPictureUrl) };


    // androidBigTitle Field Functions 
    bool hasAndroidBigTitle() const { return this->androidBigTitle_ != nullptr;};
    void deleteAndroidBigTitle() { this->androidBigTitle_ = nullptr;};
    inline string androidBigTitle() const { DARABONBA_PTR_GET_DEFAULT(androidBigTitle_, "") };
    inline PushRequest& setAndroidBigTitle(string androidBigTitle) { DARABONBA_PTR_SET_VALUE(androidBigTitle_, androidBigTitle) };


    // androidExtParameters Field Functions 
    bool hasAndroidExtParameters() const { return this->androidExtParameters_ != nullptr;};
    void deleteAndroidExtParameters() { this->androidExtParameters_ = nullptr;};
    inline string androidExtParameters() const { DARABONBA_PTR_GET_DEFAULT(androidExtParameters_, "") };
    inline PushRequest& setAndroidExtParameters(string androidExtParameters) { DARABONBA_PTR_SET_VALUE(androidExtParameters_, androidExtParameters) };


    // androidHonorTargetUserType Field Functions 
    bool hasAndroidHonorTargetUserType() const { return this->androidHonorTargetUserType_ != nullptr;};
    void deleteAndroidHonorTargetUserType() { this->androidHonorTargetUserType_ = nullptr;};
    inline int32_t androidHonorTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidHonorTargetUserType_, 0) };
    inline PushRequest& setAndroidHonorTargetUserType(int32_t androidHonorTargetUserType) { DARABONBA_PTR_SET_VALUE(androidHonorTargetUserType_, androidHonorTargetUserType) };


    // androidHuaweiLiveNotificationPayload Field Functions 
    bool hasAndroidHuaweiLiveNotificationPayload() const { return this->androidHuaweiLiveNotificationPayload_ != nullptr;};
    void deleteAndroidHuaweiLiveNotificationPayload() { this->androidHuaweiLiveNotificationPayload_ = nullptr;};
    inline string androidHuaweiLiveNotificationPayload() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiLiveNotificationPayload_, "") };
    inline PushRequest& setAndroidHuaweiLiveNotificationPayload(string androidHuaweiLiveNotificationPayload) { DARABONBA_PTR_SET_VALUE(androidHuaweiLiveNotificationPayload_, androidHuaweiLiveNotificationPayload) };


    // androidHuaweiReceiptId Field Functions 
    bool hasAndroidHuaweiReceiptId() const { return this->androidHuaweiReceiptId_ != nullptr;};
    void deleteAndroidHuaweiReceiptId() { this->androidHuaweiReceiptId_ = nullptr;};
    inline string androidHuaweiReceiptId() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiReceiptId_, "") };
    inline PushRequest& setAndroidHuaweiReceiptId(string androidHuaweiReceiptId) { DARABONBA_PTR_SET_VALUE(androidHuaweiReceiptId_, androidHuaweiReceiptId) };


    // androidHuaweiTargetUserType Field Functions 
    bool hasAndroidHuaweiTargetUserType() const { return this->androidHuaweiTargetUserType_ != nullptr;};
    void deleteAndroidHuaweiTargetUserType() { this->androidHuaweiTargetUserType_ = nullptr;};
    inline int32_t androidHuaweiTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiTargetUserType_, 0) };
    inline PushRequest& setAndroidHuaweiTargetUserType(int32_t androidHuaweiTargetUserType) { DARABONBA_PTR_SET_VALUE(androidHuaweiTargetUserType_, androidHuaweiTargetUserType) };


    // androidImageUrl Field Functions 
    bool hasAndroidImageUrl() const { return this->androidImageUrl_ != nullptr;};
    void deleteAndroidImageUrl() { this->androidImageUrl_ = nullptr;};
    inline string androidImageUrl() const { DARABONBA_PTR_GET_DEFAULT(androidImageUrl_, "") };
    inline PushRequest& setAndroidImageUrl(string androidImageUrl) { DARABONBA_PTR_SET_VALUE(androidImageUrl_, androidImageUrl) };


    // androidInboxBody Field Functions 
    bool hasAndroidInboxBody() const { return this->androidInboxBody_ != nullptr;};
    void deleteAndroidInboxBody() { this->androidInboxBody_ = nullptr;};
    inline string androidInboxBody() const { DARABONBA_PTR_GET_DEFAULT(androidInboxBody_, "") };
    inline PushRequest& setAndroidInboxBody(string androidInboxBody) { DARABONBA_PTR_SET_VALUE(androidInboxBody_, androidInboxBody) };


    // androidMeizuNoticeMsgType Field Functions 
    bool hasAndroidMeizuNoticeMsgType() const { return this->androidMeizuNoticeMsgType_ != nullptr;};
    void deleteAndroidMeizuNoticeMsgType() { this->androidMeizuNoticeMsgType_ = nullptr;};
    inline int32_t androidMeizuNoticeMsgType() const { DARABONBA_PTR_GET_DEFAULT(androidMeizuNoticeMsgType_, 0) };
    inline PushRequest& setAndroidMeizuNoticeMsgType(int32_t androidMeizuNoticeMsgType) { DARABONBA_PTR_SET_VALUE(androidMeizuNoticeMsgType_, androidMeizuNoticeMsgType) };


    // androidMessageHuaweiCategory Field Functions 
    bool hasAndroidMessageHuaweiCategory() const { return this->androidMessageHuaweiCategory_ != nullptr;};
    void deleteAndroidMessageHuaweiCategory() { this->androidMessageHuaweiCategory_ = nullptr;};
    inline string androidMessageHuaweiCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageHuaweiCategory_, "") };
    inline PushRequest& setAndroidMessageHuaweiCategory(string androidMessageHuaweiCategory) { DARABONBA_PTR_SET_VALUE(androidMessageHuaweiCategory_, androidMessageHuaweiCategory) };


    // androidMessageHuaweiUrgency Field Functions 
    bool hasAndroidMessageHuaweiUrgency() const { return this->androidMessageHuaweiUrgency_ != nullptr;};
    void deleteAndroidMessageHuaweiUrgency() { this->androidMessageHuaweiUrgency_ = nullptr;};
    inline string androidMessageHuaweiUrgency() const { DARABONBA_PTR_GET_DEFAULT(androidMessageHuaweiUrgency_, "") };
    inline PushRequest& setAndroidMessageHuaweiUrgency(string androidMessageHuaweiUrgency) { DARABONBA_PTR_SET_VALUE(androidMessageHuaweiUrgency_, androidMessageHuaweiUrgency) };


    // androidMessageOppoCategory Field Functions 
    bool hasAndroidMessageOppoCategory() const { return this->androidMessageOppoCategory_ != nullptr;};
    void deleteAndroidMessageOppoCategory() { this->androidMessageOppoCategory_ = nullptr;};
    inline string androidMessageOppoCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageOppoCategory_, "") };
    inline PushRequest& setAndroidMessageOppoCategory(string androidMessageOppoCategory) { DARABONBA_PTR_SET_VALUE(androidMessageOppoCategory_, androidMessageOppoCategory) };


    // androidMessageOppoNotifyLevel Field Functions 
    bool hasAndroidMessageOppoNotifyLevel() const { return this->androidMessageOppoNotifyLevel_ != nullptr;};
    void deleteAndroidMessageOppoNotifyLevel() { this->androidMessageOppoNotifyLevel_ = nullptr;};
    inline int32_t androidMessageOppoNotifyLevel() const { DARABONBA_PTR_GET_DEFAULT(androidMessageOppoNotifyLevel_, 0) };
    inline PushRequest& setAndroidMessageOppoNotifyLevel(int32_t androidMessageOppoNotifyLevel) { DARABONBA_PTR_SET_VALUE(androidMessageOppoNotifyLevel_, androidMessageOppoNotifyLevel) };


    // androidMessageVivoCategory Field Functions 
    bool hasAndroidMessageVivoCategory() const { return this->androidMessageVivoCategory_ != nullptr;};
    void deleteAndroidMessageVivoCategory() { this->androidMessageVivoCategory_ = nullptr;};
    inline string androidMessageVivoCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageVivoCategory_, "") };
    inline PushRequest& setAndroidMessageVivoCategory(string androidMessageVivoCategory) { DARABONBA_PTR_SET_VALUE(androidMessageVivoCategory_, androidMessageVivoCategory) };


    // androidMusic Field Functions 
    bool hasAndroidMusic() const { return this->androidMusic_ != nullptr;};
    void deleteAndroidMusic() { this->androidMusic_ = nullptr;};
    inline string androidMusic() const { DARABONBA_PTR_GET_DEFAULT(androidMusic_, "") };
    inline PushRequest& setAndroidMusic(string androidMusic) { DARABONBA_PTR_SET_VALUE(androidMusic_, androidMusic) };


    // androidNotificationBarPriority Field Functions 
    bool hasAndroidNotificationBarPriority() const { return this->androidNotificationBarPriority_ != nullptr;};
    void deleteAndroidNotificationBarPriority() { this->androidNotificationBarPriority_ = nullptr;};
    inline int32_t androidNotificationBarPriority() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationBarPriority_, 0) };
    inline PushRequest& setAndroidNotificationBarPriority(int32_t androidNotificationBarPriority) { DARABONBA_PTR_SET_VALUE(androidNotificationBarPriority_, androidNotificationBarPriority) };


    // androidNotificationBarType Field Functions 
    bool hasAndroidNotificationBarType() const { return this->androidNotificationBarType_ != nullptr;};
    void deleteAndroidNotificationBarType() { this->androidNotificationBarType_ = nullptr;};
    inline int32_t androidNotificationBarType() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationBarType_, 0) };
    inline PushRequest& setAndroidNotificationBarType(int32_t androidNotificationBarType) { DARABONBA_PTR_SET_VALUE(androidNotificationBarType_, androidNotificationBarType) };


    // androidNotificationChannel Field Functions 
    bool hasAndroidNotificationChannel() const { return this->androidNotificationChannel_ != nullptr;};
    void deleteAndroidNotificationChannel() { this->androidNotificationChannel_ = nullptr;};
    inline string androidNotificationChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationChannel_, "") };
    inline PushRequest& setAndroidNotificationChannel(string androidNotificationChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationChannel_, androidNotificationChannel) };


    // androidNotificationGroup Field Functions 
    bool hasAndroidNotificationGroup() const { return this->androidNotificationGroup_ != nullptr;};
    void deleteAndroidNotificationGroup() { this->androidNotificationGroup_ = nullptr;};
    inline string androidNotificationGroup() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationGroup_, "") };
    inline PushRequest& setAndroidNotificationGroup(string androidNotificationGroup) { DARABONBA_PTR_SET_VALUE(androidNotificationGroup_, androidNotificationGroup) };


    // androidNotificationHonorChannel Field Functions 
    bool hasAndroidNotificationHonorChannel() const { return this->androidNotificationHonorChannel_ != nullptr;};
    void deleteAndroidNotificationHonorChannel() { this->androidNotificationHonorChannel_ = nullptr;};
    inline string androidNotificationHonorChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationHonorChannel_, "") };
    inline PushRequest& setAndroidNotificationHonorChannel(string androidNotificationHonorChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationHonorChannel_, androidNotificationHonorChannel) };


    // androidNotificationHuaweiChannel Field Functions 
    bool hasAndroidNotificationHuaweiChannel() const { return this->androidNotificationHuaweiChannel_ != nullptr;};
    void deleteAndroidNotificationHuaweiChannel() { this->androidNotificationHuaweiChannel_ = nullptr;};
    inline string androidNotificationHuaweiChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationHuaweiChannel_, "") };
    inline PushRequest& setAndroidNotificationHuaweiChannel(string androidNotificationHuaweiChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationHuaweiChannel_, androidNotificationHuaweiChannel) };


    // androidNotificationNotifyId Field Functions 
    bool hasAndroidNotificationNotifyId() const { return this->androidNotificationNotifyId_ != nullptr;};
    void deleteAndroidNotificationNotifyId() { this->androidNotificationNotifyId_ = nullptr;};
    inline int32_t androidNotificationNotifyId() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationNotifyId_, 0) };
    inline PushRequest& setAndroidNotificationNotifyId(int32_t androidNotificationNotifyId) { DARABONBA_PTR_SET_VALUE(androidNotificationNotifyId_, androidNotificationNotifyId) };


    // androidNotificationThreadId Field Functions 
    bool hasAndroidNotificationThreadId() const { return this->androidNotificationThreadId_ != nullptr;};
    void deleteAndroidNotificationThreadId() { this->androidNotificationThreadId_ = nullptr;};
    inline string androidNotificationThreadId() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationThreadId_, "") };
    inline PushRequest& setAndroidNotificationThreadId(string androidNotificationThreadId) { DARABONBA_PTR_SET_VALUE(androidNotificationThreadId_, androidNotificationThreadId) };


    // androidNotificationVivoChannel Field Functions 
    bool hasAndroidNotificationVivoChannel() const { return this->androidNotificationVivoChannel_ != nullptr;};
    void deleteAndroidNotificationVivoChannel() { this->androidNotificationVivoChannel_ = nullptr;};
    inline string androidNotificationVivoChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationVivoChannel_, "") };
    inline PushRequest& setAndroidNotificationVivoChannel(string androidNotificationVivoChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationVivoChannel_, androidNotificationVivoChannel) };


    // androidNotificationXiaomiChannel Field Functions 
    bool hasAndroidNotificationXiaomiChannel() const { return this->androidNotificationXiaomiChannel_ != nullptr;};
    void deleteAndroidNotificationXiaomiChannel() { this->androidNotificationXiaomiChannel_ = nullptr;};
    inline string androidNotificationXiaomiChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationXiaomiChannel_, "") };
    inline PushRequest& setAndroidNotificationXiaomiChannel(string androidNotificationXiaomiChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationXiaomiChannel_, androidNotificationXiaomiChannel) };


    // androidNotifyType Field Functions 
    bool hasAndroidNotifyType() const { return this->androidNotifyType_ != nullptr;};
    void deleteAndroidNotifyType() { this->androidNotifyType_ = nullptr;};
    inline string androidNotifyType() const { DARABONBA_PTR_GET_DEFAULT(androidNotifyType_, "") };
    inline PushRequest& setAndroidNotifyType(string androidNotifyType) { DARABONBA_PTR_SET_VALUE(androidNotifyType_, androidNotifyType) };


    // androidOpenType Field Functions 
    bool hasAndroidOpenType() const { return this->androidOpenType_ != nullptr;};
    void deleteAndroidOpenType() { this->androidOpenType_ = nullptr;};
    inline string androidOpenType() const { DARABONBA_PTR_GET_DEFAULT(androidOpenType_, "") };
    inline PushRequest& setAndroidOpenType(string androidOpenType) { DARABONBA_PTR_SET_VALUE(androidOpenType_, androidOpenType) };


    // androidOpenUrl Field Functions 
    bool hasAndroidOpenUrl() const { return this->androidOpenUrl_ != nullptr;};
    void deleteAndroidOpenUrl() { this->androidOpenUrl_ = nullptr;};
    inline string androidOpenUrl() const { DARABONBA_PTR_GET_DEFAULT(androidOpenUrl_, "") };
    inline PushRequest& setAndroidOpenUrl(string androidOpenUrl) { DARABONBA_PTR_SET_VALUE(androidOpenUrl_, androidOpenUrl) };


    // androidOppoPrivateContentParameters Field Functions 
    bool hasAndroidOppoPrivateContentParameters() const { return this->androidOppoPrivateContentParameters_ != nullptr;};
    void deleteAndroidOppoPrivateContentParameters() { this->androidOppoPrivateContentParameters_ = nullptr;};
    inline const map<string, string> & androidOppoPrivateContentParameters() const { DARABONBA_PTR_GET_CONST(androidOppoPrivateContentParameters_, map<string, string>) };
    inline map<string, string> androidOppoPrivateContentParameters() { DARABONBA_PTR_GET(androidOppoPrivateContentParameters_, map<string, string>) };
    inline PushRequest& setAndroidOppoPrivateContentParameters(const map<string, string> & androidOppoPrivateContentParameters) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateContentParameters_, androidOppoPrivateContentParameters) };
    inline PushRequest& setAndroidOppoPrivateContentParameters(map<string, string> && androidOppoPrivateContentParameters) { DARABONBA_PTR_SET_RVALUE(androidOppoPrivateContentParameters_, androidOppoPrivateContentParameters) };


    // androidOppoPrivateMsgTemplateId Field Functions 
    bool hasAndroidOppoPrivateMsgTemplateId() const { return this->androidOppoPrivateMsgTemplateId_ != nullptr;};
    void deleteAndroidOppoPrivateMsgTemplateId() { this->androidOppoPrivateMsgTemplateId_ = nullptr;};
    inline string androidOppoPrivateMsgTemplateId() const { DARABONBA_PTR_GET_DEFAULT(androidOppoPrivateMsgTemplateId_, "") };
    inline PushRequest& setAndroidOppoPrivateMsgTemplateId(string androidOppoPrivateMsgTemplateId) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateMsgTemplateId_, androidOppoPrivateMsgTemplateId) };


    // androidOppoPrivateTitleParameters Field Functions 
    bool hasAndroidOppoPrivateTitleParameters() const { return this->androidOppoPrivateTitleParameters_ != nullptr;};
    void deleteAndroidOppoPrivateTitleParameters() { this->androidOppoPrivateTitleParameters_ = nullptr;};
    inline const map<string, string> & androidOppoPrivateTitleParameters() const { DARABONBA_PTR_GET_CONST(androidOppoPrivateTitleParameters_, map<string, string>) };
    inline map<string, string> androidOppoPrivateTitleParameters() { DARABONBA_PTR_GET(androidOppoPrivateTitleParameters_, map<string, string>) };
    inline PushRequest& setAndroidOppoPrivateTitleParameters(const map<string, string> & androidOppoPrivateTitleParameters) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateTitleParameters_, androidOppoPrivateTitleParameters) };
    inline PushRequest& setAndroidOppoPrivateTitleParameters(map<string, string> && androidOppoPrivateTitleParameters) { DARABONBA_PTR_SET_RVALUE(androidOppoPrivateTitleParameters_, androidOppoPrivateTitleParameters) };


    // androidPopupActivity Field Functions 
    bool hasAndroidPopupActivity() const { return this->androidPopupActivity_ != nullptr;};
    void deleteAndroidPopupActivity() { this->androidPopupActivity_ = nullptr;};
    inline string androidPopupActivity() const { DARABONBA_PTR_GET_DEFAULT(androidPopupActivity_, "") };
    inline PushRequest& setAndroidPopupActivity(string androidPopupActivity) { DARABONBA_PTR_SET_VALUE(androidPopupActivity_, androidPopupActivity) };


    // androidPopupBody Field Functions 
    bool hasAndroidPopupBody() const { return this->androidPopupBody_ != nullptr;};
    void deleteAndroidPopupBody() { this->androidPopupBody_ = nullptr;};
    inline string androidPopupBody() const { DARABONBA_PTR_GET_DEFAULT(androidPopupBody_, "") };
    inline PushRequest& setAndroidPopupBody(string androidPopupBody) { DARABONBA_PTR_SET_VALUE(androidPopupBody_, androidPopupBody) };


    // androidPopupTitle Field Functions 
    bool hasAndroidPopupTitle() const { return this->androidPopupTitle_ != nullptr;};
    void deleteAndroidPopupTitle() { this->androidPopupTitle_ = nullptr;};
    inline string androidPopupTitle() const { DARABONBA_PTR_GET_DEFAULT(androidPopupTitle_, "") };
    inline PushRequest& setAndroidPopupTitle(string androidPopupTitle) { DARABONBA_PTR_SET_VALUE(androidPopupTitle_, androidPopupTitle) };


    // androidRemind Field Functions 
    bool hasAndroidRemind() const { return this->androidRemind_ != nullptr;};
    void deleteAndroidRemind() { this->androidRemind_ = nullptr;};
    inline bool androidRemind() const { DARABONBA_PTR_GET_DEFAULT(androidRemind_, false) };
    inline PushRequest& setAndroidRemind(bool androidRemind) { DARABONBA_PTR_SET_VALUE(androidRemind_, androidRemind) };


    // androidRenderStyle Field Functions 
    bool hasAndroidRenderStyle() const { return this->androidRenderStyle_ != nullptr;};
    void deleteAndroidRenderStyle() { this->androidRenderStyle_ = nullptr;};
    inline int32_t androidRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(androidRenderStyle_, 0) };
    inline PushRequest& setAndroidRenderStyle(int32_t androidRenderStyle) { DARABONBA_PTR_SET_VALUE(androidRenderStyle_, androidRenderStyle) };


    // androidTargetUserType Field Functions 
    bool hasAndroidTargetUserType() const { return this->androidTargetUserType_ != nullptr;};
    void deleteAndroidTargetUserType() { this->androidTargetUserType_ = nullptr;};
    inline int32_t androidTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidTargetUserType_, 0) };
    inline PushRequest& setAndroidTargetUserType(int32_t androidTargetUserType) { DARABONBA_PTR_SET_VALUE(androidTargetUserType_, androidTargetUserType) };


    // androidVivoPushMode Field Functions 
    bool hasAndroidVivoPushMode() const { return this->androidVivoPushMode_ != nullptr;};
    void deleteAndroidVivoPushMode() { this->androidVivoPushMode_ = nullptr;};
    inline int32_t androidVivoPushMode() const { DARABONBA_PTR_GET_DEFAULT(androidVivoPushMode_, 0) };
    inline PushRequest& setAndroidVivoPushMode(int32_t androidVivoPushMode) { DARABONBA_PTR_SET_VALUE(androidVivoPushMode_, androidVivoPushMode) };


    // androidVivoReceiptId Field Functions 
    bool hasAndroidVivoReceiptId() const { return this->androidVivoReceiptId_ != nullptr;};
    void deleteAndroidVivoReceiptId() { this->androidVivoReceiptId_ = nullptr;};
    inline string androidVivoReceiptId() const { DARABONBA_PTR_GET_DEFAULT(androidVivoReceiptId_, "") };
    inline PushRequest& setAndroidVivoReceiptId(string androidVivoReceiptId) { DARABONBA_PTR_SET_VALUE(androidVivoReceiptId_, androidVivoReceiptId) };


    // androidXiaoMiActivity Field Functions 
    bool hasAndroidXiaoMiActivity() const { return this->androidXiaoMiActivity_ != nullptr;};
    void deleteAndroidXiaoMiActivity() { this->androidXiaoMiActivity_ = nullptr;};
    inline string androidXiaoMiActivity() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiActivity_, "") };
    inline PushRequest& setAndroidXiaoMiActivity(string androidXiaoMiActivity) { DARABONBA_PTR_SET_VALUE(androidXiaoMiActivity_, androidXiaoMiActivity) };


    // androidXiaoMiNotifyBody Field Functions 
    bool hasAndroidXiaoMiNotifyBody() const { return this->androidXiaoMiNotifyBody_ != nullptr;};
    void deleteAndroidXiaoMiNotifyBody() { this->androidXiaoMiNotifyBody_ = nullptr;};
    inline string androidXiaoMiNotifyBody() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiNotifyBody_, "") };
    inline PushRequest& setAndroidXiaoMiNotifyBody(string androidXiaoMiNotifyBody) { DARABONBA_PTR_SET_VALUE(androidXiaoMiNotifyBody_, androidXiaoMiNotifyBody) };


    // androidXiaoMiNotifyTitle Field Functions 
    bool hasAndroidXiaoMiNotifyTitle() const { return this->androidXiaoMiNotifyTitle_ != nullptr;};
    void deleteAndroidXiaoMiNotifyTitle() { this->androidXiaoMiNotifyTitle_ = nullptr;};
    inline string androidXiaoMiNotifyTitle() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiNotifyTitle_, "") };
    inline PushRequest& setAndroidXiaoMiNotifyTitle(string androidXiaoMiNotifyTitle) { DARABONBA_PTR_SET_VALUE(androidXiaoMiNotifyTitle_, androidXiaoMiNotifyTitle) };


    // androidXiaomiBigPictureUrl Field Functions 
    bool hasAndroidXiaomiBigPictureUrl() const { return this->androidXiaomiBigPictureUrl_ != nullptr;};
    void deleteAndroidXiaomiBigPictureUrl() { this->androidXiaomiBigPictureUrl_ = nullptr;};
    inline string androidXiaomiBigPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiBigPictureUrl_, "") };
    inline PushRequest& setAndroidXiaomiBigPictureUrl(string androidXiaomiBigPictureUrl) { DARABONBA_PTR_SET_VALUE(androidXiaomiBigPictureUrl_, androidXiaomiBigPictureUrl) };


    // androidXiaomiImageUrl Field Functions 
    bool hasAndroidXiaomiImageUrl() const { return this->androidXiaomiImageUrl_ != nullptr;};
    void deleteAndroidXiaomiImageUrl() { this->androidXiaomiImageUrl_ = nullptr;};
    inline string androidXiaomiImageUrl() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiImageUrl_, "") };
    inline PushRequest& setAndroidXiaomiImageUrl(string androidXiaomiImageUrl) { DARABONBA_PTR_SET_VALUE(androidXiaomiImageUrl_, androidXiaomiImageUrl) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline PushRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PushRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline PushRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline PushRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // harmonyAction Field Functions 
    bool hasHarmonyAction() const { return this->harmonyAction_ != nullptr;};
    void deleteHarmonyAction() { this->harmonyAction_ = nullptr;};
    inline string harmonyAction() const { DARABONBA_PTR_GET_DEFAULT(harmonyAction_, "") };
    inline PushRequest& setHarmonyAction(string harmonyAction) { DARABONBA_PTR_SET_VALUE(harmonyAction_, harmonyAction) };


    // harmonyActionType Field Functions 
    bool hasHarmonyActionType() const { return this->harmonyActionType_ != nullptr;};
    void deleteHarmonyActionType() { this->harmonyActionType_ = nullptr;};
    inline string harmonyActionType() const { DARABONBA_PTR_GET_DEFAULT(harmonyActionType_, "") };
    inline PushRequest& setHarmonyActionType(string harmonyActionType) { DARABONBA_PTR_SET_VALUE(harmonyActionType_, harmonyActionType) };


    // harmonyBadgeAddNum Field Functions 
    bool hasHarmonyBadgeAddNum() const { return this->harmonyBadgeAddNum_ != nullptr;};
    void deleteHarmonyBadgeAddNum() { this->harmonyBadgeAddNum_ = nullptr;};
    inline int32_t harmonyBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(harmonyBadgeAddNum_, 0) };
    inline PushRequest& setHarmonyBadgeAddNum(int32_t harmonyBadgeAddNum) { DARABONBA_PTR_SET_VALUE(harmonyBadgeAddNum_, harmonyBadgeAddNum) };


    // harmonyBadgeSetNum Field Functions 
    bool hasHarmonyBadgeSetNum() const { return this->harmonyBadgeSetNum_ != nullptr;};
    void deleteHarmonyBadgeSetNum() { this->harmonyBadgeSetNum_ = nullptr;};
    inline int32_t harmonyBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(harmonyBadgeSetNum_, 0) };
    inline PushRequest& setHarmonyBadgeSetNum(int32_t harmonyBadgeSetNum) { DARABONBA_PTR_SET_VALUE(harmonyBadgeSetNum_, harmonyBadgeSetNum) };


    // harmonyCategory Field Functions 
    bool hasHarmonyCategory() const { return this->harmonyCategory_ != nullptr;};
    void deleteHarmonyCategory() { this->harmonyCategory_ = nullptr;};
    inline string harmonyCategory() const { DARABONBA_PTR_GET_DEFAULT(harmonyCategory_, "") };
    inline PushRequest& setHarmonyCategory(string harmonyCategory) { DARABONBA_PTR_SET_VALUE(harmonyCategory_, harmonyCategory) };


    // harmonyExtParameters Field Functions 
    bool hasHarmonyExtParameters() const { return this->harmonyExtParameters_ != nullptr;};
    void deleteHarmonyExtParameters() { this->harmonyExtParameters_ = nullptr;};
    inline string harmonyExtParameters() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtParameters_, "") };
    inline PushRequest& setHarmonyExtParameters(string harmonyExtParameters) { DARABONBA_PTR_SET_VALUE(harmonyExtParameters_, harmonyExtParameters) };


    // harmonyExtensionExtraData Field Functions 
    bool hasHarmonyExtensionExtraData() const { return this->harmonyExtensionExtraData_ != nullptr;};
    void deleteHarmonyExtensionExtraData() { this->harmonyExtensionExtraData_ = nullptr;};
    inline string harmonyExtensionExtraData() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtensionExtraData_, "") };
    inline PushRequest& setHarmonyExtensionExtraData(string harmonyExtensionExtraData) { DARABONBA_PTR_SET_VALUE(harmonyExtensionExtraData_, harmonyExtensionExtraData) };


    // harmonyExtensionPush Field Functions 
    bool hasHarmonyExtensionPush() const { return this->harmonyExtensionPush_ != nullptr;};
    void deleteHarmonyExtensionPush() { this->harmonyExtensionPush_ = nullptr;};
    inline bool harmonyExtensionPush() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtensionPush_, false) };
    inline PushRequest& setHarmonyExtensionPush(bool harmonyExtensionPush) { DARABONBA_PTR_SET_VALUE(harmonyExtensionPush_, harmonyExtensionPush) };


    // harmonyImageUrl Field Functions 
    bool hasHarmonyImageUrl() const { return this->harmonyImageUrl_ != nullptr;};
    void deleteHarmonyImageUrl() { this->harmonyImageUrl_ = nullptr;};
    inline string harmonyImageUrl() const { DARABONBA_PTR_GET_DEFAULT(harmonyImageUrl_, "") };
    inline PushRequest& setHarmonyImageUrl(string harmonyImageUrl) { DARABONBA_PTR_SET_VALUE(harmonyImageUrl_, harmonyImageUrl) };


    // harmonyInboxContent Field Functions 
    bool hasHarmonyInboxContent() const { return this->harmonyInboxContent_ != nullptr;};
    void deleteHarmonyInboxContent() { this->harmonyInboxContent_ = nullptr;};
    inline string harmonyInboxContent() const { DARABONBA_PTR_GET_DEFAULT(harmonyInboxContent_, "") };
    inline PushRequest& setHarmonyInboxContent(string harmonyInboxContent) { DARABONBA_PTR_SET_VALUE(harmonyInboxContent_, harmonyInboxContent) };


    // harmonyLiveViewPayload Field Functions 
    bool hasHarmonyLiveViewPayload() const { return this->harmonyLiveViewPayload_ != nullptr;};
    void deleteHarmonyLiveViewPayload() { this->harmonyLiveViewPayload_ = nullptr;};
    inline string harmonyLiveViewPayload() const { DARABONBA_PTR_GET_DEFAULT(harmonyLiveViewPayload_, "") };
    inline PushRequest& setHarmonyLiveViewPayload(string harmonyLiveViewPayload) { DARABONBA_PTR_SET_VALUE(harmonyLiveViewPayload_, harmonyLiveViewPayload) };


    // harmonyNotificationSlotType Field Functions 
    bool hasHarmonyNotificationSlotType() const { return this->harmonyNotificationSlotType_ != nullptr;};
    void deleteHarmonyNotificationSlotType() { this->harmonyNotificationSlotType_ = nullptr;};
    inline string harmonyNotificationSlotType() const { DARABONBA_PTR_GET_DEFAULT(harmonyNotificationSlotType_, "") };
    inline PushRequest& setHarmonyNotificationSlotType(string harmonyNotificationSlotType) { DARABONBA_PTR_SET_VALUE(harmonyNotificationSlotType_, harmonyNotificationSlotType) };


    // harmonyNotifyId Field Functions 
    bool hasHarmonyNotifyId() const { return this->harmonyNotifyId_ != nullptr;};
    void deleteHarmonyNotifyId() { this->harmonyNotifyId_ = nullptr;};
    inline int32_t harmonyNotifyId() const { DARABONBA_PTR_GET_DEFAULT(harmonyNotifyId_, 0) };
    inline PushRequest& setHarmonyNotifyId(int32_t harmonyNotifyId) { DARABONBA_PTR_SET_VALUE(harmonyNotifyId_, harmonyNotifyId) };


    // harmonyReceiptId Field Functions 
    bool hasHarmonyReceiptId() const { return this->harmonyReceiptId_ != nullptr;};
    void deleteHarmonyReceiptId() { this->harmonyReceiptId_ = nullptr;};
    inline string harmonyReceiptId() const { DARABONBA_PTR_GET_DEFAULT(harmonyReceiptId_, "") };
    inline PushRequest& setHarmonyReceiptId(string harmonyReceiptId) { DARABONBA_PTR_SET_VALUE(harmonyReceiptId_, harmonyReceiptId) };


    // harmonyRemind Field Functions 
    bool hasHarmonyRemind() const { return this->harmonyRemind_ != nullptr;};
    void deleteHarmonyRemind() { this->harmonyRemind_ = nullptr;};
    inline bool harmonyRemind() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemind_, false) };
    inline PushRequest& setHarmonyRemind(bool harmonyRemind) { DARABONBA_PTR_SET_VALUE(harmonyRemind_, harmonyRemind) };


    // harmonyRemindBody Field Functions 
    bool hasHarmonyRemindBody() const { return this->harmonyRemindBody_ != nullptr;};
    void deleteHarmonyRemindBody() { this->harmonyRemindBody_ = nullptr;};
    inline string harmonyRemindBody() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemindBody_, "") };
    inline PushRequest& setHarmonyRemindBody(string harmonyRemindBody) { DARABONBA_PTR_SET_VALUE(harmonyRemindBody_, harmonyRemindBody) };


    // harmonyRemindTitle Field Functions 
    bool hasHarmonyRemindTitle() const { return this->harmonyRemindTitle_ != nullptr;};
    void deleteHarmonyRemindTitle() { this->harmonyRemindTitle_ = nullptr;};
    inline string harmonyRemindTitle() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemindTitle_, "") };
    inline PushRequest& setHarmonyRemindTitle(string harmonyRemindTitle) { DARABONBA_PTR_SET_VALUE(harmonyRemindTitle_, harmonyRemindTitle) };


    // harmonyRenderStyle Field Functions 
    bool hasHarmonyRenderStyle() const { return this->harmonyRenderStyle_ != nullptr;};
    void deleteHarmonyRenderStyle() { this->harmonyRenderStyle_ = nullptr;};
    inline string harmonyRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(harmonyRenderStyle_, "") };
    inline PushRequest& setHarmonyRenderStyle(string harmonyRenderStyle) { DARABONBA_PTR_SET_VALUE(harmonyRenderStyle_, harmonyRenderStyle) };


    // harmonyTestMessage Field Functions 
    bool hasHarmonyTestMessage() const { return this->harmonyTestMessage_ != nullptr;};
    void deleteHarmonyTestMessage() { this->harmonyTestMessage_ = nullptr;};
    inline bool harmonyTestMessage() const { DARABONBA_PTR_GET_DEFAULT(harmonyTestMessage_, false) };
    inline PushRequest& setHarmonyTestMessage(bool harmonyTestMessage) { DARABONBA_PTR_SET_VALUE(harmonyTestMessage_, harmonyTestMessage) };


    // harmonyUri Field Functions 
    bool hasHarmonyUri() const { return this->harmonyUri_ != nullptr;};
    void deleteHarmonyUri() { this->harmonyUri_ = nullptr;};
    inline string harmonyUri() const { DARABONBA_PTR_GET_DEFAULT(harmonyUri_, "") };
    inline PushRequest& setHarmonyUri(string harmonyUri) { DARABONBA_PTR_SET_VALUE(harmonyUri_, harmonyUri) };


    // idempotentToken Field Functions 
    bool hasIdempotentToken() const { return this->idempotentToken_ != nullptr;};
    void deleteIdempotentToken() { this->idempotentToken_ = nullptr;};
    inline string idempotentToken() const { DARABONBA_PTR_GET_DEFAULT(idempotentToken_, "") };
    inline PushRequest& setIdempotentToken(string idempotentToken) { DARABONBA_PTR_SET_VALUE(idempotentToken_, idempotentToken) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string jobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline PushRequest& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline string pushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
    inline PushRequest& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string pushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline PushRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // sendChannels Field Functions 
    bool hasSendChannels() const { return this->sendChannels_ != nullptr;};
    void deleteSendChannels() { this->sendChannels_ = nullptr;};
    inline string sendChannels() const { DARABONBA_PTR_GET_DEFAULT(sendChannels_, "") };
    inline PushRequest& setSendChannels(string sendChannels) { DARABONBA_PTR_SET_VALUE(sendChannels_, sendChannels) };


    // sendSpeed Field Functions 
    bool hasSendSpeed() const { return this->sendSpeed_ != nullptr;};
    void deleteSendSpeed() { this->sendSpeed_ = nullptr;};
    inline int32_t sendSpeed() const { DARABONBA_PTR_GET_DEFAULT(sendSpeed_, 0) };
    inline PushRequest& setSendSpeed(int32_t sendSpeed) { DARABONBA_PTR_SET_VALUE(sendSpeed_, sendSpeed) };


    // smsDelaySecs Field Functions 
    bool hasSmsDelaySecs() const { return this->smsDelaySecs_ != nullptr;};
    void deleteSmsDelaySecs() { this->smsDelaySecs_ = nullptr;};
    inline int32_t smsDelaySecs() const { DARABONBA_PTR_GET_DEFAULT(smsDelaySecs_, 0) };
    inline PushRequest& setSmsDelaySecs(int32_t smsDelaySecs) { DARABONBA_PTR_SET_VALUE(smsDelaySecs_, smsDelaySecs) };


    // smsParams Field Functions 
    bool hasSmsParams() const { return this->smsParams_ != nullptr;};
    void deleteSmsParams() { this->smsParams_ = nullptr;};
    inline string smsParams() const { DARABONBA_PTR_GET_DEFAULT(smsParams_, "") };
    inline PushRequest& setSmsParams(string smsParams) { DARABONBA_PTR_SET_VALUE(smsParams_, smsParams) };


    // smsSendPolicy Field Functions 
    bool hasSmsSendPolicy() const { return this->smsSendPolicy_ != nullptr;};
    void deleteSmsSendPolicy() { this->smsSendPolicy_ = nullptr;};
    inline int32_t smsSendPolicy() const { DARABONBA_PTR_GET_DEFAULT(smsSendPolicy_, 0) };
    inline PushRequest& setSmsSendPolicy(int32_t smsSendPolicy) { DARABONBA_PTR_SET_VALUE(smsSendPolicy_, smsSendPolicy) };


    // smsSignName Field Functions 
    bool hasSmsSignName() const { return this->smsSignName_ != nullptr;};
    void deleteSmsSignName() { this->smsSignName_ = nullptr;};
    inline string smsSignName() const { DARABONBA_PTR_GET_DEFAULT(smsSignName_, "") };
    inline PushRequest& setSmsSignName(string smsSignName) { DARABONBA_PTR_SET_VALUE(smsSignName_, smsSignName) };


    // smsTemplateName Field Functions 
    bool hasSmsTemplateName() const { return this->smsTemplateName_ != nullptr;};
    void deleteSmsTemplateName() { this->smsTemplateName_ = nullptr;};
    inline string smsTemplateName() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateName_, "") };
    inline PushRequest& setSmsTemplateName(string smsTemplateName) { DARABONBA_PTR_SET_VALUE(smsTemplateName_, smsTemplateName) };


    // storeOffline Field Functions 
    bool hasStoreOffline() const { return this->storeOffline_ != nullptr;};
    void deleteStoreOffline() { this->storeOffline_ = nullptr;};
    inline bool storeOffline() const { DARABONBA_PTR_GET_DEFAULT(storeOffline_, false) };
    inline PushRequest& setStoreOffline(bool storeOffline) { DARABONBA_PTR_SET_VALUE(storeOffline_, storeOffline) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline PushRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline PushRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // trim Field Functions 
    bool hasTrim() const { return this->trim_ != nullptr;};
    void deleteTrim() { this->trim_ = nullptr;};
    inline bool trim() const { DARABONBA_PTR_GET_DEFAULT(trim_, false) };
    inline PushRequest& setTrim(bool trim) { DARABONBA_PTR_SET_VALUE(trim_, trim) };


    // iOSApnsEnv Field Functions 
    bool hasIOSApnsEnv() const { return this->iOSApnsEnv_ != nullptr;};
    void deleteIOSApnsEnv() { this->iOSApnsEnv_ = nullptr;};
    inline string iOSApnsEnv() const { DARABONBA_PTR_GET_DEFAULT(iOSApnsEnv_, "") };
    inline PushRequest& setIOSApnsEnv(string iOSApnsEnv) { DARABONBA_PTR_SET_VALUE(iOSApnsEnv_, iOSApnsEnv) };


    // iOSBadge Field Functions 
    bool hasIOSBadge() const { return this->iOSBadge_ != nullptr;};
    void deleteIOSBadge() { this->iOSBadge_ = nullptr;};
    inline int32_t iOSBadge() const { DARABONBA_PTR_GET_DEFAULT(iOSBadge_, 0) };
    inline PushRequest& setIOSBadge(int32_t iOSBadge) { DARABONBA_PTR_SET_VALUE(iOSBadge_, iOSBadge) };


    // iOSBadgeAutoIncrement Field Functions 
    bool hasIOSBadgeAutoIncrement() const { return this->iOSBadgeAutoIncrement_ != nullptr;};
    void deleteIOSBadgeAutoIncrement() { this->iOSBadgeAutoIncrement_ = nullptr;};
    inline bool iOSBadgeAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(iOSBadgeAutoIncrement_, false) };
    inline PushRequest& setIOSBadgeAutoIncrement(bool iOSBadgeAutoIncrement) { DARABONBA_PTR_SET_VALUE(iOSBadgeAutoIncrement_, iOSBadgeAutoIncrement) };


    // iOSExtParameters Field Functions 
    bool hasIOSExtParameters() const { return this->iOSExtParameters_ != nullptr;};
    void deleteIOSExtParameters() { this->iOSExtParameters_ = nullptr;};
    inline string iOSExtParameters() const { DARABONBA_PTR_GET_DEFAULT(iOSExtParameters_, "") };
    inline PushRequest& setIOSExtParameters(string iOSExtParameters) { DARABONBA_PTR_SET_VALUE(iOSExtParameters_, iOSExtParameters) };


    // iOSInterruptionLevel Field Functions 
    bool hasIOSInterruptionLevel() const { return this->iOSInterruptionLevel_ != nullptr;};
    void deleteIOSInterruptionLevel() { this->iOSInterruptionLevel_ = nullptr;};
    inline string iOSInterruptionLevel() const { DARABONBA_PTR_GET_DEFAULT(iOSInterruptionLevel_, "") };
    inline PushRequest& setIOSInterruptionLevel(string iOSInterruptionLevel) { DARABONBA_PTR_SET_VALUE(iOSInterruptionLevel_, iOSInterruptionLevel) };


    // iOSLiveActivityAttributes Field Functions 
    bool hasIOSLiveActivityAttributes() const { return this->iOSLiveActivityAttributes_ != nullptr;};
    void deleteIOSLiveActivityAttributes() { this->iOSLiveActivityAttributes_ = nullptr;};
    inline string iOSLiveActivityAttributes() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityAttributes_, "") };
    inline PushRequest& setIOSLiveActivityAttributes(string iOSLiveActivityAttributes) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityAttributes_, iOSLiveActivityAttributes) };


    // iOSLiveActivityAttributesType Field Functions 
    bool hasIOSLiveActivityAttributesType() const { return this->iOSLiveActivityAttributesType_ != nullptr;};
    void deleteIOSLiveActivityAttributesType() { this->iOSLiveActivityAttributesType_ = nullptr;};
    inline string iOSLiveActivityAttributesType() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityAttributesType_, "") };
    inline PushRequest& setIOSLiveActivityAttributesType(string iOSLiveActivityAttributesType) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityAttributesType_, iOSLiveActivityAttributesType) };


    // iOSLiveActivityContentState Field Functions 
    bool hasIOSLiveActivityContentState() const { return this->iOSLiveActivityContentState_ != nullptr;};
    void deleteIOSLiveActivityContentState() { this->iOSLiveActivityContentState_ = nullptr;};
    inline string iOSLiveActivityContentState() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityContentState_, "") };
    inline PushRequest& setIOSLiveActivityContentState(string iOSLiveActivityContentState) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityContentState_, iOSLiveActivityContentState) };


    // iOSLiveActivityDismissalDate Field Functions 
    bool hasIOSLiveActivityDismissalDate() const { return this->iOSLiveActivityDismissalDate_ != nullptr;};
    void deleteIOSLiveActivityDismissalDate() { this->iOSLiveActivityDismissalDate_ = nullptr;};
    inline int64_t iOSLiveActivityDismissalDate() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityDismissalDate_, 0L) };
    inline PushRequest& setIOSLiveActivityDismissalDate(int64_t iOSLiveActivityDismissalDate) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityDismissalDate_, iOSLiveActivityDismissalDate) };


    // iOSLiveActivityEvent Field Functions 
    bool hasIOSLiveActivityEvent() const { return this->iOSLiveActivityEvent_ != nullptr;};
    void deleteIOSLiveActivityEvent() { this->iOSLiveActivityEvent_ = nullptr;};
    inline string iOSLiveActivityEvent() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityEvent_, "") };
    inline PushRequest& setIOSLiveActivityEvent(string iOSLiveActivityEvent) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityEvent_, iOSLiveActivityEvent) };


    // iOSLiveActivityId Field Functions 
    bool hasIOSLiveActivityId() const { return this->iOSLiveActivityId_ != nullptr;};
    void deleteIOSLiveActivityId() { this->iOSLiveActivityId_ = nullptr;};
    inline string iOSLiveActivityId() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityId_, "") };
    inline PushRequest& setIOSLiveActivityId(string iOSLiveActivityId) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityId_, iOSLiveActivityId) };


    // iOSLiveActivityStaleDate Field Functions 
    bool hasIOSLiveActivityStaleDate() const { return this->iOSLiveActivityStaleDate_ != nullptr;};
    void deleteIOSLiveActivityStaleDate() { this->iOSLiveActivityStaleDate_ = nullptr;};
    inline int64_t iOSLiveActivityStaleDate() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityStaleDate_, 0L) };
    inline PushRequest& setIOSLiveActivityStaleDate(int64_t iOSLiveActivityStaleDate) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityStaleDate_, iOSLiveActivityStaleDate) };


    // iOSMusic Field Functions 
    bool hasIOSMusic() const { return this->iOSMusic_ != nullptr;};
    void deleteIOSMusic() { this->iOSMusic_ = nullptr;};
    inline string iOSMusic() const { DARABONBA_PTR_GET_DEFAULT(iOSMusic_, "") };
    inline PushRequest& setIOSMusic(string iOSMusic) { DARABONBA_PTR_SET_VALUE(iOSMusic_, iOSMusic) };


    // iOSMutableContent Field Functions 
    bool hasIOSMutableContent() const { return this->iOSMutableContent_ != nullptr;};
    void deleteIOSMutableContent() { this->iOSMutableContent_ = nullptr;};
    inline bool iOSMutableContent() const { DARABONBA_PTR_GET_DEFAULT(iOSMutableContent_, false) };
    inline PushRequest& setIOSMutableContent(bool iOSMutableContent) { DARABONBA_PTR_SET_VALUE(iOSMutableContent_, iOSMutableContent) };


    // iOSNotificationCategory Field Functions 
    bool hasIOSNotificationCategory() const { return this->iOSNotificationCategory_ != nullptr;};
    void deleteIOSNotificationCategory() { this->iOSNotificationCategory_ = nullptr;};
    inline string iOSNotificationCategory() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationCategory_, "") };
    inline PushRequest& setIOSNotificationCategory(string iOSNotificationCategory) { DARABONBA_PTR_SET_VALUE(iOSNotificationCategory_, iOSNotificationCategory) };


    // iOSNotificationCollapseId Field Functions 
    bool hasIOSNotificationCollapseId() const { return this->iOSNotificationCollapseId_ != nullptr;};
    void deleteIOSNotificationCollapseId() { this->iOSNotificationCollapseId_ = nullptr;};
    inline string iOSNotificationCollapseId() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationCollapseId_, "") };
    inline PushRequest& setIOSNotificationCollapseId(string iOSNotificationCollapseId) { DARABONBA_PTR_SET_VALUE(iOSNotificationCollapseId_, iOSNotificationCollapseId) };


    // iOSNotificationThreadId Field Functions 
    bool hasIOSNotificationThreadId() const { return this->iOSNotificationThreadId_ != nullptr;};
    void deleteIOSNotificationThreadId() { this->iOSNotificationThreadId_ = nullptr;};
    inline string iOSNotificationThreadId() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationThreadId_, "") };
    inline PushRequest& setIOSNotificationThreadId(string iOSNotificationThreadId) { DARABONBA_PTR_SET_VALUE(iOSNotificationThreadId_, iOSNotificationThreadId) };


    // iOSRelevanceScore Field Functions 
    bool hasIOSRelevanceScore() const { return this->iOSRelevanceScore_ != nullptr;};
    void deleteIOSRelevanceScore() { this->iOSRelevanceScore_ = nullptr;};
    inline double iOSRelevanceScore() const { DARABONBA_PTR_GET_DEFAULT(iOSRelevanceScore_, 0.0) };
    inline PushRequest& setIOSRelevanceScore(double iOSRelevanceScore) { DARABONBA_PTR_SET_VALUE(iOSRelevanceScore_, iOSRelevanceScore) };


    // iOSRemind Field Functions 
    bool hasIOSRemind() const { return this->iOSRemind_ != nullptr;};
    void deleteIOSRemind() { this->iOSRemind_ = nullptr;};
    inline bool iOSRemind() const { DARABONBA_PTR_GET_DEFAULT(iOSRemind_, false) };
    inline PushRequest& setIOSRemind(bool iOSRemind) { DARABONBA_PTR_SET_VALUE(iOSRemind_, iOSRemind) };


    // iOSRemindBody Field Functions 
    bool hasIOSRemindBody() const { return this->iOSRemindBody_ != nullptr;};
    void deleteIOSRemindBody() { this->iOSRemindBody_ = nullptr;};
    inline string iOSRemindBody() const { DARABONBA_PTR_GET_DEFAULT(iOSRemindBody_, "") };
    inline PushRequest& setIOSRemindBody(string iOSRemindBody) { DARABONBA_PTR_SET_VALUE(iOSRemindBody_, iOSRemindBody) };


    // iOSSilentNotification Field Functions 
    bool hasIOSSilentNotification() const { return this->iOSSilentNotification_ != nullptr;};
    void deleteIOSSilentNotification() { this->iOSSilentNotification_ = nullptr;};
    inline bool iOSSilentNotification() const { DARABONBA_PTR_GET_DEFAULT(iOSSilentNotification_, false) };
    inline PushRequest& setIOSSilentNotification(bool iOSSilentNotification) { DARABONBA_PTR_SET_VALUE(iOSSilentNotification_, iOSSilentNotification) };


    // iOSSubtitle Field Functions 
    bool hasIOSSubtitle() const { return this->iOSSubtitle_ != nullptr;};
    void deleteIOSSubtitle() { this->iOSSubtitle_ = nullptr;};
    inline string iOSSubtitle() const { DARABONBA_PTR_GET_DEFAULT(iOSSubtitle_, "") };
    inline PushRequest& setIOSSubtitle(string iOSSubtitle) { DARABONBA_PTR_SET_VALUE(iOSSubtitle_, iOSSubtitle) };


  protected:
    std::shared_ptr<string> androidActivity_ = nullptr;
    std::shared_ptr<int32_t> androidBadgeAddNum_ = nullptr;
    std::shared_ptr<string> androidBadgeClass_ = nullptr;
    std::shared_ptr<int32_t> androidBadgeSetNum_ = nullptr;
    std::shared_ptr<string> androidBigBody_ = nullptr;
    std::shared_ptr<string> androidBigPictureUrl_ = nullptr;
    std::shared_ptr<string> androidBigTitle_ = nullptr;
    std::shared_ptr<string> androidExtParameters_ = nullptr;
    std::shared_ptr<int32_t> androidHonorTargetUserType_ = nullptr;
    std::shared_ptr<string> androidHuaweiLiveNotificationPayload_ = nullptr;
    std::shared_ptr<string> androidHuaweiReceiptId_ = nullptr;
    std::shared_ptr<int32_t> androidHuaweiTargetUserType_ = nullptr;
    std::shared_ptr<string> androidImageUrl_ = nullptr;
    std::shared_ptr<string> androidInboxBody_ = nullptr;
    std::shared_ptr<int32_t> androidMeizuNoticeMsgType_ = nullptr;
    std::shared_ptr<string> androidMessageHuaweiCategory_ = nullptr;
    std::shared_ptr<string> androidMessageHuaweiUrgency_ = nullptr;
    std::shared_ptr<string> androidMessageOppoCategory_ = nullptr;
    std::shared_ptr<int32_t> androidMessageOppoNotifyLevel_ = nullptr;
    std::shared_ptr<string> androidMessageVivoCategory_ = nullptr;
    std::shared_ptr<string> androidMusic_ = nullptr;
    std::shared_ptr<int32_t> androidNotificationBarPriority_ = nullptr;
    std::shared_ptr<int32_t> androidNotificationBarType_ = nullptr;
    std::shared_ptr<string> androidNotificationChannel_ = nullptr;
    std::shared_ptr<string> androidNotificationGroup_ = nullptr;
    std::shared_ptr<string> androidNotificationHonorChannel_ = nullptr;
    std::shared_ptr<string> androidNotificationHuaweiChannel_ = nullptr;
    std::shared_ptr<int32_t> androidNotificationNotifyId_ = nullptr;
    std::shared_ptr<string> androidNotificationThreadId_ = nullptr;
    std::shared_ptr<string> androidNotificationVivoChannel_ = nullptr;
    std::shared_ptr<string> androidNotificationXiaomiChannel_ = nullptr;
    std::shared_ptr<string> androidNotifyType_ = nullptr;
    std::shared_ptr<string> androidOpenType_ = nullptr;
    std::shared_ptr<string> androidOpenUrl_ = nullptr;
    std::shared_ptr<map<string, string>> androidOppoPrivateContentParameters_ = nullptr;
    std::shared_ptr<string> androidOppoPrivateMsgTemplateId_ = nullptr;
    std::shared_ptr<map<string, string>> androidOppoPrivateTitleParameters_ = nullptr;
    std::shared_ptr<string> androidPopupActivity_ = nullptr;
    std::shared_ptr<string> androidPopupBody_ = nullptr;
    std::shared_ptr<string> androidPopupTitle_ = nullptr;
    std::shared_ptr<bool> androidRemind_ = nullptr;
    std::shared_ptr<int32_t> androidRenderStyle_ = nullptr;
    std::shared_ptr<int32_t> androidTargetUserType_ = nullptr;
    std::shared_ptr<int32_t> androidVivoPushMode_ = nullptr;
    std::shared_ptr<string> androidVivoReceiptId_ = nullptr;
    std::shared_ptr<string> androidXiaoMiActivity_ = nullptr;
    std::shared_ptr<string> androidXiaoMiNotifyBody_ = nullptr;
    std::shared_ptr<string> androidXiaoMiNotifyTitle_ = nullptr;
    std::shared_ptr<string> androidXiaomiBigPictureUrl_ = nullptr;
    std::shared_ptr<string> androidXiaomiImageUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> body_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> harmonyAction_ = nullptr;
    std::shared_ptr<string> harmonyActionType_ = nullptr;
    std::shared_ptr<int32_t> harmonyBadgeAddNum_ = nullptr;
    std::shared_ptr<int32_t> harmonyBadgeSetNum_ = nullptr;
    std::shared_ptr<string> harmonyCategory_ = nullptr;
    std::shared_ptr<string> harmonyExtParameters_ = nullptr;
    std::shared_ptr<string> harmonyExtensionExtraData_ = nullptr;
    std::shared_ptr<bool> harmonyExtensionPush_ = nullptr;
    std::shared_ptr<string> harmonyImageUrl_ = nullptr;
    std::shared_ptr<string> harmonyInboxContent_ = nullptr;
    std::shared_ptr<string> harmonyLiveViewPayload_ = nullptr;
    std::shared_ptr<string> harmonyNotificationSlotType_ = nullptr;
    std::shared_ptr<int32_t> harmonyNotifyId_ = nullptr;
    std::shared_ptr<string> harmonyReceiptId_ = nullptr;
    std::shared_ptr<bool> harmonyRemind_ = nullptr;
    std::shared_ptr<string> harmonyRemindBody_ = nullptr;
    std::shared_ptr<string> harmonyRemindTitle_ = nullptr;
    std::shared_ptr<string> harmonyRenderStyle_ = nullptr;
    std::shared_ptr<bool> harmonyTestMessage_ = nullptr;
    std::shared_ptr<string> harmonyUri_ = nullptr;
    std::shared_ptr<string> idempotentToken_ = nullptr;
    std::shared_ptr<string> jobKey_ = nullptr;
    std::shared_ptr<string> pushTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pushType_ = nullptr;
    std::shared_ptr<string> sendChannels_ = nullptr;
    std::shared_ptr<int32_t> sendSpeed_ = nullptr;
    std::shared_ptr<int32_t> smsDelaySecs_ = nullptr;
    std::shared_ptr<string> smsParams_ = nullptr;
    std::shared_ptr<int32_t> smsSendPolicy_ = nullptr;
    std::shared_ptr<string> smsSignName_ = nullptr;
    std::shared_ptr<string> smsTemplateName_ = nullptr;
    std::shared_ptr<bool> storeOffline_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> target_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetValue_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<bool> trim_ = nullptr;
    std::shared_ptr<string> iOSApnsEnv_ = nullptr;
    std::shared_ptr<int32_t> iOSBadge_ = nullptr;
    std::shared_ptr<bool> iOSBadgeAutoIncrement_ = nullptr;
    std::shared_ptr<string> iOSExtParameters_ = nullptr;
    std::shared_ptr<string> iOSInterruptionLevel_ = nullptr;
    std::shared_ptr<string> iOSLiveActivityAttributes_ = nullptr;
    std::shared_ptr<string> iOSLiveActivityAttributesType_ = nullptr;
    std::shared_ptr<string> iOSLiveActivityContentState_ = nullptr;
    std::shared_ptr<int64_t> iOSLiveActivityDismissalDate_ = nullptr;
    std::shared_ptr<string> iOSLiveActivityEvent_ = nullptr;
    std::shared_ptr<string> iOSLiveActivityId_ = nullptr;
    std::shared_ptr<int64_t> iOSLiveActivityStaleDate_ = nullptr;
    std::shared_ptr<string> iOSMusic_ = nullptr;
    std::shared_ptr<bool> iOSMutableContent_ = nullptr;
    std::shared_ptr<string> iOSNotificationCategory_ = nullptr;
    std::shared_ptr<string> iOSNotificationCollapseId_ = nullptr;
    std::shared_ptr<string> iOSNotificationThreadId_ = nullptr;
    std::shared_ptr<double> iOSRelevanceScore_ = nullptr;
    std::shared_ptr<bool> iOSRemind_ = nullptr;
    std::shared_ptr<string> iOSRemindBody_ = nullptr;
    std::shared_ptr<bool> iOSSilentNotification_ = nullptr;
    std::shared_ptr<string> iOSSubtitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
