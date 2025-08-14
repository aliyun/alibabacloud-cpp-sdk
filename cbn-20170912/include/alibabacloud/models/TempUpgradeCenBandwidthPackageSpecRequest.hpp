// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPUPGRADECENBANDWIDTHPACKAGESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEMPUPGRADECENBANDWIDTHPACKAGESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class TempUpgradeCenBandwidthPackageSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TempUpgradeCenBandwidthPackageSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, TempUpgradeCenBandwidthPackageSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    TempUpgradeCenBandwidthPackageSpecRequest() = default ;
    TempUpgradeCenBandwidthPackageSpecRequest(const TempUpgradeCenBandwidthPackageSpecRequest &) = default ;
    TempUpgradeCenBandwidthPackageSpecRequest(TempUpgradeCenBandwidthPackageSpecRequest &&) = default ;
    TempUpgradeCenBandwidthPackageSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TempUpgradeCenBandwidthPackageSpecRequest() = default ;
    TempUpgradeCenBandwidthPackageSpecRequest& operator=(const TempUpgradeCenBandwidthPackageSpecRequest &) = default ;
    TempUpgradeCenBandwidthPackageSpecRequest& operator=(TempUpgradeCenBandwidthPackageSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->cenBandwidthPackageId_ != nullptr && this->endTime_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline TempUpgradeCenBandwidthPackageSpecRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cenBandwidthPackageId Field Functions 
    bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
    void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
    inline string cenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
    inline TempUpgradeCenBandwidthPackageSpecRequest& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline TempUpgradeCenBandwidthPackageSpecRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline TempUpgradeCenBandwidthPackageSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TempUpgradeCenBandwidthPackageSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TempUpgradeCenBandwidthPackageSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TempUpgradeCenBandwidthPackageSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cenBandwidthPackageId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
