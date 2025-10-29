// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYJOBS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobsResponseBodyJobsConfig.hpp>
#include <map>
#include <alibabacloud/models/JobsStatusDetailValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListJobsResponseBodyJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(elapsedTime, elapsedTime_);
      DARABONBA_PTR_TO_JSON(executeType, executeType_);
      DARABONBA_PTR_TO_JSON(isPassAssertCheck, isPassAssertCheck_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusDetail, statusDetail_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(elapsedTime, elapsedTime_);
      DARABONBA_PTR_FROM_JSON(executeType, executeType_);
      DARABONBA_PTR_FROM_JSON(isPassAssertCheck, isPassAssertCheck_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusDetail, statusDetail_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
    };
    ListJobsResponseBodyJobs() = default ;
    ListJobsResponseBodyJobs(const ListJobsResponseBodyJobs &) = default ;
    ListJobsResponseBodyJobs(ListJobsResponseBodyJobs &&) = default ;
    ListJobsResponseBodyJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyJobs() = default ;
    ListJobsResponseBodyJobs& operator=(const ListJobsResponseBodyJobs &) = default ;
    ListJobsResponseBodyJobs& operator=(ListJobsResponseBodyJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->elapsedTime_ == nullptr && return this->executeType_ == nullptr && return this->isPassAssertCheck_ == nullptr
        && return this->jobId_ == nullptr && return this->status_ == nullptr && return this->statusDetail_ == nullptr && return this->taskId_ == nullptr && return this->terraformProviderVersion_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::ListJobsResponseBodyJobsConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::ListJobsResponseBodyJobsConfig) };
    inline Models::ListJobsResponseBodyJobsConfig config() { DARABONBA_PTR_GET(config_, Models::ListJobsResponseBodyJobsConfig) };
    inline ListJobsResponseBodyJobs& setConfig(const Models::ListJobsResponseBodyJobsConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListJobsResponseBodyJobs& setConfig(Models::ListJobsResponseBodyJobsConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListJobsResponseBodyJobs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListJobsResponseBodyJobs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline ListJobsResponseBodyJobs& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // executeType Field Functions 
    bool hasExecuteType() const { return this->executeType_ != nullptr;};
    void deleteExecuteType() { this->executeType_ = nullptr;};
    inline string executeType() const { DARABONBA_PTR_GET_DEFAULT(executeType_, "") };
    inline ListJobsResponseBodyJobs& setExecuteType(string executeType) { DARABONBA_PTR_SET_VALUE(executeType_, executeType) };


    // isPassAssertCheck Field Functions 
    bool hasIsPassAssertCheck() const { return this->isPassAssertCheck_ != nullptr;};
    void deleteIsPassAssertCheck() { this->isPassAssertCheck_ = nullptr;};
    inline bool isPassAssertCheck() const { DARABONBA_PTR_GET_DEFAULT(isPassAssertCheck_, false) };
    inline ListJobsResponseBodyJobs& setIsPassAssertCheck(bool isPassAssertCheck) { DARABONBA_PTR_SET_VALUE(isPassAssertCheck_, isPassAssertCheck) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobsResponseBodyJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsResponseBodyJobs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDetail Field Functions 
    bool hasStatusDetail() const { return this->statusDetail_ != nullptr;};
    void deleteStatusDetail() { this->statusDetail_ = nullptr;};
    inline const map<string, Models::JobsStatusDetailValue> & statusDetail() const { DARABONBA_PTR_GET_CONST(statusDetail_, map<string, Models::JobsStatusDetailValue>) };
    inline map<string, Models::JobsStatusDetailValue> statusDetail() { DARABONBA_PTR_GET(statusDetail_, map<string, Models::JobsStatusDetailValue>) };
    inline ListJobsResponseBodyJobs& setStatusDetail(const map<string, Models::JobsStatusDetailValue> & statusDetail) { DARABONBA_PTR_SET_VALUE(statusDetail_, statusDetail) };
    inline ListJobsResponseBodyJobs& setStatusDetail(map<string, Models::JobsStatusDetailValue> && statusDetail) { DARABONBA_PTR_SET_RVALUE(statusDetail_, statusDetail) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListJobsResponseBodyJobs& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline ListJobsResponseBodyJobs& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


  protected:
    std::shared_ptr<Models::ListJobsResponseBodyJobsConfig> config_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    std::shared_ptr<string> executeType_ = nullptr;
    std::shared_ptr<bool> isPassAssertCheck_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<map<string, Models::JobsStatusDetailValue>> statusDetail_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
