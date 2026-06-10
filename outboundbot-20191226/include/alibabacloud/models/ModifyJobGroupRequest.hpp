// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYJOBGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYJOBGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyJobGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyJobGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlashSmsExtras, flashSmsExtras_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobGroupStatus, jobGroupStatus_);
      DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RecallCallingNumber, recallCallingNumber_);
      DARABONBA_PTR_TO_JSON(RecallStrategyJson, recallStrategyJson_);
      DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyJobGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlashSmsExtras, flashSmsExtras_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobGroupStatus, jobGroupStatus_);
      DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RecallCallingNumber, recallCallingNumber_);
      DARABONBA_PTR_FROM_JSON(RecallStrategyJson, recallStrategyJson_);
      DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
    };
    ModifyJobGroupRequest() = default ;
    ModifyJobGroupRequest(const ModifyJobGroupRequest &) = default ;
    ModifyJobGroupRequest(ModifyJobGroupRequest &&) = default ;
    ModifyJobGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyJobGroupRequest() = default ;
    ModifyJobGroupRequest& operator=(const ModifyJobGroupRequest &) = default ;
    ModifyJobGroupRequest& operator=(ModifyJobGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumber_ == nullptr
        && this->description_ == nullptr && this->flashSmsExtras_ == nullptr && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobGroupStatus_ == nullptr
        && this->minConcurrency_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr && this->recallCallingNumber_ == nullptr && this->recallStrategyJson_ == nullptr
        && this->ringingDuration_ == nullptr && this->scenarioId_ == nullptr && this->scriptId_ == nullptr && this->strategyJson_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & getCallingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> getCallingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline ModifyJobGroupRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline ModifyJobGroupRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyJobGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flashSmsExtras Field Functions 
    bool hasFlashSmsExtras() const { return this->flashSmsExtras_ != nullptr;};
    void deleteFlashSmsExtras() { this->flashSmsExtras_ = nullptr;};
    inline string getFlashSmsExtras() const { DARABONBA_PTR_GET_DEFAULT(flashSmsExtras_, "") };
    inline ModifyJobGroupRequest& setFlashSmsExtras(string flashSmsExtras) { DARABONBA_PTR_SET_VALUE(flashSmsExtras_, flashSmsExtras) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyJobGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline ModifyJobGroupRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupStatus Field Functions 
    bool hasJobGroupStatus() const { return this->jobGroupStatus_ != nullptr;};
    void deleteJobGroupStatus() { this->jobGroupStatus_ = nullptr;};
    inline string getJobGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(jobGroupStatus_, "") };
    inline ModifyJobGroupRequest& setJobGroupStatus(string jobGroupStatus) { DARABONBA_PTR_SET_VALUE(jobGroupStatus_, jobGroupStatus) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int64_t getMinConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
    inline ModifyJobGroupRequest& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyJobGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ModifyJobGroupRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recallCallingNumber Field Functions 
    bool hasRecallCallingNumber() const { return this->recallCallingNumber_ != nullptr;};
    void deleteRecallCallingNumber() { this->recallCallingNumber_ = nullptr;};
    inline const vector<string> & getRecallCallingNumber() const { DARABONBA_PTR_GET_CONST(recallCallingNumber_, vector<string>) };
    inline vector<string> getRecallCallingNumber() { DARABONBA_PTR_GET(recallCallingNumber_, vector<string>) };
    inline ModifyJobGroupRequest& setRecallCallingNumber(const vector<string> & recallCallingNumber) { DARABONBA_PTR_SET_VALUE(recallCallingNumber_, recallCallingNumber) };
    inline ModifyJobGroupRequest& setRecallCallingNumber(vector<string> && recallCallingNumber) { DARABONBA_PTR_SET_RVALUE(recallCallingNumber_, recallCallingNumber) };


    // recallStrategyJson Field Functions 
    bool hasRecallStrategyJson() const { return this->recallStrategyJson_ != nullptr;};
    void deleteRecallStrategyJson() { this->recallStrategyJson_ = nullptr;};
    inline string getRecallStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(recallStrategyJson_, "") };
    inline ModifyJobGroupRequest& setRecallStrategyJson(string recallStrategyJson) { DARABONBA_PTR_SET_VALUE(recallStrategyJson_, recallStrategyJson) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t getRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline ModifyJobGroupRequest& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline ModifyJobGroupRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyJobGroupRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string getStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline ModifyJobGroupRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    // The calling numbers for the job group.
    shared_ptr<vector<string>> callingNumber_ {};
    // The description of the job group.
    shared_ptr<string> description_ {};
    // The flash SMS configuration, specified as a JSON string. This may include settings for third-party flash SMS services.
    // 
    // `templateId`: The flash SMS template ID.<br>
    // `configId`: The flash SMS configuration ID.<br>
    shared_ptr<string> flashSmsExtras_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The job group ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobGroupId_ {};
    // The status of the job group. Valid values:
    // 
    // - `Draft`: The job group is in a draft state.
    // 
    // - `Paused`: The job group is paused.
    shared_ptr<string> jobGroupStatus_ {};
    // The guaranteed minimum number of concurrent calls for the job group. The sum of this value for all job groups with the same priority cannot exceed the instance\\"s total concurrency. If you set this parameter to `0`, the system dynamically allocates available lines from a shared pool.
    shared_ptr<int64_t> minConcurrency_ {};
    // The name of the job group.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The priority of the job group. Valid values:
    // 
    // - **Urgent**: An urgent job.
    // 
    // - **Daily**: A routine job.
    shared_ptr<string> priority_ {};
    // The recall calling numbers.
    shared_ptr<vector<string>> recallCallingNumber_ {};
    // A JSON string that defines the recall strategy.
    shared_ptr<string> recallStrategyJson_ {};
    // The optimal ringing duration.
    shared_ptr<int64_t> ringingDuration_ {};
    // The scenario ID. (This is a legacy parameter. Use `ScriptId` instead.)
    // 
    // > You can pass any value for this legacy parameter, but we recommend using the same value as `ScriptId` for consistency.
    shared_ptr<string> scenarioId_ {};
    // The ID of the script for the scenario.
    shared_ptr<string> scriptId_ {};
    // A JSON string that defines the execution strategy for the job group.
    // 
    // - `id`: The ID of the job group strategy. You can obtain this ID from the `StrategyId` parameter returned by the `DescribeJobGroup` operation.
    // 
    // - `repeatBy`: The frequency of the job. Valid values: `Once` (does not repeat), `Day` (repeats daily), `Week` (repeats weekly), and `Month` (repeats monthly).
    // 
    // - `startTime`: The start time of the strategy.
    // 
    // - `endTime`: The end time of the strategy.
    // 
    // - `workingTime`: The time windows for making outbound calls.
    // 
    // - `maxAttemptsPerDay`: The maximum number of call attempts per day for a number in this job group.
    // 
    // - `minAttemptInterval`: The minimum interval, in minutes, between call retries to the same number.
    // 
    // - `routingStrategy`: The number routing strategy. Valid values: `None` (not specified), `LocalFirst` (prioritizes numbers in the same city), and `LocalProvinceFirst` (prioritizes numbers in the same province).
    // 
    // - `repeatDays`: The specific days to run the job, based on the `repeatBy` value. If `repeatBy` is `Week`, `0` indicates Sunday, and `1` through `6` indicate Monday through Saturday. If `repeatBy` is `Month`, valid values are `1` through `31`. If a month does not have the specified day (for example, day 30 in February), the job does not run on that day.
    // 
    // - `repeatable`: Whether the job is recurring. Valid values are `true` and `false`.
    shared_ptr<string> strategyJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
