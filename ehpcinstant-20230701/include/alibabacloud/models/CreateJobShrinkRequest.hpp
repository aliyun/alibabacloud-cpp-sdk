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
    virtual bool empty() const override { this->dependencyPolicyShrink_ != nullptr
        && this->deploymentPolicyShrink_ != nullptr && this->jobDescription_ != nullptr && this->jobName_ != nullptr && this->jobScheduler_ != nullptr && this->securityPolicyShrink_ != nullptr
        && this->tasksShrink_ != nullptr; };
    // dependencyPolicyShrink Field Functions 
    bool hasDependencyPolicyShrink() const { return this->dependencyPolicyShrink_ != nullptr;};
    void deleteDependencyPolicyShrink() { this->dependencyPolicyShrink_ = nullptr;};
    inline string dependencyPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(dependencyPolicyShrink_, "") };
    inline CreateJobShrinkRequest& setDependencyPolicyShrink(string dependencyPolicyShrink) { DARABONBA_PTR_SET_VALUE(dependencyPolicyShrink_, dependencyPolicyShrink) };


    // deploymentPolicyShrink Field Functions 
    bool hasDeploymentPolicyShrink() const { return this->deploymentPolicyShrink_ != nullptr;};
    void deleteDeploymentPolicyShrink() { this->deploymentPolicyShrink_ = nullptr;};
    inline string deploymentPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(deploymentPolicyShrink_, "") };
    inline CreateJobShrinkRequest& setDeploymentPolicyShrink(string deploymentPolicyShrink) { DARABONBA_PTR_SET_VALUE(deploymentPolicyShrink_, deploymentPolicyShrink) };


    // jobDescription Field Functions 
    bool hasJobDescription() const { return this->jobDescription_ != nullptr;};
    void deleteJobDescription() { this->jobDescription_ = nullptr;};
    inline string jobDescription() const { DARABONBA_PTR_GET_DEFAULT(jobDescription_, "") };
    inline CreateJobShrinkRequest& setJobDescription(string jobDescription) { DARABONBA_PTR_SET_VALUE(jobDescription_, jobDescription) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateJobShrinkRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobScheduler Field Functions 
    bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
    void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
    inline string jobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
    inline CreateJobShrinkRequest& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


    // securityPolicyShrink Field Functions 
    bool hasSecurityPolicyShrink() const { return this->securityPolicyShrink_ != nullptr;};
    void deleteSecurityPolicyShrink() { this->securityPolicyShrink_ = nullptr;};
    inline string securityPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyShrink_, "") };
    inline CreateJobShrinkRequest& setSecurityPolicyShrink(string securityPolicyShrink) { DARABONBA_PTR_SET_VALUE(securityPolicyShrink_, securityPolicyShrink) };


    // tasksShrink Field Functions 
    bool hasTasksShrink() const { return this->tasksShrink_ != nullptr;};
    void deleteTasksShrink() { this->tasksShrink_ = nullptr;};
    inline string tasksShrink() const { DARABONBA_PTR_GET_DEFAULT(tasksShrink_, "") };
    inline CreateJobShrinkRequest& setTasksShrink(string tasksShrink) { DARABONBA_PTR_SET_VALUE(tasksShrink_, tasksShrink) };


  protected:
    std::shared_ptr<string> dependencyPolicyShrink_ = nullptr;
    std::shared_ptr<string> deploymentPolicyShrink_ = nullptr;
    std::shared_ptr<string> jobDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> jobScheduler_ = nullptr;
    std::shared_ptr<string> securityPolicyShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tasksShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
