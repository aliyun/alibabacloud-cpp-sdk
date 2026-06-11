// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cu, cu_);
      DARABONBA_PTR_TO_JSON(gpu, gpu_);
      DARABONBA_PTR_TO_JSON(gpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(ipWhiteList, ipWhiteList_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(subscription, subscription_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cu, cu_);
      DARABONBA_PTR_FROM_JSON(gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(gpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(ipWhiteList, ipWhiteList_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(subscription, subscription_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest(UpdateWorkspaceRequest &&) = default ;
    UpdateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest& operator=(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest& operator=(UpdateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Subscription : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Subscription& obj) { 
        DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(autoRenewPeriod, autoRenewPeriod_);
        DARABONBA_PTR_TO_JSON(autoRenewPeriodUnit, autoRenewPeriodUnit_);
        DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(paymentDurationUnit, paymentDurationUnit_);
        DARABONBA_PTR_TO_JSON(queue, queue_);
      };
      friend void from_json(const Darabonba::Json& j, Subscription& obj) { 
        DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(autoRenewPeriod, autoRenewPeriod_);
        DARABONBA_PTR_FROM_JSON(autoRenewPeriodUnit, autoRenewPeriodUnit_);
        DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(paymentDurationUnit, paymentDurationUnit_);
        DARABONBA_PTR_FROM_JSON(queue, queue_);
      };
      Subscription() = default ;
      Subscription(const Subscription &) = default ;
      Subscription(Subscription &&) = default ;
      Subscription(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Subscription() = default ;
      Subscription& operator=(const Subscription &) = default ;
      Subscription& operator=(Subscription &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->autoRenewPeriodUnit_ == nullptr && this->clientToken_ == nullptr && this->duration_ == nullptr && this->paymentDurationUnit_ == nullptr
        && this->queue_ == nullptr; };
      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
      inline Subscription& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // autoRenewPeriod Field Functions 
      bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
      void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
      inline string getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, "") };
      inline Subscription& setAutoRenewPeriod(string autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


      // autoRenewPeriodUnit Field Functions 
      bool hasAutoRenewPeriodUnit() const { return this->autoRenewPeriodUnit_ != nullptr;};
      void deleteAutoRenewPeriodUnit() { this->autoRenewPeriodUnit_ = nullptr;};
      inline string getAutoRenewPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriodUnit_, "") };
      inline Subscription& setAutoRenewPeriodUnit(string autoRenewPeriodUnit) { DARABONBA_PTR_SET_VALUE(autoRenewPeriodUnit_, autoRenewPeriodUnit) };


      // clientToken Field Functions 
      bool hasClientToken() const { return this->clientToken_ != nullptr;};
      void deleteClientToken() { this->clientToken_ = nullptr;};
      inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
      inline Subscription& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline Subscription& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // paymentDurationUnit Field Functions 
      bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
      void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
      inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
      inline Subscription& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


      // queue Field Functions 
      bool hasQueue() const { return this->queue_ != nullptr;};
      void deleteQueue() { this->queue_ = nullptr;};
      inline const vector<string> & getQueue() const { DARABONBA_PTR_GET_CONST(queue_, vector<string>) };
      inline vector<string> getQueue() { DARABONBA_PTR_GET(queue_, vector<string>) };
      inline Subscription& setQueue(const vector<string> & queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };
      inline Subscription& setQueue(vector<string> && queue) { DARABONBA_PTR_SET_RVALUE(queue_, queue) };


    protected:
      // Indicates whether to enable auto-renewal. Required for subscription plans.
      shared_ptr<string> autoRenew_ {};
      // The auto-renewal duration. Required for subscription plans.
      shared_ptr<string> autoRenewPeriod_ {};
      // The unit for the auto-renewal duration. Required for subscription plans.
      shared_ptr<string> autoRenewPeriodUnit_ {};
      // A unique, case-sensitive token to ensure request idempotence.
      shared_ptr<string> clientToken_ {};
      // The subscription duration. This parameter is required for subscription plans.
      shared_ptr<string> duration_ {};
      // The unit of the subscription period.
      shared_ptr<string> paymentDurationUnit_ {};
      // The queues to convert to the subscription plan.
      shared_ptr<vector<string>> queue_ {};
    };

    virtual bool empty() const override { return this->cu_ == nullptr
        && this->gpu_ == nullptr && this->gpuSpec_ == nullptr && this->ipWhiteList_ == nullptr && this->resourceGroupId_ == nullptr && this->subscription_ == nullptr
        && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr && this->regionId_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
    inline UpdateWorkspaceRequest& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int32_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
    inline UpdateWorkspaceRequest& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline const vector<string> & getGpuSpec() const { DARABONBA_PTR_GET_CONST(gpuSpec_, vector<string>) };
    inline vector<string> getGpuSpec() { DARABONBA_PTR_GET(gpuSpec_, vector<string>) };
    inline UpdateWorkspaceRequest& setGpuSpec(const vector<string> & gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };
    inline UpdateWorkspaceRequest& setGpuSpec(vector<string> && gpuSpec) { DARABONBA_PTR_SET_RVALUE(gpuSpec_, gpuSpec) };


    // ipWhiteList Field Functions 
    bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
    void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
    inline const vector<string> & getIpWhiteList() const { DARABONBA_PTR_GET_CONST(ipWhiteList_, vector<string>) };
    inline vector<string> getIpWhiteList() { DARABONBA_PTR_GET(ipWhiteList_, vector<string>) };
    inline UpdateWorkspaceRequest& setIpWhiteList(const vector<string> & ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };
    inline UpdateWorkspaceRequest& setIpWhiteList(vector<string> && ipWhiteList) { DARABONBA_PTR_SET_RVALUE(ipWhiteList_, ipWhiteList) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateWorkspaceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subscription Field Functions 
    bool hasSubscription() const { return this->subscription_ != nullptr;};
    void deleteSubscription() { this->subscription_ = nullptr;};
    inline const UpdateWorkspaceRequest::Subscription & getSubscription() const { DARABONBA_PTR_GET_CONST(subscription_, UpdateWorkspaceRequest::Subscription) };
    inline UpdateWorkspaceRequest::Subscription getSubscription() { DARABONBA_PTR_GET(subscription_, UpdateWorkspaceRequest::Subscription) };
    inline UpdateWorkspaceRequest& setSubscription(const UpdateWorkspaceRequest::Subscription & subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };
    inline UpdateWorkspaceRequest& setSubscription(UpdateWorkspaceRequest::Subscription && subscription) { DARABONBA_PTR_SET_RVALUE(subscription_, subscription) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateWorkspaceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline UpdateWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateWorkspaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The resource cap for the workspace.
    shared_ptr<int32_t> cu_ {};
    // The number of GPUs.
    shared_ptr<int32_t> gpu_ {};
    // The GPU specifications.
    shared_ptr<vector<string>> gpuSpec_ {};
    // The IP whitelist.
    shared_ptr<vector<string>> ipWhiteList_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Details for converting a pay-as-you-go workspace to a subscription plan.
    shared_ptr<UpdateWorkspaceRequest::Subscription> subscription_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
    // The workspace name.
    shared_ptr<string> workspaceName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
