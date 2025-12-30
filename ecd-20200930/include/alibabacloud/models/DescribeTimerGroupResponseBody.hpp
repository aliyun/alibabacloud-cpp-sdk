// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETIMERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETIMERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeTimerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTimerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTimerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTimerGroupResponseBody() = default ;
    DescribeTimerGroupResponseBody(const DescribeTimerGroupResponseBody &) = default ;
    DescribeTimerGroupResponseBody(DescribeTimerGroupResponseBody &&) = default ;
    DescribeTimerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTimerGroupResponseBody() = default ;
    DescribeTimerGroupResponseBody& operator=(const DescribeTimerGroupResponseBody &) = default ;
    DescribeTimerGroupResponseBody& operator=(DescribeTimerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
        DARABONBA_PTR_TO_JSON(BindCountMap, bindCountMap_);
        DARABONBA_PTR_TO_JSON(ConfigTimers, configTimers_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(InnerTimerDesc, innerTimerDesc_);
        DARABONBA_PTR_TO_JSON(InnerTimerName, innerTimerName_);
        DARABONBA_PTR_TO_JSON(IsBind, isBind_);
        DARABONBA_PTR_TO_JSON(IsUpdate, isUpdate_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
        DARABONBA_PTR_FROM_JSON(BindCountMap, bindCountMap_);
        DARABONBA_PTR_FROM_JSON(ConfigTimers, configTimers_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(InnerTimerDesc, innerTimerDesc_);
        DARABONBA_PTR_FROM_JSON(InnerTimerName, innerTimerName_);
        DARABONBA_PTR_FROM_JSON(IsBind, isBind_);
        DARABONBA_PTR_FROM_JSON(IsUpdate, isUpdate_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigTimers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigTimers& obj) { 
          DARABONBA_PTR_TO_JSON(AllowClientSetting, allowClientSetting_);
          DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(Enforce, enforce_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(NotificationTime, notificationTime_);
          DARABONBA_PTR_TO_JSON(OperationType, operationType_);
          DARABONBA_PTR_TO_JSON(ProcessWhitelist, processWhitelist_);
          DARABONBA_PTR_TO_JSON(ResetType, resetType_);
          DARABONBA_PTR_TO_JSON(SegmentTimers, segmentTimers_);
          DARABONBA_PTR_TO_JSON(TimerType, timerType_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigTimers& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowClientSetting, allowClientSetting_);
          DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(NotificationTime, notificationTime_);
          DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
          DARABONBA_PTR_FROM_JSON(ProcessWhitelist, processWhitelist_);
          DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
          DARABONBA_PTR_FROM_JSON(SegmentTimers, segmentTimers_);
          DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        };
        ConfigTimers() = default ;
        ConfigTimers(const ConfigTimers &) = default ;
        ConfigTimers(ConfigTimers &&) = default ;
        ConfigTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigTimers() = default ;
        ConfigTimers& operator=(const ConfigTimers &) = default ;
        ConfigTimers& operator=(ConfigTimers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SegmentTimers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentTimers& obj) { 
            DARABONBA_PTR_TO_JSON(AppointmentTimer, appointmentTimer_);
            DARABONBA_PTR_TO_JSON(EndCronExpression, endCronExpression_);
            DARABONBA_PTR_TO_JSON(Enforce, enforce_);
            DARABONBA_PTR_TO_JSON(ImageId, imageId_);
            DARABONBA_PTR_TO_JSON(Interval, interval_);
            DARABONBA_PTR_TO_JSON(LockScreenTime, lockScreenTime_);
            DARABONBA_PTR_TO_JSON(NotificationTime, notificationTime_);
            DARABONBA_PTR_TO_JSON(OperationType, operationType_);
            DARABONBA_PTR_TO_JSON(ProcessWhitelist, processWhitelist_);
            DARABONBA_PTR_TO_JSON(ResetType, resetType_);
            DARABONBA_PTR_TO_JSON(StartCronExpression, startCronExpression_);
            DARABONBA_PTR_TO_JSON(TimerOrder, timerOrder_);
            DARABONBA_PTR_TO_JSON(Timezone, timezone_);
            DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentTimers& obj) { 
            DARABONBA_PTR_FROM_JSON(AppointmentTimer, appointmentTimer_);
            DARABONBA_PTR_FROM_JSON(EndCronExpression, endCronExpression_);
            DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
            DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
            DARABONBA_PTR_FROM_JSON(Interval, interval_);
            DARABONBA_PTR_FROM_JSON(LockScreenTime, lockScreenTime_);
            DARABONBA_PTR_FROM_JSON(NotificationTime, notificationTime_);
            DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
            DARABONBA_PTR_FROM_JSON(ProcessWhitelist, processWhitelist_);
            DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
            DARABONBA_PTR_FROM_JSON(StartCronExpression, startCronExpression_);
            DARABONBA_PTR_FROM_JSON(TimerOrder, timerOrder_);
            DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
            DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
          };
          SegmentTimers() = default ;
          SegmentTimers(const SegmentTimers &) = default ;
          SegmentTimers(SegmentTimers &&) = default ;
          SegmentTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentTimers() = default ;
          SegmentTimers& operator=(const SegmentTimers &) = default ;
          SegmentTimers& operator=(SegmentTimers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appointmentTimer_ == nullptr
        && this->endCronExpression_ == nullptr && this->enforce_ == nullptr && this->imageId_ == nullptr && this->interval_ == nullptr && this->lockScreenTime_ == nullptr
        && this->notificationTime_ == nullptr && this->operationType_ == nullptr && this->processWhitelist_ == nullptr && this->resetType_ == nullptr && this->startCronExpression_ == nullptr
        && this->timerOrder_ == nullptr && this->timezone_ == nullptr && this->triggerType_ == nullptr; };
          // appointmentTimer Field Functions 
          bool hasAppointmentTimer() const { return this->appointmentTimer_ != nullptr;};
          void deleteAppointmentTimer() { this->appointmentTimer_ = nullptr;};
          inline int64_t getAppointmentTimer() const { DARABONBA_PTR_GET_DEFAULT(appointmentTimer_, 0L) };
          inline SegmentTimers& setAppointmentTimer(int64_t appointmentTimer) { DARABONBA_PTR_SET_VALUE(appointmentTimer_, appointmentTimer) };


          // endCronExpression Field Functions 
          bool hasEndCronExpression() const { return this->endCronExpression_ != nullptr;};
          void deleteEndCronExpression() { this->endCronExpression_ = nullptr;};
          inline string getEndCronExpression() const { DARABONBA_PTR_GET_DEFAULT(endCronExpression_, "") };
          inline SegmentTimers& setEndCronExpression(string endCronExpression) { DARABONBA_PTR_SET_VALUE(endCronExpression_, endCronExpression) };


          // enforce Field Functions 
          bool hasEnforce() const { return this->enforce_ != nullptr;};
          void deleteEnforce() { this->enforce_ = nullptr;};
          inline bool getEnforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
          inline SegmentTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


          // imageId Field Functions 
          bool hasImageId() const { return this->imageId_ != nullptr;};
          void deleteImageId() { this->imageId_ = nullptr;};
          inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
          inline SegmentTimers& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


          // interval Field Functions 
          bool hasInterval() const { return this->interval_ != nullptr;};
          void deleteInterval() { this->interval_ = nullptr;};
          inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
          inline SegmentTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


          // lockScreenTime Field Functions 
          bool hasLockScreenTime() const { return this->lockScreenTime_ != nullptr;};
          void deleteLockScreenTime() { this->lockScreenTime_ = nullptr;};
          inline int32_t getLockScreenTime() const { DARABONBA_PTR_GET_DEFAULT(lockScreenTime_, 0) };
          inline SegmentTimers& setLockScreenTime(int32_t lockScreenTime) { DARABONBA_PTR_SET_VALUE(lockScreenTime_, lockScreenTime) };


          // notificationTime Field Functions 
          bool hasNotificationTime() const { return this->notificationTime_ != nullptr;};
          void deleteNotificationTime() { this->notificationTime_ = nullptr;};
          inline int32_t getNotificationTime() const { DARABONBA_PTR_GET_DEFAULT(notificationTime_, 0) };
          inline SegmentTimers& setNotificationTime(int32_t notificationTime) { DARABONBA_PTR_SET_VALUE(notificationTime_, notificationTime) };


          // operationType Field Functions 
          bool hasOperationType() const { return this->operationType_ != nullptr;};
          void deleteOperationType() { this->operationType_ = nullptr;};
          inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
          inline SegmentTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


          // processWhitelist Field Functions 
          bool hasProcessWhitelist() const { return this->processWhitelist_ != nullptr;};
          void deleteProcessWhitelist() { this->processWhitelist_ = nullptr;};
          inline const vector<string> & getProcessWhitelist() const { DARABONBA_PTR_GET_CONST(processWhitelist_, vector<string>) };
          inline vector<string> getProcessWhitelist() { DARABONBA_PTR_GET(processWhitelist_, vector<string>) };
          inline SegmentTimers& setProcessWhitelist(const vector<string> & processWhitelist) { DARABONBA_PTR_SET_VALUE(processWhitelist_, processWhitelist) };
          inline SegmentTimers& setProcessWhitelist(vector<string> && processWhitelist) { DARABONBA_PTR_SET_RVALUE(processWhitelist_, processWhitelist) };


          // resetType Field Functions 
          bool hasResetType() const { return this->resetType_ != nullptr;};
          void deleteResetType() { this->resetType_ = nullptr;};
          inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
          inline SegmentTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


          // startCronExpression Field Functions 
          bool hasStartCronExpression() const { return this->startCronExpression_ != nullptr;};
          void deleteStartCronExpression() { this->startCronExpression_ = nullptr;};
          inline string getStartCronExpression() const { DARABONBA_PTR_GET_DEFAULT(startCronExpression_, "") };
          inline SegmentTimers& setStartCronExpression(string startCronExpression) { DARABONBA_PTR_SET_VALUE(startCronExpression_, startCronExpression) };


          // timerOrder Field Functions 
          bool hasTimerOrder() const { return this->timerOrder_ != nullptr;};
          void deleteTimerOrder() { this->timerOrder_ = nullptr;};
          inline int32_t getTimerOrder() const { DARABONBA_PTR_GET_DEFAULT(timerOrder_, 0) };
          inline SegmentTimers& setTimerOrder(int32_t timerOrder) { DARABONBA_PTR_SET_VALUE(timerOrder_, timerOrder) };


          // timezone Field Functions 
          bool hasTimezone() const { return this->timezone_ != nullptr;};
          void deleteTimezone() { this->timezone_ = nullptr;};
          inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
          inline SegmentTimers& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


          // triggerType Field Functions 
          bool hasTriggerType() const { return this->triggerType_ != nullptr;};
          void deleteTriggerType() { this->triggerType_ = nullptr;};
          inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
          inline SegmentTimers& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        protected:
          shared_ptr<int64_t> appointmentTimer_ {};
          shared_ptr<string> endCronExpression_ {};
          shared_ptr<bool> enforce_ {};
          shared_ptr<string> imageId_ {};
          shared_ptr<int32_t> interval_ {};
          shared_ptr<int32_t> lockScreenTime_ {};
          shared_ptr<int32_t> notificationTime_ {};
          shared_ptr<string> operationType_ {};
          shared_ptr<vector<string>> processWhitelist_ {};
          shared_ptr<string> resetType_ {};
          shared_ptr<string> startCronExpression_ {};
          shared_ptr<int32_t> timerOrder_ {};
          shared_ptr<string> timezone_ {};
          shared_ptr<string> triggerType_ {};
        };

        virtual bool empty() const override { return this->allowClientSetting_ == nullptr
        && this->cronExpression_ == nullptr && this->enforce_ == nullptr && this->interval_ == nullptr && this->notificationTime_ == nullptr && this->operationType_ == nullptr
        && this->processWhitelist_ == nullptr && this->resetType_ == nullptr && this->segmentTimers_ == nullptr && this->timerType_ == nullptr && this->triggerType_ == nullptr; };
        // allowClientSetting Field Functions 
        bool hasAllowClientSetting() const { return this->allowClientSetting_ != nullptr;};
        void deleteAllowClientSetting() { this->allowClientSetting_ = nullptr;};
        inline bool getAllowClientSetting() const { DARABONBA_PTR_GET_DEFAULT(allowClientSetting_, false) };
        inline ConfigTimers& setAllowClientSetting(bool allowClientSetting) { DARABONBA_PTR_SET_VALUE(allowClientSetting_, allowClientSetting) };


        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline ConfigTimers& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // enforce Field Functions 
        bool hasEnforce() const { return this->enforce_ != nullptr;};
        void deleteEnforce() { this->enforce_ = nullptr;};
        inline bool getEnforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
        inline ConfigTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline ConfigTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // notificationTime Field Functions 
        bool hasNotificationTime() const { return this->notificationTime_ != nullptr;};
        void deleteNotificationTime() { this->notificationTime_ = nullptr;};
        inline int32_t getNotificationTime() const { DARABONBA_PTR_GET_DEFAULT(notificationTime_, 0) };
        inline ConfigTimers& setNotificationTime(int32_t notificationTime) { DARABONBA_PTR_SET_VALUE(notificationTime_, notificationTime) };


        // operationType Field Functions 
        bool hasOperationType() const { return this->operationType_ != nullptr;};
        void deleteOperationType() { this->operationType_ = nullptr;};
        inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
        inline ConfigTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


        // processWhitelist Field Functions 
        bool hasProcessWhitelist() const { return this->processWhitelist_ != nullptr;};
        void deleteProcessWhitelist() { this->processWhitelist_ = nullptr;};
        inline const vector<string> & getProcessWhitelist() const { DARABONBA_PTR_GET_CONST(processWhitelist_, vector<string>) };
        inline vector<string> getProcessWhitelist() { DARABONBA_PTR_GET(processWhitelist_, vector<string>) };
        inline ConfigTimers& setProcessWhitelist(const vector<string> & processWhitelist) { DARABONBA_PTR_SET_VALUE(processWhitelist_, processWhitelist) };
        inline ConfigTimers& setProcessWhitelist(vector<string> && processWhitelist) { DARABONBA_PTR_SET_RVALUE(processWhitelist_, processWhitelist) };


        // resetType Field Functions 
        bool hasResetType() const { return this->resetType_ != nullptr;};
        void deleteResetType() { this->resetType_ = nullptr;};
        inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
        inline ConfigTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


        // segmentTimers Field Functions 
        bool hasSegmentTimers() const { return this->segmentTimers_ != nullptr;};
        void deleteSegmentTimers() { this->segmentTimers_ = nullptr;};
        inline const vector<ConfigTimers::SegmentTimers> & getSegmentTimers() const { DARABONBA_PTR_GET_CONST(segmentTimers_, vector<ConfigTimers::SegmentTimers>) };
        inline vector<ConfigTimers::SegmentTimers> getSegmentTimers() { DARABONBA_PTR_GET(segmentTimers_, vector<ConfigTimers::SegmentTimers>) };
        inline ConfigTimers& setSegmentTimers(const vector<ConfigTimers::SegmentTimers> & segmentTimers) { DARABONBA_PTR_SET_VALUE(segmentTimers_, segmentTimers) };
        inline ConfigTimers& setSegmentTimers(vector<ConfigTimers::SegmentTimers> && segmentTimers) { DARABONBA_PTR_SET_RVALUE(segmentTimers_, segmentTimers) };


        // timerType Field Functions 
        bool hasTimerType() const { return this->timerType_ != nullptr;};
        void deleteTimerType() { this->timerType_ = nullptr;};
        inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
        inline ConfigTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
        inline ConfigTimers& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      protected:
        // Indicates whether end users can configure scheduled tasks.
        shared_ptr<bool> allowClientSetting_ {};
        // The CRON expression for the scheduled task.
        shared_ptr<string> cronExpression_ {};
        // Specifies whether to forcibly execute the scheduled task. A value of true specifies the scheduled task will run forcefully, ignoring the cloud computer and connection status.
        shared_ptr<bool> enforce_ {};
        // The interval at which the scheduled task is executed. Unit: minutes.
        shared_ptr<int32_t> interval_ {};
        shared_ptr<int32_t> notificationTime_ {};
        // The type of the scheduled disconnection task.
        // 
        // Valid values:
        // 
        // *   Hibernate: scheduled hibernation.
        // *   Shutdown: scheduled shutdown.
        shared_ptr<string> operationType_ {};
        // The process whitelist. If whitelisted processes are running, the scheduled task upon inactivity does not take effect.
        shared_ptr<vector<string>> processWhitelist_ {};
        // The reset operation of the scheduled task.
        // 
        // Valid values:
        // 
        // *   RESET_TYPE_SYSTEM: resets the system disk.
        // *   RESET_TYPE_USER_DISK: resets the data disk.
        // *   RESET_TYPE_BOTH: resets the system disk and data disk.
        shared_ptr<string> resetType_ {};
        shared_ptr<vector<ConfigTimers::SegmentTimers>> segmentTimers_ {};
        // The type of the scheduled task.
        // 
        // Valid values:
        // 
        // *   NoOperationDisconnect: scheduled disconnection upon inactivity.
        // *   NoConnect: scheduled disconnection upon specified operation (OperationType).
        // *   TimerBoot: scheduled start.
        // *   TimerReset: scheduled reset.
        // *   NoOperationShutdown: scheduled shutdown upon inactivity.
        // *   NoOperationHibernate: scheduled hibernation upon inactivity.
        // *   TimerShutdown: scheduled shutdown.
        // *   NoOperationReboot: scheduled restart upon inactivity.
        // *   TimerReboot: scheduled restart.
        shared_ptr<string> timerType_ {};
        // The method to trigger the scheduled task upon inactivity.
        // 
        // Valid values:
        // 
        // *   Advanced: intelligent detection.
        // *   Standard: standard detection.
        shared_ptr<string> triggerType_ {};
      };

      virtual bool empty() const override { return this->bindCount_ == nullptr
        && this->bindCountMap_ == nullptr && this->configTimers_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->innerTimerDesc_ == nullptr
        && this->innerTimerName_ == nullptr && this->isBind_ == nullptr && this->isUpdate_ == nullptr && this->name_ == nullptr && this->productType_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // bindCount Field Functions 
      bool hasBindCount() const { return this->bindCount_ != nullptr;};
      void deleteBindCount() { this->bindCount_ = nullptr;};
      inline int32_t getBindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0) };
      inline Data& setBindCount(int32_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


      // bindCountMap Field Functions 
      bool hasBindCountMap() const { return this->bindCountMap_ != nullptr;};
      void deleteBindCountMap() { this->bindCountMap_ = nullptr;};
      inline const map<string, int32_t> & getBindCountMap() const { DARABONBA_PTR_GET_CONST(bindCountMap_, map<string, int32_t>) };
      inline map<string, int32_t> getBindCountMap() { DARABONBA_PTR_GET(bindCountMap_, map<string, int32_t>) };
      inline Data& setBindCountMap(const map<string, int32_t> & bindCountMap) { DARABONBA_PTR_SET_VALUE(bindCountMap_, bindCountMap) };
      inline Data& setBindCountMap(map<string, int32_t> && bindCountMap) { DARABONBA_PTR_SET_RVALUE(bindCountMap_, bindCountMap) };


      // configTimers Field Functions 
      bool hasConfigTimers() const { return this->configTimers_ != nullptr;};
      void deleteConfigTimers() { this->configTimers_ = nullptr;};
      inline const vector<Data::ConfigTimers> & getConfigTimers() const { DARABONBA_PTR_GET_CONST(configTimers_, vector<Data::ConfigTimers>) };
      inline vector<Data::ConfigTimers> getConfigTimers() { DARABONBA_PTR_GET(configTimers_, vector<Data::ConfigTimers>) };
      inline Data& setConfigTimers(const vector<Data::ConfigTimers> & configTimers) { DARABONBA_PTR_SET_VALUE(configTimers_, configTimers) };
      inline Data& setConfigTimers(vector<Data::ConfigTimers> && configTimers) { DARABONBA_PTR_SET_RVALUE(configTimers_, configTimers) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // innerTimerDesc Field Functions 
      bool hasInnerTimerDesc() const { return this->innerTimerDesc_ != nullptr;};
      void deleteInnerTimerDesc() { this->innerTimerDesc_ = nullptr;};
      inline string getInnerTimerDesc() const { DARABONBA_PTR_GET_DEFAULT(innerTimerDesc_, "") };
      inline Data& setInnerTimerDesc(string innerTimerDesc) { DARABONBA_PTR_SET_VALUE(innerTimerDesc_, innerTimerDesc) };


      // innerTimerName Field Functions 
      bool hasInnerTimerName() const { return this->innerTimerName_ != nullptr;};
      void deleteInnerTimerName() { this->innerTimerName_ = nullptr;};
      inline string getInnerTimerName() const { DARABONBA_PTR_GET_DEFAULT(innerTimerName_, "") };
      inline Data& setInnerTimerName(string innerTimerName) { DARABONBA_PTR_SET_VALUE(innerTimerName_, innerTimerName) };


      // isBind Field Functions 
      bool hasIsBind() const { return this->isBind_ != nullptr;};
      void deleteIsBind() { this->isBind_ = nullptr;};
      inline bool getIsBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, false) };
      inline Data& setIsBind(bool isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


      // isUpdate Field Functions 
      bool hasIsUpdate() const { return this->isUpdate_ != nullptr;};
      void deleteIsUpdate() { this->isUpdate_ = nullptr;};
      inline bool getIsUpdate() const { DARABONBA_PTR_GET_DEFAULT(isUpdate_, false) };
      inline Data& setIsUpdate(bool isUpdate) { DARABONBA_PTR_SET_VALUE(isUpdate_, isUpdate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of resources that are bound to the configuration group.
      shared_ptr<int32_t> bindCount_ {};
      // The number of bound resources.
      shared_ptr<map<string, int32_t>> bindCountMap_ {};
      // The scheduled tasks.
      shared_ptr<vector<Data::ConfigTimers>> configTimers_ {};
      // The description of the configuration group.
      shared_ptr<string> description_ {};
      // The ID of the configuration group.
      shared_ptr<string> groupId_ {};
      shared_ptr<string> innerTimerDesc_ {};
      shared_ptr<string> innerTimerName_ {};
      shared_ptr<bool> isBind_ {};
      shared_ptr<bool> isUpdate_ {};
      // The name of the configuration group.
      shared_ptr<string> name_ {};
      // The service type of the configuration group.
      // 
      // Valid value:
      // 
      // *   CLOUD_DESKTOP: the cloud computer service.
      shared_ptr<string> productType_ {};
      // The state of the configuration group.
      // 
      // Valid values:
      // 
      // *   AVAILABLE: The configuration group is available.
      // *   UNAVAILABLE: The configuration group is deleted.
      // *   DELETING: The configuration group is being deleted.
      // *   UPDATING: The configuration group is being modified.
      shared_ptr<string> status_ {};
      // The type of the configuration group.
      // 
      // Valid value:
      // 
      // *   Timer: the scheduled task type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeTimerGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeTimerGroupResponseBody::Data) };
    inline DescribeTimerGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeTimerGroupResponseBody::Data) };
    inline DescribeTimerGroupResponseBody& setData(const DescribeTimerGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTimerGroupResponseBody& setData(DescribeTimerGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTimerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration group.
    shared_ptr<DescribeTimerGroupResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
