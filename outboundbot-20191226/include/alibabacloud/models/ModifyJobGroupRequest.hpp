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
        && return this->description_ == nullptr && return this->flashSmsExtras_ == nullptr && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobGroupStatus_ == nullptr
        && return this->minConcurrency_ == nullptr && return this->name_ == nullptr && return this->priority_ == nullptr && return this->recallCallingNumber_ == nullptr && return this->recallStrategyJson_ == nullptr
        && return this->ringingDuration_ == nullptr && return this->scenarioId_ == nullptr && return this->scriptId_ == nullptr && return this->strategyJson_ == nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & callingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> callingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline ModifyJobGroupRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline ModifyJobGroupRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyJobGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flashSmsExtras Field Functions 
    bool hasFlashSmsExtras() const { return this->flashSmsExtras_ != nullptr;};
    void deleteFlashSmsExtras() { this->flashSmsExtras_ = nullptr;};
    inline string flashSmsExtras() const { DARABONBA_PTR_GET_DEFAULT(flashSmsExtras_, "") };
    inline ModifyJobGroupRequest& setFlashSmsExtras(string flashSmsExtras) { DARABONBA_PTR_SET_VALUE(flashSmsExtras_, flashSmsExtras) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyJobGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline ModifyJobGroupRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupStatus Field Functions 
    bool hasJobGroupStatus() const { return this->jobGroupStatus_ != nullptr;};
    void deleteJobGroupStatus() { this->jobGroupStatus_ = nullptr;};
    inline string jobGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(jobGroupStatus_, "") };
    inline ModifyJobGroupRequest& setJobGroupStatus(string jobGroupStatus) { DARABONBA_PTR_SET_VALUE(jobGroupStatus_, jobGroupStatus) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int64_t minConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0L) };
    inline ModifyJobGroupRequest& setMinConcurrency(int64_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyJobGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ModifyJobGroupRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recallCallingNumber Field Functions 
    bool hasRecallCallingNumber() const { return this->recallCallingNumber_ != nullptr;};
    void deleteRecallCallingNumber() { this->recallCallingNumber_ = nullptr;};
    inline const vector<string> & recallCallingNumber() const { DARABONBA_PTR_GET_CONST(recallCallingNumber_, vector<string>) };
    inline vector<string> recallCallingNumber() { DARABONBA_PTR_GET(recallCallingNumber_, vector<string>) };
    inline ModifyJobGroupRequest& setRecallCallingNumber(const vector<string> & recallCallingNumber) { DARABONBA_PTR_SET_VALUE(recallCallingNumber_, recallCallingNumber) };
    inline ModifyJobGroupRequest& setRecallCallingNumber(vector<string> && recallCallingNumber) { DARABONBA_PTR_SET_RVALUE(recallCallingNumber_, recallCallingNumber) };


    // recallStrategyJson Field Functions 
    bool hasRecallStrategyJson() const { return this->recallStrategyJson_ != nullptr;};
    void deleteRecallStrategyJson() { this->recallStrategyJson_ = nullptr;};
    inline string recallStrategyJson() const { DARABONBA_PTR_GET_DEFAULT(recallStrategyJson_, "") };
    inline ModifyJobGroupRequest& setRecallStrategyJson(string recallStrategyJson) { DARABONBA_PTR_SET_VALUE(recallStrategyJson_, recallStrategyJson) };


    // ringingDuration Field Functions 
    bool hasRingingDuration() const { return this->ringingDuration_ != nullptr;};
    void deleteRingingDuration() { this->ringingDuration_ = nullptr;};
    inline int64_t ringingDuration() const { DARABONBA_PTR_GET_DEFAULT(ringingDuration_, 0L) };
    inline ModifyJobGroupRequest& setRingingDuration(int64_t ringingDuration) { DARABONBA_PTR_SET_VALUE(ringingDuration_, ringingDuration) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline ModifyJobGroupRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyJobGroupRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string strategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline ModifyJobGroupRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


  protected:
    std::shared_ptr<vector<string>> callingNumber_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> flashSmsExtras_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobGroupStatus_ = nullptr;
    std::shared_ptr<int64_t> minConcurrency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
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
