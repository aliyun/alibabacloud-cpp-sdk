// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFULLREQUESTORIGINSTATBYINSTANCEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFULLREQUESTORIGINSTATBYINSTANCEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetFullRequestOriginStatByInstanceIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFullRequestOriginStatByInstanceIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asc, asc_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFullRequestOriginStatByInstanceIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asc, asc_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetFullRequestOriginStatByInstanceIdRequest() = default ;
    GetFullRequestOriginStatByInstanceIdRequest(const GetFullRequestOriginStatByInstanceIdRequest &) = default ;
    GetFullRequestOriginStatByInstanceIdRequest(GetFullRequestOriginStatByInstanceIdRequest &&) = default ;
    GetFullRequestOriginStatByInstanceIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFullRequestOriginStatByInstanceIdRequest() = default ;
    GetFullRequestOriginStatByInstanceIdRequest& operator=(const GetFullRequestOriginStatByInstanceIdRequest &) = default ;
    GetFullRequestOriginStatByInstanceIdRequest& operator=(GetFullRequestOriginStatByInstanceIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asc_ == nullptr
        && this->end_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->orderBy_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->role_ == nullptr && this->sqlType_ == nullptr && this->start_ == nullptr && this->userId_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool getAsc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline GetFullRequestOriginStatByInstanceIdRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetFullRequestOriginStatByInstanceIdRequest& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetFullRequestOriginStatByInstanceIdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetFullRequestOriginStatByInstanceIdRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetFullRequestOriginStatByInstanceIdRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetFullRequestOriginStatByInstanceIdRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetFullRequestOriginStatByInstanceIdRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetFullRequestOriginStatByInstanceIdRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetFullRequestOriginStatByInstanceIdRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline GetFullRequestOriginStatByInstanceIdRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetFullRequestOriginStatByInstanceIdRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Specifies whether to sort the results in ascending order. By default, the results are not sorted in ascending order.
    shared_ptr<bool> asc_ {};
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time. The interval between the start time and the end time cannot exceed 24 hours.
    // 
    // This parameter is required.
    shared_ptr<int64_t> end_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The node ID.
    // 
    // >  This parameter must be specified if the database instance is a PolarDB for MySQL cluster.
    shared_ptr<string> nodeId_ {};
    // The field by which the results to be returned are sorted. Default value: **count**. Valid values:
    // 
    // *   **count**: the number of executions.
    // *   **avgRt**: the average execution duration.
    // *   **rtRate**: the execution duration percentage.
    // *   **rowsExamined**: the total number of scanned rows.
    // *   **avgRowsExamined**: the average number of scanned rows.
    // *   **avgRowsReturned**: the average number of returned rows.
    shared_ptr<string> orderBy_ {};
    // The page number. Pages start from page 1. Default value: 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 20.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The role of the PolarDB-X 2.0 node. Valid values:
    // 
    // *   **polarx_cn**: compute node.
    // *   **polarx_en**: data node.
    shared_ptr<string> role_ {};
    // The type of the SQL statement. Valid values: **SELECT**, **INSERT**, **UPDATE**, **DELETE**, **MERGE**, **ALTER**, **CREATEINDEX**, **DROPINDEX**, **CREATE**, **DROP**, **SET**, **DESC**, **REPLACE**, **CALL**, **BEGIN**, **DESCRIBE**, **ROLLBACK**, **FLUSH**, **USE**, **SHOW**, **START**, **COMMIT**, and **RENAME**.
    // 
    // >  If the database instance is an ApsaraDB RDS for MySQL instance, a PolarDB for MySQL instance, or a PolarDB-X 2.0 instance, statistics can be collected based on the SQL statement type.
    shared_ptr<string> sqlType_ {};
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The start time must be within the storage duration of the SQL Explorer of the database instance, and can be up to 90 days earlier than the current time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> start_ {};
    // The ID of the Alibaba Cloud account that is used to create the database instance.
    // 
    // >  This parameter is optional. The system can automatically obtain the account ID based on the value of InstanceId when you call this operation.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
