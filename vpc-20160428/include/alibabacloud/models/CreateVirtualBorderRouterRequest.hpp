// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALBORDERROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALBORDERROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVirtualBorderRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualBorderRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_TO_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_TO_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_TO_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_TO_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VbrOwnerId, vbrOwnerId_);
      DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualBorderRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
      DARABONBA_PTR_FROM_JSON(LocalIpv6GatewayIp, localIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeerIpv6GatewayIp, peerIpv6GatewayIp_);
      DARABONBA_PTR_FROM_JSON(PeeringIpv6SubnetMask, peeringIpv6SubnetMask_);
      DARABONBA_PTR_FROM_JSON(PeeringSubnetMask, peeringSubnetMask_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VbrOwnerId, vbrOwnerId_);
      DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
    };
    CreateVirtualBorderRouterRequest() = default ;
    CreateVirtualBorderRouterRequest(const CreateVirtualBorderRouterRequest &) = default ;
    CreateVirtualBorderRouterRequest(CreateVirtualBorderRouterRequest &&) = default ;
    CreateVirtualBorderRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualBorderRouterRequest() = default ;
    CreateVirtualBorderRouterRequest& operator=(const CreateVirtualBorderRouterRequest &) = default ;
    CreateVirtualBorderRouterRequest& operator=(CreateVirtualBorderRouterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the resource. You must specify at least 1 tag key and can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // A tag key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource. You can specify at most 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->circuitCode_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->enableIpv6_ == nullptr && this->localGatewayIp_ == nullptr
        && this->localIpv6GatewayIp_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->peerGatewayIp_ == nullptr
        && this->peerIpv6GatewayIp_ == nullptr && this->peeringIpv6SubnetMask_ == nullptr && this->peeringSubnetMask_ == nullptr && this->physicalConnectionId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tags_ == nullptr && this->vbrOwnerId_ == nullptr
        && this->vlanId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateVirtualBorderRouterRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline CreateVirtualBorderRouterRequest& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVirtualBorderRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVirtualBorderRouterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline CreateVirtualBorderRouterRequest& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // localGatewayIp Field Functions 
    bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
    void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
    inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
    inline CreateVirtualBorderRouterRequest& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


    // localIpv6GatewayIp Field Functions 
    bool hasLocalIpv6GatewayIp() const { return this->localIpv6GatewayIp_ != nullptr;};
    void deleteLocalIpv6GatewayIp() { this->localIpv6GatewayIp_ = nullptr;};
    inline string getLocalIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localIpv6GatewayIp_, "") };
    inline CreateVirtualBorderRouterRequest& setLocalIpv6GatewayIp(string localIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(localIpv6GatewayIp_, localIpv6GatewayIp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVirtualBorderRouterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateVirtualBorderRouterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVirtualBorderRouterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerGatewayIp Field Functions 
    bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
    void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
    inline string getPeerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
    inline CreateVirtualBorderRouterRequest& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


    // peerIpv6GatewayIp Field Functions 
    bool hasPeerIpv6GatewayIp() const { return this->peerIpv6GatewayIp_ != nullptr;};
    void deletePeerIpv6GatewayIp() { this->peerIpv6GatewayIp_ = nullptr;};
    inline string getPeerIpv6GatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerIpv6GatewayIp_, "") };
    inline CreateVirtualBorderRouterRequest& setPeerIpv6GatewayIp(string peerIpv6GatewayIp) { DARABONBA_PTR_SET_VALUE(peerIpv6GatewayIp_, peerIpv6GatewayIp) };


    // peeringIpv6SubnetMask Field Functions 
    bool hasPeeringIpv6SubnetMask() const { return this->peeringIpv6SubnetMask_ != nullptr;};
    void deletePeeringIpv6SubnetMask() { this->peeringIpv6SubnetMask_ = nullptr;};
    inline string getPeeringIpv6SubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringIpv6SubnetMask_, "") };
    inline CreateVirtualBorderRouterRequest& setPeeringIpv6SubnetMask(string peeringIpv6SubnetMask) { DARABONBA_PTR_SET_VALUE(peeringIpv6SubnetMask_, peeringIpv6SubnetMask) };


    // peeringSubnetMask Field Functions 
    bool hasPeeringSubnetMask() const { return this->peeringSubnetMask_ != nullptr;};
    void deletePeeringSubnetMask() { this->peeringSubnetMask_ = nullptr;};
    inline string getPeeringSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(peeringSubnetMask_, "") };
    inline CreateVirtualBorderRouterRequest& setPeeringSubnetMask(string peeringSubnetMask) { DARABONBA_PTR_SET_VALUE(peeringSubnetMask_, peeringSubnetMask) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline CreateVirtualBorderRouterRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVirtualBorderRouterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVirtualBorderRouterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateVirtualBorderRouterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateVirtualBorderRouterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateVirtualBorderRouterRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateVirtualBorderRouterRequest::Tags>) };
    inline vector<CreateVirtualBorderRouterRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateVirtualBorderRouterRequest::Tags>) };
    inline CreateVirtualBorderRouterRequest& setTags(const vector<CreateVirtualBorderRouterRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateVirtualBorderRouterRequest& setTags(vector<CreateVirtualBorderRouterRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vbrOwnerId Field Functions 
    bool hasVbrOwnerId() const { return this->vbrOwnerId_ != nullptr;};
    void deleteVbrOwnerId() { this->vbrOwnerId_ = nullptr;};
    inline int64_t getVbrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerId_, 0L) };
    inline CreateVirtualBorderRouterRequest& setVbrOwnerId(int64_t vbrOwnerId) { DARABONBA_PTR_SET_VALUE(vbrOwnerId_, vbrOwnerId) };


    // vlanId Field Functions 
    bool hasVlanId() const { return this->vlanId_ != nullptr;};
    void deleteVlanId() { this->vlanId_ = nullptr;};
    inline int32_t getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0) };
    inline CreateVirtualBorderRouterRequest& setVlanId(int32_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


  protected:
    // The bandwidth of the VBR instance. Unit: Mbit/s.
    // 
    // - When you create a VBR instance for a dedicated Express Connect circuit, valid values are **50**, **100**, **200**, **300**, **400**, **500**, **1000**, **2048**, **5120**, **8192**, **10240**, **20480**, **40960**, **50120**, **61440**, and **102400**.
    // - When you create a VBR instance for shared Express Connect circuits, you do not need to configure this parameter. The bandwidth of the VBR is the bandwidth of the shared Express Connect circuits that is specified in Settings when the shared Express Connect circuits are created.
    shared_ptr<int64_t> bandwidth_ {};
    // The circuit code provided by the carrier for the Express Connect circuit. 
    //           
    // > Only the owner of the Express Connect circuit can specify this parameter.
    shared_ptr<string> circuitCode_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // The client generates the value of this parameter. Make sure that the value is unique among different requests.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may vary for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the VBR instance.  
    // 
    // The description must be 2 to 256 characters in length and must start with a letter or a Chinese character. It cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to enable IPv6. Valid values:
    // 
    // - **true**: Enabled.
    // 
    // - **false** (default): Disabled.
    shared_ptr<bool> enableIpv6_ {};
    // The Alibaba Cloud-side IP address of the VBR instance. Only the VBR owner can specify or modify this property.
    // 
    // This parameter is required when you create a VBR instance for the owner of the Express Connect circuit.
    shared_ptr<string> localGatewayIp_ {};
    // The Alibaba Cloud-side IPv6 address of the VBR instance. Only the VBR owner can specify or modify this property.
    // 
    // This parameter is required when you create a VBR instance for the owner of the Express Connect circuit.
    shared_ptr<string> localIpv6GatewayIp_ {};
    // The name of the VBR instance.
    // 
    // The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, underscores (_), and hyphens (-). It cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The customer-side IP address of the VBR instance. Only the VBR owner can specify or modify this property.
    // 
    // This parameter is required when you create a VBR instance for the owner of the Express Connect circuit.
    shared_ptr<string> peerGatewayIp_ {};
    // The customer-side IPv6 address of the VBR instance. Only the VBR owner can specify or modify this property.
    // 
    // This parameter is required when you create a VBR instance for the owner of the Express Connect circuit.
    shared_ptr<string> peerIpv6GatewayIp_ {};
    // The subnet mask for the Alibaba Cloud-side and customer-side IPv6 addresses of the VBR instance. 
    // 
    // The two IPv6 addresses must be in the same subnet.
    shared_ptr<string> peeringIpv6SubnetMask_ {};
    // The subnet mask for the Alibaba Cloud-side and customer-side IP addresses of the VBR instance. 
    // 
    // The two IP addresses must be in the same subnet.
    shared_ptr<string> peeringSubnetMask_ {};
    // The instance ID of the Express Connect circuit. 
    // 
    // You can create a VBR instance for a dedicated Express Connect circuit or for shared Express Connect circuits.
    // 
    // This parameter is required.
    shared_ptr<string> physicalConnectionId_ {};
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // For more information about resource groups, see [What is a resource group?](https://help.aliyun.com/document_detail/2381067.html).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags of the resource.
    shared_ptr<vector<CreateVirtualBorderRouterRequest::Tags>> tags_ {};
    // The account ID of the VBR instance owner.
    // 
    // The default value is the Alibaba Cloud account ID used for logon.
    shared_ptr<int64_t> vbrOwnerId_ {};
    // The VLAN ID of the VBR instance. Valid values: **0 to 2999**. 
    // 
    // > Only the owner of the Express Connect circuit can specify this parameter. The VLAN IDs of two VBR instances on the same Express Connect circuit must be different.
    // 
    // This parameter is required.
    shared_ptr<int32_t> vlanId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
