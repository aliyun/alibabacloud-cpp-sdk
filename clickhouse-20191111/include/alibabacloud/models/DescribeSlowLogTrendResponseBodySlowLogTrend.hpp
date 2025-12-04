// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYSLOWLOGTREND_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODYSLOWLOGTREND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowLogTrendResponseBodySlowLogTrendData.hpp>
#include <alibabacloud/models/DescribeSlowLogTrendResponseBodySlowLogTrendStatistics.hpp>
#include <alibabacloud/models/DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogTrendResponseBodySlowLogTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBodySlowLogTrend& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBodySlowLogTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
    };
    DescribeSlowLogTrendResponseBodySlowLogTrend() = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrend(const DescribeSlowLogTrendResponseBodySlowLogTrend &) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrend(DescribeSlowLogTrendResponseBodySlowLogTrend &&) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogTrendResponseBodySlowLogTrend() = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrend& operator=(const DescribeSlowLogTrendResponseBodySlowLogTrend &) = default ;
    DescribeSlowLogTrendResponseBodySlowLogTrend& operator=(DescribeSlowLogTrendResponseBodySlowLogTrend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->rows_ == nullptr && return this->rowsBeforeLimitAtLeast_ == nullptr && return this->statistics_ == nullptr && return this->tableSchema_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeSlowLogTrendResponseBodySlowLogTrendData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeSlowLogTrendResponseBodySlowLogTrendData) };
    inline Models::DescribeSlowLogTrendResponseBodySlowLogTrendData data() { DARABONBA_PTR_GET(data_, Models::DescribeSlowLogTrendResponseBodySlowLogTrendData) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend& setData(const Models::DescribeSlowLogTrendResponseBodySlowLogTrendData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend& setData(Models::DescribeSlowLogTrendResponseBodySlowLogTrendData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline string rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // rowsBeforeLimitAtLeast Field Functions 
    bool hasRowsBeforeLimitAtLeast() const { return this->rowsBeforeLimitAtLeast_ != nullptr;};
    void deleteRowsBeforeLimitAtLeast() { this->rowsBeforeLimitAtLeast_ = nullptr;};
    inline string rowsBeforeLimitAtLeast() const { DARABONBA_PTR_GET_DEFAULT(rowsBeforeLimitAtLeast_, "") };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend& setRowsBeforeLimitAtLeast(string rowsBeforeLimitAtLeast) { DARABONBA_PTR_SET_VALUE(rowsBeforeLimitAtLeast_, rowsBeforeLimitAtLeast) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const Models::DescribeSlowLogTrendResponseBodySlowLogTrendStatistics & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, Models::DescribeSlowLogTrendResponseBodySlowLogTrendStatistics) };
    inline Models::DescribeSlowLogTrendResponseBodySlowLogTrendStatistics statistics() { DARABONBA_PTR_GET(statistics_, Models::DescribeSlowLogTrendResponseBodySlowLogTrendStatistics) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend& setStatistics(const Models::DescribeSlowLogTrendResponseBodySlowLogTrendStatistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend& setStatistics(Models::DescribeSlowLogTrendResponseBodySlowLogTrendStatistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // tableSchema Field Functions 
    bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
    void deleteTableSchema() { this->tableSchema_ = nullptr;};
    inline const Models::DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema & tableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, Models::DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema) };
    inline Models::DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema tableSchema() { DARABONBA_PTR_GET(tableSchema_, Models::DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend& setTableSchema(const Models::DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend& setTableSchema(Models::DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


  protected:
    std::shared_ptr<Models::DescribeSlowLogTrendResponseBodySlowLogTrendData> data_ = nullptr;
    std::shared_ptr<string> rows_ = nullptr;
    std::shared_ptr<string> rowsBeforeLimitAtLeast_ = nullptr;
    std::shared_ptr<Models::DescribeSlowLogTrendResponseBodySlowLogTrendStatistics> statistics_ = nullptr;
    std::shared_ptr<Models::DescribeSlowLogTrendResponseBodySlowLogTrendTableSchema> tableSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
