// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOADBALANCERPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOADBALANCERPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class UpdateLoadBalancerProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoadBalancerProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionEnabled, deletionProtectionEnabled_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionReason, deletionProtectionReason_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoadBalancerProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionEnabled, deletionProtectionEnabled_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionReason, deletionProtectionReason_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateLoadBalancerProtectionRequest() = default ;
    UpdateLoadBalancerProtectionRequest(const UpdateLoadBalancerProtectionRequest &) = default ;
    UpdateLoadBalancerProtectionRequest(UpdateLoadBalancerProtectionRequest &&) = default ;
    UpdateLoadBalancerProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoadBalancerProtectionRequest() = default ;
    UpdateLoadBalancerProtectionRequest& operator=(const UpdateLoadBalancerProtectionRequest &) = default ;
    UpdateLoadBalancerProtectionRequest& operator=(UpdateLoadBalancerProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->deletionProtectionEnabled_ != nullptr && this->deletionProtectionReason_ != nullptr && this->dryRun_ != nullptr && this->loadBalancerId_ != nullptr && this->modificationProtectionReason_ != nullptr
        && this->modificationProtectionStatus_ != nullptr && this->regionId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLoadBalancerProtectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deletionProtectionEnabled Field Functions 
    bool hasDeletionProtectionEnabled() const { return this->deletionProtectionEnabled_ != nullptr;};
    void deleteDeletionProtectionEnabled() { this->deletionProtectionEnabled_ = nullptr;};
    inline bool deletionProtectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(deletionProtectionEnabled_, false) };
    inline UpdateLoadBalancerProtectionRequest& setDeletionProtectionEnabled(bool deletionProtectionEnabled) { DARABONBA_PTR_SET_VALUE(deletionProtectionEnabled_, deletionProtectionEnabled) };


    // deletionProtectionReason Field Functions 
    bool hasDeletionProtectionReason() const { return this->deletionProtectionReason_ != nullptr;};
    void deleteDeletionProtectionReason() { this->deletionProtectionReason_ = nullptr;};
    inline string deletionProtectionReason() const { DARABONBA_PTR_GET_DEFAULT(deletionProtectionReason_, "") };
    inline UpdateLoadBalancerProtectionRequest& setDeletionProtectionReason(string deletionProtectionReason) { DARABONBA_PTR_SET_VALUE(deletionProtectionReason_, deletionProtectionReason) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateLoadBalancerProtectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline UpdateLoadBalancerProtectionRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // modificationProtectionReason Field Functions 
    bool hasModificationProtectionReason() const { return this->modificationProtectionReason_ != nullptr;};
    void deleteModificationProtectionReason() { this->modificationProtectionReason_ = nullptr;};
    inline string modificationProtectionReason() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionReason_, "") };
    inline UpdateLoadBalancerProtectionRequest& setModificationProtectionReason(string modificationProtectionReason) { DARABONBA_PTR_SET_VALUE(modificationProtectionReason_, modificationProtectionReason) };


    // modificationProtectionStatus Field Functions 
    bool hasModificationProtectionStatus() const { return this->modificationProtectionStatus_ != nullptr;};
    void deleteModificationProtectionStatus() { this->modificationProtectionStatus_ = nullptr;};
    inline string modificationProtectionStatus() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionStatus_, "") };
    inline UpdateLoadBalancerProtectionRequest& setModificationProtectionStatus(string modificationProtectionStatus) { DARABONBA_PTR_SET_VALUE(modificationProtectionStatus_, modificationProtectionStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLoadBalancerProtectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate this value. Ensure that the value is unique among all requests. Only ASCII characters are allowed.
    // 
    // >  If you do not specify this parameter, the value of **RequestId** is used.**** **RequestId** of each request is different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to enable deletion protection. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> deletionProtectionEnabled_ = nullptr;
    // The reason why deletion protection is enabled. The reason must be 2 to 128 characters in length, can contain letters, digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
    // 
    // >  This parameter takes effect only when **DeletionProtectionEnabled** is set to **true**.
    std::shared_ptr<string> deletionProtectionReason_ = nullptr;
    // Specifies whether to perform a dry run, without sending the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends a request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ID of the NLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The reason why the configuration read-only mode is enabled. The reason must be 2 to 128 characters in length, can contain letters, digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
    // 
    // >  This parameter takes effect only when **Status** is set to **ConsoleProtection**.
    std::shared_ptr<string> modificationProtectionReason_ = nullptr;
    // Specifies whether to enable the configuration read-only mode. Valid values:
    // 
    // *   **NonProtection**: disables the configuration read-only mode. In this case, you cannot set the **ModificationProtectionReason** parameter. If you specify **ModificationProtectionReason**, the value is cleared.
    // *   **ConsoleProtection**: enables the configuration read-only mode. In this case, you can specify **ModificationProtectionReason**.
    // 
    // >  If you set this parameter to **ConsoleProtection**, you cannot use the NLB console to modify configurations of the NLB instance. However, you can call API operations to modify the instance configurations.
    std::shared_ptr<string> modificationProtectionStatus_ = nullptr;
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
