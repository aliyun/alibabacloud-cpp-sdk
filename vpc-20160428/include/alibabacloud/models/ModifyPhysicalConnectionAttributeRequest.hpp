// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPHYSICALCONNECTIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPHYSICALCONNECTIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyPhysicalConnectionAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPhysicalConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DownDelayTime, downDelayTime_);
      DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(bandwidth, bandwidth_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPhysicalConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DownDelayTime, downDelayTime_);
      DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(bandwidth, bandwidth_);
    };
    ModifyPhysicalConnectionAttributeRequest() = default ;
    ModifyPhysicalConnectionAttributeRequest(const ModifyPhysicalConnectionAttributeRequest &) = default ;
    ModifyPhysicalConnectionAttributeRequest(ModifyPhysicalConnectionAttributeRequest &&) = default ;
    ModifyPhysicalConnectionAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPhysicalConnectionAttributeRequest() = default ;
    ModifyPhysicalConnectionAttributeRequest& operator=(const ModifyPhysicalConnectionAttributeRequest &) = default ;
    ModifyPhysicalConnectionAttributeRequest& operator=(ModifyPhysicalConnectionAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->circuitCode_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->downDelayTime_ == nullptr && this->lineOperator_ == nullptr && this->name_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->peerLocation_ == nullptr && this->physicalConnectionId_ == nullptr && this->portType_ == nullptr
        && this->redundantPhysicalConnectionId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->bandwidth_ == nullptr; };
    // circuitCode Field Functions 
    bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
    void deleteCircuitCode() { this->circuitCode_ = nullptr;};
    inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // downDelayTime Field Functions 
    bool hasDownDelayTime() const { return this->downDelayTime_ != nullptr;};
    void deleteDownDelayTime() { this->downDelayTime_ = nullptr;};
    inline int32_t getDownDelayTime() const { DARABONBA_PTR_GET_DEFAULT(downDelayTime_, 0) };
    inline ModifyPhysicalConnectionAttributeRequest& setDownDelayTime(int32_t downDelayTime) { DARABONBA_PTR_SET_VALUE(downDelayTime_, downDelayTime) };


    // lineOperator Field Functions 
    bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
    void deleteLineOperator() { this->lineOperator_ = nullptr;};
    inline string getLineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPhysicalConnectionAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerLocation Field Functions 
    bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
    void deletePeerLocation() { this->peerLocation_ = nullptr;};
    inline string getPeerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string getPortType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // redundantPhysicalConnectionId Field Functions 
    bool hasRedundantPhysicalConnectionId() const { return this->redundantPhysicalConnectionId_ != nullptr;};
    void deleteRedundantPhysicalConnectionId() { this->redundantPhysicalConnectionId_ = nullptr;};
    inline string getRedundantPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(redundantPhysicalConnectionId_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setRedundantPhysicalConnectionId(string redundantPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(redundantPhysicalConnectionId_, redundantPhysicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPhysicalConnectionAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPhysicalConnectionAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ModifyPhysicalConnectionAttributeRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


  protected:
    // The circuit code provided by the carrier for the Express Connect circuit.
    shared_ptr<string> circuitCode_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the Express Connect circuit.  
    // 
    // The description must be 2 to 256 characters in length and must start with a letter or a Chinese character. It cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> downDelayTime_ {};
    // The carrier that provides the access to the physical connection. Valid values:
    // 
    // - **CT**: China Telecom
    // - **CU**: China Unicom
    // - **CM**: China Mobile
    // - **CO**: Other carriers in the Chinese mainland
    // - **Equinix**: Equinix
    // - **Other**: Other carriers outside the Chinese mainland
    shared_ptr<string> lineOperator_ {};
    // The name of the Express Connect circuit.  
    // 
    // The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. It can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The geographical location of the on-premises data center.
    shared_ptr<string> peerLocation_ {};
    // The ID of the Express Connect circuit.
    // 
    // This parameter is required.
    shared_ptr<string> physicalConnectionId_ {};
    // The port type of the Express Connect circuit access point. Valid values:
    // 
    // - **100Base-T**: 100M Ethernet port.
    // - **1000Base-T (default)**: 1 GE electrical port.
    // - **1000Base-LX**: GE single-mode optical port (10 km).
    // - **10GBase-T**: 10 GE electrical port.
    // - **10GBase-LR**: 10 GE single-mode optical port (10 km).
    // - **40GBase-LR**: 40 GE single-mode optical port.
    // - **100GBase-LR**: 100 GE single-mode optical port.
    // 
    // > To create 40GBase-LR or 100GBase-LR ports, check the actual port availability on the backend. Contact your account manager for details.
    shared_ptr<string> portType_ {};
    // The ID of the redundant Express Connect circuit. The redundant circuit must be in the **Allocated**, **Confirmed**, or **Enabled** state.
    shared_ptr<string> redundantPhysicalConnectionId_ {};
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The bandwidth of the Express Connect circuit access interface. Unit: Mbit/s. Valid values: 2 to 10240.
    shared_ptr<int32_t> bandwidth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
