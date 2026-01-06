// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULECONFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateScheduleConferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ScheduleConfSettingModel, scheduleConfSettingModel_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleConferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfSettingModel, scheduleConfSettingModel_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateScheduleConferenceRequest() = default ;
    CreateScheduleConferenceRequest(const CreateScheduleConferenceRequest &) = default ;
    CreateScheduleConferenceRequest(CreateScheduleConferenceRequest &&) = default ;
    CreateScheduleConferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleConferenceRequest() = default ;
    CreateScheduleConferenceRequest& operator=(const CreateScheduleConferenceRequest &) = default ;
    CreateScheduleConferenceRequest& operator=(CreateScheduleConferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class ScheduleConfSettingModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleConfSettingModel& obj) { 
        DARABONBA_PTR_TO_JSON(CohostUserIds, cohostUserIds_);
        DARABONBA_PTR_TO_JSON(ConfAllowedCorpId, confAllowedCorpId_);
        DARABONBA_PTR_TO_JSON(HostUserId, hostUserId_);
        DARABONBA_PTR_TO_JSON(LockRoom, lockRoom_);
        DARABONBA_PTR_TO_JSON(MoziConfOpenRecordSetting, moziConfOpenRecordSetting_);
        DARABONBA_PTR_TO_JSON(MoziConfVirtualExtraSetting, moziConfVirtualExtraSetting_);
        DARABONBA_PTR_TO_JSON(MuteOnJoin, muteOnJoin_);
        DARABONBA_PTR_TO_JSON(ScreenShareForbidden, screenShareForbidden_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleConfSettingModel& obj) { 
        DARABONBA_PTR_FROM_JSON(CohostUserIds, cohostUserIds_);
        DARABONBA_PTR_FROM_JSON(ConfAllowedCorpId, confAllowedCorpId_);
        DARABONBA_PTR_FROM_JSON(HostUserId, hostUserId_);
        DARABONBA_PTR_FROM_JSON(LockRoom, lockRoom_);
        DARABONBA_PTR_FROM_JSON(MoziConfOpenRecordSetting, moziConfOpenRecordSetting_);
        DARABONBA_PTR_FROM_JSON(MoziConfVirtualExtraSetting, moziConfVirtualExtraSetting_);
        DARABONBA_PTR_FROM_JSON(MuteOnJoin, muteOnJoin_);
        DARABONBA_PTR_FROM_JSON(ScreenShareForbidden, screenShareForbidden_);
      };
      ScheduleConfSettingModel() = default ;
      ScheduleConfSettingModel(const ScheduleConfSettingModel &) = default ;
      ScheduleConfSettingModel(ScheduleConfSettingModel &&) = default ;
      ScheduleConfSettingModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleConfSettingModel() = default ;
      ScheduleConfSettingModel& operator=(const ScheduleConfSettingModel &) = default ;
      ScheduleConfSettingModel& operator=(ScheduleConfSettingModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MoziConfVirtualExtraSetting : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MoziConfVirtualExtraSetting& obj) { 
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
        friend void from_json(const Darabonba::Json& j, MoziConfVirtualExtraSetting& obj) { 
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
        MoziConfVirtualExtraSetting() = default ;
        MoziConfVirtualExtraSetting(const MoziConfVirtualExtraSetting &) = default ;
        MoziConfVirtualExtraSetting(MoziConfVirtualExtraSetting &&) = default ;
        MoziConfVirtualExtraSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MoziConfVirtualExtraSetting() = default ;
        MoziConfVirtualExtraSetting& operator=(const MoziConfVirtualExtraSetting &) = default ;
        MoziConfVirtualExtraSetting& operator=(MoziConfVirtualExtraSetting &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MoziConfExtensionAppSettings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MoziConfExtensionAppSettings& obj) { 
            DARABONBA_PTR_TO_JSON(AutoOpenMode, autoOpenMode_);
            DARABONBA_PTR_TO_JSON(CoolAppCode, coolAppCode_);
            DARABONBA_PTR_TO_JSON(ExtensionAppBizData, extensionAppBizData_);
          };
          friend void from_json(const Darabonba::Json& j, MoziConfExtensionAppSettings& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoOpenMode, autoOpenMode_);
            DARABONBA_PTR_FROM_JSON(CoolAppCode, coolAppCode_);
            DARABONBA_PTR_FROM_JSON(ExtensionAppBizData, extensionAppBizData_);
          };
          MoziConfExtensionAppSettings() = default ;
          MoziConfExtensionAppSettings(const MoziConfExtensionAppSettings &) = default ;
          MoziConfExtensionAppSettings(MoziConfExtensionAppSettings &&) = default ;
          MoziConfExtensionAppSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MoziConfExtensionAppSettings() = default ;
          MoziConfExtensionAppSettings& operator=(const MoziConfExtensionAppSettings &) = default ;
          MoziConfExtensionAppSettings& operator=(MoziConfExtensionAppSettings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->autoOpenMode_ == nullptr
        && this->coolAppCode_ == nullptr && this->extensionAppBizData_ == nullptr; };
          // autoOpenMode Field Functions 
          bool hasAutoOpenMode() const { return this->autoOpenMode_ != nullptr;};
          void deleteAutoOpenMode() { this->autoOpenMode_ = nullptr;};
          inline int32_t getAutoOpenMode() const { DARABONBA_PTR_GET_DEFAULT(autoOpenMode_, 0) };
          inline MoziConfExtensionAppSettings& setAutoOpenMode(int32_t autoOpenMode) { DARABONBA_PTR_SET_VALUE(autoOpenMode_, autoOpenMode) };


          // coolAppCode Field Functions 
          bool hasCoolAppCode() const { return this->coolAppCode_ != nullptr;};
          void deleteCoolAppCode() { this->coolAppCode_ = nullptr;};
          inline string getCoolAppCode() const { DARABONBA_PTR_GET_DEFAULT(coolAppCode_, "") };
          inline MoziConfExtensionAppSettings& setCoolAppCode(string coolAppCode) { DARABONBA_PTR_SET_VALUE(coolAppCode_, coolAppCode) };


          // extensionAppBizData Field Functions 
          bool hasExtensionAppBizData() const { return this->extensionAppBizData_ != nullptr;};
          void deleteExtensionAppBizData() { this->extensionAppBizData_ = nullptr;};
          inline string getExtensionAppBizData() const { DARABONBA_PTR_GET_DEFAULT(extensionAppBizData_, "") };
          inline MoziConfExtensionAppSettings& setExtensionAppBizData(string extensionAppBizData) { DARABONBA_PTR_SET_VALUE(extensionAppBizData_, extensionAppBizData) };


        protected:
          shared_ptr<int32_t> autoOpenMode_ {};
          shared_ptr<string> coolAppCode_ {};
          shared_ptr<string> extensionAppBizData_ {};
        };

        virtual bool empty() const override { return this->cloudRecordOwnerUserId_ == nullptr
        && this->enableChat_ == nullptr && this->enableWebAnonymousJoin_ == nullptr && this->joinBeforeHost_ == nullptr && this->lockMediaStatusMicMute_ == nullptr && this->lockNick_ == nullptr
        && this->minutesOwnerUserId_ == nullptr && this->moziConfExtensionAppSettings_ == nullptr && this->pushAllMeetingRecords_ == nullptr && this->pushCloudRecordCard_ == nullptr && this->pushMinutesCard_ == nullptr
        && this->waitingRoom_ == nullptr; };
        // cloudRecordOwnerUserId Field Functions 
        bool hasCloudRecordOwnerUserId() const { return this->cloudRecordOwnerUserId_ != nullptr;};
        void deleteCloudRecordOwnerUserId() { this->cloudRecordOwnerUserId_ = nullptr;};
        inline string getCloudRecordOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(cloudRecordOwnerUserId_, "") };
        inline MoziConfVirtualExtraSetting& setCloudRecordOwnerUserId(string cloudRecordOwnerUserId) { DARABONBA_PTR_SET_VALUE(cloudRecordOwnerUserId_, cloudRecordOwnerUserId) };


        // enableChat Field Functions 
        bool hasEnableChat() const { return this->enableChat_ != nullptr;};
        void deleteEnableChat() { this->enableChat_ = nullptr;};
        inline int32_t getEnableChat() const { DARABONBA_PTR_GET_DEFAULT(enableChat_, 0) };
        inline MoziConfVirtualExtraSetting& setEnableChat(int32_t enableChat) { DARABONBA_PTR_SET_VALUE(enableChat_, enableChat) };


        // enableWebAnonymousJoin Field Functions 
        bool hasEnableWebAnonymousJoin() const { return this->enableWebAnonymousJoin_ != nullptr;};
        void deleteEnableWebAnonymousJoin() { this->enableWebAnonymousJoin_ = nullptr;};
        inline bool getEnableWebAnonymousJoin() const { DARABONBA_PTR_GET_DEFAULT(enableWebAnonymousJoin_, false) };
        inline MoziConfVirtualExtraSetting& setEnableWebAnonymousJoin(bool enableWebAnonymousJoin) { DARABONBA_PTR_SET_VALUE(enableWebAnonymousJoin_, enableWebAnonymousJoin) };


        // joinBeforeHost Field Functions 
        bool hasJoinBeforeHost() const { return this->joinBeforeHost_ != nullptr;};
        void deleteJoinBeforeHost() { this->joinBeforeHost_ = nullptr;};
        inline int32_t getJoinBeforeHost() const { DARABONBA_PTR_GET_DEFAULT(joinBeforeHost_, 0) };
        inline MoziConfVirtualExtraSetting& setJoinBeforeHost(int32_t joinBeforeHost) { DARABONBA_PTR_SET_VALUE(joinBeforeHost_, joinBeforeHost) };


        // lockMediaStatusMicMute Field Functions 
        bool hasLockMediaStatusMicMute() const { return this->lockMediaStatusMicMute_ != nullptr;};
        void deleteLockMediaStatusMicMute() { this->lockMediaStatusMicMute_ = nullptr;};
        inline int32_t getLockMediaStatusMicMute() const { DARABONBA_PTR_GET_DEFAULT(lockMediaStatusMicMute_, 0) };
        inline MoziConfVirtualExtraSetting& setLockMediaStatusMicMute(int32_t lockMediaStatusMicMute) { DARABONBA_PTR_SET_VALUE(lockMediaStatusMicMute_, lockMediaStatusMicMute) };


        // lockNick Field Functions 
        bool hasLockNick() const { return this->lockNick_ != nullptr;};
        void deleteLockNick() { this->lockNick_ = nullptr;};
        inline int32_t getLockNick() const { DARABONBA_PTR_GET_DEFAULT(lockNick_, 0) };
        inline MoziConfVirtualExtraSetting& setLockNick(int32_t lockNick) { DARABONBA_PTR_SET_VALUE(lockNick_, lockNick) };


        // minutesOwnerUserId Field Functions 
        bool hasMinutesOwnerUserId() const { return this->minutesOwnerUserId_ != nullptr;};
        void deleteMinutesOwnerUserId() { this->minutesOwnerUserId_ = nullptr;};
        inline string getMinutesOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(minutesOwnerUserId_, "") };
        inline MoziConfVirtualExtraSetting& setMinutesOwnerUserId(string minutesOwnerUserId) { DARABONBA_PTR_SET_VALUE(minutesOwnerUserId_, minutesOwnerUserId) };


        // moziConfExtensionAppSettings Field Functions 
        bool hasMoziConfExtensionAppSettings() const { return this->moziConfExtensionAppSettings_ != nullptr;};
        void deleteMoziConfExtensionAppSettings() { this->moziConfExtensionAppSettings_ = nullptr;};
        inline const vector<MoziConfVirtualExtraSetting::MoziConfExtensionAppSettings> & getMoziConfExtensionAppSettings() const { DARABONBA_PTR_GET_CONST(moziConfExtensionAppSettings_, vector<MoziConfVirtualExtraSetting::MoziConfExtensionAppSettings>) };
        inline vector<MoziConfVirtualExtraSetting::MoziConfExtensionAppSettings> getMoziConfExtensionAppSettings() { DARABONBA_PTR_GET(moziConfExtensionAppSettings_, vector<MoziConfVirtualExtraSetting::MoziConfExtensionAppSettings>) };
        inline MoziConfVirtualExtraSetting& setMoziConfExtensionAppSettings(const vector<MoziConfVirtualExtraSetting::MoziConfExtensionAppSettings> & moziConfExtensionAppSettings) { DARABONBA_PTR_SET_VALUE(moziConfExtensionAppSettings_, moziConfExtensionAppSettings) };
        inline MoziConfVirtualExtraSetting& setMoziConfExtensionAppSettings(vector<MoziConfVirtualExtraSetting::MoziConfExtensionAppSettings> && moziConfExtensionAppSettings) { DARABONBA_PTR_SET_RVALUE(moziConfExtensionAppSettings_, moziConfExtensionAppSettings) };


        // pushAllMeetingRecords Field Functions 
        bool hasPushAllMeetingRecords() const { return this->pushAllMeetingRecords_ != nullptr;};
        void deletePushAllMeetingRecords() { this->pushAllMeetingRecords_ = nullptr;};
        inline bool getPushAllMeetingRecords() const { DARABONBA_PTR_GET_DEFAULT(pushAllMeetingRecords_, false) };
        inline MoziConfVirtualExtraSetting& setPushAllMeetingRecords(bool pushAllMeetingRecords) { DARABONBA_PTR_SET_VALUE(pushAllMeetingRecords_, pushAllMeetingRecords) };


        // pushCloudRecordCard Field Functions 
        bool hasPushCloudRecordCard() const { return this->pushCloudRecordCard_ != nullptr;};
        void deletePushCloudRecordCard() { this->pushCloudRecordCard_ = nullptr;};
        inline bool getPushCloudRecordCard() const { DARABONBA_PTR_GET_DEFAULT(pushCloudRecordCard_, false) };
        inline MoziConfVirtualExtraSetting& setPushCloudRecordCard(bool pushCloudRecordCard) { DARABONBA_PTR_SET_VALUE(pushCloudRecordCard_, pushCloudRecordCard) };


        // pushMinutesCard Field Functions 
        bool hasPushMinutesCard() const { return this->pushMinutesCard_ != nullptr;};
        void deletePushMinutesCard() { this->pushMinutesCard_ = nullptr;};
        inline bool getPushMinutesCard() const { DARABONBA_PTR_GET_DEFAULT(pushMinutesCard_, false) };
        inline MoziConfVirtualExtraSetting& setPushMinutesCard(bool pushMinutesCard) { DARABONBA_PTR_SET_VALUE(pushMinutesCard_, pushMinutesCard) };


        // waitingRoom Field Functions 
        bool hasWaitingRoom() const { return this->waitingRoom_ != nullptr;};
        void deleteWaitingRoom() { this->waitingRoom_ = nullptr;};
        inline int32_t getWaitingRoom() const { DARABONBA_PTR_GET_DEFAULT(waitingRoom_, 0) };
        inline MoziConfVirtualExtraSetting& setWaitingRoom(int32_t waitingRoom) { DARABONBA_PTR_SET_VALUE(waitingRoom_, waitingRoom) };


      protected:
        shared_ptr<string> cloudRecordOwnerUserId_ {};
        shared_ptr<int32_t> enableChat_ {};
        shared_ptr<bool> enableWebAnonymousJoin_ {};
        shared_ptr<int32_t> joinBeforeHost_ {};
        shared_ptr<int32_t> lockMediaStatusMicMute_ {};
        shared_ptr<int32_t> lockNick_ {};
        shared_ptr<string> minutesOwnerUserId_ {};
        shared_ptr<vector<MoziConfVirtualExtraSetting::MoziConfExtensionAppSettings>> moziConfExtensionAppSettings_ {};
        shared_ptr<bool> pushAllMeetingRecords_ {};
        shared_ptr<bool> pushCloudRecordCard_ {};
        shared_ptr<bool> pushMinutesCard_ {};
        shared_ptr<int32_t> waitingRoom_ {};
      };

      class MoziConfOpenRecordSetting : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MoziConfOpenRecordSetting& obj) { 
          DARABONBA_PTR_TO_JSON(IsFollowHost, isFollowHost_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(RecordAutoStart, recordAutoStart_);
          DARABONBA_PTR_TO_JSON(RecordAutoStartType, recordAutoStartType_);
        };
        friend void from_json(const Darabonba::Json& j, MoziConfOpenRecordSetting& obj) { 
          DARABONBA_PTR_FROM_JSON(IsFollowHost, isFollowHost_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(RecordAutoStart, recordAutoStart_);
          DARABONBA_PTR_FROM_JSON(RecordAutoStartType, recordAutoStartType_);
        };
        MoziConfOpenRecordSetting() = default ;
        MoziConfOpenRecordSetting(const MoziConfOpenRecordSetting &) = default ;
        MoziConfOpenRecordSetting(MoziConfOpenRecordSetting &&) = default ;
        MoziConfOpenRecordSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MoziConfOpenRecordSetting() = default ;
        MoziConfOpenRecordSetting& operator=(const MoziConfOpenRecordSetting &) = default ;
        MoziConfOpenRecordSetting& operator=(MoziConfOpenRecordSetting &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isFollowHost_ == nullptr
        && this->mode_ == nullptr && this->recordAutoStart_ == nullptr && this->recordAutoStartType_ == nullptr; };
        // isFollowHost Field Functions 
        bool hasIsFollowHost() const { return this->isFollowHost_ != nullptr;};
        void deleteIsFollowHost() { this->isFollowHost_ = nullptr;};
        inline bool getIsFollowHost() const { DARABONBA_PTR_GET_DEFAULT(isFollowHost_, false) };
        inline MoziConfOpenRecordSetting& setIsFollowHost(bool isFollowHost) { DARABONBA_PTR_SET_VALUE(isFollowHost_, isFollowHost) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline MoziConfOpenRecordSetting& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // recordAutoStart Field Functions 
        bool hasRecordAutoStart() const { return this->recordAutoStart_ != nullptr;};
        void deleteRecordAutoStart() { this->recordAutoStart_ = nullptr;};
        inline int32_t getRecordAutoStart() const { DARABONBA_PTR_GET_DEFAULT(recordAutoStart_, 0) };
        inline MoziConfOpenRecordSetting& setRecordAutoStart(int32_t recordAutoStart) { DARABONBA_PTR_SET_VALUE(recordAutoStart_, recordAutoStart) };


        // recordAutoStartType Field Functions 
        bool hasRecordAutoStartType() const { return this->recordAutoStartType_ != nullptr;};
        void deleteRecordAutoStartType() { this->recordAutoStartType_ = nullptr;};
        inline int32_t getRecordAutoStartType() const { DARABONBA_PTR_GET_DEFAULT(recordAutoStartType_, 0) };
        inline MoziConfOpenRecordSetting& setRecordAutoStartType(int32_t recordAutoStartType) { DARABONBA_PTR_SET_VALUE(recordAutoStartType_, recordAutoStartType) };


      protected:
        shared_ptr<bool> isFollowHost_ {};
        shared_ptr<string> mode_ {};
        shared_ptr<int32_t> recordAutoStart_ {};
        shared_ptr<int32_t> recordAutoStartType_ {};
      };

      virtual bool empty() const override { return this->cohostUserIds_ == nullptr
        && this->confAllowedCorpId_ == nullptr && this->hostUserId_ == nullptr && this->lockRoom_ == nullptr && this->moziConfOpenRecordSetting_ == nullptr && this->moziConfVirtualExtraSetting_ == nullptr
        && this->muteOnJoin_ == nullptr && this->screenShareForbidden_ == nullptr; };
      // cohostUserIds Field Functions 
      bool hasCohostUserIds() const { return this->cohostUserIds_ != nullptr;};
      void deleteCohostUserIds() { this->cohostUserIds_ = nullptr;};
      inline const vector<string> & getCohostUserIds() const { DARABONBA_PTR_GET_CONST(cohostUserIds_, vector<string>) };
      inline vector<string> getCohostUserIds() { DARABONBA_PTR_GET(cohostUserIds_, vector<string>) };
      inline ScheduleConfSettingModel& setCohostUserIds(const vector<string> & cohostUserIds) { DARABONBA_PTR_SET_VALUE(cohostUserIds_, cohostUserIds) };
      inline ScheduleConfSettingModel& setCohostUserIds(vector<string> && cohostUserIds) { DARABONBA_PTR_SET_RVALUE(cohostUserIds_, cohostUserIds) };


      // confAllowedCorpId Field Functions 
      bool hasConfAllowedCorpId() const { return this->confAllowedCorpId_ != nullptr;};
      void deleteConfAllowedCorpId() { this->confAllowedCorpId_ = nullptr;};
      inline string getConfAllowedCorpId() const { DARABONBA_PTR_GET_DEFAULT(confAllowedCorpId_, "") };
      inline ScheduleConfSettingModel& setConfAllowedCorpId(string confAllowedCorpId) { DARABONBA_PTR_SET_VALUE(confAllowedCorpId_, confAllowedCorpId) };


      // hostUserId Field Functions 
      bool hasHostUserId() const { return this->hostUserId_ != nullptr;};
      void deleteHostUserId() { this->hostUserId_ = nullptr;};
      inline string getHostUserId() const { DARABONBA_PTR_GET_DEFAULT(hostUserId_, "") };
      inline ScheduleConfSettingModel& setHostUserId(string hostUserId) { DARABONBA_PTR_SET_VALUE(hostUserId_, hostUserId) };


      // lockRoom Field Functions 
      bool hasLockRoom() const { return this->lockRoom_ != nullptr;};
      void deleteLockRoom() { this->lockRoom_ = nullptr;};
      inline int32_t getLockRoom() const { DARABONBA_PTR_GET_DEFAULT(lockRoom_, 0) };
      inline ScheduleConfSettingModel& setLockRoom(int32_t lockRoom) { DARABONBA_PTR_SET_VALUE(lockRoom_, lockRoom) };


      // moziConfOpenRecordSetting Field Functions 
      bool hasMoziConfOpenRecordSetting() const { return this->moziConfOpenRecordSetting_ != nullptr;};
      void deleteMoziConfOpenRecordSetting() { this->moziConfOpenRecordSetting_ = nullptr;};
      inline const ScheduleConfSettingModel::MoziConfOpenRecordSetting & getMoziConfOpenRecordSetting() const { DARABONBA_PTR_GET_CONST(moziConfOpenRecordSetting_, ScheduleConfSettingModel::MoziConfOpenRecordSetting) };
      inline ScheduleConfSettingModel::MoziConfOpenRecordSetting getMoziConfOpenRecordSetting() { DARABONBA_PTR_GET(moziConfOpenRecordSetting_, ScheduleConfSettingModel::MoziConfOpenRecordSetting) };
      inline ScheduleConfSettingModel& setMoziConfOpenRecordSetting(const ScheduleConfSettingModel::MoziConfOpenRecordSetting & moziConfOpenRecordSetting) { DARABONBA_PTR_SET_VALUE(moziConfOpenRecordSetting_, moziConfOpenRecordSetting) };
      inline ScheduleConfSettingModel& setMoziConfOpenRecordSetting(ScheduleConfSettingModel::MoziConfOpenRecordSetting && moziConfOpenRecordSetting) { DARABONBA_PTR_SET_RVALUE(moziConfOpenRecordSetting_, moziConfOpenRecordSetting) };


      // moziConfVirtualExtraSetting Field Functions 
      bool hasMoziConfVirtualExtraSetting() const { return this->moziConfVirtualExtraSetting_ != nullptr;};
      void deleteMoziConfVirtualExtraSetting() { this->moziConfVirtualExtraSetting_ = nullptr;};
      inline const ScheduleConfSettingModel::MoziConfVirtualExtraSetting & getMoziConfVirtualExtraSetting() const { DARABONBA_PTR_GET_CONST(moziConfVirtualExtraSetting_, ScheduleConfSettingModel::MoziConfVirtualExtraSetting) };
      inline ScheduleConfSettingModel::MoziConfVirtualExtraSetting getMoziConfVirtualExtraSetting() { DARABONBA_PTR_GET(moziConfVirtualExtraSetting_, ScheduleConfSettingModel::MoziConfVirtualExtraSetting) };
      inline ScheduleConfSettingModel& setMoziConfVirtualExtraSetting(const ScheduleConfSettingModel::MoziConfVirtualExtraSetting & moziConfVirtualExtraSetting) { DARABONBA_PTR_SET_VALUE(moziConfVirtualExtraSetting_, moziConfVirtualExtraSetting) };
      inline ScheduleConfSettingModel& setMoziConfVirtualExtraSetting(ScheduleConfSettingModel::MoziConfVirtualExtraSetting && moziConfVirtualExtraSetting) { DARABONBA_PTR_SET_RVALUE(moziConfVirtualExtraSetting_, moziConfVirtualExtraSetting) };


      // muteOnJoin Field Functions 
      bool hasMuteOnJoin() const { return this->muteOnJoin_ != nullptr;};
      void deleteMuteOnJoin() { this->muteOnJoin_ = nullptr;};
      inline int32_t getMuteOnJoin() const { DARABONBA_PTR_GET_DEFAULT(muteOnJoin_, 0) };
      inline ScheduleConfSettingModel& setMuteOnJoin(int32_t muteOnJoin) { DARABONBA_PTR_SET_VALUE(muteOnJoin_, muteOnJoin) };


      // screenShareForbidden Field Functions 
      bool hasScreenShareForbidden() const { return this->screenShareForbidden_ != nullptr;};
      void deleteScreenShareForbidden() { this->screenShareForbidden_ = nullptr;};
      inline int32_t getScreenShareForbidden() const { DARABONBA_PTR_GET_DEFAULT(screenShareForbidden_, 0) };
      inline ScheduleConfSettingModel& setScreenShareForbidden(int32_t screenShareForbidden) { DARABONBA_PTR_SET_VALUE(screenShareForbidden_, screenShareForbidden) };


    protected:
      shared_ptr<vector<string>> cohostUserIds_ {};
      shared_ptr<string> confAllowedCorpId_ {};
      shared_ptr<string> hostUserId_ {};
      shared_ptr<int32_t> lockRoom_ {};
      shared_ptr<ScheduleConfSettingModel::MoziConfOpenRecordSetting> moziConfOpenRecordSetting_ {};
      shared_ptr<ScheduleConfSettingModel::MoziConfVirtualExtraSetting> moziConfVirtualExtraSetting_ {};
      shared_ptr<int32_t> muteOnJoin_ {};
      shared_ptr<int32_t> screenShareForbidden_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->scheduleConfSettingModel_ == nullptr && this->startTime_ == nullptr && this->tenantContext_ == nullptr && this->title_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateScheduleConferenceRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // scheduleConfSettingModel Field Functions 
    bool hasScheduleConfSettingModel() const { return this->scheduleConfSettingModel_ != nullptr;};
    void deleteScheduleConfSettingModel() { this->scheduleConfSettingModel_ = nullptr;};
    inline const CreateScheduleConferenceRequest::ScheduleConfSettingModel & getScheduleConfSettingModel() const { DARABONBA_PTR_GET_CONST(scheduleConfSettingModel_, CreateScheduleConferenceRequest::ScheduleConfSettingModel) };
    inline CreateScheduleConferenceRequest::ScheduleConfSettingModel getScheduleConfSettingModel() { DARABONBA_PTR_GET(scheduleConfSettingModel_, CreateScheduleConferenceRequest::ScheduleConfSettingModel) };
    inline CreateScheduleConferenceRequest& setScheduleConfSettingModel(const CreateScheduleConferenceRequest::ScheduleConfSettingModel & scheduleConfSettingModel) { DARABONBA_PTR_SET_VALUE(scheduleConfSettingModel_, scheduleConfSettingModel) };
    inline CreateScheduleConferenceRequest& setScheduleConfSettingModel(CreateScheduleConferenceRequest::ScheduleConfSettingModel && scheduleConfSettingModel) { DARABONBA_PTR_SET_RVALUE(scheduleConfSettingModel_, scheduleConfSettingModel) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateScheduleConferenceRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateScheduleConferenceRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateScheduleConferenceRequest::TenantContext) };
    inline CreateScheduleConferenceRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateScheduleConferenceRequest::TenantContext) };
    inline CreateScheduleConferenceRequest& setTenantContext(const CreateScheduleConferenceRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateScheduleConferenceRequest& setTenantContext(CreateScheduleConferenceRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateScheduleConferenceRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<CreateScheduleConferenceRequest::ScheduleConfSettingModel> scheduleConfSettingModel_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<CreateScheduleConferenceRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
