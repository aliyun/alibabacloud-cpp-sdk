// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICIESRESPONSEBODY_HPP_
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
  class DescribeBackupPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupPoliciesResponseBody() = default ;
    DescribeBackupPoliciesResponseBody(const DescribeBackupPoliciesResponseBody &) = default ;
    DescribeBackupPoliciesResponseBody(DescribeBackupPoliciesResponseBody &&) = default ;
    DescribeBackupPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPoliciesResponseBody() = default ;
    DescribeBackupPoliciesResponseBody& operator=(const DescribeBackupPoliciesResponseBody &) = default ;
    DescribeBackupPoliciesResponseBody& operator=(DescribeBackupPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(ClientErrorCount, clientErrorCount_);
        DARABONBA_PTR_TO_JSON(ClientErrorUuidList, clientErrorUuidList_);
        DARABONBA_PTR_TO_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_TO_JSON(HealthClientCount, healthClientCount_);
        DARABONBA_PTR_TO_JSON(HealthClientUuidList, healthClientUuidList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastStatusSyncTime, lastStatusSyncTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(PolicyRegionId, policyRegionId_);
        DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
        DARABONBA_PTR_TO_JSON(PreStatus, preStatus_);
        DARABONBA_PTR_TO_JSON(RemarkedUuidList, remarkedUuidList_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
        DARABONBA_PTR_TO_JSON(ServiceErrorCount, serviceErrorCount_);
        DARABONBA_PTR_TO_JSON(ServiceErrorUuidList, serviceErrorUuidList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientErrorCount, clientErrorCount_);
        DARABONBA_PTR_FROM_JSON(ClientErrorUuidList, clientErrorUuidList_);
        DARABONBA_PTR_FROM_JSON(ClientStatus, clientStatus_);
        DARABONBA_PTR_FROM_JSON(HealthClientCount, healthClientCount_);
        DARABONBA_PTR_FROM_JSON(HealthClientUuidList, healthClientUuidList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastStatusSyncTime, lastStatusSyncTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(PolicyRegionId, policyRegionId_);
        DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
        DARABONBA_PTR_FROM_JSON(PreStatus, preStatus_);
        DARABONBA_PTR_FROM_JSON(RemarkedUuidList, remarkedUuidList_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
        DARABONBA_PTR_FROM_JSON(ServiceErrorCount, serviceErrorCount_);
        DARABONBA_PTR_FROM_JSON(ServiceErrorUuidList, serviceErrorUuidList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
        DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientErrorCount_ == nullptr
        && this->clientErrorUuidList_ == nullptr && this->clientStatus_ == nullptr && this->healthClientCount_ == nullptr && this->healthClientUuidList_ == nullptr && this->id_ == nullptr
        && this->lastStatusSyncTime_ == nullptr && this->name_ == nullptr && this->policy_ == nullptr && this->policyRegionId_ == nullptr && this->policyVersion_ == nullptr
        && this->preStatus_ == nullptr && this->remarkedUuidList_ == nullptr && this->serverType_ == nullptr && this->serviceErrorCount_ == nullptr && this->serviceErrorUuidList_ == nullptr
        && this->status_ == nullptr && this->upgradeStatus_ == nullptr && this->uuidList_ == nullptr; };
      // clientErrorCount Field Functions 
      bool hasClientErrorCount() const { return this->clientErrorCount_ != nullptr;};
      void deleteClientErrorCount() { this->clientErrorCount_ = nullptr;};
      inline int32_t getClientErrorCount() const { DARABONBA_PTR_GET_DEFAULT(clientErrorCount_, 0) };
      inline Policies& setClientErrorCount(int32_t clientErrorCount) { DARABONBA_PTR_SET_VALUE(clientErrorCount_, clientErrorCount) };


      // clientErrorUuidList Field Functions 
      bool hasClientErrorUuidList() const { return this->clientErrorUuidList_ != nullptr;};
      void deleteClientErrorUuidList() { this->clientErrorUuidList_ = nullptr;};
      inline const vector<string> & getClientErrorUuidList() const { DARABONBA_PTR_GET_CONST(clientErrorUuidList_, vector<string>) };
      inline vector<string> getClientErrorUuidList() { DARABONBA_PTR_GET(clientErrorUuidList_, vector<string>) };
      inline Policies& setClientErrorUuidList(const vector<string> & clientErrorUuidList) { DARABONBA_PTR_SET_VALUE(clientErrorUuidList_, clientErrorUuidList) };
      inline Policies& setClientErrorUuidList(vector<string> && clientErrorUuidList) { DARABONBA_PTR_SET_RVALUE(clientErrorUuidList_, clientErrorUuidList) };


      // clientStatus Field Functions 
      bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
      void deleteClientStatus() { this->clientStatus_ = nullptr;};
      inline string getClientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
      inline Policies& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


      // healthClientCount Field Functions 
      bool hasHealthClientCount() const { return this->healthClientCount_ != nullptr;};
      void deleteHealthClientCount() { this->healthClientCount_ = nullptr;};
      inline int32_t getHealthClientCount() const { DARABONBA_PTR_GET_DEFAULT(healthClientCount_, 0) };
      inline Policies& setHealthClientCount(int32_t healthClientCount) { DARABONBA_PTR_SET_VALUE(healthClientCount_, healthClientCount) };


      // healthClientUuidList Field Functions 
      bool hasHealthClientUuidList() const { return this->healthClientUuidList_ != nullptr;};
      void deleteHealthClientUuidList() { this->healthClientUuidList_ = nullptr;};
      inline const vector<string> & getHealthClientUuidList() const { DARABONBA_PTR_GET_CONST(healthClientUuidList_, vector<string>) };
      inline vector<string> getHealthClientUuidList() { DARABONBA_PTR_GET(healthClientUuidList_, vector<string>) };
      inline Policies& setHealthClientUuidList(const vector<string> & healthClientUuidList) { DARABONBA_PTR_SET_VALUE(healthClientUuidList_, healthClientUuidList) };
      inline Policies& setHealthClientUuidList(vector<string> && healthClientUuidList) { DARABONBA_PTR_SET_RVALUE(healthClientUuidList_, healthClientUuidList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Policies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastStatusSyncTime Field Functions 
      bool hasLastStatusSyncTime() const { return this->lastStatusSyncTime_ != nullptr;};
      void deleteLastStatusSyncTime() { this->lastStatusSyncTime_ = nullptr;};
      inline int64_t getLastStatusSyncTime() const { DARABONBA_PTR_GET_DEFAULT(lastStatusSyncTime_, 0L) };
      inline Policies& setLastStatusSyncTime(int64_t lastStatusSyncTime) { DARABONBA_PTR_SET_VALUE(lastStatusSyncTime_, lastStatusSyncTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline Policies& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      // policyRegionId Field Functions 
      bool hasPolicyRegionId() const { return this->policyRegionId_ != nullptr;};
      void deletePolicyRegionId() { this->policyRegionId_ = nullptr;};
      inline string getPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(policyRegionId_, "") };
      inline Policies& setPolicyRegionId(string policyRegionId) { DARABONBA_PTR_SET_VALUE(policyRegionId_, policyRegionId) };


      // policyVersion Field Functions 
      bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
      void deletePolicyVersion() { this->policyVersion_ = nullptr;};
      inline string getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, "") };
      inline Policies& setPolicyVersion(string policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


      // preStatus Field Functions 
      bool hasPreStatus() const { return this->preStatus_ != nullptr;};
      void deletePreStatus() { this->preStatus_ = nullptr;};
      inline string getPreStatus() const { DARABONBA_PTR_GET_DEFAULT(preStatus_, "") };
      inline Policies& setPreStatus(string preStatus) { DARABONBA_PTR_SET_VALUE(preStatus_, preStatus) };


      // remarkedUuidList Field Functions 
      bool hasRemarkedUuidList() const { return this->remarkedUuidList_ != nullptr;};
      void deleteRemarkedUuidList() { this->remarkedUuidList_ = nullptr;};
      inline const vector<string> & getRemarkedUuidList() const { DARABONBA_PTR_GET_CONST(remarkedUuidList_, vector<string>) };
      inline vector<string> getRemarkedUuidList() { DARABONBA_PTR_GET(remarkedUuidList_, vector<string>) };
      inline Policies& setRemarkedUuidList(const vector<string> & remarkedUuidList) { DARABONBA_PTR_SET_VALUE(remarkedUuidList_, remarkedUuidList) };
      inline Policies& setRemarkedUuidList(vector<string> && remarkedUuidList) { DARABONBA_PTR_SET_RVALUE(remarkedUuidList_, remarkedUuidList) };


      // serverType Field Functions 
      bool hasServerType() const { return this->serverType_ != nullptr;};
      void deleteServerType() { this->serverType_ = nullptr;};
      inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
      inline Policies& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


      // serviceErrorCount Field Functions 
      bool hasServiceErrorCount() const { return this->serviceErrorCount_ != nullptr;};
      void deleteServiceErrorCount() { this->serviceErrorCount_ = nullptr;};
      inline int32_t getServiceErrorCount() const { DARABONBA_PTR_GET_DEFAULT(serviceErrorCount_, 0) };
      inline Policies& setServiceErrorCount(int32_t serviceErrorCount) { DARABONBA_PTR_SET_VALUE(serviceErrorCount_, serviceErrorCount) };


      // serviceErrorUuidList Field Functions 
      bool hasServiceErrorUuidList() const { return this->serviceErrorUuidList_ != nullptr;};
      void deleteServiceErrorUuidList() { this->serviceErrorUuidList_ = nullptr;};
      inline const vector<string> & getServiceErrorUuidList() const { DARABONBA_PTR_GET_CONST(serviceErrorUuidList_, vector<string>) };
      inline vector<string> getServiceErrorUuidList() { DARABONBA_PTR_GET(serviceErrorUuidList_, vector<string>) };
      inline Policies& setServiceErrorUuidList(const vector<string> & serviceErrorUuidList) { DARABONBA_PTR_SET_VALUE(serviceErrorUuidList_, serviceErrorUuidList) };
      inline Policies& setServiceErrorUuidList(vector<string> && serviceErrorUuidList) { DARABONBA_PTR_SET_RVALUE(serviceErrorUuidList_, serviceErrorUuidList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Policies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // upgradeStatus Field Functions 
      bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
      void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
      inline string getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, "") };
      inline Policies& setUpgradeStatus(string upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


      // uuidList Field Functions 
      bool hasUuidList() const { return this->uuidList_ != nullptr;};
      void deleteUuidList() { this->uuidList_ = nullptr;};
      inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
      inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
      inline Policies& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
      inline Policies& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


    protected:
      // The number of the servers on which the anti-ransomware agent is in an abnormal state.
      shared_ptr<int32_t> clientErrorCount_ {};
      // The UUIDs of the servers on which the anti-ransomware agent is in an **abnormal** state.
      shared_ptr<vector<string>> clientErrorUuidList_ {};
      // The status of the anti-ransomware agent. Valid values:
      // 
      // *   **running**: normal
      // *   **exception**: abnormal
      shared_ptr<string> clientStatus_ {};
      // The number of the servers on which the anti-ransomware agent is in a normal state.
      shared_ptr<int32_t> healthClientCount_ {};
      // The UUIDs of the servers on which the anti-ransomware agent is in a **normal** state.
      shared_ptr<vector<string>> healthClientUuidList_ {};
      // The ID of the anti-ransomware policy.
      shared_ptr<int64_t> id_ {};
      // The time when the anti-ransomware policy was last updated. Unit: milliseconds.
      shared_ptr<int64_t> lastStatusSyncTime_ {};
      // The name of the anti-ransomware policy.
      shared_ptr<string> name_ {};
      // The configurations of the anti-ransomware policy. The value of this parameter is in the JSON format and contains the following fields:
      // 
      // *   **IsDefault**: the type of the anti-ransomware policy. Valid values:
      // 
      //     *   **1**: recommended policy
      //     *   **0**: custom policy
      // 
      // *   **Include**: the format of the files that are protected. If the value of this field is [], all formats of files are protected.
      // 
      // *   **Source**: the directory that is protected. If the value of this field is [], all directories are protected.
      // 
      // *   **ExcludeSystemPath**: indicates whether a specified directory is excluded from the anti-ransomware policy. If the value of this field is **true**, a directory is excluded. If this field is left empty, no directories are excluded.
      // 
      // *   **Exclude**: the directory that is excluded from the anti-ransomware policy. If the value of this field is [], no directories are excluded.
      // 
      // *   **Schedule**: the start time and interval of a data backup task. We recommend that you specify a start time that begins during off-peak hours but does not start on the hour. Examples:
      // 
      //     *   If the value of this field is I|1583216092|P21D, the data backup task starts from 2020-03-03 14:14:52, and the task is run at an interval of three weeks.
      //     *   If the value of this field is I|1583216092|PT24H, the data backup task starts from 2020-03-03 14:14:52, and the task is run at an interval of 24 hours.
      // 
      // *   **Retention**: the period during which backup data is retained. Unit: days. If the value of this field is 7, backup data is retained for a week. If the value of this field is 365, backup data is retained for a year. If the value of this field is -1, backup data is permanently retained.
      // 
      // *   **SpeedLimiter**: the limit on the network bandwidth for data backup tasks. If the value of this field is 0:24:30720, the maximum bandwidth for a data backup task is 30 MB/s from 00:00 to 24:00.
      // 
      // *   **UseVss**: indicates whether the VSS feature is enabled. The feature is available only for Windows servers. Valid values:
      // 
      //     *   **true**
      //     *   **false**
      // 
      // >  The VSS feature is available only if you create the anti-ransomware policy for Windows servers. After you enable the feature, the number of backup failures due to running processes is significantly reduced. We recommend that you enable the VSS feature. After you enable the feature, the data of disks that are in the exFAT and FAT32 formats cannot be backed up.
      shared_ptr<string> policy_ {};
      // The ID of the region that you specified for data backup when you installed the anti-ransomware agent for the server not deployed on Alibaba Cloud.
      shared_ptr<string> policyRegionId_ {};
      // The version of the anti-ransomware policy. Valid values:
      // 
      // *   1.0.0
      // *   2.0.0
      shared_ptr<string> policyVersion_ {};
      // The previous status of the anti-ransomware policy. Valid values:
      // 
      // *   **enabled**: The anti-ransomware policy is manually enabled.
      // *   **disabled**: The anti-ransomware policy is manually disabled. After an anti-ransomware policy is disabled, the data backup task that is running based on the policy stops.
      // *   **closed**: The anti-ransomware policy automatically stops because the anti-ransomware capacity is insufficient.
      shared_ptr<string> preStatus_ {};
      // The UUIDs that are returned based on the value of the MachineRemark request parameter.
      shared_ptr<vector<string>> remarkedUuidList_ {};
      // The type of the server. Valid values:
      // 
      // *   **OUT_CLOUD**: server not deployed on Alibaba Cloud
      // *   **ALIYUN**: Elastic Compute Service (ECS) instance
      // *   **TRIPARTITE**: simple application server
      shared_ptr<string> serverType_ {};
      // The number of servers on which data backup is exceptional.
      shared_ptr<int32_t> serviceErrorCount_ {};
      // The UUIDs of the servers on which data backup is exceptional.
      shared_ptr<vector<string>> serviceErrorUuidList_ {};
      // The status of the anti-ransomware policy. Valid values:
      // 
      // *   **enabled**: The anti-ransomware policy is manually enabled.
      // *   **disabled**: The anti-ransomware policy is manually disabled. After an anti-ransomware policy is disabled, the data backup task that is running based on the policy stops.
      // *   **closed**: The anti-ransomware policy automatically stops because the anti-ransomware capacity is insufficient.
      shared_ptr<string> status_ {};
      // The upgrade status of the anti-ransomware policy. Valid values:
      // 
      // *   **NotUpgraded**
      // *   **Upgrading**
      // *   **UpgradeFailed**
      // *   **UpgradeSuccess**
      shared_ptr<string> upgradeStatus_ {};
      // The UUIDs of the servers to which the anti-ransomware policy is applied.
      shared_ptr<vector<string>> uuidList_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of anti-ransomware policies returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->policies_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBackupPoliciesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBackupPoliciesResponseBody::PageInfo) };
    inline DescribeBackupPoliciesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBackupPoliciesResponseBody::PageInfo) };
    inline DescribeBackupPoliciesResponseBody& setPageInfo(const DescribeBackupPoliciesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBackupPoliciesResponseBody& setPageInfo(DescribeBackupPoliciesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<DescribeBackupPoliciesResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DescribeBackupPoliciesResponseBody::Policies>) };
    inline vector<DescribeBackupPoliciesResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<DescribeBackupPoliciesResponseBody::Policies>) };
    inline DescribeBackupPoliciesResponseBody& setPolicies(const vector<DescribeBackupPoliciesResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeBackupPoliciesResponseBody& setPolicies(vector<DescribeBackupPoliciesResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribeBackupPoliciesResponseBody::PageInfo> pageInfo_ {};
    // The details of the anti-ransomware policy.
    shared_ptr<vector<DescribeBackupPoliciesResponseBody::Policies>> policies_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
