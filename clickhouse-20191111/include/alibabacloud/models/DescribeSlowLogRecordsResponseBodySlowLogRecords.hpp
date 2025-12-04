// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYSLOWLOGRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYSLOWLOGRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowLogRecordsResponseBodySlowLogRecordsData.hpp>
#include <alibabacloud/models/DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics.hpp>
#include <alibabacloud/models/DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodySlowLogRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodySlowLogRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodySlowLogRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
    };
    DescribeSlowLogRecordsResponseBodySlowLogRecords() = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecords(const DescribeSlowLogRecordsResponseBodySlowLogRecords &) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecords(DescribeSlowLogRecordsResponseBodySlowLogRecords &&) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodySlowLogRecords() = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecords& operator=(const DescribeSlowLogRecordsResponseBodySlowLogRecords &) = default ;
    DescribeSlowLogRecordsResponseBodySlowLogRecords& operator=(DescribeSlowLogRecordsResponseBodySlowLogRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->rows_ == nullptr && return this->rowsBeforeLimitAtLeast_ == nullptr && return this->statistics_ == nullptr && return this->tableSchema_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsData) };
    inline Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsData data() { DARABONBA_PTR_GET(data_, Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsData) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords& setData(const Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords& setData(Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline string rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // rowsBeforeLimitAtLeast Field Functions 
    bool hasRowsBeforeLimitAtLeast() const { return this->rowsBeforeLimitAtLeast_ != nullptr;};
    void deleteRowsBeforeLimitAtLeast() { this->rowsBeforeLimitAtLeast_ = nullptr;};
    inline string rowsBeforeLimitAtLeast() const { DARABONBA_PTR_GET_DEFAULT(rowsBeforeLimitAtLeast_, "") };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords& setRowsBeforeLimitAtLeast(string rowsBeforeLimitAtLeast) { DARABONBA_PTR_SET_VALUE(rowsBeforeLimitAtLeast_, rowsBeforeLimitAtLeast) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics) };
    inline Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics statistics() { DARABONBA_PTR_GET(statistics_, Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords& setStatistics(const Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords& setStatistics(Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // tableSchema Field Functions 
    bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
    void deleteTableSchema() { this->tableSchema_ = nullptr;};
    inline const Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema & tableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema) };
    inline Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema tableSchema() { DARABONBA_PTR_GET(tableSchema_, Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords& setTableSchema(const Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords& setTableSchema(Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


  protected:
    // Details about the slow query logs.
    std::shared_ptr<Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsData> data_ = nullptr;
    // The number of rows in the result set.
    std::shared_ptr<string> rows_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> rowsBeforeLimitAtLeast_ = nullptr;
    // The statistics of the results.
    std::shared_ptr<Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsStatistics> statistics_ = nullptr;
    // The schema of the table in the database.
    std::shared_ptr<Models::DescribeSlowLogRecordsResponseBodySlowLogRecordsTableSchema> tableSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
