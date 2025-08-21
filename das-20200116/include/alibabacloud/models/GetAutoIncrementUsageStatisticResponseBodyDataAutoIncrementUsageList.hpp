// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOINCREMENTUSAGESTATISTICRESPONSEBODYDATAAUTOINCREMENTUSAGELIST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOINCREMENTUSAGESTATISTICRESPONSEBODYDATAAUTOINCREMENTUSAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIncrementCurrentValue, autoIncrementCurrentValue_);
      DARABONBA_PTR_TO_JSON(AutoIncrementRatio, autoIncrementRatio_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(MaximumValue, maximumValue_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIncrementCurrentValue, autoIncrementCurrentValue_);
      DARABONBA_PTR_FROM_JSON(AutoIncrementRatio, autoIncrementRatio_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(MaximumValue, maximumValue_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList() = default ;
    GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList(const GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList &) = default ;
    GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList(GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList &&) = default ;
    GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList() = default ;
    GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& operator=(const GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList &) = default ;
    GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& operator=(GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoIncrementCurrentValue_ != nullptr
        && this->autoIncrementRatio_ != nullptr && this->columnName_ != nullptr && this->dbName_ != nullptr && this->maximumValue_ != nullptr && this->tableName_ != nullptr; };
    // autoIncrementCurrentValue Field Functions 
    bool hasAutoIncrementCurrentValue() const { return this->autoIncrementCurrentValue_ != nullptr;};
    void deleteAutoIncrementCurrentValue() { this->autoIncrementCurrentValue_ = nullptr;};
    inline int64_t autoIncrementCurrentValue() const { DARABONBA_PTR_GET_DEFAULT(autoIncrementCurrentValue_, 0L) };
    inline GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& setAutoIncrementCurrentValue(int64_t autoIncrementCurrentValue) { DARABONBA_PTR_SET_VALUE(autoIncrementCurrentValue_, autoIncrementCurrentValue) };


    // autoIncrementRatio Field Functions 
    bool hasAutoIncrementRatio() const { return this->autoIncrementRatio_ != nullptr;};
    void deleteAutoIncrementRatio() { this->autoIncrementRatio_ = nullptr;};
    inline double autoIncrementRatio() const { DARABONBA_PTR_GET_DEFAULT(autoIncrementRatio_, 0.0) };
    inline GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& setAutoIncrementRatio(double autoIncrementRatio) { DARABONBA_PTR_SET_VALUE(autoIncrementRatio_, autoIncrementRatio) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // maximumValue Field Functions 
    bool hasMaximumValue() const { return this->maximumValue_ != nullptr;};
    void deleteMaximumValue() { this->maximumValue_ = nullptr;};
    inline int64_t maximumValue() const { DARABONBA_PTR_GET_DEFAULT(maximumValue_, 0L) };
    inline GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& setMaximumValue(int64_t maximumValue) { DARABONBA_PTR_SET_VALUE(maximumValue_, maximumValue) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetAutoIncrementUsageStatisticResponseBodyDataAutoIncrementUsageList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The latest auto-increment ID.
    std::shared_ptr<int64_t> autoIncrementCurrentValue_ = nullptr;
    // The usage ratio of auto-increment IDs.
    std::shared_ptr<double> autoIncrementRatio_ = nullptr;
    // The column name.
    std::shared_ptr<string> columnName_ = nullptr;
    // The database name.
    std::shared_ptr<string> dbName_ = nullptr;
    // The maximum auto-increment ID that is supported by the current data type.
    std::shared_ptr<int64_t> maximumValue_ = nullptr;
    // The table name.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
