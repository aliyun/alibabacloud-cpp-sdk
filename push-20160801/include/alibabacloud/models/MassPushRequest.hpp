// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASSPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MASSPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class MassPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MassPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_TO_JSON(PushTask, pushTask_);
    };
    friend void from_json(const Darabonba::Json& j, MassPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(IdempotentToken, idempotentToken_);
      DARABONBA_PTR_FROM_JSON(PushTask, pushTask_);
    };
    MassPushRequest() = default ;
    MassPushRequest(const MassPushRequest &) = default ;
    MassPushRequest(MassPushRequest &&) = default ;
    MassPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MassPushRequest() = default ;
    MassPushRequest& operator=(const MassPushRequest &) = default ;
    MassPushRequest& operator=(MassPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushTask : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushTask& obj) { 
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
        DARABONBA_PTR_TO_JSON(AndroidXiaoMiActivity, androidXiaoMiActivity_);
        DARABONBA_PTR_TO_JSON(AndroidXiaoMiNotifyBody, androidXiaoMiNotifyBody_);
        DARABONBA_PTR_TO_JSON(AndroidXiaoMiNotifyTitle, androidXiaoMiNotifyTitle_);
        DARABONBA_PTR_TO_JSON(AndroidXiaomiBigPictureUrl, androidXiaomiBigPictureUrl_);
        DARABONBA_PTR_TO_JSON(AndroidXiaomiFocusParam, androidXiaomiFocusParam_);
        DARABONBA_PTR_TO_JSON(AndroidXiaomiFocusPics, androidXiaomiFocusPics_);
        DARABONBA_PTR_TO_JSON(AndroidXiaomiImageUrl, androidXiaomiImageUrl_);
        DARABONBA_PTR_TO_JSON(AndroidXiaomiTemplateId, androidXiaomiTemplateId_);
        DARABONBA_PTR_TO_JSON(AndroidXiaomiTemplateParams, androidXiaomiTemplateParams_);
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
        DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
        DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
        DARABONBA_PTR_TO_JSON(PushType, pushType_);
        DARABONBA_PTR_TO_JSON(SendChannels, sendChannels_);
        DARABONBA_PTR_TO_JSON(SendSpeed, sendSpeed_);
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
      friend void from_json(const Darabonba::Json& j, PushTask& obj) { 
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
        DARABONBA_PTR_FROM_JSON(AndroidXiaoMiActivity, androidXiaoMiActivity_);
        DARABONBA_PTR_FROM_JSON(AndroidXiaoMiNotifyBody, androidXiaoMiNotifyBody_);
        DARABONBA_PTR_FROM_JSON(AndroidXiaoMiNotifyTitle, androidXiaoMiNotifyTitle_);
        DARABONBA_PTR_FROM_JSON(AndroidXiaomiBigPictureUrl, androidXiaomiBigPictureUrl_);
        DARABONBA_PTR_FROM_JSON(AndroidXiaomiFocusParam, androidXiaomiFocusParam_);
        DARABONBA_PTR_FROM_JSON(AndroidXiaomiFocusPics, androidXiaomiFocusPics_);
        DARABONBA_PTR_FROM_JSON(AndroidXiaomiImageUrl, androidXiaomiImageUrl_);
        DARABONBA_PTR_FROM_JSON(AndroidXiaomiTemplateId, androidXiaomiTemplateId_);
        DARABONBA_PTR_FROM_JSON(AndroidXiaomiTemplateParams, androidXiaomiTemplateParams_);
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
        DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
        DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
        DARABONBA_PTR_FROM_JSON(PushType, pushType_);
        DARABONBA_PTR_FROM_JSON(SendChannels, sendChannels_);
        DARABONBA_PTR_FROM_JSON(SendSpeed, sendSpeed_);
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
      PushTask() = default ;
      PushTask(const PushTask &) = default ;
      PushTask(PushTask &&) = default ;
      PushTask(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushTask() = default ;
      PushTask& operator=(const PushTask &) = default ;
      PushTask& operator=(PushTask &&) = default ;
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
        && this->androidTargetUserType_ == nullptr && this->androidVivoLiveMessage_ == nullptr && this->androidVivoPushMode_ == nullptr && this->androidVivoReceiptId_ == nullptr && this->androidXiaoMiActivity_ == nullptr
        && this->androidXiaoMiNotifyBody_ == nullptr && this->androidXiaoMiNotifyTitle_ == nullptr && this->androidXiaomiBigPictureUrl_ == nullptr && this->androidXiaomiFocusParam_ == nullptr && this->androidXiaomiFocusPics_ == nullptr
        && this->androidXiaomiImageUrl_ == nullptr && this->androidXiaomiTemplateId_ == nullptr && this->androidXiaomiTemplateParams_ == nullptr && this->body_ == nullptr && this->deviceType_ == nullptr
        && this->expireTime_ == nullptr && this->harmonyAction_ == nullptr && this->harmonyActionType_ == nullptr && this->harmonyBadgeAddNum_ == nullptr && this->harmonyBadgeSetNum_ == nullptr
        && this->harmonyCategory_ == nullptr && this->harmonyExtParameters_ == nullptr && this->harmonyExtensionExtraData_ == nullptr && this->harmonyExtensionPush_ == nullptr && this->harmonyImageUrl_ == nullptr
        && this->harmonyInboxContent_ == nullptr && this->harmonyLiveViewPayload_ == nullptr && this->harmonyNotificationSlotType_ == nullptr && this->harmonyNotifyId_ == nullptr && this->harmonyReceiptId_ == nullptr
        && this->harmonyRemind_ == nullptr && this->harmonyRemindBody_ == nullptr && this->harmonyRemindTitle_ == nullptr && this->harmonyRenderStyle_ == nullptr && this->harmonyTestMessage_ == nullptr
        && this->harmonyUri_ == nullptr && this->jobKey_ == nullptr && this->pushTime_ == nullptr && this->pushType_ == nullptr && this->sendChannels_ == nullptr
        && this->sendSpeed_ == nullptr && this->storeOffline_ == nullptr && this->target_ == nullptr && this->targetValue_ == nullptr && this->title_ == nullptr
        && this->trim_ == nullptr && this->iOSApnsEnv_ == nullptr && this->iOSBadge_ == nullptr && this->iOSBadgeAutoIncrement_ == nullptr && this->iOSExtParameters_ == nullptr
        && this->iOSInterruptionLevel_ == nullptr && this->iOSLiveActivityAttributes_ == nullptr && this->iOSLiveActivityAttributesType_ == nullptr && this->iOSLiveActivityContentState_ == nullptr && this->iOSLiveActivityDismissalDate_ == nullptr
        && this->iOSLiveActivityEvent_ == nullptr && this->iOSLiveActivityId_ == nullptr && this->iOSLiveActivityStaleDate_ == nullptr && this->iOSMusic_ == nullptr && this->iOSMutableContent_ == nullptr
        && this->iOSNotificationCategory_ == nullptr && this->iOSNotificationCollapseId_ == nullptr && this->iOSNotificationThreadId_ == nullptr && this->iOSRelevanceScore_ == nullptr && this->iOSRemind_ == nullptr
        && this->iOSRemindBody_ == nullptr && this->iOSSilentNotification_ == nullptr && this->iOSSubtitle_ == nullptr; };
      // androidActivity Field Functions 
      bool hasAndroidActivity() const { return this->androidActivity_ != nullptr;};
      void deleteAndroidActivity() { this->androidActivity_ = nullptr;};
      inline string getAndroidActivity() const { DARABONBA_PTR_GET_DEFAULT(androidActivity_, "") };
      inline PushTask& setAndroidActivity(string androidActivity) { DARABONBA_PTR_SET_VALUE(androidActivity_, androidActivity) };


      // androidBadgeAddNum Field Functions 
      bool hasAndroidBadgeAddNum() const { return this->androidBadgeAddNum_ != nullptr;};
      void deleteAndroidBadgeAddNum() { this->androidBadgeAddNum_ = nullptr;};
      inline int32_t getAndroidBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeAddNum_, 0) };
      inline PushTask& setAndroidBadgeAddNum(int32_t androidBadgeAddNum) { DARABONBA_PTR_SET_VALUE(androidBadgeAddNum_, androidBadgeAddNum) };


      // androidBadgeClass Field Functions 
      bool hasAndroidBadgeClass() const { return this->androidBadgeClass_ != nullptr;};
      void deleteAndroidBadgeClass() { this->androidBadgeClass_ = nullptr;};
      inline string getAndroidBadgeClass() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeClass_, "") };
      inline PushTask& setAndroidBadgeClass(string androidBadgeClass) { DARABONBA_PTR_SET_VALUE(androidBadgeClass_, androidBadgeClass) };


      // androidBadgeSetNum Field Functions 
      bool hasAndroidBadgeSetNum() const { return this->androidBadgeSetNum_ != nullptr;};
      void deleteAndroidBadgeSetNum() { this->androidBadgeSetNum_ = nullptr;};
      inline int32_t getAndroidBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeSetNum_, 0) };
      inline PushTask& setAndroidBadgeSetNum(int32_t androidBadgeSetNum) { DARABONBA_PTR_SET_VALUE(androidBadgeSetNum_, androidBadgeSetNum) };


      // androidBigBody Field Functions 
      bool hasAndroidBigBody() const { return this->androidBigBody_ != nullptr;};
      void deleteAndroidBigBody() { this->androidBigBody_ = nullptr;};
      inline string getAndroidBigBody() const { DARABONBA_PTR_GET_DEFAULT(androidBigBody_, "") };
      inline PushTask& setAndroidBigBody(string androidBigBody) { DARABONBA_PTR_SET_VALUE(androidBigBody_, androidBigBody) };


      // androidBigPictureUrl Field Functions 
      bool hasAndroidBigPictureUrl() const { return this->androidBigPictureUrl_ != nullptr;};
      void deleteAndroidBigPictureUrl() { this->androidBigPictureUrl_ = nullptr;};
      inline string getAndroidBigPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(androidBigPictureUrl_, "") };
      inline PushTask& setAndroidBigPictureUrl(string androidBigPictureUrl) { DARABONBA_PTR_SET_VALUE(androidBigPictureUrl_, androidBigPictureUrl) };


      // androidBigTitle Field Functions 
      bool hasAndroidBigTitle() const { return this->androidBigTitle_ != nullptr;};
      void deleteAndroidBigTitle() { this->androidBigTitle_ = nullptr;};
      inline string getAndroidBigTitle() const { DARABONBA_PTR_GET_DEFAULT(androidBigTitle_, "") };
      inline PushTask& setAndroidBigTitle(string androidBigTitle) { DARABONBA_PTR_SET_VALUE(androidBigTitle_, androidBigTitle) };


      // androidExtParameters Field Functions 
      bool hasAndroidExtParameters() const { return this->androidExtParameters_ != nullptr;};
      void deleteAndroidExtParameters() { this->androidExtParameters_ = nullptr;};
      inline string getAndroidExtParameters() const { DARABONBA_PTR_GET_DEFAULT(androidExtParameters_, "") };
      inline PushTask& setAndroidExtParameters(string androidExtParameters) { DARABONBA_PTR_SET_VALUE(androidExtParameters_, androidExtParameters) };


      // androidHonorTargetUserType Field Functions 
      bool hasAndroidHonorTargetUserType() const { return this->androidHonorTargetUserType_ != nullptr;};
      void deleteAndroidHonorTargetUserType() { this->androidHonorTargetUserType_ = nullptr;};
      inline int32_t getAndroidHonorTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidHonorTargetUserType_, 0) };
      inline PushTask& setAndroidHonorTargetUserType(int32_t androidHonorTargetUserType) { DARABONBA_PTR_SET_VALUE(androidHonorTargetUserType_, androidHonorTargetUserType) };


      // androidHuaweiBusinessType Field Functions 
      bool hasAndroidHuaweiBusinessType() const { return this->androidHuaweiBusinessType_ != nullptr;};
      void deleteAndroidHuaweiBusinessType() { this->androidHuaweiBusinessType_ = nullptr;};
      inline int32_t getAndroidHuaweiBusinessType() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiBusinessType_, 0) };
      inline PushTask& setAndroidHuaweiBusinessType(int32_t androidHuaweiBusinessType) { DARABONBA_PTR_SET_VALUE(androidHuaweiBusinessType_, androidHuaweiBusinessType) };


      // androidHuaweiLiveNotificationPayload Field Functions 
      bool hasAndroidHuaweiLiveNotificationPayload() const { return this->androidHuaweiLiveNotificationPayload_ != nullptr;};
      void deleteAndroidHuaweiLiveNotificationPayload() { this->androidHuaweiLiveNotificationPayload_ = nullptr;};
      inline string getAndroidHuaweiLiveNotificationPayload() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiLiveNotificationPayload_, "") };
      inline PushTask& setAndroidHuaweiLiveNotificationPayload(string androidHuaweiLiveNotificationPayload) { DARABONBA_PTR_SET_VALUE(androidHuaweiLiveNotificationPayload_, androidHuaweiLiveNotificationPayload) };


      // androidHuaweiReceiptId Field Functions 
      bool hasAndroidHuaweiReceiptId() const { return this->androidHuaweiReceiptId_ != nullptr;};
      void deleteAndroidHuaweiReceiptId() { this->androidHuaweiReceiptId_ = nullptr;};
      inline string getAndroidHuaweiReceiptId() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiReceiptId_, "") };
      inline PushTask& setAndroidHuaweiReceiptId(string androidHuaweiReceiptId) { DARABONBA_PTR_SET_VALUE(androidHuaweiReceiptId_, androidHuaweiReceiptId) };


      // androidHuaweiTargetUserType Field Functions 
      bool hasAndroidHuaweiTargetUserType() const { return this->androidHuaweiTargetUserType_ != nullptr;};
      void deleteAndroidHuaweiTargetUserType() { this->androidHuaweiTargetUserType_ = nullptr;};
      inline int32_t getAndroidHuaweiTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiTargetUserType_, 0) };
      inline PushTask& setAndroidHuaweiTargetUserType(int32_t androidHuaweiTargetUserType) { DARABONBA_PTR_SET_VALUE(androidHuaweiTargetUserType_, androidHuaweiTargetUserType) };


      // androidImageUrl Field Functions 
      bool hasAndroidImageUrl() const { return this->androidImageUrl_ != nullptr;};
      void deleteAndroidImageUrl() { this->androidImageUrl_ = nullptr;};
      inline string getAndroidImageUrl() const { DARABONBA_PTR_GET_DEFAULT(androidImageUrl_, "") };
      inline PushTask& setAndroidImageUrl(string androidImageUrl) { DARABONBA_PTR_SET_VALUE(androidImageUrl_, androidImageUrl) };


      // androidInboxBody Field Functions 
      bool hasAndroidInboxBody() const { return this->androidInboxBody_ != nullptr;};
      void deleteAndroidInboxBody() { this->androidInboxBody_ = nullptr;};
      inline string getAndroidInboxBody() const { DARABONBA_PTR_GET_DEFAULT(androidInboxBody_, "") };
      inline PushTask& setAndroidInboxBody(string androidInboxBody) { DARABONBA_PTR_SET_VALUE(androidInboxBody_, androidInboxBody) };


      // androidMeizuNoticeMsgType Field Functions 
      bool hasAndroidMeizuNoticeMsgType() const { return this->androidMeizuNoticeMsgType_ != nullptr;};
      void deleteAndroidMeizuNoticeMsgType() { this->androidMeizuNoticeMsgType_ = nullptr;};
      inline int32_t getAndroidMeizuNoticeMsgType() const { DARABONBA_PTR_GET_DEFAULT(androidMeizuNoticeMsgType_, 0) };
      inline PushTask& setAndroidMeizuNoticeMsgType(int32_t androidMeizuNoticeMsgType) { DARABONBA_PTR_SET_VALUE(androidMeizuNoticeMsgType_, androidMeizuNoticeMsgType) };


      // androidMessageHuaweiCategory Field Functions 
      bool hasAndroidMessageHuaweiCategory() const { return this->androidMessageHuaweiCategory_ != nullptr;};
      void deleteAndroidMessageHuaweiCategory() { this->androidMessageHuaweiCategory_ = nullptr;};
      inline string getAndroidMessageHuaweiCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageHuaweiCategory_, "") };
      inline PushTask& setAndroidMessageHuaweiCategory(string androidMessageHuaweiCategory) { DARABONBA_PTR_SET_VALUE(androidMessageHuaweiCategory_, androidMessageHuaweiCategory) };


      // androidMessageHuaweiUrgency Field Functions 
      bool hasAndroidMessageHuaweiUrgency() const { return this->androidMessageHuaweiUrgency_ != nullptr;};
      void deleteAndroidMessageHuaweiUrgency() { this->androidMessageHuaweiUrgency_ = nullptr;};
      inline string getAndroidMessageHuaweiUrgency() const { DARABONBA_PTR_GET_DEFAULT(androidMessageHuaweiUrgency_, "") };
      inline PushTask& setAndroidMessageHuaweiUrgency(string androidMessageHuaweiUrgency) { DARABONBA_PTR_SET_VALUE(androidMessageHuaweiUrgency_, androidMessageHuaweiUrgency) };


      // androidMessageOppoCategory Field Functions 
      bool hasAndroidMessageOppoCategory() const { return this->androidMessageOppoCategory_ != nullptr;};
      void deleteAndroidMessageOppoCategory() { this->androidMessageOppoCategory_ = nullptr;};
      inline string getAndroidMessageOppoCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageOppoCategory_, "") };
      inline PushTask& setAndroidMessageOppoCategory(string androidMessageOppoCategory) { DARABONBA_PTR_SET_VALUE(androidMessageOppoCategory_, androidMessageOppoCategory) };


      // androidMessageOppoNotifyLevel Field Functions 
      bool hasAndroidMessageOppoNotifyLevel() const { return this->androidMessageOppoNotifyLevel_ != nullptr;};
      void deleteAndroidMessageOppoNotifyLevel() { this->androidMessageOppoNotifyLevel_ = nullptr;};
      inline int32_t getAndroidMessageOppoNotifyLevel() const { DARABONBA_PTR_GET_DEFAULT(androidMessageOppoNotifyLevel_, 0) };
      inline PushTask& setAndroidMessageOppoNotifyLevel(int32_t androidMessageOppoNotifyLevel) { DARABONBA_PTR_SET_VALUE(androidMessageOppoNotifyLevel_, androidMessageOppoNotifyLevel) };


      // androidMessageVivoCategory Field Functions 
      bool hasAndroidMessageVivoCategory() const { return this->androidMessageVivoCategory_ != nullptr;};
      void deleteAndroidMessageVivoCategory() { this->androidMessageVivoCategory_ = nullptr;};
      inline string getAndroidMessageVivoCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageVivoCategory_, "") };
      inline PushTask& setAndroidMessageVivoCategory(string androidMessageVivoCategory) { DARABONBA_PTR_SET_VALUE(androidMessageVivoCategory_, androidMessageVivoCategory) };


      // androidMusic Field Functions 
      bool hasAndroidMusic() const { return this->androidMusic_ != nullptr;};
      void deleteAndroidMusic() { this->androidMusic_ = nullptr;};
      inline string getAndroidMusic() const { DARABONBA_PTR_GET_DEFAULT(androidMusic_, "") };
      inline PushTask& setAndroidMusic(string androidMusic) { DARABONBA_PTR_SET_VALUE(androidMusic_, androidMusic) };


      // androidNotificationBarPriority Field Functions 
      bool hasAndroidNotificationBarPriority() const { return this->androidNotificationBarPriority_ != nullptr;};
      void deleteAndroidNotificationBarPriority() { this->androidNotificationBarPriority_ = nullptr;};
      inline int32_t getAndroidNotificationBarPriority() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationBarPriority_, 0) };
      inline PushTask& setAndroidNotificationBarPriority(int32_t androidNotificationBarPriority) { DARABONBA_PTR_SET_VALUE(androidNotificationBarPriority_, androidNotificationBarPriority) };


      // androidNotificationBarType Field Functions 
      bool hasAndroidNotificationBarType() const { return this->androidNotificationBarType_ != nullptr;};
      void deleteAndroidNotificationBarType() { this->androidNotificationBarType_ = nullptr;};
      inline int32_t getAndroidNotificationBarType() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationBarType_, 0) };
      inline PushTask& setAndroidNotificationBarType(int32_t androidNotificationBarType) { DARABONBA_PTR_SET_VALUE(androidNotificationBarType_, androidNotificationBarType) };


      // androidNotificationChannel Field Functions 
      bool hasAndroidNotificationChannel() const { return this->androidNotificationChannel_ != nullptr;};
      void deleteAndroidNotificationChannel() { this->androidNotificationChannel_ = nullptr;};
      inline string getAndroidNotificationChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationChannel_, "") };
      inline PushTask& setAndroidNotificationChannel(string androidNotificationChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationChannel_, androidNotificationChannel) };


      // androidNotificationGroup Field Functions 
      bool hasAndroidNotificationGroup() const { return this->androidNotificationGroup_ != nullptr;};
      void deleteAndroidNotificationGroup() { this->androidNotificationGroup_ = nullptr;};
      inline string getAndroidNotificationGroup() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationGroup_, "") };
      inline PushTask& setAndroidNotificationGroup(string androidNotificationGroup) { DARABONBA_PTR_SET_VALUE(androidNotificationGroup_, androidNotificationGroup) };


      // androidNotificationHonorChannel Field Functions 
      bool hasAndroidNotificationHonorChannel() const { return this->androidNotificationHonorChannel_ != nullptr;};
      void deleteAndroidNotificationHonorChannel() { this->androidNotificationHonorChannel_ = nullptr;};
      inline string getAndroidNotificationHonorChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationHonorChannel_, "") };
      inline PushTask& setAndroidNotificationHonorChannel(string androidNotificationHonorChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationHonorChannel_, androidNotificationHonorChannel) };


      // androidNotificationHuaweiChannel Field Functions 
      bool hasAndroidNotificationHuaweiChannel() const { return this->androidNotificationHuaweiChannel_ != nullptr;};
      void deleteAndroidNotificationHuaweiChannel() { this->androidNotificationHuaweiChannel_ = nullptr;};
      inline string getAndroidNotificationHuaweiChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationHuaweiChannel_, "") };
      inline PushTask& setAndroidNotificationHuaweiChannel(string androidNotificationHuaweiChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationHuaweiChannel_, androidNotificationHuaweiChannel) };


      // androidNotificationNotifyId Field Functions 
      bool hasAndroidNotificationNotifyId() const { return this->androidNotificationNotifyId_ != nullptr;};
      void deleteAndroidNotificationNotifyId() { this->androidNotificationNotifyId_ = nullptr;};
      inline int32_t getAndroidNotificationNotifyId() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationNotifyId_, 0) };
      inline PushTask& setAndroidNotificationNotifyId(int32_t androidNotificationNotifyId) { DARABONBA_PTR_SET_VALUE(androidNotificationNotifyId_, androidNotificationNotifyId) };


      // androidNotificationThreadId Field Functions 
      bool hasAndroidNotificationThreadId() const { return this->androidNotificationThreadId_ != nullptr;};
      void deleteAndroidNotificationThreadId() { this->androidNotificationThreadId_ = nullptr;};
      inline string getAndroidNotificationThreadId() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationThreadId_, "") };
      inline PushTask& setAndroidNotificationThreadId(string androidNotificationThreadId) { DARABONBA_PTR_SET_VALUE(androidNotificationThreadId_, androidNotificationThreadId) };


      // androidNotificationVivoChannel Field Functions 
      bool hasAndroidNotificationVivoChannel() const { return this->androidNotificationVivoChannel_ != nullptr;};
      void deleteAndroidNotificationVivoChannel() { this->androidNotificationVivoChannel_ = nullptr;};
      inline string getAndroidNotificationVivoChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationVivoChannel_, "") };
      inline PushTask& setAndroidNotificationVivoChannel(string androidNotificationVivoChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationVivoChannel_, androidNotificationVivoChannel) };


      // androidNotificationXiaomiChannel Field Functions 
      bool hasAndroidNotificationXiaomiChannel() const { return this->androidNotificationXiaomiChannel_ != nullptr;};
      void deleteAndroidNotificationXiaomiChannel() { this->androidNotificationXiaomiChannel_ = nullptr;};
      inline string getAndroidNotificationXiaomiChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationXiaomiChannel_, "") };
      inline PushTask& setAndroidNotificationXiaomiChannel(string androidNotificationXiaomiChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationXiaomiChannel_, androidNotificationXiaomiChannel) };


      // androidNotifyType Field Functions 
      bool hasAndroidNotifyType() const { return this->androidNotifyType_ != nullptr;};
      void deleteAndroidNotifyType() { this->androidNotifyType_ = nullptr;};
      inline string getAndroidNotifyType() const { DARABONBA_PTR_GET_DEFAULT(androidNotifyType_, "") };
      inline PushTask& setAndroidNotifyType(string androidNotifyType) { DARABONBA_PTR_SET_VALUE(androidNotifyType_, androidNotifyType) };


      // androidOpenType Field Functions 
      bool hasAndroidOpenType() const { return this->androidOpenType_ != nullptr;};
      void deleteAndroidOpenType() { this->androidOpenType_ = nullptr;};
      inline string getAndroidOpenType() const { DARABONBA_PTR_GET_DEFAULT(androidOpenType_, "") };
      inline PushTask& setAndroidOpenType(string androidOpenType) { DARABONBA_PTR_SET_VALUE(androidOpenType_, androidOpenType) };


      // androidOpenUrl Field Functions 
      bool hasAndroidOpenUrl() const { return this->androidOpenUrl_ != nullptr;};
      void deleteAndroidOpenUrl() { this->androidOpenUrl_ = nullptr;};
      inline string getAndroidOpenUrl() const { DARABONBA_PTR_GET_DEFAULT(androidOpenUrl_, "") };
      inline PushTask& setAndroidOpenUrl(string androidOpenUrl) { DARABONBA_PTR_SET_VALUE(androidOpenUrl_, androidOpenUrl) };


      // androidOppoDeleteIntentData Field Functions 
      bool hasAndroidOppoDeleteIntentData() const { return this->androidOppoDeleteIntentData_ != nullptr;};
      void deleteAndroidOppoDeleteIntentData() { this->androidOppoDeleteIntentData_ = nullptr;};
      inline string getAndroidOppoDeleteIntentData() const { DARABONBA_PTR_GET_DEFAULT(androidOppoDeleteIntentData_, "") };
      inline PushTask& setAndroidOppoDeleteIntentData(string androidOppoDeleteIntentData) { DARABONBA_PTR_SET_VALUE(androidOppoDeleteIntentData_, androidOppoDeleteIntentData) };


      // androidOppoIntelligentIntent Field Functions 
      bool hasAndroidOppoIntelligentIntent() const { return this->androidOppoIntelligentIntent_ != nullptr;};
      void deleteAndroidOppoIntelligentIntent() { this->androidOppoIntelligentIntent_ = nullptr;};
      inline string getAndroidOppoIntelligentIntent() const { DARABONBA_PTR_GET_DEFAULT(androidOppoIntelligentIntent_, "") };
      inline PushTask& setAndroidOppoIntelligentIntent(string androidOppoIntelligentIntent) { DARABONBA_PTR_SET_VALUE(androidOppoIntelligentIntent_, androidOppoIntelligentIntent) };


      // androidOppoIntentEnv Field Functions 
      bool hasAndroidOppoIntentEnv() const { return this->androidOppoIntentEnv_ != nullptr;};
      void deleteAndroidOppoIntentEnv() { this->androidOppoIntentEnv_ = nullptr;};
      inline int32_t getAndroidOppoIntentEnv() const { DARABONBA_PTR_GET_DEFAULT(androidOppoIntentEnv_, 0) };
      inline PushTask& setAndroidOppoIntentEnv(int32_t androidOppoIntentEnv) { DARABONBA_PTR_SET_VALUE(androidOppoIntentEnv_, androidOppoIntentEnv) };


      // androidOppoPrivateContentParameters Field Functions 
      bool hasAndroidOppoPrivateContentParameters() const { return this->androidOppoPrivateContentParameters_ != nullptr;};
      void deleteAndroidOppoPrivateContentParameters() { this->androidOppoPrivateContentParameters_ = nullptr;};
      inline const map<string, string> & getAndroidOppoPrivateContentParameters() const { DARABONBA_PTR_GET_CONST(androidOppoPrivateContentParameters_, map<string, string>) };
      inline map<string, string> getAndroidOppoPrivateContentParameters() { DARABONBA_PTR_GET(androidOppoPrivateContentParameters_, map<string, string>) };
      inline PushTask& setAndroidOppoPrivateContentParameters(const map<string, string> & androidOppoPrivateContentParameters) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateContentParameters_, androidOppoPrivateContentParameters) };
      inline PushTask& setAndroidOppoPrivateContentParameters(map<string, string> && androidOppoPrivateContentParameters) { DARABONBA_PTR_SET_RVALUE(androidOppoPrivateContentParameters_, androidOppoPrivateContentParameters) };


      // androidOppoPrivateMsgTemplateId Field Functions 
      bool hasAndroidOppoPrivateMsgTemplateId() const { return this->androidOppoPrivateMsgTemplateId_ != nullptr;};
      void deleteAndroidOppoPrivateMsgTemplateId() { this->androidOppoPrivateMsgTemplateId_ = nullptr;};
      inline string getAndroidOppoPrivateMsgTemplateId() const { DARABONBA_PTR_GET_DEFAULT(androidOppoPrivateMsgTemplateId_, "") };
      inline PushTask& setAndroidOppoPrivateMsgTemplateId(string androidOppoPrivateMsgTemplateId) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateMsgTemplateId_, androidOppoPrivateMsgTemplateId) };


      // androidOppoPrivateTitleParameters Field Functions 
      bool hasAndroidOppoPrivateTitleParameters() const { return this->androidOppoPrivateTitleParameters_ != nullptr;};
      void deleteAndroidOppoPrivateTitleParameters() { this->androidOppoPrivateTitleParameters_ = nullptr;};
      inline const map<string, string> & getAndroidOppoPrivateTitleParameters() const { DARABONBA_PTR_GET_CONST(androidOppoPrivateTitleParameters_, map<string, string>) };
      inline map<string, string> getAndroidOppoPrivateTitleParameters() { DARABONBA_PTR_GET(androidOppoPrivateTitleParameters_, map<string, string>) };
      inline PushTask& setAndroidOppoPrivateTitleParameters(const map<string, string> & androidOppoPrivateTitleParameters) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateTitleParameters_, androidOppoPrivateTitleParameters) };
      inline PushTask& setAndroidOppoPrivateTitleParameters(map<string, string> && androidOppoPrivateTitleParameters) { DARABONBA_PTR_SET_RVALUE(androidOppoPrivateTitleParameters_, androidOppoPrivateTitleParameters) };


      // androidPopupActivity Field Functions 
      bool hasAndroidPopupActivity() const { return this->androidPopupActivity_ != nullptr;};
      void deleteAndroidPopupActivity() { this->androidPopupActivity_ = nullptr;};
      inline string getAndroidPopupActivity() const { DARABONBA_PTR_GET_DEFAULT(androidPopupActivity_, "") };
      inline PushTask& setAndroidPopupActivity(string androidPopupActivity) { DARABONBA_PTR_SET_VALUE(androidPopupActivity_, androidPopupActivity) };


      // androidPopupBody Field Functions 
      bool hasAndroidPopupBody() const { return this->androidPopupBody_ != nullptr;};
      void deleteAndroidPopupBody() { this->androidPopupBody_ = nullptr;};
      inline string getAndroidPopupBody() const { DARABONBA_PTR_GET_DEFAULT(androidPopupBody_, "") };
      inline PushTask& setAndroidPopupBody(string androidPopupBody) { DARABONBA_PTR_SET_VALUE(androidPopupBody_, androidPopupBody) };


      // androidPopupTitle Field Functions 
      bool hasAndroidPopupTitle() const { return this->androidPopupTitle_ != nullptr;};
      void deleteAndroidPopupTitle() { this->androidPopupTitle_ = nullptr;};
      inline string getAndroidPopupTitle() const { DARABONBA_PTR_GET_DEFAULT(androidPopupTitle_, "") };
      inline PushTask& setAndroidPopupTitle(string androidPopupTitle) { DARABONBA_PTR_SET_VALUE(androidPopupTitle_, androidPopupTitle) };


      // androidRemind Field Functions 
      bool hasAndroidRemind() const { return this->androidRemind_ != nullptr;};
      void deleteAndroidRemind() { this->androidRemind_ = nullptr;};
      inline bool getAndroidRemind() const { DARABONBA_PTR_GET_DEFAULT(androidRemind_, false) };
      inline PushTask& setAndroidRemind(bool androidRemind) { DARABONBA_PTR_SET_VALUE(androidRemind_, androidRemind) };


      // androidRenderStyle Field Functions 
      bool hasAndroidRenderStyle() const { return this->androidRenderStyle_ != nullptr;};
      void deleteAndroidRenderStyle() { this->androidRenderStyle_ = nullptr;};
      inline string getAndroidRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(androidRenderStyle_, "") };
      inline PushTask& setAndroidRenderStyle(string androidRenderStyle) { DARABONBA_PTR_SET_VALUE(androidRenderStyle_, androidRenderStyle) };


      // androidTargetUserType Field Functions 
      bool hasAndroidTargetUserType() const { return this->androidTargetUserType_ != nullptr;};
      void deleteAndroidTargetUserType() { this->androidTargetUserType_ = nullptr;};
      inline int32_t getAndroidTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidTargetUserType_, 0) };
      inline PushTask& setAndroidTargetUserType(int32_t androidTargetUserType) { DARABONBA_PTR_SET_VALUE(androidTargetUserType_, androidTargetUserType) };


      // androidVivoLiveMessage Field Functions 
      bool hasAndroidVivoLiveMessage() const { return this->androidVivoLiveMessage_ != nullptr;};
      void deleteAndroidVivoLiveMessage() { this->androidVivoLiveMessage_ = nullptr;};
      inline string getAndroidVivoLiveMessage() const { DARABONBA_PTR_GET_DEFAULT(androidVivoLiveMessage_, "") };
      inline PushTask& setAndroidVivoLiveMessage(string androidVivoLiveMessage) { DARABONBA_PTR_SET_VALUE(androidVivoLiveMessage_, androidVivoLiveMessage) };


      // androidVivoPushMode Field Functions 
      bool hasAndroidVivoPushMode() const { return this->androidVivoPushMode_ != nullptr;};
      void deleteAndroidVivoPushMode() { this->androidVivoPushMode_ = nullptr;};
      inline int32_t getAndroidVivoPushMode() const { DARABONBA_PTR_GET_DEFAULT(androidVivoPushMode_, 0) };
      inline PushTask& setAndroidVivoPushMode(int32_t androidVivoPushMode) { DARABONBA_PTR_SET_VALUE(androidVivoPushMode_, androidVivoPushMode) };


      // androidVivoReceiptId Field Functions 
      bool hasAndroidVivoReceiptId() const { return this->androidVivoReceiptId_ != nullptr;};
      void deleteAndroidVivoReceiptId() { this->androidVivoReceiptId_ = nullptr;};
      inline string getAndroidVivoReceiptId() const { DARABONBA_PTR_GET_DEFAULT(androidVivoReceiptId_, "") };
      inline PushTask& setAndroidVivoReceiptId(string androidVivoReceiptId) { DARABONBA_PTR_SET_VALUE(androidVivoReceiptId_, androidVivoReceiptId) };


      // androidXiaoMiActivity Field Functions 
      bool hasAndroidXiaoMiActivity() const { return this->androidXiaoMiActivity_ != nullptr;};
      void deleteAndroidXiaoMiActivity() { this->androidXiaoMiActivity_ = nullptr;};
      inline string getAndroidXiaoMiActivity() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiActivity_, "") };
      inline PushTask& setAndroidXiaoMiActivity(string androidXiaoMiActivity) { DARABONBA_PTR_SET_VALUE(androidXiaoMiActivity_, androidXiaoMiActivity) };


      // androidXiaoMiNotifyBody Field Functions 
      bool hasAndroidXiaoMiNotifyBody() const { return this->androidXiaoMiNotifyBody_ != nullptr;};
      void deleteAndroidXiaoMiNotifyBody() { this->androidXiaoMiNotifyBody_ = nullptr;};
      inline string getAndroidXiaoMiNotifyBody() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiNotifyBody_, "") };
      inline PushTask& setAndroidXiaoMiNotifyBody(string androidXiaoMiNotifyBody) { DARABONBA_PTR_SET_VALUE(androidXiaoMiNotifyBody_, androidXiaoMiNotifyBody) };


      // androidXiaoMiNotifyTitle Field Functions 
      bool hasAndroidXiaoMiNotifyTitle() const { return this->androidXiaoMiNotifyTitle_ != nullptr;};
      void deleteAndroidXiaoMiNotifyTitle() { this->androidXiaoMiNotifyTitle_ = nullptr;};
      inline string getAndroidXiaoMiNotifyTitle() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiNotifyTitle_, "") };
      inline PushTask& setAndroidXiaoMiNotifyTitle(string androidXiaoMiNotifyTitle) { DARABONBA_PTR_SET_VALUE(androidXiaoMiNotifyTitle_, androidXiaoMiNotifyTitle) };


      // androidXiaomiBigPictureUrl Field Functions 
      bool hasAndroidXiaomiBigPictureUrl() const { return this->androidXiaomiBigPictureUrl_ != nullptr;};
      void deleteAndroidXiaomiBigPictureUrl() { this->androidXiaomiBigPictureUrl_ = nullptr;};
      inline string getAndroidXiaomiBigPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiBigPictureUrl_, "") };
      inline PushTask& setAndroidXiaomiBigPictureUrl(string androidXiaomiBigPictureUrl) { DARABONBA_PTR_SET_VALUE(androidXiaomiBigPictureUrl_, androidXiaomiBigPictureUrl) };


      // androidXiaomiFocusParam Field Functions 
      bool hasAndroidXiaomiFocusParam() const { return this->androidXiaomiFocusParam_ != nullptr;};
      void deleteAndroidXiaomiFocusParam() { this->androidXiaomiFocusParam_ = nullptr;};
      inline string getAndroidXiaomiFocusParam() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiFocusParam_, "") };
      inline PushTask& setAndroidXiaomiFocusParam(string androidXiaomiFocusParam) { DARABONBA_PTR_SET_VALUE(androidXiaomiFocusParam_, androidXiaomiFocusParam) };


      // androidXiaomiFocusPics Field Functions 
      bool hasAndroidXiaomiFocusPics() const { return this->androidXiaomiFocusPics_ != nullptr;};
      void deleteAndroidXiaomiFocusPics() { this->androidXiaomiFocusPics_ = nullptr;};
      inline string getAndroidXiaomiFocusPics() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiFocusPics_, "") };
      inline PushTask& setAndroidXiaomiFocusPics(string androidXiaomiFocusPics) { DARABONBA_PTR_SET_VALUE(androidXiaomiFocusPics_, androidXiaomiFocusPics) };


      // androidXiaomiImageUrl Field Functions 
      bool hasAndroidXiaomiImageUrl() const { return this->androidXiaomiImageUrl_ != nullptr;};
      void deleteAndroidXiaomiImageUrl() { this->androidXiaomiImageUrl_ = nullptr;};
      inline string getAndroidXiaomiImageUrl() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiImageUrl_, "") };
      inline PushTask& setAndroidXiaomiImageUrl(string androidXiaomiImageUrl) { DARABONBA_PTR_SET_VALUE(androidXiaomiImageUrl_, androidXiaomiImageUrl) };


      // androidXiaomiTemplateId Field Functions 
      bool hasAndroidXiaomiTemplateId() const { return this->androidXiaomiTemplateId_ != nullptr;};
      void deleteAndroidXiaomiTemplateId() { this->androidXiaomiTemplateId_ = nullptr;};
      inline string getAndroidXiaomiTemplateId() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiTemplateId_, "") };
      inline PushTask& setAndroidXiaomiTemplateId(string androidXiaomiTemplateId) { DARABONBA_PTR_SET_VALUE(androidXiaomiTemplateId_, androidXiaomiTemplateId) };


      // androidXiaomiTemplateParams Field Functions 
      bool hasAndroidXiaomiTemplateParams() const { return this->androidXiaomiTemplateParams_ != nullptr;};
      void deleteAndroidXiaomiTemplateParams() { this->androidXiaomiTemplateParams_ = nullptr;};
      inline string getAndroidXiaomiTemplateParams() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiTemplateParams_, "") };
      inline PushTask& setAndroidXiaomiTemplateParams(string androidXiaomiTemplateParams) { DARABONBA_PTR_SET_VALUE(androidXiaomiTemplateParams_, androidXiaomiTemplateParams) };


      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
      inline PushTask& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline PushTask& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline PushTask& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // harmonyAction Field Functions 
      bool hasHarmonyAction() const { return this->harmonyAction_ != nullptr;};
      void deleteHarmonyAction() { this->harmonyAction_ = nullptr;};
      inline string getHarmonyAction() const { DARABONBA_PTR_GET_DEFAULT(harmonyAction_, "") };
      inline PushTask& setHarmonyAction(string harmonyAction) { DARABONBA_PTR_SET_VALUE(harmonyAction_, harmonyAction) };


      // harmonyActionType Field Functions 
      bool hasHarmonyActionType() const { return this->harmonyActionType_ != nullptr;};
      void deleteHarmonyActionType() { this->harmonyActionType_ = nullptr;};
      inline string getHarmonyActionType() const { DARABONBA_PTR_GET_DEFAULT(harmonyActionType_, "") };
      inline PushTask& setHarmonyActionType(string harmonyActionType) { DARABONBA_PTR_SET_VALUE(harmonyActionType_, harmonyActionType) };


      // harmonyBadgeAddNum Field Functions 
      bool hasHarmonyBadgeAddNum() const { return this->harmonyBadgeAddNum_ != nullptr;};
      void deleteHarmonyBadgeAddNum() { this->harmonyBadgeAddNum_ = nullptr;};
      inline int32_t getHarmonyBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(harmonyBadgeAddNum_, 0) };
      inline PushTask& setHarmonyBadgeAddNum(int32_t harmonyBadgeAddNum) { DARABONBA_PTR_SET_VALUE(harmonyBadgeAddNum_, harmonyBadgeAddNum) };


      // harmonyBadgeSetNum Field Functions 
      bool hasHarmonyBadgeSetNum() const { return this->harmonyBadgeSetNum_ != nullptr;};
      void deleteHarmonyBadgeSetNum() { this->harmonyBadgeSetNum_ = nullptr;};
      inline int32_t getHarmonyBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(harmonyBadgeSetNum_, 0) };
      inline PushTask& setHarmonyBadgeSetNum(int32_t harmonyBadgeSetNum) { DARABONBA_PTR_SET_VALUE(harmonyBadgeSetNum_, harmonyBadgeSetNum) };


      // harmonyCategory Field Functions 
      bool hasHarmonyCategory() const { return this->harmonyCategory_ != nullptr;};
      void deleteHarmonyCategory() { this->harmonyCategory_ = nullptr;};
      inline string getHarmonyCategory() const { DARABONBA_PTR_GET_DEFAULT(harmonyCategory_, "") };
      inline PushTask& setHarmonyCategory(string harmonyCategory) { DARABONBA_PTR_SET_VALUE(harmonyCategory_, harmonyCategory) };


      // harmonyExtParameters Field Functions 
      bool hasHarmonyExtParameters() const { return this->harmonyExtParameters_ != nullptr;};
      void deleteHarmonyExtParameters() { this->harmonyExtParameters_ = nullptr;};
      inline string getHarmonyExtParameters() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtParameters_, "") };
      inline PushTask& setHarmonyExtParameters(string harmonyExtParameters) { DARABONBA_PTR_SET_VALUE(harmonyExtParameters_, harmonyExtParameters) };


      // harmonyExtensionExtraData Field Functions 
      bool hasHarmonyExtensionExtraData() const { return this->harmonyExtensionExtraData_ != nullptr;};
      void deleteHarmonyExtensionExtraData() { this->harmonyExtensionExtraData_ = nullptr;};
      inline string getHarmonyExtensionExtraData() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtensionExtraData_, "") };
      inline PushTask& setHarmonyExtensionExtraData(string harmonyExtensionExtraData) { DARABONBA_PTR_SET_VALUE(harmonyExtensionExtraData_, harmonyExtensionExtraData) };


      // harmonyExtensionPush Field Functions 
      bool hasHarmonyExtensionPush() const { return this->harmonyExtensionPush_ != nullptr;};
      void deleteHarmonyExtensionPush() { this->harmonyExtensionPush_ = nullptr;};
      inline bool getHarmonyExtensionPush() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtensionPush_, false) };
      inline PushTask& setHarmonyExtensionPush(bool harmonyExtensionPush) { DARABONBA_PTR_SET_VALUE(harmonyExtensionPush_, harmonyExtensionPush) };


      // harmonyImageUrl Field Functions 
      bool hasHarmonyImageUrl() const { return this->harmonyImageUrl_ != nullptr;};
      void deleteHarmonyImageUrl() { this->harmonyImageUrl_ = nullptr;};
      inline string getHarmonyImageUrl() const { DARABONBA_PTR_GET_DEFAULT(harmonyImageUrl_, "") };
      inline PushTask& setHarmonyImageUrl(string harmonyImageUrl) { DARABONBA_PTR_SET_VALUE(harmonyImageUrl_, harmonyImageUrl) };


      // harmonyInboxContent Field Functions 
      bool hasHarmonyInboxContent() const { return this->harmonyInboxContent_ != nullptr;};
      void deleteHarmonyInboxContent() { this->harmonyInboxContent_ = nullptr;};
      inline string getHarmonyInboxContent() const { DARABONBA_PTR_GET_DEFAULT(harmonyInboxContent_, "") };
      inline PushTask& setHarmonyInboxContent(string harmonyInboxContent) { DARABONBA_PTR_SET_VALUE(harmonyInboxContent_, harmonyInboxContent) };


      // harmonyLiveViewPayload Field Functions 
      bool hasHarmonyLiveViewPayload() const { return this->harmonyLiveViewPayload_ != nullptr;};
      void deleteHarmonyLiveViewPayload() { this->harmonyLiveViewPayload_ = nullptr;};
      inline string getHarmonyLiveViewPayload() const { DARABONBA_PTR_GET_DEFAULT(harmonyLiveViewPayload_, "") };
      inline PushTask& setHarmonyLiveViewPayload(string harmonyLiveViewPayload) { DARABONBA_PTR_SET_VALUE(harmonyLiveViewPayload_, harmonyLiveViewPayload) };


      // harmonyNotificationSlotType Field Functions 
      bool hasHarmonyNotificationSlotType() const { return this->harmonyNotificationSlotType_ != nullptr;};
      void deleteHarmonyNotificationSlotType() { this->harmonyNotificationSlotType_ = nullptr;};
      inline string getHarmonyNotificationSlotType() const { DARABONBA_PTR_GET_DEFAULT(harmonyNotificationSlotType_, "") };
      inline PushTask& setHarmonyNotificationSlotType(string harmonyNotificationSlotType) { DARABONBA_PTR_SET_VALUE(harmonyNotificationSlotType_, harmonyNotificationSlotType) };


      // harmonyNotifyId Field Functions 
      bool hasHarmonyNotifyId() const { return this->harmonyNotifyId_ != nullptr;};
      void deleteHarmonyNotifyId() { this->harmonyNotifyId_ = nullptr;};
      inline int32_t getHarmonyNotifyId() const { DARABONBA_PTR_GET_DEFAULT(harmonyNotifyId_, 0) };
      inline PushTask& setHarmonyNotifyId(int32_t harmonyNotifyId) { DARABONBA_PTR_SET_VALUE(harmonyNotifyId_, harmonyNotifyId) };


      // harmonyReceiptId Field Functions 
      bool hasHarmonyReceiptId() const { return this->harmonyReceiptId_ != nullptr;};
      void deleteHarmonyReceiptId() { this->harmonyReceiptId_ = nullptr;};
      inline string getHarmonyReceiptId() const { DARABONBA_PTR_GET_DEFAULT(harmonyReceiptId_, "") };
      inline PushTask& setHarmonyReceiptId(string harmonyReceiptId) { DARABONBA_PTR_SET_VALUE(harmonyReceiptId_, harmonyReceiptId) };


      // harmonyRemind Field Functions 
      bool hasHarmonyRemind() const { return this->harmonyRemind_ != nullptr;};
      void deleteHarmonyRemind() { this->harmonyRemind_ = nullptr;};
      inline bool getHarmonyRemind() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemind_, false) };
      inline PushTask& setHarmonyRemind(bool harmonyRemind) { DARABONBA_PTR_SET_VALUE(harmonyRemind_, harmonyRemind) };


      // harmonyRemindBody Field Functions 
      bool hasHarmonyRemindBody() const { return this->harmonyRemindBody_ != nullptr;};
      void deleteHarmonyRemindBody() { this->harmonyRemindBody_ = nullptr;};
      inline string getHarmonyRemindBody() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemindBody_, "") };
      inline PushTask& setHarmonyRemindBody(string harmonyRemindBody) { DARABONBA_PTR_SET_VALUE(harmonyRemindBody_, harmonyRemindBody) };


      // harmonyRemindTitle Field Functions 
      bool hasHarmonyRemindTitle() const { return this->harmonyRemindTitle_ != nullptr;};
      void deleteHarmonyRemindTitle() { this->harmonyRemindTitle_ = nullptr;};
      inline string getHarmonyRemindTitle() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemindTitle_, "") };
      inline PushTask& setHarmonyRemindTitle(string harmonyRemindTitle) { DARABONBA_PTR_SET_VALUE(harmonyRemindTitle_, harmonyRemindTitle) };


      // harmonyRenderStyle Field Functions 
      bool hasHarmonyRenderStyle() const { return this->harmonyRenderStyle_ != nullptr;};
      void deleteHarmonyRenderStyle() { this->harmonyRenderStyle_ = nullptr;};
      inline string getHarmonyRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(harmonyRenderStyle_, "") };
      inline PushTask& setHarmonyRenderStyle(string harmonyRenderStyle) { DARABONBA_PTR_SET_VALUE(harmonyRenderStyle_, harmonyRenderStyle) };


      // harmonyTestMessage Field Functions 
      bool hasHarmonyTestMessage() const { return this->harmonyTestMessage_ != nullptr;};
      void deleteHarmonyTestMessage() { this->harmonyTestMessage_ = nullptr;};
      inline bool getHarmonyTestMessage() const { DARABONBA_PTR_GET_DEFAULT(harmonyTestMessage_, false) };
      inline PushTask& setHarmonyTestMessage(bool harmonyTestMessage) { DARABONBA_PTR_SET_VALUE(harmonyTestMessage_, harmonyTestMessage) };


      // harmonyUri Field Functions 
      bool hasHarmonyUri() const { return this->harmonyUri_ != nullptr;};
      void deleteHarmonyUri() { this->harmonyUri_ = nullptr;};
      inline string getHarmonyUri() const { DARABONBA_PTR_GET_DEFAULT(harmonyUri_, "") };
      inline PushTask& setHarmonyUri(string harmonyUri) { DARABONBA_PTR_SET_VALUE(harmonyUri_, harmonyUri) };


      // jobKey Field Functions 
      bool hasJobKey() const { return this->jobKey_ != nullptr;};
      void deleteJobKey() { this->jobKey_ = nullptr;};
      inline string getJobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
      inline PushTask& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


      // pushTime Field Functions 
      bool hasPushTime() const { return this->pushTime_ != nullptr;};
      void deletePushTime() { this->pushTime_ = nullptr;};
      inline string getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
      inline PushTask& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


      // pushType Field Functions 
      bool hasPushType() const { return this->pushType_ != nullptr;};
      void deletePushType() { this->pushType_ = nullptr;};
      inline string getPushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
      inline PushTask& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


      // sendChannels Field Functions 
      bool hasSendChannels() const { return this->sendChannels_ != nullptr;};
      void deleteSendChannels() { this->sendChannels_ = nullptr;};
      inline string getSendChannels() const { DARABONBA_PTR_GET_DEFAULT(sendChannels_, "") };
      inline PushTask& setSendChannels(string sendChannels) { DARABONBA_PTR_SET_VALUE(sendChannels_, sendChannels) };


      // sendSpeed Field Functions 
      bool hasSendSpeed() const { return this->sendSpeed_ != nullptr;};
      void deleteSendSpeed() { this->sendSpeed_ = nullptr;};
      inline int32_t getSendSpeed() const { DARABONBA_PTR_GET_DEFAULT(sendSpeed_, 0) };
      inline PushTask& setSendSpeed(int32_t sendSpeed) { DARABONBA_PTR_SET_VALUE(sendSpeed_, sendSpeed) };


      // storeOffline Field Functions 
      bool hasStoreOffline() const { return this->storeOffline_ != nullptr;};
      void deleteStoreOffline() { this->storeOffline_ = nullptr;};
      inline bool getStoreOffline() const { DARABONBA_PTR_GET_DEFAULT(storeOffline_, false) };
      inline PushTask& setStoreOffline(bool storeOffline) { DARABONBA_PTR_SET_VALUE(storeOffline_, storeOffline) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline PushTask& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetValue Field Functions 
      bool hasTargetValue() const { return this->targetValue_ != nullptr;};
      void deleteTargetValue() { this->targetValue_ = nullptr;};
      inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
      inline PushTask& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline PushTask& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // trim Field Functions 
      bool hasTrim() const { return this->trim_ != nullptr;};
      void deleteTrim() { this->trim_ = nullptr;};
      inline bool getTrim() const { DARABONBA_PTR_GET_DEFAULT(trim_, false) };
      inline PushTask& setTrim(bool trim) { DARABONBA_PTR_SET_VALUE(trim_, trim) };


      // iOSApnsEnv Field Functions 
      bool hasIOSApnsEnv() const { return this->iOSApnsEnv_ != nullptr;};
      void deleteIOSApnsEnv() { this->iOSApnsEnv_ = nullptr;};
      inline string getIOSApnsEnv() const { DARABONBA_PTR_GET_DEFAULT(iOSApnsEnv_, "") };
      inline PushTask& setIOSApnsEnv(string iOSApnsEnv) { DARABONBA_PTR_SET_VALUE(iOSApnsEnv_, iOSApnsEnv) };


      // iOSBadge Field Functions 
      bool hasIOSBadge() const { return this->iOSBadge_ != nullptr;};
      void deleteIOSBadge() { this->iOSBadge_ = nullptr;};
      inline int32_t getIOSBadge() const { DARABONBA_PTR_GET_DEFAULT(iOSBadge_, 0) };
      inline PushTask& setIOSBadge(int32_t iOSBadge) { DARABONBA_PTR_SET_VALUE(iOSBadge_, iOSBadge) };


      // iOSBadgeAutoIncrement Field Functions 
      bool hasIOSBadgeAutoIncrement() const { return this->iOSBadgeAutoIncrement_ != nullptr;};
      void deleteIOSBadgeAutoIncrement() { this->iOSBadgeAutoIncrement_ = nullptr;};
      inline bool getIOSBadgeAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(iOSBadgeAutoIncrement_, false) };
      inline PushTask& setIOSBadgeAutoIncrement(bool iOSBadgeAutoIncrement) { DARABONBA_PTR_SET_VALUE(iOSBadgeAutoIncrement_, iOSBadgeAutoIncrement) };


      // iOSExtParameters Field Functions 
      bool hasIOSExtParameters() const { return this->iOSExtParameters_ != nullptr;};
      void deleteIOSExtParameters() { this->iOSExtParameters_ = nullptr;};
      inline string getIOSExtParameters() const { DARABONBA_PTR_GET_DEFAULT(iOSExtParameters_, "") };
      inline PushTask& setIOSExtParameters(string iOSExtParameters) { DARABONBA_PTR_SET_VALUE(iOSExtParameters_, iOSExtParameters) };


      // iOSInterruptionLevel Field Functions 
      bool hasIOSInterruptionLevel() const { return this->iOSInterruptionLevel_ != nullptr;};
      void deleteIOSInterruptionLevel() { this->iOSInterruptionLevel_ = nullptr;};
      inline string getIOSInterruptionLevel() const { DARABONBA_PTR_GET_DEFAULT(iOSInterruptionLevel_, "") };
      inline PushTask& setIOSInterruptionLevel(string iOSInterruptionLevel) { DARABONBA_PTR_SET_VALUE(iOSInterruptionLevel_, iOSInterruptionLevel) };


      // iOSLiveActivityAttributes Field Functions 
      bool hasIOSLiveActivityAttributes() const { return this->iOSLiveActivityAttributes_ != nullptr;};
      void deleteIOSLiveActivityAttributes() { this->iOSLiveActivityAttributes_ = nullptr;};
      inline string getIOSLiveActivityAttributes() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityAttributes_, "") };
      inline PushTask& setIOSLiveActivityAttributes(string iOSLiveActivityAttributes) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityAttributes_, iOSLiveActivityAttributes) };


      // iOSLiveActivityAttributesType Field Functions 
      bool hasIOSLiveActivityAttributesType() const { return this->iOSLiveActivityAttributesType_ != nullptr;};
      void deleteIOSLiveActivityAttributesType() { this->iOSLiveActivityAttributesType_ = nullptr;};
      inline string getIOSLiveActivityAttributesType() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityAttributesType_, "") };
      inline PushTask& setIOSLiveActivityAttributesType(string iOSLiveActivityAttributesType) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityAttributesType_, iOSLiveActivityAttributesType) };


      // iOSLiveActivityContentState Field Functions 
      bool hasIOSLiveActivityContentState() const { return this->iOSLiveActivityContentState_ != nullptr;};
      void deleteIOSLiveActivityContentState() { this->iOSLiveActivityContentState_ = nullptr;};
      inline string getIOSLiveActivityContentState() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityContentState_, "") };
      inline PushTask& setIOSLiveActivityContentState(string iOSLiveActivityContentState) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityContentState_, iOSLiveActivityContentState) };


      // iOSLiveActivityDismissalDate Field Functions 
      bool hasIOSLiveActivityDismissalDate() const { return this->iOSLiveActivityDismissalDate_ != nullptr;};
      void deleteIOSLiveActivityDismissalDate() { this->iOSLiveActivityDismissalDate_ = nullptr;};
      inline int64_t getIOSLiveActivityDismissalDate() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityDismissalDate_, 0L) };
      inline PushTask& setIOSLiveActivityDismissalDate(int64_t iOSLiveActivityDismissalDate) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityDismissalDate_, iOSLiveActivityDismissalDate) };


      // iOSLiveActivityEvent Field Functions 
      bool hasIOSLiveActivityEvent() const { return this->iOSLiveActivityEvent_ != nullptr;};
      void deleteIOSLiveActivityEvent() { this->iOSLiveActivityEvent_ = nullptr;};
      inline string getIOSLiveActivityEvent() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityEvent_, "") };
      inline PushTask& setIOSLiveActivityEvent(string iOSLiveActivityEvent) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityEvent_, iOSLiveActivityEvent) };


      // iOSLiveActivityId Field Functions 
      bool hasIOSLiveActivityId() const { return this->iOSLiveActivityId_ != nullptr;};
      void deleteIOSLiveActivityId() { this->iOSLiveActivityId_ = nullptr;};
      inline string getIOSLiveActivityId() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityId_, "") };
      inline PushTask& setIOSLiveActivityId(string iOSLiveActivityId) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityId_, iOSLiveActivityId) };


      // iOSLiveActivityStaleDate Field Functions 
      bool hasIOSLiveActivityStaleDate() const { return this->iOSLiveActivityStaleDate_ != nullptr;};
      void deleteIOSLiveActivityStaleDate() { this->iOSLiveActivityStaleDate_ = nullptr;};
      inline int64_t getIOSLiveActivityStaleDate() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityStaleDate_, 0L) };
      inline PushTask& setIOSLiveActivityStaleDate(int64_t iOSLiveActivityStaleDate) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityStaleDate_, iOSLiveActivityStaleDate) };


      // iOSMusic Field Functions 
      bool hasIOSMusic() const { return this->iOSMusic_ != nullptr;};
      void deleteIOSMusic() { this->iOSMusic_ = nullptr;};
      inline string getIOSMusic() const { DARABONBA_PTR_GET_DEFAULT(iOSMusic_, "") };
      inline PushTask& setIOSMusic(string iOSMusic) { DARABONBA_PTR_SET_VALUE(iOSMusic_, iOSMusic) };


      // iOSMutableContent Field Functions 
      bool hasIOSMutableContent() const { return this->iOSMutableContent_ != nullptr;};
      void deleteIOSMutableContent() { this->iOSMutableContent_ = nullptr;};
      inline bool getIOSMutableContent() const { DARABONBA_PTR_GET_DEFAULT(iOSMutableContent_, false) };
      inline PushTask& setIOSMutableContent(bool iOSMutableContent) { DARABONBA_PTR_SET_VALUE(iOSMutableContent_, iOSMutableContent) };


      // iOSNotificationCategory Field Functions 
      bool hasIOSNotificationCategory() const { return this->iOSNotificationCategory_ != nullptr;};
      void deleteIOSNotificationCategory() { this->iOSNotificationCategory_ = nullptr;};
      inline string getIOSNotificationCategory() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationCategory_, "") };
      inline PushTask& setIOSNotificationCategory(string iOSNotificationCategory) { DARABONBA_PTR_SET_VALUE(iOSNotificationCategory_, iOSNotificationCategory) };


      // iOSNotificationCollapseId Field Functions 
      bool hasIOSNotificationCollapseId() const { return this->iOSNotificationCollapseId_ != nullptr;};
      void deleteIOSNotificationCollapseId() { this->iOSNotificationCollapseId_ = nullptr;};
      inline string getIOSNotificationCollapseId() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationCollapseId_, "") };
      inline PushTask& setIOSNotificationCollapseId(string iOSNotificationCollapseId) { DARABONBA_PTR_SET_VALUE(iOSNotificationCollapseId_, iOSNotificationCollapseId) };


      // iOSNotificationThreadId Field Functions 
      bool hasIOSNotificationThreadId() const { return this->iOSNotificationThreadId_ != nullptr;};
      void deleteIOSNotificationThreadId() { this->iOSNotificationThreadId_ = nullptr;};
      inline string getIOSNotificationThreadId() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationThreadId_, "") };
      inline PushTask& setIOSNotificationThreadId(string iOSNotificationThreadId) { DARABONBA_PTR_SET_VALUE(iOSNotificationThreadId_, iOSNotificationThreadId) };


      // iOSRelevanceScore Field Functions 
      bool hasIOSRelevanceScore() const { return this->iOSRelevanceScore_ != nullptr;};
      void deleteIOSRelevanceScore() { this->iOSRelevanceScore_ = nullptr;};
      inline double getIOSRelevanceScore() const { DARABONBA_PTR_GET_DEFAULT(iOSRelevanceScore_, 0.0) };
      inline PushTask& setIOSRelevanceScore(double iOSRelevanceScore) { DARABONBA_PTR_SET_VALUE(iOSRelevanceScore_, iOSRelevanceScore) };


      // iOSRemind Field Functions 
      bool hasIOSRemind() const { return this->iOSRemind_ != nullptr;};
      void deleteIOSRemind() { this->iOSRemind_ = nullptr;};
      inline bool getIOSRemind() const { DARABONBA_PTR_GET_DEFAULT(iOSRemind_, false) };
      inline PushTask& setIOSRemind(bool iOSRemind) { DARABONBA_PTR_SET_VALUE(iOSRemind_, iOSRemind) };


      // iOSRemindBody Field Functions 
      bool hasIOSRemindBody() const { return this->iOSRemindBody_ != nullptr;};
      void deleteIOSRemindBody() { this->iOSRemindBody_ = nullptr;};
      inline string getIOSRemindBody() const { DARABONBA_PTR_GET_DEFAULT(iOSRemindBody_, "") };
      inline PushTask& setIOSRemindBody(string iOSRemindBody) { DARABONBA_PTR_SET_VALUE(iOSRemindBody_, iOSRemindBody) };


      // iOSSilentNotification Field Functions 
      bool hasIOSSilentNotification() const { return this->iOSSilentNotification_ != nullptr;};
      void deleteIOSSilentNotification() { this->iOSSilentNotification_ = nullptr;};
      inline bool getIOSSilentNotification() const { DARABONBA_PTR_GET_DEFAULT(iOSSilentNotification_, false) };
      inline PushTask& setIOSSilentNotification(bool iOSSilentNotification) { DARABONBA_PTR_SET_VALUE(iOSSilentNotification_, iOSSilentNotification) };


      // iOSSubtitle Field Functions 
      bool hasIOSSubtitle() const { return this->iOSSubtitle_ != nullptr;};
      void deleteIOSSubtitle() { this->iOSSubtitle_ = nullptr;};
      inline string getIOSSubtitle() const { DARABONBA_PTR_GET_DEFAULT(iOSSubtitle_, "") };
      inline PushTask& setIOSSubtitle(string iOSSubtitle) { DARABONBA_PTR_SET_VALUE(iOSSubtitle_, iOSSubtitle) };


    protected:
      // Specify the Activity to open from the notification.
      // 
      // Only applicable when PushTask.N.AndroidOpenType="Activity", e.g., `com.alibaba.cloudpushdemo.bizactivity`.
      shared_ptr<string> androidActivity_ {};
      // Set the badge increment value. The value is added to the existing badge count. Value range: [1-99].
      // > Only valid for Huawei/Honor vendor channel pushes. When both AndroidBadgeAddNum and AndroidBadgeSetNum are present, AndroidBadgeSetNum takes precedence.
      shared_ptr<int32_t> androidBadgeAddNum_ {};
      // Full class name of the app entry Activity for badge settings.
      // 
      // > Only valid for Huawei/Honor vendor channel pushes.
      shared_ptr<string> androidBadgeClass_ {};
      // Set the badge to a fixed number. Value range: [0-99].
      // 
      // > For vendor channel pushes, this only takes effect on Huawei and Honor channels. For Alibaba Cloud proprietary channel pushes, this only takes effect on Huawei, Honor, and vivo devices.
      shared_ptr<int32_t> androidBadgeSetNum_ {};
      // Body in long text mode. Length limit: 1,000 bytes (1 Chinese character counts as 3 bytes). Subject to specific vendor channel restrictions when sending.
      // 
      // Currently supported:
      // - Huawei: EMUI 10 and later
      // - Honor: Magic UI 4.0 and later
      // - Xiaomi: MIUI 10 and later
      // - OPPO: ColorOS 5.0 and later
      // - Meizu: Flyme
      // - Proprietary channel: Android SDK 3.6.0 and later
      // 
      // If this parameter is not provided in long text mode, the first non-empty value from Body and AndroidPopupBody is used.
      shared_ptr<string> androidBigBody_ {};
      // Image URL in big picture mode. Currently supported: Proprietary channel: Android SDK 3.6.0 and later.
      shared_ptr<string> androidBigPictureUrl_ {};
      // Title in long text mode. Length limit: 200 bytes (1 Chinese character counts as 3 bytes).
      // 
      // - Currently only supported by the Honor channel and Huawei channel EMUI 11 and later.
      // 
      // - If this parameter is not provided in long text mode, the first non-empty value from Title and AndroidPopupTitle is used.
      shared_ptr<string> androidBigTitle_ {};
      // Set notification extended properties. This property does not take effect when the push type PushType is set to MESSAGE.
      // 
      // This parameter must be passed in JSON map format; otherwise, parsing errors will occur.
      shared_ptr<string> androidExtParameters_ {};
      // Set the Honor channel notification type:
      // - **0**: Production notification (default).
      // - **1**: Test notification.
      // 
      // > Each application can send up to 1,000 test notifications per day, and this is not subject to the daily per-device push limit.
      shared_ptr<int32_t> androidHonorTargetUserType_ {};
      // Set the Huawei instant notification parameter:
      // - **0**: Send a regular Huawei notification (default).
      // - **1**: Send a Huawei instant notification.
      shared_ptr<int32_t> androidHuaweiBusinessType_ {};
      // JSON string of the Huawei Android Live Notification data structure [LiveNotificationPayload](https://developer.huawei.com/consumer/cn/doc/HMSCore-References/rest-live-0000001562939968#ZH-CN_TOPIC_0000001700850537__p195121620102511). For development integration, see [Huawei Live Notification Push Guide](https://help.aliyun.com/document_detail/2983768.html)
      shared_ptr<string> androidHuaweiLiveNotificationPayload_ {};
      // Huawei channel receipt ID. This receipt ID can be found in the receipt parameter configuration on the Huawei channel push operations platform.
      // 
      // > If the default receipt configuration on the Huawei channel push operations platform is set to Alibaba Cloud receipt, this is not required. If not, we recommend configuring the default Huawei channel receipt ID in the Alibaba Cloud EMAS Mobile Push console first.
      shared_ptr<string> androidHuaweiReceiptId_ {};
      // Set the Huawei channel notification type:
      // - **0**: Production notification (default).
      // - **1**: Test notification.
      // 
      // > Each application can send up to 500 test notifications per day, and this is not subject to the daily per-device push limit.
      shared_ptr<int32_t> androidHuaweiTargetUserType_ {};
      // Right-side icon URL. Currently supported:
      // - Huawei EMUI (only applicable in long text mode and Inbox mode)
      // - Honor Magic UI (only applicable in long text mode)
      // - Proprietary channel: Android SDK 3.5.0 and later
      shared_ptr<string> androidImageUrl_ {};
      // Body content in Inbox mode. The content must be a valid JSON Array with no more than 5 elements. Currently supported:
      // 
      // - Huawei: EMUI 9 and later
      // - Honor: Magic UI 4.0 and later
      // - Xiaomi: MIUI 10 and later
      // - OPPO: ColorOS 5.0 and later
      // - Proprietary channel: Android SDK 3.6.0 and later
      shared_ptr<string> androidInboxBody_ {};
      // Meizu message type
      // 
      // - 0: Public message (default)
      // - 1: Private message
      shared_ptr<int32_t> androidMeizuNoticeMsgType_ {};
      // Purpose 1: After completing the [self-classification privilege application](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835?#section3410731125514), this is used to identify the message type, determine the [notification alert method](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#ZH-CN_TOPIC_0000001149358835__p3850133955718), and speed up delivery for specific message types. For valid values, refer to the Huawei Push official documentation\\"s [Message Classification Standard](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#section1076611477914). Use the "Cloud notification category value" or "Local notification category value" from the documentation table.
      // 
      // Purpose 2: After [applying for special permissions](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/faq-0000001050042183#section037425218509), this is used to identify high-priority pass-through scenarios. Valid values:
      // - VOIP: Audio/video calls
      // - PLAY_VOICE: Voice playback
      // 
      // > For "Cloud notification category values" marked as "Not applicable", the Alibaba Cloud proprietary channel is used. For "Local notification category values" marked as "Not applicable", the Huawei channel is used.
      shared_ptr<string> androidMessageHuaweiCategory_ {};
      // Huawei channel notification delivery priority. Valid values:
      // 
      // - HIGH
      // 
      // - NORMAL
      // 
      // Permission application is required. See: [Application link](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/faq-0000001050042183#section037425218509).
      shared_ptr<string> androidMessageHuaweiUrgency_ {};
      // OPPO classifies messages into two categories: Communication & Service, and Content & Marketing.
      // 
      // Communication & Service (permission application required):
      // - IM: Instant messaging, audio, and video calls
      // - ACCOUNT: Personal account and asset changes
      // - DEVICE_REMINDER: Personal device reminders
      // - ORDER: Personal order/logistics status changes
      // - TODO: Personal schedule/to-do items
      // - SUBSCRIPTION: Personal subscriptions
      // 
      // Content & Marketing:
      // - NEWS: News and information
      // - CONTENT: Content recommendations
      // - MARKETING: Platform promotions
      // - SOCIAL: Social updates
      // 
      // For details, see [OPUSH Message Classification Rules](https://open.oppomobile.com/new/developmentDoc/info?id=13189)
      shared_ptr<string> androidMessageOppoCategory_ {};
      // OPPO channel notification bar message alert level. Valid values:
      // - 1: Notification bar
      // - 2: Notification bar, lock screen, ringtone, and vibration (default notification level for Communication & Service messages)
      // - 16: Notification bar, lock screen, ringtone, vibration, and banner (permission application required)
      // 
      // > When using the AndroidMessageOppoNotifyLevel parameter, the AndroidMessageOppoCategory parameter must also be provided.
      shared_ptr<int32_t> androidMessageOppoNotifyLevel_ {};
      // vivo classifies messages into two categories: System messages and Operational messages.
      // 
      // System messages:
      // - IM: Instant messages
      // - ACCOUNT: Account and assets
      // - TODO: Schedule and to-do items
      // - DEVICE_REMINDER: Device information
      // - ORDER: Orders and logistics
      // - SUBSCRIPTION: Subscription reminders
      // 
      // Operational messages:
      // - NEWS: News
      // - CONTENT: Content recommendations
      // - MARKETING: Operational campaigns
      // - SOCIAL: Social updates
      // > For details, see [Classification Description](https://dev.vivo.com.cn/documentCenter/doc/359#s-ef3qugc3)
      shared_ptr<string> androidMessageVivoCategory_ {};
      // Huawei vendor channel notification sound. Specify the name of an audio file stored in the client project\\"s app/src/main/res/raw/ directory. The file extension is not required.
      // 
      // If not set, the default ringtone is used.
      shared_ptr<string> androidMusic_ {};
      // Priority of the notification position in the Android notification bar. Valid values: -2, -1, 0, 1, 2.
      shared_ptr<int32_t> androidNotificationBarPriority_ {};
      // Android custom notification bar style. Value range: 1-100.
      shared_ptr<int32_t> androidNotificationBarType_ {};
      // The channelId of the Android app. Must match the channelId configured in the app.
      // - Set the NotificationChannel parameter. For specific usage, see [FAQ: Notifications not received on Android 8.0+ devices](https://help.aliyun.com/document_detail/67398.html).
      // - Since the OPPO notification private channel\\"s channel_id is the same as the app\\"s channelId, the channel_id takes this value when pushing through the OPPO channel.
      // - For Huawei, FCM, and Alibaba Cloud proprietary channel pushes, the channel_id takes this value.
      shared_ptr<string> androidNotificationChannel_ {};
      // Message grouping. Messages in the same group display only the latest one and the total count of messages received in that group in the notification bar. All messages are not displayed and cannot be expanded. Currently supported:
      // 
      // - Huawei vendor channel
      // - Honor vendor channel
      // - Proprietary channel: Android SDK 3.9.1 and earlier
      // 
      // > The proprietary channel no longer supports this parameter on Android SDK 3.9.2 and later.
      shared_ptr<string> androidNotificationGroup_ {};
      // Set the Honor notification message classification importance parameter, which determines the notification behavior on user devices. Valid values:
      // 
      // - LOW: Information and marketing messages
      // 
      // - NORMAL: Service and communication messages
      // 
      // Application is required on the Honor platform. [Application link](https://developer.honor.com/cn/docs/11002/guides/notification-class#%E8%87%AA%E5%88%86%E7%B1%BB%E6%9D%83%E7%9B%8A%E7%94%B3%E8%AF%B7).
      shared_ptr<string> androidNotificationHonorChannel_ {};
      // Set the Huawei notification message classification importance parameter, which determines the notification behavior on user devices. Valid values:
      // 
      // - LOW: Information and marketing messages
      // - NORMAL: Service and communication messages
      // 
      // >- The Huawei channel now recommends using AndroidMessageHuaweiCategory for notification classification. AndroidNotificationHuaweiChannel is no longer required.
      // >- Application is required on the Huawei platform. [Application link](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#section893184112272).
      shared_ptr<string> androidNotificationHuaweiChannel_ {};
      // Unique identifier for each message displayed in the notification bar. Different notification bar messages can share the same NotifyId, allowing new notifications to replace old ones.
      shared_ptr<int32_t> androidNotificationNotifyId_ {};
      // Message grouping. Messages in the same group are displayed collapsed in the notification bar and can be expanded. Notifications from different groups are displayed separately. Currently supported:
      // 
      // - Proprietary channel: Android SDK 3.9.2 and later
      shared_ptr<string> androidNotificationThreadId_ {};
      // Set the vivo notification message classification. Valid values:
      // 
      // - 0: Operational messages (default)
      // - 1: System messages
      // 
      // >- The vivo channel now recommends using AndroidMessageVivoCategory for notification classification. AndroidNotificationVivoChannel is no longer required.
      // >- Application is required on the vivo platform. See: [Application link](https://dev.vivo.com.cn/documentCenter/doc/359).
      shared_ptr<string> androidNotificationVivoChannel_ {};
      // Set the channelId for Xiaomi notification types. Application is required on the Xiaomi platform. See: [Application link](https://dev.mi.com/console/doc/detail?pId=2422#_4).
      // >- A single application on the Xiaomi channel can apply for up to 8 channels. Please plan ahead.
      shared_ptr<string> androidNotificationXiaomiChannel_ {};
      // Notification alert type. Valid values:
      // 
      // - **VIBRATE**: Vibration (default)
      // - **SOUND**: Sound
      // - **BOTH**: Sound and vibration
      // - **NONE**: Silent
      shared_ptr<string> androidNotifyType_ {};
      // Action after clicking the notification. Valid values:
      // 
      // - APPLICATION: Open the app (default)
      // - ACTIVITY: Open an Android Activity
      // - URL: Open a URL
      // - NONE: No navigation
      shared_ptr<string> androidOpenType_ {};
      // The URL to open after Android receives the push. Only applicable when PushTask.N.AndroidOpenType="URL".
      shared_ptr<string> androidOpenUrl_ {};
      // JSON string of the OPPO Fluid Cloud intent deletion data structure [data](https://open.oppomobile.com/documentation/page/info?id=13578). This parameter is ignored when the AndroidOppoIntelligentIntent parameter is already provided. For development integration, see [OPPO Fluid Cloud Push Guide](https://help.aliyun.com/document_detail/2997310.html)
      shared_ptr<string> androidOppoDeleteIntentData_ {};
      // JSON string of the OPPO Fluid Cloud intent sharing data structure [IntelligentIntent](https://open.oppomobile.com/documentation/page/info?id=13565). For development integration, see [OPPO Fluid Cloud Push Guide](https://help.aliyun.com/document_detail/2997310.html)
      shared_ptr<string> androidOppoIntelligentIntent_ {};
      // Set the OPPO Fluid Cloud push environment:
      // - **0**: Production environment (default).
      // - **1**: Test environment.
      // 
      // > The OPPO Fluid Cloud test environment requires client-side setup. See [Environment Setup](https://open.oppomobile.com/documentation/page/info?id=13590).
      shared_ptr<int32_t> androidOppoIntentEnv_ {};
      // OPPO private message template content parameters
      shared_ptr<map<string, string>> androidOppoPrivateContentParameters_ {};
      // OPPO private message template ID
      // 
      // >Warning: The OPPO private message template feature is no longer supported by MaasPush. To use this feature, please use the Push, PushV2, or MassPushV2 API instead.
      shared_ptr<string> androidOppoPrivateMsgTemplateId_ {};
      // OPPO private message template title parameters
      shared_ptr<map<string, string>> androidOppoPrivateTitleParameters_ {};
      // Specify the Activity to navigate to when the notification is clicked.
      shared_ptr<string> androidPopupActivity_ {};
      // Body content in auxiliary popup mode. Required when the AndroidPopupActivity parameter is not empty.
      // 
      // Length limit: 200 characters (both Chinese and English characters count as one character each).
      // 
      // When using vendor channels, you must also comply with the vendor channel restrictions. For details, see [Android Auxiliary Channel Push Limits](https://help.aliyun.com/document_detail/165253.html).
      shared_ptr<string> androidPopupBody_ {};
      // Title content in auxiliary popup mode. Required when the AndroidPopupActivity parameter is not empty.
      // 
      // Length limit: 50 characters (both Chinese and English characters count as one character each).
      // 
      // When using vendor channels, you must also comply with the vendor channel restrictions. For details, see [Android Auxiliary Channel Push Limits](https://help.aliyun.com/document_detail/165253.html).
      shared_ptr<string> androidPopupTitle_ {};
      // When the push type is message and the device is offline, this push will use the auxiliary popup feature. Defaults to false. Only takes effect when PushType=MESSAGE.
      // 
      // If the message-to-notification conversion push is successful, the notification displays the data set by the server\\"s AndroidPopupTitle and AndroidPopupBody parameter values. The data obtained when clicking the notification in the auxiliary popup\\"s onSysNoticeOpened method is the server-set Title and Body parameter values.
      shared_ptr<bool> androidRemind_ {};
      // Notification style. Valid values:
      // - **0**: Standard mode (default)
      // - **1**: Long text mode (supported by Huawei, Honor, Xiaomi, OPPO, Meizu, and proprietary channels)
      // - **2**: Big picture mode (supported by proprietary channel, not supported on Xiaomi devices)
      // - **3**: List mode (supported by Huawei, Honor, Xiaomi, OPPO, and proprietary channels)
      // > This parameter is required when using non-standard modes.
      shared_ptr<string> androidRenderStyle_ {};
      // Set the vendor channel notification type:
      // - **0**: Production notification (default).
      // - **1**: Test notification.
      // 
      // >- Configuring this parameter is equivalent to simultaneously configuring the AndroidHuaweiTargetUserType, AndroidHonorTargetUserType, AndroidVivoPushMode, and AndroidOppoIntentEnv parameters. The corresponding parameter for a specific vendor channel can override this parameter.
      // >- Currently supported: Huawei channel, Honor channel, vivo channel, and OPPO Fluid Cloud.
      shared_ptr<int32_t> androidTargetUserType_ {};
      // JSON string of the vivo Atomic Island data structure [liveMessage](https://dev.vivo.com.cn/documentCenter/doc/896#s-fdagzbd4). For development integration, see [vivo Atomic Island Push Guide](https://help.aliyun.com/zh/document_detail/3030718.html)
      shared_ptr<string> androidVivoLiveMessage_ {};
      // Set the vivo channel notification type:
      // - **0**: Production push (default).
      // - **1**: Test push.
      // 
      // > For test pushes, configure test devices in the vivo console in advance. The test device RegId can be obtained by searching for "onReceiveRegId regId" in the device startup logs.
      shared_ptr<int32_t> androidVivoPushMode_ {};
      // vivo channel receipt ID. This receipt ID can be found in the app information section of the push service on the vivo open platform.
      // 
      // > If the default receipt configuration on the vivo open platform is set to Alibaba Cloud receipt, this is not required. If not, we recommend configuring the default vivo channel receipt ID in the Alibaba Cloud EMAS Mobile Push console first.
      shared_ptr<string> androidVivoReceiptId_ {};
      // This parameter has been deprecated. All third-party auxiliary popups are now supported by the new parameter **AndroidPopupActivity**.
      shared_ptr<string> androidXiaoMiActivity_ {};
      // This parameter has been deprecated. All third-party auxiliary popups are now supported by the new parameter **AndroidPopupBody**.
      shared_ptr<string> androidXiaoMiNotifyBody_ {};
      // This parameter has been deprecated. All third-party auxiliary popups are now supported by the new parameter **AndroidPopupTitle**.
      shared_ptr<string> androidXiaoMiNotifyTitle_ {};
      // This parameter has been deprecated. Since August 2023, Xiaomi has officially discontinued support for dynamically setting small icons, right-side icons, and big pictures during push on new devices/systems.
      shared_ptr<string> androidXiaomiBigPictureUrl_ {};
      // JSON string of the Xiaomi Super Island data structure [miui.focus.param](https://dev.mi.com/xiaomihyperos/documentation/detail?pId=2131). For development integration, see [Xiaomi Super Island Push Guide](https://help.aliyun.com/zh/document_detail/3037956.html)
      shared_ptr<string> androidXiaomiFocusParam_ {};
      // JSON string of the Xiaomi Super Island images [miui.focus.pic_xxx](https://dev.mi.com/xiaomihyperos/documentation/detail?pId=2131). For development integration, see [Xiaomi Super Island Push Guide](https://help.aliyun.com/zh/document_detail/3037956.html)
      shared_ptr<string> androidXiaomiFocusPics_ {};
      // This parameter has been deprecated. Since August 2023, Xiaomi has officially discontinued support for dynamically setting small icons, right-side icons, and big pictures during push on new devices/systems.
      shared_ptr<string> androidXiaomiImageUrl_ {};
      // Xiaomi private message template ID
      shared_ptr<string> androidXiaomiTemplateId_ {};
      // Xiaomi private message template parameters, JSON string
      shared_ptr<string> androidXiaomiTemplateParams_ {};
      // Content of the notification/message for Android and HarmonyOS pushes; iOS message/notification content. The push content size is limited. See [Product Limits](https://help.aliyun.com/document_detail/92832.html).
      shared_ptr<string> body_ {};
      // Device type. Valid values:
      // 
      // - HARMONY: HarmonyOS device
      // - iOS: iOS device
      // - ANDROID: Android device
      // - ALL: When the AppKey is for a legacy dual-platform app, this pushes to both Android and iOS devices simultaneously. When the AppKey is for a new single-platform app, the effect is the same as specifying the device type corresponding to the app type.
      // 
      // This parameter is required.
      shared_ptr<string> deviceType_ {};
      // Expiration time of offline messages/notifications. Used together with StoreOffline. Expired messages will no longer be sent. The maximum retention period is 72 hours. The default is 72 hours.
      // 
      // The time format follows the ISO 8601 standard and must use UTC time in the format YYYY-MM-DDThh:mm:ssZ. The expiration time cannot be earlier than the current time or the scheduled push time plus 3 seconds (`ExpireTime > PushTime + 3 seconds`). The 3-second buffer accounts for network and system latency. We recommend at least 1 minute for unicast pushes and at least 10 minutes for broadcast and batch pushes.
      shared_ptr<string> expireTime_ {};
      // The action corresponding to the built-in page ability of the app.
      // 
      // >Notice: When HarmonyActionType is APP_CUSTOM_PAGE, at least one of HarmonyUri and HarmonyAction must be provided.
      // 
      // For details, see HarmonyOS official documentation [ClickAction.action](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section152462191216)
      shared_ptr<string> harmonyAction_ {};
      // Action after clicking the notification. Valid values:
      // 
      // - APP_HOME_PAGE: Open the app home page
      // - APP_CUSTOM_PAGE: Open a custom app page
      shared_ptr<string> harmonyActionType_ {};
      // HarmonyOS app badge increment number. See [HarmonyOS badge addNum field description](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section266310382145).</br>
      // Supported from HarmonyOS SDK 1.2.0.
      shared_ptr<int32_t> harmonyBadgeAddNum_ {};
      // HarmonyOS app badge set number. See [HarmonyOS badge setNum field description](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section266310382145).</br>
      // Supported from HarmonyOS SDK 1.2.0.
      shared_ptr<int32_t> harmonyBadgeSetNum_ {};
      // Notification message category. After completing the notification message self-classification privilege application, this is used to identify the message type. Different notification message types affect the display and alert methods. Valid values:
      // 
      // - IM: Instant messaging
      // - VOIP: Audio/video calls
      // - SUBSCRIPTION: Subscriptions
      // - TRAVEL: Travel
      // - HEALTH: Health
      // - WORK: Work task reminders
      // - ACCOUNT: Account updates
      // - EXPRESS: Orders & logistics
      // - FINANCE: Finance
      // - DEVICE_REMINDER: Device reminders
      // - MAIL: Email
      // - CUSTOMER_SERVICE: Customer service messages
      // - MARKETING: News, content recommendations, social updates, product promotions, financial updates, lifestyle information, surveys, feature recommendations, and operational campaigns (only marks the content, does not speed up message delivery), collectively referred to as information and marketing messages
      // 
      // For details, see HarmonyOS official documentation [Notification.category](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117)
      shared_ptr<string> harmonyCategory_ {};
      // Set notification extended properties. This property does not take effect when the push type PushType is set to MESSAGE.
      // 
      // This parameter must be passed in JSON map format; otherwise, parsing errors will occur.
      shared_ptr<string> harmonyExtParameters_ {};
      // Extra data for notification extension messages.</br>
      // Valid when sending HarmonyOS notification extension messages.</br>
      // Conceptually equivalent to the extraData field of HarmonyOS notification extension messages. For the specific definition, see [HarmonyOS ExtensionPayload Description](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section161192514234).</br>
      // Supported from HarmonyOS SDK 1.2.0.
      shared_ptr<string> harmonyExtensionExtraData_ {};
      // When PushType is NOTICE, whether this is a HarmonyOS notification extension message.
      // 
      // - true: Send a notification extension message
      // - false: Send a regular notification (default)
      // 
      // Notification extension messages require permission to be applied for on the HarmonyOS side before sending. For details, see the HarmonyOS documentation [Send Notification Extension Messages](https://developer.huawei.com/consumer/cn/doc/harmonyos-guides-V5/push-send-extend-noti-V5).</br>
      // Supported from HarmonyOS SDK 1.2.0.
      shared_ptr<bool> harmonyExtensionPush_ {};
      // URL for the large icon on the right side of the notification. The URL must use the HTTPS protocol.
      // 
      // > Supported image formats: png, jpg, jpeg, heif, gif, bmp. Image dimensions must satisfy height × width < 25,000 pixels.
      // 
      // For details, see HarmonyOS official documentation [Notification.image](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117)
      shared_ptr<string> harmonyImageUrl_ {};
      // Content for multi-line text style. Required when HarmonyRenderStyle is MULTI_LINE. Up to 3 content items are supported.
      shared_ptr<string> harmonyInboxContent_ {};
      // JSON string of the HarmonyOS Live View data structure [LiveViewPayload](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V13/push-scenariozed-api-request-param-V13#section66881469306). For development integration, see [HarmonyOS Live View Push Guide](https://help.aliyun.com/document_detail/2982112.html)
      shared_ptr<string> harmonyLiveViewPayload_ {};
      // Use the specified type of notification slot. Only valid when the Alibaba Cloud proprietary channel is online.
      // 
      // - SOCIAL_COMMUNICATION: Social communication.
      // - SERVICE_INFORMATION: Service reminders.
      // - CONTENT_INFORMATION: Content information.
      // - CUSTOMER_SERVICE: Customer service messages. This type is used for customer service messages between users and merchants, and must be initiated by the user.
      // - OTHER_TYPES: Others.
      // 
      // For details, see HarmonyOS official documentation [SlotType](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/js-apis-notificationmanager-V5#slottype)
      shared_ptr<string> harmonyNotificationSlotType_ {};
      // Unique identifier for each message displayed in the notification. When not provided, the push service automatically generates a unique identifier for each message. Different notification messages can share the same notifyId, enabling new messages to replace old ones.
      // 
      // For details, see HarmonyOS official documentation [Notification.notifyId](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117)
      shared_ptr<int32_t> harmonyNotifyId_ {};
      // HarmonyOS channel receipt ID. This receipt ID can be found in the receipt parameter configuration on the HarmonyOS channel push operations platform.
      // 
      // > If the default receipt configuration on the HarmonyOS channel push operations platform is set to Alibaba Cloud receipt, this is not required. If not, we recommend configuring the default HarmonyOS channel receipt ID in the Alibaba Cloud EMAS Mobile Push console first.
      // 
      // For details, see HarmonyOS official documentation [pushOptions.receiptId](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section418321011212)
      shared_ptr<string> harmonyReceiptId_ {};
      // When the push type is message and the device is offline, this push will use the auxiliary popup feature. Defaults to false. Only takes effect when PushType=MESSAGE.
      // 
      // If the message-to-notification conversion push is successful, the notification displays the data set by the server\\"s HarmonyRemindTitle and HarmonyRemindBody parameter values.
      shared_ptr<bool> harmonyRemind_ {};
      // HarmonyOS notification content used when converting HarmonyOS messages to notifications. Only valid when HarmonyRemind is true.
      shared_ptr<string> harmonyRemindBody_ {};
      // HarmonyOS notification title used when converting HarmonyOS messages to notifications. Only valid when HarmonyRemind is true.
      shared_ptr<string> harmonyRemindTitle_ {};
      // Notification message style:
      // - NORMAL: Standard notification (default)
      // - MULTI_LINE: Multi-line text style
      shared_ptr<string> harmonyRenderStyle_ {};
      // Test message flag:
      // 
      // - false: Normal message (default)
      // - true: Test message
      // 
      // For details, see HarmonyOS official documentation [pushOptions.testMessage](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section418321011212)
      shared_ptr<bool> harmonyTestMessage_ {};
      // The URI corresponding to the built-in page ability of the app.
      // >Notice: When HarmonyActionType is APP_CUSTOM_PAGE, at least one of HarmonyUri and HarmonyAction must be provided. When multiple Abilities exist, provide different action and URI values for each Ability. The action is prioritized when looking up the corresponding built-in app page.
      // 
      // For details, see HarmonyOS official documentation [ClickAction.uri](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section152462191216)
      shared_ptr<string> harmonyUri_ {};
      // Custom identifier for the push task. When JobKey is not empty, this field will be included in the receipt logs. For receipt log details, see [Receipt Logs](https://help.aliyun.com/document_detail/434651.html).
      shared_ptr<string> jobKey_ {};
      // Used for scheduled sending. If not set, the default is immediate sending.
      // 
      // The time format follows the ISO 8601 standard and must use UTC time in the format YYYY-MM-DDThh:mm:ssZ.
      shared_ptr<string> pushTime_ {};
      // Push type. Valid values:
      // 
      // - MESSAGE: indicates a message.
      // - NOTICE: indicates a notification.
      // 
      // This parameter is required.
      shared_ptr<string> pushType_ {};
      // Specify sending channels. Valid values:
      // 
      // - accs: Alibaba Cloud proprietary channel
      // - huawei: Huawei channel
      // - honor: Honor channel
      // - xiaomi: Xiaomi channel
      // - oppo: OPPO channel
      // - vivo: vivo channel
      // - meizu: Meizu channel
      // - gcm: Google GCM channel (legacy HTTP)
      // - fcm: Google Firebase channel (HTTP v1 API)
      // - apns: APNs channel
      // - harmony: HarmonyOS channel
      // 
      // >- If this parameter is not configured, all channels are available.
      // >- If this parameter is configured, only the specified channels are used.
      // >- If the configured channels conflict with the sending strategy (e.g., iOS notifications only go through the APNs channel, but this parameter does not include apns), the push will not be sent.
      // >- If gcm is configured, both Google GCM and FCM channels can be used. If fcm is configured, only the Google FCM channel can be used.
      shared_ptr<string> sendChannels_ {};
      // This parameter has been deprecated.
      shared_ptr<int32_t> sendSpeed_ {};
      // Whether to store offline messages/notifications. StoreOffline defaults to false.
      // 
      // If stored, when the user is offline during push, the message will be resent when the user comes online within the expiration time (ExpireTime). ExpireTime defaults to 72 hours. iOS notifications are delivered through the APNs channel and are not affected by StoreOffline.
      shared_ptr<bool> storeOffline_ {};
      // Push target. Valid values:
      // 
      // - DEVICE: push by device.
      // - ACCOUNT: push by account.
      // - ALIAS: push by alias.
      // 
      // This parameter is required.
      shared_ptr<string> target_ {};
      // Set based on Target. Multiple values are separated by commas. If the limit is exceeded, you need to split the push into multiple calls.
      // 
      // - Target=DEVICE: values such as `deviceid1,deviceid2` (up to 1,000 supported).
      // - Target=ACCOUNT: values such as `account1,account2` (up to 1,000 supported).
      // - Target=ALIAS: values such as `alias1,alias2` (up to 1,000 supported).
      // 
      // This parameter is required.
      shared_ptr<string> targetValue_ {};
      // Title of the notification/message during push. Length limit: 200 bytes.
      // Required for Android and HarmonyOS pushes. Optional for iOS push notifications. If provided:
      // * iOS 10+: the notification displays the title.
      // * iOS 8.2 <= iOS version < iOS 10: replaces the notification app name.
      shared_ptr<string> title_ {};
      // Whether to automatically truncate titles and content that are too long.
      // Note: This only applies to vendor channels that explicitly limit title and content length. It does not apply to channels like APNs, Huawei, and Honor that do not limit title and content individually but only limit the total request body size.
      shared_ptr<bool> trim_ {};
      // iOS notifications are sent through the APNs center. You need to specify the corresponding environment information.
      // 
      // - DEV: Development environment, applicable to apps installed and debugged directly via Xcode.
      // - PRODUCT: Production environment, applicable to apps distributed through App Store, TestFlight, Ad Hoc, and enterprise distribution.
      shared_ptr<string> iOSApnsEnv_ {};
      // iOS app icon badge number in the upper-right corner.
      // 
      // > If iOSBadgeAutoIncrement is set to True, this field must be empty.
      shared_ptr<int32_t> iOSBadge_ {};
      // Whether to enable badge auto-increment. Defaults to false.
      // 
      // > When this is set to true, iOSBadge must be empty.
      // 
      // The badge auto-increment feature is maintained by the push server for each device\\"s badge count. Users must use SDK version V1.9.5 or later and actively sync the badge number to the server.
      shared_ptr<bool> iOSBadgeAutoIncrement_ {};
      // Extended properties of iOS notifications.
      // 
      // On iOS 10+, you can specify the resource URL for rich media push notifications here: `{"attachment": "https://xxxx.xxx/notification_pic.png"} `. This parameter must be passed in JSON map format; otherwise, parsing errors will occur.
      shared_ptr<string> iOSExtParameters_ {};
      // Interruption level. Valid values:
      // 
      // - passive: The system adds the notification to the notification list without lighting up the screen or playing sound.
      // 
      // - active: The system immediately displays the notification, lights up the screen, and can play sound.
      // 
      // - time-sensitive: The system immediately presents the notification, lights up the screen, and can play sound, but does not break through system notification controls.
      // 
      // - critical: The system immediately displays the notification, lights up the screen, and plays sound bypassing the mute switch.
      shared_ptr<string> iOSInterruptionLevel_ {};
      // JSON string. Static pass-through parameters for Dynamic Island push. Contains static user-defined information such as product ID and order information.
      // 
      // > Required when iOSLiveActivityEvent is start.
      shared_ptr<string> iOSLiveActivityAttributes_ {};
      // The type of Live Activity to start.
      // > Required when iOSLiveActivityEvent is start.
      shared_ptr<string> iOSLiveActivityAttributesType_ {};
      // Dynamic pass-through parameters for Dynamic Island push. Contains real-time update information such as price and inventory changes.
      shared_ptr<string> iOSLiveActivityContentState_ {};
      // The ended Live Activity will remain on the lock screen until the specified time, up to a maximum of 4 hours.
      shared_ptr<int64_t> iOSLiveActivityDismissalDate_ {};
      // Start, update, or end a Live Activity.
      // 
      // - Enum: start | update | end
      shared_ptr<string> iOSLiveActivityEvent_ {};
      // The Live Activity ID reported by the device to the user\\"s server. A unique identifier for the Live Activity.
      shared_ptr<string> iOSLiveActivityId_ {};
      // Timestamp in seconds, marking the expiration time of the activity content.
      shared_ptr<int64_t> iOSLiveActivityStaleDate_ {};
      // iOS notification sound. Specify the name of an audio file stored in the app bundle or the sandbox Library/Sounds directory. See: How to set notification sound for iOS push.
      // 
      // If set to an empty string (""), the notification is silent. If not set, the default system alert sound is used.
      shared_ptr<string> iOSMusic_ {};
      // iOS notification processing extension flag (iOS 10+). If set to true, APNs push notifications can reach the Extension for processing before being displayed. Must be set to true for silent notifications.
      shared_ptr<bool> iOSMutableContent_ {};
      // Specify the iOS notification Category (iOS 10+).
      shared_ptr<string> iOSNotificationCategory_ {};
      // When a device receives messages with the same CollapseId, they are merged into one. When the device is offline, consecutive messages with the same CollapseId will show only one notification in the notification bar. Supported on iOS 10+.
      shared_ptr<string> iOSNotificationCollapseId_ {};
      // Groups iOS remote notifications using this property, marking the group identifier for collapsed notifications. Only supported on iOS 12.0+.
      shared_ptr<string> iOSNotificationThreadId_ {};
      // Summary highlight score. Value range: a floating-point number in [0,1\\].
      shared_ptr<double> iOSRelevanceScore_ {};
      // When the device is offline during message push (i.e., the persistent connection channel to the Mobile Push server is disconnected), this push will be delivered as a notification through Apple\\"s APNs channel once.
      // 
      // > Offline message-to-notification conversion only applies to the production environment.
      shared_ptr<bool> iOSRemind_ {};
      // iOS notification content used when converting iOS messages to notifications. Only valid when iOSApnsEnv=PRODUCT and iOSRemind is true.
      shared_ptr<string> iOSRemindBody_ {};
      // Whether to enable iOS silent notification.
      shared_ptr<bool> iOSSilentNotification_ {};
      // iOS notification subtitle content (iOS 10+).
      shared_ptr<string> iOSSubtitle_ {};
    };

    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->idempotentToken_ == nullptr && this->pushTask_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline MassPushRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // idempotentToken Field Functions 
    bool hasIdempotentToken() const { return this->idempotentToken_ != nullptr;};
    void deleteIdempotentToken() { this->idempotentToken_ = nullptr;};
    inline string getIdempotentToken() const { DARABONBA_PTR_GET_DEFAULT(idempotentToken_, "") };
    inline MassPushRequest& setIdempotentToken(string idempotentToken) { DARABONBA_PTR_SET_VALUE(idempotentToken_, idempotentToken) };


    // pushTask Field Functions 
    bool hasPushTask() const { return this->pushTask_ != nullptr;};
    void deletePushTask() { this->pushTask_ = nullptr;};
    inline const vector<MassPushRequest::PushTask> & getPushTask() const { DARABONBA_PTR_GET_CONST(pushTask_, vector<MassPushRequest::PushTask>) };
    inline vector<MassPushRequest::PushTask> getPushTask() { DARABONBA_PTR_GET(pushTask_, vector<MassPushRequest::PushTask>) };
    inline MassPushRequest& setPushTask(const vector<MassPushRequest::PushTask> & pushTask) { DARABONBA_PTR_SET_VALUE(pushTask_, pushTask) };
    inline MassPushRequest& setPushTask(vector<MassPushRequest::PushTask> && pushTask) { DARABONBA_PTR_SET_RVALUE(pushTask_, pushTask) };


  protected:
    // AppKey information.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // An idempotency parameter used to prevent duplicate pushes caused by API caller retries. When calls are made with the same IdempotentToken within 15 minutes, only one push is performed, and subsequent calls return the result of the first successful push.
    // 
    // > 
    // > - The parameter format is a standard 36-character UUID (8-4-4-4-12). Each valid character is a hexadecimal digit in the range 0-9 or a-f, case-insensitive.
    // > - This parameter is only used to prevent duplicate pushes caused by retries and cannot prevent duplicate pushes caused by concurrent calls.
    shared_ptr<string> idempotentToken_ {};
    // An array of independent push tasks.
    // 
    // This parameter is required.
    shared_ptr<vector<MassPushRequest::PushTask>> pushTask_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
