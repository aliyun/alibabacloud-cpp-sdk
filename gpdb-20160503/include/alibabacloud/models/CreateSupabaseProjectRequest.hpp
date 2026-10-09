// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUPABASEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUPABASEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CreateOptions, createOptions_);
      DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(Lightweight, lightweight_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(SrcProjectId, srcProjectId_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSupabaseProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CreateOptions, createOptions_);
      DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(Lightweight, lightweight_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProjectSpec, projectSpec_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(SrcProjectId, srcProjectId_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. Limits:
      // 
      // - It cannot be an empty string.
      // - It can be up to 128 characters in length.
      // - It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The value can be an empty string. It can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accountPassword_ == nullptr
        && this->autoScale_ == nullptr && this->backupId_ == nullptr && this->clientToken_ == nullptr && this->createOptions_ == nullptr && this->diskPerformanceLevel_ == nullptr
        && this->engineVersion_ == nullptr && this->lightweight_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->projectName_ == nullptr
        && this->projectSpec_ == nullptr && this->regionId_ == nullptr && this->securityIPList_ == nullptr && this->srcProjectId_ == nullptr && this->storageSize_ == nullptr
        && this->tags_ == nullptr && this->usedTime_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
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


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateSupabaseProjectRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSupabaseProjectRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // createOptions Field Functions 
    bool hasCreateOptions() const { return this->createOptions_ != nullptr;};
    void deleteCreateOptions() { this->createOptions_ = nullptr;};
    inline string getCreateOptions() const { DARABONBA_PTR_GET_DEFAULT(createOptions_, "") };
    inline CreateSupabaseProjectRequest& setCreateOptions(string createOptions) { DARABONBA_PTR_SET_VALUE(createOptions_, createOptions) };


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


    // lightweight Field Functions 
    bool hasLightweight() const { return this->lightweight_ != nullptr;};
    void deleteLightweight() { this->lightweight_ = nullptr;};
    inline bool getLightweight() const { DARABONBA_PTR_GET_DEFAULT(lightweight_, false) };
    inline CreateSupabaseProjectRequest& setLightweight(bool lightweight) { DARABONBA_PTR_SET_VALUE(lightweight_, lightweight) };


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


    // srcProjectId Field Functions 
    bool hasSrcProjectId() const { return this->srcProjectId_ != nullptr;};
    void deleteSrcProjectId() { this->srcProjectId_ = nullptr;};
    inline string getSrcProjectId() const { DARABONBA_PTR_GET_DEFAULT(srcProjectId_, "") };
    inline CreateSupabaseProjectRequest& setSrcProjectId(string srcProjectId) { DARABONBA_PTR_SET_VALUE(srcProjectId_, srcProjectId) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline CreateSupabaseProjectRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateSupabaseProjectRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateSupabaseProjectRequest::Tags>) };
    inline vector<CreateSupabaseProjectRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateSupabaseProjectRequest::Tags>) };
    inline CreateSupabaseProjectRequest& setTags(const vector<CreateSupabaseProjectRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateSupabaseProjectRequest& setTags(vector<CreateSupabaseProjectRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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
    // The initial account password.
    // 
    // Password rules:
    // 
    // - The password must be 8 to 32 characters in length.
    // - The password must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // - Supported special characters include !@#$%^&*()_+-=.
    // 
    // This parameter is required.
    shared_ptr<string> accountPassword_ {};
    // Specifies whether to enable auto-start and auto-stop. If you do not specify this parameter, the default value is false.
    shared_ptr<bool> autoScale_ {};
    // The backup set ID.
    // 
    // > You can call [ListSupabaseDataBackups](https://help.aliyun.com/document_detail/3064623.html) to view the IDs of all backup sets under the target Supabase project.
    shared_ptr<string> backupId_ {};
    // The client token. It is used to ensure idempotence and prevent duplicate requests from executing the same operation.
    shared_ptr<string> clientToken_ {};
    // The optional creation parameters. The default value is empty.
    shared_ptr<string> createOptions_ {};
    // The performance level of the cloud disk. If you do not specify this parameter, the default value is PL0.
    // 
    // Valid values:
    // 
    // - PL0
    // - PL1
    // - PL2
    // - PL3
    shared_ptr<string> diskPerformanceLevel_ {};
    // The DPI engine version. If you do not specify this parameter, the default value is PG15. PostgreSQL 17 and later versions support the data sandbox (branch) feature.
    // 
    // Valid values:
    // 
    // - PG15: PostgreSQL 15.
    // - PG17: PostgreSQL 17, which supports the data sandbox feature.
    shared_ptr<string> engineVersion_ {};
    // Specifies whether the project is the lightweight edition.
    shared_ptr<bool> lightweight_ {};
    // The billing method. If you do not specify this parameter, the default value is Free.
    // 
    // Valid values:
    // 
    // - Free: the free billing method.
    // - Postpaid: pay-as-you-go.
    // - Prepaid: subscription.
    shared_ptr<string> payType_ {};
    // The unit of the subscription duration. This parameter takes effect only when PayType is set to Prepaid. If you do not specify this parameter, the default value is Month.
    // 
    // Valid values:
    // 
    // - Month: month.
    // - Year: year.
    shared_ptr<string> period_ {};
    // The name of the Supabase project.
    // 
    // Naming rules:
    // 
    // - The name must be 1 to 128 characters in length.
    // - The name can contain only letters, digits, hyphens (-), and underscores (_).
    // - The name must start with a letter or an underscore (_).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The specifications of the Supabase project. The free billing method uses the free specifications. For paid billing methods, the specifications must be consistent with those available in the console.
    // 
    // This parameter is required.
    shared_ptr<string> projectSpec_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The IP address whitelist. Separate multiple IP addresses or CIDR blocks with commas (,). If you do not specify this parameter, the default value 0.0.0.0/0 is used.
    // 
    // This parameter is required.
    shared_ptr<string> securityIPList_ {};
    // The ID of the Supabase project to which the backup set belongs.
    shared_ptr<string> srcProjectId_ {};
    // The storage capacity. Unit: GB. If you do not specify this parameter for a non-free billing method, the default value is 1.
    shared_ptr<int64_t> storageSize_ {};
    // The list of tags.
    shared_ptr<vector<CreateSupabaseProjectRequest::Tags>> tags_ {};
    // The subscription duration of the resource. This parameter takes effect only when PayType is set to Prepaid. If you do not specify this parameter, the default value is 1.
    shared_ptr<string> usedTime_ {};
    // The vSwitch ID. This parameter is required. The zone of the vSwitch must be the same as the value of ZoneId.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC). This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The zone ID. The zone of the vSwitch specified by VSwitchId must be the same as the value of this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
