// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNSTATISTICSOBJ_HPP_
#define ALIBABACLOUD_MODELS_COLUMNSTATISTICSOBJ_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ColumnStatisticsObjColumnStatisticsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ColumnStatisticsObj : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnStatisticsObj& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnStatisticsData, columnStatisticsData_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnStatisticsObj& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnStatisticsData, columnStatisticsData_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
    };
    ColumnStatisticsObj() = default ;
    ColumnStatisticsObj(const ColumnStatisticsObj &) = default ;
    ColumnStatisticsObj(ColumnStatisticsObj &&) = default ;
    ColumnStatisticsObj(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnStatisticsObj() = default ;
    ColumnStatisticsObj& operator=(const ColumnStatisticsObj &) = default ;
    ColumnStatisticsObj& operator=(ColumnStatisticsObj &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && return this->columnStatisticsData_ == nullptr && return this->columnType_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ColumnStatisticsObj& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnStatisticsData Field Functions 
    bool hasColumnStatisticsData() const { return this->columnStatisticsData_ != nullptr;};
    void deleteColumnStatisticsData() { this->columnStatisticsData_ = nullptr;};
    inline const ColumnStatisticsObjColumnStatisticsData & columnStatisticsData() const { DARABONBA_PTR_GET_CONST(columnStatisticsData_, ColumnStatisticsObjColumnStatisticsData) };
    inline ColumnStatisticsObjColumnStatisticsData columnStatisticsData() { DARABONBA_PTR_GET(columnStatisticsData_, ColumnStatisticsObjColumnStatisticsData) };
    inline ColumnStatisticsObj& setColumnStatisticsData(const ColumnStatisticsObjColumnStatisticsData & columnStatisticsData) { DARABONBA_PTR_SET_VALUE(columnStatisticsData_, columnStatisticsData) };
    inline ColumnStatisticsObj& setColumnStatisticsData(ColumnStatisticsObjColumnStatisticsData && columnStatisticsData) { DARABONBA_PTR_SET_RVALUE(columnStatisticsData_, columnStatisticsData) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline ColumnStatisticsObj& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


  protected:
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<ColumnStatisticsObjColumnStatisticsData> columnStatisticsData_ = nullptr;
    std::shared_ptr<string> columnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
