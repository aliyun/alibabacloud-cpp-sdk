// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DependencyPolicy, dependencyPolicyShrink_);
      DARABONBA_PTR_TO_JSON(DeploymentPolicy, deploymentPolicyShrink_);
      DARABONBA_PTR_TO_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicyShrink_);
      DARABONBA_PTR_TO_JSON(Tasks, tasksShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DependencyPolicy, dependencyPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(DeploymentPolicy, deploymentPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(JobDescription, jobDescription_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasksShrink_);
    };
    CreateJobShrinkRequest() = default ;
    CreateJobShrinkRequest(const CreateJobShrinkRequest &) = default ;
    CreateJobShrinkRequest(CreateJobShrinkRequest &&) = default ;
    CreateJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobShrinkRequest() = default ;
    CreateJobShrinkRequest& operator=(const CreateJobShrinkRequest &) = default ;
    CreateJobShrinkRequest& operator=(CreateJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependencyPolicyShrink_ == nullptr
        && this->deploymentPolicyShrink_ == nullptr && this->jobDescription_ == nullptr && this->jobName_ == nullptr && this->jobScheduler_ == nullptr && this->securityPolicyShrink_ == nullptr
        && this->tasksShrink_ == nullptr; };
    // dependencyPolicyShrink Field Functions 
    bool hasDependencyPolicyShrink() const { return this->dependencyPolicyShrink_ != nullptr;};
    void deleteDependencyPolicyShrink() { this->dependencyPolicyShrink_ = nullptr;};
    inline string getDependencyPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(dependencyPolicyShrink_, "") };
    inline CreateJobShrinkRequest& setDependencyPolicyShrink(string dependencyPolicyShrink) { DARABONBA_PTR_SET_VALUE(dependencyPolicyShrink_, dependencyPolicyShrink) };


    // deploymentPolicyShrink Field Functions 
    bool hasDeploymentPolicyShrink() const { return this->deploymentPolicyShrink_ != nullptr;};
    void deleteDeploymentPolicyShrink() { this->deploymentPolicyShrink_ = nullptr;};
    inline string getDeploymentPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(deploymentPolicyShrink_, "") };
    inline CreateJobShrinkRequest& setDeploymentPolicyShrink(string deploymentPolicyShrink) { DARABONBA_PTR_SET_VALUE(deploymentPolicyShrink_, deploymentPolicyShrink) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string getJobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline CreateJobShrinkRequest& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateJobShrinkRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobScheduler Field Functions 
    bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
    void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
    inline string getJobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
    inline CreateJobShrinkRequest& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


    // securityPolicyShrink Field Functions 
    bool hasSecurityPolicyShrink() const { return this->securityPolicyShrink_ != nullptr;};
    void deleteSecurityPolicyShrink() { this->securityPolicyShrink_ = nullptr;};
    inline string getSecurityPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyShrink_, "") };
    inline CreateJobShrinkRequest& setSecurityPolicyShrink(string securityPolicyShrink) { DARABONBA_PTR_SET_VALUE(securityPolicyShrink_, securityPolicyShrink) };


    // tasksShrink Field Functions 
    bool hasTasksShrink() const { return this->tasksShrink_ != nullptr;};
    void deleteTasksShrink() { this->tasksShrink_ = nullptr;};
    inline string getTasksShrink() const { DARABONBA_PTR_GET_DEFAULT(tasksShrink_, "") };
    inline CreateJobShrinkRequest& setTasksShrink(string tasksShrink) { DARABONBA_PTR_SET_VALUE(tasksShrink_, tasksShrink) };


  protected:
    // Dependency policy.
    shared_ptr<string> dependencyPolicyShrink_ {};
    // The resource deployment policy.
    shared_ptr<string> deploymentPolicyShrink_ {};
    // The description of the job.
    shared_ptr<string> jobDescription_ {};
    // The job name. The name must be 2 to 64 characters in length and can contain letters, digits, and Chinese characters. It can contain hyphens (-) and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // The type of the job scheduler.
    // 
    // *   HPC
    // *   K8S
    // 
    // Default value: HPC
    shared_ptr<string> jobScheduler_ {};
    // The security policy.
    shared_ptr<string> securityPolicyShrink_ {};
    // The list of tasks. Only one task is supported.
    // 
    // This parameter is required.
    shared_ptr<string> tasksShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
