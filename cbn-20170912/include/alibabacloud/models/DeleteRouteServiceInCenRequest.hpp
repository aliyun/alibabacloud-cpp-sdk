// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTESERVICEINCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTESERVICEINCENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DeleteRouteServiceInCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRouteServiceInCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRegionId, accessRegionId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_TO_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRouteServiceInCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRegionId, accessRegionId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_FROM_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteRouteServiceInCenRequest() = default ;
    DeleteRouteServiceInCenRequest(const DeleteRouteServiceInCenRequest &) = default ;
    DeleteRouteServiceInCenRequest(DeleteRouteServiceInCenRequest &&) = default ;
    DeleteRouteServiceInCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRouteServiceInCenRequest() = default ;
    DeleteRouteServiceInCenRequest& operator=(const DeleteRouteServiceInCenRequest &) = default ;
    DeleteRouteServiceInCenRequest& operator=(DeleteRouteServiceInCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessRegionId_ != nullptr
        && this->cenId_ != nullptr && this->host_ != nullptr && this->hostRegionId_ != nullptr && this->hostVpcId_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // accessRegionId Field Functions 
    bool hasAccessRegionId() const { return this->accessRegionId_ != nullptr;};
    void deleteAccessRegionId() { this->accessRegionId_ = nullptr;};
    inline string accessRegionId() const { DARABONBA_PTR_GET_DEFAULT(accessRegionId_, "") };
    inline DeleteRouteServiceInCenRequest& setAccessRegionId(string accessRegionId) { DARABONBA_PTR_SET_VALUE(accessRegionId_, accessRegionId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DeleteRouteServiceInCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DeleteRouteServiceInCenRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // hostRegionId Field Functions 
    bool hasHostRegionId() const { return this->hostRegionId_ != nullptr;};
    void deleteHostRegionId() { this->hostRegionId_ = nullptr;};
    inline string hostRegionId() const { DARABONBA_PTR_GET_DEFAULT(hostRegionId_, "") };
    inline DeleteRouteServiceInCenRequest& setHostRegionId(string hostRegionId) { DARABONBA_PTR_SET_VALUE(hostRegionId_, hostRegionId) };


    // hostVpcId Field Functions 
    bool hasHostVpcId() const { return this->hostVpcId_ != nullptr;};
    void deleteHostVpcId() { this->hostVpcId_ = nullptr;};
    inline string hostVpcId() const { DARABONBA_PTR_GET_DEFAULT(hostVpcId_, "") };
    inline DeleteRouteServiceInCenRequest& setHostVpcId(string hostVpcId) { DARABONBA_PTR_SET_VALUE(hostVpcId_, hostVpcId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteRouteServiceInCenRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteRouteServiceInCenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteRouteServiceInCenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteRouteServiceInCenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the region where the cloud service is accessed.
    // 
    // This parameter is required.
    std::shared_ptr<string> accessRegionId_ = nullptr;
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The IP addresses or CIDR blocks of the cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<string> host_ = nullptr;
    // The region ID of the cloud service.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostRegionId_ = nullptr;
    // The ID of the virtual private cloud (VPC) that is associated with the cloud service.
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
