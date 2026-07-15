// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEDISKTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEDISKTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyDBInstanceDiskTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceDiskTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DbInstanceStorageType, dbInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(ExtraParam, extraParam_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceDiskTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceStorageType, dbInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(ExtraParam, extraParam_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBInstanceDiskTypeRequest() = default ;
    ModifyDBInstanceDiskTypeRequest(const ModifyDBInstanceDiskTypeRequest &) = default ;
    ModifyDBInstanceDiskTypeRequest(ModifyDBInstanceDiskTypeRequest &&) = default ;
    ModifyDBInstanceDiskTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceDiskTypeRequest() = default ;
    ModifyDBInstanceDiskTypeRequest& operator=(const ModifyDBInstanceDiskTypeRequest &) = default ;
    ModifyDBInstanceDiskTypeRequest& operator=(ModifyDBInstanceDiskTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->businessInfo_ == nullptr && this->couponNo_ == nullptr && this->DBInstanceId_ == nullptr && this->dbInstanceStorageType_ == nullptr
        && this->extraParam_ == nullptr && this->orderType_ == nullptr && this->provisionedIops_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyDBInstanceDiskTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline ModifyDBInstanceDiskTypeRequest& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline ModifyDBInstanceDiskTypeRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline ModifyDBInstanceDiskTypeRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceDiskTypeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dbInstanceStorageType Field Functions 
    bool hasDbInstanceStorageType() const { return this->dbInstanceStorageType_ != nullptr;};
    void deleteDbInstanceStorageType() { this->dbInstanceStorageType_ = nullptr;};
    inline string getDbInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceStorageType_, "") };
    inline ModifyDBInstanceDiskTypeRequest& setDbInstanceStorageType(string dbInstanceStorageType) { DARABONBA_PTR_SET_VALUE(dbInstanceStorageType_, dbInstanceStorageType) };


    // extraParam Field Functions 
    bool hasExtraParam() const { return this->extraParam_ != nullptr;};
    void deleteExtraParam() { this->extraParam_ = nullptr;};
    inline string getExtraParam() const { DARABONBA_PTR_GET_DEFAULT(extraParam_, "") };
    inline ModifyDBInstanceDiskTypeRequest& setExtraParam(string extraParam) { DARABONBA_PTR_SET_VALUE(extraParam_, extraParam) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ModifyDBInstanceDiskTypeRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline ModifyDBInstanceDiskTypeRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceDiskTypeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **true**: Enables automatic payment. Make sure that your account has a sufficient balance.
    // 
    // <props="china">
    // 
    // - **false**: Disables automatic payment. To pay for the order, log on to the ApsaraDB for MongoDB console. In the upper-right corner of the page, choose **Expenses** > **Expenses and Costs**. In the navigation pane on the left, choose **Subscription Orders** > **My Orders**. On the **Product Orders** tab, find the order and complete the payment.
    // 
    // 
    // 
    // 
    // <props="intl">
    // 
    // - **false**: Disables automatic payment. To pay for the order, log on to the ApsaraDB for MongoDB console. In the upper-right corner of the page, choose **Expenses** > **Expenses and Costs**. In the navigation pane on the left, click **Order Management**. On the **Product Orders** page, find the order and complete the payment.
    // 
    // 
    // 
    // 
    // Default value: **true**.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // - **true**: Enables auto-renewal.
    // 
    // - **false**: Disables auto-renewal.
    // 
    // Default value: **false**
    shared_ptr<string> autoRenew_ {};
    // The business information. This is an additional parameter.
    shared_ptr<string> businessInfo_ {};
    // The coupon code. The default value is `youhuiquan_promotion_option_id_for_blank`.
    shared_ptr<string> couponNo_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The disk type after the modification. Valid value:
    // 
    // - **cloud_auto**: ESSD AutoPL disk.
    shared_ptr<string> dbInstanceStorageType_ {};
    // An additional parameter.
    shared_ptr<string> extraParam_ {};
    // The order type. Valid values:
    // 
    // - **UPGRADE**: Upgrades the instance configuration.
    // 
    // - **DOWNGRADE**: Downgrades the instance configuration.
    // 
    // > This parameter is available only when the instance uses the subscription billing method.
    shared_ptr<string> orderType_ {};
    // The provisioned IOPS. Valid values: 0 to 50000.
    shared_ptr<int64_t> provisionedIops_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
