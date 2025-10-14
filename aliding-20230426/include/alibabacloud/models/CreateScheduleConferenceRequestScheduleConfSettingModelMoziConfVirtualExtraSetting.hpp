// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUESTSCHEDULECONFSETTINGMODELMOZICONFVIRTUALEXTRASETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUESTSCHEDULECONFSETTINGMODELMOZICONFVIRTUALEXTRASETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& obj) { 
      DARABONBA_PTR_TO_JSON(CloudRecordOwnerUserId, cloudRecordOwnerUserId_);
      DARABONBA_PTR_TO_JSON(EnableChat, enableChat_);
      DARABONBA_PTR_TO_JSON(EnableWebAnonymousJoin, enableWebAnonymousJoin_);
      DARABONBA_PTR_TO_JSON(JoinBeforeHost, joinBeforeHost_);
      DARABONBA_PTR_TO_JSON(LockMediaStatusMicMute, lockMediaStatusMicMute_);
      DARABONBA_PTR_TO_JSON(LockNick, lockNick_);
      DARABONBA_PTR_TO_JSON(MinutesOwnerUserId, minutesOwnerUserId_);
      DARABONBA_PTR_TO_JSON(MoziConfExtensionAppSettings, moziConfExtensionAppSettings_);
      DARABONBA_PTR_TO_JSON(PushAllMeetingRecords, pushAllMeetingRecords_);
      DARABONBA_PTR_TO_JSON(PushCloudRecordCard, pushCloudRecordCard_);
      DARABONBA_PTR_TO_JSON(PushMinutesCard, pushMinutesCard_);
      DARABONBA_PTR_TO_JSON(WaitingRoom, waitingRoom_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudRecordOwnerUserId, cloudRecordOwnerUserId_);
      DARABONBA_PTR_FROM_JSON(EnableChat, enableChat_);
      DARABONBA_PTR_FROM_JSON(EnableWebAnonymousJoin, enableWebAnonymousJoin_);
      DARABONBA_PTR_FROM_JSON(JoinBeforeHost, joinBeforeHost_);
      DARABONBA_PTR_FROM_JSON(LockMediaStatusMicMute, lockMediaStatusMicMute_);
      DARABONBA_PTR_FROM_JSON(LockNick, lockNick_);
      DARABONBA_PTR_FROM_JSON(MinutesOwnerUserId, minutesOwnerUserId_);
      DARABONBA_PTR_FROM_JSON(MoziConfExtensionAppSettings, moziConfExtensionAppSettings_);
      DARABONBA_PTR_FROM_JSON(PushAllMeetingRecords, pushAllMeetingRecords_);
      DARABONBA_PTR_FROM_JSON(PushCloudRecordCard, pushCloudRecordCard_);
      DARABONBA_PTR_FROM_JSON(PushMinutesCard, pushMinutesCard_);
      DARABONBA_PTR_FROM_JSON(WaitingRoom, waitingRoom_);
    };
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting() = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting(const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting &) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting(CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting &&) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting() = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& operator=(const CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting &) = default ;
    CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& operator=(CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudRecordOwnerUserId_ == nullptr
        && return this->enableChat_ == nullptr && return this->enableWebAnonymousJoin_ == nullptr && return this->joinBeforeHost_ == nullptr && return this->lockMediaStatusMicMute_ == nullptr && return this->lockNick_ == nullptr
        && return this->minutesOwnerUserId_ == nullptr && return this->moziConfExtensionAppSettings_ == nullptr && return this->pushAllMeetingRecords_ == nullptr && return this->pushCloudRecordCard_ == nullptr && return this->pushMinutesCard_ == nullptr
        && return this->waitingRoom_ == nullptr; };
    // cloudRecordOwnerUserId Field Functions 
    bool hasCloudRecordOwnerUserId() const { return this->cloudRecordOwnerUserId_ != nullptr;};
    void deleteCloudRecordOwnerUserId() { this->cloudRecordOwnerUserId_ = nullptr;};
    inline string cloudRecordOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(cloudRecordOwnerUserId_, "") };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setCloudRecordOwnerUserId(string cloudRecordOwnerUserId) { DARABONBA_PTR_SET_VALUE(cloudRecordOwnerUserId_, cloudRecordOwnerUserId) };


    // enableChat Field Functions 
    bool hasEnableChat() const { return this->enableChat_ != nullptr;};
    void deleteEnableChat() { this->enableChat_ = nullptr;};
    inline int32_t enableChat() const { DARABONBA_PTR_GET_DEFAULT(enableChat_, 0) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setEnableChat(int32_t enableChat) { DARABONBA_PTR_SET_VALUE(enableChat_, enableChat) };


    // enableWebAnonymousJoin Field Functions 
    bool hasEnableWebAnonymousJoin() const { return this->enableWebAnonymousJoin_ != nullptr;};
    void deleteEnableWebAnonymousJoin() { this->enableWebAnonymousJoin_ = nullptr;};
    inline bool enableWebAnonymousJoin() const { DARABONBA_PTR_GET_DEFAULT(enableWebAnonymousJoin_, false) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setEnableWebAnonymousJoin(bool enableWebAnonymousJoin) { DARABONBA_PTR_SET_VALUE(enableWebAnonymousJoin_, enableWebAnonymousJoin) };


    // joinBeforeHost Field Functions 
    bool hasJoinBeforeHost() const { return this->joinBeforeHost_ != nullptr;};
    void deleteJoinBeforeHost() { this->joinBeforeHost_ = nullptr;};
    inline int32_t joinBeforeHost() const { DARABONBA_PTR_GET_DEFAULT(joinBeforeHost_, 0) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setJoinBeforeHost(int32_t joinBeforeHost) { DARABONBA_PTR_SET_VALUE(joinBeforeHost_, joinBeforeHost) };


    // lockMediaStatusMicMute Field Functions 
    bool hasLockMediaStatusMicMute() const { return this->lockMediaStatusMicMute_ != nullptr;};
    void deleteLockMediaStatusMicMute() { this->lockMediaStatusMicMute_ = nullptr;};
    inline int32_t lockMediaStatusMicMute() const { DARABONBA_PTR_GET_DEFAULT(lockMediaStatusMicMute_, 0) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setLockMediaStatusMicMute(int32_t lockMediaStatusMicMute) { DARABONBA_PTR_SET_VALUE(lockMediaStatusMicMute_, lockMediaStatusMicMute) };


    // lockNick Field Functions 
    bool hasLockNick() const { return this->lockNick_ != nullptr;};
    void deleteLockNick() { this->lockNick_ = nullptr;};
    inline int32_t lockNick() const { DARABONBA_PTR_GET_DEFAULT(lockNick_, 0) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setLockNick(int32_t lockNick) { DARABONBA_PTR_SET_VALUE(lockNick_, lockNick) };


    // minutesOwnerUserId Field Functions 
    bool hasMinutesOwnerUserId() const { return this->minutesOwnerUserId_ != nullptr;};
    void deleteMinutesOwnerUserId() { this->minutesOwnerUserId_ = nullptr;};
    inline string minutesOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(minutesOwnerUserId_, "") };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setMinutesOwnerUserId(string minutesOwnerUserId) { DARABONBA_PTR_SET_VALUE(minutesOwnerUserId_, minutesOwnerUserId) };


    // moziConfExtensionAppSettings Field Functions 
    bool hasMoziConfExtensionAppSettings() const { return this->moziConfExtensionAppSettings_ != nullptr;};
    void deleteMoziConfExtensionAppSettings() { this->moziConfExtensionAppSettings_ = nullptr;};
    inline const vector<Models::CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings> & moziConfExtensionAppSettings() const { DARABONBA_PTR_GET_CONST(moziConfExtensionAppSettings_, vector<Models::CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings>) };
    inline vector<Models::CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings> moziConfExtensionAppSettings() { DARABONBA_PTR_GET(moziConfExtensionAppSettings_, vector<Models::CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings>) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setMoziConfExtensionAppSettings(const vector<Models::CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings> & moziConfExtensionAppSettings) { DARABONBA_PTR_SET_VALUE(moziConfExtensionAppSettings_, moziConfExtensionAppSettings) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setMoziConfExtensionAppSettings(vector<Models::CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings> && moziConfExtensionAppSettings) { DARABONBA_PTR_SET_RVALUE(moziConfExtensionAppSettings_, moziConfExtensionAppSettings) };


    // pushAllMeetingRecords Field Functions 
    bool hasPushAllMeetingRecords() const { return this->pushAllMeetingRecords_ != nullptr;};
    void deletePushAllMeetingRecords() { this->pushAllMeetingRecords_ = nullptr;};
    inline bool pushAllMeetingRecords() const { DARABONBA_PTR_GET_DEFAULT(pushAllMeetingRecords_, false) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setPushAllMeetingRecords(bool pushAllMeetingRecords) { DARABONBA_PTR_SET_VALUE(pushAllMeetingRecords_, pushAllMeetingRecords) };


    // pushCloudRecordCard Field Functions 
    bool hasPushCloudRecordCard() const { return this->pushCloudRecordCard_ != nullptr;};
    void deletePushCloudRecordCard() { this->pushCloudRecordCard_ = nullptr;};
    inline bool pushCloudRecordCard() const { DARABONBA_PTR_GET_DEFAULT(pushCloudRecordCard_, false) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setPushCloudRecordCard(bool pushCloudRecordCard) { DARABONBA_PTR_SET_VALUE(pushCloudRecordCard_, pushCloudRecordCard) };


    // pushMinutesCard Field Functions 
    bool hasPushMinutesCard() const { return this->pushMinutesCard_ != nullptr;};
    void deletePushMinutesCard() { this->pushMinutesCard_ = nullptr;};
    inline bool pushMinutesCard() const { DARABONBA_PTR_GET_DEFAULT(pushMinutesCard_, false) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setPushMinutesCard(bool pushMinutesCard) { DARABONBA_PTR_SET_VALUE(pushMinutesCard_, pushMinutesCard) };


    // waitingRoom Field Functions 
    bool hasWaitingRoom() const { return this->waitingRoom_ != nullptr;};
    void deleteWaitingRoom() { this->waitingRoom_ = nullptr;};
    inline int32_t waitingRoom() const { DARABONBA_PTR_GET_DEFAULT(waitingRoom_, 0) };
    inline CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSetting& setWaitingRoom(int32_t waitingRoom) { DARABONBA_PTR_SET_VALUE(waitingRoom_, waitingRoom) };


  protected:
    std::shared_ptr<string> cloudRecordOwnerUserId_ = nullptr;
    std::shared_ptr<int32_t> enableChat_ = nullptr;
    std::shared_ptr<bool> enableWebAnonymousJoin_ = nullptr;
    std::shared_ptr<int32_t> joinBeforeHost_ = nullptr;
    std::shared_ptr<int32_t> lockMediaStatusMicMute_ = nullptr;
    std::shared_ptr<int32_t> lockNick_ = nullptr;
    std::shared_ptr<string> minutesOwnerUserId_ = nullptr;
    std::shared_ptr<vector<Models::CreateScheduleConferenceRequestScheduleConfSettingModelMoziConfVirtualExtraSettingMoziConfExtensionAppSettings>> moziConfExtensionAppSettings_ = nullptr;
    std::shared_ptr<bool> pushAllMeetingRecords_ = nullptr;
    std::shared_ptr<bool> pushCloudRecordCard_ = nullptr;
    std::shared_ptr<bool> pushMinutesCard_ = nullptr;
    std::shared_ptr<int32_t> waitingRoom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
