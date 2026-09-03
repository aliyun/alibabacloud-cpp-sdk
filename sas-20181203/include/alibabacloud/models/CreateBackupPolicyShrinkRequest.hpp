// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateBackupPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policy, policyShrink_);
      DARABONBA_PTR_TO_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(SelectType, selectType_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policy, policyShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    CreateBackupPolicyShrinkRequest() = default ;
    CreateBackupPolicyShrinkRequest(const CreateBackupPolicyShrinkRequest &) = default ;
    CreateBackupPolicyShrinkRequest(CreateBackupPolicyShrinkRequest &&) = default ;
    CreateBackupPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupPolicyShrinkRequest() = default ;
    CreateBackupPolicyShrinkRequest& operator=(const CreateBackupPolicyShrinkRequest &) = default ;
    CreateBackupPolicyShrinkRequest& operator=(CreateBackupPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->policyShrink_ == nullptr && this->policyRegionId_ == nullptr && this->policyVersion_ == nullptr && this->selectType_ == nullptr && this->serverType_ == nullptr
        && this->uuidList_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBackupPolicyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyShrink Field Functions 
    bool hasPolicyShrink() const { return this->policyShrink_ != nullptr;};
    void deletePolicyShrink() { this->policyShrink_ = nullptr;};
    inline string getPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(policyShrink_, "") };
    inline CreateBackupPolicyShrinkRequest& setPolicyShrink(string policyShrink) { DARABONBA_PTR_SET_VALUE(policyShrink_, policyShrink) };


    // policyRegionId Field Functions 
    bool hasPolicyRegionId() const { return this->policyRegionId_ != nullptr;};
    void deletePolicyRegionId() { this->policyRegionId_ = nullptr;};
    inline string getPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(policyRegionId_, "") };
    inline CreateBackupPolicyShrinkRequest& setPolicyRegionId(string policyRegionId) { DARABONBA_PTR_SET_VALUE(policyRegionId_, policyRegionId) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline CreateBackupPolicyShrinkRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // selectType Field Functions 
    bool hasSelectType() const { return this->selectType_ != nullptr;};
    void deleteSelectType() { this->selectType_ = nullptr;};
    inline string getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
    inline CreateBackupPolicyShrinkRequest& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline CreateBackupPolicyShrinkRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline CreateBackupPolicyShrinkRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline CreateBackupPolicyShrinkRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The name of the protection policy to create.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // - **IsDefault**: The type of the protection policy to create. Valid values:
    //     - **1**: Recommended policy.
    //     - **0**: Custom policy.
    // - **Include**: The file types to protect. To protect all file types, set this parameter to [].
    // - **Source**: The server folders to protect. To protect all folders, set this parameter to [].
    // - **ExcludeSystemPath**: Specifies whether to exclude specified folders. To exclude folders, set this parameter to **true**. If you do not want to exclude folders, you do not need to configure this parameter.
    // - **Exclude**: The specified protection folder addresses. If you do not want to specify any protection folder addresses, set this parameter to [].
    // - **Schedule**: The execution time and interval of the data backup task. Specify an off-peak hour that is not on the hour. Examples:
    //     - Example 1: I|1583216092|P21D indicates that the data backup starts at 2020-03-03 14:14:52 and the backup policy execution interval is 3 weeks.
    //     - Example 2: I|1583216092|PT24H indicates that the data backup starts at 2020-03-03 14:14:52 and the backup policy execution interval is 24 hours.
    // - **Retention**: The retention period of backup data, in days. The value 7 indicates 1 week, 365 indicates 1 year, and -1 indicates permanent retention.
    // - **SpeedLimiter**: The backup network bandwidth limit. For example, 0:24:30720 indicates that the backup network bandwidth limit from 00:00 to 24:00 is 30 MB/s.
    // - **UseVss**: Specifies whether to enable the Volume Shadow Copy Service (VSS) feature for Windows. Valid values:
    //     - **true**: Enabled.
    //     - **false**: Not enabled.
    // 
    // > The VSS feature applies only to Windows systems. After this feature is enabled, the issue of individual file backup failures caused by process occupation is effectively reduced. We recommend that you enable this feature. After this feature is enabled, file backup for exFAT and FAT32 disk formats is not supported.
    // 
    // This parameter is required.
    shared_ptr<string> policyShrink_ {};
    // The region ID of the non-Alibaba Cloud server.
    // 
    // > Call the [DescribeSupportRegion](~~DescribeSupportRegion~~) operation to query the regions supported by the anti-ransomware feature, and then select the supported region closest to your non-Alibaba Cloud server.
    shared_ptr<string> policyRegionId_ {};
    // The version of the protection policy. Set the value to **2.0.0**.
    // 
    // This parameter is required.
    shared_ptr<string> policyVersion_ {};
    // The method used to select assets. Valid values:
    // - **ALL_MACHINE**: All assets.
    // > To cover all assets of the specified server type, set this parameter to **ALL_MACHINE**. In this case, **UuidList** is invalid. Only one policy that covers all assets can exist for each server type.
    shared_ptr<string> selectType_ {};
    // The server type. Valid values:
    // - **ALIYUN**: Alibaba Cloud server.
    // - **OUT_CLOUD**: Non-Alibaba Cloud server.
    // - **TRIPARTITE**: Simple application server.
    shared_ptr<string> serverType_ {};
    // The UUIDs of the servers to protect.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
