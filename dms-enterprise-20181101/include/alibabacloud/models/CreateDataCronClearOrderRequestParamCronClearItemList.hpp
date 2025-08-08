// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATACRONCLEARORDERREQUESTPARAMCRONCLEARITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATACRONCLEARORDERREQUESTPARAMCRONCLEARITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataCronClearOrderRequestParamCronClearItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataCronClearOrderRequestParamCronClearItemList& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(FilterSQL, filterSQL_);
      DARABONBA_PTR_TO_JSON(RemainDays, remainDays_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataCronClearOrderRequestParamCronClearItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(FilterSQL, filterSQL_);
      DARABONBA_PTR_FROM_JSON(RemainDays, remainDays_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
    };
    CreateDataCronClearOrderRequestParamCronClearItemList() = default ;
    CreateDataCronClearOrderRequestParamCronClearItemList(const CreateDataCronClearOrderRequestParamCronClearItemList &) = default ;
    CreateDataCronClearOrderRequestParamCronClearItemList(CreateDataCronClearOrderRequestParamCronClearItemList &&) = default ;
    CreateDataCronClearOrderRequestParamCronClearItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataCronClearOrderRequestParamCronClearItemList() = default ;
    CreateDataCronClearOrderRequestParamCronClearItemList& operator=(const CreateDataCronClearOrderRequestParamCronClearItemList &) = default ;
    CreateDataCronClearOrderRequestParamCronClearItemList& operator=(CreateDataCronClearOrderRequestParamCronClearItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->filterSQL_ != nullptr && this->remainDays_ != nullptr && this->tableName_ != nullptr && this->timeUnit_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline CreateDataCronClearOrderRequestParamCronClearItemList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // filterSQL Field Functions 
    bool hasFilterSQL() const { return this->filterSQL_ != nullptr;};
    void deleteFilterSQL() { this->filterSQL_ = nullptr;};
    inline string filterSQL() const { DARABONBA_PTR_GET_DEFAULT(filterSQL_, "") };
    inline CreateDataCronClearOrderRequestParamCronClearItemList& setFilterSQL(string filterSQL) { DARABONBA_PTR_SET_VALUE(filterSQL_, filterSQL) };


    // remainDays Field Functions 
    bool hasRemainDays() const { return this->remainDays_ != nullptr;};
    void deleteRemainDays() { this->remainDays_ = nullptr;};
    inline int64_t remainDays() const { DARABONBA_PTR_GET_DEFAULT(remainDays_, 0L) };
    inline CreateDataCronClearOrderRequestParamCronClearItemList& setRemainDays(int64_t remainDays) { DARABONBA_PTR_SET_VALUE(remainDays_, remainDays) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateDataCronClearOrderRequestParamCronClearItemList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string timeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline CreateDataCronClearOrderRequestParamCronClearItemList& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    // The name of the field.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // The filter conditions.
    std::shared_ptr<string> filterSQL_ = nullptr;
    // The retention period of the historical data. Unit: days. For example, if you set the parameter to 7, DMS deletes the data that is retained for more than seven days.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> remainDays_ = nullptr;
    // The name of the table. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the name of the table.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The type of time granularity. If the ColumnName parameter specifies a field of a time type, this parameter is required. Valid values:
    // 
    // *   **MILLISECONDS**: milliseconds
    // *   **SECONDS**: seconds
    std::shared_ptr<string> timeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
