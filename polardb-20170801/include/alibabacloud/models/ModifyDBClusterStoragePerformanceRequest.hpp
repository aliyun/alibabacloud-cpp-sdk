// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSTORAGEPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSTORAGEPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterStoragePerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterStoragePerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterStoragePerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    ModifyDBClusterStoragePerformanceRequest() = default ;
    ModifyDBClusterStoragePerformanceRequest(const ModifyDBClusterStoragePerformanceRequest &) = default ;
    ModifyDBClusterStoragePerformanceRequest(ModifyDBClusterStoragePerformanceRequest &&) = default ;
    ModifyDBClusterStoragePerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterStoragePerformanceRequest() = default ;
    ModifyDBClusterStoragePerformanceRequest& operator=(const ModifyDBClusterStoragePerformanceRequest &) = default ;
    ModifyDBClusterStoragePerformanceRequest& operator=(ModifyDBClusterStoragePerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUseCoupon_ == nullptr
        && this->burstingEnabled_ == nullptr && this->clientToken_ == nullptr && this->DBClusterId_ == nullptr && this->modifyType_ == nullptr && this->promotionCode_ == nullptr
        && this->provisionedIops_ == nullptr && this->resourceOwnerId_ == nullptr && this->storageType_ == nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline ModifyDBClusterStoragePerformanceRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline string getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, "") };
    inline ModifyDBClusterStoragePerformanceRequest& setBurstingEnabled(string burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBClusterStoragePerformanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterStoragePerformanceRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifyDBClusterStoragePerformanceRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyDBClusterStoragePerformanceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int32_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0) };
    inline ModifyDBClusterStoragePerformanceRequest& setProvisionedIops(int32_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterStoragePerformanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ModifyDBClusterStoragePerformanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    shared_ptr<bool> autoUseCoupon_ {};
    // Specifies whether to enable the I/O Burst feature for the ESSD AutoPL disk. Valid value:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  This parameter is available only when the StorageType parameter is set to ESSDAUTOPL.
    shared_ptr<string> burstingEnabled_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> modifyType_ {};
    shared_ptr<string> promotionCode_ {};
    shared_ptr<int32_t> provisionedIops_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
