// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECENCHILDINSTANCEROUTEENTRYTOCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECENCHILDINSTANCEROUTEENTRYTOCENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteCenChildInstanceRouteEntryToCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCenChildInstanceRouteEntryToCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceAliUid, childInstanceAliUid_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCenChildInstanceRouteEntryToCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceAliUid, childInstanceAliUid_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    DeleteCenChildInstanceRouteEntryToCenRequest() = default ;
    DeleteCenChildInstanceRouteEntryToCenRequest(const DeleteCenChildInstanceRouteEntryToCenRequest &) = default ;
    DeleteCenChildInstanceRouteEntryToCenRequest(DeleteCenChildInstanceRouteEntryToCenRequest &&) = default ;
    DeleteCenChildInstanceRouteEntryToCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCenChildInstanceRouteEntryToCenRequest() = default ;
    DeleteCenChildInstanceRouteEntryToCenRequest& operator=(const DeleteCenChildInstanceRouteEntryToCenRequest &) = default ;
    DeleteCenChildInstanceRouteEntryToCenRequest& operator=(DeleteCenChildInstanceRouteEntryToCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->childInstanceAliUid_ != nullptr && this->childInstanceId_ != nullptr && this->childInstanceRegionId_ != nullptr && this->childInstanceType_ != nullptr && this->destinationCidrBlock_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->routeTableId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceAliUid Field Functions 
    bool hasChildInstanceAliUid() const { return this->childInstanceAliUid_ != nullptr;};
    void deleteChildInstanceAliUid() { this->childInstanceAliUid_ = nullptr;};
    inline int64_t childInstanceAliUid() const { DARABONBA_PTR_GET_DEFAULT(childInstanceAliUid_, 0L) };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setChildInstanceAliUid(int64_t childInstanceAliUid) { DARABONBA_PTR_SET_VALUE(childInstanceAliUid_, childInstanceAliUid) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string childInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string childInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string childInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DeleteCenChildInstanceRouteEntryToCenRequest& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the network instance belongs.
    // 
    // > If the network instance and the CEN instance belong to different Alibaba Cloud accounts, this parameter is required.
    std::shared_ptr<int64_t> childInstanceAliUid_ = nullptr;
    // The ID of the network instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceId_ = nullptr;
    // The ID of the region where the network instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceRegionId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**: a virtual private cloud (VPC)
    // *   **VBR**: a virtual border router (VBR)
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceType_ = nullptr;
    // The destination CIDR block of the route.
    // 
    // Specify the value of this parameter in CIDR notation. Example: 192.168.10.0/24.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the route table configured on the network instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
