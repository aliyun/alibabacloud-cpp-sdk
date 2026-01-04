// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPHYSICALCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPHYSICALCONNECTIONREQUEST_HPP_
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
  class CreatePhysicalConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceAdvancedCapacity, deviceAdvancedCapacity_);
      DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OpticalModuleModel, opticalModuleModel_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(bandwidth, bandwidth_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceAdvancedCapacity, deviceAdvancedCapacity_);
      DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OpticalModuleModel, opticalModuleModel_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(bandwidth, bandwidth_);
    };
    CreatePhysicalConnectionRequest() = default ;
    CreatePhysicalConnectionRequest(const CreatePhysicalConnectionRequest &) = default ;
    CreatePhysicalConnectionRequest(CreatePhysicalConnectionRequest &&) = default ;
    CreatePhysicalConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePhysicalConnectionRequest() = default ;
    CreatePhysicalConnectionRequest& operator=(const CreatePhysicalConnectionRequest &) = default ;
    CreatePhysicalConnectionRequest& operator=(CreatePhysicalConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag to add to the resource. You can specify up to 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `aliyun` or `acs:`.
      shared_ptr<string> key_ {};
      // The tag value to add to the resource. You can specify up to 20 tag values The tag value can be an empty string.
      // 
      // The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `aliyun` or `acs:`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->circuitCode_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->deviceAdvancedCapacity_ == nullptr && this->lineOperator_ == nullptr
        && this->name_ == nullptr && this->opticalModuleModel_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->peerLocation_ == nullptr
        && this->portType_ == nullptr && this->redundantPhysicalConnectionId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr && this->bandwidth_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline CreatePhysicalConnectionRequest& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline CreatePhysicalConnectionRequest& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePhysicalConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePhysicalConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceAdvancedCapacity Field Functions 
    bool hasDeviceAdvancedCapacity() const { return this->deviceAdvancedCapacity_ != nullptr;};
    void deleteDeviceAdvancedCapacity() { this->deviceAdvancedCapacity_ = nullptr;};
    inline const vector<string> & getDeviceAdvancedCapacity() const { DARABONBA_PTR_GET_CONST(deviceAdvancedCapacity_, vector<string>) };
    inline vector<string> getDeviceAdvancedCapacity() { DARABONBA_PTR_GET(deviceAdvancedCapacity_, vector<string>) };
    inline CreatePhysicalConnectionRequest& setDeviceAdvancedCapacity(const vector<string> & deviceAdvancedCapacity) { DARABONBA_PTR_SET_VALUE(deviceAdvancedCapacity_, deviceAdvancedCapacity) };
    inline CreatePhysicalConnectionRequest& setDeviceAdvancedCapacity(vector<string> && deviceAdvancedCapacity) { DARABONBA_PTR_SET_RVALUE(deviceAdvancedCapacity_, deviceAdvancedCapacity) };


    // lineOperator Field Functions 
    bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
    void deleteLineOperator() { this->lineOperator_ = nullptr;};
    inline string getLineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
    inline CreatePhysicalConnectionRequest& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePhysicalConnectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opticalModuleModel Field Functions 
    bool hasOpticalModuleModel() const { return this->opticalModuleModel_ != nullptr;};
    void deleteOpticalModuleModel() { this->opticalModuleModel_ = nullptr;};
    inline string getOpticalModuleModel() const { DARABONBA_PTR_GET_DEFAULT(opticalModuleModel_, "") };
    inline CreatePhysicalConnectionRequest& setOpticalModuleModel(string opticalModuleModel) { DARABONBA_PTR_SET_VALUE(opticalModuleModel_, opticalModuleModel) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreatePhysicalConnectionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePhysicalConnectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerLocation Field Functions 
    bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
    void deletePeerLocation() { this->peerLocation_ = nullptr;};
    inline string getPeerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
    inline CreatePhysicalConnectionRequest& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string getPortType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline CreatePhysicalConnectionRequest& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // redundantPhysicalConnectionId Field Functions 
    bool hasRedundantPhysicalConnectionId() const { return this->redundantPhysicalConnectionId_ != nullptr;};
    void deleteRedundantPhysicalConnectionId() { this->redundantPhysicalConnectionId_ = nullptr;};
    inline string getRedundantPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(redundantPhysicalConnectionId_, "") };
    inline CreatePhysicalConnectionRequest& setRedundantPhysicalConnectionId(string redundantPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(redundantPhysicalConnectionId_, redundantPhysicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePhysicalConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePhysicalConnectionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePhysicalConnectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePhysicalConnectionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePhysicalConnectionRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePhysicalConnectionRequest::Tag>) };
    inline vector<CreatePhysicalConnectionRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreatePhysicalConnectionRequest::Tag>) };
    inline CreatePhysicalConnectionRequest& setTag(const vector<CreatePhysicalConnectionRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePhysicalConnectionRequest& setTag(vector<CreatePhysicalConnectionRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreatePhysicalConnectionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreatePhysicalConnectionRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


  protected:
    // The access point ID of the Express Connect circuit.
    // 
    // This parameter is required.
    shared_ptr<string> accessPointId_ {};
    // The circuit code of the Express Connect circuit. The circuit code is provided by the connectivity provider.
    shared_ptr<string> circuitCode_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The description of the Express Connect circuit.
    // 
    // The description must be 2 to 256 characters in length. The description must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The advanced features of the device.
    shared_ptr<vector<string>> deviceAdvancedCapacity_ {};
    // The connectivity provider of the Express Connect circuit. Valid values:
    // 
    // *   **CT**: China Telecom.
    // *   **CU**: China Unicom.
    // *   **CM**: China Mobile.
    // *   **CO**: other connectivity providers in the Chinese mainland.
    // *   **Equinix**: Equinix.
    // *   **Other**: other connectivity providers outside the Chinese mainland.
    // 
    // This parameter is required.
    shared_ptr<string> lineOperator_ {};
    // The name of the Express Connect circuit.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, underscores (_), and hyphens (-). The name must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> opticalModuleModel_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The geographical location of the data center.
    shared_ptr<string> peerLocation_ {};
    // The port type. Valid values:
    // 
    // *   **100Base-T**: 100 Mbit/s copper Ethernet port
    // *   **1000Base-T**: 1,000 Mbit/s copper Ethernet port
    // *   **1000Base-LX**: 1,000 Mbit/s single-mode optical port (10 km)
    // *   **10GBase-T**: 10,000 Mbit/s copper Ethernet port
    // *   **10GBase-LR**: 10,000 Mbit/s single-mode optical port (10 km)
    // *   **40GBase-LR**: 40,000 Mbit/s single-mode optical port
    // *   **100GBase-LR**: 100,000 Mbit/s single-mode optical port
    // 
    // >  To use ports 40GBase-LR and 100GBase-LR, you must first contact your account manager.
    shared_ptr<string> portType_ {};
    // The ID of the redundant Express Connect circuit. The redundant Express Connect circuit must be in the **Allocated**, **Confirmed**, or **Enabled** state.
    shared_ptr<string> redundantPhysicalConnectionId_ {};
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the Express Connect circuit belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag list.
    shared_ptr<vector<CreatePhysicalConnectionRequest::Tag>> tag_ {};
    // The type of Express Connect circuit. Default value: **VPC**.
    shared_ptr<string> type_ {};
    // The maximum bandwidth of the hosted connection. Unit: Mbit/s.
    // 
    // Valid values: **50**, **100**, **200**, **300**, **400**, **500**, **1000**, **2000**, **4000**, **5000**, **8000**, and **10000**.
    shared_ptr<int32_t> bandwidth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
