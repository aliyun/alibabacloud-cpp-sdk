// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUPABASEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUPABASEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateSupabaseProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSupabaseProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSupabaseProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateSupabaseProjectRequest() = default ;
    CreateSupabaseProjectRequest(const CreateSupabaseProjectRequest &) = default ;
    CreateSupabaseProjectRequest(CreateSupabaseProjectRequest &&) = default ;
    CreateSupabaseProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSupabaseProjectRequest() = default ;
    CreateSupabaseProjectRequest& operator=(const CreateSupabaseProjectRequest &) = default ;
    CreateSupabaseProjectRequest& operator=(CreateSupabaseProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountPassword_ == nullptr
        && this->autoScale_ == nullptr && this->clientToken_ == nullptr && this->diskPerformanceLevel_ == nullptr && this->engineVersion_ == nullptr && this->payType_ == nullptr
        && this->period_ == nullptr && this->projectName_ == nullptr && this->projectSpec_ == nullptr && this->regionId_ == nullptr && this->securityIPList_ == nullptr
        && this->storageSize_ == nullptr && this->usedTime_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateSupabaseProjectRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // autoScale Field Functions 
    bool hasAutoScale() const { return this->autoScale_ != nullptr;};
    void deleteAutoScale() { this->autoScale_ = nullptr;};
    inline bool getAutoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
    inline CreateSupabaseProjectRequest& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSupabaseProjectRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskPerformanceLevel Field Functions 
    bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
    void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
    inline string getDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
    inline CreateSupabaseProjectRequest& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateSupabaseProjectRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateSupabaseProjectRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateSupabaseProjectRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateSupabaseProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // projectSpec Field Functions 
    bool hasProjectSpec() const { return this->projectSpec_ != nullptr;};
    void deleteProjectSpec() { this->projectSpec_ = nullptr;};
    inline string getProjectSpec() const { DARABONBA_PTR_GET_DEFAULT(projectSpec_, "") };
    inline CreateSupabaseProjectRequest& setProjectSpec(string projectSpec) { DARABONBA_PTR_SET_VALUE(projectSpec_, projectSpec) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSupabaseProjectRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateSupabaseProjectRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline CreateSupabaseProjectRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline string getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, "") };
    inline CreateSupabaseProjectRequest& setUsedTime(string usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateSupabaseProjectRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateSupabaseProjectRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateSupabaseProjectRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The password of the initial account.
    // 
    // - The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // - The following special characters are supported: `!@#$%^&*()_+-=`
    // - The password must be 8 to 32 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    shared_ptr<bool> autoScale_ {};
    // The client token that is used to ensure the idempotence of the request. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/327176.html).
    shared_ptr<string> clientToken_ {};
    // The performance level (PL) of the cloud disk. Default value: PL0. Valid values:
    // - PL0
    // - PL1
    shared_ptr<string> diskPerformanceLevel_ {};
    shared_ptr<string> engineVersion_ {};
    // The billing method. Valid values:
    // 
    // - **Postpaid**: pay-as-you-go.
    // - **Prepaid**: subscription.
    // 
    // > - If you do not specify this parameter, an instance of the Free type is created by default.
    // > - If you select the subscription billing method, you can receive discounts when you purchase a one-year or longer subscription. We recommend that you select a billing method based on your business requirements.
    shared_ptr<string> payType_ {};
    // The unit of the subscription duration. Valid values:
    // - **Month**: month.
    // - **Year**: year.
    // 
    // > This parameter is required when you create a subscription instance.
    shared_ptr<string> period_ {};
    // The project name. The naming rules are as follows:
    // 
    // - The name must be 1 to 128 characters in length.
    // 
    // - The name can contain only letters, digits, hyphens (-), and underscores (_).
    // 
    // - The name must start with a letter or an underscore (_).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The Supabase instance specification. The default specification for the Free type is 1C1G. The specifications for paid types are consistent with those available on the console.
    // 
    // This parameter is required.
    shared_ptr<string> projectSpec_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) to view the available region IDs.
    shared_ptr<string> regionId_ {};
    // The IP address whitelist.
    // 
    // The value 127.0.0.1 indicates that no external IP addresses are allowed to access the instance. After the instance is created, you can call [ModifySecurityIps](https://help.aliyun.com/document_detail/86928.html) to modify the IP address whitelist.
    // 
    // This parameter is required.
    shared_ptr<string> securityIPList_ {};
    // The storage size. Unit: GB. Default value: 1.
    shared_ptr<int64_t> storageSize_ {};
    // The subscription duration. Valid values:
    // - If **Period** is set to **Month**, the valid values are 1 to 11.
    // - If **Period** is set to **Year**, the valid values are 1 to 3.
    // 
    // > This parameter is required when you create a subscription instance.
    shared_ptr<string> usedTime_ {};
    // The vSwitch ID.
    // 
    // > - The **vSwitchId** parameter is required.
    // > - The zone of the **vSwitch** must be the same as the value of **ZoneId**.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    // >  - You can call [DescribeRdsVpcs](https://help.aliyun.com/document_detail/208327.html) to view the available VPC IDs.
    // > - This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The zone ID.
    // 
    // > You can call [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) to view the available zone IDs.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
