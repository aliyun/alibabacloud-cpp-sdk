// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPOLICYSHRINKREQUEST_HPP_
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
  class ModifyBackupPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policy, policyShrink_);
      DARABONBA_PTR_TO_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(SelectType, selectType_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policy, policyShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    ModifyBackupPolicyShrinkRequest() = default ;
    ModifyBackupPolicyShrinkRequest(const ModifyBackupPolicyShrinkRequest &) = default ;
    ModifyBackupPolicyShrinkRequest(ModifyBackupPolicyShrinkRequest &&) = default ;
    ModifyBackupPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPolicyShrinkRequest() = default ;
    ModifyBackupPolicyShrinkRequest& operator=(const ModifyBackupPolicyShrinkRequest &) = default ;
    ModifyBackupPolicyShrinkRequest& operator=(ModifyBackupPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->policyShrink_ == nullptr && this->policyRegionId_ == nullptr && this->policyVersion_ == nullptr && this->selectType_ == nullptr
        && this->serverType_ == nullptr && this->uuidList_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyBackupPolicyShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyBackupPolicyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyShrink Field Functions 
    bool hasPolicyShrink() const { return this->policyShrink_ != nullptr;};
    void deletePolicyShrink() { this->policyShrink_ = nullptr;};
    inline string getPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(policyShrink_, "") };
    inline ModifyBackupPolicyShrinkRequest& setPolicyShrink(string policyShrink) { DARABONBA_PTR_SET_VALUE(policyShrink_, policyShrink) };


    // policyRegionId Field Functions 
    bool hasPolicyRegionId() const { return this->policyRegionId_ != nullptr;};
    void deletePolicyRegionId() { this->policyRegionId_ = nullptr;};
    inline string getPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(policyRegionId_, "") };
    inline ModifyBackupPolicyShrinkRequest& setPolicyRegionId(string policyRegionId) { DARABONBA_PTR_SET_VALUE(policyRegionId_, policyRegionId) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline ModifyBackupPolicyShrinkRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // selectType Field Functions 
    bool hasSelectType() const { return this->selectType_ != nullptr;};
    void deleteSelectType() { this->selectType_ = nullptr;};
    inline string getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
    inline ModifyBackupPolicyShrinkRequest& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline ModifyBackupPolicyShrinkRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ModifyBackupPolicyShrinkRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ModifyBackupPolicyShrinkRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The ID of the anti-ransomware policy to modify.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The name of the anti-ransomware policy to modify.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The content of the policy to modify. The value is a JSON format character string that contains the following fields:
    // 
    // - **Source**: The server folder to protect. To protect all folders, set this field to [].
    // - **Include**: The file types to protect. Examples: "\\*.jpg" and "\\*.doc".
    // - **Exclude**: The custom folders to exclude. For example, "/home/user" excludes the /home/user folder. Invoke the DescribeExcludeSystemPath operation to obtain all folders, and then add the folders that you want to exclude.
    // - **Schedule**: The start time and interval of the data backup node. Specify a non-hourly time during off-peak hours.
    // 
    //     - Example 1: I|1583216092|P21D indicates that the execute start time is 2020-03-03 14:14:52 and the interval is 3 weeks.
    // 
    //     - Example 2: I|1583216092|PT24H indicates that the execute start time is 2020-03-03 14:14:52 and the interval is 24 hours.
    // 
    // - **Retention**: The retention period of backup data. Unit: days. 7 indicates 1 week, 365 indicates 1 year, and -1 indicates permanent retention.
    // - **SpeedLimiter**: The network bandwidth throttling for backup. For example, 12:15:15360|6:12:5120 indicates 15 MB from 12:00 to 15:00 and 5 MB from 6:00 to 12:00.
    // For cloud-based servers connected to the internal network, do not limit the backup network bandwidth. To remove the network bandwidth throttling, set this parameter to an empty character string ("").
    // 
    // This parameter is required.
    shared_ptr<string> policyShrink_ {};
    // The region of the server for which you want to modify the policy.
    // 
    // You can invoke the [DescribeSupportRegion](~~DescribeSupportRegion~~) operation to query the regions supported by the anti-ransomware feature.
    shared_ptr<string> policyRegionId_ {};
    // The version of the policy. You can invoke the [DescribeBackupPolicies](~~DescribeBackupPolicies~~) operation to query the version.
    // 
    // - **1.0.0**
    // - **2.0.0**
    shared_ptr<string> policyVersion_ {};
    // The method used to select assets. Valid values:
    // - **ALL_MACHINE**: all assets
    // >To cover all assets of the specified type, set this parameter to **ALL_MACHINE**. In this case, **UuidList** is invalid. Only one policy that covers all assets can exist for each server type.
    shared_ptr<string> selectType_ {};
    // The server type. Valid values:
    // - **ALIYUN**: Alibaba Cloud server
    // - **OUT_CLOUD**: non-Alibaba Cloud server
    // - **TRIPARTITE**: simple application server
    shared_ptr<string> serverType_ {};
    // The list of UUIDs of the servers protected by the policy.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
