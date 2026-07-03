// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARDBXSUPABASEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARDBXSUPABASEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreatePolardbxSupabaseInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolardbxSupabaseInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_TO_JSON(DbInstanceDescription, dbInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DbPassword, dbPassword_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TenantMode, tenantMode_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolardbxSupabaseInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DashboardPassword, dashboardPassword_);
      DARABONBA_PTR_FROM_JSON(DbInstanceDescription, dbInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DbPassword, dbPassword_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TenantMode, tenantMode_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreatePolardbxSupabaseInstanceRequest() = default ;
    CreatePolardbxSupabaseInstanceRequest(const CreatePolardbxSupabaseInstanceRequest &) = default ;
    CreatePolardbxSupabaseInstanceRequest(CreatePolardbxSupabaseInstanceRequest &&) = default ;
    CreatePolardbxSupabaseInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolardbxSupabaseInstanceRequest() = default ;
    CreatePolardbxSupabaseInstanceRequest& operator=(const CreatePolardbxSupabaseInstanceRequest &) = default ;
    CreatePolardbxSupabaseInstanceRequest& operator=(CreatePolardbxSupabaseInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->clientToken_ == nullptr && this->dashboardPassword_ == nullptr && this->dbInstanceDescription_ == nullptr && this->dbPassword_ == nullptr && this->payType_ == nullptr
        && this->period_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tenantMode_ == nullptr && this->usedTime_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreatePolardbxSupabaseInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dashboardPassword Field Functions 
    bool hasDashboardPassword() const { return this->dashboardPassword_ != nullptr;};
    void deleteDashboardPassword() { this->dashboardPassword_ = nullptr;};
    inline string getDashboardPassword() const { DARABONBA_PTR_GET_DEFAULT(dashboardPassword_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setDashboardPassword(string dashboardPassword) { DARABONBA_PTR_SET_VALUE(dashboardPassword_, dashboardPassword) };


    // dbInstanceDescription Field Functions 
    bool hasDbInstanceDescription() const { return this->dbInstanceDescription_ != nullptr;};
    void deleteDbInstanceDescription() { this->dbInstanceDescription_ = nullptr;};
    inline string getDbInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceDescription_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setDbInstanceDescription(string dbInstanceDescription) { DARABONBA_PTR_SET_VALUE(dbInstanceDescription_, dbInstanceDescription) };


    // dbPassword Field Functions 
    bool hasDbPassword() const { return this->dbPassword_ != nullptr;};
    void deleteDbPassword() { this->dbPassword_ = nullptr;};
    inline string getDbPassword() const { DARABONBA_PTR_GET_DEFAULT(dbPassword_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setDbPassword(string dbPassword) { DARABONBA_PTR_SET_VALUE(dbPassword_, dbPassword) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tenantMode Field Functions 
    bool hasTenantMode() const { return this->tenantMode_ != nullptr;};
    void deleteTenantMode() { this->tenantMode_ = nullptr;};
    inline bool getTenantMode() const { DARABONBA_PTR_GET_DEFAULT(tenantMode_, false) };
    inline CreatePolardbxSupabaseInstanceRequest& setTenantMode(bool tenantMode) { DARABONBA_PTR_SET_VALUE(tenantMode_, tenantMode) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreatePolardbxSupabaseInstanceRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreatePolardbxSupabaseInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to enable auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The dashboard password.
    // 
    // This parameter is required.
    shared_ptr<string> dashboardPassword_ {};
    // The instance description.
    shared_ptr<string> dbInstanceDescription_ {};
    // The database password.
    // 
    // This parameter is required.
    shared_ptr<string> dbPassword_ {};
    // The billing type. Valid values:
    // - PREPAY: subscription.
    // - POSTPAY: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The billing cycle. Valid values:
    // - Year
    // - Month
    // - Hour
    shared_ptr<string> period_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to enable multi-tenant mode.
    shared_ptr<bool> tenantMode_ {};
    // The subscription duration.
    shared_ptr<int32_t> usedTime_ {};
    // The vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // VPC ID
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
