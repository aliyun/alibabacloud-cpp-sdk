// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENBANDWIDTHPACKAGESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENBANDWIDTHPACKAGESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ModifyCenBandwidthPackageSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenBandwidthPackageSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenBandwidthPackageSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CenBandwidthPackageId, cenBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyCenBandwidthPackageSpecRequest() = default ;
    ModifyCenBandwidthPackageSpecRequest(const ModifyCenBandwidthPackageSpecRequest &) = default ;
    ModifyCenBandwidthPackageSpecRequest(ModifyCenBandwidthPackageSpecRequest &&) = default ;
    ModifyCenBandwidthPackageSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenBandwidthPackageSpecRequest() = default ;
    ModifyCenBandwidthPackageSpecRequest& operator=(const ModifyCenBandwidthPackageSpecRequest &) = default ;
    ModifyCenBandwidthPackageSpecRequest& operator=(ModifyCenBandwidthPackageSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidth_ != nullptr
        && this->cenBandwidthPackageId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ModifyCenBandwidthPackageSpecRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cenBandwidthPackageId Field Functions 
    bool hasCenBandwidthPackageId() const { return this->cenBandwidthPackageId_ != nullptr;};
    void deleteCenBandwidthPackageId() { this->cenBandwidthPackageId_ = nullptr;};
    inline string cenBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(cenBandwidthPackageId_, "") };
    inline ModifyCenBandwidthPackageSpecRequest& setCenBandwidthPackageId(string cenBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(cenBandwidthPackageId_, cenBandwidthPackageId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyCenBandwidthPackageSpecRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCenBandwidthPackageSpecRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCenBandwidthPackageSpecRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCenBandwidthPackageSpecRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The new maximum bandwidth value of the bandwidth plan. Unit: Mbit/s.
    // 
    // Valid values: **2** to **10000**.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The ID of the bandwidth plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenBandwidthPackageId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
