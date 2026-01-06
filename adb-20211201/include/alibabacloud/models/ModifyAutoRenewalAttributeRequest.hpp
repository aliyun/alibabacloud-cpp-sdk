// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTORENEWALATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTORENEWALATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyAutoRenewalAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoRenewalAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewalPeriod, autoRenewalPeriod_);
      DARABONBA_PTR_TO_JSON(AutoRenewalPeriodUnit, autoRenewalPeriodUnit_);
      DARABONBA_PTR_TO_JSON(AutoRenewalStatus, autoRenewalStatus_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoRenewalAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewalPeriod, autoRenewalPeriod_);
      DARABONBA_PTR_FROM_JSON(AutoRenewalPeriodUnit, autoRenewalPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(AutoRenewalStatus, autoRenewalStatus_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyAutoRenewalAttributeRequest() = default ;
    ModifyAutoRenewalAttributeRequest(const ModifyAutoRenewalAttributeRequest &) = default ;
    ModifyAutoRenewalAttributeRequest(ModifyAutoRenewalAttributeRequest &&) = default ;
    ModifyAutoRenewalAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoRenewalAttributeRequest() = default ;
    ModifyAutoRenewalAttributeRequest& operator=(const ModifyAutoRenewalAttributeRequest &) = default ;
    ModifyAutoRenewalAttributeRequest& operator=(ModifyAutoRenewalAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewalPeriod_ == nullptr
        && this->autoRenewalPeriodUnit_ == nullptr && this->autoRenewalStatus_ == nullptr && this->DBClusterId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // autoRenewalPeriod Field Functions 
    bool hasAutoRenewalPeriod() const { return this->autoRenewalPeriod_ != nullptr;};
    void deleteAutoRenewalPeriod() { this->autoRenewalPeriod_ = nullptr;};
    inline string getAutoRenewalPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalPeriod_, "") };
    inline ModifyAutoRenewalAttributeRequest& setAutoRenewalPeriod(string autoRenewalPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewalPeriod_, autoRenewalPeriod) };


    // autoRenewalPeriodUnit Field Functions 
    bool hasAutoRenewalPeriodUnit() const { return this->autoRenewalPeriodUnit_ != nullptr;};
    void deleteAutoRenewalPeriodUnit() { this->autoRenewalPeriodUnit_ = nullptr;};
    inline string getAutoRenewalPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalPeriodUnit_, "") };
    inline ModifyAutoRenewalAttributeRequest& setAutoRenewalPeriodUnit(string autoRenewalPeriodUnit) { DARABONBA_PTR_SET_VALUE(autoRenewalPeriodUnit_, autoRenewalPeriodUnit) };


    // autoRenewalStatus Field Functions 
    bool hasAutoRenewalStatus() const { return this->autoRenewalStatus_ != nullptr;};
    void deleteAutoRenewalStatus() { this->autoRenewalStatus_ = nullptr;};
    inline string getAutoRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(autoRenewalStatus_, "") };
    inline ModifyAutoRenewalAttributeRequest& setAutoRenewalStatus(string autoRenewalStatus) { DARABONBA_PTR_SET_VALUE(autoRenewalStatus_, autoRenewalStatus) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyAutoRenewalAttributeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyAutoRenewalAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAutoRenewalAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAutoRenewalAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAutoRenewalAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAutoRenewalAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The duration of the auto-renewal. Default value: 1. Valid values:
    // 
    // *   When **AutoRenewalPeriod** is set to **Month**, the value ranges from 1 to 11 (integer).
    // *   When **AutoRenewalPeriod** is set to **Month**, the valid values are 1, 2, 3, and 5 (integer).
    // 
    // >  Longer renewal periods offer better pricing. Renewing for 1 year is more cost-effective than renewing for 10 or 11 months.
    shared_ptr<string> autoRenewalPeriod_ {};
    // Auto-renewal duration. Valid values:
    // 
    // *   Year.
    // *   Month.
    shared_ptr<string> autoRenewalPeriodUnit_ {};
    // The renewal method. Valid values:
    // 
    // *   **AutoRenewal**: The cluster is automatically renewed.
    // *   **Normal**: The cluster is manually renewed. Before the cluster expires, the system sends you a reminder by SMS message.
    // *   **NotRenewal**: The cluster is not renewed. Reminders are only sent three days before cluster expiration.
    shared_ptr<string> autoRenewalStatus_ {};
    // The ID of cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
