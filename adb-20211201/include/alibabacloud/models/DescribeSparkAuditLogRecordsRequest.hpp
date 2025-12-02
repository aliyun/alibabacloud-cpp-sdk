// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKAUDITLOGRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKAUDITLOGRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkAuditLogRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkAuditLogRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProxyUser, proxyUser_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatementId, statementId_);
      DARABONBA_PTR_TO_JSON(StatementSource, statementSource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkAuditLogRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProxyUser, proxyUser_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
      DARABONBA_PTR_FROM_JSON(StatementSource, statementSource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeSparkAuditLogRecordsRequest() = default ;
    DescribeSparkAuditLogRecordsRequest(const DescribeSparkAuditLogRecordsRequest &) = default ;
    DescribeSparkAuditLogRecordsRequest(DescribeSparkAuditLogRecordsRequest &&) = default ;
    DescribeSparkAuditLogRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkAuditLogRecordsRequest() = default ;
    DescribeSparkAuditLogRecordsRequest& operator=(const DescribeSparkAuditLogRecordsRequest &) = default ;
    DescribeSparkAuditLogRecordsRequest& operator=(DescribeSparkAuditLogRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIp_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->endTime_ == nullptr && return this->order_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->processId_ == nullptr && return this->proxyUser_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupName_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->SQLText_ == nullptr && return this->startTime_ == nullptr
        && return this->statementId_ == nullptr && return this->statementSource_ == nullptr && return this->status_ == nullptr && return this->totalTime_ == nullptr && return this->user_ == nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSparkAuditLogRecordsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSparkAuditLogRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSparkAuditLogRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // proxyUser Field Functions 
    bool hasProxyUser() const { return this->proxyUser_ != nullptr;};
    void deleteProxyUser() { this->proxyUser_ = nullptr;};
    inline string proxyUser() const { DARABONBA_PTR_GET_DEFAULT(proxyUser_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setProxyUser(string proxyUser) { DARABONBA_PTR_SET_VALUE(proxyUser_, proxyUser) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSparkAuditLogRecordsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statementId Field Functions 
    bool hasStatementId() const { return this->statementId_ != nullptr;};
    void deleteStatementId() { this->statementId_ = nullptr;};
    inline string statementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setStatementId(string statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


    // statementSource Field Functions 
    bool hasStatementSource() const { return this->statementSource_ != nullptr;};
    void deleteStatementSource() { this->statementSource_ = nullptr;};
    inline string statementSource() const { DARABONBA_PTR_GET_DEFAULT(statementSource_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setStatementSource(string statementSource) { DARABONBA_PTR_SET_VALUE(statementSource_, statementSource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalTime Field Functions 
    bool hasTotalTime() const { return this->totalTime_ != nullptr;};
    void deleteTotalTime() { this->totalTime_ = nullptr;};
    inline string totalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setTotalTime(string totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSparkAuditLogRecordsRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The source IP address.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The cluster ID.
    // 
    // > 
    // 
    // *   You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Query end time. The end time must be later than the start time, and the interval between them must be less than 1 day. Format: yyyy-MM-ddTHH:mmZ (UTC time).
    std::shared_ptr<string> endTime_ = nullptr;
    // Sort the SQL statements based on specified fields. The format is a JSON array that preserves order, and composite sorting is performed according to the sequence of objects in the array. Each object contains two fields: `Field` and `Type`. For example:`[{"Field":"CreateTime", "Type": "desc" }]`. Where:
    // 
    // *   `Field` specifies the field that is used to sort the SQL statements. Valid values:
    // 
    //     *   `ResourceGroupName`: The name of the resource group.
    //     *   `Status` :SQL execution status.
    //     *   `User`: The username that is used to execute the SQL statement.
    //     *   `ExecuteTime`: The start time of SQL execution.
    //     *   `TotalTime`: The amount of time consumed to execute the SQL statement.
    //     *   `ProcessId`: Query ID.
    //     *   `ClientIp`: The source IP address.
    //     *   `StatementSource`: The source from which the query was initiated.
    // 
    // *   `Type` specifies the sorting order. Valid values (case-insensitive):
    // 
    //     *   `Desc`: Descending order.
    //     *   `Asc`: Ascending order.
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The query ID.
    std::shared_ptr<string> processId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> proxyUser_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/612293.html) operation to query the available regions and zones, including region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group name.
    // 
    // >  You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/612410.html) operation to query the resource group ID within a cluster.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The keyword in the SQL statement.
    std::shared_ptr<string> SQLText_ = nullptr;
    // Query start time. Format: *yyyy-MM-ddTHH:mmZ* (UTC time).
    // 
    // >  We recommend that you set the query start time to any point in time within 30 days.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the statement.
    std::shared_ptr<string> statementId_ = nullptr;
    // The source from which the query was initiated.
    // 
    // Valid values:
    // 
    // *   SQL_EDITOR: SQL_EDITOR.
    // *   JDBC: JDBC.
    std::shared_ptr<string> statementSource_ = nullptr;
    // The execution status of the SQL statement.
    // 
    // Valid values:
    // 
    // *   cancel: The task is canceled .
    // *   finished: The execution succeeds .
    // *   error:The execution fails .
    // *   timeout: The execution timed out .
    std::shared_ptr<string> status_ = nullptr;
    // The duration of the SQL statement. Unit: milliseconds.
    std::shared_ptr<string> totalTime_ = nullptr;
    // The username that is used to execute SQL statements.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
