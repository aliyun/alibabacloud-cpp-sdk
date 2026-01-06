// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITLOGRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAuditLogRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditLogRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProxyUser, proxyUser_);
      DARABONBA_PTR_TO_JSON(QueryKeyword, queryKeyword_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Succeed, succeed_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditLogRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProxyUser, proxyUser_);
      DARABONBA_PTR_FROM_JSON(QueryKeyword, queryKeyword_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Succeed, succeed_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeAuditLogRecordsRequest() = default ;
    DescribeAuditLogRecordsRequest(const DescribeAuditLogRecordsRequest &) = default ;
    DescribeAuditLogRecordsRequest(DescribeAuditLogRecordsRequest &&) = default ;
    DescribeAuditLogRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditLogRecordsRequest() = default ;
    DescribeAuditLogRecordsRequest& operator=(const DescribeAuditLogRecordsRequest &) = default ;
    DescribeAuditLogRecordsRequest& operator=(DescribeAuditLogRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBName_ == nullptr && this->endTime_ == nullptr && this->hostAddress_ == nullptr && this->order_ == nullptr && this->orderType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->proxyUser_ == nullptr
        && this->queryKeyword_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sqlType_ == nullptr
        && this->startTime_ == nullptr && this->succeed_ == nullptr && this->user_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAuditLogRecordsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeAuditLogRecordsRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAuditLogRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeAuditLogRecordsRequest& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeAuditLogRecordsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeAuditLogRecordsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeAuditLogRecordsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeAuditLogRecordsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAuditLogRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuditLogRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // proxyUser Field Functions 
    bool hasProxyUser() const { return this->proxyUser_ != nullptr;};
    void deleteProxyUser() { this->proxyUser_ = nullptr;};
    inline string getProxyUser() const { DARABONBA_PTR_GET_DEFAULT(proxyUser_, "") };
    inline DescribeAuditLogRecordsRequest& setProxyUser(string proxyUser) { DARABONBA_PTR_SET_VALUE(proxyUser_, proxyUser) };


    // queryKeyword Field Functions 
    bool hasQueryKeyword() const { return this->queryKeyword_ != nullptr;};
    void deleteQueryKeyword() { this->queryKeyword_ = nullptr;};
    inline string getQueryKeyword() const { DARABONBA_PTR_GET_DEFAULT(queryKeyword_, "") };
    inline DescribeAuditLogRecordsRequest& setQueryKeyword(string queryKeyword) { DARABONBA_PTR_SET_VALUE(queryKeyword_, queryKeyword) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAuditLogRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAuditLogRecordsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAuditLogRecordsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline DescribeAuditLogRecordsRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAuditLogRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // succeed Field Functions 
    bool hasSucceed() const { return this->succeed_ != nullptr;};
    void deleteSucceed() { this->succeed_ = nullptr;};
    inline string getSucceed() const { DARABONBA_PTR_GET_DEFAULT(succeed_, "") };
    inline DescribeAuditLogRecordsRequest& setSucceed(string succeed) { DARABONBA_PTR_SET_VALUE(succeed_, succeed) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeAuditLogRecordsRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition (V3.0) clusters within a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the database on which the SQL statement was executed.
    shared_ptr<string> DBName_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time must be in UTC.
    // 
    // > 
    // 
    // *   The end time must be later than the start time.
    // 
    // *   The maximum time range that can be specified is 24 hours.
    shared_ptr<string> endTime_ {};
    // The IP address and port number of the client that is used to execute the SQL statement.
    shared_ptr<string> hostAddress_ {};
    // The order in which to sort the retrieved entries by field. Specify this parameter in the JSON format. The value is an ordered array that uses the order of the input array and contains `Field` and `Type`. Example: `[{"Field":"ExecutionStartTime","Type":"Desc"},{"Field":"ScanRows","Type":"Asc"}]`. Fields:
    // 
    // *   `Field`: the field that is used to sort the retrieved entries. Valid values:
    // 
    //     *   **HostAddress**: the IP address of the client that is used to connect to the database.
    //     *   **UserName**: the username.
    //     *   **ExecutionStartTime**: the start time of the query execution.
    //     *   **QueryTime**: the amount of time consumed to execute the SQL statement.
    //     *   **PeakMemoryUsage**: the maximum memory usage when the SQL statement is executed.
    //     *   **ScanRows**: the number of rows to be scanned from a data source in the task.
    //     *   **ScanSize**: the amount of data to be scanned.
    //     *   **ScanTime**: the total amount of time consumed to scan data.
    //     *   **PlanningTime**: the amount of time consumed to generate execution plans.
    //     *   **WallTime**: the accumulated CPU Time values of all operators in the query on each node.
    //     *   **ProcessID**: the process ID.
    // 
    // *   `Type`: the sorting type of the retrieved entries. Valid values:
    // 
    //     *   **Desc**: descending order.
    //     *   **Asc**: ascending order.
    shared_ptr<string> order_ {};
    // The sorting order of the retrieved entries. Valid values:
    // 
    // *   **asc**: sorts the retrieved entries by time in ascending order.
    // *   **desc**: sorts the retrieved entries by time in descending order.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Pages start from page 1. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // *   **10** (default)
    // *   **30**
    // *   **50**
    // *   **100**
    shared_ptr<int32_t> pageSize_ {};
    // A reserved parameter.
    shared_ptr<string> proxyUser_ {};
    // The keyword based on which audit logs are queried. You can set this parameter to a value of the STRING type.
    shared_ptr<string> queryKeyword_ {};
    // The region ID of the cluster.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of the SQL statement. Valid values:
    // 
    // *   **DELETE**
    // *   **SELECT**
    // *   **UPDATE**
    // *   **INSERT INTO SELECT**
    // *   **ALTER**
    // *   **DROP**
    // *   **CREATE**
    // 
    // >  You can query only a single type of SQL statements at a time. If you leave this parameter empty, all types of SQL statements are queried.
    shared_ptr<string> sqlType_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time must be in UTC.
    // 
    // > SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried.
    shared_ptr<string> startTime_ {};
    // Specifies whether the execution of the SQL statement succeeds. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> succeed_ {};
    // The username that is used to execute the SQL statement.
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
