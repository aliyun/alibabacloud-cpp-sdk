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
      // Specifies the activity to open when the notification is tapped.
      // 
      // This is required only when PushTask.N.AndroidOpenType is set to "Activity". For example: `com.alibaba.cloudpushdemo.bizactivity`.
      shared_ptr<string> androidActivity_ {};
      // Sets the value to add to the badge number. The value is added to the original badge number. The value range is [1, 99].
      // 
      // > This is effective only for pushes through Huawei or Honor vendor channels. If both AndroidBadgeAddNum and AndroidBadgeSetNum are present, AndroidBadgeSetNum takes precedence.
      shared_ptr<int32_t> androidBadgeAddNum_ {};
      // The full class name of the entry Activity of the application for badge settings.
      // 
      // > This is effective only for pushes through Huawei or Honor vendor channels.
      shared_ptr<string> androidBadgeClass_ {};
      // Sets a fixed number for the badge. The value range is [0, 99].
      // 
      // > For vendor channel pushes, this is effective only for Huawei and Honor channels. For pushes through Alibaba Cloud\\"s proprietary channel, this is effective only on Huawei, Honor, and vivo models.
      shared_ptr<int32_t> androidBadgeSetNum_ {};
      // The body in long text mode. Length limit: 1,000 bytes (one Chinese character is counted as 3 bytes). The actual limit depends on the specific vendor channel.
      // 
      // Currently supported on:
      // 
      // - Huawei: EMUI 10 and later
      // 
      // - Honor: Magic UI 4.0 and later
      // 
      // - Xiaomi: MIUI 10 and later
      // 
      // - OPPO: ColorOS 5.0 and later
      // 
      // - Meizu: Flyme
      // 
      // - Alibaba Cloud\\"s proprietary channel: Android SDK 3.6.0 and later
      // 
      // If this parameter is not provided in long text mode, the first non-empty value from Body or AndroidPopupBody is used.
      shared_ptr<string> androidBigBody_ {};
      // The image URL in big picture mode. Currently supported on: Alibaba Cloud\\"s proprietary channel with Android SDK 3.6.0 or later.
      shared_ptr<string> androidBigPictureUrl_ {};
      // The title in long text mode. Length limit: 200 bytes (one Chinese character is counted as 3 bytes).
      // 
      // - Currently, this is only supported by Honor channels and Huawei channels on EMUI 11 and later.
      // 
      // - If this parameter is not provided in long text mode, the first non-empty value from Title or AndroidPopupTitle is used.
      shared_ptr<string> androidBigTitle_ {};
      // Sets the extended properties of the notification. This parameter does not take effect when the push type PushType is set to MESSAGE.
      // 
      // This parameter must be passed in JSON map format, or it will fail to parse.
      shared_ptr<string> androidExtParameters_ {};
      // Sets the Honor channel notification type:
      // 
      // - **0**: Formal notification (default).
      // 
      // - **1**: Test notification.
      // 
      // > Each application can send 1,000 test notifications per day, and these are not subject to the daily push limit per device.
      shared_ptr<int32_t> androidHonorTargetUserType_ {};
      // Sets the parameters for Huawei quick notifications
      // 
      // - **0**: Send a normal Huawei notification (default).
      // 
      // - **1**: Send a Huawei quick notification.
      shared_ptr<int32_t> androidHuaweiBusinessType_ {};
      // A JSON string of the Huawei Android Live Notification data structure [LiveNotificationPayload](https://developer.huawei.com/consumer/cn/doc/HMSCore-References/rest-live-0000001562939968#ZH-CN_TOPIC_0000001700850537__p195121620102511). For development and integration, see the [Huawei Live Notification Push Guide](https://help.aliyun.com/document_detail/2983768.html).
      shared_ptr<string> androidHuaweiLiveNotificationPayload_ {};
      // The receipt ID for the Huawei channel. View this receipt ID in the receipt parameter configuration on the Huawei Push operations platform.
      // 
      // > If the default receipt configuration on the Huawei Push operations platform is the Alibaba Cloud receipt, you do not need to provide this. If not, we recommend that you first configure the default receipt ID for the Huawei channel in the Alibaba Cloud EMAS Mobile Push console.
      shared_ptr<string> androidHuaweiReceiptId_ {};
      // Sets the Huawei channel notification type:
      // 
      // - **0**: Formal notification (default).
      // 
      // - **1**: Test notification.
      // 
      // > Each application can send 500 test notifications per day, and these are not subject to the daily push limit per device.
      shared_ptr<int32_t> androidHuaweiTargetUserType_ {};
      // The URL for the right-side icon. Currently supported on:
      // 
      // - Huawei EMUI (applicable only in long text mode and inbox mode)
      // 
      // - Honor Magic UI (applicable only in long text mode)
      // 
      // - Alibaba Cloud\\"s proprietary channel: Android SDK 3.5.0 and later
      shared_ptr<string> androidImageUrl_ {};
      // The body in inbox mode. The content must be a valid JSON array with no more than 5 elements. Currently supported on:
      // 
      // - Huawei: EMUI 9 and later
      // 
      // - Honor: Magic UI 4.0 and later
      // 
      // - Xiaomi: MIUI 10 and later
      // 
      // - OPPO: ColorOS 5.0 and later
      // 
      // - Alibaba Cloud\\"s proprietary channel: Android SDK 3.6.0 and later
      shared_ptr<string> androidInboxBody_ {};
      // Meizu message type
      // 
      // - 0 Public message (default)
      // 
      // - 1 Private message
      shared_ptr<int32_t> androidMeizuNoticeMsgType_ {};
      // Function 1: After applying for [self-classification permissions](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835?#section3410731125514), use this parameter to identify the message type, determine the [message reminder method](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#ZH-CN_TOPIC_0000001149358835__p3850133955718), and expedite the sending of specific message types. For valid values, see the [message classification standards](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#section1076611477914) in the official Huawei Push documentation. Fill in the "Cloud-side notification category value" or "Local notification category value" from the documentation table.
      // 
      // Function 2: After applying for [special permissions](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/faq-0000001050042183#section037425218509), use this parameter to identify high-priority pass-through scenarios. Valid values:
      // 
      // - VOIP: Video calls
      // 
      // - PLAY_VOICE: Voice playback
      // 
      // > For "Cloud-side notification category values" that are "Not applicable", all pushes go through Alibaba Cloud\\"s proprietary channel. For "Local notification category values" that are "Not applicable", all pushes go through the Huawei channel.
      shared_ptr<string> androidMessageHuaweiCategory_ {};
      // The delivery priority for Huawei channel notifications. Valid values:
      // 
      // - HIGH
      // 
      // - NORMAL
      // 
      // You must apply for permissions. For more information, see [Application Link](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/faq-0000001050042183#section037425218509).
      shared_ptr<string> androidMessageHuaweiUrgency_ {};
      // OPPO manages messages in two categories: Communication and Services, and Content and Marketing.
      // 
      // Communication and Services (requires permission application):
      // 
      // - IM: Instant messaging, audio, and video calls
      // 
      // - ACCOUNT: Changes in personal accounts and assets
      // 
      // - DEVICE_REMINDER: Personal device reminders
      // 
      // - ORDER: Changes in personal order or logistics status
      // 
      // - TODO: Personal schedules or to-do items
      // 
      // - SUBSCRIPTION: Personal subscriptions
      // 
      // Content and Marketing:
      // 
      // - NEWS: News and information
      // 
      // - CONTENT: Content recommendations
      // 
      // - MARKETING: Platform activities
      // 
      // - SOCIAL: Social updates
      // 
      // For more information, see [OPUSH Message Classification Rules](https://open.oppomobile.com/new/developmentDoc/info?id=13189)
      shared_ptr<string> androidMessageOppoCategory_ {};
      // The reminder level for OPPO channel notification bar messages. Valid values:
      // 
      // - 1: Notification bar
      // 
      // - 2: Notification bar, lock screen, ringtone, vibration (default notification level for Communication and Services messages)
      // 
      // - 16: Notification bar, lock screen, ringtone, vibration, banner (requires permission application)
      // 
      // > When using the AndroidMessageOppoNotifyLevel parameter, you must also pass the AndroidMessageOppoCategory parameter.
      shared_ptr<int32_t> androidMessageOppoNotifyLevel_ {};
      // vivo manages messages in two categories: system messages and operational messages.
      // 
      // System messages:
      // 
      // - IM: Instant messages
      // 
      // - ACCOUNT: Account and asset
      // 
      // - TODO: Schedule and to-do
      // 
      // - DEVICE_REMINDER: Device information
      // 
      // - ORDER: Order and logistics
      // 
      // - SUBSCRIPTION: Subscription reminder
      // 
      // Operational messages:
      // 
      // - NEWS: News
      // 
      // - CONTENT: Content recommendation
      // 
      // - MARKETING: Operational activity
      // 
      // - SOCIAL: Social updates
      // 
      // > For more information, see [Classification Description](https://dev.vivo.com.cn/documentCenter/doc/359#s-ef3qugc3)
      shared_ptr<string> androidMessageVivoCategory_ {};
      // The notification sound for the Huawei vendor channel. Specify the name of the audio file stored in the app/src/main/res/raw/ directory of the client project. Do not include the file format suffix.
      // 
      // If you do not set this parameter, the default ringtone is used.
      shared_ptr<string> androidMusic_ {};
      // The priority that determines the position of the Android notification in the notification bar. Valid values: -2, -1, 0, 1, and 2.
      shared_ptr<int32_t> androidNotificationBarPriority_ {};
      // The custom Android notification bar style. Valid values: 1 to 100.
      shared_ptr<int32_t> androidNotificationBarType_ {};
      // The channel ID for the Android app. It must correspond to a channel ID in the app.
      // 
      // - Set the NotificationChannel parameter. For more information about its use, see [FAQ: Why are notifications not received on devices with Android 8.0 or later?](https://help.aliyun.com/document_detail/67398.html).
      // 
      // - Because the channel_id for the OPPO private message channel is the same as the app\\"s channelId, this value is used for the channel_id when pushing through the OPPO channel.
      // 
      // - For pushes through Huawei, FCM, and Alibaba Cloud\\"s proprietary channels, this value is used for the channel_id.
      shared_ptr<string> androidNotificationChannel_ {};
      // Message grouping. For messages in the same group, the notification bar displays only the latest message and the total number of messages received for that group. It does not display all messages and cannot be expanded. Currently supported on:
      // 
      // - Huawei vendor channel
      // 
      // - Honor vendor channel
      // 
      // - Alibaba Cloud\\"s proprietary channel with Android SDK 3.9.1 and earlier
      // 
      // > This parameter is not supported by Alibaba Cloud\\"s proprietary channel on Android SDK 3.9.2 and later.
      shared_ptr<string> androidNotificationGroup_ {};
      // Sets the importance parameter for Honor notification message classification, which determines the notification behavior on the user\\"s device. Valid values:
      // 
      // - LOW: Marketing messages
      // 
      // - NORMAL: Service and communication messages
      // 
      // Apply for this on the Honor platform. [Application Link](https://developer.honor.com/cn/docs/11002/guides/notification-class#%E8%87%AA%E5%88%86%E7%B1%BB%E6%9D%83%E7%9B%8A%E7%94%B3%E8%AF%B7).
      shared_ptr<string> androidNotificationHonorChannel_ {};
      // Sets the importance parameter for Huawei notification message classification, which determines the notification behavior on the user\\"s device. Valid values:
      // 
      // - LOW: Marketing messages
      // 
      // - NORMAL: Service and communication messages
      // 
      // > * For the Huawei channel, use AndroidMessageHuaweiCategory for notification classification. AndroidNotificationHuaweiChannel is no longer required.
      // >
      // > * You must apply for this on the Huawei platform. [Application Link](https://developer.huawei.com/consumer/cn/doc/development/HMSCore-Guides/message-classification-0000001149358835#section893184112272).
      shared_ptr<string> androidNotificationHuaweiChannel_ {};
      // The unique ID for each message when it is displayed as a notification. Different notification messages can have the same NotifyId to allow new notifications to overwrite old ones.
      shared_ptr<int32_t> androidNotificationNotifyId_ {};
      // Message grouping. Messages in the same group are displayed collapsed in the notification bar and can be expanded. Notifications from different groups are displayed separately. Currently supported on:
      // 
      // - Alibaba Cloud\\"s proprietary channel with Android SDK 3.9.2 and later
      shared_ptr<string> androidNotificationThreadId_ {};
      // Sets the vivo notification message classification. Valid values:
      // 
      // - 0: Operational messages (default)
      // 
      // - 1: System messages
      // 
      // > * For the vivo channel, use AndroidMessageVivoCategory for notification classification. AndroidNotificationVivoChannel is no longer required.
      // >
      // > * Apply for this on the vivo platform. For more information, see [Application Link](https://dev.vivo.com.cn/documentCenter/doc/359).
      shared_ptr<string> androidNotificationVivoChannel_ {};
      // Sets the channel ID for the Xiaomi notification type. Apply for it on the Xiaomi platform. For more information, see [Application Link](https://dev.mi.com/console/doc/detail?pId=2422#_4).
      // 
      // > - A single application can apply for a maximum of 8 channels on the Xiaomi platform. Plan accordingly.
      shared_ptr<string> androidNotificationXiaomiChannel_ {};
      // The notification reminder method. Valid values:
      // 
      // - **VIBRATE**: Vibrate (default)
      // 
      // - **SOUND**: Sound
      // 
      // - **BOTH**: Sound and vibrate
      // 
      // - **NONE**: Silent
      shared_ptr<string> androidNotifyType_ {};
      // The action to take after a notification is tapped. Valid values:
      // 
      // - APPLICATION: Open the application (default)
      // 
      // - ACTIVITY: Open the application\\"s AndroidActivity
      // 
      // - URL: Open a URL
      // 
      // - NONE: No action
      shared_ptr<string> androidOpenType_ {};
      // The URL to open after the Android device receives the push. This is required only when PushTask.N.AndroidOpenType is set to "URL".
      shared_ptr<string> androidOpenUrl_ {};
      // A JSON string of the OPPO Fluid Cloud intent deletion data structure [data](https://open.oppomobile.com/documentation/page/info?id=13578). This parameter is invalid if the AndroidOppoIntelligentIntent parameter is already filled. For development and integration, see the [OPPO Fluid Cloud Push Guide](https://help.aliyun.com/document_detail/2997310.html).
      shared_ptr<string> androidOppoDeleteIntentData_ {};
      // A JSON string of the OPPO Fluid Cloud intent sharing data structure [IntelligentIntent](https://open.oppomobile.com/documentation/page/info?id=13565). For development and integration, see the [OPPO Fluid Cloud Push Guide](https://help.aliyun.com/document_detail/2997310.html).
      shared_ptr<string> androidOppoIntelligentIntent_ {};
      // Sets the OPPO Fluid Cloud push environment
      // 
      // - **0**: Production environment (default).
      // 
      // - **1**: Staging environment.
      // 
      // > The OPPO Fluid Cloud staging environment needs to be set up on the client side. For more information, see [Environment Setup](https://open.oppomobile.com/documentation/page/info?id=13590).
      shared_ptr<int32_t> androidOppoIntentEnv_ {};
      // OPPO private message template content parameters
      shared_ptr<map<string, string>> androidOppoPrivateContentParameters_ {};
      // OPPO private message template ID
      // 
      // >Warning: 
      // 
      // The OPPO private message template feature is no longer supported by MaasPush. To use this feature, use the Push, PushV2, or MassPushV2 API instead.
      shared_ptr<string> androidOppoPrivateMsgTemplateId_ {};
      // OPPO private message template title parameters
      shared_ptr<map<string, string>> androidOppoPrivateTitleParameters_ {};
      // Specifies the Activity to which the user is redirected after tapping the notification.
      shared_ptr<string> androidPopupActivity_ {};
      // The body content in auxiliary pop-up mode. This parameter is required if the AndroidPopupActivity parameter is not empty.
      // 
      // Length limit: 200 characters. Both Chinese and English characters count as one.
      // 
      // If you use a vendor channel, comply with the vendor channel\\"s restrictions. For more information, see [Limits on auxiliary channel pushes for Android](https://help.aliyun.com/document_detail/165253.html).
      shared_ptr<string> androidPopupBody_ {};
      // The title content in auxiliary pop-up mode. This parameter is required if the AndroidPopupActivity parameter is not empty.
      // 
      // Length limit: 50 characters. Both Chinese and English characters count as one.
      // 
      // If you use a vendor channel, comply with the vendor channel\\"s restrictions. For more information, see [Limits on auxiliary channel pushes for Android](https://help.aliyun.com/document_detail/165253.html).
      shared_ptr<string> androidPopupTitle_ {};
      // If the push type is MESSAGE and the device is offline, this push uses the auxiliary pop-up feature. The default value is false. This parameter takes effect only when PushType is MESSAGE.
      // 
      // If a message is successfully converted to a notification, the displayed notification uses the values of the AndroidPopupTitle and AndroidPopupBody parameters. When the user taps the notification, the data retrieved by the onSysNoticeOpened method of the auxiliary pop-up uses the values of the Title and Body parameters.
      shared_ptr<bool> androidRemind_ {};
      // The notification style. Valid values:
      // 
      // - **0**: Standard mode (default)
      // 
      // - **1**: Long text mode (supported by Huawei, Honor, Xiaomi, OPPO, Meizu, and Alibaba Cloud\\"s proprietary channel)
      // 
      // - **2**: Big picture mode (supported by Alibaba Cloud\\"s proprietary channel, not supported on Xiaomi models)
      // 
      // - **3**: List mode (supported by Huawei, Honor, Xiaomi, OPPO, and Alibaba Cloud\\"s proprietary channel)
      // 
      // > This parameter is required for non-standard modes.
      shared_ptr<string> androidRenderStyle_ {};
      // Sets the vendor channel notification type:
      // 
      // - **0**: Formal notification (default).
      // 
      // - **1**: Test notification.
      // 
      // > * Configuring this parameter is equivalent to configuring the AndroidHuaweiTargetUserType, AndroidHonorTargetUserType, AndroidVivoPushMode, and AndroidOppoIntentEnv parameters at the same time. A specific vendor channel parameter can override this parameter.
      // >
      // > * Currently supported: Huawei channel, Honor channel, vivo channel, OPPO Fluid Cloud.
      shared_ptr<int32_t> androidTargetUserType_ {};
      // A JSON string of the vivo Atomic Island data structure [liveMessage](https://dev.vivo.com.cn/documentCenter/doc/896#s-fdagzbd4). For development and integration, see the [vivo Atomic Island Push Guide](https://help.aliyun.com/zh/document_detail/3030718.html).
      shared_ptr<string> androidVivoLiveMessage_ {};
      // Sets the vivo channel notification type:
      // 
      // - **0**: Formal push (default).
      // 
      // - **1**: Test push.
      // 
      // > For test pushes, configure the test devices in the vivo console beforehand. You can obtain the test device\\"s RegId by searching for "onReceiveRegId regId" in the device startup logs.
      shared_ptr<int32_t> androidVivoPushMode_ {};
      // The receipt ID for the vivo channel. View this receipt ID in the application information of the push service on the vivo open platform.
      // 
      // > If the default receipt configuration on the vivo open platform is the Alibaba Cloud receipt, you do not need to provide this. If not, we recommend that you first configure the default receipt ID for the vivo channel in the Alibaba Cloud EMAS Mobile Push console.
      shared_ptr<string> androidVivoReceiptId_ {};
      // This parameter is deprecated. All third-party auxiliary pop-ups are now supported by the new **AndroidPopupActivity** parameter.
      shared_ptr<string> androidXiaoMiActivity_ {};
      // This parameter is deprecated. All third-party auxiliary pop-ups are now supported by the new **AndroidPopupBody** parameter.
      shared_ptr<string> androidXiaoMiNotifyBody_ {};
      // This parameter is deprecated. All third-party auxiliary pop-ups are now supported by the new **AndroidPopupTitle** parameter.
      shared_ptr<string> androidXiaoMiNotifyTitle_ {};
      // This parameter is deprecated. Since August 2023, Xiaomi no longer supports dynamically setting small icons, right-side icons, or large pictures during pushes on new devices or systems.
      shared_ptr<string> androidXiaomiBigPictureUrl_ {};
      // A JSON string of the Xiaomi HyperOS Island data structure [miui.focus.param](https://dev.mi.com/xiaomihyperos/documentation/detail?pId=2131). For development and integration, see the [Xiaomi HyperOS Island Push Guide](https://help.aliyun.com/zh/document_detail/3037956.html).
      shared_ptr<string> androidXiaomiFocusParam_ {};
      // A JSON string of the Xiaomi HyperOS Island data image [miui.focus.pic_xxx](https://dev.mi.com/xiaomihyperos/documentation/detail?pId=2131). For development and integration, see the [Xiaomi HyperOS Island Push Guide](https://help.aliyun.com/zh/document_detail/3037956.html).
      shared_ptr<string> androidXiaomiFocusPics_ {};
      // This parameter is deprecated. Since August 2023, Xiaomi no longer supports dynamically setting small icons, right-side icons, or large pictures during pushes on new devices or systems.
      shared_ptr<string> androidXiaomiImageUrl_ {};
      shared_ptr<string> androidXiaomiTemplateId_ {};
      shared_ptr<string> androidXiaomiTemplateParams_ {};
      // The content of the notification or message for Android and HarmonyOS pushes. The content of the message or notification for iOS. The content size is limited. For more information, see [Product limits](https://help.aliyun.com/document_detail/92832.html).
      shared_ptr<string> body_ {};
      // The device type. Valid values:
      // 
      // - HARMONY: HarmonyOS devices
      // 
      // - iOS: iOS devices
      // 
      // - ANDROID: Android devices
      // 
      // - ALL: If the AppKey is for an old version of a dual-platform application, this value indicates that pushes are sent to both Android and iOS devices. If the AppKey is for a new version of a single-platform application, the effect is the same as specifying the device type corresponding to that application type.
      // 
      // This parameter is required.
      shared_ptr<string> deviceType_ {};
      // The time-to-live (TTL) for offline messages or notifications. Use this with StoreOffline. After the TTL expires, the message or notification is no longer sent. The maximum TTL is 72 hours. The default is 72 hours.
      // 
      // The time must be in ISO 8601 format and in UTC: YYYY-MM-DDThh:mm:ssZ. The expiration time must be at least 3 seconds later than the current time or the scheduled push time (`ExpireTime > PushTime + 3 seconds`). The 3-second buffer accounts for potential network and system latency. Set the TTL to at least 1 minute for individual pushes and at least 10 minutes for full or batch pushes.
      shared_ptr<string> expireTime_ {};
      // The action corresponding to the in-app page ability.
      // 
      // >Notice: 
      // 
      // When HarmonyActionType is APP_CUSTOM_PAGE, at least one of HarmonyUri and HarmonyAction must be filled in.
      // 
      // 
      // 
      // For more information, see [ClickAction.action](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section152462191216) on the HarmonyOS website.
      shared_ptr<string> harmonyAction_ {};
      // The action to take after a notification is tapped. Valid values:
      // 
      // - APP_HOME_PAGE: Open the application home page
      // 
      // - APP_CUSTOM_PAGE: Open a custom application page
      shared_ptr<string> harmonyActionType_ {};
      // The number to add to the HarmonyOS application badge. See the [HarmonyOS badge addNum field description](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section266310382145).<br>
      // Supported starting from HarmonyOS SDK version 1.2.0.<br>
      shared_ptr<int32_t> harmonyBadgeAddNum_ {};
      // The number to set for the HarmonyOS application badge. See the [HarmonyOS badge setNum field description](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section266310382145).<br>
      // Supported starting from HarmonyOS SDK version 1.2.0.<br>
      shared_ptr<int32_t> harmonyBadgeSetNum_ {};
      // The notification message category. After applying for notification message self-classification permissions, use this to identify the message type. Different notification message types affect how messages are displayed and reminded. Valid values:
      // 
      // - IM: Instant messaging
      // 
      // - VOIP: Video call
      // 
      // - SUBSCRIPTION: Subscription
      // 
      // - TRAVEL: Travel
      // 
      // - HEALTH: Health
      // 
      // - WORK: Work item reminder
      // 
      // - ACCOUNT: Account updates
      // 
      // - EXPRESS: Order & logistics
      // 
      // - FINANCE: Finance
      // 
      // - DEVICE_REMINDER: Device reminder
      // 
      // - MAIL: Email
      // 
      // - CUSTOMER_SERVICE: Customer service message
      // 
      // - MARKETING: News, content recommendations, social updates, product promotions, financial updates, lifestyle information, surveys, feature recommendations, and operational activities (only identifies content, does not expedite message sending), collectively referred to as marketing messages.
      // 
      // For more information, see [Notification.category](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the HarmonyOS website.
      shared_ptr<string> harmonyCategory_ {};
      // Sets the extended properties of the notification. This parameter does not take effect when the push type PushType is set to MESSAGE.
      // 
      // This parameter must be passed in JSON map format, or it will fail to parse.
      shared_ptr<string> harmonyExtParameters_ {};
      // Extra data for the extended notification message.<br>
      // Effective when sending HarmonyOS extended notification messages.<br>
      // Conceptually equivalent to the extraData field of a HarmonyOS extended notification message. For a detailed definition, see [HarmonyOS ExtensionPayload Description](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section161192514234).<br>
      // Supported starting from HarmonyOS SDK version 1.2.0.<br><br><br>
      shared_ptr<string> harmonyExtensionExtraData_ {};
      // When PushType is NOTICE, specifies whether it is a HarmonyOS extended notification message.
      // 
      // - true: Send an extended notification message
      // 
      // - false: Send a normal notification (default)
      // 
      // You must apply for permission on the HarmonyOS side before sending extended notification messages. For more information, see [Send Extended Notification Messages](https://developer.huawei.com/consumer/cn/doc/harmonyos-guides-V5/push-send-extend-noti-V5) in the HarmonyOS documentation.<br>
      // Supported starting from HarmonyOS SDK version 1.2.0.<br>
      shared_ptr<bool> harmonyExtensionPush_ {};
      // The URL for the large icon on the right of the notification. The URL must use the HTTPS protocol.
      // 
      // > Supported image formats are png, jpg, jpeg, heif, gif, and bmp. The image length × width must be less than 25,000 pixels.
      // 
      // For more information, see [Notification.image](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the HarmonyOS website.
      shared_ptr<string> harmonyImageUrl_ {};
      // The content for the multi-line text style. This field is required when HarmonyRenderStyle is MULTI_LINE. A maximum of 3 content entries are supported.
      shared_ptr<string> harmonyInboxContent_ {};
      // A JSON string of the HarmonyOS Live Window data structure [LiveViewPayload](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V13/push-scenariozed-api-request-param-V13#section66881469306). For development and integration, see the [HarmonyOS Live Window Push Guide](https://help.aliyun.com/document_detail/2982112.html).
      shared_ptr<string> harmonyLiveViewPayload_ {};
      // Uses the specified type of notification channel. This is effective only when the Alibaba Cloud proprietary channel is online.
      // 
      // - SOCIAL_COMMUNICATION: Social communication.
      // 
      // - SERVICE_INFORMATION: Service reminder.
      // 
      // - CONTENT_INFORMATION: Content information.
      // 
      // - CUSTOMER_SERVICE: Customer service message. This type is used for customer service messages between users and businesses and must be initiated by the user.
      // 
      // - OTHER_TYPES: Other.
      // 
      // For more information, see [SlotType](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/js-apis-notificationmanager-V5#slottype) on the HarmonyOS website.
      shared_ptr<string> harmonyNotificationSlotType_ {};
      // The unique ID for each message when it is displayed as a notification. If not included, the push service automatically generates a unique ID for each message. Different notification messages can have the same notifyId to allow new messages to overwrite old ones.
      // 
      // For more information, see [Notification.notifyId](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section17371529101117) on the HarmonyOS website.
      shared_ptr<int32_t> harmonyNotifyId_ {};
      // The receipt ID for the HarmonyOS channel. View this receipt ID in the receipt parameter configuration on the HarmonyOS Push operations platform.
      // 
      // > If the default receipt configuration on the HarmonyOS Push operations platform is the Alibaba Cloud receipt, you do not need to provide this. If not, we recommend that you first configure the default receipt ID for the HarmonyOS channel in the Alibaba Cloud EMAS Mobile Push console.
      // 
      // For more information, see [pushOptions.receiptId](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section418321011212) on the HarmonyOS website.
      shared_ptr<string> harmonyReceiptId_ {};
      // If the push type is MESSAGE and the device is offline, this push uses the auxiliary pop-up feature. The default value is false. This parameter is effective only when PushType is set to MESSAGE.
      // 
      // If a message is successfully converted to a notification, the data displayed in the notification is the value of the server-side HarmonyRemindTitle and HarmonyRemindBody parameters.
      shared_ptr<bool> harmonyRemind_ {};
      // The HarmonyOS notification content used when a message is converted to a notification. This is effective only when HarmonyRemind is set to true.
      shared_ptr<string> harmonyRemindBody_ {};
      // The HarmonyOS notification title used when a message is converted to a notification. This is effective only when HarmonyRemind is set to true.
      shared_ptr<string> harmonyRemindTitle_ {};
      // The notification message style:
      // 
      // - NORMAL: Normal notification (default)
      // 
      // - MULTI_LINE: Multi-line text style
      shared_ptr<string> harmonyRenderStyle_ {};
      // The test message flag:
      // 
      // - false: Normal message (default)
      // 
      // - true: Test message
      // 
      // For more information, see [pushOptions.testMessage](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section418321011212) on the HarmonyOS website.
      shared_ptr<bool> harmonyTestMessage_ {};
      // The URI corresponding to the in-app page ability.
      // >Notice: When HarmonyActionType is APP_CUSTOM_PAGE, at least one of HarmonyUri and HarmonyAction must be filled in. When there are multiple Abilities, fill in the action and URI for each Ability separately. The action is used with priority to find the corresponding in-app page.
      // 
      // For more information, see [ClickAction.uri](https://developer.huawei.com/consumer/cn/doc/harmonyos-references-V5/push-scenariozed-api-request-param-V5#section152462191216) on the HarmonyOS website.
      shared_ptr<string> harmonyUri_ {};
      // A custom ID for the push task. If JobKey is not empty, this field is included in the receipt logs. For more information about how to view receipt logs, see [Receipt logs](https://help.aliyun.com/document_detail/434651.html).
      shared_ptr<string> jobKey_ {};
      // Specifies the time for a scheduled push. If you do not set this parameter, the push is sent immediately.
      // 
      // The time must be in ISO 8601 format and in UTC: YYYY-MM-DDThh:mm:ssZ.
      shared_ptr<string> pushTime_ {};
      // The push type. Valid values:
      // 
      // - MESSAGE: a message.
      // 
      // - NOTICE: a notification.
      // 
      // This parameter is required.
      shared_ptr<string> pushType_ {};
      // Specifies the sending channels. Valid values:
      // 
      // - accs: Alibaba Cloud\\"s proprietary channel
      // 
      // - huawei: Huawei channel
      // 
      // - honor: Honor channel
      // 
      // - xiaomi: Xiaomi channel
      // 
      // - oppo: OPPO channel
      // 
      // - vivo: vivo channel
      // 
      // - meizu: Meizu channel
      // 
      // - gcm: Google GCM channel (legacy HTTP)
      // 
      // - fcm: Google Firebase channel (HTTP v1 API)
      // 
      // - apns: APNs channel
      // 
      // - harmony: HarmonyOS channel
      // 
      // > * If you do not configure this parameter, all channels can be used.
      // >
      // > * If you configure this parameter, only the specified channels are used.
      // >
      // > * If the configured channels conflict with the sending policy (for example, iOS notifications are sent only through the APNs channel, but this parameter does not include apns), the push is not sent.
      // >
      // > * If you configure gcm, both Google GCM and FCM channels can be used. If you configure fcm, only the Google FCM channel can be used.
      shared_ptr<string> sendChannels_ {};
      // This parameter is deprecated.
      shared_ptr<int32_t> sendSpeed_ {};
      // Specifies whether to save offline messages or notifications. The default value is false.
      // 
      // If you save them, and a user is offline, the message or notification is resent when the user comes online before the time-to-live (TTL) specified by ExpireTime expires. The default TTL is 72 hours. iOS notifications are sent through the APNs channel and are not affected by this parameter.
      shared_ptr<bool> storeOffline_ {};
      // The push target. Valid values:
      // 
      // - DEVICE: Push by device.
      // 
      // - ACCOUNT: Push by account.
      // 
      // - ALIAS: Push by alias.
      // 
      // This parameter is required.
      shared_ptr<string> target_ {};
      // Set this parameter based on the value of Target. To specify multiple values, separate them with commas. If you exceed the limit, send multiple pushes.
      // 
      // - If you set Target to DEVICE, specify device IDs, such as `deviceid1,deviceid2`. You can specify up to 1,000 device IDs.
      // 
      // - If you set Target to ACCOUNT, specify accounts, such as `account1,account2`. You can specify up to 1,000 accounts.
      // 
      // - If you set Target to ALIAS, specify aliases, such as `alias1,alias2`. You can specify up to 1,000 aliases.
      // 
      // This parameter is required.
      shared_ptr<string> targetValue_ {};
      // The title of the notification or message. The length is limited to 200 bytes.
      // This parameter is required for Android and HarmonyOS pushes. It is optional for iOS notification pushes. If you specify it for iOS:
      // 
      // - For iOS 10 and later, the notification title is displayed.
      // 
      // - For iOS versions from 8.2 to 10, it replaces the application name in the notification.
      shared_ptr<string> title_ {};
      // Specifies whether to automatically truncate titles and content that are too long.
      // Note: This applies only to vendor channels that have explicit limits on title and content length. It does not apply to channels such as APNs, Huawei, and Honor, which limit the total request body size instead of the title and content length.
      shared_ptr<bool> trim_ {};
      // iOS notifications are sent through APNs. Specify the environment information.
      // 
      // - DEV: The development environment. This applies to applications installed and debugged directly from Xcode.
      // 
      // - PRODUCT: The production environment. This applies to applications distributed through the App Store, TestFlight, Ad Hoc, or enterprise distribution.
      shared_ptr<string> iOSApnsEnv_ {};
      // The badge number on the top-right corner of the iOS application icon.
      // 
      // > If iOSBadgeAutoIncrement is set to true, this parameter must be empty.
      shared_ptr<int32_t> iOSBadge_ {};
      // Specifies whether to enable the auto-increment badge feature. The default value is false.
      // 
      // > When this is set to true, iOSBadge must be empty.
      // 
      // The auto-increment badge feature is maintained by the push server, which keeps a badge count for each device. To use this feature, use SDK version 1.9.5 or later and actively sync the badge number to the server.
      shared_ptr<bool> iOSBadgeAutoIncrement_ {};
      // The extended properties for iOS notifications.
      // 
      // For iOS 10 and later, specify the resource URL for a rich push notification, such as `{"attachment": "https://xxxx.xxx/notification_pic.png"}`. This parameter must be passed in JSON map format, or it will fail to parse.
      shared_ptr<string> iOSExtParameters_ {};
      // The interruption level. Valid values:
      // 
      // - passive: The system adds the notification to the notification list without lighting up the screen or playing a sound.
      // 
      // - active: The system immediately displays the notification, lights up the screen, and can play a sound.
      // 
      // - time-sensitive: The system immediately presents the notification, lights up the screen, and can play a sound, but does not break through system notification controls.
      // 
      // - critical: The system immediately displays the notification, lights up the screen, and plays a sound, bypassing the mute switch.
      shared_ptr<string> iOSInterruptionLevel_ {};
      // A JSON string for the static pass-through parameters of a Dynamic Island push. It contains static, user-defined information, such as product numbers and order information.
      // 
      // > Required when iOSLiveActivityEvent is set to start.
      shared_ptr<string> iOSLiveActivityAttributes_ {};
      // The type of Live Activity to start.
      // 
      // > Required when iOSLiveActivityEvent is set to start.
      shared_ptr<string> iOSLiveActivityAttributesType_ {};
      // The dynamic pass-through parameters for a Dynamic Island push. It contains real-time updated information, such as price or inventory changes.
      shared_ptr<string> iOSLiveActivityContentState_ {};
      // The time until which an ended Live Activity remains on the lock screen. The maximum duration is 4 hours.
      shared_ptr<int64_t> iOSLiveActivityDismissalDate_ {};
      // Starts, updates, or ends a Live Activity.
      // 
      // - Enumeration: start | update | end
      shared_ptr<string> iOSLiveActivityEvent_ {};
      // The Live Activity ID reported by the device to your server. This is the unique identifier for a Live Activity.
      shared_ptr<string> iOSLiveActivityId_ {};
      // A UNIX timestamp in seconds that marks the content of the activity as outdated.
      shared_ptr<int64_t> iOSLiveActivityStaleDate_ {};
      // The sound for the iOS notification. Specify the name of the audio file stored in the app bundle or the Library/Sounds directory of the sandbox. For more information, see How to set notification sounds for iOS pushes.
      // 
      // If you specify an empty string (""), the notification is silent. If you do not set this parameter, the default value is \\"default\\", which is the system alert sound.
      shared_ptr<string> iOSMusic_ {};
      // The mutable content flag for iOS notifications (for iOS 10 and later). If set to true, notifications pushed through APNs can be processed by an extension before being displayed. For silent notifications, this must be set to true.
      shared_ptr<bool> iOSMutableContent_ {};
      // Specifies the iOS notification category (for iOS 10 and later).
      shared_ptr<string> iOSNotificationCategory_ {};
      // If a device receives messages with the same CollapseId, they are merged into one. If the device is offline and receives multiple messages with the same CollapseId, only one is displayed in the notification bar. This parameter is supported on iOS 10 and later.
      shared_ptr<string> iOSNotificationCollapseId_ {};
      // Groups iOS remote notifications using this property. It marks the identifier for a collapsed group. This is supported only on iOS 12.0 and later.
      shared_ptr<string> iOSNotificationThreadId_ {};
      // The score for highlighting the summary. The value must be a floating-point number from 0 to 1.
      shared_ptr<double> iOSRelevanceScore_ {};
      // If a device is offline when a message is pushed (meaning the persistent connection to the Mobile Push server is unavailable), this push is sent once as a notification through the Apple APNs channel.
      // 
      // > Converting offline messages to notifications is only applicable to the production environment.
      shared_ptr<bool> iOSRemind_ {};
      // The content of the iOS notification when an iOS message is converted to a notification. This parameter is valid only when iOSApnsEnv is set to PRODUCT and iOSRemind is set to true.
      shared_ptr<string> iOSRemindBody_ {};
      // Specifies whether to enable iOS silent notifications.
      shared_ptr<bool> iOSSilentNotification_ {};
      // The subtitle of the iOS notification (for iOS 10 and later).
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
    // The AppKey of the application.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // An idempotency parameter that prevents duplicate pushes caused by API client retries. If you make a call with the same IdempotentToken within 15 minutes, only one push is performed, and subsequent calls return the result of the first successful push.
    // 
    // > - The parameter format is a standard 36-character UUID (8-4-4-4-12). Each valid character is a hexadecimal digit from 0-9 or a-f, case-insensitive.
    // >
    // > - This parameter only prevents duplicate pushes caused by retries. It cannot prevent duplicate pushes caused by concurrent calls.
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
