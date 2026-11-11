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
    // The name of the deployment.
    shared_ptr<string> deploymentName_ {};
    // The deployment number. The deployment number of each stack starts from 1 and increments each time a deployment is successfully triggered.
    shared_ptr<string> deploymentNo_ {};
    // The page number. Pages start from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: 20. Minimum value: 1. Maximum value: 200.
    shared_ptr<int32_t> pageSize_ {};
    // The deployment status. Valid values:
    // | Name | Description |
    // |------|------|
    // | Pending | The initial status after the deployment is created. |
    // | PriorityQueued | The deployment is queued with priority. |
    // | PlanQueued | The deployment is queued and waiting for an available workflow after it is created. |
    // | ApplyQueued | The deployment is queued and waiting for an available workflow during execution. |
    // | Planning | The deployment is in the plan phase. |
    // | Planned | The deployment has completed the plan phase. |
    // | ConfigProactiveInProgress | The compliance precheck is in progress. |
    // | ConfigProactiveSuccess | The compliance precheck is successful. |
    // | DetectInProgress | Drift detection is in progress. |
    // | ImportQueued | The deployment is queued and waiting for an available workflow during the import phase. |
    // | Importing | The deployment is in the import phase. |
    // | Imported | The deployment has completed the import phase. |
    // | StateQueued | The deployment is queued and waiting for an available workflow during the state command execution. |
    // | Stating | The deployment is executing the state command. |
    // | Stated | The deployment has completed the execution of the state command. |
    // | Confirmed | The deployment is confirmed after the plan phase. |
    // | PlannedAndFinished | The deployment is in the final state because no differences are found after the plan phase. |
    // | Applying | The deployment is in the apply phase. |
    // | Applied | The deployment has completed the apply phase. |
    // | Discarded | The deployment is discarded and enters the final state. |
    // | Errored | An error occurred during the deployment execution, and the deployment enters the final state. |
    // | ConfigProactiveFailure | The compliance precheck failed. |
    // | Canceled | The deployment execution is canceled, and the deployment enters the final state. |
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
