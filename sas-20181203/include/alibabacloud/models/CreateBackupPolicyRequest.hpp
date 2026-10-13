// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYREQUEST_HPP_
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
  class CreateBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(SelectType, selectType_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    CreateBackupPolicyRequest() = default ;
    CreateBackupPolicyRequest(const CreateBackupPolicyRequest &) = default ;
    CreateBackupPolicyRequest(CreateBackupPolicyRequest &&) = default ;
    CreateBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupPolicyRequest() = default ;
    CreateBackupPolicyRequest& operator=(const CreateBackupPolicyRequest &) = default ;
    CreateBackupPolicyRequest& operator=(CreateBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->policy_ == nullptr && this->policyRegionId_ == nullptr && this->policyVersion_ == nullptr && this->selectType_ == nullptr && this->serverType_ == nullptr
        && this->uuidList_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBackupPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline     const Darabonba::Json & getPolicy() const { DARABONBA_GET(policy_) };
    Darabonba::Json & getPolicy() { DARABONBA_GET(policy_) };
    inline CreateBackupPolicyRequest& setPolicy(const Darabonba::Json & policy) { DARABONBA_SET_VALUE(policy_, policy) };
    inline CreateBackupPolicyRequest& setPolicy(Darabonba::Json && policy) { DARABONBA_SET_RVALUE(policy_, policy) };


    // policyRegionId Field Functions 
    bool hasPolicyRegionId() const { return this->policyRegionId_ != nullptr;};
    void deletePolicyRegionId() { this->policyRegionId_ = nullptr;};
    inline string getPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(policyRegionId_, "") };
    inline CreateBackupPolicyRequest& setPolicyRegionId(string policyRegionId) { DARABONBA_PTR_SET_VALUE(policyRegionId_, policyRegionId) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline CreateBackupPolicyRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // selectType Field Functions 
    bool hasSelectType() const { return this->selectType_ != nullptr;};
    void deleteSelectType() { this->selectType_ = nullptr;};
    inline string getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
    inline CreateBackupPolicyRequest& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline CreateBackupPolicyRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline CreateBackupPolicyRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline CreateBackupPolicyRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // Sets the name of the anti-ransomware policy to create.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // - **IsDefault**: The type of the anti-ransomware policy to create. Valid values:
    //     - **1**: recommended policy
    //     - **0**: custom policy
    // - **Include**: The file types to protect. To protect all file types, set this parameter to [].
    // - **Source**: The server directories to protect. To protect all directories, set this parameter to [].
    // - **ExcludeSystemPath**: Specifies whether to exclude the specified directories. To exclude the directories, set this parameter to **true**. If you do not want to exclude the directories, you do not need to set this parameter.
    // - **Exclude**: Sets the specified protection directory addresses. If you do not want to specify protection directory addresses, set this parameter to [].
    // - **Schedule**: Sets the execution time and execution interval of the data backup task. We recommend that you specify a non-integer hour during off-peak hours. Examples:
    //     - Example 1: I|1583216092|P21D indicates that the data backup starts at 14:14:52 on March 3, 2020, and the backup policy execution interval is 3 weeks.
    //     - Example 2: I|1583216092|PT24H indicates that the data backup starts at 14:14:52 on March 3, 2020, and the backup policy execution interval is 24 hours.
    // - **Retention**: The retention period of the backup data. Unit: days. A value of 7 indicates 1 week, 365 indicates 1 year, and -1 indicates permanent retention.
    // - **SpeedLimiter**: Sets the backup network bandwidth limit. Example: 0:24:30720 indicates that the network bandwidth limit for the backup network is 30 MByte/s from 00:00 to 24:00.
    // - **UseVss**: Specifies whether to enable the Volume Shadow Copy Service (VSS) feature for Windows. Valid values:
    //     - **true**: enabled
    //     - **false**: disabled
    // 
    // > The VSS feature is available only for Windows systems. Enabling this feature effectively reduces the issue of individual file backup failures caused by process occupation. We recommend that you enable this feature. After this feature is enabled, file backup for exFAT and FAT32 disk formats is not supported.
    // 
    // This parameter is required.
    Darabonba::Json policy_ {};
    // The region ID of the server that is not deployed on Alibaba Cloud.
    // 
    // > You can call the [DescribeSupportRegion](~~DescribeSupportRegion~~) operation to query the regions supported by the anti-ransomware feature, and then select a supported region that is closest to the region of your server that is not deployed on Alibaba Cloud.
    // 
    // This parameter is required when the ServerType parameter is set to OUT_CLOUD.
    shared_ptr<string> policyRegionId_ {};
    // The version of the anti-ransomware policy. Fixed value: **2.0.0**.
    // 
    // This parameter is required.
    shared_ptr<string> policyVersion_ {};
    // The method to cover assets. Valid values:
    // - **ALL_MACHINE**: all assets
    // > To cover all assets of the specified type, set this parameter to **ALL_MACHINE**. In this case, the **UuidList** parameter is invalid. Only one policy that covers all assets can be created for each server type.
    shared_ptr<string> selectType_ {};
    // The server type. Valid values:
    // - **ALIYUN**: Alibaba Cloud server
    // - **OUT_CLOUD**: server that is not deployed on Alibaba Cloud
    // - **TRIPARTITE**: simple application server
    shared_ptr<string> serverType_ {};
    // The UUIDs of the servers to protect.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
