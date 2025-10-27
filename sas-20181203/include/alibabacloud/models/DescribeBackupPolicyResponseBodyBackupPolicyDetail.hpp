// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODYBACKUPPOLICYDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODYBACKUPPOLICYDETAIL_HPP_
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
  class DescribeBackupPolicyResponseBodyBackupPolicyDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBodyBackupPolicyDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBodyBackupPolicyDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    DescribeBackupPolicyResponseBodyBackupPolicyDetail() = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDetail(const DescribeBackupPolicyResponseBodyBackupPolicyDetail &) = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDetail(DescribeBackupPolicyResponseBodyBackupPolicyDetail &&) = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBodyBackupPolicyDetail() = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDetail& operator=(const DescribeBackupPolicyResponseBodyBackupPolicyDetail &) = default ;
    DescribeBackupPolicyResponseBodyBackupPolicyDetail& operator=(DescribeBackupPolicyResponseBodyBackupPolicyDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientStatus_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->policy_ == nullptr && return this->policyVersion_ == nullptr && return this->regionId_ == nullptr
        && return this->status_ == nullptr && return this->uuidList_ == nullptr; };
    // clientStatus Field Functions 
    bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
    void deleteClientStatus() { this->clientStatus_ = nullptr;};
    inline string clientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline string policyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The status of the anti-ransomware agent. Valid values:
    // 
    // *   **running**: normal
    // *   **exception**: abnormal
    std::shared_ptr<string> clientStatus_ = nullptr;
    // The ID of the anti-ransomware policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the anti-ransomware policy.
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
    std::shared_ptr<string> policy_ = nullptr;
    // The version of the anti-ransomware policy.
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    std::shared_ptr<string> policyVersion_ = nullptr;
    // The ID of the region in which backup data is stored.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the anti-ransomware policy. Valid values:
    // 
    // *   **enabled**: The anti-ransomware policy is manually enabled.
    // *   **disabled**: The anti-ransomware policy is manually disabled. After an anti-ransomware policy is disabled, the data backup task that is running based on the policy stops.
    // *   **closed**: The anti-ransomware policy automatically stops because the anti-ransomware capacity is insufficient.
    std::shared_ptr<string> status_ = nullptr;
    // An array consisting of the UUIDs of the servers to which the anti-ransomware policy is applied.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
