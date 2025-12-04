// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYPROCESSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYPROCESSLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProcessListResponseBodyProcessListData.hpp>
#include <alibabacloud/models/DescribeProcessListResponseBodyProcessListStatistics.hpp>
#include <alibabacloud/models/DescribeProcessListResponseBodyProcessListTableSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeProcessListResponseBodyProcessList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListResponseBodyProcessList& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListResponseBodyProcessList& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(RowsBeforeLimitAtLeast, rowsBeforeLimitAtLeast_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
    };
    DescribeProcessListResponseBodyProcessList() = default ;
    DescribeProcessListResponseBodyProcessList(const DescribeProcessListResponseBodyProcessList &) = default ;
    DescribeProcessListResponseBodyProcessList(DescribeProcessListResponseBodyProcessList &&) = default ;
    DescribeProcessListResponseBodyProcessList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListResponseBodyProcessList() = default ;
    DescribeProcessListResponseBodyProcessList& operator=(const DescribeProcessListResponseBodyProcessList &) = default ;
    DescribeProcessListResponseBodyProcessList& operator=(DescribeProcessListResponseBodyProcessList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->rows_ == nullptr && return this->rowsBeforeLimitAtLeast_ == nullptr && return this->statistics_ == nullptr && return this->tableSchema_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeProcessListResponseBodyProcessListData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeProcessListResponseBodyProcessListData) };
    inline Models::DescribeProcessListResponseBodyProcessListData data() { DARABONBA_PTR_GET(data_, Models::DescribeProcessListResponseBodyProcessListData) };
    inline DescribeProcessListResponseBodyProcessList& setData(const Models::DescribeProcessListResponseBodyProcessListData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeProcessListResponseBodyProcessList& setData(Models::DescribeProcessListResponseBodyProcessListData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline string rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
    inline DescribeProcessListResponseBodyProcessList& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // rowsBeforeLimitAtLeast Field Functions 
    bool hasRowsBeforeLimitAtLeast() const { return this->rowsBeforeLimitAtLeast_ != nullptr;};
    void deleteRowsBeforeLimitAtLeast() { this->rowsBeforeLimitAtLeast_ = nullptr;};
    inline string rowsBeforeLimitAtLeast() const { DARABONBA_PTR_GET_DEFAULT(rowsBeforeLimitAtLeast_, "") };
    inline DescribeProcessListResponseBodyProcessList& setRowsBeforeLimitAtLeast(string rowsBeforeLimitAtLeast) { DARABONBA_PTR_SET_VALUE(rowsBeforeLimitAtLeast_, rowsBeforeLimitAtLeast) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const Models::DescribeProcessListResponseBodyProcessListStatistics & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, Models::DescribeProcessListResponseBodyProcessListStatistics) };
    inline Models::DescribeProcessListResponseBodyProcessListStatistics statistics() { DARABONBA_PTR_GET(statistics_, Models::DescribeProcessListResponseBodyProcessListStatistics) };
    inline DescribeProcessListResponseBodyProcessList& setStatistics(const Models::DescribeProcessListResponseBodyProcessListStatistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeProcessListResponseBodyProcessList& setStatistics(Models::DescribeProcessListResponseBodyProcessListStatistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // tableSchema Field Functions 
    bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
    void deleteTableSchema() { this->tableSchema_ = nullptr;};
    inline const Models::DescribeProcessListResponseBodyProcessListTableSchema & tableSchema() const { DARABONBA_PTR_GET_CONST(tableSchema_, Models::DescribeProcessListResponseBodyProcessListTableSchema) };
    inline Models::DescribeProcessListResponseBodyProcessListTableSchema tableSchema() { DARABONBA_PTR_GET(tableSchema_, Models::DescribeProcessListResponseBodyProcessListTableSchema) };
    inline DescribeProcessListResponseBodyProcessList& setTableSchema(const Models::DescribeProcessListResponseBodyProcessListTableSchema & tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };
    inline DescribeProcessListResponseBodyProcessList& setTableSchema(Models::DescribeProcessListResponseBodyProcessListTableSchema && tableSchema) { DARABONBA_PTR_SET_RVALUE(tableSchema_, tableSchema) };


  protected:
    // The details of the query.
    std::shared_ptr<Models::DescribeProcessListResponseBodyProcessListData> data_ = nullptr;
    // The number of rows returned for the query.
    std::shared_ptr<string> rows_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<string> rowsBeforeLimitAtLeast_ = nullptr;
    // The statistics of the results.
    std::shared_ptr<Models::DescribeProcessListResponseBodyProcessListStatistics> statistics_ = nullptr;
    // Details of the columns.
    std::shared_ptr<Models::DescribeProcessListResponseBodyProcessListTableSchema> tableSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
