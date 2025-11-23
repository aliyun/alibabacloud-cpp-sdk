// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADDATATRACKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADDATATRACKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DownloadDataTrackResultRequestColumnFilter.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DownloadDataTrackResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadDataTrackResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnFilter, columnFilter_);
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_TO_JSON(FilterEndTime, filterEndTime_);
      DARABONBA_PTR_TO_JSON(FilterStartTime, filterStartTime_);
      DARABONBA_PTR_TO_JSON(FilterTableList, filterTableList_);
      DARABONBA_PTR_TO_JSON(FilterTypeList, filterTypeList_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RollbackSQLType, rollbackSQLType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadDataTrackResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnFilter, columnFilter_);
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_FROM_JSON(FilterEndTime, filterEndTime_);
      DARABONBA_PTR_FROM_JSON(FilterStartTime, filterStartTime_);
      DARABONBA_PTR_FROM_JSON(FilterTableList, filterTableList_);
      DARABONBA_PTR_FROM_JSON(FilterTypeList, filterTypeList_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RollbackSQLType, rollbackSQLType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DownloadDataTrackResultRequest() = default ;
    DownloadDataTrackResultRequest(const DownloadDataTrackResultRequest &) = default ;
    DownloadDataTrackResultRequest(DownloadDataTrackResultRequest &&) = default ;
    DownloadDataTrackResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadDataTrackResultRequest() = default ;
    DownloadDataTrackResultRequest& operator=(const DownloadDataTrackResultRequest &) = default ;
    DownloadDataTrackResultRequest& operator=(DownloadDataTrackResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnFilter_ == nullptr
        && return this->eventIdList_ == nullptr && return this->filterEndTime_ == nullptr && return this->filterStartTime_ == nullptr && return this->filterTableList_ == nullptr && return this->filterTypeList_ == nullptr
        && return this->orderId_ == nullptr && return this->rollbackSQLType_ == nullptr && return this->tid_ == nullptr; };
    // columnFilter Field Functions 
    bool hasColumnFilter() const { return this->columnFilter_ != nullptr;};
    void deleteColumnFilter() { this->columnFilter_ = nullptr;};
    inline const DownloadDataTrackResultRequestColumnFilter & columnFilter() const { DARABONBA_PTR_GET_CONST(columnFilter_, DownloadDataTrackResultRequestColumnFilter) };
    inline DownloadDataTrackResultRequestColumnFilter columnFilter() { DARABONBA_PTR_GET(columnFilter_, DownloadDataTrackResultRequestColumnFilter) };
    inline DownloadDataTrackResultRequest& setColumnFilter(const DownloadDataTrackResultRequestColumnFilter & columnFilter) { DARABONBA_PTR_SET_VALUE(columnFilter_, columnFilter) };
    inline DownloadDataTrackResultRequest& setColumnFilter(DownloadDataTrackResultRequestColumnFilter && columnFilter) { DARABONBA_PTR_SET_RVALUE(columnFilter_, columnFilter) };


    // eventIdList Field Functions 
    bool hasEventIdList() const { return this->eventIdList_ != nullptr;};
    void deleteEventIdList() { this->eventIdList_ = nullptr;};
    inline const vector<int64_t> & eventIdList() const { DARABONBA_PTR_GET_CONST(eventIdList_, vector<int64_t>) };
    inline vector<int64_t> eventIdList() { DARABONBA_PTR_GET(eventIdList_, vector<int64_t>) };
    inline DownloadDataTrackResultRequest& setEventIdList(const vector<int64_t> & eventIdList) { DARABONBA_PTR_SET_VALUE(eventIdList_, eventIdList) };
    inline DownloadDataTrackResultRequest& setEventIdList(vector<int64_t> && eventIdList) { DARABONBA_PTR_SET_RVALUE(eventIdList_, eventIdList) };


    // filterEndTime Field Functions 
    bool hasFilterEndTime() const { return this->filterEndTime_ != nullptr;};
    void deleteFilterEndTime() { this->filterEndTime_ = nullptr;};
    inline string filterEndTime() const { DARABONBA_PTR_GET_DEFAULT(filterEndTime_, "") };
    inline DownloadDataTrackResultRequest& setFilterEndTime(string filterEndTime) { DARABONBA_PTR_SET_VALUE(filterEndTime_, filterEndTime) };


    // filterStartTime Field Functions 
    bool hasFilterStartTime() const { return this->filterStartTime_ != nullptr;};
    void deleteFilterStartTime() { this->filterStartTime_ = nullptr;};
    inline string filterStartTime() const { DARABONBA_PTR_GET_DEFAULT(filterStartTime_, "") };
    inline DownloadDataTrackResultRequest& setFilterStartTime(string filterStartTime) { DARABONBA_PTR_SET_VALUE(filterStartTime_, filterStartTime) };


    // filterTableList Field Functions 
    bool hasFilterTableList() const { return this->filterTableList_ != nullptr;};
    void deleteFilterTableList() { this->filterTableList_ = nullptr;};
    inline const vector<string> & filterTableList() const { DARABONBA_PTR_GET_CONST(filterTableList_, vector<string>) };
    inline vector<string> filterTableList() { DARABONBA_PTR_GET(filterTableList_, vector<string>) };
    inline DownloadDataTrackResultRequest& setFilterTableList(const vector<string> & filterTableList) { DARABONBA_PTR_SET_VALUE(filterTableList_, filterTableList) };
    inline DownloadDataTrackResultRequest& setFilterTableList(vector<string> && filterTableList) { DARABONBA_PTR_SET_RVALUE(filterTableList_, filterTableList) };


    // filterTypeList Field Functions 
    bool hasFilterTypeList() const { return this->filterTypeList_ != nullptr;};
    void deleteFilterTypeList() { this->filterTypeList_ = nullptr;};
    inline const vector<string> & filterTypeList() const { DARABONBA_PTR_GET_CONST(filterTypeList_, vector<string>) };
    inline vector<string> filterTypeList() { DARABONBA_PTR_GET(filterTypeList_, vector<string>) };
    inline DownloadDataTrackResultRequest& setFilterTypeList(const vector<string> & filterTypeList) { DARABONBA_PTR_SET_VALUE(filterTypeList_, filterTypeList) };
    inline DownloadDataTrackResultRequest& setFilterTypeList(vector<string> && filterTypeList) { DARABONBA_PTR_SET_RVALUE(filterTypeList_, filterTypeList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DownloadDataTrackResultRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // rollbackSQLType Field Functions 
    bool hasRollbackSQLType() const { return this->rollbackSQLType_ != nullptr;};
    void deleteRollbackSQLType() { this->rollbackSQLType_ = nullptr;};
    inline string rollbackSQLType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQLType_, "") };
    inline DownloadDataTrackResultRequest& setRollbackSQLType(string rollbackSQLType) { DARABONBA_PTR_SET_VALUE(rollbackSQLType_, rollbackSQLType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DownloadDataTrackResultRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The condition to filter columns.
    std::shared_ptr<DownloadDataTrackResultRequestColumnFilter> columnFilter_ = nullptr;
    // The IDs of the events.
    std::shared_ptr<vector<int64_t>> eventIdList_ = nullptr;
    // The end time of the time range in which you want to track data operations. The time must be specified in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> filterEndTime_ = nullptr;
    // The start time of the time range in which you want to track data operations. The time must be specified in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> filterStartTime_ = nullptr;
    // The names of the tables for which you want to track data operations.
    std::shared_ptr<vector<string>> filterTableList_ = nullptr;
    // The types of data operations that you want to track.
    std::shared_ptr<vector<string>> filterTypeList_ = nullptr;
    // The ID of the ticket. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to obtain the ticket ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The type of the SQL statement.
    // 
    // *   **REVERSE**: undoes or rolls back an executed SQL statement, which is equivalent to the UNDO SQL statement.
    // *   **FORWARD**: redoes or re-executes an SQL statement that failed to be executed, which is equivalent to the REDO SQL statement.
    // 
    // This parameter is required.
    std::shared_ptr<string> rollbackSQLType_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
