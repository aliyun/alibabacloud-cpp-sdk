// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADDATATRACKRESULTREQUESTCOLUMNFILTER_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADDATATRACKRESULTREQUESTCOLUMNFILTER_HPP_
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
  class DownloadDataTrackResultRequestColumnFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadDataTrackResultRequestColumnFilter& obj) { 
      DARABONBA_PTR_TO_JSON(BetweenEnd, betweenEnd_);
      DARABONBA_PTR_TO_JSON(BetweenStart, betweenStart_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(InList, inList_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadDataTrackResultRequestColumnFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(BetweenEnd, betweenEnd_);
      DARABONBA_PTR_FROM_JSON(BetweenStart, betweenStart_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(InList, inList_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DownloadDataTrackResultRequestColumnFilter() = default ;
    DownloadDataTrackResultRequestColumnFilter(const DownloadDataTrackResultRequestColumnFilter &) = default ;
    DownloadDataTrackResultRequestColumnFilter(DownloadDataTrackResultRequestColumnFilter &&) = default ;
    DownloadDataTrackResultRequestColumnFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadDataTrackResultRequestColumnFilter() = default ;
    DownloadDataTrackResultRequestColumnFilter& operator=(const DownloadDataTrackResultRequestColumnFilter &) = default ;
    DownloadDataTrackResultRequestColumnFilter& operator=(DownloadDataTrackResultRequestColumnFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->betweenEnd_ == nullptr
        && return this->betweenStart_ == nullptr && return this->columnName_ == nullptr && return this->inList_ == nullptr && return this->operator_ == nullptr && return this->value_ == nullptr; };
    // betweenEnd Field Functions 
    bool hasBetweenEnd() const { return this->betweenEnd_ != nullptr;};
    void deleteBetweenEnd() { this->betweenEnd_ = nullptr;};
    inline string betweenEnd() const { DARABONBA_PTR_GET_DEFAULT(betweenEnd_, "") };
    inline DownloadDataTrackResultRequestColumnFilter& setBetweenEnd(string betweenEnd) { DARABONBA_PTR_SET_VALUE(betweenEnd_, betweenEnd) };


    // betweenStart Field Functions 
    bool hasBetweenStart() const { return this->betweenStart_ != nullptr;};
    void deleteBetweenStart() { this->betweenStart_ = nullptr;};
    inline string betweenStart() const { DARABONBA_PTR_GET_DEFAULT(betweenStart_, "") };
    inline DownloadDataTrackResultRequestColumnFilter& setBetweenStart(string betweenStart) { DARABONBA_PTR_SET_VALUE(betweenStart_, betweenStart) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline DownloadDataTrackResultRequestColumnFilter& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // inList Field Functions 
    bool hasInList() const { return this->inList_ != nullptr;};
    void deleteInList() { this->inList_ = nullptr;};
    inline const vector<string> & inList() const { DARABONBA_PTR_GET_CONST(inList_, vector<string>) };
    inline vector<string> inList() { DARABONBA_PTR_GET(inList_, vector<string>) };
    inline DownloadDataTrackResultRequestColumnFilter& setInList(const vector<string> & inList) { DARABONBA_PTR_SET_VALUE(inList_, inList) };
    inline DownloadDataTrackResultRequestColumnFilter& setInList(vector<string> && inList) { DARABONBA_PTR_SET_RVALUE(inList_, inList) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DownloadDataTrackResultRequestColumnFilter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DownloadDataTrackResultRequestColumnFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The end value of the range used in the filter condition. This parameter takes effect only when Operator is set to BETWEEN.
    std::shared_ptr<string> betweenEnd_ = nullptr;
    // The start value of the range used in the filter condition. This parameter takes effect only when Operator is set to BETWEEN.
    std::shared_ptr<string> betweenStart_ = nullptr;
    // The name of the column.
    std::shared_ptr<string> columnName_ = nullptr;
    // The IN list used in the filter condition.
    std::shared_ptr<vector<string>> inList_ = nullptr;
    // The type of the operator used to configure the filter condition. Valid values:
    // 
    // *   **EQUAL**: retrieves the column whose value is equal to the specified value.
    // *   **NOT_EQUAL**: retrieves the column whose value is not equal to the specified value.
    // *   **IN**: retrieves the column whose value is in the IN list.
    // *   **BETWEEN**: retrieves the column whose value is in the specified range.
    // *   **LESS**: retrieves the column whose value is less than the specified value.
    // *   **MORE**: retrieves the column whose value is greater than the specified value.
    // *   **NOT_IN**: retrieves the column whose value is not in the IN list.
    std::shared_ptr<string> operator_ = nullptr;
    // The value used in the filter condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
