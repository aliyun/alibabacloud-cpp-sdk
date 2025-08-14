// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROUTEPRIVATEZONEINCENTOVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROUTEPRIVATEZONEINCENTOVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class RoutePrivateZoneInCenToVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RoutePrivateZoneInCenToVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRegionId, accessRegionId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_TO_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, RoutePrivateZoneInCenToVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRegionId, accessRegionId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_FROM_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    RoutePrivateZoneInCenToVpcRequest() = default ;
    RoutePrivateZoneInCenToVpcRequest(const RoutePrivateZoneInCenToVpcRequest &) = default ;
    RoutePrivateZoneInCenToVpcRequest(RoutePrivateZoneInCenToVpcRequest &&) = default ;
    RoutePrivateZoneInCenToVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RoutePrivateZoneInCenToVpcRequest() = default ;
    RoutePrivateZoneInCenToVpcRequest& operator=(const RoutePrivateZoneInCenToVpcRequest &) = default ;
    RoutePrivateZoneInCenToVpcRequest& operator=(RoutePrivateZoneInCenToVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessRegionId_ != nullptr
        && this->cenId_ != nullptr && this->hostRegionId_ != nullptr && this->hostVpcId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // accessRegionId Field Functions 
    bool hasAccessRegionId() const { return this->accessRegionId_ != nullptr;};
    void deleteAccessRegionId() { this->accessRegionId_ = nullptr;};
    inline string accessRegionId() const { DARABONBA_PTR_GET_DEFAULT(accessRegionId_, "") };
    inline RoutePrivateZoneInCenToVpcRequest& setAccessRegionId(string accessRegionId) { DARABONBA_PTR_SET_VALUE(accessRegionId_, accessRegionId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline RoutePrivateZoneInCenToVpcRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // hostRegionId Field Functions 
    bool hasHostRegionId() const { return this->hostRegionId_ != nullptr;};
    void deleteHostRegionId() { this->hostRegionId_ = nullptr;};
    inline string hostRegionId() const { DARABONBA_PTR_GET_DEFAULT(hostRegionId_, "") };
    inline RoutePrivateZoneInCenToVpcRequest& setHostRegionId(string hostRegionId) { DARABONBA_PTR_SET_VALUE(hostRegionId_, hostRegionId) };


    // hostVpcId Field Functions 
    bool hasHostVpcId() const { return this->hostVpcId_ != nullptr;};
    void deleteHostVpcId() { this->hostVpcId_ = nullptr;};
    inline string hostVpcId() const { DARABONBA_PTR_GET_DEFAULT(hostVpcId_, "") };
    inline RoutePrivateZoneInCenToVpcRequest& setHostVpcId(string hostVpcId) { DARABONBA_PTR_SET_VALUE(hostVpcId_, hostVpcId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RoutePrivateZoneInCenToVpcRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RoutePrivateZoneInCenToVpcRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RoutePrivateZoneInCenToVpcRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RoutePrivateZoneInCenToVpcRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the region where PrivateZone is accessed.
    // 
    // This region refers to the region in which PrivateZone is accessed by clients.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessRegionId_ = nullptr;
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the region where PrivateZone is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostRegionId_ = nullptr;
    // The ID of the VPC that is associated with PrivateZone.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostVpcId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
