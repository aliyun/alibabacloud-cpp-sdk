// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestDependencyPolicy.hpp>
#include <alibabacloud/models/CreateJobRequestDeploymentPolicy.hpp>
#include <alibabacloud/models/CreateJobRequestSecurityPolicy.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DependencyPolicy, dependencyPolicy_);
      DARABONBA_PTR_TO_JSON(DeploymentPolicy, deploymentPolicy_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DependencyPolicy, dependencyPolicy_);
      DARABONBA_PTR_FROM_JSON(DeploymentPolicy, deploymentPolicy_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    CreateJobRequest() = default ;
    CreateJobRequest(const CreateJobRequest &) = default ;
    CreateJobRequest(CreateJobRequest &&) = default ;
    CreateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequest() = default ;
    CreateJobRequest& operator=(const CreateJobRequest &) = default ;
    CreateJobRequest& operator=(CreateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependencyPolicy_ == nullptr
        && return this->deploymentPolicy_ == nullptr && return this->jobDescription_ == nullptr && return this->jobName_ == nullptr && return this->jobScheduler_ == nullptr && return this->securityPolicy_ == nullptr
        && return this->tasks_ == nullptr; };
    // dependencyPolicy Field Functions 
    bool hasDependencyPolicy() const { return this->dependencyPolicy_ != nullptr;};
    void deleteDependencyPolicy() { this->dependencyPolicy_ = nullptr;};
    inline const CreateJobRequestDependencyPolicy & dependencyPolicy() const { DARABONBA_PTR_GET_CONST(dependencyPolicy_, CreateJobRequestDependencyPolicy) };
    inline CreateJobRequestDependencyPolicy dependencyPolicy() { DARABONBA_PTR_GET(dependencyPolicy_, CreateJobRequestDependencyPolicy) };
    inline CreateJobRequest& setDependencyPolicy(const CreateJobRequestDependencyPolicy & dependencyPolicy) { DARABONBA_PTR_SET_VALUE(dependencyPolicy_, dependencyPolicy) };
    inline CreateJobRequest& setDependencyPolicy(CreateJobRequestDependencyPolicy && dependencyPolicy) { DARABONBA_PTR_SET_RVALUE(dependencyPolicy_, dependencyPolicy) };


    // deploymentPolicy Field Functions 
    bool hasDeploymentPolicy() const { return this->deploymentPolicy_ != nullptr;};
    void deleteDeploymentPolicy() { this->deploymentPolicy_ = nullptr;};
    inline const CreateJobRequestDeploymentPolicy & deploymentPolicy() const { DARABONBA_PTR_GET_CONST(deploymentPolicy_, CreateJobRequestDeploymentPolicy) };
    inline CreateJobRequestDeploymentPolicy deploymentPolicy() { DARABONBA_PTR_GET(deploymentPolicy_, CreateJobRequestDeploymentPolicy) };
    inline CreateJobRequest& setDeploymentPolicy(const CreateJobRequestDeploymentPolicy & deploymentPolicy) { DARABONBA_PTR_SET_VALUE(deploymentPolicy_, deploymentPolicy) };
    inline CreateJobRequest& setDeploymentPolicy(CreateJobRequestDeploymentPolicy && deploymentPolicy) { DARABONBA_PTR_SET_RVALUE(deploymentPolicy_, deploymentPolicy) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string jobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline CreateJobRequest& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobScheduler Field Functions 
    bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
    void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
    inline string jobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
    inline CreateJobRequest& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


    // securityPolicy Field Functions 
    bool hasSecurityPolicy() const { return this->securityPolicy_ != nullptr;};
    void deleteSecurityPolicy() { this->securityPolicy_ = nullptr;};
    inline const CreateJobRequestSecurityPolicy & securityPolicy() const { DARABONBA_PTR_GET_CONST(securityPolicy_, CreateJobRequestSecurityPolicy) };
    inline CreateJobRequestSecurityPolicy securityPolicy() { DARABONBA_PTR_GET(securityPolicy_, CreateJobRequestSecurityPolicy) };
    inline CreateJobRequest& setSecurityPolicy(const CreateJobRequestSecurityPolicy & securityPolicy) { DARABONBA_PTR_SET_VALUE(securityPolicy_, securityPolicy) };
    inline CreateJobRequest& setSecurityPolicy(CreateJobRequestSecurityPolicy && securityPolicy) { DARABONBA_PTR_SET_RVALUE(securityPolicy_, securityPolicy) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<CreateJobRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<CreateJobRequestTasks>) };
    inline vector<CreateJobRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<CreateJobRequestTasks>) };
    inline CreateJobRequest& setTasks(const vector<CreateJobRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline CreateJobRequest& setTasks(vector<CreateJobRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // Dependency policy.
    std::shared_ptr<CreateJobRequestDependencyPolicy> dependencyPolicy_ = nullptr;
    // The resource deployment policy.
    std::shared_ptr<CreateJobRequestDeploymentPolicy> deploymentPolicy_ = nullptr;
    // The description of the job.
    std::shared_ptr<string> jobDescription_ = nullptr;
    // The job name. The name must be 2 to 64 characters in length and can contain letters, digits, and Chinese characters. It can contain hyphens (-) and underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> jobName_ = nullptr;
    // The type of the job scheduler.
    // 
    // *   HPC
    // *   K8S
    // 
    // Default value: HPC
    std::shared_ptr<string> jobScheduler_ = nullptr;
    // The security policy.
    std::shared_ptr<CreateJobRequestSecurityPolicy> securityPolicy_ = nullptr;
    // The list of tasks. Only one task is supported.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateJobRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
