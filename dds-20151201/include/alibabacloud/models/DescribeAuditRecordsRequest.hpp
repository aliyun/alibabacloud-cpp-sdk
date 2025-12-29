// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAuditRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryKeywords, queryKeywords_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryKeywords, queryKeywords_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeAuditRecordsRequest() = default ;
    DescribeAuditRecordsRequest(const DescribeAuditRecordsRequest &) = default ;
    DescribeAuditRecordsRequest(DescribeAuditRecordsRequest &&) = default ;
    DescribeAuditRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditRecordsRequest() = default ;
    DescribeAuditRecordsRequest& operator=(const DescribeAuditRecordsRequest &) = default ;
    DescribeAuditRecordsRequest& operator=(DescribeAuditRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->database_ == nullptr && this->endTime_ == nullptr && this->form_ == nullptr && this->logicalOperator_ == nullptr && this->nodeId_ == nullptr
        && this->orderType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->queryKeywords_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startTime_ == nullptr && this->user_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeAuditRecordsRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeAuditRecordsRequest& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAuditRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // form Field Functions 
    bool hasForm() const { return this->form_ != nullptr;};
    void deleteForm() { this->form_ = nullptr;};
    inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
    inline DescribeAuditRecordsRequest& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // logicalOperator Field Functions 
    bool hasLogicalOperator() const { return this->logicalOperator_ != nullptr;};
    void deleteLogicalOperator() { this->logicalOperator_ = nullptr;};
    inline string getLogicalOperator() const { DARABONBA_PTR_GET_DEFAULT(logicalOperator_, "") };
    inline DescribeAuditRecordsRequest& setLogicalOperator(string logicalOperator) { DARABONBA_PTR_SET_VALUE(logicalOperator_, logicalOperator) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeAuditRecordsRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeAuditRecordsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeAuditRecordsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeAuditRecordsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAuditRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuditRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryKeywords Field Functions 
    bool hasQueryKeywords() const { return this->queryKeywords_ != nullptr;};
    void deleteQueryKeywords() { this->queryKeywords_ = nullptr;};
    inline string getQueryKeywords() const { DARABONBA_PTR_GET_DEFAULT(queryKeywords_, "") };
    inline DescribeAuditRecordsRequest& setQueryKeywords(string queryKeywords) { DARABONBA_PTR_SET_VALUE(queryKeywords_, queryKeywords) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAuditRecordsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAuditRecordsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAuditRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeAuditRecordsRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The instance ID.
    // 
    // > If you set this parameter to the ID of a sharded cluster instance, you must also specify the **NodeId** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the database to be queried. By default, all databases are queried.
    shared_ptr<string> database_ {};
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > The end time must be within 24 hours from the start time. Otherwise, the query fails.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The form of the audit log that the operation returns. Valid values:
    // 
    // *   **File**: triggers the generation of audit logs. If this parameter is set to File, only common parameters are returned.
    // *   **Stream** (default): returns data streams.
    shared_ptr<string> form_ {};
    // The logical relationship between multiple keywords. Valid values:
    // 
    // *   **or**
    // *   **and** (default value)
    shared_ptr<string> logicalOperator_ {};
    // The ID of the mongos node or shard node in the instance.
    // 
    // > This parameter takes effect only when you set the **DBInstanceId** parameter to the ID of a sharded cluster instance.
    shared_ptr<string> nodeId_ {};
    // The order of time in which the log entries to return are sorted. Valid values:
    // 
    // *   **asc**: The log entries are sorted by time in ascending order.
    // *   **desc**: The log entries are sorted by time in descending order.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number of the page to return. The valid value must be a positive integer that does not exceed the maximum value of the INTEGER data type. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return per page. Default value: 30. Valid values: **30**, **50**, and **100**.
    shared_ptr<int32_t> pageSize_ {};
    // The keywords used for query. You can enter up to 10 keywords at a time. If you enter multiple keywords, separate the keywords with spaces.
    shared_ptr<string> queryKeywords_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The user of the database. If you do not specify this parameter, this operation returns records of all users.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
