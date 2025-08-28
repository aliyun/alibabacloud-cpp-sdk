// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPHYSICALCONNECTIONSETUPORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPHYSICALCONNECTIONSETUPORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreatePhysicalConnectionSetupOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePhysicalConnectionSetupOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePhysicalConnectionSetupOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(RedundantPhysicalConnectionId, redundantPhysicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreatePhysicalConnectionSetupOrderRequest() = default ;
    CreatePhysicalConnectionSetupOrderRequest(const CreatePhysicalConnectionSetupOrderRequest &) = default ;
    CreatePhysicalConnectionSetupOrderRequest(CreatePhysicalConnectionSetupOrderRequest &&) = default ;
    CreatePhysicalConnectionSetupOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePhysicalConnectionSetupOrderRequest() = default ;
    CreatePhysicalConnectionSetupOrderRequest& operator=(const CreatePhysicalConnectionSetupOrderRequest &) = default ;
    CreatePhysicalConnectionSetupOrderRequest& operator=(CreatePhysicalConnectionSetupOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPointId_ != nullptr
        && this->autoPay_ != nullptr && this->clientToken_ != nullptr && this->lineOperator_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->portType_ != nullptr && this->redundantPhysicalConnectionId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline CreatePhysicalConnectionSetupOrderRequest& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreatePhysicalConnectionSetupOrderRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePhysicalConnectionSetupOrderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // lineOperator Field Functions 
    bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
    void deleteLineOperator() { this->lineOperator_ = nullptr;};
    inline string lineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
    inline CreatePhysicalConnectionSetupOrderRequest& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreatePhysicalConnectionSetupOrderRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePhysicalConnectionSetupOrderRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string portType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline CreatePhysicalConnectionSetupOrderRequest& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // redundantPhysicalConnectionId Field Functions 
    bool hasRedundantPhysicalConnectionId() const { return this->redundantPhysicalConnectionId_ != nullptr;};
    void deleteRedundantPhysicalConnectionId() { this->redundantPhysicalConnectionId_ = nullptr;};
    inline string redundantPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(redundantPhysicalConnectionId_, "") };
    inline CreatePhysicalConnectionSetupOrderRequest& setRedundantPhysicalConnectionId(string redundantPhysicalConnectionId) { DARABONBA_PTR_SET_VALUE(redundantPhysicalConnectionId_, redundantPhysicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePhysicalConnectionSetupOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePhysicalConnectionSetupOrderRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePhysicalConnectionSetupOrderRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the access point.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // Specifies whether to enable automatic payments. Valid values:
    // 
    // *   **false** (default): disables automatic payment.
    // *   **true**
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The connectivity provider of the Express Connect circuit. Valid values:
    // 
    // *   **CT**: China Telecom
    // *   **CU**: China Unicom
    // *   **CM**: China Mobile
    // *   **CO**: other connectivity providers in the Chinese mainland
    // *   **Equinix**: Equinix
    // *   **Other**: other connectivity providers outside the Chinese mainland
    // 
    // This parameter is required.
    std::shared_ptr<string> lineOperator_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The port type of the Express Connect circuit. Valid values:
    // 
    // *   **100Base-T**: 100 Mbit/s copper Ethernet port
    // *   **1000Base-T** (default): 1,000 Mbit/s copper Ethernet port
    // *   **1000Base-LX**: 1,000 Mbit/s single-mode optical port (10 km)
    // *   **10GBase-T**: 10,000 Mbit/s copper Ethernet port
    // *   **10GBase-LR**: 10,000 Mbit/s single-mode optical port (10 km)
    // *   **40GBase-LR**: 40,000 Mbit/s single-mode optical port
    // *   **100GBase-LR**: 100,000 Mbit/s single-mode optical port
    // 
    // >  Whether 40GBase-LR and 100GBase-LR ports can be created depends on resource supplies. For more information, contact your account manager.
    std::shared_ptr<string> portType_ = nullptr;
    // The ID of the redundant physical connection. The redundant physical connection must be in the **Allocated**, **Confirmed**, or **Enabled** state.
    std::shared_ptr<string> redundantPhysicalConnectionId_ = nullptr;
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
