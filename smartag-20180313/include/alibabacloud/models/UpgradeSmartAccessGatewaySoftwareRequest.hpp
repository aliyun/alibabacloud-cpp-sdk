// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADESMARTACCESSGATEWAYSOFTWAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADESMARTACCESSGATEWAYSOFTWAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpgradeSmartAccessGatewaySoftwareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeSmartAccessGatewaySoftwareRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpgradeSmartAccessGatewaySoftwareRequest& obj) { 
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
    UpgradeSmartAccessGatewaySoftwareRequest() = default ;
    UpgradeSmartAccessGatewaySoftwareRequest(const UpgradeSmartAccessGatewaySoftwareRequest &) = default ;
    UpgradeSmartAccessGatewaySoftwareRequest(UpgradeSmartAccessGatewaySoftwareRequest &&) = default ;
    UpgradeSmartAccessGatewaySoftwareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeSmartAccessGatewaySoftwareRequest() = default ;
    UpgradeSmartAccessGatewaySoftwareRequest& operator=(const UpgradeSmartAccessGatewaySoftwareRequest &) = default ;
    UpgradeSmartAccessGatewaySoftwareRequest& operator=(UpgradeSmartAccessGatewaySoftwareRequest &&) = default ;
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
    inline UpgradeSmartAccessGatewaySoftwareRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // dataPlan Field Functions 
    bool hasDataPlan() const { return this->dataPlan_ != nullptr;};
    void deleteDataPlan() { this->dataPlan_ = nullptr;};
    inline int64_t getDataPlan() const { DARABONBA_PTR_GET_DEFAULT(dataPlan_, 0L) };
    inline UpgradeSmartAccessGatewaySoftwareRequest& setDataPlan(int64_t dataPlan) { DARABONBA_PTR_SET_VALUE(dataPlan_, dataPlan) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpgradeSmartAccessGatewaySoftwareRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeSmartAccessGatewaySoftwareRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeSmartAccessGatewaySoftwareRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeSmartAccessGatewaySoftwareRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeSmartAccessGatewaySoftwareRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline UpgradeSmartAccessGatewaySoftwareRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline UpgradeSmartAccessGatewaySoftwareRequest& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    // Specifies whether to enable auto-payment for the instance.
    // 
    // *   **false**: no
    // *   **true**: yes
    // 
    // >  If the parameter is set to false, you must complete the payment in the SAG console after you call this operation.
    // 
    // This parameter is required.
    shared_ptr<bool> autoPay_ {};
    // The data transfer plan for each client account. Unit: GB.
    // 
    // >  Each client account has a data transfer plan of 5 GB that is free of charge each month.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataPlan_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the SAG app instance is created.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the SAG app instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The maximum number of client accounts supported by the SAG app instance.
    // 
    // After you complete the payment, you can create a client account for each employee who needs to use the SAG app.
    // 
    // This parameter is required.
    shared_ptr<int32_t> userCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
