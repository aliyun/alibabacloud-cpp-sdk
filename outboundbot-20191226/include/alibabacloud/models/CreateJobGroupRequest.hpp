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
        && return this->flashSmsExtras_ == nullptr && return this->instanceId_ == nullptr && return this->jobGroupDescription_ == nullptr && return this->jobGroupName_ == nullptr && return this->minConcurrency_ == nullptr
        && return this->priority_ == nullptr && return this->recallCallingNumber_ == nullptr && return this->recallStrategyJson_ == nullptr && return this->ringingDuration_ == nullptr && return this->scenarioId_ == nullptr
        && return this->scriptId_ == nullptr && return this->strategyJson_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & callingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> callingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline CreateJobGroupRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline CreateJobGroupRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // flashSmsExtras Field Functions 
    bool hasFlashSmsExtras() const { return this->flashSmsExtras_ != nullptr;};
    void deleteFlashSmsExtras() { this->flashSmsExtras_ = nullptr;};
    inline string flashSmsExtras() const { DARABONBA_PTR_GET_DEFAULT(flashSmsExtras_, "") };
    inline CreateJobGroupRequest& setFlashSmsExtras(string flashSmsExtras) { DARABONBA_PTR_SET_VALUE(flashSmsExtras_, flashSmsExtras) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateJobGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupDescription Field Functions 
    bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
    void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
    inline string jobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
    inline CreateJobGroupRequest& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string jobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline CreateJobGroupRequest& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int64_t minConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
    inline CreateJobGroupRequest& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateJobGroupRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recallCallingNumber Field Functions 
    bool hasRecallCallingNumber() const { return this->recallCallingNumber_ != nullptr;};
    void deleteRecallCallingNumber() { this->recallCallingNumber_ = nullptr;};
    inline const vector<string> & recallCallingNumber() const { DARABONBA_PTR_GET_CONST(recallCallingNumber_, vector<string>) };
    inline vector<string> recallCallingNumber() { DARABONBA_PTR_GET(recallCallingNumber_, vector<string>) };
    inline CreateJobGroupRequest& setRecallCallingNumber(const vector<string> & recallCallingNumber) { DARABONBA_PTR_SET_VALUE(recallCallingNumber_, recallCallingNumber) };
    inline CreateJobGroupRequest& setRecallCallingNumber(vector<string> && recallCallingNumber) { DARABONBA_PTR_SET_RVALUE(recallCallingNumber_, recallCallingNumber) };


    // recallStrategyJson Field Functions 
    bool hasRecallStrategyJson() const { return this->recallStrategyJson_ != nullptr;};
    void deleteRecallStrategyJson() { this->recallStrategyJson_ = nullptr;};
    inline string recallStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(recallStrategyJson_, "") };
    inline CreateJobGroupRequest& setRecallStrategyJson(string recallStrategyJson) { DARABONBA_PTR_SET_VALUE(recallStrategyJson_, recallStrategyJson) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t ringingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline CreateJobGroupRequest& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline CreateJobGroupRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateJobGroupRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string strategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline CreateJobGroupRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    std::shared_ptr<vector<string>> callingNumber_ = nullptr;
    std::shared_ptr<string> flashSmsExtras_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobGroupName_ = nullptr;
    std::shared_ptr<int64_t> minConcurrency_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<vector<string>> recallCallingNumber_ = nullptr;
    std::shared_ptr<string> recallStrategyJson_ = nullptr;
    std::shared_ptr<int64_t> ringingDuration_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> strategyJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
