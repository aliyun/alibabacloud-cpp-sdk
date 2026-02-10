// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICIESRESPONSEBODY_HPP_
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
  class DescribeUniBackupPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UniBackupPolicies, uniBackupPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UniBackupPolicies, uniBackupPolicies_);
    };
    DescribeUniBackupPoliciesResponseBody() = default ;
    DescribeUniBackupPoliciesResponseBody(const DescribeUniBackupPoliciesResponseBody &) = default ;
    DescribeUniBackupPoliciesResponseBody(DescribeUniBackupPoliciesResponseBody &&) = default ;
    DescribeUniBackupPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupPoliciesResponseBody() = default ;
    DescribeUniBackupPoliciesResponseBody& operator=(const DescribeUniBackupPoliciesResponseBody &) = default ;
    DescribeUniBackupPoliciesResponseBody& operator=(DescribeUniBackupPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UniBackupPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UniBackupPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(AgentErrorMessage, agentErrorMessage_);
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
        DARABONBA_PTR_TO_JSON(LatestBackResult, latestBackResult_);
        DARABONBA_PTR_TO_JSON(LatestBackupTime, latestBackupTime_);
        DARABONBA_PTR_TO_JSON(PlanStatus, planStatus_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_TO_JSON(UniRegionId, uniRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, UniBackupPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentErrorMessage, agentErrorMessage_);
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
        DARABONBA_PTR_FROM_JSON(LatestBackResult, latestBackResult_);
        DARABONBA_PTR_FROM_JSON(LatestBackupTime, latestBackupTime_);
        DARABONBA_PTR_FROM_JSON(PlanStatus, planStatus_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_FROM_JSON(UniRegionId, uniRegionId_);
      };
      UniBackupPolicies() = default ;
      UniBackupPolicies(const UniBackupPolicies &) = default ;
      UniBackupPolicies(UniBackupPolicies &&) = default ;
      UniBackupPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UniBackupPolicies() = default ;
      UniBackupPolicies& operator=(const UniBackupPolicies &) = default ;
      UniBackupPolicies& operator=(UniBackupPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentErrorMessage_ == nullptr
        && this->agentStatus_ == nullptr && this->databaseName_ == nullptr && this->databaseType_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr && this->instanceUuid_ == nullptr && this->latestBackResult_ == nullptr
        && this->latestBackupTime_ == nullptr && this->planStatus_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr && this->policyStatus_ == nullptr
        && this->uniRegionId_ == nullptr; };
      // agentErrorMessage Field Functions 
      bool hasAgentErrorMessage() const { return this->agentErrorMessage_ != nullptr;};
      void deleteAgentErrorMessage() { this->agentErrorMessage_ = nullptr;};
      inline string getAgentErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(agentErrorMessage_, "") };
      inline UniBackupPolicies& setAgentErrorMessage(string agentErrorMessage) { DARABONBA_PTR_SET_VALUE(agentErrorMessage_, agentErrorMessage) };


      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
      inline UniBackupPolicies& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline UniBackupPolicies& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // databaseType Field Functions 
      bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
      void deleteDatabaseType() { this->databaseType_ = nullptr;};
      inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
      inline UniBackupPolicies& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline UniBackupPolicies& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline UniBackupPolicies& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline UniBackupPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline UniBackupPolicies& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline UniBackupPolicies& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // instanceUuid Field Functions 
      bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
      void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
      inline string getInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
      inline UniBackupPolicies& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


      // latestBackResult Field Functions 
      bool hasLatestBackResult() const { return this->latestBackResult_ != nullptr;};
      void deleteLatestBackResult() { this->latestBackResult_ = nullptr;};
      inline string getLatestBackResult() const { DARABONBA_PTR_GET_DEFAULT(latestBackResult_, "") };
      inline UniBackupPolicies& setLatestBackResult(string latestBackResult) { DARABONBA_PTR_SET_VALUE(latestBackResult_, latestBackResult) };


      // latestBackupTime Field Functions 
      bool hasLatestBackupTime() const { return this->latestBackupTime_ != nullptr;};
      void deleteLatestBackupTime() { this->latestBackupTime_ = nullptr;};
      inline string getLatestBackupTime() const { DARABONBA_PTR_GET_DEFAULT(latestBackupTime_, "") };
      inline UniBackupPolicies& setLatestBackupTime(string latestBackupTime) { DARABONBA_PTR_SET_VALUE(latestBackupTime_, latestBackupTime) };


      // planStatus Field Functions 
      bool hasPlanStatus() const { return this->planStatus_ != nullptr;};
      void deletePlanStatus() { this->planStatus_ = nullptr;};
      inline string getPlanStatus() const { DARABONBA_PTR_GET_DEFAULT(planStatus_, "") };
      inline UniBackupPolicies& setPlanStatus(string planStatus) { DARABONBA_PTR_SET_VALUE(planStatus_, planStatus) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline UniBackupPolicies& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline UniBackupPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyStatus Field Functions 
      bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
      void deletePolicyStatus() { this->policyStatus_ = nullptr;};
      inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
      inline UniBackupPolicies& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


      // uniRegionId Field Functions 
      bool hasUniRegionId() const { return this->uniRegionId_ != nullptr;};
      void deleteUniRegionId() { this->uniRegionId_ = nullptr;};
      inline string getUniRegionId() const { DARABONBA_PTR_GET_DEFAULT(uniRegionId_, "") };
      inline UniBackupPolicies& setUniRegionId(string uniRegionId) { DARABONBA_PTR_SET_VALUE(uniRegionId_, uniRegionId) };


    protected:
      // The error message for the anti-ransomware agent.
      shared_ptr<string> agentErrorMessage_ {};
      // The status of the agent. Valid values:
      // 
      // *   **UNKNOWN**
      // *   **INSTALLED**
      // *   **INSTALL_FAILED**
      // *   **UNINSTALL_FAILED**
      shared_ptr<string> agentStatus_ {};
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // The type of the database. Valid values:
      // 
      // *   **MYSQL**
      // *   **MSSQL**
      // *   **Oracle**
      shared_ptr<string> databaseType_ {};
      // The error code returned when the backup task fails.
      shared_ptr<string> errorCode_ {};
      // The error message for the anti-ransomware policy.
      shared_ptr<string> errorMessage_ {};
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The status of the Elastic Compute Service (ECS) instance. Valid values:
      // 
      // *   **Stopped**
      // *   **Running**
      shared_ptr<string> instanceStatus_ {};
      // The UUID of the agent that is used to back up the data of the database.
      shared_ptr<string> instanceUuid_ {};
      // The execution result of the last backup task.
      shared_ptr<string> latestBackResult_ {};
      // The time when the last backup task was executed.
      shared_ptr<string> latestBackupTime_ {};
      // The status of the backup task. Valid values:
      // 
      // *   **init**
      // *   **running**
      // *   **completed**
      // *   **restoring**
      // *   **creating**
      // *   **created**
      shared_ptr<string> planStatus_ {};
      // The ID of the anti-ransomware policy.
      shared_ptr<int64_t> policyId_ {};
      // The name of the anti-ransomware policy.
      shared_ptr<string> policyName_ {};
      // The status of the anti-ransomware policy. Valid values:
      // 
      // *   **initiating**
      // *   **opening**
      // *   **closing**
      // *   **deleting**
      // *   **enabled**
      // *   **disabled**
      shared_ptr<string> policyStatus_ {};
      // The region ID of the server that hosts the database.
      shared_ptr<string> uniRegionId_ {};
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
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->uniBackupPolicies_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeUniBackupPoliciesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeUniBackupPoliciesResponseBody::PageInfo) };
    inline DescribeUniBackupPoliciesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeUniBackupPoliciesResponseBody::PageInfo) };
    inline DescribeUniBackupPoliciesResponseBody& setPageInfo(const DescribeUniBackupPoliciesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeUniBackupPoliciesResponseBody& setPageInfo(DescribeUniBackupPoliciesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniBackupPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uniBackupPolicies Field Functions 
    bool hasUniBackupPolicies() const { return this->uniBackupPolicies_ != nullptr;};
    void deleteUniBackupPolicies() { this->uniBackupPolicies_ = nullptr;};
    inline const vector<DescribeUniBackupPoliciesResponseBody::UniBackupPolicies> & getUniBackupPolicies() const { DARABONBA_PTR_GET_CONST(uniBackupPolicies_, vector<DescribeUniBackupPoliciesResponseBody::UniBackupPolicies>) };
    inline vector<DescribeUniBackupPoliciesResponseBody::UniBackupPolicies> getUniBackupPolicies() { DARABONBA_PTR_GET(uniBackupPolicies_, vector<DescribeUniBackupPoliciesResponseBody::UniBackupPolicies>) };
    inline DescribeUniBackupPoliciesResponseBody& setUniBackupPolicies(const vector<DescribeUniBackupPoliciesResponseBody::UniBackupPolicies> & uniBackupPolicies) { DARABONBA_PTR_SET_VALUE(uniBackupPolicies_, uniBackupPolicies) };
    inline DescribeUniBackupPoliciesResponseBody& setUniBackupPolicies(vector<DescribeUniBackupPoliciesResponseBody::UniBackupPolicies> && uniBackupPolicies) { DARABONBA_PTR_SET_RVALUE(uniBackupPolicies_, uniBackupPolicies) };


  protected:
    // The pagination information.
    shared_ptr<DescribeUniBackupPoliciesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the anti-ransomware policies.
    shared_ptr<vector<DescribeUniBackupPoliciesResponseBody::UniBackupPolicies>> uniBackupPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
