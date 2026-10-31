// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateScheduleMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduleMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduleMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateScheduleMonitorRequest() = default ;
    UpdateScheduleMonitorRequest(const UpdateScheduleMonitorRequest &) = default ;
    UpdateScheduleMonitorRequest(UpdateScheduleMonitorRequest &&) = default ;
    UpdateScheduleMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduleMonitorRequest() = default ;
    UpdateScheduleMonitorRequest& operator=(const UpdateScheduleMonitorRequest &) = default ;
    UpdateScheduleMonitorRequest& operator=(UpdateScheduleMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(MonitoredItemConfig, monitoredItemConfig_);
        DARABONBA_PTR_TO_JSON(MonitoredItemId, monitoredItemId_);
        DARABONBA_PTR_TO_JSON(MonitoredRuleConfigList, monitoredRuleConfigList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitoredItemConfig, monitoredItemConfig_);
        DARABONBA_PTR_FROM_JSON(MonitoredItemId, monitoredItemId_);
        DARABONBA_PTR_FROM_JSON(MonitoredRuleConfigList, monitoredRuleConfigList_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MonitoredRuleConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitoredRuleConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(AlertReasonType, alertReasonType_);
          DARABONBA_PTR_TO_JSON(AlertStrategy, alertStrategy_);
          DARABONBA_PTR_TO_JSON(FixedElapsedTime, fixedElapsedTime_);
          DARABONBA_PTR_TO_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
          DARABONBA_PTR_TO_JSON(UnfinishedRuleDetailConfig, unfinishedRuleDetailConfig_);
        };
        friend void from_json(const Darabonba::Json& j, MonitoredRuleConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertReasonType, alertReasonType_);
          DARABONBA_PTR_FROM_JSON(AlertStrategy, alertStrategy_);
          DARABONBA_PTR_FROM_JSON(FixedElapsedTime, fixedElapsedTime_);
          DARABONBA_PTR_FROM_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
          DARABONBA_PTR_FROM_JSON(UnfinishedRuleDetailConfig, unfinishedRuleDetailConfig_);
        };
        MonitoredRuleConfigList() = default ;
        MonitoredRuleConfigList(const MonitoredRuleConfigList &) = default ;
        MonitoredRuleConfigList(MonitoredRuleConfigList &&) = default ;
        MonitoredRuleConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonitoredRuleConfigList() = default ;
        MonitoredRuleConfigList& operator=(const MonitoredRuleConfigList &) = default ;
        MonitoredRuleConfigList& operator=(MonitoredRuleConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UnfinishedRuleDetailConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UnfinishedRuleDetailConfig& obj) { 
            DARABONBA_PTR_TO_JSON(DailyUnfinishedConfig, dailyUnfinishedConfig_);
            DARABONBA_PTR_TO_JSON(MultiPeriodUnfinishedConfig, multiPeriodUnfinishedConfig_);
          };
          friend void from_json(const Darabonba::Json& j, UnfinishedRuleDetailConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(DailyUnfinishedConfig, dailyUnfinishedConfig_);
            DARABONBA_PTR_FROM_JSON(MultiPeriodUnfinishedConfig, multiPeriodUnfinishedConfig_);
          };
          UnfinishedRuleDetailConfig() = default ;
          UnfinishedRuleDetailConfig(const UnfinishedRuleDetailConfig &) = default ;
          UnfinishedRuleDetailConfig(UnfinishedRuleDetailConfig &&) = default ;
          UnfinishedRuleDetailConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UnfinishedRuleDetailConfig() = default ;
          UnfinishedRuleDetailConfig& operator=(const UnfinishedRuleDetailConfig &) = default ;
          UnfinishedRuleDetailConfig& operator=(UnfinishedRuleDetailConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MultiPeriodUnfinishedConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MultiPeriodUnfinishedConfig& obj) { 
              DARABONBA_PTR_TO_JSON(CustomPeriodList, customPeriodList_);
              DARABONBA_PTR_TO_JSON(IntervalAfterDueTime, intervalAfterDueTime_);
              DARABONBA_PTR_TO_JSON(IntervalUnit, intervalUnit_);
              DARABONBA_PTR_TO_JSON(MonitorPeriodType, monitorPeriodType_);
              DARABONBA_PTR_TO_JSON(TriggerRuleType, triggerRuleType_);
            };
            friend void from_json(const Darabonba::Json& j, MultiPeriodUnfinishedConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(CustomPeriodList, customPeriodList_);
              DARABONBA_PTR_FROM_JSON(IntervalAfterDueTime, intervalAfterDueTime_);
              DARABONBA_PTR_FROM_JSON(IntervalUnit, intervalUnit_);
              DARABONBA_PTR_FROM_JSON(MonitorPeriodType, monitorPeriodType_);
              DARABONBA_PTR_FROM_JSON(TriggerRuleType, triggerRuleType_);
            };
            MultiPeriodUnfinishedConfig() = default ;
            MultiPeriodUnfinishedConfig(const MultiPeriodUnfinishedConfig &) = default ;
            MultiPeriodUnfinishedConfig(MultiPeriodUnfinishedConfig &&) = default ;
            MultiPeriodUnfinishedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MultiPeriodUnfinishedConfig() = default ;
            MultiPeriodUnfinishedConfig& operator=(const MultiPeriodUnfinishedConfig &) = default ;
            MultiPeriodUnfinishedConfig& operator=(MultiPeriodUnfinishedConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class CustomPeriodList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CustomPeriodList& obj) { 
                DARABONBA_PTR_TO_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
                DARABONBA_PTR_TO_JSON(PeriodNum, periodNum_);
              };
              friend void from_json(const Darabonba::Json& j, CustomPeriodList& obj) { 
                DARABONBA_PTR_FROM_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
                DARABONBA_PTR_FROM_JSON(PeriodNum, periodNum_);
              };
              CustomPeriodList() = default ;
              CustomPeriodList(const CustomPeriodList &) = default ;
              CustomPeriodList(CustomPeriodList &&) = default ;
              CustomPeriodList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CustomPeriodList() = default ;
              CustomPeriodList& operator=(const CustomPeriodList &) = default ;
              CustomPeriodList& operator=(CustomPeriodList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->fixedUnfinishedTime_ == nullptr
        && this->periodNum_ == nullptr; };
              // fixedUnfinishedTime Field Functions 
              bool hasFixedUnfinishedTime() const { return this->fixedUnfinishedTime_ != nullptr;};
              void deleteFixedUnfinishedTime() { this->fixedUnfinishedTime_ = nullptr;};
              inline string getFixedUnfinishedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedUnfinishedTime_, "") };
              inline CustomPeriodList& setFixedUnfinishedTime(string fixedUnfinishedTime) { DARABONBA_PTR_SET_VALUE(fixedUnfinishedTime_, fixedUnfinishedTime) };


              // periodNum Field Functions 
              bool hasPeriodNum() const { return this->periodNum_ != nullptr;};
              void deletePeriodNum() { this->periodNum_ = nullptr;};
              inline int32_t getPeriodNum() const { DARABONBA_PTR_GET_DEFAULT(periodNum_, 0) };
              inline CustomPeriodList& setPeriodNum(int32_t periodNum) { DARABONBA_PTR_SET_VALUE(periodNum_, periodNum) };


            protected:
              // The check time for unfinished nodes in HH:mm format.
              shared_ptr<string> fixedUnfinishedTime_ {};
              // The number of periods.
              shared_ptr<int32_t> periodNum_ {};
            };

            virtual bool empty() const override { return this->customPeriodList_ == nullptr
        && this->intervalAfterDueTime_ == nullptr && this->intervalUnit_ == nullptr && this->monitorPeriodType_ == nullptr && this->triggerRuleType_ == nullptr; };
            // customPeriodList Field Functions 
            bool hasCustomPeriodList() const { return this->customPeriodList_ != nullptr;};
            void deleteCustomPeriodList() { this->customPeriodList_ = nullptr;};
            inline const vector<MultiPeriodUnfinishedConfig::CustomPeriodList> & getCustomPeriodList() const { DARABONBA_PTR_GET_CONST(customPeriodList_, vector<MultiPeriodUnfinishedConfig::CustomPeriodList>) };
            inline vector<MultiPeriodUnfinishedConfig::CustomPeriodList> getCustomPeriodList() { DARABONBA_PTR_GET(customPeriodList_, vector<MultiPeriodUnfinishedConfig::CustomPeriodList>) };
            inline MultiPeriodUnfinishedConfig& setCustomPeriodList(const vector<MultiPeriodUnfinishedConfig::CustomPeriodList> & customPeriodList) { DARABONBA_PTR_SET_VALUE(customPeriodList_, customPeriodList) };
            inline MultiPeriodUnfinishedConfig& setCustomPeriodList(vector<MultiPeriodUnfinishedConfig::CustomPeriodList> && customPeriodList) { DARABONBA_PTR_SET_RVALUE(customPeriodList_, customPeriodList) };


            // intervalAfterDueTime Field Functions 
            bool hasIntervalAfterDueTime() const { return this->intervalAfterDueTime_ != nullptr;};
            void deleteIntervalAfterDueTime() { this->intervalAfterDueTime_ = nullptr;};
            inline int32_t getIntervalAfterDueTime() const { DARABONBA_PTR_GET_DEFAULT(intervalAfterDueTime_, 0) };
            inline MultiPeriodUnfinishedConfig& setIntervalAfterDueTime(int32_t intervalAfterDueTime) { DARABONBA_PTR_SET_VALUE(intervalAfterDueTime_, intervalAfterDueTime) };


            // intervalUnit Field Functions 
            bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
            void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
            inline string getIntervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
            inline MultiPeriodUnfinishedConfig& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


            // monitorPeriodType Field Functions 
            bool hasMonitorPeriodType() const { return this->monitorPeriodType_ != nullptr;};
            void deleteMonitorPeriodType() { this->monitorPeriodType_ = nullptr;};
            inline string getMonitorPeriodType() const { DARABONBA_PTR_GET_DEFAULT(monitorPeriodType_, "") };
            inline MultiPeriodUnfinishedConfig& setMonitorPeriodType(string monitorPeriodType) { DARABONBA_PTR_SET_VALUE(monitorPeriodType_, monitorPeriodType) };


            // triggerRuleType Field Functions 
            bool hasTriggerRuleType() const { return this->triggerRuleType_ != nullptr;};
            void deleteTriggerRuleType() { this->triggerRuleType_ = nullptr;};
            inline string getTriggerRuleType() const { DARABONBA_PTR_GET_DEFAULT(triggerRuleType_, "") };
            inline MultiPeriodUnfinishedConfig& setTriggerRuleType(string triggerRuleType) { DARABONBA_PTR_SET_VALUE(triggerRuleType_, triggerRuleType) };


          protected:
            // The list of custom monitoring periods. Specify this parameter when MonitorPeriodType is set to CUSTOM.
            shared_ptr<vector<MultiPeriodUnfinishedConfig::CustomPeriodList>> customPeriodList_ {};
            // The interval time value. This parameter is used together with IntervalUnit.
            shared_ptr<int32_t> intervalAfterDueTime_ {};
            // The interval unit. Valid values: SECONDS, MINUTES, and HOURS.
            shared_ptr<string> intervalUnit_ {};
            // The monitoring period type. Valid values: ALL, FIRST, LAST, and CUSTOM.
            shared_ptr<string> monitorPeriodType_ {};
            // The trigger rule type. Valid values: INTERVAL_AFTER_DUE_TIME: Triggered at an interval after the due time. FIX_TIME: Triggered at a fixed time.
            shared_ptr<string> triggerRuleType_ {};
          };

          class DailyUnfinishedConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DailyUnfinishedConfig& obj) { 
              DARABONBA_PTR_TO_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
            };
            friend void from_json(const Darabonba::Json& j, DailyUnfinishedConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
            };
            DailyUnfinishedConfig() = default ;
            DailyUnfinishedConfig(const DailyUnfinishedConfig &) = default ;
            DailyUnfinishedConfig(DailyUnfinishedConfig &&) = default ;
            DailyUnfinishedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DailyUnfinishedConfig() = default ;
            DailyUnfinishedConfig& operator=(const DailyUnfinishedConfig &) = default ;
            DailyUnfinishedConfig& operator=(DailyUnfinishedConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->fixedUnfinishedTime_ == nullptr; };
            // fixedUnfinishedTime Field Functions 
            bool hasFixedUnfinishedTime() const { return this->fixedUnfinishedTime_ != nullptr;};
            void deleteFixedUnfinishedTime() { this->fixedUnfinishedTime_ = nullptr;};
            inline string getFixedUnfinishedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedUnfinishedTime_, "") };
            inline DailyUnfinishedConfig& setFixedUnfinishedTime(string fixedUnfinishedTime) { DARABONBA_PTR_SET_VALUE(fixedUnfinishedTime_, fixedUnfinishedTime) };


          protected:
            // The daily check time for unfinished nodes in HH:mm format.
            shared_ptr<string> fixedUnfinishedTime_ {};
          };

          virtual bool empty() const override { return this->dailyUnfinishedConfig_ == nullptr
        && this->multiPeriodUnfinishedConfig_ == nullptr; };
          // dailyUnfinishedConfig Field Functions 
          bool hasDailyUnfinishedConfig() const { return this->dailyUnfinishedConfig_ != nullptr;};
          void deleteDailyUnfinishedConfig() { this->dailyUnfinishedConfig_ = nullptr;};
          inline const UnfinishedRuleDetailConfig::DailyUnfinishedConfig & getDailyUnfinishedConfig() const { DARABONBA_PTR_GET_CONST(dailyUnfinishedConfig_, UnfinishedRuleDetailConfig::DailyUnfinishedConfig) };
          inline UnfinishedRuleDetailConfig::DailyUnfinishedConfig getDailyUnfinishedConfig() { DARABONBA_PTR_GET(dailyUnfinishedConfig_, UnfinishedRuleDetailConfig::DailyUnfinishedConfig) };
          inline UnfinishedRuleDetailConfig& setDailyUnfinishedConfig(const UnfinishedRuleDetailConfig::DailyUnfinishedConfig & dailyUnfinishedConfig) { DARABONBA_PTR_SET_VALUE(dailyUnfinishedConfig_, dailyUnfinishedConfig) };
          inline UnfinishedRuleDetailConfig& setDailyUnfinishedConfig(UnfinishedRuleDetailConfig::DailyUnfinishedConfig && dailyUnfinishedConfig) { DARABONBA_PTR_SET_RVALUE(dailyUnfinishedConfig_, dailyUnfinishedConfig) };


          // multiPeriodUnfinishedConfig Field Functions 
          bool hasMultiPeriodUnfinishedConfig() const { return this->multiPeriodUnfinishedConfig_ != nullptr;};
          void deleteMultiPeriodUnfinishedConfig() { this->multiPeriodUnfinishedConfig_ = nullptr;};
          inline const UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig & getMultiPeriodUnfinishedConfig() const { DARABONBA_PTR_GET_CONST(multiPeriodUnfinishedConfig_, UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig) };
          inline UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig getMultiPeriodUnfinishedConfig() { DARABONBA_PTR_GET(multiPeriodUnfinishedConfig_, UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig) };
          inline UnfinishedRuleDetailConfig& setMultiPeriodUnfinishedConfig(const UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig & multiPeriodUnfinishedConfig) { DARABONBA_PTR_SET_VALUE(multiPeriodUnfinishedConfig_, multiPeriodUnfinishedConfig) };
          inline UnfinishedRuleDetailConfig& setMultiPeriodUnfinishedConfig(UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig && multiPeriodUnfinishedConfig) { DARABONBA_PTR_SET_RVALUE(multiPeriodUnfinishedConfig_, multiPeriodUnfinishedConfig) };


        protected:
          // The daily unfinished configuration.
          shared_ptr<UnfinishedRuleDetailConfig::DailyUnfinishedConfig> dailyUnfinishedConfig_ {};
          // The multi-period unfinished configuration.
          shared_ptr<UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig> multiPeriodUnfinishedConfig_ {};
        };

        class AlertStrategy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertStrategy& obj) { 
            DARABONBA_PTR_TO_JSON(AlertFrequency, alertFrequency_);
            DARABONBA_PTR_TO_JSON(MonitoredTimeRange, monitoredTimeRange_);
            DARABONBA_PTR_TO_JSON(ReceiverConfigList, receiverConfigList_);
            DARABONBA_PTR_TO_JSON(SendTimes, sendTimes_);
          };
          friend void from_json(const Darabonba::Json& j, AlertStrategy& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertFrequency, alertFrequency_);
            DARABONBA_PTR_FROM_JSON(MonitoredTimeRange, monitoredTimeRange_);
            DARABONBA_PTR_FROM_JSON(ReceiverConfigList, receiverConfigList_);
            DARABONBA_PTR_FROM_JSON(SendTimes, sendTimes_);
          };
          AlertStrategy() = default ;
          AlertStrategy(const AlertStrategy &) = default ;
          AlertStrategy(AlertStrategy &&) = default ;
          AlertStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertStrategy() = default ;
          AlertStrategy& operator=(const AlertStrategy &) = default ;
          AlertStrategy& operator=(AlertStrategy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReceiverConfigList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReceiverConfigList& obj) { 
              DARABONBA_PTR_TO_JSON(CustomAlertChannelIdList, customAlertChannelIdList_);
              DARABONBA_PTR_TO_JSON(OnDutyTableIdList, onDutyTableIdList_);
              DARABONBA_PTR_TO_JSON(ReceivedWayList, receivedWayList_);
              DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
              DARABONBA_PTR_TO_JSON(ReceiverUserIdList, receiverUserIdList_);
            };
            friend void from_json(const Darabonba::Json& j, ReceiverConfigList& obj) { 
              DARABONBA_PTR_FROM_JSON(CustomAlertChannelIdList, customAlertChannelIdList_);
              DARABONBA_PTR_FROM_JSON(OnDutyTableIdList, onDutyTableIdList_);
              DARABONBA_PTR_FROM_JSON(ReceivedWayList, receivedWayList_);
              DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
              DARABONBA_PTR_FROM_JSON(ReceiverUserIdList, receiverUserIdList_);
            };
            ReceiverConfigList() = default ;
            ReceiverConfigList(const ReceiverConfigList &) = default ;
            ReceiverConfigList(ReceiverConfigList &&) = default ;
            ReceiverConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReceiverConfigList() = default ;
            ReceiverConfigList& operator=(const ReceiverConfigList &) = default ;
            ReceiverConfigList& operator=(ReceiverConfigList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->customAlertChannelIdList_ == nullptr
        && this->onDutyTableIdList_ == nullptr && this->receivedWayList_ == nullptr && this->receiverType_ == nullptr && this->receiverUserIdList_ == nullptr; };
            // customAlertChannelIdList Field Functions 
            bool hasCustomAlertChannelIdList() const { return this->customAlertChannelIdList_ != nullptr;};
            void deleteCustomAlertChannelIdList() { this->customAlertChannelIdList_ = nullptr;};
            inline const vector<string> & getCustomAlertChannelIdList() const { DARABONBA_PTR_GET_CONST(customAlertChannelIdList_, vector<string>) };
            inline vector<string> getCustomAlertChannelIdList() { DARABONBA_PTR_GET(customAlertChannelIdList_, vector<string>) };
            inline ReceiverConfigList& setCustomAlertChannelIdList(const vector<string> & customAlertChannelIdList) { DARABONBA_PTR_SET_VALUE(customAlertChannelIdList_, customAlertChannelIdList) };
            inline ReceiverConfigList& setCustomAlertChannelIdList(vector<string> && customAlertChannelIdList) { DARABONBA_PTR_SET_RVALUE(customAlertChannelIdList_, customAlertChannelIdList) };


            // onDutyTableIdList Field Functions 
            bool hasOnDutyTableIdList() const { return this->onDutyTableIdList_ != nullptr;};
            void deleteOnDutyTableIdList() { this->onDutyTableIdList_ = nullptr;};
            inline const vector<string> & getOnDutyTableIdList() const { DARABONBA_PTR_GET_CONST(onDutyTableIdList_, vector<string>) };
            inline vector<string> getOnDutyTableIdList() { DARABONBA_PTR_GET(onDutyTableIdList_, vector<string>) };
            inline ReceiverConfigList& setOnDutyTableIdList(const vector<string> & onDutyTableIdList) { DARABONBA_PTR_SET_VALUE(onDutyTableIdList_, onDutyTableIdList) };
            inline ReceiverConfigList& setOnDutyTableIdList(vector<string> && onDutyTableIdList) { DARABONBA_PTR_SET_RVALUE(onDutyTableIdList_, onDutyTableIdList) };


            // receivedWayList Field Functions 
            bool hasReceivedWayList() const { return this->receivedWayList_ != nullptr;};
            void deleteReceivedWayList() { this->receivedWayList_ = nullptr;};
            inline const vector<string> & getReceivedWayList() const { DARABONBA_PTR_GET_CONST(receivedWayList_, vector<string>) };
            inline vector<string> getReceivedWayList() { DARABONBA_PTR_GET(receivedWayList_, vector<string>) };
            inline ReceiverConfigList& setReceivedWayList(const vector<string> & receivedWayList) { DARABONBA_PTR_SET_VALUE(receivedWayList_, receivedWayList) };
            inline ReceiverConfigList& setReceivedWayList(vector<string> && receivedWayList) { DARABONBA_PTR_SET_RVALUE(receivedWayList_, receivedWayList) };


            // receiverType Field Functions 
            bool hasReceiverType() const { return this->receiverType_ != nullptr;};
            void deleteReceiverType() { this->receiverType_ = nullptr;};
            inline string getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
            inline ReceiverConfigList& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


            // receiverUserIdList Field Functions 
            bool hasReceiverUserIdList() const { return this->receiverUserIdList_ != nullptr;};
            void deleteReceiverUserIdList() { this->receiverUserIdList_ = nullptr;};
            inline const vector<string> & getReceiverUserIdList() const { DARABONBA_PTR_GET_CONST(receiverUserIdList_, vector<string>) };
            inline vector<string> getReceiverUserIdList() { DARABONBA_PTR_GET(receiverUserIdList_, vector<string>) };
            inline ReceiverConfigList& setReceiverUserIdList(const vector<string> & receiverUserIdList) { DARABONBA_PTR_SET_VALUE(receiverUserIdList_, receiverUserIdList) };
            inline ReceiverConfigList& setReceiverUserIdList(vector<string> && receiverUserIdList) { DARABONBA_PTR_SET_RVALUE(receiverUserIdList_, receiverUserIdList) };


          protected:
            // The list of custom alert channel IDs.
            shared_ptr<vector<string>> customAlertChannelIdList_ {};
            // The list of on-duty table IDs. This parameter is required when ReceiverType is set to ON_DUTY_TABLE.
            shared_ptr<vector<string>> onDutyTableIdList_ {};
            // The list of receiving methods. Valid values: PHONE: Phone call. MESSAGE: Text message. EMAIL: Email. DING_TALK: DingTalk. FEISHU: Lark. WECHAT: WeChat. CUSTOM: Custom channel.
            // 
            // This parameter is required.
            shared_ptr<vector<string>> receivedWayList_ {};
            // The recipient type. Valid values: OWNER: Owner. USER_CUSTOM: Custom user. ON_DUTY_TABLE: On-duty table.
            // 
            // This parameter is required.
            shared_ptr<string> receiverType_ {};
            // The list of recipient user IDs. This parameter is required when ReceiverType is set to USER_CUSTOM.
            shared_ptr<vector<string>> receiverUserIdList_ {};
          };

          class MonitoredTimeRange : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MonitoredTimeRange& obj) { 
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, MonitoredTimeRange& obj) { 
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            MonitoredTimeRange() = default ;
            MonitoredTimeRange(const MonitoredTimeRange &) = default ;
            MonitoredTimeRange(MonitoredTimeRange &&) = default ;
            MonitoredTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MonitoredTimeRange() = default ;
            MonitoredTimeRange& operator=(const MonitoredTimeRange &) = default ;
            MonitoredTimeRange& operator=(MonitoredTimeRange &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline MonitoredTimeRange& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline MonitoredTimeRange& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            // The end time in HH:mm format. Set this parameter to 0 to indicate no limit.
            shared_ptr<string> endTime_ {};
            // The start time in HH:mm format. Set this parameter to 0 to indicate no limit.
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->alertFrequency_ == nullptr
        && this->monitoredTimeRange_ == nullptr && this->receiverConfigList_ == nullptr && this->sendTimes_ == nullptr; };
          // alertFrequency Field Functions 
          bool hasAlertFrequency() const { return this->alertFrequency_ != nullptr;};
          void deleteAlertFrequency() { this->alertFrequency_ = nullptr;};
          inline int32_t getAlertFrequency() const { DARABONBA_PTR_GET_DEFAULT(alertFrequency_, 0) };
          inline AlertStrategy& setAlertFrequency(int32_t alertFrequency) { DARABONBA_PTR_SET_VALUE(alertFrequency_, alertFrequency) };


          // monitoredTimeRange Field Functions 
          bool hasMonitoredTimeRange() const { return this->monitoredTimeRange_ != nullptr;};
          void deleteMonitoredTimeRange() { this->monitoredTimeRange_ = nullptr;};
          inline const AlertStrategy::MonitoredTimeRange & getMonitoredTimeRange() const { DARABONBA_PTR_GET_CONST(monitoredTimeRange_, AlertStrategy::MonitoredTimeRange) };
          inline AlertStrategy::MonitoredTimeRange getMonitoredTimeRange() { DARABONBA_PTR_GET(monitoredTimeRange_, AlertStrategy::MonitoredTimeRange) };
          inline AlertStrategy& setMonitoredTimeRange(const AlertStrategy::MonitoredTimeRange & monitoredTimeRange) { DARABONBA_PTR_SET_VALUE(monitoredTimeRange_, monitoredTimeRange) };
          inline AlertStrategy& setMonitoredTimeRange(AlertStrategy::MonitoredTimeRange && monitoredTimeRange) { DARABONBA_PTR_SET_RVALUE(monitoredTimeRange_, monitoredTimeRange) };


          // receiverConfigList Field Functions 
          bool hasReceiverConfigList() const { return this->receiverConfigList_ != nullptr;};
          void deleteReceiverConfigList() { this->receiverConfigList_ = nullptr;};
          inline const vector<AlertStrategy::ReceiverConfigList> & getReceiverConfigList() const { DARABONBA_PTR_GET_CONST(receiverConfigList_, vector<AlertStrategy::ReceiverConfigList>) };
          inline vector<AlertStrategy::ReceiverConfigList> getReceiverConfigList() { DARABONBA_PTR_GET(receiverConfigList_, vector<AlertStrategy::ReceiverConfigList>) };
          inline AlertStrategy& setReceiverConfigList(const vector<AlertStrategy::ReceiverConfigList> & receiverConfigList) { DARABONBA_PTR_SET_VALUE(receiverConfigList_, receiverConfigList) };
          inline AlertStrategy& setReceiverConfigList(vector<AlertStrategy::ReceiverConfigList> && receiverConfigList) { DARABONBA_PTR_SET_RVALUE(receiverConfigList_, receiverConfigList) };


          // sendTimes Field Functions 
          bool hasSendTimes() const { return this->sendTimes_ != nullptr;};
          void deleteSendTimes() { this->sendTimes_ = nullptr;};
          inline int32_t getSendTimes() const { DARABONBA_PTR_GET_DEFAULT(sendTimes_, 0) };
          inline AlertStrategy& setSendTimes(int32_t sendTimes) { DARABONBA_PTR_SET_VALUE(sendTimes_, sendTimes) };


        protected:
          // The alert trigger frequency.
          // 
          // This parameter is required.
          shared_ptr<int32_t> alertFrequency_ {};
          // The monitored time range.
          shared_ptr<AlertStrategy::MonitoredTimeRange> monitoredTimeRange_ {};
          // The list of recipient configurations.
          // 
          // This parameter is required.
          shared_ptr<vector<AlertStrategy::ReceiverConfigList>> receiverConfigList_ {};
          // The maximum number of times an alert can be sent.
          // 
          // This parameter is required.
          shared_ptr<int32_t> sendTimes_ {};
        };

        virtual bool empty() const override { return this->alertReasonType_ == nullptr
        && this->alertStrategy_ == nullptr && this->fixedElapsedTime_ == nullptr && this->fixedUnfinishedTime_ == nullptr && this->unfinishedRuleDetailConfig_ == nullptr; };
        // alertReasonType Field Functions 
        bool hasAlertReasonType() const { return this->alertReasonType_ != nullptr;};
        void deleteAlertReasonType() { this->alertReasonType_ = nullptr;};
        inline string getAlertReasonType() const { DARABONBA_PTR_GET_DEFAULT(alertReasonType_, "") };
        inline MonitoredRuleConfigList& setAlertReasonType(string alertReasonType) { DARABONBA_PTR_SET_VALUE(alertReasonType_, alertReasonType) };


        // alertStrategy Field Functions 
        bool hasAlertStrategy() const { return this->alertStrategy_ != nullptr;};
        void deleteAlertStrategy() { this->alertStrategy_ = nullptr;};
        inline const MonitoredRuleConfigList::AlertStrategy & getAlertStrategy() const { DARABONBA_PTR_GET_CONST(alertStrategy_, MonitoredRuleConfigList::AlertStrategy) };
        inline MonitoredRuleConfigList::AlertStrategy getAlertStrategy() { DARABONBA_PTR_GET(alertStrategy_, MonitoredRuleConfigList::AlertStrategy) };
        inline MonitoredRuleConfigList& setAlertStrategy(const MonitoredRuleConfigList::AlertStrategy & alertStrategy) { DARABONBA_PTR_SET_VALUE(alertStrategy_, alertStrategy) };
        inline MonitoredRuleConfigList& setAlertStrategy(MonitoredRuleConfigList::AlertStrategy && alertStrategy) { DARABONBA_PTR_SET_RVALUE(alertStrategy_, alertStrategy) };


        // fixedElapsedTime Field Functions 
        bool hasFixedElapsedTime() const { return this->fixedElapsedTime_ != nullptr;};
        void deleteFixedElapsedTime() { this->fixedElapsedTime_ = nullptr;};
        inline int64_t getFixedElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedElapsedTime_, 0L) };
        inline MonitoredRuleConfigList& setFixedElapsedTime(int64_t fixedElapsedTime) { DARABONBA_PTR_SET_VALUE(fixedElapsedTime_, fixedElapsedTime) };


        // fixedUnfinishedTime Field Functions 
        bool hasFixedUnfinishedTime() const { return this->fixedUnfinishedTime_ != nullptr;};
        void deleteFixedUnfinishedTime() { this->fixedUnfinishedTime_ = nullptr;};
        inline string getFixedUnfinishedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedUnfinishedTime_, "") };
        inline MonitoredRuleConfigList& setFixedUnfinishedTime(string fixedUnfinishedTime) { DARABONBA_PTR_SET_VALUE(fixedUnfinishedTime_, fixedUnfinishedTime) };


        // unfinishedRuleDetailConfig Field Functions 
        bool hasUnfinishedRuleDetailConfig() const { return this->unfinishedRuleDetailConfig_ != nullptr;};
        void deleteUnfinishedRuleDetailConfig() { this->unfinishedRuleDetailConfig_ = nullptr;};
        inline const MonitoredRuleConfigList::UnfinishedRuleDetailConfig & getUnfinishedRuleDetailConfig() const { DARABONBA_PTR_GET_CONST(unfinishedRuleDetailConfig_, MonitoredRuleConfigList::UnfinishedRuleDetailConfig) };
        inline MonitoredRuleConfigList::UnfinishedRuleDetailConfig getUnfinishedRuleDetailConfig() { DARABONBA_PTR_GET(unfinishedRuleDetailConfig_, MonitoredRuleConfigList::UnfinishedRuleDetailConfig) };
        inline MonitoredRuleConfigList& setUnfinishedRuleDetailConfig(const MonitoredRuleConfigList::UnfinishedRuleDetailConfig & unfinishedRuleDetailConfig) { DARABONBA_PTR_SET_VALUE(unfinishedRuleDetailConfig_, unfinishedRuleDetailConfig) };
        inline MonitoredRuleConfigList& setUnfinishedRuleDetailConfig(MonitoredRuleConfigList::UnfinishedRuleDetailConfig && unfinishedRuleDetailConfig) { DARABONBA_PTR_SET_RVALUE(unfinishedRuleDetailConfig_, unfinishedRuleDetailConfig) };


      protected:
        // The alert cause type. Valid values: FAILED: The node fails to run. TIME_OUT: The node execution times out. UNFINISHED: The node does not generate data. SUCCESS: The node runs successfully. DATA_DELAY: Data is delayed.
        // 
        // This parameter is required.
        shared_ptr<string> alertReasonType_ {};
        // The alert strategy.
        // 
        // This parameter is required.
        shared_ptr<MonitoredRuleConfigList::AlertStrategy> alertStrategy_ {};
        // The timeout period in minutes. Specify this parameter only when AlertReasonType is set to TIME_OUT.
        shared_ptr<int64_t> fixedElapsedTime_ {};
        // The daily check time for unfinished nodes in HH:mm format. Specify this parameter only when AlertReasonType is set to UNFINISHED.
        shared_ptr<string> fixedUnfinishedTime_ {};
        // The detailed configuration for the unfinished rule. Specify this parameter only when AlertReasonType is set to UNFINISHED.
        shared_ptr<MonitoredRuleConfigList::UnfinishedRuleDetailConfig> unfinishedRuleDetailConfig_ {};
      };

      class MonitoredItemConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitoredItemConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(LogicalTableId, logicalTableId_);
          DARABONBA_PTR_TO_JSON(LogicalTableName, logicalTableName_);
          DARABONBA_PTR_TO_JSON(MonitoredItemType, monitoredItemType_);
          DARABONBA_PTR_TO_JSON(MonitoredNodeRange, monitoredNodeRange_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeSubType, nodeSubType_);
          DARABONBA_PTR_TO_JSON(OpsOwnerIdList, opsOwnerIdList_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        };
        friend void from_json(const Darabonba::Json& j, MonitoredItemConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(LogicalTableId, logicalTableId_);
          DARABONBA_PTR_FROM_JSON(LogicalTableName, logicalTableName_);
          DARABONBA_PTR_FROM_JSON(MonitoredItemType, monitoredItemType_);
          DARABONBA_PTR_FROM_JSON(MonitoredNodeRange, monitoredNodeRange_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeSubType, nodeSubType_);
          DARABONBA_PTR_FROM_JSON(OpsOwnerIdList, opsOwnerIdList_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        };
        MonitoredItemConfig() = default ;
        MonitoredItemConfig(const MonitoredItemConfig &) = default ;
        MonitoredItemConfig(MonitoredItemConfig &&) = default ;
        MonitoredItemConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonitoredItemConfig() = default ;
        MonitoredItemConfig& operator=(const MonitoredItemConfig &) = default ;
        MonitoredItemConfig& operator=(MonitoredItemConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MonitoredNodeRange : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MonitoredNodeRange& obj) { 
            DARABONBA_PTR_TO_JSON(FilterRuleList, filterRuleList_);
          };
          friend void from_json(const Darabonba::Json& j, MonitoredNodeRange& obj) { 
            DARABONBA_PTR_FROM_JSON(FilterRuleList, filterRuleList_);
          };
          MonitoredNodeRange() = default ;
          MonitoredNodeRange(const MonitoredNodeRange &) = default ;
          MonitoredNodeRange(MonitoredNodeRange &&) = default ;
          MonitoredNodeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MonitoredNodeRange() = default ;
          MonitoredNodeRange& operator=(const MonitoredNodeRange &) = default ;
          MonitoredNodeRange& operator=(MonitoredNodeRange &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FilterRuleList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FilterRuleList& obj) { 
              DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
              DARABONBA_PTR_TO_JSON(FilterValueList, filterValueList_);
              DARABONBA_PTR_TO_JSON(IsExclude, isExclude_);
            };
            friend void from_json(const Darabonba::Json& j, FilterRuleList& obj) { 
              DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
              DARABONBA_PTR_FROM_JSON(FilterValueList, filterValueList_);
              DARABONBA_PTR_FROM_JSON(IsExclude, isExclude_);
            };
            FilterRuleList() = default ;
            FilterRuleList(const FilterRuleList &) = default ;
            FilterRuleList(FilterRuleList &&) = default ;
            FilterRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FilterRuleList() = default ;
            FilterRuleList& operator=(const FilterRuleList &) = default ;
            FilterRuleList& operator=(FilterRuleList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->filterKey_ == nullptr
        && this->filterValueList_ == nullptr && this->isExclude_ == nullptr; };
            // filterKey Field Functions 
            bool hasFilterKey() const { return this->filterKey_ != nullptr;};
            void deleteFilterKey() { this->filterKey_ = nullptr;};
            inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
            inline FilterRuleList& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


            // filterValueList Field Functions 
            bool hasFilterValueList() const { return this->filterValueList_ != nullptr;};
            void deleteFilterValueList() { this->filterValueList_ = nullptr;};
            inline const vector<string> & getFilterValueList() const { DARABONBA_PTR_GET_CONST(filterValueList_, vector<string>) };
            inline vector<string> getFilterValueList() { DARABONBA_PTR_GET(filterValueList_, vector<string>) };
            inline FilterRuleList& setFilterValueList(const vector<string> & filterValueList) { DARABONBA_PTR_SET_VALUE(filterValueList_, filterValueList) };
            inline FilterRuleList& setFilterValueList(vector<string> && filterValueList) { DARABONBA_PTR_SET_RVALUE(filterValueList_, filterValueList) };


            // isExclude Field Functions 
            bool hasIsExclude() const { return this->isExclude_ != nullptr;};
            void deleteIsExclude() { this->isExclude_ = nullptr;};
            inline bool getIsExclude() const { DARABONBA_PTR_GET_DEFAULT(isExclude_, false) };
            inline FilterRuleList& setIsExclude(bool isExclude) { DARABONBA_PTR_SET_VALUE(isExclude_, isExclude) };


          protected:
            // The filter key.
            shared_ptr<string> filterKey_ {};
            // The list of filter values. Multiple values are supported.
            shared_ptr<vector<string>> filterValueList_ {};
            // Specifies whether to exclude the selection.
            shared_ptr<bool> isExclude_ {};
          };

          virtual bool empty() const override { return this->filterRuleList_ == nullptr; };
          // filterRuleList Field Functions 
          bool hasFilterRuleList() const { return this->filterRuleList_ != nullptr;};
          void deleteFilterRuleList() { this->filterRuleList_ = nullptr;};
          inline const vector<MonitoredNodeRange::FilterRuleList> & getFilterRuleList() const { DARABONBA_PTR_GET_CONST(filterRuleList_, vector<MonitoredNodeRange::FilterRuleList>) };
          inline vector<MonitoredNodeRange::FilterRuleList> getFilterRuleList() { DARABONBA_PTR_GET(filterRuleList_, vector<MonitoredNodeRange::FilterRuleList>) };
          inline MonitoredNodeRange& setFilterRuleList(const vector<MonitoredNodeRange::FilterRuleList> & filterRuleList) { DARABONBA_PTR_SET_VALUE(filterRuleList_, filterRuleList) };
          inline MonitoredNodeRange& setFilterRuleList(vector<MonitoredNodeRange::FilterRuleList> && filterRuleList) { DARABONBA_PTR_SET_RVALUE(filterRuleList_, filterRuleList) };


        protected:
          // The list of filter rules. If left empty, all rules are applied by default.
          shared_ptr<vector<MonitoredNodeRange::FilterRuleList>> filterRuleList_ {};
        };

        virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->logicalTableId_ == nullptr && this->logicalTableName_ == nullptr && this->monitoredItemType_ == nullptr && this->monitoredNodeRange_ == nullptr && this->nodeId_ == nullptr
        && this->nodeName_ == nullptr && this->nodeSubType_ == nullptr && this->opsOwnerIdList_ == nullptr && this->projectId_ == nullptr; };
        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline MonitoredItemConfig& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


        // logicalTableId Field Functions 
        bool hasLogicalTableId() const { return this->logicalTableId_ != nullptr;};
        void deleteLogicalTableId() { this->logicalTableId_ = nullptr;};
        inline int64_t getLogicalTableId() const { DARABONBA_PTR_GET_DEFAULT(logicalTableId_, 0L) };
        inline MonitoredItemConfig& setLogicalTableId(int64_t logicalTableId) { DARABONBA_PTR_SET_VALUE(logicalTableId_, logicalTableId) };


        // logicalTableName Field Functions 
        bool hasLogicalTableName() const { return this->logicalTableName_ != nullptr;};
        void deleteLogicalTableName() { this->logicalTableName_ = nullptr;};
        inline string getLogicalTableName() const { DARABONBA_PTR_GET_DEFAULT(logicalTableName_, "") };
        inline MonitoredItemConfig& setLogicalTableName(string logicalTableName) { DARABONBA_PTR_SET_VALUE(logicalTableName_, logicalTableName) };


        // monitoredItemType Field Functions 
        bool hasMonitoredItemType() const { return this->monitoredItemType_ != nullptr;};
        void deleteMonitoredItemType() { this->monitoredItemType_ = nullptr;};
        inline string getMonitoredItemType() const { DARABONBA_PTR_GET_DEFAULT(monitoredItemType_, "") };
        inline MonitoredItemConfig& setMonitoredItemType(string monitoredItemType) { DARABONBA_PTR_SET_VALUE(monitoredItemType_, monitoredItemType) };


        // monitoredNodeRange Field Functions 
        bool hasMonitoredNodeRange() const { return this->monitoredNodeRange_ != nullptr;};
        void deleteMonitoredNodeRange() { this->monitoredNodeRange_ = nullptr;};
        inline const MonitoredItemConfig::MonitoredNodeRange & getMonitoredNodeRange() const { DARABONBA_PTR_GET_CONST(monitoredNodeRange_, MonitoredItemConfig::MonitoredNodeRange) };
        inline MonitoredItemConfig::MonitoredNodeRange getMonitoredNodeRange() { DARABONBA_PTR_GET(monitoredNodeRange_, MonitoredItemConfig::MonitoredNodeRange) };
        inline MonitoredItemConfig& setMonitoredNodeRange(const MonitoredItemConfig::MonitoredNodeRange & monitoredNodeRange) { DARABONBA_PTR_SET_VALUE(monitoredNodeRange_, monitoredNodeRange) };
        inline MonitoredItemConfig& setMonitoredNodeRange(MonitoredItemConfig::MonitoredNodeRange && monitoredNodeRange) { DARABONBA_PTR_SET_RVALUE(monitoredNodeRange_, monitoredNodeRange) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline MonitoredItemConfig& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline MonitoredItemConfig& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeSubType Field Functions 
        bool hasNodeSubType() const { return this->nodeSubType_ != nullptr;};
        void deleteNodeSubType() { this->nodeSubType_ = nullptr;};
        inline string getNodeSubType() const { DARABONBA_PTR_GET_DEFAULT(nodeSubType_, "") };
        inline MonitoredItemConfig& setNodeSubType(string nodeSubType) { DARABONBA_PTR_SET_VALUE(nodeSubType_, nodeSubType) };


        // opsOwnerIdList Field Functions 
        bool hasOpsOwnerIdList() const { return this->opsOwnerIdList_ != nullptr;};
        void deleteOpsOwnerIdList() { this->opsOwnerIdList_ = nullptr;};
        inline const vector<string> & getOpsOwnerIdList() const { DARABONBA_PTR_GET_CONST(opsOwnerIdList_, vector<string>) };
        inline vector<string> getOpsOwnerIdList() { DARABONBA_PTR_GET(opsOwnerIdList_, vector<string>) };
        inline MonitoredItemConfig& setOpsOwnerIdList(const vector<string> & opsOwnerIdList) { DARABONBA_PTR_SET_VALUE(opsOwnerIdList_, opsOwnerIdList) };
        inline MonitoredItemConfig& setOpsOwnerIdList(vector<string> && opsOwnerIdList) { DARABONBA_PTR_SET_RVALUE(opsOwnerIdList_, opsOwnerIdList) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline MonitoredItemConfig& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      protected:
        // The business unit ID. Required when the summary logical table does not have a project ID.
        shared_ptr<int64_t> bizUnitId_ {};
        // The logical table ID. Required for the LOGICAL_FIELD and LOGICAL_TABLE_NODE types.
        shared_ptr<int64_t> logicalTableId_ {};
        // The name of the logical table.
        shared_ptr<string> logicalTableName_ {};
        // The monitored object type. Valid values: LOGICAL_FIELD (logical field), OND_ID_NODE (logical table node), SCHEDULE_PHYSICAL_NODE (periodically scheduled physical task), MANUAL_PHYSICAL_NODE (manually scheduled physical task), ODM_NODE (source path task), LOGICAL_TABLE_NODE (logical table task), and PROJECT (project).
        // 
        // This parameter is required.
        shared_ptr<string> monitoredItemType_ {};
        // The monitored task scope, which specifies project-level monitoring filter rules. Required for the PROJECT type.
        shared_ptr<MonitoredItemConfig::MonitoredNodeRange> monitoredNodeRange_ {};
        // The monitored task ID, which is the node ID. Required for types other than PROJECT.
        shared_ptr<string> nodeId_ {};
        // The monitored task name, which is the node name. Required for types other than PROJECT.
        shared_ptr<string> nodeName_ {};
        // The node subtype. Required for types other than PROJECT and LOGICAL_FIELD.
        shared_ptr<string> nodeSubType_ {};
        // The list of node O&M owner IDs. This serves as the source for OWNER recipients.
        shared_ptr<vector<string>> opsOwnerIdList_ {};
        // The project ID. Required for the PROJECT type. For other types, it specifies the project to which the monitored object belongs.
        shared_ptr<int64_t> projectId_ {};
      };

      virtual bool empty() const override { return this->monitoredItemConfig_ == nullptr
        && this->monitoredItemId_ == nullptr && this->monitoredRuleConfigList_ == nullptr; };
      // monitoredItemConfig Field Functions 
      bool hasMonitoredItemConfig() const { return this->monitoredItemConfig_ != nullptr;};
      void deleteMonitoredItemConfig() { this->monitoredItemConfig_ = nullptr;};
      inline const UpdateCommand::MonitoredItemConfig & getMonitoredItemConfig() const { DARABONBA_PTR_GET_CONST(monitoredItemConfig_, UpdateCommand::MonitoredItemConfig) };
      inline UpdateCommand::MonitoredItemConfig getMonitoredItemConfig() { DARABONBA_PTR_GET(monitoredItemConfig_, UpdateCommand::MonitoredItemConfig) };
      inline UpdateCommand& setMonitoredItemConfig(const UpdateCommand::MonitoredItemConfig & monitoredItemConfig) { DARABONBA_PTR_SET_VALUE(monitoredItemConfig_, monitoredItemConfig) };
      inline UpdateCommand& setMonitoredItemConfig(UpdateCommand::MonitoredItemConfig && monitoredItemConfig) { DARABONBA_PTR_SET_RVALUE(monitoredItemConfig_, monitoredItemConfig) };


      // monitoredItemId Field Functions 
      bool hasMonitoredItemId() const { return this->monitoredItemId_ != nullptr;};
      void deleteMonitoredItemId() { this->monitoredItemId_ = nullptr;};
      inline int64_t getMonitoredItemId() const { DARABONBA_PTR_GET_DEFAULT(monitoredItemId_, 0L) };
      inline UpdateCommand& setMonitoredItemId(int64_t monitoredItemId) { DARABONBA_PTR_SET_VALUE(monitoredItemId_, monitoredItemId) };


      // monitoredRuleConfigList Field Functions 
      bool hasMonitoredRuleConfigList() const { return this->monitoredRuleConfigList_ != nullptr;};
      void deleteMonitoredRuleConfigList() { this->monitoredRuleConfigList_ = nullptr;};
      inline const vector<UpdateCommand::MonitoredRuleConfigList> & getMonitoredRuleConfigList() const { DARABONBA_PTR_GET_CONST(monitoredRuleConfigList_, vector<UpdateCommand::MonitoredRuleConfigList>) };
      inline vector<UpdateCommand::MonitoredRuleConfigList> getMonitoredRuleConfigList() { DARABONBA_PTR_GET(monitoredRuleConfigList_, vector<UpdateCommand::MonitoredRuleConfigList>) };
      inline UpdateCommand& setMonitoredRuleConfigList(const vector<UpdateCommand::MonitoredRuleConfigList> & monitoredRuleConfigList) { DARABONBA_PTR_SET_VALUE(monitoredRuleConfigList_, monitoredRuleConfigList) };
      inline UpdateCommand& setMonitoredRuleConfigList(vector<UpdateCommand::MonitoredRuleConfigList> && monitoredRuleConfigList) { DARABONBA_PTR_SET_RVALUE(monitoredRuleConfigList_, monitoredRuleConfigList) };


    protected:
      // The monitored object configuration.
      // 
      // This parameter is required.
      shared_ptr<UpdateCommand::MonitoredItemConfig> monitoredItemConfig_ {};
      // The monitored object ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> monitoredItemId_ {};
      // The list of monitored rule configurations. You can configure multiple rules with different alert causes.
      // 
      // This parameter is required.
      shared_ptr<vector<UpdateCommand::MonitoredRuleConfigList>> monitoredRuleConfigList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateScheduleMonitorRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateScheduleMonitorRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateScheduleMonitorRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateScheduleMonitorRequest::UpdateCommand) };
    inline UpdateScheduleMonitorRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateScheduleMonitorRequest::UpdateCommand) };
    inline UpdateScheduleMonitorRequest& setUpdateCommand(const UpdateScheduleMonitorRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateScheduleMonitorRequest& setUpdateCommand(UpdateScheduleMonitorRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The request body for updating scheduling monitoring.
    // 
    // This parameter is required.
    shared_ptr<UpdateScheduleMonitorRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
