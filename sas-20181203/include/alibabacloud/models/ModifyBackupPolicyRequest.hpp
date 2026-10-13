// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYREQUEST_HPP_
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
  class ModifyBackupPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(SelectType, selectType_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest(ModifyBackupPolicyRequest &&) = default ;
    ModifyBackupPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyRequest() = default ;
    ModifyBackupPolicyRequest& operator=(const ModifyBackupPolicyRequest &) = default ;
    ModifyBackupPolicyRequest& operator=(ModifyBackupPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->policy_ == nullptr && this->policyRegionId_ == nullptr && this->policyVersion_ == nullptr && this->selectType_ == nullptr
        && this->serverType_ == nullptr && this->uuidList_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyBackupPolicyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyBackupPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline     const Darabonba::Json & getPolicy() const { DARABONBA_GET(policy_) };
    Darabonba::Json & getPolicy() { DARABONBA_GET(policy_) };
    inline ModifyBackupPolicyRequest& setPolicy(const Darabonba::Json & policy) { DARABONBA_SET_VALUE(policy_, policy) };
    inline ModifyBackupPolicyRequest& setPolicy(Darabonba::Json && policy) { DARABONBA_SET_RVALUE(policy_, policy) };


    // policyRegionId Field Functions 
    bool hasPolicyRegionId() const { return this->policyRegionId_ != nullptr;};
    void deletePolicyRegionId() { this->policyRegionId_ = nullptr;};
    inline string getPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(policyRegionId_, "") };
    inline ModifyBackupPolicyRequest& setPolicyRegionId(string policyRegionId) { DARABONBA_PTR_SET_VALUE(policyRegionId_, policyRegionId) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline ModifyBackupPolicyRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // selectType Field Functions 
    bool hasSelectType() const { return this->selectType_ != nullptr;};
    void deleteSelectType() { this->selectType_ = nullptr;};
    inline string getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
    inline ModifyBackupPolicyRequest& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline ModifyBackupPolicyRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ModifyBackupPolicyRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ModifyBackupPolicyRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The ID of the anti-ransomware policy that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The name of the anti-ransomware policy that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The content of the policy that you want to modify. The value is a JSON string that contains the following fields:
    // 
    // - **Source**: the server directories to be protected. To protect all directories, set this field to [].
    // - **Include**: the types of files to be protected. Examples: "\\*.jpg" and "\\*.doc".
    // - **Exclude**: the custom directories to be excluded. To exclude the "/home/user" directory, call the DescribeExcludeSystemPath operation to obtain all directories and then add the directories to be excluded. Example: exclude the "/home/user" directory.
    // - **Schedule**: the start time and interval of the data backup task. Specify a time during off-peak hours and avoid exact hours.
    // 
    //     - Example 1: I|1583216092|P21D indicates that the start time is 2020-03-03 14:14:52 and the interval is 3 weeks.
    // 
    //     - Example 2: I|1583216092|PT24H indicates that the start time is 2020-03-03 14:14:52 and the interval is 24 hours.
    // 
    // - **Retention**: the retention period of backup data. Unit: days. A value of 7 indicates 1 week, 365 indicates 1 year, and -1 indicates permanent retention.
    // - **SpeedLimiter**: the bandwidth limit for the backup network. Example: 12:15:15360|6:12:5120 indicates a limit of 15 MB from 12:00 to 15:00 and 5 MB from 06:00 to 12:00.
    // If the cloud server is connected to the internal network, do not limit the backup network bandwidth. To remove the bandwidth limit, set this parameter to an empty string ("").
    // 
    // This parameter is required.
    Darabonba::Json policy_ {};
    // The region where the server to which the policy applies resides.
    // 
    // You can call the [DescribeSupportRegion](~~DescribeSupportRegion~~) operation to query the regions supported by the anti-ransomware feature.
    shared_ptr<string> policyRegionId_ {};
    // The version of the policy. You can call the [DescribeBackupPolicies](~~DescribeBackupPolicies~~) operation to query the version.
    // 
    // - **1.0.0**
    // - **2.0.0**
    shared_ptr<string> policyVersion_ {};
    // The method to cover assets. Valid values:
    // - **ALL_MACHINE**: all assets
    // > To cover all assets of this type, set this parameter to **ALL_MACHINE**. In this case, **UuidList** does not take effect. Only one policy that covers all assets can exist for the same server type.
    shared_ptr<string> selectType_ {};
    // The server type. Valid values:
    // - **ALIYUN**: Alibaba Cloud server
    // - **OUT_CLOUD**: third-party server
    // - **TRIPARTITE**: simple application server
    shared_ptr<string> serverType_ {};
    // The list of UUIDs of the servers protected by the policy.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
