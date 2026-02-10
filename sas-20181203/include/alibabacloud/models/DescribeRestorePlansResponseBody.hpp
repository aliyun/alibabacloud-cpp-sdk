// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREPLANSRESPONSEBODY_HPP_
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
  class DescribeRestorePlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestorePlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestorePlans, restorePlans_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestorePlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestorePlans, restorePlans_);
    };
    DescribeRestorePlansResponseBody() = default ;
    DescribeRestorePlansResponseBody(const DescribeRestorePlansResponseBody &) = default ;
    DescribeRestorePlansResponseBody(DescribeRestorePlansResponseBody &&) = default ;
    DescribeRestorePlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestorePlansResponseBody() = default ;
    DescribeRestorePlansResponseBody& operator=(const DescribeRestorePlansResponseBody &) = default ;
    DescribeRestorePlansResponseBody& operator=(DescribeRestorePlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestorePlans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestorePlans& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(RestorePoint, restorePoint_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetDatabaseName, targetDatabaseName_);
        DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
        DARABONBA_PTR_TO_JSON(TargetInstanceName, targetInstanceName_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, RestorePlans& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(RestorePoint, restorePoint_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetDatabaseName, targetDatabaseName_);
        DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
        DARABONBA_PTR_FROM_JSON(TargetInstanceName, targetInstanceName_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      RestorePlans() = default ;
      RestorePlans(const RestorePlans &) = default ;
      RestorePlans(RestorePlans &&) = default ;
      RestorePlans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestorePlans() = default ;
      RestorePlans& operator=(const RestorePlans &) = default ;
      RestorePlans& operator=(RestorePlans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->databaseName_ == nullptr && this->instanceName_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr && this->restorePoint_ == nullptr
        && this->status_ == nullptr && this->targetDatabaseName_ == nullptr && this->targetInstanceId_ == nullptr && this->targetInstanceName_ == nullptr && this->updatedTime_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline RestorePlans& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline RestorePlans& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline RestorePlans& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline RestorePlans& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline RestorePlans& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // restorePoint Field Functions 
      bool hasRestorePoint() const { return this->restorePoint_ != nullptr;};
      void deleteRestorePoint() { this->restorePoint_ = nullptr;};
      inline int64_t getRestorePoint() const { DARABONBA_PTR_GET_DEFAULT(restorePoint_, 0L) };
      inline RestorePlans& setRestorePoint(int64_t restorePoint) { DARABONBA_PTR_SET_VALUE(restorePoint_, restorePoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RestorePlans& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetDatabaseName Field Functions 
      bool hasTargetDatabaseName() const { return this->targetDatabaseName_ != nullptr;};
      void deleteTargetDatabaseName() { this->targetDatabaseName_ = nullptr;};
      inline string getTargetDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(targetDatabaseName_, "") };
      inline RestorePlans& setTargetDatabaseName(string targetDatabaseName) { DARABONBA_PTR_SET_VALUE(targetDatabaseName_, targetDatabaseName) };


      // targetInstanceId Field Functions 
      bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
      void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
      inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
      inline RestorePlans& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


      // targetInstanceName Field Functions 
      bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
      void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
      inline string getTargetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
      inline RestorePlans& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline RestorePlans& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      // The timestamp when the restoration task was created. Unit: milliseconds.
      shared_ptr<int64_t> createdTime_ {};
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // The name of the server on which the database resides.
      shared_ptr<string> instanceName_ {};
      // The ID of the anti-ransomware policy.
      shared_ptr<int64_t> policyId_ {};
      // The name of the anti-ransomware policy.
      shared_ptr<string> policyName_ {};
      // The point in time to which data is restored.
      shared_ptr<int64_t> restorePoint_ {};
      // The status of the restoration task. Valid values:
      // 
      // *   **init**: initializing
      // *   **created**: creating
      // *   **running**: running
      // *   **completed**: complete
      // *   **error**: failed
      // *   **restoring**: restoring
      shared_ptr<string> status_ {};
      // The name of the destination database.
      shared_ptr<string> targetDatabaseName_ {};
      // The ID of the destination server.
      shared_ptr<string> targetInstanceId_ {};
      // The name of the destination server.
      shared_ptr<string> targetInstanceName_ {};
      // The timestamp when the restoration task was last updated. Unit: milliseconds.
      shared_ptr<int64_t> updatedTime_ {};
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
        && this->requestId_ == nullptr && this->restorePlans_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeRestorePlansResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeRestorePlansResponseBody::PageInfo) };
    inline DescribeRestorePlansResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeRestorePlansResponseBody::PageInfo) };
    inline DescribeRestorePlansResponseBody& setPageInfo(const DescribeRestorePlansResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeRestorePlansResponseBody& setPageInfo(DescribeRestorePlansResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestorePlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restorePlans Field Functions 
    bool hasRestorePlans() const { return this->restorePlans_ != nullptr;};
    void deleteRestorePlans() { this->restorePlans_ = nullptr;};
    inline const vector<DescribeRestorePlansResponseBody::RestorePlans> & getRestorePlans() const { DARABONBA_PTR_GET_CONST(restorePlans_, vector<DescribeRestorePlansResponseBody::RestorePlans>) };
    inline vector<DescribeRestorePlansResponseBody::RestorePlans> getRestorePlans() { DARABONBA_PTR_GET(restorePlans_, vector<DescribeRestorePlansResponseBody::RestorePlans>) };
    inline DescribeRestorePlansResponseBody& setRestorePlans(const vector<DescribeRestorePlansResponseBody::RestorePlans> & restorePlans) { DARABONBA_PTR_SET_VALUE(restorePlans_, restorePlans) };
    inline DescribeRestorePlansResponseBody& setRestorePlans(vector<DescribeRestorePlansResponseBody::RestorePlans> && restorePlans) { DARABONBA_PTR_SET_RVALUE(restorePlans_, restorePlans) };


  protected:
    // The pagination information.
    shared_ptr<DescribeRestorePlansResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the restoration tasks.
    shared_ptr<vector<DescribeRestorePlansResponseBody::RestorePlans>> restorePlans_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
