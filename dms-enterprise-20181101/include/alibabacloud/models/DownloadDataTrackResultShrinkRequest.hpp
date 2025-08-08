// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADDATATRACKRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADDATATRACKRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DownloadDataTrackResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadDataTrackResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnFilter, columnFilterShrink_);
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdListShrink_);
      DARABONBA_PTR_TO_JSON(FilterEndTime, filterEndTime_);
      DARABONBA_PTR_TO_JSON(FilterStartTime, filterStartTime_);
      DARABONBA_PTR_TO_JSON(FilterTableList, filterTableListShrink_);
      DARABONBA_PTR_TO_JSON(FilterTypeList, filterTypeListShrink_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RollbackSQLType, rollbackSQLType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadDataTrackResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnFilter, columnFilterShrink_);
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdListShrink_);
      DARABONBA_PTR_FROM_JSON(FilterEndTime, filterEndTime_);
      DARABONBA_PTR_FROM_JSON(FilterStartTime, filterStartTime_);
      DARABONBA_PTR_FROM_JSON(FilterTableList, filterTableListShrink_);
      DARABONBA_PTR_FROM_JSON(FilterTypeList, filterTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RollbackSQLType, rollbackSQLType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DownloadDataTrackResultShrinkRequest() = default ;
    DownloadDataTrackResultShrinkRequest(const DownloadDataTrackResultShrinkRequest &) = default ;
    DownloadDataTrackResultShrinkRequest(DownloadDataTrackResultShrinkRequest &&) = default ;
    DownloadDataTrackResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadDataTrackResultShrinkRequest() = default ;
    DownloadDataTrackResultShrinkRequest& operator=(const DownloadDataTrackResultShrinkRequest &) = default ;
    DownloadDataTrackResultShrinkRequest& operator=(DownloadDataTrackResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnFilterShrink_ != nullptr
        && this->eventIdListShrink_ != nullptr && this->filterEndTime_ != nullptr && this->filterStartTime_ != nullptr && this->filterTableListShrink_ != nullptr && this->filterTypeListShrink_ != nullptr
        && this->orderId_ != nullptr && this->rollbackSQLType_ != nullptr && this->tid_ != nullptr; };
    // columnFilterShrink Field Functions 
    bool hasColumnFilterShrink() const { return this->columnFilterShrink_ != nullptr;};
    void deleteColumnFilterShrink() { this->columnFilterShrink_ = nullptr;};
    inline string columnFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(columnFilterShrink_, "") };
    inline DownloadDataTrackResultShrinkRequest& setColumnFilterShrink(string columnFilterShrink) { DARABONBA_PTR_SET_VALUE(columnFilterShrink_, columnFilterShrink) };


    // eventIdListShrink Field Functions 
    bool hasEventIdListShrink() const { return this->eventIdListShrink_ != nullptr;};
    void deleteEventIdListShrink() { this->eventIdListShrink_ = nullptr;};
    inline string eventIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(eventIdListShrink_, "") };
    inline DownloadDataTrackResultShrinkRequest& setEventIdListShrink(string eventIdListShrink) { DARABONBA_PTR_SET_VALUE(eventIdListShrink_, eventIdListShrink) };


    // filterEndTime Field Functions 
    bool hasFilterEndTime() const { return this->filterEndTime_ != nullptr;};
    void deleteFilterEndTime() { this->filterEndTime_ = nullptr;};
    inline string filterEndTime() const { DARABONBA_PTR_GET_DEFAULT(filterEndTime_, "") };
    inline DownloadDataTrackResultShrinkRequest& setFilterEndTime(string filterEndTime) { DARABONBA_PTR_SET_VALUE(filterEndTime_, filterEndTime) };


    // filterStartTime Field Functions 
    bool hasFilterStartTime() const { return this->filterStartTime_ != nullptr;};
    void deleteFilterStartTime() { this->filterStartTime_ = nullptr;};
    inline string filterStartTime() const { DARABONBA_PTR_GET_DEFAULT(filterStartTime_, "") };
    inline DownloadDataTrackResultShrinkRequest& setFilterStartTime(string filterStartTime) { DARABONBA_PTR_SET_VALUE(filterStartTime_, filterStartTime) };


    // filterTableListShrink Field Functions 
    bool hasFilterTableListShrink() const { return this->filterTableListShrink_ != nullptr;};
    void deleteFilterTableListShrink() { this->filterTableListShrink_ = nullptr;};
    inline string filterTableListShrink() const { DARABONBA_PTR_GET_DEFAULT(filterTableListShrink_, "") };
    inline DownloadDataTrackResultShrinkRequest& setFilterTableListShrink(string filterTableListShrink) { DARABONBA_PTR_SET_VALUE(filterTableListShrink_, filterTableListShrink) };


    // filterTypeListShrink Field Functions 
    bool hasFilterTypeListShrink() const { return this->filterTypeListShrink_ != nullptr;};
    void deleteFilterTypeListShrink() { this->filterTypeListShrink_ = nullptr;};
    inline string filterTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(filterTypeListShrink_, "") };
    inline DownloadDataTrackResultShrinkRequest& setFilterTypeListShrink(string filterTypeListShrink) { DARABONBA_PTR_SET_VALUE(filterTypeListShrink_, filterTypeListShrink) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DownloadDataTrackResultShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // rollbackSQLType Field Functions 
    bool hasRollbackSQLType() const { return this->rollbackSQLType_ != nullptr;};
    void deleteRollbackSQLType() { this->rollbackSQLType_ = nullptr;};
    inline string rollbackSQLType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQLType_, "") };
    inline DownloadDataTrackResultShrinkRequest& setRollbackSQLType(string rollbackSQLType) { DARABONBA_PTR_SET_VALUE(rollbackSQLType_, rollbackSQLType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DownloadDataTrackResultShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The condition to filter columns.
    std::shared_ptr<string> columnFilterShrink_ = nullptr;
    // The IDs of the events.
    std::shared_ptr<string> eventIdListShrink_ = nullptr;
    // The end time of the time range in which you want to track data operations. The time must be specified in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> filterEndTime_ = nullptr;
    // The start time of the time range in which you want to track data operations. The time must be specified in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> filterStartTime_ = nullptr;
    // The names of the tables for which you want to track data operations.
    std::shared_ptr<string> filterTableListShrink_ = nullptr;
    // The types of data operations that you want to track.
    std::shared_ptr<string> filterTypeListShrink_ = nullptr;
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
