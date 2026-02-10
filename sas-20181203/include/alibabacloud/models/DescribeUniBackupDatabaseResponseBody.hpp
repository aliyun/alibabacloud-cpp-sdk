// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPDATABASERESPONSEBODY_HPP_
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
  class DescribeUniBackupDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUniBackupDatabaseResponseBody() = default ;
    DescribeUniBackupDatabaseResponseBody(const DescribeUniBackupDatabaseResponseBody &) = default ;
    DescribeUniBackupDatabaseResponseBody(DescribeUniBackupDatabaseResponseBody &&) = default ;
    DescribeUniBackupDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupDatabaseResponseBody() = default ;
    DescribeUniBackupDatabaseResponseBody& operator=(const DescribeUniBackupDatabaseResponseBody &) = default ;
    DescribeUniBackupDatabaseResponseBody& operator=(DescribeUniBackupDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

    class DatabaseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatabaseList& obj) { 
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(CreatedByProduct, createdByProduct_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_TO_JSON(DatabaseVersion, databaseVersion_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseList& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(CreatedByProduct, createdByProduct_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_FROM_JSON(DatabaseVersion, databaseVersion_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DatabaseList() = default ;
      DatabaseList(const DatabaseList &) = default ;
      DatabaseList(DatabaseList &&) = default ;
      DatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatabaseList() = default ;
      DatabaseList& operator=(const DatabaseList &) = default ;
      DatabaseList& operator=(DatabaseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentStatus_ == nullptr
        && this->createdByProduct_ == nullptr && this->databaseName_ == nullptr && this->databaseType_ == nullptr && this->databaseVersion_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceUuid_ == nullptr && this->policyId_ == nullptr && this->status_ == nullptr; };
      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
      inline DatabaseList& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // createdByProduct Field Functions 
      bool hasCreatedByProduct() const { return this->createdByProduct_ != nullptr;};
      void deleteCreatedByProduct() { this->createdByProduct_ = nullptr;};
      inline string getCreatedByProduct() const { DARABONBA_PTR_GET_DEFAULT(createdByProduct_, "") };
      inline DatabaseList& setCreatedByProduct(string createdByProduct) { DARABONBA_PTR_SET_VALUE(createdByProduct_, createdByProduct) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline DatabaseList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // databaseType Field Functions 
      bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
      void deleteDatabaseType() { this->databaseType_ = nullptr;};
      inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
      inline DatabaseList& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


      // databaseVersion Field Functions 
      bool hasDatabaseVersion() const { return this->databaseVersion_ != nullptr;};
      void deleteDatabaseVersion() { this->databaseVersion_ = nullptr;};
      inline string getDatabaseVersion() const { DARABONBA_PTR_GET_DEFAULT(databaseVersion_, "") };
      inline DatabaseList& setDatabaseVersion(string databaseVersion) { DARABONBA_PTR_SET_VALUE(databaseVersion_, databaseVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DatabaseList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline DatabaseList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceUuid Field Functions 
      bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
      void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
      inline string getInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
      inline DatabaseList& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline DatabaseList& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DatabaseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The status of the anti-ransomware agent. Valid values:
      // 
      // *   **UNKNOWN**: unknown
      // *   **INSTALLED**: installed
      // *   **INSTALL_FAILED**: installation failed
      // *   **UNINSTALL_FAILED**: uninstallation failed
      shared_ptr<string> agentStatus_ {};
      // The service from which the database is created. Valid values:
      // 
      // *   **HBR**: HBR
      // *   **AEGIS**: Security Center
      shared_ptr<string> createdByProduct_ {};
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // The type of the database. Valid values:
      // 
      // *   **MYSQL**
      // *   **MSSQL**
      // *   **Oracle**
      shared_ptr<string> databaseType_ {};
      // The version of the database engine.
      shared_ptr<string> databaseVersion_ {};
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the instance to which the database belongs.
      shared_ptr<string> instanceName_ {};
      // The UUID of the Hybrid Backup Recovery (HBR) agent that is used to back up the data of the database.
      shared_ptr<string> instanceUuid_ {};
      // The ID of the anti-ransomware policy.
      shared_ptr<int64_t> policyId_ {};
      // The status of the ECS instance. Valid values:
      // 
      // *   **Stopped**
      // *   **Running**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->databaseList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // databaseList Field Functions 
    bool hasDatabaseList() const { return this->databaseList_ != nullptr;};
    void deleteDatabaseList() { this->databaseList_ = nullptr;};
    inline const vector<DescribeUniBackupDatabaseResponseBody::DatabaseList> & getDatabaseList() const { DARABONBA_PTR_GET_CONST(databaseList_, vector<DescribeUniBackupDatabaseResponseBody::DatabaseList>) };
    inline vector<DescribeUniBackupDatabaseResponseBody::DatabaseList> getDatabaseList() { DARABONBA_PTR_GET(databaseList_, vector<DescribeUniBackupDatabaseResponseBody::DatabaseList>) };
    inline DescribeUniBackupDatabaseResponseBody& setDatabaseList(const vector<DescribeUniBackupDatabaseResponseBody::DatabaseList> & databaseList) { DARABONBA_PTR_SET_VALUE(databaseList_, databaseList) };
    inline DescribeUniBackupDatabaseResponseBody& setDatabaseList(vector<DescribeUniBackupDatabaseResponseBody::DatabaseList> && databaseList) { DARABONBA_PTR_SET_RVALUE(databaseList_, databaseList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeUniBackupDatabaseResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeUniBackupDatabaseResponseBody::PageInfo) };
    inline DescribeUniBackupDatabaseResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeUniBackupDatabaseResponseBody::PageInfo) };
    inline DescribeUniBackupDatabaseResponseBody& setPageInfo(const DescribeUniBackupDatabaseResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeUniBackupDatabaseResponseBody& setPageInfo(DescribeUniBackupDatabaseResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniBackupDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about the databases.
    shared_ptr<vector<DescribeUniBackupDatabaseResponseBody::DatabaseList>> databaseList_ {};
    // The pagination information.
    shared_ptr<DescribeUniBackupDatabaseResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
