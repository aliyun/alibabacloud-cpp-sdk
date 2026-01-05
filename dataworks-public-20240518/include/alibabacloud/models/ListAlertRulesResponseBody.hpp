// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAlertRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAlertRulesResponseBody() = default ;
    ListAlertRulesResponseBody(const ListAlertRulesResponseBody &) = default ;
    ListAlertRulesResponseBody(ListAlertRulesResponseBody &&) = default ;
    ListAlertRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRulesResponseBody() = default ;
    ListAlertRulesResponseBody& operator=(const ListAlertRulesResponseBody &) = default ;
    ListAlertRulesResponseBody& operator=(ListAlertRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AlertRules, alertRules_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertRules, alertRules_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertRules& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(TriggerCondition, triggerCondition_);
        };
        friend void from_json(const Darabonba::Json& j, AlertRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(TriggerCondition, triggerCondition_);
        };
        AlertRules() = default ;
        AlertRules(const AlertRules &) = default ;
        AlertRules(AlertRules &&) = default ;
        AlertRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertRules() = default ;
        AlertRules& operator=(const AlertRules &) = default ;
        AlertRules& operator=(AlertRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TriggerCondition : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TriggerCondition& obj) { 
            DARABONBA_PTR_TO_JSON(Extension, extension_);
            DARABONBA_PTR_TO_JSON(Target, target_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, TriggerCondition& obj) { 
            DARABONBA_PTR_FROM_JSON(Extension, extension_);
            DARABONBA_PTR_FROM_JSON(Target, target_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          TriggerCondition() = default ;
          TriggerCondition(const TriggerCondition &) = default ;
          TriggerCondition(TriggerCondition &&) = default ;
          TriggerCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TriggerCondition() = default ;
          TriggerCondition& operator=(const TriggerCondition &) = default ;
          TriggerCondition& operator=(TriggerCondition &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Target : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Target& obj) { 
              DARABONBA_PTR_TO_JSON(AllowTasks, allowTasks_);
              DARABONBA_PTR_TO_JSON(Ids, ids_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Target& obj) { 
              DARABONBA_PTR_FROM_JSON(AllowTasks, allowTasks_);
              DARABONBA_PTR_FROM_JSON(Ids, ids_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Target() = default ;
            Target(const Target &) = default ;
            Target(Target &&) = default ;
            Target(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Target() = default ;
            Target& operator=(const Target &) = default ;
            Target& operator=(Target &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->allowTasks_ == nullptr
        && this->ids_ == nullptr && this->type_ == nullptr; };
            // allowTasks Field Functions 
            bool hasAllowTasks() const { return this->allowTasks_ != nullptr;};
            void deleteAllowTasks() { this->allowTasks_ = nullptr;};
            inline const vector<int64_t> & getAllowTasks() const { DARABONBA_PTR_GET_CONST(allowTasks_, vector<int64_t>) };
            inline vector<int64_t> getAllowTasks() { DARABONBA_PTR_GET(allowTasks_, vector<int64_t>) };
            inline Target& setAllowTasks(const vector<int64_t> & allowTasks) { DARABONBA_PTR_SET_VALUE(allowTasks_, allowTasks) };
            inline Target& setAllowTasks(vector<int64_t> && allowTasks) { DARABONBA_PTR_SET_RVALUE(allowTasks_, allowTasks) };


            // ids Field Functions 
            bool hasIds() const { return this->ids_ != nullptr;};
            void deleteIds() { this->ids_ = nullptr;};
            inline const vector<int64_t> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
            inline vector<int64_t> getIds() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
            inline Target& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
            inline Target& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Target& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The nodes that are not to be monitored.
            shared_ptr<vector<int64_t>> allowTasks_ {};
            // The IDs of monitored objects.
            shared_ptr<vector<int64_t>> ids_ {};
            // The type of the monitored objects. Valid values:
            // 
            // *   Task: node
            // *   Baseline: baseline
            // *   Project: workspace
            // *   BizProcess: workflow
            shared_ptr<string> type_ {};
          };

          class Extension : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Extension& obj) { 
              DARABONBA_PTR_TO_JSON(CycleUnfinished, cycleUnfinished_);
              DARABONBA_PTR_TO_JSON(Error, error_);
              DARABONBA_PTR_TO_JSON(InstanceErrorCount, instanceErrorCount_);
              DARABONBA_PTR_TO_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
              DARABONBA_PTR_TO_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
              DARABONBA_PTR_TO_JSON(Timeout, timeout_);
              DARABONBA_PTR_TO_JSON(UnFinished, unFinished_);
            };
            friend void from_json(const Darabonba::Json& j, Extension& obj) { 
              DARABONBA_PTR_FROM_JSON(CycleUnfinished, cycleUnfinished_);
              DARABONBA_PTR_FROM_JSON(Error, error_);
              DARABONBA_PTR_FROM_JSON(InstanceErrorCount, instanceErrorCount_);
              DARABONBA_PTR_FROM_JSON(InstanceErrorPercentage, instanceErrorPercentage_);
              DARABONBA_PTR_FROM_JSON(InstanceTransferFluctuate, instanceTransferFluctuate_);
              DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
              DARABONBA_PTR_FROM_JSON(UnFinished, unFinished_);
            };
            Extension() = default ;
            Extension(const Extension &) = default ;
            Extension(Extension &&) = default ;
            Extension(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Extension() = default ;
            Extension& operator=(const Extension &) = default ;
            Extension& operator=(Extension &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class UnFinished : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const UnFinished& obj) { 
                DARABONBA_PTR_TO_JSON(UnFinishedTime, unFinishedTime_);
              };
              friend void from_json(const Darabonba::Json& j, UnFinished& obj) { 
                DARABONBA_PTR_FROM_JSON(UnFinishedTime, unFinishedTime_);
              };
              UnFinished() = default ;
              UnFinished(const UnFinished &) = default ;
              UnFinished(UnFinished &&) = default ;
              UnFinished(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~UnFinished() = default ;
              UnFinished& operator=(const UnFinished &) = default ;
              UnFinished& operator=(UnFinished &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->unFinishedTime_ == nullptr; };
              // unFinishedTime Field Functions 
              bool hasUnFinishedTime() const { return this->unFinishedTime_ != nullptr;};
              void deleteUnFinishedTime() { this->unFinishedTime_ = nullptr;};
              inline string getUnFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(unFinishedTime_, "") };
              inline UnFinished& setUnFinishedTime(string unFinishedTime) { DARABONBA_PTR_SET_VALUE(unFinishedTime_, unFinishedTime) };


            protected:
              // The latest completion time of the instance. The period is in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
              shared_ptr<string> unFinishedTime_ {};
            };

            class Timeout : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Timeout& obj) { 
                DARABONBA_PTR_TO_JSON(TimeoutInMinutes, timeoutInMinutes_);
              };
              friend void from_json(const Darabonba::Json& j, Timeout& obj) { 
                DARABONBA_PTR_FROM_JSON(TimeoutInMinutes, timeoutInMinutes_);
              };
              Timeout() = default ;
              Timeout(const Timeout &) = default ;
              Timeout(Timeout &&) = default ;
              Timeout(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Timeout() = default ;
              Timeout& operator=(const Timeout &) = default ;
              Timeout& operator=(Timeout &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->timeoutInMinutes_ == nullptr; };
              // timeoutInMinutes Field Functions 
              bool hasTimeoutInMinutes() const { return this->timeoutInMinutes_ != nullptr;};
              void deleteTimeoutInMinutes() { this->timeoutInMinutes_ = nullptr;};
              inline int32_t getTimeoutInMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutInMinutes_, 0) };
              inline Timeout& setTimeoutInMinutes(int32_t timeoutInMinutes) { DARABONBA_PTR_SET_VALUE(timeoutInMinutes_, timeoutInMinutes) };


            protected:
              // The timeout period. Unit: minutes.
              shared_ptr<int32_t> timeoutInMinutes_ {};
            };

            class InstanceTransferFluctuate : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const InstanceTransferFluctuate& obj) { 
                DARABONBA_PTR_TO_JSON(Percentage, percentage_);
                DARABONBA_PTR_TO_JSON(Trend, trend_);
              };
              friend void from_json(const Darabonba::Json& j, InstanceTransferFluctuate& obj) { 
                DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
                DARABONBA_PTR_FROM_JSON(Trend, trend_);
              };
              InstanceTransferFluctuate() = default ;
              InstanceTransferFluctuate(const InstanceTransferFluctuate &) = default ;
              InstanceTransferFluctuate(InstanceTransferFluctuate &&) = default ;
              InstanceTransferFluctuate(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~InstanceTransferFluctuate() = default ;
              InstanceTransferFluctuate& operator=(const InstanceTransferFluctuate &) = default ;
              InstanceTransferFluctuate& operator=(InstanceTransferFluctuate &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->percentage_ == nullptr
        && this->trend_ == nullptr; };
              // percentage Field Functions 
              bool hasPercentage() const { return this->percentage_ != nullptr;};
              void deletePercentage() { this->percentage_ = nullptr;};
              inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
              inline InstanceTransferFluctuate& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


              // trend Field Functions 
              bool hasTrend() const { return this->trend_ != nullptr;};
              void deleteTrend() { this->trend_ = nullptr;};
              inline string getTrend() const { DARABONBA_PTR_GET_DEFAULT(trend_, "") };
              inline InstanceTransferFluctuate& setTrend(string trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };


            protected:
              // The maximum percentage of fluctuation in the number of auto triggered node instances that are generated in your workspace. Valid values: [1-100].
              shared_ptr<int32_t> percentage_ {};
              // The way in which the number of auto triggered node instances that are generated in your workspace fluctuates. Valid values:
              // 
              // *   abs: the absolute value. The number of instances increases or decreases.
              // *   increase: The number of instances increases.
              // *   decrease: The number of instances decreases.
              shared_ptr<string> trend_ {};
            };

            class InstanceErrorPercentage : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const InstanceErrorPercentage& obj) { 
                DARABONBA_PTR_TO_JSON(Percentage, percentage_);
              };
              friend void from_json(const Darabonba::Json& j, InstanceErrorPercentage& obj) { 
                DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
              };
              InstanceErrorPercentage() = default ;
              InstanceErrorPercentage(const InstanceErrorPercentage &) = default ;
              InstanceErrorPercentage(InstanceErrorPercentage &&) = default ;
              InstanceErrorPercentage(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~InstanceErrorPercentage() = default ;
              InstanceErrorPercentage& operator=(const InstanceErrorPercentage &) = default ;
              InstanceErrorPercentage& operator=(InstanceErrorPercentage &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->percentage_ == nullptr; };
              // percentage Field Functions 
              bool hasPercentage() const { return this->percentage_ != nullptr;};
              void deletePercentage() { this->percentage_ = nullptr;};
              inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
              inline InstanceErrorPercentage& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


            protected:
              // The maximum percentage of instances on which an error occurs in the workspace to the total number of instances. Valid values: [1-100].
              shared_ptr<int32_t> percentage_ {};
            };

            class InstanceErrorCount : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const InstanceErrorCount& obj) { 
                DARABONBA_PTR_TO_JSON(Count, count_);
              };
              friend void from_json(const Darabonba::Json& j, InstanceErrorCount& obj) { 
                DARABONBA_PTR_FROM_JSON(Count, count_);
              };
              InstanceErrorCount() = default ;
              InstanceErrorCount(const InstanceErrorCount &) = default ;
              InstanceErrorCount(InstanceErrorCount &&) = default ;
              InstanceErrorCount(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~InstanceErrorCount() = default ;
              InstanceErrorCount& operator=(const InstanceErrorCount &) = default ;
              InstanceErrorCount& operator=(InstanceErrorCount &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->count_ == nullptr; };
              // count Field Functions 
              bool hasCount() const { return this->count_ != nullptr;};
              void deleteCount() { this->count_ = nullptr;};
              inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
              inline InstanceErrorCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            protected:
              // The maximum number of instances on which an error occurs. Valid values: [1,10000].
              shared_ptr<int32_t> count_ {};
            };

            class Error : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Error& obj) { 
                DARABONBA_PTR_TO_JSON(AutoRerunAlertEnabled, autoRerunAlertEnabled_);
                DARABONBA_PTR_TO_JSON(StreamTaskIds, streamTaskIds_);
              };
              friend void from_json(const Darabonba::Json& j, Error& obj) { 
                DARABONBA_PTR_FROM_JSON(AutoRerunAlertEnabled, autoRerunAlertEnabled_);
                DARABONBA_PTR_FROM_JSON(StreamTaskIds, streamTaskIds_);
              };
              Error() = default ;
              Error(const Error &) = default ;
              Error(Error &&) = default ;
              Error(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Error() = default ;
              Error& operator=(const Error &) = default ;
              Error& operator=(Error &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->autoRerunAlertEnabled_ == nullptr
        && this->streamTaskIds_ == nullptr; };
              // autoRerunAlertEnabled Field Functions 
              bool hasAutoRerunAlertEnabled() const { return this->autoRerunAlertEnabled_ != nullptr;};
              void deleteAutoRerunAlertEnabled() { this->autoRerunAlertEnabled_ = nullptr;};
              inline bool getAutoRerunAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRerunAlertEnabled_, false) };
              inline Error& setAutoRerunAlertEnabled(bool autoRerunAlertEnabled) { DARABONBA_PTR_SET_VALUE(autoRerunAlertEnabled_, autoRerunAlertEnabled) };


              // streamTaskIds Field Functions 
              bool hasStreamTaskIds() const { return this->streamTaskIds_ != nullptr;};
              void deleteStreamTaskIds() { this->streamTaskIds_ = nullptr;};
              inline const vector<int64_t> & getStreamTaskIds() const { DARABONBA_PTR_GET_CONST(streamTaskIds_, vector<int64_t>) };
              inline vector<int64_t> getStreamTaskIds() { DARABONBA_PTR_GET(streamTaskIds_, vector<int64_t>) };
              inline Error& setStreamTaskIds(const vector<int64_t> & streamTaskIds) { DARABONBA_PTR_SET_VALUE(streamTaskIds_, streamTaskIds) };
              inline Error& setStreamTaskIds(vector<int64_t> && streamTaskIds) { DARABONBA_PTR_SET_RVALUE(streamTaskIds_, streamTaskIds) };


            protected:
              // Indicates whether an alert is triggered if a batch synchronization task is automatically rerun upon a failure.
              shared_ptr<bool> autoRerunAlertEnabled_ {};
              // The IDs of the real-time computing tasks. This parameter is required when you monitor real-time computing tasks.
              shared_ptr<vector<int64_t>> streamTaskIds_ {};
            };

            class CycleUnfinished : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CycleUnfinished& obj) { 
                DARABONBA_PTR_TO_JSON(CycleAndTime, cycleAndTime_);
              };
              friend void from_json(const Darabonba::Json& j, CycleUnfinished& obj) { 
                DARABONBA_PTR_FROM_JSON(CycleAndTime, cycleAndTime_);
              };
              CycleUnfinished() = default ;
              CycleUnfinished(const CycleUnfinished &) = default ;
              CycleUnfinished(CycleUnfinished &&) = default ;
              CycleUnfinished(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CycleUnfinished() = default ;
              CycleUnfinished& operator=(const CycleUnfinished &) = default ;
              CycleUnfinished& operator=(CycleUnfinished &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class CycleAndTime : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const CycleAndTime& obj) { 
                  DARABONBA_PTR_TO_JSON(CycleId, cycleId_);
                  DARABONBA_PTR_TO_JSON(Time, time_);
                };
                friend void from_json(const Darabonba::Json& j, CycleAndTime& obj) { 
                  DARABONBA_PTR_FROM_JSON(CycleId, cycleId_);
                  DARABONBA_PTR_FROM_JSON(Time, time_);
                };
                CycleAndTime() = default ;
                CycleAndTime(const CycleAndTime &) = default ;
                CycleAndTime(CycleAndTime &&) = default ;
                CycleAndTime(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~CycleAndTime() = default ;
                CycleAndTime& operator=(const CycleAndTime &) = default ;
                CycleAndTime& operator=(CycleAndTime &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->cycleId_ == nullptr
        && this->time_ == nullptr; };
                // cycleId Field Functions 
                bool hasCycleId() const { return this->cycleId_ != nullptr;};
                void deleteCycleId() { this->cycleId_ = nullptr;};
                inline int32_t getCycleId() const { DARABONBA_PTR_GET_DEFAULT(cycleId_, 0) };
                inline CycleAndTime& setCycleId(int32_t cycleId) { DARABONBA_PTR_SET_VALUE(cycleId_, cycleId) };


                // time Field Functions 
                bool hasTime() const { return this->time_ != nullptr;};
                void deleteTime() { this->time_ = nullptr;};
                inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
                inline CycleAndTime& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


              protected:
                // The ID of the scheduling cycle of the instance. Valid values: [1,288].
                shared_ptr<int32_t> cycleId_ {};
                // The latest completion time of the instance within the scheduling cycle. The time is in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
                shared_ptr<string> time_ {};
              };

              virtual bool empty() const override { return this->cycleAndTime_ == nullptr; };
              // cycleAndTime Field Functions 
              bool hasCycleAndTime() const { return this->cycleAndTime_ != nullptr;};
              void deleteCycleAndTime() { this->cycleAndTime_ = nullptr;};
              inline const vector<CycleUnfinished::CycleAndTime> & getCycleAndTime() const { DARABONBA_PTR_GET_CONST(cycleAndTime_, vector<CycleUnfinished::CycleAndTime>) };
              inline vector<CycleUnfinished::CycleAndTime> getCycleAndTime() { DARABONBA_PTR_GET(cycleAndTime_, vector<CycleUnfinished::CycleAndTime>) };
              inline CycleUnfinished& setCycleAndTime(const vector<CycleUnfinished::CycleAndTime> & cycleAndTime) { DARABONBA_PTR_SET_VALUE(cycleAndTime_, cycleAndTime) };
              inline CycleUnfinished& setCycleAndTime(vector<CycleUnfinished::CycleAndTime> && cycleAndTime) { DARABONBA_PTR_SET_RVALUE(cycleAndTime_, cycleAndTime) };


            protected:
              // The configurations of the scheduling cycle and timeout period of the instance.
              shared_ptr<vector<CycleUnfinished::CycleAndTime>> cycleAndTime_ {};
            };

            virtual bool empty() const override { return this->cycleUnfinished_ == nullptr
        && this->error_ == nullptr && this->instanceErrorCount_ == nullptr && this->instanceErrorPercentage_ == nullptr && this->instanceTransferFluctuate_ == nullptr && this->timeout_ == nullptr
        && this->unFinished_ == nullptr; };
            // cycleUnfinished Field Functions 
            bool hasCycleUnfinished() const { return this->cycleUnfinished_ != nullptr;};
            void deleteCycleUnfinished() { this->cycleUnfinished_ = nullptr;};
            inline const Extension::CycleUnfinished & getCycleUnfinished() const { DARABONBA_PTR_GET_CONST(cycleUnfinished_, Extension::CycleUnfinished) };
            inline Extension::CycleUnfinished getCycleUnfinished() { DARABONBA_PTR_GET(cycleUnfinished_, Extension::CycleUnfinished) };
            inline Extension& setCycleUnfinished(const Extension::CycleUnfinished & cycleUnfinished) { DARABONBA_PTR_SET_VALUE(cycleUnfinished_, cycleUnfinished) };
            inline Extension& setCycleUnfinished(Extension::CycleUnfinished && cycleUnfinished) { DARABONBA_PTR_SET_RVALUE(cycleUnfinished_, cycleUnfinished) };


            // error Field Functions 
            bool hasError() const { return this->error_ != nullptr;};
            void deleteError() { this->error_ = nullptr;};
            inline const Extension::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, Extension::Error) };
            inline Extension::Error getError() { DARABONBA_PTR_GET(error_, Extension::Error) };
            inline Extension& setError(const Extension::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
            inline Extension& setError(Extension::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


            // instanceErrorCount Field Functions 
            bool hasInstanceErrorCount() const { return this->instanceErrorCount_ != nullptr;};
            void deleteInstanceErrorCount() { this->instanceErrorCount_ = nullptr;};
            inline const Extension::InstanceErrorCount & getInstanceErrorCount() const { DARABONBA_PTR_GET_CONST(instanceErrorCount_, Extension::InstanceErrorCount) };
            inline Extension::InstanceErrorCount getInstanceErrorCount() { DARABONBA_PTR_GET(instanceErrorCount_, Extension::InstanceErrorCount) };
            inline Extension& setInstanceErrorCount(const Extension::InstanceErrorCount & instanceErrorCount) { DARABONBA_PTR_SET_VALUE(instanceErrorCount_, instanceErrorCount) };
            inline Extension& setInstanceErrorCount(Extension::InstanceErrorCount && instanceErrorCount) { DARABONBA_PTR_SET_RVALUE(instanceErrorCount_, instanceErrorCount) };


            // instanceErrorPercentage Field Functions 
            bool hasInstanceErrorPercentage() const { return this->instanceErrorPercentage_ != nullptr;};
            void deleteInstanceErrorPercentage() { this->instanceErrorPercentage_ = nullptr;};
            inline const Extension::InstanceErrorPercentage & getInstanceErrorPercentage() const { DARABONBA_PTR_GET_CONST(instanceErrorPercentage_, Extension::InstanceErrorPercentage) };
            inline Extension::InstanceErrorPercentage getInstanceErrorPercentage() { DARABONBA_PTR_GET(instanceErrorPercentage_, Extension::InstanceErrorPercentage) };
            inline Extension& setInstanceErrorPercentage(const Extension::InstanceErrorPercentage & instanceErrorPercentage) { DARABONBA_PTR_SET_VALUE(instanceErrorPercentage_, instanceErrorPercentage) };
            inline Extension& setInstanceErrorPercentage(Extension::InstanceErrorPercentage && instanceErrorPercentage) { DARABONBA_PTR_SET_RVALUE(instanceErrorPercentage_, instanceErrorPercentage) };


            // instanceTransferFluctuate Field Functions 
            bool hasInstanceTransferFluctuate() const { return this->instanceTransferFluctuate_ != nullptr;};
            void deleteInstanceTransferFluctuate() { this->instanceTransferFluctuate_ = nullptr;};
            inline const Extension::InstanceTransferFluctuate & getInstanceTransferFluctuate() const { DARABONBA_PTR_GET_CONST(instanceTransferFluctuate_, Extension::InstanceTransferFluctuate) };
            inline Extension::InstanceTransferFluctuate getInstanceTransferFluctuate() { DARABONBA_PTR_GET(instanceTransferFluctuate_, Extension::InstanceTransferFluctuate) };
            inline Extension& setInstanceTransferFluctuate(const Extension::InstanceTransferFluctuate & instanceTransferFluctuate) { DARABONBA_PTR_SET_VALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };
            inline Extension& setInstanceTransferFluctuate(Extension::InstanceTransferFluctuate && instanceTransferFluctuate) { DARABONBA_PTR_SET_RVALUE(instanceTransferFluctuate_, instanceTransferFluctuate) };


            // timeout Field Functions 
            bool hasTimeout() const { return this->timeout_ != nullptr;};
            void deleteTimeout() { this->timeout_ = nullptr;};
            inline const Extension::Timeout & getTimeout() const { DARABONBA_PTR_GET_CONST(timeout_, Extension::Timeout) };
            inline Extension::Timeout getTimeout() { DARABONBA_PTR_GET(timeout_, Extension::Timeout) };
            inline Extension& setTimeout(const Extension::Timeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
            inline Extension& setTimeout(Extension::Timeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


            // unFinished Field Functions 
            bool hasUnFinished() const { return this->unFinished_ != nullptr;};
            void deleteUnFinished() { this->unFinished_ = nullptr;};
            inline const Extension::UnFinished & getUnFinished() const { DARABONBA_PTR_GET_CONST(unFinished_, Extension::UnFinished) };
            inline Extension::UnFinished getUnFinished() { DARABONBA_PTR_GET(unFinished_, Extension::UnFinished) };
            inline Extension& setUnFinished(const Extension::UnFinished & unFinished) { DARABONBA_PTR_SET_VALUE(unFinished_, unFinished) };
            inline Extension& setUnFinished(Extension::UnFinished && unFinished) { DARABONBA_PTR_SET_RVALUE(unFinished_, unFinished) };


          protected:
            // The configuration for an alert of the CycleUnfinished type.
            shared_ptr<Extension::CycleUnfinished> cycleUnfinished_ {};
            // The configuration for an alert of the Error type.
            shared_ptr<Extension::Error> error_ {};
            // The configuration for an alert of the InstanceErrorCount type.
            shared_ptr<Extension::InstanceErrorCount> instanceErrorCount_ {};
            // The configuration for an alert of the InstanceErrorPercentage type.
            shared_ptr<Extension::InstanceErrorPercentage> instanceErrorPercentage_ {};
            // The configuration for an alert of the InstanceTransferFluctuate type.
            shared_ptr<Extension::InstanceTransferFluctuate> instanceTransferFluctuate_ {};
            // The configuration for an alert of the Timeout type.
            shared_ptr<Extension::Timeout> timeout_ {};
            // The configuration for an alert of the UnFinished type.
            shared_ptr<Extension::UnFinished> unFinished_ {};
          };

          virtual bool empty() const override { return this->extension_ == nullptr
        && this->target_ == nullptr && this->type_ == nullptr; };
          // extension Field Functions 
          bool hasExtension() const { return this->extension_ != nullptr;};
          void deleteExtension() { this->extension_ = nullptr;};
          inline const TriggerCondition::Extension & getExtension() const { DARABONBA_PTR_GET_CONST(extension_, TriggerCondition::Extension) };
          inline TriggerCondition::Extension getExtension() { DARABONBA_PTR_GET(extension_, TriggerCondition::Extension) };
          inline TriggerCondition& setExtension(const TriggerCondition::Extension & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
          inline TriggerCondition& setExtension(TriggerCondition::Extension && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline const TriggerCondition::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, TriggerCondition::Target) };
          inline TriggerCondition::Target getTarget() { DARABONBA_PTR_GET(target_, TriggerCondition::Target) };
          inline TriggerCondition& setTarget(const TriggerCondition::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
          inline TriggerCondition& setTarget(TriggerCondition::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline TriggerCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The extended information about the rule. This parameter is required for specific types of alerts.
          shared_ptr<TriggerCondition::Extension> extension_ {};
          // The monitored objects.
          shared_ptr<TriggerCondition::Target> target_ {};
          // The alert type. Valid values:
          // 
          // *   Finished: An instance is successfully run.
          // *   UnFinished: An instance does not finish running before a specified point in time.
          // *   Error: An error occurs on an instance.
          // *   CycleUnfinished: An instance does not finish running as expected within a specific cycle.
          // *   Timeout: An instance times out.
          // *   InstanceTransferComplete: An instance is generated by the auto triggered node.
          // *   InstanceTransferFluctuate: The number of generated instances fluctuates.
          // *   ExhaustedError: An error persists after an instance is automatically rerun.
          // *   InstanceKeyword: An instance with errors contains specified keywords.
          // *   InstanceErrorCount: The number of instances on which an error occurs reaches a specified threshold.
          // *   InstanceErrorPercentage: The proportion of instances on which an error occurs in the workspace to the total number of instances reaches a specified threshold.
          // *   ResourceGroupPercentage: The usage rate of the resource group reaches a specified threshold.
          // *   ResourceGroupWaitCount: The number of instances that are waiting for resources in the resource group reaches a specified threshold.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->triggerCondition_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline AlertRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline AlertRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AlertRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline AlertRules& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // triggerCondition Field Functions 
        bool hasTriggerCondition() const { return this->triggerCondition_ != nullptr;};
        void deleteTriggerCondition() { this->triggerCondition_ = nullptr;};
        inline const AlertRules::TriggerCondition & getTriggerCondition() const { DARABONBA_PTR_GET_CONST(triggerCondition_, AlertRules::TriggerCondition) };
        inline AlertRules::TriggerCondition getTriggerCondition() { DARABONBA_PTR_GET(triggerCondition_, AlertRules::TriggerCondition) };
        inline AlertRules& setTriggerCondition(const AlertRules::TriggerCondition & triggerCondition) { DARABONBA_PTR_SET_VALUE(triggerCondition_, triggerCondition) };
        inline AlertRules& setTriggerCondition(AlertRules::TriggerCondition && triggerCondition) { DARABONBA_PTR_SET_RVALUE(triggerCondition_, triggerCondition) };


      protected:
        // Indicates whether the rule is enabled.
        shared_ptr<bool> enabled_ {};
        // The rule ID.
        shared_ptr<int64_t> id_ {};
        // The name of the rule.
        shared_ptr<string> name_ {};
        // The ID of the Alibaba Cloud account used by the owner of the rule.
        shared_ptr<string> owner_ {};
        // The alert triggering condition.
        shared_ptr<AlertRules::TriggerCondition> triggerCondition_ {};
      };

      virtual bool empty() const override { return this->alertRules_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // alertRules Field Functions 
      bool hasAlertRules() const { return this->alertRules_ != nullptr;};
      void deleteAlertRules() { this->alertRules_ = nullptr;};
      inline const vector<PagingInfo::AlertRules> & getAlertRules() const { DARABONBA_PTR_GET_CONST(alertRules_, vector<PagingInfo::AlertRules>) };
      inline vector<PagingInfo::AlertRules> getAlertRules() { DARABONBA_PTR_GET(alertRules_, vector<PagingInfo::AlertRules>) };
      inline PagingInfo& setAlertRules(const vector<PagingInfo::AlertRules> & alertRules) { DARABONBA_PTR_SET_VALUE(alertRules_, alertRules) };
      inline PagingInfo& setAlertRules(vector<PagingInfo::AlertRules> && alertRules) { DARABONBA_PTR_SET_RVALUE(alertRules_, alertRules) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The rules.
      shared_ptr<vector<PagingInfo::AlertRules>> alertRules_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListAlertRulesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListAlertRulesResponseBody::PagingInfo) };
    inline ListAlertRulesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListAlertRulesResponseBody::PagingInfo) };
    inline ListAlertRulesResponseBody& setPagingInfo(const ListAlertRulesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListAlertRulesResponseBody& setPagingInfo(ListAlertRulesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListAlertRulesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
