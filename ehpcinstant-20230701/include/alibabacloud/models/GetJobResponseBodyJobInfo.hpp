// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFO_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoDependencyPolicy.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoDeploymentPolicy.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppExtraInfo, appExtraInfo_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DependencyPolicy, dependencyPolicy_);
      DARABONBA_PTR_TO_JSON(DeploymentPolicy, deploymentPolicy_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppExtraInfo, appExtraInfo_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DependencyPolicy, dependencyPolicy_);
      DARABONBA_PTR_FROM_JSON(DeploymentPolicy, deploymentPolicy_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    GetJobResponseBodyJobInfo() = default ;
    GetJobResponseBodyJobInfo(const GetJobResponseBodyJobInfo &) = default ;
    GetJobResponseBodyJobInfo(GetJobResponseBodyJobInfo &&) = default ;
    GetJobResponseBodyJobInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfo() = default ;
    GetJobResponseBodyJobInfo& operator=(const GetJobResponseBodyJobInfo &) = default ;
    GetJobResponseBodyJobInfo& operator=(GetJobResponseBodyJobInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appExtraInfo_ != nullptr
        && this->createTime_ != nullptr && this->dependencyPolicy_ != nullptr && this->deploymentPolicy_ != nullptr && this->endTime_ != nullptr && this->jobDescription_ != nullptr
        && this->jobId_ != nullptr && this->jobName_ != nullptr && this->jobScheduler_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr
        && this->tasks_ != nullptr; };
    // appExtraInfo Field Functions 
    bool hasAppExtraInfo() const { return this->appExtraInfo_ != nullptr;};
    void deleteAppExtraInfo() { this->appExtraInfo_ = nullptr;};
    inline string appExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(appExtraInfo_, "") };
    inline GetJobResponseBodyJobInfo& setAppExtraInfo(string appExtraInfo) { DARABONBA_PTR_SET_VALUE(appExtraInfo_, appExtraInfo) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobResponseBodyJobInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dependencyPolicy Field Functions 
    bool hasDependencyPolicy() const { return this->dependencyPolicy_ != nullptr;};
    void deleteDependencyPolicy() { this->dependencyPolicy_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoDependencyPolicy & dependencyPolicy() const { DARABONBA_PTR_GET_CONST(dependencyPolicy_, Models::GetJobResponseBodyJobInfoDependencyPolicy) };
    inline Models::GetJobResponseBodyJobInfoDependencyPolicy dependencyPolicy() { DARABONBA_PTR_GET(dependencyPolicy_, Models::GetJobResponseBodyJobInfoDependencyPolicy) };
    inline GetJobResponseBodyJobInfo& setDependencyPolicy(const Models::GetJobResponseBodyJobInfoDependencyPolicy & dependencyPolicy) { DARABONBA_PTR_SET_VALUE(dependencyPolicy_, dependencyPolicy) };
    inline GetJobResponseBodyJobInfo& setDependencyPolicy(Models::GetJobResponseBodyJobInfoDependencyPolicy && dependencyPolicy) { DARABONBA_PTR_SET_RVALUE(dependencyPolicy_, dependencyPolicy) };


    // deploymentPolicy Field Functions 
    bool hasDeploymentPolicy() const { return this->deploymentPolicy_ != nullptr;};
    void deleteDeploymentPolicy() { this->deploymentPolicy_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoDeploymentPolicy & deploymentPolicy() const { DARABONBA_PTR_GET_CONST(deploymentPolicy_, Models::GetJobResponseBodyJobInfoDeploymentPolicy) };
    inline Models::GetJobResponseBodyJobInfoDeploymentPolicy deploymentPolicy() { DARABONBA_PTR_GET(deploymentPolicy_, Models::GetJobResponseBodyJobInfoDeploymentPolicy) };
    inline GetJobResponseBodyJobInfo& setDeploymentPolicy(const Models::GetJobResponseBodyJobInfoDeploymentPolicy & deploymentPolicy) { DARABONBA_PTR_SET_VALUE(deploymentPolicy_, deploymentPolicy) };
    inline GetJobResponseBodyJobInfo& setDeploymentPolicy(Models::GetJobResponseBodyJobInfoDeploymentPolicy && deploymentPolicy) { DARABONBA_PTR_SET_RVALUE(deploymentPolicy_, deploymentPolicy) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetJobResponseBodyJobInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string jobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline GetJobResponseBodyJobInfo& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobResponseBodyJobInfo& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetJobResponseBodyJobInfo& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobScheduler Field Functions 
    bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
    void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
    inline string jobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
    inline GetJobResponseBodyJobInfo& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetJobResponseBodyJobInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobResponseBodyJobInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobInfoTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Models::GetJobResponseBodyJobInfoTasks>) };
    inline vector<Models::GetJobResponseBodyJobInfoTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<Models::GetJobResponseBodyJobInfoTasks>) };
    inline GetJobResponseBodyJobInfo& setTasks(const vector<Models::GetJobResponseBodyJobInfoTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline GetJobResponseBodyJobInfo& setTasks(vector<Models::GetJobResponseBodyJobInfoTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    std::shared_ptr<string> appExtraInfo_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<Models::GetJobResponseBodyJobInfoDependencyPolicy> dependencyPolicy_ = nullptr;
    std::shared_ptr<Models::GetJobResponseBodyJobInfoDeploymentPolicy> deploymentPolicy_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> jobDescription_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> jobScheduler_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::GetJobResponseBodyJobInfoTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
