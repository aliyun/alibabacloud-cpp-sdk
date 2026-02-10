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
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policy, policyShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
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
        && this->name_ == nullptr && this->policyShrink_ == nullptr && this->policyRegionId_ == nullptr && this->policyVersion_ == nullptr && this->uuidList_ == nullptr; };
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


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline ModifyBackupPolicyShrinkRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline ModifyBackupPolicyShrinkRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The ID of the anti-ransomware policy that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The name of the anti-ransomware policy that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The configurations of the anti-ransomware policy that you want to modify. The value is a JSON string that contains the following fields:
    // 
    // *   **Source**: the directory that you want to protect. If you want to protect all directories, set this field to brackets [].
    // 
    // *   **Include**: the format of the file that you want to protect. Examples: \\*.jpg and \\*.doc.
    // 
    // *   **Exclude**: the directory that you want to exclude from the anti-ransomware policy. You can call the DescribeExcludeSystemPath operation to query all directories and then specify the directory that you want to exclude. Example: /home/user.
    // 
    // *   **Schedule**: the start time and interval of a data backup task. We recommend that you specify a start time that begins during off-peak hours but does not start on the hour.
    // 
    //     *   If you set this field to I|1583216092|P21D, the data backup task starts from 2020-03-03 14:14:52, and the task is executed at an interval of three weeks.
    //     *   If you set this field to I|1583216092|PT24H, the data backup task starts from 2020-03-03 14:14:52, and the task is executed at an interval of 24 hours.
    // 
    // *   **Retention**: the period during which backup data is retained. Unit: day. If you set this field to 7, backup data is retained for a week. If you set this field to 365, backup data is retained for a year. If you set this field to -1, backup data is permanently retained.
    // 
    // *   **SpeedLimiter**: the limit on the network bandwidth for data backup tasks. If you set this field to 12:15:15360|6:12:5120, the maximum bandwidth for a data backup task is 15 Mbit/s from 12:00 to 15:00 and 5 Mbit/s from 06:00 to 12:00.
    // 
    // If you back up data on an Elastic Compute Service (ECS) instance that is connected over an internal network, we recommend that you leave this field empty. If this field is left empty, the bandwidth for data backup tasks is unlimited.
    // 
    // This parameter is required.
    shared_ptr<string> policyShrink_ {};
    // The region ID of the server to which the anti-ransomware policy is applied.
    // 
    // You can call the [DescribeSupportRegion](~~DescribeSupportRegion~~) operation to query the regions in which the anti-ransomware feature is supported.
    shared_ptr<string> policyRegionId_ {};
    // The version of the anti-ransomware policy. You can call the [DescribeBackupPolicies](~~DescribeBackupPolicies~~) operation to query the versions of anti-ransomware policies.
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    shared_ptr<string> policyVersion_ {};
    // The UUIDs of the servers to which the anti-ransomware policy is applied.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
