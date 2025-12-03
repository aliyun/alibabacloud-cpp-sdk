// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAvailableResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeAvailableResourceRequest() = default ;
    DescribeAvailableResourceRequest(const DescribeAvailableResourceRequest &) = default ;
    DescribeAvailableResourceRequest(DescribeAvailableResourceRequest &&) = default ;
    DescribeAvailableResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceRequest() = default ;
    DescribeAvailableResourceRequest& operator=(const DescribeAvailableResourceRequest &) = default ;
    DescribeAvailableResourceRequest& operator=(DescribeAvailableResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressIPVersion_ == nullptr
        && return this->addressType_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAvailableResourceRequest& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeAvailableResourceRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeAvailableResourceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeAvailableResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAvailableResourceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAvailableResourceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The type of the IP address.
    // 
    // Valid values: **ipv4 and ipv6**.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The network type.
    // 
    // Valid values: **vpc, classic-internet, and classic-intranet**.
    // 
    // vpc: an internal Classic Load Balancer (CLB) instance that is deployed in a virtual private cloud (VPC).
    // 
    // classic_internet: a public-facing CLB instance.
    // 
    // classic_intranet: an internal CLB instance that is deployed in a classic network.
    std::shared_ptr<string> addressType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
