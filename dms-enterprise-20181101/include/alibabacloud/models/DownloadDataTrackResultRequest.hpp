// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADDATATRACKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADDATATRACKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class ColumnFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ColumnFilter& obj) { 
        DARABONBA_PTR_TO_JSON(BetweenEnd, betweenEnd_);
        DARABONBA_PTR_TO_JSON(BetweenStart, betweenStart_);
        DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
        DARABONBA_PTR_TO_JSON(InList, inList_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ColumnFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(BetweenEnd, betweenEnd_);
        DARABONBA_PTR_FROM_JSON(BetweenStart, betweenStart_);
        DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
        DARABONBA_PTR_FROM_JSON(InList, inList_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ColumnFilter() = default ;
      ColumnFilter(const ColumnFilter &) = default ;
      ColumnFilter(ColumnFilter &&) = default ;
      ColumnFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ColumnFilter() = default ;
      ColumnFilter& operator=(const ColumnFilter &) = default ;
      ColumnFilter& operator=(ColumnFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->betweenEnd_ == nullptr
        && this->betweenStart_ == nullptr && this->columnName_ == nullptr && this->inList_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
      // betweenEnd Field Functions 
      bool hasBetweenEnd() const { return this->betweenEnd_ != nullptr;};
      void deleteBetweenEnd() { this->betweenEnd_ = nullptr;};
      inline string getBetweenEnd() const { DARABONBA_PTR_GET_DEFAULT(betweenEnd_, "") };
      inline ColumnFilter& setBetweenEnd(string betweenEnd) { DARABONBA_PTR_SET_VALUE(betweenEnd_, betweenEnd) };


      // betweenStart Field Functions 
      bool hasBetweenStart() const { return this->betweenStart_ != nullptr;};
      void deleteBetweenStart() { this->betweenStart_ = nullptr;};
      inline string getBetweenStart() const { DARABONBA_PTR_GET_DEFAULT(betweenStart_, "") };
      inline ColumnFilter& setBetweenStart(string betweenStart) { DARABONBA_PTR_SET_VALUE(betweenStart_, betweenStart) };


      // columnName Field Functions 
      bool hasColumnName() const { return this->columnName_ != nullptr;};
      void deleteColumnName() { this->columnName_ = nullptr;};
      inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
      inline ColumnFilter& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


      // inList Field Functions 
      bool hasInList() const { return this->inList_ != nullptr;};
      void deleteInList() { this->inList_ = nullptr;};
      inline const vector<string> & getInList() const { DARABONBA_PTR_GET_CONST(inList_, vector<string>) };
      inline vector<string> getInList() { DARABONBA_PTR_GET(inList_, vector<string>) };
      inline ColumnFilter& setInList(const vector<string> & inList) { DARABONBA_PTR_SET_VALUE(inList_, inList) };
      inline ColumnFilter& setInList(vector<string> && inList) { DARABONBA_PTR_SET_RVALUE(inList_, inList) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline ColumnFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ColumnFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The end value of the range used in the filter condition. This parameter takes effect only when Operator is set to BETWEEN.
      shared_ptr<string> betweenEnd_ {};
      // The start value of the range used in the filter condition. This parameter takes effect only when Operator is set to BETWEEN.
      shared_ptr<string> betweenStart_ {};
      // The name of the column.
      shared_ptr<string> columnName_ {};
      // The IN list used in the filter condition.
      shared_ptr<vector<string>> inList_ {};
      // The type of the operator used to configure the filter condition. Valid values:
      // 
      // *   **EQUAL**: retrieves the column whose value is equal to the specified value.
      // *   **NOT_EQUAL**: retrieves the column whose value is not equal to the specified value.
      // *   **IN**: retrieves the column whose value is in the IN list.
      // *   **BETWEEN**: retrieves the column whose value is in the specified range.
      // *   **LESS**: retrieves the column whose value is less than the specified value.
      // *   **MORE**: retrieves the column whose value is greater than the specified value.
      // *   **NOT_IN**: retrieves the column whose value is not in the IN list.
      shared_ptr<string> operator_ {};
      // The value used in the filter condition.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->columnFilter_ == nullptr
        && this->eventIdList_ == nullptr && this->filterEndTime_ == nullptr && this->filterStartTime_ == nullptr && this->filterTableList_ == nullptr && this->filterTypeList_ == nullptr
        && this->orderId_ == nullptr && this->rollbackSQLType_ == nullptr && this->tid_ == nullptr; };
    // columnFilter Field Functions 
    bool hasColumnFilter() const { return this->columnFilter_ != nullptr;};
    void deleteColumnFilter() { this->columnFilter_ = nullptr;};
    inline const DownloadDataTrackResultRequest::ColumnFilter & getColumnFilter() const { DARABONBA_PTR_GET_CONST(columnFilter_, DownloadDataTrackResultRequest::ColumnFilter) };
    inline DownloadDataTrackResultRequest::ColumnFilter getColumnFilter() { DARABONBA_PTR_GET(columnFilter_, DownloadDataTrackResultRequest::ColumnFilter) };
    inline DownloadDataTrackResultRequest& setColumnFilter(const DownloadDataTrackResultRequest::ColumnFilter & columnFilter) { DARABONBA_PTR_SET_VALUE(columnFilter_, columnFilter) };
    inline DownloadDataTrackResultRequest& setColumnFilter(DownloadDataTrackResultRequest::ColumnFilter && columnFilter) { DARABONBA_PTR_SET_RVALUE(columnFilter_, columnFilter) };


    // eventIdList Field Functions 
    bool hasEventIdList() const { return this->eventIdList_ != nullptr;};
    void deleteEventIdList() { this->eventIdList_ = nullptr;};
    inline const vector<int64_t> & getEventIdList() const { DARABONBA_PTR_GET_CONST(eventIdList_, vector<int64_t>) };
    inline vector<int64_t> getEventIdList() { DARABONBA_PTR_GET(eventIdList_, vector<int64_t>) };
    inline DownloadDataTrackResultRequest& setEventIdList(const vector<int64_t> & eventIdList) { DARABONBA_PTR_SET_VALUE(eventIdList_, eventIdList) };
    inline DownloadDataTrackResultRequest& setEventIdList(vector<int64_t> && eventIdList) { DARABONBA_PTR_SET_RVALUE(eventIdList_, eventIdList) };


    // filterEndTime Field Functions 
    bool hasFilterEndTime() const { return this->filterEndTime_ != nullptr;};
    void deleteFilterEndTime() { this->filterEndTime_ = nullptr;};
    inline string getFilterEndTime() const { DARABONBA_PTR_GET_DEFAULT(filterEndTime_, "") };
    inline DownloadDataTrackResultRequest& setFilterEndTime(string filterEndTime) { DARABONBA_PTR_SET_VALUE(filterEndTime_, filterEndTime) };


    // filterStartTime Field Functions 
    bool hasFilterStartTime() const { return this->filterStartTime_ != nullptr;};
    void deleteFilterStartTime() { this->filterStartTime_ = nullptr;};
    inline string getFilterStartTime() const { DARABONBA_PTR_GET_DEFAULT(filterStartTime_, "") };
    inline DownloadDataTrackResultRequest& setFilterStartTime(string filterStartTime) { DARABONBA_PTR_SET_VALUE(filterStartTime_, filterStartTime) };


    // filterTableList Field Functions 
    bool hasFilterTableList() const { return this->filterTableList_ != nullptr;};
    void deleteFilterTableList() { this->filterTableList_ = nullptr;};
    inline const vector<string> & getFilterTableList() const { DARABONBA_PTR_GET_CONST(filterTableList_, vector<string>) };
    inline vector<string> getFilterTableList() { DARABONBA_PTR_GET(filterTableList_, vector<string>) };
    inline DownloadDataTrackResultRequest& setFilterTableList(const vector<string> & filterTableList) { DARABONBA_PTR_SET_VALUE(filterTableList_, filterTableList) };
    inline DownloadDataTrackResultRequest& setFilterTableList(vector<string> && filterTableList) { DARABONBA_PTR_SET_RVALUE(filterTableList_, filterTableList) };


    // filterTypeList Field Functions 
    bool hasFilterTypeList() const { return this->filterTypeList_ != nullptr;};
    void deleteFilterTypeList() { this->filterTypeList_ = nullptr;};
    inline const vector<string> & getFilterTypeList() const { DARABONBA_PTR_GET_CONST(filterTypeList_, vector<string>) };
    inline vector<string> getFilterTypeList() { DARABONBA_PTR_GET(filterTypeList_, vector<string>) };
    inline DownloadDataTrackResultRequest& setFilterTypeList(const vector<string> & filterTypeList) { DARABONBA_PTR_SET_VALUE(filterTypeList_, filterTypeList) };
    inline DownloadDataTrackResultRequest& setFilterTypeList(vector<string> && filterTypeList) { DARABONBA_PTR_SET_RVALUE(filterTypeList_, filterTypeList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DownloadDataTrackResultRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // rollbackSQLType Field Functions 
    bool hasRollbackSQLType() const { return this->rollbackSQLType_ != nullptr;};
    void deleteRollbackSQLType() { this->rollbackSQLType_ = nullptr;};
    inline string getRollbackSQLType() const { DARABONBA_PTR_GET_DEFAULT(rollbackSQLType_, "") };
    inline DownloadDataTrackResultRequest& setRollbackSQLType(string rollbackSQLType) { DARABONBA_PTR_SET_VALUE(rollbackSQLType_, rollbackSQLType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DownloadDataTrackResultRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The condition to filter columns.
    shared_ptr<DownloadDataTrackResultRequest::ColumnFilter> columnFilter_ {};
    // The IDs of the events.
    shared_ptr<vector<int64_t>> eventIdList_ {};
    // The end time of the time range in which you want to track data operations. The time must be specified in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> filterEndTime_ {};
    // The start time of the time range in which you want to track data operations. The time must be specified in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> filterStartTime_ {};
    // The names of the tables for which you want to track data operations.
    shared_ptr<vector<string>> filterTableList_ {};
    // The types of data operations that you want to track.
    shared_ptr<vector<string>> filterTypeList_ {};
    // The ID of the ticket. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to obtain the ticket ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The type of the SQL statement.
    // 
    // *   **REVERSE**: undoes or rolls back an executed SQL statement, which is equivalent to the UNDO SQL statement.
    // *   **FORWARD**: redoes or re-executes an SQL statement that failed to be executed, which is equivalent to the REDO SQL statement.
    // 
    // This parameter is required.
    shared_ptr<string> rollbackSQLType_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
