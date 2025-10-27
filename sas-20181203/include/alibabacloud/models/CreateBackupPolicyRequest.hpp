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
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyRegionId, policyRegionId_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
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
        && return this->policy_ == nullptr && return this->policyRegionId_ == nullptr && return this->policyVersion_ == nullptr && return this->uuidList_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBackupPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline     const Darabonba::Json & policy() const { DARABONBA_GET(policy_) };
    Darabonba::Json & policy() { DARABONBA_GET(policy_) };
    inline CreateBackupPolicyRequest& setPolicy(const Darabonba::Json & policy) { DARABONBA_SET_VALUE(policy_, policy) };
    inline CreateBackupPolicyRequest& setPolicy(Darabonba::Json & policy) { DARABONBA_SET_RVALUE(policy_, policy) };


    // policyRegionId Field Functions 
    bool hasPolicyRegionId() const { return this->policyRegionId_ != nullptr;};
    void deletePolicyRegionId() { this->policyRegionId_ = nullptr;};
    inline string policyRegionId() const { DARABONBA_PTR_GET_DEFAULT(policyRegionId_, "") };
    inline CreateBackupPolicyRequest& setPolicyRegionId(string policyRegionId) { DARABONBA_PTR_SET_VALUE(policyRegionId_, policyRegionId) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string policyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline CreateBackupPolicyRequest& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline CreateBackupPolicyRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline CreateBackupPolicyRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The name of the anti-ransomware policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // *   **IsDefault**: the type of the anti-ransomware policy. Valid values:
    // 
    //     *   **1**: recommended policy
    //     *   **0**: custom policy
    // 
    // *   **Include**: the format of the files that you want to protect. If you want to protect the files in all formats, set this field to [].
    // 
    // *   **Source**: the directory that you want to protect. If you want to protect all directories, set this field to [].
    // 
    // *   **ExcludeSystemPath**: specifies whether to exclude a specific directory from the anti-ransomware policy. If you want to exclude a directory, set this field to **true**. If you do not want to exclude a directory, leave this field empty.
    // 
    // *   **Exclude**: the directory that you want to exclude from the anti-ransomware policy. If you do not want to exclude a directory, set this field to [].
    // 
    // *   **Schedule**: the start time and interval of a data backup task. We recommend that you specify a start time that begins during off-peak hours but does not start on the hour. Examples:
    // 
    //     *   If you set this field to I|1583216092|P21D, the data backup task starts from 2020-03-03 14:14:52, and the task is run at an interval of three weeks.
    //     *   If you set this field to I|1583216092|PT24H, the data backup task starts from 2020-03-03 14:14:52, and the task is run at an interval of 24 hours.
    // 
    // *   **Retention**: the period during which backup data is retained. Unit: days. If you set this field to 7, backup data is retained for a week. If you set this field to 365, backup data is retained for a year. If you set this field to -1, backup data is permanently retained.
    // 
    // *   **SpeedLimiter**: the limit on the network bandwidth for data backup tasks. If you set this field to 0:24:30720, the maximum bandwidth for a data backup task is 30 MB/s from 00:00 to 24:00.
    // 
    // *   **UseVss**: specifies whether to enable the VSS feature. The feature is available only for Windows servers. Valid values:
    // 
    //     *   **true**: yes
    //     *   **false**: no
    // 
    // >  The VSS feature is available only if you create the anti-ransomware policy for Windows servers. After you enable the feature, the number of backup failures due to running processes is significantly reduced. We recommend that you enable the VSS feature. After you enable the feature, the data of disks that are in the exFAT and FAT32 formats cannot be backed up.
    // 
    // This parameter is required.
    Darabonba::Json policy_ = nullptr;
    // The region ID of the server that is not deployed on Alibaba Cloud.
    // 
    // >  We recommend that you specify the ID of the supported region that is the nearest to the location of the server. You can call the [DescribeSupportRegion](~~DescribeSupportRegion~~) operation to query the supported regions of the anti-ransomware feature.
    std::shared_ptr<string> policyRegionId_ = nullptr;
    // The version of the anti-ransomware policy. Set the value to **2.0.0**.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyVersion_ = nullptr;
    // The UUIDs of the servers that you want to protect.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
