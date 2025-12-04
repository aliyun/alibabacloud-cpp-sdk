// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOB_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobAssertCheckDetail.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobConfig.hpp>
#include <map>
#include <alibabacloud/models/JobStatusDetailValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetJobResponseBodyJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJob& obj) { 
      DARABONBA_PTR_TO_JSON(assertCheckDetail, assertCheckDetail_);
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_ANY_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(elapsedTime, elapsedTime_);
      DARABONBA_PTR_TO_JSON(executeType, executeType_);
      DARABONBA_PTR_TO_JSON(isPassAssertCheck, isPassAssertCheck_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(jobType, jobType_);
      DARABONBA_ANY_TO_JSON(logFile, logFile_);
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_ANY_TO_JSON(outputJsonPlan, outputJsonPlan_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJob& obj) { 
      DARABONBA_PTR_FROM_JSON(assertCheckDetail, assertCheckDetail_);
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_ANY_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(elapsedTime, elapsedTime_);
      DARABONBA_PTR_FROM_JSON(executeType, executeType_);
      DARABONBA_PTR_FROM_JSON(isPassAssertCheck, isPassAssertCheck_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(jobType, jobType_);
      DARABONBA_ANY_FROM_JSON(logFile, logFile_);
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_ANY_FROM_JSON(outputJsonPlan, outputJsonPlan_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
    };
    GetJobResponseBodyJob() = default ;
    GetJobResponseBodyJob(const GetJobResponseBodyJob &) = default ;
    GetJobResponseBodyJob(GetJobResponseBodyJob &&) = default ;
    GetJobResponseBodyJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJob() = default ;
    GetJobResponseBodyJob& operator=(const GetJobResponseBodyJob &) = default ;
    GetJobResponseBodyJob& operator=(GetJobResponseBodyJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assertCheckDetail_ == nullptr
        && return this->config_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->downloadUrl_ == nullptr && return this->elapsedTime_ == nullptr
        && return this->executeType_ == nullptr && return this->isPassAssertCheck_ == nullptr && return this->jobId_ == nullptr && return this->jobType_ == nullptr && return this->logFile_ == nullptr
        && return this->output_ == nullptr && return this->outputJsonPlan_ == nullptr && return this->parameters_ == nullptr && return this->status_ == nullptr && return this->statusDetail_ == nullptr
        && return this->taskId_ == nullptr && return this->taskType_ == nullptr && return this->terraformProviderVersion_ == nullptr; };
    // assertCheckDetail Field Functions 
    bool hasAssertCheckDetail() const { return this->assertCheckDetail_ != nullptr;};
    void deleteAssertCheckDetail() { this->assertCheckDetail_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobAssertCheckDetail> & assertCheckDetail() const { DARABONBA_PTR_GET_CONST(assertCheckDetail_, vector<Models::GetJobResponseBodyJobAssertCheckDetail>) };
    inline vector<Models::GetJobResponseBodyJobAssertCheckDetail> assertCheckDetail() { DARABONBA_PTR_GET(assertCheckDetail_, vector<Models::GetJobResponseBodyJobAssertCheckDetail>) };
    inline GetJobResponseBodyJob& setAssertCheckDetail(const vector<Models::GetJobResponseBodyJobAssertCheckDetail> & assertCheckDetail) { DARABONBA_PTR_SET_VALUE(assertCheckDetail_, assertCheckDetail) };
    inline GetJobResponseBodyJob& setAssertCheckDetail(vector<Models::GetJobResponseBodyJobAssertCheckDetail> && assertCheckDetail) { DARABONBA_PTR_SET_RVALUE(assertCheckDetail_, assertCheckDetail) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::GetJobResponseBodyJobConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::GetJobResponseBodyJobConfig) };
    inline Models::GetJobResponseBodyJobConfig config() { DARABONBA_PTR_GET(config_, Models::GetJobResponseBodyJobConfig) };
    inline GetJobResponseBodyJob& setConfig(const Models::GetJobResponseBodyJobConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetJobResponseBodyJob& setConfig(Models::GetJobResponseBodyJobConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobResponseBodyJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetJobResponseBodyJob& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline     const Darabonba::Json & downloadUrl() const { DARABONBA_GET(downloadUrl_) };
    Darabonba::Json & downloadUrl() { DARABONBA_GET(downloadUrl_) };
    inline GetJobResponseBodyJob& setDownloadUrl(const Darabonba::Json & downloadUrl) { DARABONBA_SET_VALUE(downloadUrl_, downloadUrl) };
    inline GetJobResponseBodyJob& setDownloadUrl(Darabonba::Json & downloadUrl) { DARABONBA_SET_RVALUE(downloadUrl_, downloadUrl) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline GetJobResponseBodyJob& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // executeType Field Functions 
    bool hasExecuteType() const { return this->executeType_ != nullptr;};
    void deleteExecuteType() { this->executeType_ = nullptr;};
    inline string executeType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, "") };
    inline GetJobResponseBodyJob& setExecuteType(string executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


    // isPassAssertCheck Field Functions 
    bool hasIsPassAssertCheck() const { return this->isPassAssertCheck_ != nullptr;};
    void deleteIsPassAssertCheck() { this->isPassAssertCheck_ = nullptr;};
    inline bool isPassAssertCheck() const { DARABONBA_PTR_GET_DEFAULT(isPassAssertCheck_, false) };
    inline GetJobResponseBodyJob& setIsPassAssertCheck(bool isPassAssertCheck) { DARABONBA_PTR_SET_VALUE(isPassAssertCheck_, isPassAssertCheck) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobResponseBodyJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobResponseBodyJob& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // logFile Field Functions 
    bool hasLogFile() const { return this->logFile_ != nullptr;};
    void deleteLogFile() { this->logFile_ = nullptr;};
    inline     const Darabonba::Json & logFile() const { DARABONBA_GET(logFile_) };
    Darabonba::Json & logFile() { DARABONBA_GET(logFile_) };
    inline GetJobResponseBodyJob& setLogFile(const Darabonba::Json & logFile) { DARABONBA_SET_VALUE(logFile_, logFile) };
    inline GetJobResponseBodyJob& setLogFile(Darabonba::Json & logFile) { DARABONBA_SET_RVALUE(logFile_, logFile) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline GetJobResponseBodyJob& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // outputJsonPlan Field Functions 
    bool hasOutputJsonPlan() const { return this->outputJsonPlan_ != nullptr;};
    void deleteOutputJsonPlan() { this->outputJsonPlan_ = nullptr;};
    inline     const Darabonba::Json & outputJsonPlan() const { DARABONBA_GET(outputJsonPlan_) };
    Darabonba::Json & outputJsonPlan() { DARABONBA_GET(outputJsonPlan_) };
    inline GetJobResponseBodyJob& setOutputJsonPlan(const Darabonba::Json & outputJsonPlan) { DARABONBA_SET_VALUE(outputJsonPlan_, outputJsonPlan) };
    inline GetJobResponseBodyJob& setOutputJsonPlan(Darabonba::Json & outputJsonPlan) { DARABONBA_SET_RVALUE(outputJsonPlan_, outputJsonPlan) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline GetJobResponseBodyJob& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetJobResponseBodyJob& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobResponseBodyJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline const map<string, Models::JobStatusDetailValue> & statusDetail() const { DARABONBA_PTR_GET_CONST(statusDetail_, map<string, Models::JobStatusDetailValue>) };
    inline map<string, Models::JobStatusDetailValue> statusDetail() { DARABONBA_PTR_GET(statusDetail_, map<string, Models::JobStatusDetailValue>) };
    inline GetJobResponseBodyJob& setStatusDetail(const map<string, Models::JobStatusDetailValue> & statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };
    inline GetJobResponseBodyJob& setStatusDetail(map<string, Models::JobStatusDetailValue> && statusDetail) { DARABONBA_PTR_SET_RVALUE(statusDetail_, statusDetail) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetJobResponseBodyJob& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetJobResponseBodyJob& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline GetJobResponseBodyJob& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


  protected:
    std::shared_ptr<vector<Models::GetJobResponseBodyJobAssertCheckDetail>> assertCheckDetail_ = nullptr;
    std::shared_ptr<Models::GetJobResponseBodyJobConfig> config_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    Darabonba::Json downloadUrl_ = nullptr;
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    std::shared_ptr<string> executeType_ = nullptr;
    std::shared_ptr<bool> isPassAssertCheck_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    Darabonba::Json logFile_ = nullptr;
    std::shared_ptr<string> output_ = nullptr;
    Darabonba::Json outputJsonPlan_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<map<string, Models::JobStatusDetailValue>> statusDetail_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
