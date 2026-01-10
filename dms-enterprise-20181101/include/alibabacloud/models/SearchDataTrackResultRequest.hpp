// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTREQUEST_HPP_
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
  class SearchDataTrackResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDataTrackResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnFilter, columnFilter_);
      DARABONBA_PTR_TO_JSON(FilterEndTime, filterEndTime_);
      DARABONBA_PTR_TO_JSON(FilterStartTime, filterStartTime_);
      DARABONBA_PTR_TO_JSON(FilterTableList, filterTableList_);
      DARABONBA_PTR_TO_JSON(FilterTypeList, filterTypeList_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDataTrackResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnFilter, columnFilter_);
      DARABONBA_PTR_FROM_JSON(FilterEndTime, filterEndTime_);
      DARABONBA_PTR_FROM_JSON(FilterStartTime, filterStartTime_);
      DARABONBA_PTR_FROM_JSON(FilterTableList, filterTableList_);
      DARABONBA_PTR_FROM_JSON(FilterTypeList, filterTypeList_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    SearchDataTrackResultRequest() = default ;
    SearchDataTrackResultRequest(const SearchDataTrackResultRequest &) = default ;
    SearchDataTrackResultRequest(SearchDataTrackResultRequest &&) = default ;
    SearchDataTrackResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDataTrackResultRequest() = default ;
    SearchDataTrackResultRequest& operator=(const SearchDataTrackResultRequest &) = default ;
    SearchDataTrackResultRequest& operator=(SearchDataTrackResultRequest &&) = default ;
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
      // The IN list used in the filter condition. This parameter takes effect only when Operator is set to IN or NOT_IN.
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
        && this->filterEndTime_ == nullptr && this->filterStartTime_ == nullptr && this->filterTableList_ == nullptr && this->filterTypeList_ == nullptr && this->orderId_ == nullptr
        && this->tid_ == nullptr; };
    // columnFilter Field Functions 
    bool hasColumnFilter() const { return this->columnFilter_ != nullptr;};
    void deleteColumnFilter() { this->columnFilter_ = nullptr;};
    inline const SearchDataTrackResultRequest::ColumnFilter & getColumnFilter() const { DARABONBA_PTR_GET_CONST(columnFilter_, SearchDataTrackResultRequest::ColumnFilter) };
    inline SearchDataTrackResultRequest::ColumnFilter getColumnFilter() { DARABONBA_PTR_GET(columnFilter_, SearchDataTrackResultRequest::ColumnFilter) };
    inline SearchDataTrackResultRequest& setColumnFilter(const SearchDataTrackResultRequest::ColumnFilter & columnFilter) { DARABONBA_PTR_SET_VALUE(columnFilter_, columnFilter) };
    inline SearchDataTrackResultRequest& setColumnFilter(SearchDataTrackResultRequest::ColumnFilter && columnFilter) { DARABONBA_PTR_SET_RVALUE(columnFilter_, columnFilter) };


    // filterEndTime Field Functions 
    bool hasFilterEndTime() const { return this->filterEndTime_ != nullptr;};
    void deleteFilterEndTime() { this->filterEndTime_ = nullptr;};
    inline string getFilterEndTime() const { DARABONBA_PTR_GET_DEFAULT(filterEndTime_, "") };
    inline SearchDataTrackResultRequest& setFilterEndTime(string filterEndTime) { DARABONBA_PTR_SET_VALUE(filterEndTime_, filterEndTime) };


    // filterStartTime Field Functions 
    bool hasFilterStartTime() const { return this->filterStartTime_ != nullptr;};
    void deleteFilterStartTime() { this->filterStartTime_ = nullptr;};
    inline string getFilterStartTime() const { DARABONBA_PTR_GET_DEFAULT(filterStartTime_, "") };
    inline SearchDataTrackResultRequest& setFilterStartTime(string filterStartTime) { DARABONBA_PTR_SET_VALUE(filterStartTime_, filterStartTime) };


    // filterTableList Field Functions 
    bool hasFilterTableList() const { return this->filterTableList_ != nullptr;};
    void deleteFilterTableList() { this->filterTableList_ = nullptr;};
    inline const vector<string> & getFilterTableList() const { DARABONBA_PTR_GET_CONST(filterTableList_, vector<string>) };
    inline vector<string> getFilterTableList() { DARABONBA_PTR_GET(filterTableList_, vector<string>) };
    inline SearchDataTrackResultRequest& setFilterTableList(const vector<string> & filterTableList) { DARABONBA_PTR_SET_VALUE(filterTableList_, filterTableList) };
    inline SearchDataTrackResultRequest& setFilterTableList(vector<string> && filterTableList) { DARABONBA_PTR_SET_RVALUE(filterTableList_, filterTableList) };


    // filterTypeList Field Functions 
    bool hasFilterTypeList() const { return this->filterTypeList_ != nullptr;};
    void deleteFilterTypeList() { this->filterTypeList_ = nullptr;};
    inline const vector<string> & getFilterTypeList() const { DARABONBA_PTR_GET_CONST(filterTypeList_, vector<string>) };
    inline vector<string> getFilterTypeList() { DARABONBA_PTR_GET(filterTypeList_, vector<string>) };
    inline SearchDataTrackResultRequest& setFilterTypeList(const vector<string> & filterTypeList) { DARABONBA_PTR_SET_VALUE(filterTypeList_, filterTypeList) };
    inline SearchDataTrackResultRequest& setFilterTypeList(vector<string> && filterTypeList) { DARABONBA_PTR_SET_RVALUE(filterTypeList_, filterTypeList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline SearchDataTrackResultRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline SearchDataTrackResultRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The condition to filter columns.
    shared_ptr<SearchDataTrackResultRequest::ColumnFilter> columnFilter_ {};
    // The end time of the time range in which you want to track data operations. The time must be in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> filterEndTime_ {};
    // The start time of the time range in which you want to track data operations. The time must be in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> filterStartTime_ {};
    // The names of the tables for which you want to track data operations.
    shared_ptr<vector<string>> filterTableList_ {};
    // The types of data operations that you want to track.
    shared_ptr<vector<string>> filterTypeList_ {};
    // The ID of the ticket. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to query the ticket ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
