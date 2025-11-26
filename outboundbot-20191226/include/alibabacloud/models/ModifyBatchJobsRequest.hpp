// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBATCHJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBATCHJOBSREQUEST_HPP_
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
  class ModifyBatchJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBatchJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchJobName, batchJobName_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
      DARABONBA_PTR_TO_JSON(Submitted, submitted_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBatchJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchJobName, batchJobName_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
      DARABONBA_PTR_FROM_JSON(Submitted, submitted_);
    };
    ModifyBatchJobsRequest() = default ;
    ModifyBatchJobsRequest(const ModifyBatchJobsRequest &) = default ;
    ModifyBatchJobsRequest(ModifyBatchJobsRequest &&) = default ;
    ModifyBatchJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBatchJobsRequest() = default ;
    ModifyBatchJobsRequest& operator=(const ModifyBatchJobsRequest &) = default ;
    ModifyBatchJobsRequest& operator=(ModifyBatchJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchJobName_ == nullptr
        && return this->callingNumber_ == nullptr && return this->description_ == nullptr && return this->instanceId_ == nullptr && return this->jobFilePath_ == nullptr && return this->jobGroupId_ == nullptr
        && return this->scenarioId_ == nullptr && return this->scriptId_ == nullptr && return this->strategyJson_ == nullptr && return this->submitted_ == nullptr; };
    // batchJobName Field Functions 
    bool hasBatchJobName() const { return this->batchJobName_ != nullptr;};
    void deleteBatchJobName() { this->batchJobName_ = nullptr;};
    inline string batchJobName() const { DARABONBA_PTR_GET_DEFAULT(batchJobName_, "") };
    inline ModifyBatchJobsRequest& setBatchJobName(string batchJobName) { DARABONBA_PTR_SET_VALUE(batchJobName_, batchJobName) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & callingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> callingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline ModifyBatchJobsRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline ModifyBatchJobsRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyBatchJobsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyBatchJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobFilePath Field Functions 
    bool hasJobFilePath() const { return this->jobFilePath_ != nullptr;};
    void deleteJobFilePath() { this->jobFilePath_ = nullptr;};
    inline string jobFilePath() const { DARABONBA_PTR_GET_DEFAULT(jobFilePath_, "") };
    inline ModifyBatchJobsRequest& setJobFilePath(string jobFilePath) { DARABONBA_PTR_SET_VALUE(jobFilePath_, jobFilePath) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline ModifyBatchJobsRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline ModifyBatchJobsRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyBatchJobsRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string strategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline ModifyBatchJobsRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


    // submitted Field Functions 
    bool hasSubmitted() const { return this->submitted_ != nullptr;};
    void deleteSubmitted() { this->submitted_ = nullptr;};
    inline bool submitted() const { DARABONBA_PTR_GET_DEFAULT(submitted_, false) };
    inline ModifyBatchJobsRequest& setSubmitted(bool submitted) { DARABONBA_PTR_SET_VALUE(submitted_, submitted) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> batchJobName_ = nullptr;
    std::shared_ptr<vector<string>> callingNumber_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobFilePath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> strategyJson_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> submitted_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
