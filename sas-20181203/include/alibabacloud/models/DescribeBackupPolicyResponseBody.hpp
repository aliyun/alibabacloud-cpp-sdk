// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
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
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPolicyDetail, backupPolicyDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPolicyDetail, backupPolicyDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody(DescribeBackupPolicyResponseBody &&) = default ;
    DescribeBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody& operator=(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody& operator=(DescribeBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupPolicyDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupPolicyDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
      };
      friend void from_json(const Darabonba::Json& j, BackupPolicyDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
      };
      BackupPolicyDetail() = default ;
      BackupPolicyDetail(const BackupPolicyDetail &) = default ;
      BackupPolicyDetail(BackupPolicyDetail &&) = default ;
      BackupPolicyDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupPolicyDetail() = default ;
      BackupPolicyDetail& operator=(const BackupPolicyDetail &) = default ;
      BackupPolicyDetail& operator=(BackupPolicyDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientStatus_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->policy_ == nullptr && this->policyVersion_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->uuidList_ == nullptr; };
      // clientStatus Field Functions 
      bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
      void deleteClientStatus() { this->clientStatus_ = nullptr;};
      inline string getClientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
      inline BackupPolicyDetail& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline BackupPolicyDetail& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BackupPolicyDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline BackupPolicyDetail& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // policyVersion Field Functions 
      bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
      void deletePolicyVersion() { this->policyVersion_ = nullptr;};
      inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
      inline BackupPolicyDetail& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BackupPolicyDetail& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BackupPolicyDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uuidList Field Functions 
      bool hasUuidList() const { return this->uuidList_ != nullptr;};
      void deleteUuidList() { this->uuidList_ = nullptr;};
      inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
      inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
      inline BackupPolicyDetail& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
      inline BackupPolicyDetail& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


    protected:
      // The status of the anti-ransomware client. Valid values:
      // 
      // - **running**: Normal.
      // 
      // - **exception**: Abnormal.
      shared_ptr<string> clientStatus_ {};
      // The ID of the anti-ransomware backup policy.
      shared_ptr<int64_t> id_ {};
      // The policy name.
      shared_ptr<string> name_ {};
      // The content of the anti-ransomware protection policy. This parameter is in JSON format. The following fields are included:
      // 
      // - **IsDefault**: The type of the protection policy. Valid values:
      //     - **1**: recommended policy
      //     - **0**: custom policy
      // - **Include**: The file types to protect. If all file types are protected, this parameter is set to [].
      // - **Source**: The server folders to protect. If all folders are protected, this parameter is set to [].
      // - **ExcludeSystemPath**: Specifies whether to exclude specified folders. Set this parameter to **true** to exclude folders. If no folders need to be excluded, you do not need to configure this parameter.
      // - **Exclude**: The specified protection folder addresses. If no specific protection folder addresses are configured, this parameter is set to [].
      // - **Schedule**: Settings for the execution time and interval of the data backup task. Specify an off-peak hour that is not on the hour. Examples:
      //     - Example 1: I|1583216092|P21D indicates that the data backup starts at 2020-03-03 14:14:52 and the backup policy executes at an interval of 3 weeks.
      //     - Example 2: I|1583216092|PT24H indicates that the data backup starts at 2020-03-03 14:14:52 and the backup policy executes at an interval of 24 hours.
      // - **Retention**: Settings for the retention period of backup data, in days. 7 indicates 1 week, 365 indicates 1 year, and -1 indicates permanent retention.
      // - **SpeedLimiter**: Settings for the backup network bandwidth throttling. For example, 0:24:30720 indicates that the backup network bandwidth throttling is 30 MB/s from 00:00 to 24:00.
      // - **UseVss**: Specifies whether to enable the Volume Shadow Copy Service (VSS) feature for Windows. Valid values:
      //     - **true**: enabled
      //     - **false**: not enabled
      // 
      // > The VSS feature is available only for Windows systems. After this feature is enabled, it effectively reduces the issue of individual file backup failures caused by process occupation. Enable this feature. After this feature is enabled, file backup for exFAT and FAT32 disk formats is not supported.
      shared_ptr<string> policy_ {};
      // The version of the protection policy. Valid values:
      // 
      // - **1.0.0**
      // - **2.0.0**
      shared_ptr<string> policyVersion_ {};
      // The region ID of the backup service.
      shared_ptr<string> regionId_ {};
      // The status of the anti-ransomware protection policy. Valid values:
      // 
      // - **enabled**: The policy is manually enabled.
      // 
      // - **disabled**: The policy is manually disabled. After the policy is disabled, running backup tasks are stopped.
      // 
      // - **closed**: The policy is disabled by the system because the anti-ransomware capacity is exceeded.
      shared_ptr<string> status_ {};
      // The UUIDs of the servers for which the backup policy is enabled.
      shared_ptr<vector<string>> uuidList_ {};
    };

    virtual bool empty() const override { return this->backupPolicyDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // backupPolicyDetail Field Functions 
    bool hasBackupPolicyDetail() const { return this->backupPolicyDetail_ != nullptr;};
    void deleteBackupPolicyDetail() { this->backupPolicyDetail_ = nullptr;};
    inline const DescribeBackupPolicyResponseBody::BackupPolicyDetail & getBackupPolicyDetail() const { DARABONBA_PTR_GET_CONST(backupPolicyDetail_, DescribeBackupPolicyResponseBody::BackupPolicyDetail) };
    inline DescribeBackupPolicyResponseBody::BackupPolicyDetail getBackupPolicyDetail() { DARABONBA_PTR_GET(backupPolicyDetail_, DescribeBackupPolicyResponseBody::BackupPolicyDetail) };
    inline DescribeBackupPolicyResponseBody& setBackupPolicyDetail(const DescribeBackupPolicyResponseBody::BackupPolicyDetail & backupPolicyDetail) { DARABONBA_PTR_SET_VALUE(backupPolicyDetail_, backupPolicyDetail) };
    inline DescribeBackupPolicyResponseBody& setBackupPolicyDetail(DescribeBackupPolicyResponseBody::BackupPolicyDetail && backupPolicyDetail) { DARABONBA_PTR_SET_RVALUE(backupPolicyDetail_, backupPolicyDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the policy.
    shared_ptr<DescribeBackupPolicyResponseBody::BackupPolicyDetail> backupPolicyDetail_ {};
    // The request ID. It is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
