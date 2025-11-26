// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHJOBSREQUEST_HPP_
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
  class CreateBatchJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchJobDescription, batchJobDescription_);
      DARABONBA_PTR_TO_JSON(BatchJobName, batchJobName_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(StrategyJson, strategyJson_);
      DARABONBA_PTR_TO_JSON(Submitted, submitted_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchJobDescription, batchJobDescription_);
      DARABONBA_PTR_FROM_JSON(BatchJobName, batchJobName_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobFilePath, jobFilePath_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(StrategyJson, strategyJson_);
      DARABONBA_PTR_FROM_JSON(Submitted, submitted_);
    };
    CreateBatchJobsRequest() = default ;
    CreateBatchJobsRequest(const CreateBatchJobsRequest &) = default ;
    CreateBatchJobsRequest(CreateBatchJobsRequest &&) = default ;
    CreateBatchJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchJobsRequest() = default ;
    CreateBatchJobsRequest& operator=(const CreateBatchJobsRequest &) = default ;
    CreateBatchJobsRequest& operator=(CreateBatchJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchJobDescription_ == nullptr
        && return this->batchJobName_ == nullptr && return this->callingNumber_ == nullptr && return this->instanceId_ == nullptr && return this->jobFilePath_ == nullptr && return this->scenarioId_ == nullptr
        && return this->scriptId_ == nullptr && return this->strategyJson_ == nullptr && return this->submitted_ == nullptr; };
    // batchJobDescription Field Functions 
    bool hasBatchJobDescription() const { return this->batchJobDescription_ != nullptr;};
    void deleteBatchJobDescription() { this->batchJobDescription_ = nullptr;};
    inline string batchJobDescription() const { DARABONBA_PTR_GET_DEFAULT(batchJobDescription_, "") };
    inline CreateBatchJobsRequest& setBatchJobDescription(string batchJobDescription) { DARABONBA_PTR_SET_VALUE(batchJobDescription_, batchJobDescription) };


    // batchJobName Field Functions 
    bool hasBatchJobName() const { return this->batchJobName_ != nullptr;};
    void deleteBatchJobName() { this->batchJobName_ = nullptr;};
    inline string batchJobName() const { DARABONBA_PTR_GET_DEFAULT(batchJobName_, "") };
    inline CreateBatchJobsRequest& setBatchJobName(string batchJobName) { DARABONBA_PTR_SET_VALUE(batchJobName_, batchJobName) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline const vector<string> & callingNumber() const { DARABONBA_PTR_GET_CONST(callingNumber_, vector<string>) };
    inline vector<string> callingNumber() { DARABONBA_PTR_GET(callingNumber_, vector<string>) };
    inline CreateBatchJobsRequest& setCallingNumber(const vector<string> & callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };
    inline CreateBatchJobsRequest& setCallingNumber(vector<string> && callingNumber) { DARABONBA_PTR_SET_RVALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBatchJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobFilePath Field Functions 
    bool hasJobFilePath() const { return this->jobFilePath_ != nullptr;};
    void deleteJobFilePath() { this->jobFilePath_ = nullptr;};
    inline string jobFilePath() const { DARABONBA_PTR_GET_DEFAULT(jobFilePath_, "") };
    inline CreateBatchJobsRequest& setJobFilePath(string jobFilePath) { DARABONBA_PTR_SET_VALUE(jobFilePath_, jobFilePath) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline CreateBatchJobsRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateBatchJobsRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // strategyJson Field Functions 
    bool hasStrategyJson() const { return this->strategyJson_ != nullptr;};
    void deleteStrategyJson() { this->strategyJson_ = nullptr;};
    inline string strategyJson() const { DARABONBA_PTR_GET_DEFAULT(strategyJson_, "") };
    inline CreateBatchJobsRequest& setStrategyJson(string strategyJson) { DARABONBA_PTR_SET_VALUE(strategyJson_, strategyJson) };


    // submitted Field Functions 
    bool hasSubmitted() const { return this->submitted_ != nullptr;};
    void deleteSubmitted() { this->submitted_ = nullptr;};
    inline bool submitted() const { DARABONBA_PTR_GET_DEFAULT(submitted_, false) };
    inline CreateBatchJobsRequest& setSubmitted(bool submitted) { DARABONBA_PTR_SET_VALUE(submitted_, submitted) };


  protected:
    std::shared_ptr<string> batchJobDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> batchJobName_ = nullptr;
    std::shared_ptr<vector<string>> callingNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobFilePath_ = nullptr;
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
