// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASSPUSHREQUESTPUSHTASK_HPP_
#define ALIBABACLOUD_MODELS_MASSPUSHREQUESTPUSHTASK_HPP_
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
  class MassPushRequestPushTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MassPushRequestPushTask& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidActivity, androidActivity_);
      DARABONBA_PTR_TO_JSON(AndroidBadgeAddNum, androidBadgeAddNum_);
      DARABONBA_PTR_TO_JSON(AndroidBadgeClass, androidBadgeClass_);
      DARABONBA_PTR_TO_JSON(AndroidBadgeSetNum, androidBadgeSetNum_);
      DARABONBA_PTR_TO_JSON(AndroidBigBody, androidBigBody_);
      DARABONBA_PTR_TO_JSON(AndroidBigPictureUrl, androidBigPictureUrl_);
      DARABONBA_PTR_TO_JSON(AndroidBigTitle, androidBigTitle_);
      DARABONBA_PTR_TO_JSON(AndroidExtParameters, androidExtParameters_);
      DARABONBA_PTR_TO_JSON(AndroidHonorTargetUserType, androidHonorTargetUserType_);
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
    friend void from_json(const Darabonba::Json& j, MassPushRequestPushTask& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidActivity, androidActivity_);
      DARABONBA_PTR_FROM_JSON(AndroidBadgeAddNum, androidBadgeAddNum_);
      DARABONBA_PTR_FROM_JSON(AndroidBadgeClass, androidBadgeClass_);
      DARABONBA_PTR_FROM_JSON(AndroidBadgeSetNum, androidBadgeSetNum_);
      DARABONBA_PTR_FROM_JSON(AndroidBigBody, androidBigBody_);
      DARABONBA_PTR_FROM_JSON(AndroidBigPictureUrl, androidBigPictureUrl_);
      DARABONBA_PTR_FROM_JSON(AndroidBigTitle, androidBigTitle_);
      DARABONBA_PTR_FROM_JSON(AndroidExtParameters, androidExtParameters_);
      DARABONBA_PTR_FROM_JSON(AndroidHonorTargetUserType, androidHonorTargetUserType_);
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
    MassPushRequestPushTask() = default ;
    MassPushRequestPushTask(const MassPushRequestPushTask &) = default ;
    MassPushRequestPushTask(MassPushRequestPushTask &&) = default ;
    MassPushRequestPushTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MassPushRequestPushTask() = default ;
    MassPushRequestPushTask& operator=(const MassPushRequestPushTask &) = default ;
    MassPushRequestPushTask& operator=(MassPushRequestPushTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->androidActivity_ != nullptr
        && this->androidBadgeAddNum_ != nullptr && this->androidBadgeClass_ != nullptr && this->androidBadgeSetNum_ != nullptr && this->androidBigBody_ != nullptr && this->androidBigPictureUrl_ != nullptr
        && this->androidBigTitle_ != nullptr && this->androidExtParameters_ != nullptr && this->androidHonorTargetUserType_ != nullptr && this->androidHuaweiReceiptId_ != nullptr && this->androidHuaweiTargetUserType_ != nullptr
        && this->androidImageUrl_ != nullptr && this->androidInboxBody_ != nullptr && this->androidMeizuNoticeMsgType_ != nullptr && this->androidMessageHuaweiCategory_ != nullptr && this->androidMessageHuaweiUrgency_ != nullptr
        && this->androidMessageOppoCategory_ != nullptr && this->androidMessageOppoNotifyLevel_ != nullptr && this->androidMessageVivoCategory_ != nullptr && this->androidMusic_ != nullptr && this->androidNotificationBarPriority_ != nullptr
        && this->androidNotificationBarType_ != nullptr && this->androidNotificationChannel_ != nullptr && this->androidNotificationGroup_ != nullptr && this->androidNotificationHonorChannel_ != nullptr && this->androidNotificationHuaweiChannel_ != nullptr
        && this->androidNotificationNotifyId_ != nullptr && this->androidNotificationThreadId_ != nullptr && this->androidNotificationVivoChannel_ != nullptr && this->androidNotificationXiaomiChannel_ != nullptr && this->androidNotifyType_ != nullptr
        && this->androidOpenType_ != nullptr && this->androidOpenUrl_ != nullptr && this->androidOppoPrivateContentParameters_ != nullptr && this->androidOppoPrivateMsgTemplateId_ != nullptr && this->androidOppoPrivateTitleParameters_ != nullptr
        && this->androidPopupActivity_ != nullptr && this->androidPopupBody_ != nullptr && this->androidPopupTitle_ != nullptr && this->androidRemind_ != nullptr && this->androidRenderStyle_ != nullptr
        && this->androidTargetUserType_ != nullptr && this->androidVivoPushMode_ != nullptr && this->androidVivoReceiptId_ != nullptr && this->androidXiaoMiActivity_ != nullptr && this->androidXiaoMiNotifyBody_ != nullptr
        && this->androidXiaoMiNotifyTitle_ != nullptr && this->androidXiaomiBigPictureUrl_ != nullptr && this->androidXiaomiImageUrl_ != nullptr && this->body_ != nullptr && this->deviceType_ != nullptr
        && this->expireTime_ != nullptr && this->harmonyAction_ != nullptr && this->harmonyActionType_ != nullptr && this->harmonyBadgeAddNum_ != nullptr && this->harmonyBadgeSetNum_ != nullptr
        && this->harmonyCategory_ != nullptr && this->harmonyExtParameters_ != nullptr && this->harmonyExtensionExtraData_ != nullptr && this->harmonyExtensionPush_ != nullptr && this->harmonyImageUrl_ != nullptr
        && this->harmonyInboxContent_ != nullptr && this->harmonyNotificationSlotType_ != nullptr && this->harmonyNotifyId_ != nullptr && this->harmonyReceiptId_ != nullptr && this->harmonyRemind_ != nullptr
        && this->harmonyRemindBody_ != nullptr && this->harmonyRemindTitle_ != nullptr && this->harmonyRenderStyle_ != nullptr && this->harmonyTestMessage_ != nullptr && this->harmonyUri_ != nullptr
        && this->jobKey_ != nullptr && this->pushTime_ != nullptr && this->pushType_ != nullptr && this->sendChannels_ != nullptr && this->sendSpeed_ != nullptr
        && this->storeOffline_ != nullptr && this->target_ != nullptr && this->targetValue_ != nullptr && this->title_ != nullptr && this->trim_ != nullptr
        && this->iOSApnsEnv_ != nullptr && this->iOSBadge_ != nullptr && this->iOSBadgeAutoIncrement_ != nullptr && this->iOSExtParameters_ != nullptr && this->iOSInterruptionLevel_ != nullptr
        && this->iOSLiveActivityAttributes_ != nullptr && this->iOSLiveActivityAttributesType_ != nullptr && this->iOSLiveActivityContentState_ != nullptr && this->iOSLiveActivityDismissalDate_ != nullptr && this->iOSLiveActivityEvent_ != nullptr
        && this->iOSLiveActivityId_ != nullptr && this->iOSLiveActivityStaleDate_ != nullptr && this->iOSMusic_ != nullptr && this->iOSMutableContent_ != nullptr && this->iOSNotificationCategory_ != nullptr
        && this->iOSNotificationCollapseId_ != nullptr && this->iOSNotificationThreadId_ != nullptr && this->iOSRelevanceScore_ != nullptr && this->iOSRemind_ != nullptr && this->iOSRemindBody_ != nullptr
        && this->iOSSilentNotification_ != nullptr && this->iOSSubtitle_ != nullptr; };
    // androidActivity Field Functions 
    bool hasAndroidActivity() const { return this->androidActivity_ != nullptr;};
    void deleteAndroidActivity() { this->androidActivity_ = nullptr;};
    inline string androidActivity() const { DARABONBA_PTR_GET_DEFAULT(androidActivity_, "") };
    inline MassPushRequestPushTask& setAndroidActivity(string androidActivity) { DARABONBA_PTR_SET_VALUE(androidActivity_, androidActivity) };


    // androidBadgeAddNum Field Functions 
    bool hasAndroidBadgeAddNum() const { return this->androidBadgeAddNum_ != nullptr;};
    void deleteAndroidBadgeAddNum() { this->androidBadgeAddNum_ = nullptr;};
    inline int32_t androidBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeAddNum_, 0) };
    inline MassPushRequestPushTask& setAndroidBadgeAddNum(int32_t androidBadgeAddNum) { DARABONBA_PTR_SET_VALUE(androidBadgeAddNum_, androidBadgeAddNum) };


    // androidBadgeClass Field Functions 
    bool hasAndroidBadgeClass() const { return this->androidBadgeClass_ != nullptr;};
    void deleteAndroidBadgeClass() { this->androidBadgeClass_ = nullptr;};
    inline string androidBadgeClass() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeClass_, "") };
    inline MassPushRequestPushTask& setAndroidBadgeClass(string androidBadgeClass) { DARABONBA_PTR_SET_VALUE(androidBadgeClass_, androidBadgeClass) };


    // androidBadgeSetNum Field Functions 
    bool hasAndroidBadgeSetNum() const { return this->androidBadgeSetNum_ != nullptr;};
    void deleteAndroidBadgeSetNum() { this->androidBadgeSetNum_ = nullptr;};
    inline int32_t androidBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(androidBadgeSetNum_, 0) };
    inline MassPushRequestPushTask& setAndroidBadgeSetNum(int32_t androidBadgeSetNum) { DARABONBA_PTR_SET_VALUE(androidBadgeSetNum_, androidBadgeSetNum) };


    // androidBigBody Field Functions 
    bool hasAndroidBigBody() const { return this->androidBigBody_ != nullptr;};
    void deleteAndroidBigBody() { this->androidBigBody_ = nullptr;};
    inline string androidBigBody() const { DARABONBA_PTR_GET_DEFAULT(androidBigBody_, "") };
    inline MassPushRequestPushTask& setAndroidBigBody(string androidBigBody) { DARABONBA_PTR_SET_VALUE(androidBigBody_, androidBigBody) };


    // androidBigPictureUrl Field Functions 
    bool hasAndroidBigPictureUrl() const { return this->androidBigPictureUrl_ != nullptr;};
    void deleteAndroidBigPictureUrl() { this->androidBigPictureUrl_ = nullptr;};
    inline string androidBigPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(androidBigPictureUrl_, "") };
    inline MassPushRequestPushTask& setAndroidBigPictureUrl(string androidBigPictureUrl) { DARABONBA_PTR_SET_VALUE(androidBigPictureUrl_, androidBigPictureUrl) };


    // androidBigTitle Field Functions 
    bool hasAndroidBigTitle() const { return this->androidBigTitle_ != nullptr;};
    void deleteAndroidBigTitle() { this->androidBigTitle_ = nullptr;};
    inline string androidBigTitle() const { DARABONBA_PTR_GET_DEFAULT(androidBigTitle_, "") };
    inline MassPushRequestPushTask& setAndroidBigTitle(string androidBigTitle) { DARABONBA_PTR_SET_VALUE(androidBigTitle_, androidBigTitle) };


    // androidExtParameters Field Functions 
    bool hasAndroidExtParameters() const { return this->androidExtParameters_ != nullptr;};
    void deleteAndroidExtParameters() { this->androidExtParameters_ = nullptr;};
    inline string androidExtParameters() const { DARABONBA_PTR_GET_DEFAULT(androidExtParameters_, "") };
    inline MassPushRequestPushTask& setAndroidExtParameters(string androidExtParameters) { DARABONBA_PTR_SET_VALUE(androidExtParameters_, androidExtParameters) };


    // androidHonorTargetUserType Field Functions 
    bool hasAndroidHonorTargetUserType() const { return this->androidHonorTargetUserType_ != nullptr;};
    void deleteAndroidHonorTargetUserType() { this->androidHonorTargetUserType_ = nullptr;};
    inline int32_t androidHonorTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidHonorTargetUserType_, 0) };
    inline MassPushRequestPushTask& setAndroidHonorTargetUserType(int32_t androidHonorTargetUserType) { DARABONBA_PTR_SET_VALUE(androidHonorTargetUserType_, androidHonorTargetUserType) };


    // androidHuaweiReceiptId Field Functions 
    bool hasAndroidHuaweiReceiptId() const { return this->androidHuaweiReceiptId_ != nullptr;};
    void deleteAndroidHuaweiReceiptId() { this->androidHuaweiReceiptId_ = nullptr;};
    inline string androidHuaweiReceiptId() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiReceiptId_, "") };
    inline MassPushRequestPushTask& setAndroidHuaweiReceiptId(string androidHuaweiReceiptId) { DARABONBA_PTR_SET_VALUE(androidHuaweiReceiptId_, androidHuaweiReceiptId) };


    // androidHuaweiTargetUserType Field Functions 
    bool hasAndroidHuaweiTargetUserType() const { return this->androidHuaweiTargetUserType_ != nullptr;};
    void deleteAndroidHuaweiTargetUserType() { this->androidHuaweiTargetUserType_ = nullptr;};
    inline int32_t androidHuaweiTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidHuaweiTargetUserType_, 0) };
    inline MassPushRequestPushTask& setAndroidHuaweiTargetUserType(int32_t androidHuaweiTargetUserType) { DARABONBA_PTR_SET_VALUE(androidHuaweiTargetUserType_, androidHuaweiTargetUserType) };


    // androidImageUrl Field Functions 
    bool hasAndroidImageUrl() const { return this->androidImageUrl_ != nullptr;};
    void deleteAndroidImageUrl() { this->androidImageUrl_ = nullptr;};
    inline string androidImageUrl() const { DARABONBA_PTR_GET_DEFAULT(androidImageUrl_, "") };
    inline MassPushRequestPushTask& setAndroidImageUrl(string androidImageUrl) { DARABONBA_PTR_SET_VALUE(androidImageUrl_, androidImageUrl) };


    // androidInboxBody Field Functions 
    bool hasAndroidInboxBody() const { return this->androidInboxBody_ != nullptr;};
    void deleteAndroidInboxBody() { this->androidInboxBody_ = nullptr;};
    inline string androidInboxBody() const { DARABONBA_PTR_GET_DEFAULT(androidInboxBody_, "") };
    inline MassPushRequestPushTask& setAndroidInboxBody(string androidInboxBody) { DARABONBA_PTR_SET_VALUE(androidInboxBody_, androidInboxBody) };


    // androidMeizuNoticeMsgType Field Functions 
    bool hasAndroidMeizuNoticeMsgType() const { return this->androidMeizuNoticeMsgType_ != nullptr;};
    void deleteAndroidMeizuNoticeMsgType() { this->androidMeizuNoticeMsgType_ = nullptr;};
    inline int32_t androidMeizuNoticeMsgType() const { DARABONBA_PTR_GET_DEFAULT(androidMeizuNoticeMsgType_, 0) };
    inline MassPushRequestPushTask& setAndroidMeizuNoticeMsgType(int32_t androidMeizuNoticeMsgType) { DARABONBA_PTR_SET_VALUE(androidMeizuNoticeMsgType_, androidMeizuNoticeMsgType) };


    // androidMessageHuaweiCategory Field Functions 
    bool hasAndroidMessageHuaweiCategory() const { return this->androidMessageHuaweiCategory_ != nullptr;};
    void deleteAndroidMessageHuaweiCategory() { this->androidMessageHuaweiCategory_ = nullptr;};
    inline string androidMessageHuaweiCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageHuaweiCategory_, "") };
    inline MassPushRequestPushTask& setAndroidMessageHuaweiCategory(string androidMessageHuaweiCategory) { DARABONBA_PTR_SET_VALUE(androidMessageHuaweiCategory_, androidMessageHuaweiCategory) };


    // androidMessageHuaweiUrgency Field Functions 
    bool hasAndroidMessageHuaweiUrgency() const { return this->androidMessageHuaweiUrgency_ != nullptr;};
    void deleteAndroidMessageHuaweiUrgency() { this->androidMessageHuaweiUrgency_ = nullptr;};
    inline string androidMessageHuaweiUrgency() const { DARABONBA_PTR_GET_DEFAULT(androidMessageHuaweiUrgency_, "") };
    inline MassPushRequestPushTask& setAndroidMessageHuaweiUrgency(string androidMessageHuaweiUrgency) { DARABONBA_PTR_SET_VALUE(androidMessageHuaweiUrgency_, androidMessageHuaweiUrgency) };


    // androidMessageOppoCategory Field Functions 
    bool hasAndroidMessageOppoCategory() const { return this->androidMessageOppoCategory_ != nullptr;};
    void deleteAndroidMessageOppoCategory() { this->androidMessageOppoCategory_ = nullptr;};
    inline string androidMessageOppoCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageOppoCategory_, "") };
    inline MassPushRequestPushTask& setAndroidMessageOppoCategory(string androidMessageOppoCategory) { DARABONBA_PTR_SET_VALUE(androidMessageOppoCategory_, androidMessageOppoCategory) };


    // androidMessageOppoNotifyLevel Field Functions 
    bool hasAndroidMessageOppoNotifyLevel() const { return this->androidMessageOppoNotifyLevel_ != nullptr;};
    void deleteAndroidMessageOppoNotifyLevel() { this->androidMessageOppoNotifyLevel_ = nullptr;};
    inline int32_t androidMessageOppoNotifyLevel() const { DARABONBA_PTR_GET_DEFAULT(androidMessageOppoNotifyLevel_, 0) };
    inline MassPushRequestPushTask& setAndroidMessageOppoNotifyLevel(int32_t androidMessageOppoNotifyLevel) { DARABONBA_PTR_SET_VALUE(androidMessageOppoNotifyLevel_, androidMessageOppoNotifyLevel) };


    // androidMessageVivoCategory Field Functions 
    bool hasAndroidMessageVivoCategory() const { return this->androidMessageVivoCategory_ != nullptr;};
    void deleteAndroidMessageVivoCategory() { this->androidMessageVivoCategory_ = nullptr;};
    inline string androidMessageVivoCategory() const { DARABONBA_PTR_GET_DEFAULT(androidMessageVivoCategory_, "") };
    inline MassPushRequestPushTask& setAndroidMessageVivoCategory(string androidMessageVivoCategory) { DARABONBA_PTR_SET_VALUE(androidMessageVivoCategory_, androidMessageVivoCategory) };


    // androidMusic Field Functions 
    bool hasAndroidMusic() const { return this->androidMusic_ != nullptr;};
    void deleteAndroidMusic() { this->androidMusic_ = nullptr;};
    inline string androidMusic() const { DARABONBA_PTR_GET_DEFAULT(androidMusic_, "") };
    inline MassPushRequestPushTask& setAndroidMusic(string androidMusic) { DARABONBA_PTR_SET_VALUE(androidMusic_, androidMusic) };


    // androidNotificationBarPriority Field Functions 
    bool hasAndroidNotificationBarPriority() const { return this->androidNotificationBarPriority_ != nullptr;};
    void deleteAndroidNotificationBarPriority() { this->androidNotificationBarPriority_ = nullptr;};
    inline int32_t androidNotificationBarPriority() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationBarPriority_, 0) };
    inline MassPushRequestPushTask& setAndroidNotificationBarPriority(int32_t androidNotificationBarPriority) { DARABONBA_PTR_SET_VALUE(androidNotificationBarPriority_, androidNotificationBarPriority) };


    // androidNotificationBarType Field Functions 
    bool hasAndroidNotificationBarType() const { return this->androidNotificationBarType_ != nullptr;};
    void deleteAndroidNotificationBarType() { this->androidNotificationBarType_ = nullptr;};
    inline int32_t androidNotificationBarType() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationBarType_, 0) };
    inline MassPushRequestPushTask& setAndroidNotificationBarType(int32_t androidNotificationBarType) { DARABONBA_PTR_SET_VALUE(androidNotificationBarType_, androidNotificationBarType) };


    // androidNotificationChannel Field Functions 
    bool hasAndroidNotificationChannel() const { return this->androidNotificationChannel_ != nullptr;};
    void deleteAndroidNotificationChannel() { this->androidNotificationChannel_ = nullptr;};
    inline string androidNotificationChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationChannel_, "") };
    inline MassPushRequestPushTask& setAndroidNotificationChannel(string androidNotificationChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationChannel_, androidNotificationChannel) };


    // androidNotificationGroup Field Functions 
    bool hasAndroidNotificationGroup() const { return this->androidNotificationGroup_ != nullptr;};
    void deleteAndroidNotificationGroup() { this->androidNotificationGroup_ = nullptr;};
    inline string androidNotificationGroup() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationGroup_, "") };
    inline MassPushRequestPushTask& setAndroidNotificationGroup(string androidNotificationGroup) { DARABONBA_PTR_SET_VALUE(androidNotificationGroup_, androidNotificationGroup) };


    // androidNotificationHonorChannel Field Functions 
    bool hasAndroidNotificationHonorChannel() const { return this->androidNotificationHonorChannel_ != nullptr;};
    void deleteAndroidNotificationHonorChannel() { this->androidNotificationHonorChannel_ = nullptr;};
    inline string androidNotificationHonorChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationHonorChannel_, "") };
    inline MassPushRequestPushTask& setAndroidNotificationHonorChannel(string androidNotificationHonorChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationHonorChannel_, androidNotificationHonorChannel) };


    // androidNotificationHuaweiChannel Field Functions 
    bool hasAndroidNotificationHuaweiChannel() const { return this->androidNotificationHuaweiChannel_ != nullptr;};
    void deleteAndroidNotificationHuaweiChannel() { this->androidNotificationHuaweiChannel_ = nullptr;};
    inline string androidNotificationHuaweiChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationHuaweiChannel_, "") };
    inline MassPushRequestPushTask& setAndroidNotificationHuaweiChannel(string androidNotificationHuaweiChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationHuaweiChannel_, androidNotificationHuaweiChannel) };


    // androidNotificationNotifyId Field Functions 
    bool hasAndroidNotificationNotifyId() const { return this->androidNotificationNotifyId_ != nullptr;};
    void deleteAndroidNotificationNotifyId() { this->androidNotificationNotifyId_ = nullptr;};
    inline int32_t androidNotificationNotifyId() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationNotifyId_, 0) };
    inline MassPushRequestPushTask& setAndroidNotificationNotifyId(int32_t androidNotificationNotifyId) { DARABONBA_PTR_SET_VALUE(androidNotificationNotifyId_, androidNotificationNotifyId) };


    // androidNotificationThreadId Field Functions 
    bool hasAndroidNotificationThreadId() const { return this->androidNotificationThreadId_ != nullptr;};
    void deleteAndroidNotificationThreadId() { this->androidNotificationThreadId_ = nullptr;};
    inline string androidNotificationThreadId() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationThreadId_, "") };
    inline MassPushRequestPushTask& setAndroidNotificationThreadId(string androidNotificationThreadId) { DARABONBA_PTR_SET_VALUE(androidNotificationThreadId_, androidNotificationThreadId) };


    // androidNotificationVivoChannel Field Functions 
    bool hasAndroidNotificationVivoChannel() const { return this->androidNotificationVivoChannel_ != nullptr;};
    void deleteAndroidNotificationVivoChannel() { this->androidNotificationVivoChannel_ = nullptr;};
    inline string androidNotificationVivoChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationVivoChannel_, "") };
    inline MassPushRequestPushTask& setAndroidNotificationVivoChannel(string androidNotificationVivoChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationVivoChannel_, androidNotificationVivoChannel) };


    // androidNotificationXiaomiChannel Field Functions 
    bool hasAndroidNotificationXiaomiChannel() const { return this->androidNotificationXiaomiChannel_ != nullptr;};
    void deleteAndroidNotificationXiaomiChannel() { this->androidNotificationXiaomiChannel_ = nullptr;};
    inline string androidNotificationXiaomiChannel() const { DARABONBA_PTR_GET_DEFAULT(androidNotificationXiaomiChannel_, "") };
    inline MassPushRequestPushTask& setAndroidNotificationXiaomiChannel(string androidNotificationXiaomiChannel) { DARABONBA_PTR_SET_VALUE(androidNotificationXiaomiChannel_, androidNotificationXiaomiChannel) };


    // androidNotifyType Field Functions 
    bool hasAndroidNotifyType() const { return this->androidNotifyType_ != nullptr;};
    void deleteAndroidNotifyType() { this->androidNotifyType_ = nullptr;};
    inline string androidNotifyType() const { DARABONBA_PTR_GET_DEFAULT(androidNotifyType_, "") };
    inline MassPushRequestPushTask& setAndroidNotifyType(string androidNotifyType) { DARABONBA_PTR_SET_VALUE(androidNotifyType_, androidNotifyType) };


    // androidOpenType Field Functions 
    bool hasAndroidOpenType() const { return this->androidOpenType_ != nullptr;};
    void deleteAndroidOpenType() { this->androidOpenType_ = nullptr;};
    inline string androidOpenType() const { DARABONBA_PTR_GET_DEFAULT(androidOpenType_, "") };
    inline MassPushRequestPushTask& setAndroidOpenType(string androidOpenType) { DARABONBA_PTR_SET_VALUE(androidOpenType_, androidOpenType) };


    // androidOpenUrl Field Functions 
    bool hasAndroidOpenUrl() const { return this->androidOpenUrl_ != nullptr;};
    void deleteAndroidOpenUrl() { this->androidOpenUrl_ = nullptr;};
    inline string androidOpenUrl() const { DARABONBA_PTR_GET_DEFAULT(androidOpenUrl_, "") };
    inline MassPushRequestPushTask& setAndroidOpenUrl(string androidOpenUrl) { DARABONBA_PTR_SET_VALUE(androidOpenUrl_, androidOpenUrl) };


    // androidOppoPrivateContentParameters Field Functions 
    bool hasAndroidOppoPrivateContentParameters() const { return this->androidOppoPrivateContentParameters_ != nullptr;};
    void deleteAndroidOppoPrivateContentParameters() { this->androidOppoPrivateContentParameters_ = nullptr;};
    inline const map<string, string> & androidOppoPrivateContentParameters() const { DARABONBA_PTR_GET_CONST(androidOppoPrivateContentParameters_, map<string, string>) };
    inline map<string, string> androidOppoPrivateContentParameters() { DARABONBA_PTR_GET(androidOppoPrivateContentParameters_, map<string, string>) };
    inline MassPushRequestPushTask& setAndroidOppoPrivateContentParameters(const map<string, string> & androidOppoPrivateContentParameters) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateContentParameters_, androidOppoPrivateContentParameters) };
    inline MassPushRequestPushTask& setAndroidOppoPrivateContentParameters(map<string, string> && androidOppoPrivateContentParameters) { DARABONBA_PTR_SET_RVALUE(androidOppoPrivateContentParameters_, androidOppoPrivateContentParameters) };


    // androidOppoPrivateMsgTemplateId Field Functions 
    bool hasAndroidOppoPrivateMsgTemplateId() const { return this->androidOppoPrivateMsgTemplateId_ != nullptr;};
    void deleteAndroidOppoPrivateMsgTemplateId() { this->androidOppoPrivateMsgTemplateId_ = nullptr;};
    inline string androidOppoPrivateMsgTemplateId() const { DARABONBA_PTR_GET_DEFAULT(androidOppoPrivateMsgTemplateId_, "") };
    inline MassPushRequestPushTask& setAndroidOppoPrivateMsgTemplateId(string androidOppoPrivateMsgTemplateId) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateMsgTemplateId_, androidOppoPrivateMsgTemplateId) };


    // androidOppoPrivateTitleParameters Field Functions 
    bool hasAndroidOppoPrivateTitleParameters() const { return this->androidOppoPrivateTitleParameters_ != nullptr;};
    void deleteAndroidOppoPrivateTitleParameters() { this->androidOppoPrivateTitleParameters_ = nullptr;};
    inline const map<string, string> & androidOppoPrivateTitleParameters() const { DARABONBA_PTR_GET_CONST(androidOppoPrivateTitleParameters_, map<string, string>) };
    inline map<string, string> androidOppoPrivateTitleParameters() { DARABONBA_PTR_GET(androidOppoPrivateTitleParameters_, map<string, string>) };
    inline MassPushRequestPushTask& setAndroidOppoPrivateTitleParameters(const map<string, string> & androidOppoPrivateTitleParameters) { DARABONBA_PTR_SET_VALUE(androidOppoPrivateTitleParameters_, androidOppoPrivateTitleParameters) };
    inline MassPushRequestPushTask& setAndroidOppoPrivateTitleParameters(map<string, string> && androidOppoPrivateTitleParameters) { DARABONBA_PTR_SET_RVALUE(androidOppoPrivateTitleParameters_, androidOppoPrivateTitleParameters) };


    // androidPopupActivity Field Functions 
    bool hasAndroidPopupActivity() const { return this->androidPopupActivity_ != nullptr;};
    void deleteAndroidPopupActivity() { this->androidPopupActivity_ = nullptr;};
    inline string androidPopupActivity() const { DARABONBA_PTR_GET_DEFAULT(androidPopupActivity_, "") };
    inline MassPushRequestPushTask& setAndroidPopupActivity(string androidPopupActivity) { DARABONBA_PTR_SET_VALUE(androidPopupActivity_, androidPopupActivity) };


    // androidPopupBody Field Functions 
    bool hasAndroidPopupBody() const { return this->androidPopupBody_ != nullptr;};
    void deleteAndroidPopupBody() { this->androidPopupBody_ = nullptr;};
    inline string androidPopupBody() const { DARABONBA_PTR_GET_DEFAULT(androidPopupBody_, "") };
    inline MassPushRequestPushTask& setAndroidPopupBody(string androidPopupBody) { DARABONBA_PTR_SET_VALUE(androidPopupBody_, androidPopupBody) };


    // androidPopupTitle Field Functions 
    bool hasAndroidPopupTitle() const { return this->androidPopupTitle_ != nullptr;};
    void deleteAndroidPopupTitle() { this->androidPopupTitle_ = nullptr;};
    inline string androidPopupTitle() const { DARABONBA_PTR_GET_DEFAULT(androidPopupTitle_, "") };
    inline MassPushRequestPushTask& setAndroidPopupTitle(string androidPopupTitle) { DARABONBA_PTR_SET_VALUE(androidPopupTitle_, androidPopupTitle) };


    // androidRemind Field Functions 
    bool hasAndroidRemind() const { return this->androidRemind_ != nullptr;};
    void deleteAndroidRemind() { this->androidRemind_ = nullptr;};
    inline bool androidRemind() const { DARABONBA_PTR_GET_DEFAULT(androidRemind_, false) };
    inline MassPushRequestPushTask& setAndroidRemind(bool androidRemind) { DARABONBA_PTR_SET_VALUE(androidRemind_, androidRemind) };


    // androidRenderStyle Field Functions 
    bool hasAndroidRenderStyle() const { return this->androidRenderStyle_ != nullptr;};
    void deleteAndroidRenderStyle() { this->androidRenderStyle_ = nullptr;};
    inline string androidRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(androidRenderStyle_, "") };
    inline MassPushRequestPushTask& setAndroidRenderStyle(string androidRenderStyle) { DARABONBA_PTR_SET_VALUE(androidRenderStyle_, androidRenderStyle) };


    // androidTargetUserType Field Functions 
    bool hasAndroidTargetUserType() const { return this->androidTargetUserType_ != nullptr;};
    void deleteAndroidTargetUserType() { this->androidTargetUserType_ = nullptr;};
    inline int32_t androidTargetUserType() const { DARABONBA_PTR_GET_DEFAULT(androidTargetUserType_, 0) };
    inline MassPushRequestPushTask& setAndroidTargetUserType(int32_t androidTargetUserType) { DARABONBA_PTR_SET_VALUE(androidTargetUserType_, androidTargetUserType) };


    // androidVivoPushMode Field Functions 
    bool hasAndroidVivoPushMode() const { return this->androidVivoPushMode_ != nullptr;};
    void deleteAndroidVivoPushMode() { this->androidVivoPushMode_ = nullptr;};
    inline int32_t androidVivoPushMode() const { DARABONBA_PTR_GET_DEFAULT(androidVivoPushMode_, 0) };
    inline MassPushRequestPushTask& setAndroidVivoPushMode(int32_t androidVivoPushMode) { DARABONBA_PTR_SET_VALUE(androidVivoPushMode_, androidVivoPushMode) };


    // androidVivoReceiptId Field Functions 
    bool hasAndroidVivoReceiptId() const { return this->androidVivoReceiptId_ != nullptr;};
    void deleteAndroidVivoReceiptId() { this->androidVivoReceiptId_ = nullptr;};
    inline string androidVivoReceiptId() const { DARABONBA_PTR_GET_DEFAULT(androidVivoReceiptId_, "") };
    inline MassPushRequestPushTask& setAndroidVivoReceiptId(string androidVivoReceiptId) { DARABONBA_PTR_SET_VALUE(androidVivoReceiptId_, androidVivoReceiptId) };


    // androidXiaoMiActivity Field Functions 
    bool hasAndroidXiaoMiActivity() const { return this->androidXiaoMiActivity_ != nullptr;};
    void deleteAndroidXiaoMiActivity() { this->androidXiaoMiActivity_ = nullptr;};
    inline string androidXiaoMiActivity() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiActivity_, "") };
    inline MassPushRequestPushTask& setAndroidXiaoMiActivity(string androidXiaoMiActivity) { DARABONBA_PTR_SET_VALUE(androidXiaoMiActivity_, androidXiaoMiActivity) };


    // androidXiaoMiNotifyBody Field Functions 
    bool hasAndroidXiaoMiNotifyBody() const { return this->androidXiaoMiNotifyBody_ != nullptr;};
    void deleteAndroidXiaoMiNotifyBody() { this->androidXiaoMiNotifyBody_ = nullptr;};
    inline string androidXiaoMiNotifyBody() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiNotifyBody_, "") };
    inline MassPushRequestPushTask& setAndroidXiaoMiNotifyBody(string androidXiaoMiNotifyBody) { DARABONBA_PTR_SET_VALUE(androidXiaoMiNotifyBody_, androidXiaoMiNotifyBody) };


    // androidXiaoMiNotifyTitle Field Functions 
    bool hasAndroidXiaoMiNotifyTitle() const { return this->androidXiaoMiNotifyTitle_ != nullptr;};
    void deleteAndroidXiaoMiNotifyTitle() { this->androidXiaoMiNotifyTitle_ = nullptr;};
    inline string androidXiaoMiNotifyTitle() const { DARABONBA_PTR_GET_DEFAULT(androidXiaoMiNotifyTitle_, "") };
    inline MassPushRequestPushTask& setAndroidXiaoMiNotifyTitle(string androidXiaoMiNotifyTitle) { DARABONBA_PTR_SET_VALUE(androidXiaoMiNotifyTitle_, androidXiaoMiNotifyTitle) };


    // androidXiaomiBigPictureUrl Field Functions 
    bool hasAndroidXiaomiBigPictureUrl() const { return this->androidXiaomiBigPictureUrl_ != nullptr;};
    void deleteAndroidXiaomiBigPictureUrl() { this->androidXiaomiBigPictureUrl_ = nullptr;};
    inline string androidXiaomiBigPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiBigPictureUrl_, "") };
    inline MassPushRequestPushTask& setAndroidXiaomiBigPictureUrl(string androidXiaomiBigPictureUrl) { DARABONBA_PTR_SET_VALUE(androidXiaomiBigPictureUrl_, androidXiaomiBigPictureUrl) };


    // androidXiaomiImageUrl Field Functions 
    bool hasAndroidXiaomiImageUrl() const { return this->androidXiaomiImageUrl_ != nullptr;};
    void deleteAndroidXiaomiImageUrl() { this->androidXiaomiImageUrl_ = nullptr;};
    inline string androidXiaomiImageUrl() const { DARABONBA_PTR_GET_DEFAULT(androidXiaomiImageUrl_, "") };
    inline MassPushRequestPushTask& setAndroidXiaomiImageUrl(string androidXiaomiImageUrl) { DARABONBA_PTR_SET_VALUE(androidXiaomiImageUrl_, androidXiaomiImageUrl) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline MassPushRequestPushTask& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline MassPushRequestPushTask& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline MassPushRequestPushTask& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // harmonyAction Field Functions 
    bool hasHarmonyAction() const { return this->harmonyAction_ != nullptr;};
    void deleteHarmonyAction() { this->harmonyAction_ = nullptr;};
    inline string harmonyAction() const { DARABONBA_PTR_GET_DEFAULT(harmonyAction_, "") };
    inline MassPushRequestPushTask& setHarmonyAction(string harmonyAction) { DARABONBA_PTR_SET_VALUE(harmonyAction_, harmonyAction) };


    // harmonyActionType Field Functions 
    bool hasHarmonyActionType() const { return this->harmonyActionType_ != nullptr;};
    void deleteHarmonyActionType() { this->harmonyActionType_ = nullptr;};
    inline string harmonyActionType() const { DARABONBA_PTR_GET_DEFAULT(harmonyActionType_, "") };
    inline MassPushRequestPushTask& setHarmonyActionType(string harmonyActionType) { DARABONBA_PTR_SET_VALUE(harmonyActionType_, harmonyActionType) };


    // harmonyBadgeAddNum Field Functions 
    bool hasHarmonyBadgeAddNum() const { return this->harmonyBadgeAddNum_ != nullptr;};
    void deleteHarmonyBadgeAddNum() { this->harmonyBadgeAddNum_ = nullptr;};
    inline int32_t harmonyBadgeAddNum() const { DARABONBA_PTR_GET_DEFAULT(harmonyBadgeAddNum_, 0) };
    inline MassPushRequestPushTask& setHarmonyBadgeAddNum(int32_t harmonyBadgeAddNum) { DARABONBA_PTR_SET_VALUE(harmonyBadgeAddNum_, harmonyBadgeAddNum) };


    // harmonyBadgeSetNum Field Functions 
    bool hasHarmonyBadgeSetNum() const { return this->harmonyBadgeSetNum_ != nullptr;};
    void deleteHarmonyBadgeSetNum() { this->harmonyBadgeSetNum_ = nullptr;};
    inline int32_t harmonyBadgeSetNum() const { DARABONBA_PTR_GET_DEFAULT(harmonyBadgeSetNum_, 0) };
    inline MassPushRequestPushTask& setHarmonyBadgeSetNum(int32_t harmonyBadgeSetNum) { DARABONBA_PTR_SET_VALUE(harmonyBadgeSetNum_, harmonyBadgeSetNum) };


    // harmonyCategory Field Functions 
    bool hasHarmonyCategory() const { return this->harmonyCategory_ != nullptr;};
    void deleteHarmonyCategory() { this->harmonyCategory_ = nullptr;};
    inline string harmonyCategory() const { DARABONBA_PTR_GET_DEFAULT(harmonyCategory_, "") };
    inline MassPushRequestPushTask& setHarmonyCategory(string harmonyCategory) { DARABONBA_PTR_SET_VALUE(harmonyCategory_, harmonyCategory) };


    // harmonyExtParameters Field Functions 
    bool hasHarmonyExtParameters() const { return this->harmonyExtParameters_ != nullptr;};
    void deleteHarmonyExtParameters() { this->harmonyExtParameters_ = nullptr;};
    inline string harmonyExtParameters() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtParameters_, "") };
    inline MassPushRequestPushTask& setHarmonyExtParameters(string harmonyExtParameters) { DARABONBA_PTR_SET_VALUE(harmonyExtParameters_, harmonyExtParameters) };


    // harmonyExtensionExtraData Field Functions 
    bool hasHarmonyExtensionExtraData() const { return this->harmonyExtensionExtraData_ != nullptr;};
    void deleteHarmonyExtensionExtraData() { this->harmonyExtensionExtraData_ = nullptr;};
    inline string harmonyExtensionExtraData() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtensionExtraData_, "") };
    inline MassPushRequestPushTask& setHarmonyExtensionExtraData(string harmonyExtensionExtraData) { DARABONBA_PTR_SET_VALUE(harmonyExtensionExtraData_, harmonyExtensionExtraData) };


    // harmonyExtensionPush Field Functions 
    bool hasHarmonyExtensionPush() const { return this->harmonyExtensionPush_ != nullptr;};
    void deleteHarmonyExtensionPush() { this->harmonyExtensionPush_ = nullptr;};
    inline bool harmonyExtensionPush() const { DARABONBA_PTR_GET_DEFAULT(harmonyExtensionPush_, false) };
    inline MassPushRequestPushTask& setHarmonyExtensionPush(bool harmonyExtensionPush) { DARABONBA_PTR_SET_VALUE(harmonyExtensionPush_, harmonyExtensionPush) };


    // harmonyImageUrl Field Functions 
    bool hasHarmonyImageUrl() const { return this->harmonyImageUrl_ != nullptr;};
    void deleteHarmonyImageUrl() { this->harmonyImageUrl_ = nullptr;};
    inline string harmonyImageUrl() const { DARABONBA_PTR_GET_DEFAULT(harmonyImageUrl_, "") };
    inline MassPushRequestPushTask& setHarmonyImageUrl(string harmonyImageUrl) { DARABONBA_PTR_SET_VALUE(harmonyImageUrl_, harmonyImageUrl) };


    // harmonyInboxContent Field Functions 
    bool hasHarmonyInboxContent() const { return this->harmonyInboxContent_ != nullptr;};
    void deleteHarmonyInboxContent() { this->harmonyInboxContent_ = nullptr;};
    inline string harmonyInboxContent() const { DARABONBA_PTR_GET_DEFAULT(harmonyInboxContent_, "") };
    inline MassPushRequestPushTask& setHarmonyInboxContent(string harmonyInboxContent) { DARABONBA_PTR_SET_VALUE(harmonyInboxContent_, harmonyInboxContent) };


    // harmonyNotificationSlotType Field Functions 
    bool hasHarmonyNotificationSlotType() const { return this->harmonyNotificationSlotType_ != nullptr;};
    void deleteHarmonyNotificationSlotType() { this->harmonyNotificationSlotType_ = nullptr;};
    inline string harmonyNotificationSlotType() const { DARABONBA_PTR_GET_DEFAULT(harmonyNotificationSlotType_, "") };
    inline MassPushRequestPushTask& setHarmonyNotificationSlotType(string harmonyNotificationSlotType) { DARABONBA_PTR_SET_VALUE(harmonyNotificationSlotType_, harmonyNotificationSlotType) };


    // harmonyNotifyId Field Functions 
    bool hasHarmonyNotifyId() const { return this->harmonyNotifyId_ != nullptr;};
    void deleteHarmonyNotifyId() { this->harmonyNotifyId_ = nullptr;};
    inline int32_t harmonyNotifyId() const { DARABONBA_PTR_GET_DEFAULT(harmonyNotifyId_, 0) };
    inline MassPushRequestPushTask& setHarmonyNotifyId(int32_t harmonyNotifyId) { DARABONBA_PTR_SET_VALUE(harmonyNotifyId_, harmonyNotifyId) };


    // harmonyReceiptId Field Functions 
    bool hasHarmonyReceiptId() const { return this->harmonyReceiptId_ != nullptr;};
    void deleteHarmonyReceiptId() { this->harmonyReceiptId_ = nullptr;};
    inline string harmonyReceiptId() const { DARABONBA_PTR_GET_DEFAULT(harmonyReceiptId_, "") };
    inline MassPushRequestPushTask& setHarmonyReceiptId(string harmonyReceiptId) { DARABONBA_PTR_SET_VALUE(harmonyReceiptId_, harmonyReceiptId) };


    // harmonyRemind Field Functions 
    bool hasHarmonyRemind() const { return this->harmonyRemind_ != nullptr;};
    void deleteHarmonyRemind() { this->harmonyRemind_ = nullptr;};
    inline bool harmonyRemind() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemind_, false) };
    inline MassPushRequestPushTask& setHarmonyRemind(bool harmonyRemind) { DARABONBA_PTR_SET_VALUE(harmonyRemind_, harmonyRemind) };


    // harmonyRemindBody Field Functions 
    bool hasHarmonyRemindBody() const { return this->harmonyRemindBody_ != nullptr;};
    void deleteHarmonyRemindBody() { this->harmonyRemindBody_ = nullptr;};
    inline string harmonyRemindBody() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemindBody_, "") };
    inline MassPushRequestPushTask& setHarmonyRemindBody(string harmonyRemindBody) { DARABONBA_PTR_SET_VALUE(harmonyRemindBody_, harmonyRemindBody) };


    // harmonyRemindTitle Field Functions 
    bool hasHarmonyRemindTitle() const { return this->harmonyRemindTitle_ != nullptr;};
    void deleteHarmonyRemindTitle() { this->harmonyRemindTitle_ = nullptr;};
    inline string harmonyRemindTitle() const { DARABONBA_PTR_GET_DEFAULT(harmonyRemindTitle_, "") };
    inline MassPushRequestPushTask& setHarmonyRemindTitle(string harmonyRemindTitle) { DARABONBA_PTR_SET_VALUE(harmonyRemindTitle_, harmonyRemindTitle) };


    // harmonyRenderStyle Field Functions 
    bool hasHarmonyRenderStyle() const { return this->harmonyRenderStyle_ != nullptr;};
    void deleteHarmonyRenderStyle() { this->harmonyRenderStyle_ = nullptr;};
    inline string harmonyRenderStyle() const { DARABONBA_PTR_GET_DEFAULT(harmonyRenderStyle_, "") };
    inline MassPushRequestPushTask& setHarmonyRenderStyle(string harmonyRenderStyle) { DARABONBA_PTR_SET_VALUE(harmonyRenderStyle_, harmonyRenderStyle) };


    // harmonyTestMessage Field Functions 
    bool hasHarmonyTestMessage() const { return this->harmonyTestMessage_ != nullptr;};
    void deleteHarmonyTestMessage() { this->harmonyTestMessage_ = nullptr;};
    inline bool harmonyTestMessage() const { DARABONBA_PTR_GET_DEFAULT(harmonyTestMessage_, false) };
    inline MassPushRequestPushTask& setHarmonyTestMessage(bool harmonyTestMessage) { DARABONBA_PTR_SET_VALUE(harmonyTestMessage_, harmonyTestMessage) };


    // harmonyUri Field Functions 
    bool hasHarmonyUri() const { return this->harmonyUri_ != nullptr;};
    void deleteHarmonyUri() { this->harmonyUri_ = nullptr;};
    inline string harmonyUri() const { DARABONBA_PTR_GET_DEFAULT(harmonyUri_, "") };
    inline MassPushRequestPushTask& setHarmonyUri(string harmonyUri) { DARABONBA_PTR_SET_VALUE(harmonyUri_, harmonyUri) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string jobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline MassPushRequestPushTask& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline string pushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
    inline MassPushRequestPushTask& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string pushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline MassPushRequestPushTask& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // sendChannels Field Functions 
    bool hasSendChannels() const { return this->sendChannels_ != nullptr;};
    void deleteSendChannels() { this->sendChannels_ = nullptr;};
    inline string sendChannels() const { DARABONBA_PTR_GET_DEFAULT(sendChannels_, "") };
    inline MassPushRequestPushTask& setSendChannels(string sendChannels) { DARABONBA_PTR_SET_VALUE(sendChannels_, sendChannels) };


    // sendSpeed Field Functions 
    bool hasSendSpeed() const { return this->sendSpeed_ != nullptr;};
    void deleteSendSpeed() { this->sendSpeed_ = nullptr;};
    inline int32_t sendSpeed() const { DARABONBA_PTR_GET_DEFAULT(sendSpeed_, 0) };
    inline MassPushRequestPushTask& setSendSpeed(int32_t sendSpeed) { DARABONBA_PTR_SET_VALUE(sendSpeed_, sendSpeed) };


    // storeOffline Field Functions 
    bool hasStoreOffline() const { return this->storeOffline_ != nullptr;};
    void deleteStoreOffline() { this->storeOffline_ = nullptr;};
    inline bool storeOffline() const { DARABONBA_PTR_GET_DEFAULT(storeOffline_, false) };
    inline MassPushRequestPushTask& setStoreOffline(bool storeOffline) { DARABONBA_PTR_SET_VALUE(storeOffline_, storeOffline) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline MassPushRequestPushTask& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline MassPushRequestPushTask& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline MassPushRequestPushTask& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // trim Field Functions 
    bool hasTrim() const { return this->trim_ != nullptr;};
    void deleteTrim() { this->trim_ = nullptr;};
    inline bool trim() const { DARABONBA_PTR_GET_DEFAULT(trim_, false) };
    inline MassPushRequestPushTask& setTrim(bool trim) { DARABONBA_PTR_SET_VALUE(trim_, trim) };


    // iOSApnsEnv Field Functions 
    bool hasIOSApnsEnv() const { return this->iOSApnsEnv_ != nullptr;};
    void deleteIOSApnsEnv() { this->iOSApnsEnv_ = nullptr;};
    inline string iOSApnsEnv() const { DARABONBA_PTR_GET_DEFAULT(iOSApnsEnv_, "") };
    inline MassPushRequestPushTask& setIOSApnsEnv(string iOSApnsEnv) { DARABONBA_PTR_SET_VALUE(iOSApnsEnv_, iOSApnsEnv) };


    // iOSBadge Field Functions 
    bool hasIOSBadge() const { return this->iOSBadge_ != nullptr;};
    void deleteIOSBadge() { this->iOSBadge_ = nullptr;};
    inline int32_t iOSBadge() const { DARABONBA_PTR_GET_DEFAULT(iOSBadge_, 0) };
    inline MassPushRequestPushTask& setIOSBadge(int32_t iOSBadge) { DARABONBA_PTR_SET_VALUE(iOSBadge_, iOSBadge) };


    // iOSBadgeAutoIncrement Field Functions 
    bool hasIOSBadgeAutoIncrement() const { return this->iOSBadgeAutoIncrement_ != nullptr;};
    void deleteIOSBadgeAutoIncrement() { this->iOSBadgeAutoIncrement_ = nullptr;};
    inline bool iOSBadgeAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(iOSBadgeAutoIncrement_, false) };
    inline MassPushRequestPushTask& setIOSBadgeAutoIncrement(bool iOSBadgeAutoIncrement) { DARABONBA_PTR_SET_VALUE(iOSBadgeAutoIncrement_, iOSBadgeAutoIncrement) };


    // iOSExtParameters Field Functions 
    bool hasIOSExtParameters() const { return this->iOSExtParameters_ != nullptr;};
    void deleteIOSExtParameters() { this->iOSExtParameters_ = nullptr;};
    inline string iOSExtParameters() const { DARABONBA_PTR_GET_DEFAULT(iOSExtParameters_, "") };
    inline MassPushRequestPushTask& setIOSExtParameters(string iOSExtParameters) { DARABONBA_PTR_SET_VALUE(iOSExtParameters_, iOSExtParameters) };


    // iOSInterruptionLevel Field Functions 
    bool hasIOSInterruptionLevel() const { return this->iOSInterruptionLevel_ != nullptr;};
    void deleteIOSInterruptionLevel() { this->iOSInterruptionLevel_ = nullptr;};
    inline string iOSInterruptionLevel() const { DARABONBA_PTR_GET_DEFAULT(iOSInterruptionLevel_, "") };
    inline MassPushRequestPushTask& setIOSInterruptionLevel(string iOSInterruptionLevel) { DARABONBA_PTR_SET_VALUE(iOSInterruptionLevel_, iOSInterruptionLevel) };


    // iOSLiveActivityAttributes Field Functions 
    bool hasIOSLiveActivityAttributes() const { return this->iOSLiveActivityAttributes_ != nullptr;};
    void deleteIOSLiveActivityAttributes() { this->iOSLiveActivityAttributes_ = nullptr;};
    inline string iOSLiveActivityAttributes() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityAttributes_, "") };
    inline MassPushRequestPushTask& setIOSLiveActivityAttributes(string iOSLiveActivityAttributes) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityAttributes_, iOSLiveActivityAttributes) };


    // iOSLiveActivityAttributesType Field Functions 
    bool hasIOSLiveActivityAttributesType() const { return this->iOSLiveActivityAttributesType_ != nullptr;};
    void deleteIOSLiveActivityAttributesType() { this->iOSLiveActivityAttributesType_ = nullptr;};
    inline string iOSLiveActivityAttributesType() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityAttributesType_, "") };
    inline MassPushRequestPushTask& setIOSLiveActivityAttributesType(string iOSLiveActivityAttributesType) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityAttributesType_, iOSLiveActivityAttributesType) };


    // iOSLiveActivityContentState Field Functions 
    bool hasIOSLiveActivityContentState() const { return this->iOSLiveActivityContentState_ != nullptr;};
    void deleteIOSLiveActivityContentState() { this->iOSLiveActivityContentState_ = nullptr;};
    inline string iOSLiveActivityContentState() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityContentState_, "") };
    inline MassPushRequestPushTask& setIOSLiveActivityContentState(string iOSLiveActivityContentState) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityContentState_, iOSLiveActivityContentState) };


    // iOSLiveActivityDismissalDate Field Functions 
    bool hasIOSLiveActivityDismissalDate() const { return this->iOSLiveActivityDismissalDate_ != nullptr;};
    void deleteIOSLiveActivityDismissalDate() { this->iOSLiveActivityDismissalDate_ = nullptr;};
    inline int64_t iOSLiveActivityDismissalDate() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityDismissalDate_, 0L) };
    inline MassPushRequestPushTask& setIOSLiveActivityDismissalDate(int64_t iOSLiveActivityDismissalDate) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityDismissalDate_, iOSLiveActivityDismissalDate) };


    // iOSLiveActivityEvent Field Functions 
    bool hasIOSLiveActivityEvent() const { return this->iOSLiveActivityEvent_ != nullptr;};
    void deleteIOSLiveActivityEvent() { this->iOSLiveActivityEvent_ = nullptr;};
    inline string iOSLiveActivityEvent() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityEvent_, "") };
    inline MassPushRequestPushTask& setIOSLiveActivityEvent(string iOSLiveActivityEvent) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityEvent_, iOSLiveActivityEvent) };


    // iOSLiveActivityId Field Functions 
    bool hasIOSLiveActivityId() const { return this->iOSLiveActivityId_ != nullptr;};
    void deleteIOSLiveActivityId() { this->iOSLiveActivityId_ = nullptr;};
    inline string iOSLiveActivityId() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityId_, "") };
    inline MassPushRequestPushTask& setIOSLiveActivityId(string iOSLiveActivityId) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityId_, iOSLiveActivityId) };


    // iOSLiveActivityStaleDate Field Functions 
    bool hasIOSLiveActivityStaleDate() const { return this->iOSLiveActivityStaleDate_ != nullptr;};
    void deleteIOSLiveActivityStaleDate() { this->iOSLiveActivityStaleDate_ = nullptr;};
    inline int64_t iOSLiveActivityStaleDate() const { DARABONBA_PTR_GET_DEFAULT(iOSLiveActivityStaleDate_, 0L) };
    inline MassPushRequestPushTask& setIOSLiveActivityStaleDate(int64_t iOSLiveActivityStaleDate) { DARABONBA_PTR_SET_VALUE(iOSLiveActivityStaleDate_, iOSLiveActivityStaleDate) };


    // iOSMusic Field Functions 
    bool hasIOSMusic() const { return this->iOSMusic_ != nullptr;};
    void deleteIOSMusic() { this->iOSMusic_ = nullptr;};
    inline string iOSMusic() const { DARABONBA_PTR_GET_DEFAULT(iOSMusic_, "") };
    inline MassPushRequestPushTask& setIOSMusic(string iOSMusic) { DARABONBA_PTR_SET_VALUE(iOSMusic_, iOSMusic) };


    // iOSMutableContent Field Functions 
    bool hasIOSMutableContent() const { return this->iOSMutableContent_ != nullptr;};
    void deleteIOSMutableContent() { this->iOSMutableContent_ = nullptr;};
    inline bool iOSMutableContent() const { DARABONBA_PTR_GET_DEFAULT(iOSMutableContent_, false) };
    inline MassPushRequestPushTask& setIOSMutableContent(bool iOSMutableContent) { DARABONBA_PTR_SET_VALUE(iOSMutableContent_, iOSMutableContent) };


    // iOSNotificationCategory Field Functions 
    bool hasIOSNotificationCategory() const { return this->iOSNotificationCategory_ != nullptr;};
    void deleteIOSNotificationCategory() { this->iOSNotificationCategory_ = nullptr;};
    inline string iOSNotificationCategory() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationCategory_, "") };
    inline MassPushRequestPushTask& setIOSNotificationCategory(string iOSNotificationCategory) { DARABONBA_PTR_SET_VALUE(iOSNotificationCategory_, iOSNotificationCategory) };


    // iOSNotificationCollapseId Field Functions 
    bool hasIOSNotificationCollapseId() const { return this->iOSNotificationCollapseId_ != nullptr;};
    void deleteIOSNotificationCollapseId() { this->iOSNotificationCollapseId_ = nullptr;};
    inline string iOSNotificationCollapseId() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationCollapseId_, "") };
    inline MassPushRequestPushTask& setIOSNotificationCollapseId(string iOSNotificationCollapseId) { DARABONBA_PTR_SET_VALUE(iOSNotificationCollapseId_, iOSNotificationCollapseId) };


    // iOSNotificationThreadId Field Functions 
    bool hasIOSNotificationThreadId() const { return this->iOSNotificationThreadId_ != nullptr;};
    void deleteIOSNotificationThreadId() { this->iOSNotificationThreadId_ = nullptr;};
    inline string iOSNotificationThreadId() const { DARABONBA_PTR_GET_DEFAULT(iOSNotificationThreadId_, "") };
    inline MassPushRequestPushTask& setIOSNotificationThreadId(string iOSNotificationThreadId) { DARABONBA_PTR_SET_VALUE(iOSNotificationThreadId_, iOSNotificationThreadId) };


    // iOSRelevanceScore Field Functions 
    bool hasIOSRelevanceScore() const { return this->iOSRelevanceScore_ != nullptr;};
    void deleteIOSRelevanceScore() { this->iOSRelevanceScore_ = nullptr;};
    inline double iOSRelevanceScore() const { DARABONBA_PTR_GET_DEFAULT(iOSRelevanceScore_, 0.0) };
    inline MassPushRequestPushTask& setIOSRelevanceScore(double iOSRelevanceScore) { DARABONBA_PTR_SET_VALUE(iOSRelevanceScore_, iOSRelevanceScore) };


    // iOSRemind Field Functions 
    bool hasIOSRemind() const { return this->iOSRemind_ != nullptr;};
    void deleteIOSRemind() { this->iOSRemind_ = nullptr;};
    inline bool iOSRemind() const { DARABONBA_PTR_GET_DEFAULT(iOSRemind_, false) };
    inline MassPushRequestPushTask& setIOSRemind(bool iOSRemind) { DARABONBA_PTR_SET_VALUE(iOSRemind_, iOSRemind) };


    // iOSRemindBody Field Functions 
    bool hasIOSRemindBody() const { return this->iOSRemindBody_ != nullptr;};
    void deleteIOSRemindBody() { this->iOSRemindBody_ = nullptr;};
    inline string iOSRemindBody() const { DARABONBA_PTR_GET_DEFAULT(iOSRemindBody_, "") };
    inline MassPushRequestPushTask& setIOSRemindBody(string iOSRemindBody) { DARABONBA_PTR_SET_VALUE(iOSRemindBody_, iOSRemindBody) };


    // iOSSilentNotification Field Functions 
    bool hasIOSSilentNotification() const { return this->iOSSilentNotification_ != nullptr;};
    void deleteIOSSilentNotification() { this->iOSSilentNotification_ = nullptr;};
    inline bool iOSSilentNotification() const { DARABONBA_PTR_GET_DEFAULT(iOSSilentNotification_, false) };
    inline MassPushRequestPushTask& setIOSSilentNotification(bool iOSSilentNotification) { DARABONBA_PTR_SET_VALUE(iOSSilentNotification_, iOSSilentNotification) };


    // iOSSubtitle Field Functions 
    bool hasIOSSubtitle() const { return this->iOSSubtitle_ != nullptr;};
    void deleteIOSSubtitle() { this->iOSSubtitle_ = nullptr;};
    inline string iOSSubtitle() const { DARABONBA_PTR_GET_DEFAULT(iOSSubtitle_, "") };
    inline MassPushRequestPushTask& setIOSSubtitle(string iOSSubtitle) { DARABONBA_PTR_SET_VALUE(iOSSubtitle_, iOSSubtitle) };


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
    std::shared_ptr<string> androidRenderStyle_ = nullptr;
    std::shared_ptr<int32_t> androidTargetUserType_ = nullptr;
    std::shared_ptr<int32_t> androidVivoPushMode_ = nullptr;
    std::shared_ptr<string> androidVivoReceiptId_ = nullptr;
    std::shared_ptr<string> androidXiaoMiActivity_ = nullptr;
    std::shared_ptr<string> androidXiaoMiNotifyBody_ = nullptr;
    std::shared_ptr<string> androidXiaoMiNotifyTitle_ = nullptr;
    std::shared_ptr<string> androidXiaomiBigPictureUrl_ = nullptr;
    std::shared_ptr<string> androidXiaomiImageUrl_ = nullptr;
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
    std::shared_ptr<string> harmonyNotificationSlotType_ = nullptr;
    std::shared_ptr<int32_t> harmonyNotifyId_ = nullptr;
    std::shared_ptr<string> harmonyReceiptId_ = nullptr;
    std::shared_ptr<bool> harmonyRemind_ = nullptr;
    std::shared_ptr<string> harmonyRemindBody_ = nullptr;
    std::shared_ptr<string> harmonyRemindTitle_ = nullptr;
    std::shared_ptr<string> harmonyRenderStyle_ = nullptr;
    std::shared_ptr<bool> harmonyTestMessage_ = nullptr;
    std::shared_ptr<string> harmonyUri_ = nullptr;
    std::shared_ptr<string> jobKey_ = nullptr;
    std::shared_ptr<string> pushTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pushType_ = nullptr;
    std::shared_ptr<string> sendChannels_ = nullptr;
    std::shared_ptr<int32_t> sendSpeed_ = nullptr;
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
