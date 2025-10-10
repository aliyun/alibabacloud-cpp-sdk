// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLoadBalancerRequestLoadBalancerBillingConfig.hpp>
#include <alibabacloud/models/CreateLoadBalancerRequestModificationProtectionConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateLoadBalancerRequestTag.hpp>
#include <alibabacloud/models/CreateLoadBalancerRequestZoneMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateLoadBalancerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressAllocatedMode, addressAllocatedMode_);
      DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionEnabled, deletionProtectionEnabled_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_TO_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressAllocatedMode, addressAllocatedMode_);
      DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionEnabled, deletionProtectionEnabled_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest(CreateLoadBalancerRequest &&) = default ;
    CreateLoadBalancerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerRequest() = default ;
    CreateLoadBalancerRequest& operator=(const CreateLoadBalancerRequest &) = default ;
    CreateLoadBalancerRequest& operator=(CreateLoadBalancerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressAllocatedMode_ != nullptr
        && this->addressIpVersion_ != nullptr && this->addressType_ != nullptr && this->clientToken_ != nullptr && this->deletionProtectionEnabled_ != nullptr && this->dryRun_ != nullptr
        && this->loadBalancerBillingConfig_ != nullptr && this->loadBalancerEdition_ != nullptr && this->loadBalancerName_ != nullptr && this->modificationProtectionConfig_ != nullptr && this->resourceGroupId_ != nullptr
        && this->tag_ != nullptr && this->vpcId_ != nullptr && this->zoneMappings_ != nullptr; };
    // addressAllocatedMode Field Functions 
    bool hasAddressAllocatedMode() const { return this->addressAllocatedMode_ != nullptr;};
    void deleteAddressAllocatedMode() { this->addressAllocatedMode_ = nullptr;};
    inline string addressAllocatedMode() const { DARABONBA_PTR_GET_DEFAULT(addressAllocatedMode_, "") };
    inline CreateLoadBalancerRequest& setAddressAllocatedMode(string addressAllocatedMode) { DARABONBA_PTR_SET_VALUE(addressAllocatedMode_, addressAllocatedMode) };


    // addressIpVersion Field Functions 
    bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
    void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
    inline string addressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
    inline CreateLoadBalancerRequest& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline CreateLoadBalancerRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLoadBalancerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deletionProtectionEnabled Field Functions 
    bool hasDeletionProtectionEnabled() const { return this->deletionProtectionEnabled_ != nullptr;};
    void deleteDeletionProtectionEnabled() { this->deletionProtectionEnabled_ = nullptr;};
    inline bool deletionProtectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(deletionProtectionEnabled_, false) };
    inline CreateLoadBalancerRequest& setDeletionProtectionEnabled(bool deletionProtectionEnabled) { DARABONBA_PTR_SET_VALUE(deletionProtectionEnabled_, deletionProtectionEnabled) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateLoadBalancerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // loadBalancerBillingConfig Field Functions 
    bool hasLoadBalancerBillingConfig() const { return this->loadBalancerBillingConfig_ != nullptr;};
    void deleteLoadBalancerBillingConfig() { this->loadBalancerBillingConfig_ = nullptr;};
    inline const CreateLoadBalancerRequestLoadBalancerBillingConfig & loadBalancerBillingConfig() const { DARABONBA_PTR_GET_CONST(loadBalancerBillingConfig_, CreateLoadBalancerRequestLoadBalancerBillingConfig) };
    inline CreateLoadBalancerRequestLoadBalancerBillingConfig loadBalancerBillingConfig() { DARABONBA_PTR_GET(loadBalancerBillingConfig_, CreateLoadBalancerRequestLoadBalancerBillingConfig) };
    inline CreateLoadBalancerRequest& setLoadBalancerBillingConfig(const CreateLoadBalancerRequestLoadBalancerBillingConfig & loadBalancerBillingConfig) { DARABONBA_PTR_SET_VALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };
    inline CreateLoadBalancerRequest& setLoadBalancerBillingConfig(CreateLoadBalancerRequestLoadBalancerBillingConfig && loadBalancerBillingConfig) { DARABONBA_PTR_SET_RVALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };


    // loadBalancerEdition Field Functions 
    bool hasLoadBalancerEdition() const { return this->loadBalancerEdition_ != nullptr;};
    void deleteLoadBalancerEdition() { this->loadBalancerEdition_ = nullptr;};
    inline string loadBalancerEdition() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerEdition_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerEdition(string loadBalancerEdition) { DARABONBA_PTR_SET_VALUE(loadBalancerEdition_, loadBalancerEdition) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string loadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline CreateLoadBalancerRequest& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // modificationProtectionConfig Field Functions 
    bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
    void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
    inline const CreateLoadBalancerRequestModificationProtectionConfig & modificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, CreateLoadBalancerRequestModificationProtectionConfig) };
    inline CreateLoadBalancerRequestModificationProtectionConfig modificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, CreateLoadBalancerRequestModificationProtectionConfig) };
    inline CreateLoadBalancerRequest& setModificationProtectionConfig(const CreateLoadBalancerRequestModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
    inline CreateLoadBalancerRequest& setModificationProtectionConfig(CreateLoadBalancerRequestModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLoadBalancerRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateLoadBalancerRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateLoadBalancerRequestTag>) };
    inline vector<CreateLoadBalancerRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateLoadBalancerRequestTag>) };
    inline CreateLoadBalancerRequest& setTag(const vector<CreateLoadBalancerRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateLoadBalancerRequest& setTag(vector<CreateLoadBalancerRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateLoadBalancerRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<CreateLoadBalancerRequestZoneMappings> & zoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<CreateLoadBalancerRequestZoneMappings>) };
    inline vector<CreateLoadBalancerRequestZoneMappings> zoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<CreateLoadBalancerRequestZoneMappings>) };
    inline CreateLoadBalancerRequest& setZoneMappings(const vector<CreateLoadBalancerRequestZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline CreateLoadBalancerRequest& setZoneMappings(vector<CreateLoadBalancerRequestZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The mode in which IP addresses are allocated to the ALB instance. Valid values:
    // 
    // *   **Fixed** (default): a fixed IP address is assigned to the ALB instance in each zone.
    // *   **Dynamic**: IP addresses are dynamically allocated to the ALB instance in each zone.
    // 
    // >  Starting from 00:00:00 on February 25, 2025 (UTC+8), when you call this operation to create an ALB instance, the instance is automatically the [upgraded version](https://help.aliyun.com/document_detail/2864070.html) regardless of the mode you specify. Upgraded ALB instances no longer differentiate between IP modes. Instead, they globally auto-scale IP addresses for providing load balancing services. The ALB instances you created before this date and time are not affected.
    std::shared_ptr<string> addressAllocatedMode_ = nullptr;
    // The protocol version. Valid values:
    // 
    // *   **IPv4:** IPv4.
    // *   **DualStack:** dual stack.
    std::shared_ptr<string> addressIpVersion_ = nullptr;
    // The type of the address of the ALB instance. Valid values:
    // 
    // *   **Internet:** The ALB instance uses a public IP address. The domain name of the ALB instance is resolved to the public IP address. In this case, the ALB instance can be accessed over the Internet.
    // *   **Intranet:** The ALB instance uses a private IP address. The domain name of the ALB instance is resolved to the private IP address. In this case, the ALB instance can be accessed over the VPC in which the ALB instance is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> addressType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters.
    // 
    // >  If you do not specify this parameter, the system uses the value of **RequestId** as the value of **ClientToken**. The value of the **RequestId** parameter may be different for each API request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to enable deletion protection. Default value: false. Valid values:
    // 
    // *   **true:** enables deletion protection.
    // *   **false:** disables deletion protection.
    std::shared_ptr<bool> deletionProtectionEnabled_ = nullptr;
    // Specifies whether to perform a dry run. Default value: false. Valid values:
    // 
    // *   **true:** performs a dry run. The system checks the required parameters, request format, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false:** performs a dry run and sends the request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The billing method of the ALB instance.
    // 
    // This parameter is required.
    std::shared_ptr<CreateLoadBalancerRequestLoadBalancerBillingConfig> loadBalancerBillingConfig_ = nullptr;
    // The edition of the ALB instance. The features and billing rules vary based on the edition of the ALB instance. Valid values:
    // 
    // *   **Basic:** basic.
    // *   **Standard:** standard.
    // *   **StandardWithWaf:** WAF-enabled.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerEdition_ = nullptr;
    // The name of the ALB instance.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> loadBalancerName_ = nullptr;
    // The configuration read-only mode settings.
    std::shared_ptr<CreateLoadBalancerRequestModificationProtectionConfig> modificationProtectionConfig_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateLoadBalancerRequestTag>> tag_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which you want to create the ALB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The mappings between zones an vSwitches. You can specify at most 10 zones. If the selected region supports two or more zones, select at least two zones to ensure the high availability of your service.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateLoadBalancerRequestZoneMappings>> zoneMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
