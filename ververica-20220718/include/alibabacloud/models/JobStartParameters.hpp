// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBSTARTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_JOBSTARTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LocalVariable.hpp>
#include <alibabacloud/models/DeploymentRestoreStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class JobStartParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobStartParameters& obj) { 
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(localVariables, localVariables_);
      DARABONBA_PTR_TO_JSON(resourceQueueName, resourceQueueName_);
      DARABONBA_PTR_TO_JSON(restoreStrategy, restoreStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, JobStartParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(localVariables, localVariables_);
      DARABONBA_PTR_FROM_JSON(resourceQueueName, resourceQueueName_);
      DARABONBA_PTR_FROM_JSON(restoreStrategy, restoreStrategy_);
    };
    JobStartParameters() = default ;
    JobStartParameters(const JobStartParameters &) = default ;
    JobStartParameters(JobStartParameters &&) = default ;
    JobStartParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobStartParameters() = default ;
    JobStartParameters& operator=(const JobStartParameters &) = default ;
    JobStartParameters& operator=(JobStartParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr
        && return this->jobId_ == nullptr && return this->localVariables_ == nullptr && return this->resourceQueueName_ == nullptr && return this->restoreStrategy_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string deploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline JobStartParameters& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline JobStartParameters& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // localVariables Field Functions 
    bool hasLocalVariables() const { return this->localVariables_ != nullptr;};
    void deleteLocalVariables() { this->localVariables_ = nullptr;};
    inline const vector<LocalVariable> & localVariables() const { DARABONBA_PTR_GET_CONST(localVariables_, vector<LocalVariable>) };
    inline vector<LocalVariable> localVariables() { DARABONBA_PTR_GET(localVariables_, vector<LocalVariable>) };
    inline JobStartParameters& setLocalVariables(const vector<LocalVariable> & localVariables) { DARABONBA_PTR_SET_VALUE(localVariables_, localVariables) };
    inline JobStartParameters& setLocalVariables(vector<LocalVariable> && localVariables) { DARABONBA_PTR_SET_RVALUE(localVariables_, localVariables) };


    // resourceQueueName Field Functions 
    bool hasResourceQueueName() const { return this->resourceQueueName_ != nullptr;};
    void deleteResourceQueueName() { this->resourceQueueName_ = nullptr;};
    inline string resourceQueueName() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueName_, "") };
    inline JobStartParameters& setResourceQueueName(string resourceQueueName) { DARABONBA_PTR_SET_VALUE(resourceQueueName_, resourceQueueName) };


    // restoreStrategy Field Functions 
    bool hasRestoreStrategy() const { return this->restoreStrategy_ != nullptr;};
    void deleteRestoreStrategy() { this->restoreStrategy_ = nullptr;};
    inline const DeploymentRestoreStrategy & restoreStrategy() const { DARABONBA_PTR_GET_CONST(restoreStrategy_, DeploymentRestoreStrategy) };
    inline DeploymentRestoreStrategy restoreStrategy() { DARABONBA_PTR_GET(restoreStrategy_, DeploymentRestoreStrategy) };
    inline JobStartParameters& setRestoreStrategy(const DeploymentRestoreStrategy & restoreStrategy) { DARABONBA_PTR_SET_VALUE(restoreStrategy_, restoreStrategy) };
    inline JobStartParameters& setRestoreStrategy(DeploymentRestoreStrategy && restoreStrategy) { DARABONBA_PTR_SET_RVALUE(restoreStrategy_, restoreStrategy) };


  protected:
    std::shared_ptr<string> deploymentId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<vector<LocalVariable>> localVariables_ = nullptr;
    std::shared_ptr<string> resourceQueueName_ = nullptr;
    std::shared_ptr<DeploymentRestoreStrategy> restoreStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
