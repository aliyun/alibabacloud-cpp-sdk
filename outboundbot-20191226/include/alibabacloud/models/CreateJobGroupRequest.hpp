// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBGROUPREQUEST_HPP_
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
  class CreateJobGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(FlashSmsExtras, flashSmsExtras_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RecallCallingNumber, recallCallingNumber_);
      DARABONBA_PTR_TO_JSON(RecallStrategyJson, recallStrategyJson_);
      DARABONBA_PTR_TO_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(FlashSmsExtras, flashSmsExtras_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RecallCallingNumber, recallCallingNumber_);
      DARABONBA_PTR_FROM_JSON(RecallStrategyJson, recallStrategyJson_);
      DARABONBA_PTR_FROM_JSON(RingingDuration, ringingDuration_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
    };
    CreateJobGroupRequest() = default ;
    CreateJobGroupRequest(const CreateJobGroupRequest &) = default ;
    CreateJobGroupRequest(CreateJobGroupRequest &&) = default ;
    CreateJobGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobGroupRequest() = default ;
    CreateJobGroupRequest& operator=(const CreateJobGroupRequest &) = default ;
    CreateJobGroupRequest& operator=(CreateJobGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callingNumber_ == nullptr
        && this->flashSmsExtras_ == nullptr && this->instanceId_ == nullptr && this->jobGroupDescription_ == nullptr && this->jobGroupName_ == nullptr && this->minConcurrency_ == nullptr
        && this->priority_ == nullptr && this->recallCallingNumber_ == nullptr && this->recallStrategyJson_ == nullptr && this->ringingDuration_ == nullptr && this->scenarioId_ == nullptr
        && this->scriptId_ == nullptr && this->strategyJson_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & getCallingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> getCallingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline CreateJobGroupRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline CreateJobGroupRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // flashSmsExtras Field Functions 
    bool hasFlashSmsExtras() const { return this->flashSmsExtras_ != nullptr;};
    void deleteFlashSmsExtras() { this->flashSmsExtras_ = nullptr;};
    inline string getFlashSmsExtras() const { DARABONBA_PTR_GET_DEFAULT(flashSmsExtras_, "") };
    inline CreateJobGroupRequest& setFlashSmsExtras(string flashSmsExtras) { DARABONBA_PTR_SET_VALUE(flashSmsExtras_, flashSmsExtras) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateJobGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupDescription Field Functions 
    bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
    void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
    inline string getJobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
    inline CreateJobGroupRequest& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string getJobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline CreateJobGroupRequest& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int64_t getMinConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
    inline CreateJobGroupRequest& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateJobGroupRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recallCallingNumber Field Functions 
    bool hasRecallCallingNumber() const { return this->recallCallingNumber_ != nullptr;};
    void deleteRecallCallingNumber() { this->recallCallingNumber_ = nullptr;};
    inline const vector<string> & getRecallCallingNumber() const { DARABONBA_PTR_GET_CONST(recallCallingNumber_, vector<string>) };
    inline vector<string> getRecallCallingNumber() { DARABONBA_PTR_GET(recallCallingNumber_, vector<string>) };
    inline CreateJobGroupRequest& setRecallCallingNumber(const vector<string> & recallCallingNumber) { DARABONBA_PTR_SET_VALUE(recallCallingNumber_, recallCallingNumber) };
    inline CreateJobGroupRequest& setRecallCallingNumber(vector<string> && recallCallingNumber) { DARABONBA_PTR_SET_RVALUE(recallCallingNumber_, recallCallingNumber) };


    // recallStrategyJson Field Functions 
    bool hasRecallStrategyJson() const { return this->recallStrategyJson_ != nullptr;};
    void deleteRecallStrategyJson() { this->recallStrategyJson_ = nullptr;};
    inline string getRecallStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(recallStrategyJson_, "") };
    inline CreateJobGroupRequest& setRecallStrategyJson(string recallStrategyJson) { DARABONBA_PTR_SET_VALUE(recallStrategyJson_, recallStrategyJson) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t getRingingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline CreateJobGroupRequest& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline CreateJobGroupRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateJobGroupRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string getStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline CreateJobGroupRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    // The list of caller numbers. If not specified, all numbers bound to the instance are selected by default.
    shared_ptr<vector<string>> callingNumber_ {};
    // The configuration parameters for flash SMS push in JSON format, including the configuration information of third-party flash SMS.  
    // - templateId: the flash SMS template ID.  
    // - configId: the flash SMS configuration ID.
    // - templateContent: the flash SMS content.
    // 
    // > The value of templateContent must be obtained from the corresponding flash SMS capability partner.
    shared_ptr<string> flashSmsExtras_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The description of the job.
    shared_ptr<string> jobGroupDescription_ {};
    // The name of the job.
    // 
    // This parameter is required.
    shared_ptr<string> jobGroupName_ {};
    // The guaranteed concurrency.  
    // - When the job starts, a minimum of N concurrent calls are guaranteed.
    // - The sum of guaranteed concurrency for jobs of the same priority cannot exceed the instance concurrency.  
    // - If the guaranteed concurrency is set to 0, the system intelligently allocates idle concurrency.
    shared_ptr<int64_t> minConcurrency_ {};
    // The priority of the job group. Valid values:
    // - **Urgent**: urgent job.
    // - **Daily**: daily job.
    shared_ptr<string> priority_ {};
    // The list of caller numbers for redialing.
    shared_ptr<vector<string>> recallCallingNumber_ {};
    // The redial strategy in JSON format. The default value of the parameters in the JSON object is false.
    // 
    // - **emptyNumberIgnore**: specifies whether to skip nonexistent numbers.
    // - **inArrearsIgnore**: specifies whether to skip numbers with overdue payments.
    // - **outOfServiceIgnore**: specifies whether to skip suspended numbers.
    shared_ptr<string> recallStrategyJson_ {};
    // The optimal ringing duration. Default value: 25.
    shared_ptr<int64_t> ringingDuration_ {};
    // **[Deprecated]**
    shared_ptr<string> scenarioId_ {};
    // The scenario ID.
    shared_ptr<string> scriptId_ {};
    // The execution strategy of the job.  
    // - repeatBy: the repetition type. Valid values: Once (no repetition), Week (weekly repetition), and Month (monthly repetition).  
    // - startTime: the start time of the time-based strategy.
    // - endTime: the end time of the time-based strategy.  
    // > Execution methods:
    // > - If the start and end times of the strategy are not specified, the execution method is immediate execution.
    // > - If the strategy time is specified, the job is executed based on the time, and the repetition type repeatBy must be selected.
    // - workingTime: the time period during which outbound calls can be made.
    // - maxAttemptsPerDay: the maximum number of call attempts per day for numbers under this job.
    // - minAttemptInterval: the retry interval for numbers, in minutes.
    // - routingStrategy: the number strategy. Valid values: None (not specified), LocalFirst (local numbers first), and LocalProvinceFirst (local province numbers first).
    // - repeatDays: the execution days corresponding to the repetition type. If the repetition type RepeatBy is Week, 0 represents Sunday, and 1 to 6 represent Monday to Saturday. If the repetition cycle RepeatBy is Month, 1 to 31 represent the 1st to the 31st day. Months without the specified date are not executed. For example, if the 30th is selected, the job is not executed in February.
    // - repeatable: specifies whether to enable cyclic jobs. Valid values: true and false.
    shared_ptr<string> strategyJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
