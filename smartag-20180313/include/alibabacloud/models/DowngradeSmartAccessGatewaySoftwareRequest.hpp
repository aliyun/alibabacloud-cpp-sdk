// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNGRADESMARTACCESSGATEWAYSOFTWAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNGRADESMARTACCESSGATEWAYSOFTWAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DowngradeSmartAccessGatewaySoftwareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DowngradeSmartAccessGatewaySoftwareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(DataPlan, dataPlan_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, DowngradeSmartAccessGatewaySoftwareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(DataPlan, dataPlan_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    DowngradeSmartAccessGatewaySoftwareRequest() = default ;
    DowngradeSmartAccessGatewaySoftwareRequest(const DowngradeSmartAccessGatewaySoftwareRequest &) = default ;
    DowngradeSmartAccessGatewaySoftwareRequest(DowngradeSmartAccessGatewaySoftwareRequest &&) = default ;
    DowngradeSmartAccessGatewaySoftwareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DowngradeSmartAccessGatewaySoftwareRequest() = default ;
    DowngradeSmartAccessGatewaySoftwareRequest& operator=(const DowngradeSmartAccessGatewaySoftwareRequest &) = default ;
    DowngradeSmartAccessGatewaySoftwareRequest& operator=(DowngradeSmartAccessGatewaySoftwareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->dataPlan_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->smartAGId_ == nullptr && this->userCount_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // dataPlan Field Functions 
    bool hasDataPlan() const { return this->dataPlan_ != nullptr;};
    void deleteDataPlan() { this->dataPlan_ = nullptr;};
    inline int64_t getDataPlan() const { DARABONBA_PTR_GET_DEFAULT(dataPlan_, 0L) };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setDataPlan(int64_t dataPlan) { DARABONBA_PTR_SET_VALUE(dataPlan_, dataPlan) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline DowngradeSmartAccessGatewaySoftwareRequest& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    // Specify whether the bill belongs to a subscription instance that has auto renewal enabled. Valid values:
    // 
    // *   **false** (default): no
    // *   **true**: yes
    // 
    // This parameter is required.
    shared_ptr<bool> autoPay_ {};
    // The amount of free data transfer allocated to each client account per month, which is 5 GB.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataPlan_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the SAG app instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the SAG app instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The quota of client accounts that can be connected to an SAG app instance. Typically, you need to create an account for each user that needs to log on to the SAG app.
    // 
    // This parameter is required.
    shared_ptr<int32_t> userCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
