// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDMIGRATIONPRECHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDMIGRATIONPRECHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCloudMigrationPrecheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudMigrationPrecheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudMigrationPrecheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeCloudMigrationPrecheckResultResponseBody() = default ;
    DescribeCloudMigrationPrecheckResultResponseBody(const DescribeCloudMigrationPrecheckResultResponseBody &) = default ;
    DescribeCloudMigrationPrecheckResultResponseBody(DescribeCloudMigrationPrecheckResultResponseBody &&) = default ;
    DescribeCloudMigrationPrecheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudMigrationPrecheckResultResponseBody() = default ;
    DescribeCloudMigrationPrecheckResultResponseBody& operator=(const DescribeCloudMigrationPrecheckResultResponseBody &) = default ;
    DescribeCloudMigrationPrecheckResultResponseBody& operator=(DescribeCloudMigrationPrecheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(SourceAccount, sourceAccount_);
        DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
        DARABONBA_PTR_TO_JSON(SourceIpAddress, sourceIpAddress_);
        DARABONBA_PTR_TO_JSON(SourcePassword, sourcePassword_);
        DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
        DARABONBA_PTR_TO_JSON(TargetEip, targetEip_);
        DARABONBA_PTR_TO_JSON(TargetInstanceName, targetInstanceName_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(SourceAccount, sourceAccount_);
        DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
        DARABONBA_PTR_FROM_JSON(SourceIpAddress, sourceIpAddress_);
        DARABONBA_PTR_FROM_JSON(SourcePassword, sourcePassword_);
        DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
        DARABONBA_PTR_FROM_JSON(TargetEip, targetEip_);
        DARABONBA_PTR_FROM_JSON(TargetInstanceName, targetInstanceName_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->sourceAccount_ == nullptr && this->sourceCategory_ == nullptr && this->sourceIpAddress_ == nullptr
        && this->sourcePassword_ == nullptr && this->sourcePort_ == nullptr && this->targetEip_ == nullptr && this->targetInstanceName_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Items& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Items& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // sourceAccount Field Functions 
      bool hasSourceAccount() const { return this->sourceAccount_ != nullptr;};
      void deleteSourceAccount() { this->sourceAccount_ = nullptr;};
      inline string getSourceAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceAccount_, "") };
      inline Items& setSourceAccount(string sourceAccount) { DARABONBA_PTR_SET_VALUE(sourceAccount_, sourceAccount) };


      // sourceCategory Field Functions 
      bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
      void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
      inline string getSourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
      inline Items& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


      // sourceIpAddress Field Functions 
      bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
      void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
      inline string getSourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
      inline Items& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


      // sourcePassword Field Functions 
      bool hasSourcePassword() const { return this->sourcePassword_ != nullptr;};
      void deleteSourcePassword() { this->sourcePassword_ = nullptr;};
      inline string getSourcePassword() const { DARABONBA_PTR_GET_DEFAULT(sourcePassword_, "") };
      inline Items& setSourcePassword(string sourcePassword) { DARABONBA_PTR_SET_VALUE(sourcePassword_, sourcePassword) };


      // sourcePort Field Functions 
      bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
      void deleteSourcePort() { this->sourcePort_ = nullptr;};
      inline int64_t getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0L) };
      inline Items& setSourcePort(int64_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


      // targetEip Field Functions 
      bool hasTargetEip() const { return this->targetEip_ != nullptr;};
      void deleteTargetEip() { this->targetEip_ = nullptr;};
      inline string getTargetEip() const { DARABONBA_PTR_GET_DEFAULT(targetEip_, "") };
      inline Items& setTargetEip(string targetEip) { DARABONBA_PTR_SET_VALUE(targetEip_, targetEip) };


      // targetInstanceName Field Functions 
      bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
      void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
      inline string getTargetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
      inline Items& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Items& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Items& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // The content of the assessment report.
      shared_ptr<string> detail_ {};
      // The time when the task was created.
      shared_ptr<string> gmtCreated_ {};
      // The time when the task was modified.
      shared_ptr<string> gmtModified_ {};
      // The username.
      shared_ptr<string> sourceAccount_ {};
      // The environment in which the self-managed PostgreSQL instance runs.
      // 
      // *   **idcOnVpc**: The self-managed PostgreSQL instance resides in a data center. The data center can communicate with the VPC to which the ApsaraDB RDS for PostgreSQL instance belongs.
      // *   **ecsOnVpc**: The self-managed PostgreSQL instance resides on an ECS instance.
      shared_ptr<string> sourceCategory_ {};
      // The private IP address that is used to connect to the self-managed PostgreSQL instance.
      shared_ptr<string> sourceIpAddress_ {};
      // The password.
      shared_ptr<string> sourcePassword_ {};
      // The port number that is used to connect to the self-managed PostgreSQL instance.
      shared_ptr<int64_t> sourcePort_ {};
      // A reserved parameter. The return value of this parameter is empty.
      shared_ptr<string> targetEip_ {};
      // The instance ID.
      shared_ptr<string> targetInstanceName_ {};
      // The task ID.
      shared_ptr<int64_t> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalSize_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeCloudMigrationPrecheckResultResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeCloudMigrationPrecheckResultResponseBody::Items>) };
    inline vector<DescribeCloudMigrationPrecheckResultResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeCloudMigrationPrecheckResultResponseBody::Items>) };
    inline DescribeCloudMigrationPrecheckResultResponseBody& setItems(const vector<DescribeCloudMigrationPrecheckResultResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCloudMigrationPrecheckResultResponseBody& setItems(vector<DescribeCloudMigrationPrecheckResultResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeCloudMigrationPrecheckResultResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeCloudMigrationPrecheckResultResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudMigrationPrecheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeCloudMigrationPrecheckResultResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The details about the assessment report.
    shared_ptr<vector<DescribeCloudMigrationPrecheckResultResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
