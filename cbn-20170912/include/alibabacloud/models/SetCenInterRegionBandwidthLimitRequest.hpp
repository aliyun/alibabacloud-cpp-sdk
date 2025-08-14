// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCENINTERREGIONBANDWIDTHLIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCENINTERREGIONBANDWIDTHLIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class SetCenInterRegionBandwidthLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCenInterRegionBandwidthLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(LocalRegionId, localRegionId_);
      DARABONBA_PTR_TO_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetCenInterRegionBandwidthLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthLimit, bandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(LocalRegionId, localRegionId_);
      DARABONBA_PTR_FROM_JSON(OppositeRegionId, oppositeRegionId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SetCenInterRegionBandwidthLimitRequest() = default ;
    SetCenInterRegionBandwidthLimitRequest(const SetCenInterRegionBandwidthLimitRequest &) = default ;
    SetCenInterRegionBandwidthLimitRequest(SetCenInterRegionBandwidthLimitRequest &&) = default ;
    SetCenInterRegionBandwidthLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCenInterRegionBandwidthLimitRequest() = default ;
    SetCenInterRegionBandwidthLimitRequest& operator=(const SetCenInterRegionBandwidthLimitRequest &) = default ;
    SetCenInterRegionBandwidthLimitRequest& operator=(SetCenInterRegionBandwidthLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthLimit_ != nullptr
        && this->bandwidthType_ != nullptr && this->cenId_ != nullptr && this->localRegionId_ != nullptr && this->oppositeRegionId_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // bandwidthLimit Field Functions 
    bool hasBandwidthLimit() const { return this->bandwidthLimit_ != nullptr;};
    void deleteBandwidthLimit() { this->bandwidthLimit_ = nullptr;};
    inline int64_t bandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(bandwidthLimit_, 0L) };
    inline SetCenInterRegionBandwidthLimitRequest& setBandwidthLimit(int64_t bandwidthLimit) { DARABONBA_PTR_SET_VALUE(bandwidthLimit_, bandwidthLimit) };


    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline string bandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
    inline SetCenInterRegionBandwidthLimitRequest& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline SetCenInterRegionBandwidthLimitRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // localRegionId Field Functions 
    bool hasLocalRegionId() const { return this->localRegionId_ != nullptr;};
    void deleteLocalRegionId() { this->localRegionId_ = nullptr;};
    inline string localRegionId() const { DARABONBA_PTR_GET_DEFAULT(localRegionId_, "") };
    inline SetCenInterRegionBandwidthLimitRequest& setLocalRegionId(string localRegionId) { DARABONBA_PTR_SET_VALUE(localRegionId_, localRegionId) };


    // oppositeRegionId Field Functions 
    bool hasOppositeRegionId() const { return this->oppositeRegionId_ != nullptr;};
    void deleteOppositeRegionId() { this->oppositeRegionId_ = nullptr;};
    inline string oppositeRegionId() const { DARABONBA_PTR_GET_DEFAULT(oppositeRegionId_, "") };
    inline SetCenInterRegionBandwidthLimitRequest& setOppositeRegionId(string oppositeRegionId) { DARABONBA_PTR_SET_VALUE(oppositeRegionId_, oppositeRegionId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetCenInterRegionBandwidthLimitRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetCenInterRegionBandwidthLimitRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetCenInterRegionBandwidthLimitRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetCenInterRegionBandwidthLimitRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The maximum bandwidth value of the inter-region connection. Unit: Mbit/s.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> bandwidthLimit_ = nullptr;
    // The bandwidth allocation method. Valid values:
    // 
    // **BandwidthPackage**: allocates bandwidth from a bandwidth plan.
    std::shared_ptr<string> bandwidthType_ = nullptr;
    // The ID of the CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the local region.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query regions where you can attach network instances to a CEN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> localRegionId_ = nullptr;
    // The ID of the peer region.
    // 
    // This parameter is required.
    std::shared_ptr<string> oppositeRegionId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
