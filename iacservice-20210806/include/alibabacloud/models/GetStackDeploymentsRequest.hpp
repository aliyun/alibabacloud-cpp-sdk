// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKDEPLOYMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKDEPLOYMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetStackDeploymentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackDeploymentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(configVersion, configVersion_);
      DARABONBA_PTR_TO_JSON(deploymentName, deploymentName_);
      DARABONBA_PTR_TO_JSON(deploymentNo, deploymentNo_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackDeploymentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(configVersion, configVersion_);
      DARABONBA_PTR_FROM_JSON(deploymentName, deploymentName_);
      DARABONBA_PTR_FROM_JSON(deploymentNo, deploymentNo_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetStackDeploymentsRequest() = default ;
    GetStackDeploymentsRequest(const GetStackDeploymentsRequest &) = default ;
    GetStackDeploymentsRequest(GetStackDeploymentsRequest &&) = default ;
    GetStackDeploymentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackDeploymentsRequest() = default ;
    GetStackDeploymentsRequest& operator=(const GetStackDeploymentsRequest &) = default ;
    GetStackDeploymentsRequest& operator=(GetStackDeploymentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configVersion_ == nullptr
        && this->deploymentName_ == nullptr && this->deploymentNo_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // configVersion Field Functions 
    bool hasConfigVersion() const { return this->configVersion_ != nullptr;};
    void deleteConfigVersion() { this->configVersion_ = nullptr;};
    inline string getConfigVersion() const { DARABONBA_PTR_GET_DEFAULT(configVersion_, "") };
    inline GetStackDeploymentsRequest& setConfigVersion(string configVersion) { DARABONBA_PTR_SET_VALUE(configVersion_, configVersion) };


    // deploymentName Field Functions 
    bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
    void deleteDeploymentName() { this->deploymentName_ = nullptr;};
    inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
    inline GetStackDeploymentsRequest& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


    // deploymentNo Field Functions 
    bool hasDeploymentNo() const { return this->deploymentNo_ != nullptr;};
    void deleteDeploymentNo() { this->deploymentNo_ = nullptr;};
    inline string getDeploymentNo() const { DARABONBA_PTR_GET_DEFAULT(deploymentNo_, "") };
    inline GetStackDeploymentsRequest& setDeploymentNo(string deploymentNo) { DARABONBA_PTR_SET_VALUE(deploymentNo_, deploymentNo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetStackDeploymentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetStackDeploymentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetStackDeploymentsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The configuration version, such as v1. The initial value is v1. The version number increments each time the stack is updated or refreshed and the configuration changes.
    shared_ptr<string> configVersion_ {};
    // The deployment name.
    shared_ptr<string> deploymentName_ {};
    // The deployment number. The deployment number of each stack starts from 1 and increments each time a deployment is triggered.
    shared_ptr<string> deploymentNo_ {};
    // The page number, starting from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of results per page. Default value: 20. Minimum value: 1. Maximum value: 200.
    shared_ptr<int32_t> pageSize_ {};
    // The deployment status.
    // | Name | Description |
    // |------|------|
    // | Pending | The initial status after a deployment is created. |
    // | PriorityQueued | The deployment is queued by priority. |
    // | PlanQueued | The deployment is queued because no workflow is available after the deployment is created. |
    // | ApplyQueued | The deployment is queued because no workflow is available during execution. |
    // | Planning | The resource deployment is in the Plan phase. |
    // | Planned | The resource deployment has completed the Plan phase. |
    // | ConfigProactiveInProgress | A compliance pre-check is in progress. |
    // | ConfigProactiveSuccess | The compliance pre-check succeeded. |
    // | DetectInProgress | Drift detection is in progress. |
    // | ImportQueued | The deployment is queued because no workflow is available during the Import phase. |
    // | Importing | The resource deployment is in the Import phase. |
    // | Imported | The resource deployment has completed the Import phase. |
    // | StateQueued | The deployment is queued because no workflow is available during the state command execution. |
    // | Stating | The resource deployment is executing the state command. |
    // | Stated | The resource deployment has completed the state command execution. |
    // | Confirmed | The resource deployment has been confirmed after the Plan phase. |
    // | PlannedAndFinished | No differences were found after the Plan phase. The deployment is in a final status. |
    // | Applying | The resource deployment is in the Apply phase. |
    // | Applied | The resource deployment has completed the Apply phase. |
    // | Discarded | The resource deployment has been discarded and is in a final status. |
    // | Errored | The deployment encountered an error and is in a final status. |
    // | ConfigProactiveFailure | The compliance pre-check failed. |
    // | Canceled | The deployment has been canceled and is in a final status. |.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
