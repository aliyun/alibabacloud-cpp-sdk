// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELCOMMONBANDWIDTHPACKAGEIPBANDWIDTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELCOMMONBANDWIDTHPACKAGEIPBANDWIDTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CancelCommonBandwidthPackageIpBandwidthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelCommonBandwidthPackageIpBandwidthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(IpInstanceId, ipInstanceId_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelCommonBandwidthPackageIpBandwidthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(IpInstanceId, ipInstanceId_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CancelCommonBandwidthPackageIpBandwidthRequest() = default ;
    CancelCommonBandwidthPackageIpBandwidthRequest(const CancelCommonBandwidthPackageIpBandwidthRequest &) = default ;
    CancelCommonBandwidthPackageIpBandwidthRequest(CancelCommonBandwidthPackageIpBandwidthRequest &&) = default ;
    CancelCommonBandwidthPackageIpBandwidthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelCommonBandwidthPackageIpBandwidthRequest() = default ;
    CancelCommonBandwidthPackageIpBandwidthRequest& operator=(const CancelCommonBandwidthPackageIpBandwidthRequest &) = default ;
    CancelCommonBandwidthPackageIpBandwidthRequest& operator=(CancelCommonBandwidthPackageIpBandwidthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr
        && this->eipId_ == nullptr && this->ipInstanceId_ == nullptr && this->ipType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string getEipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // ipInstanceId Field Functions 
    bool hasIpInstanceId() const { return this->ipInstanceId_ != nullptr;};
    void deleteIpInstanceId() { this->ipInstanceId_ = nullptr;};
    inline string getIpInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ipInstanceId_, "") };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setIpInstanceId(string ipInstanceId) { DARABONBA_PTR_SET_VALUE(ipInstanceId_, ipInstanceId) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CancelCommonBandwidthPackageIpBandwidthRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The instance ID of the Internet Shared Bandwidth.
    // 
    // This parameter is required.
    shared_ptr<string> bandwidthPackageId_ {};
    // The ID of the EIP that is added to the Internet Shared Bandwidth instance. This parameter applies only to EIPs. For IPv6 addresses, use IpInstanceId.
    shared_ptr<string> eipId_ {};
    // The ID of the public IP address instance for which you want to cancel the maximum available bandwidth setting in the Internet Shared Bandwidth instance. This parameter and `EipId` are mutually exclusive. We recommend that you use this parameter for new workloads. If IpType is set to **VpcIpv6**, specify the IPv6 instance ID.
    shared_ptr<string> ipInstanceId_ {};
    // The resource type of the public IP address for which you want to cancel the maximum available bandwidth setting in the Internet Shared Bandwidth instance. Valid values:
    // - **EIP**: the public IP address of an EIP.
    // - **VpcIpv6**: the IPv6 address of a VPC.
    // 
    // If you do not specify this parameter, **EIP** is used.
    shared_ptr<string> ipType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the Internet Shared Bandwidth instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
