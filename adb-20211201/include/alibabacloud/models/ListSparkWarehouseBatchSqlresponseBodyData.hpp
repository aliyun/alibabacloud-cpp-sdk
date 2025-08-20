// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKWAREHOUSEBATCHSQLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKWAREHOUSEBATCHSQLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkBatchSQL.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListSparkWarehouseBatchSQLResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkWarehouseBatchSQLResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Queries, queries_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkWarehouseBatchSQLResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Queries, queries_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSparkWarehouseBatchSQLResponseBodyData() = default ;
    ListSparkWarehouseBatchSQLResponseBodyData(const ListSparkWarehouseBatchSQLResponseBodyData &) = default ;
    ListSparkWarehouseBatchSQLResponseBodyData(ListSparkWarehouseBatchSQLResponseBodyData &&) = default ;
    ListSparkWarehouseBatchSQLResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkWarehouseBatchSQLResponseBodyData() = default ;
    ListSparkWarehouseBatchSQLResponseBodyData& operator=(const ListSparkWarehouseBatchSQLResponseBodyData &) = default ;
    ListSparkWarehouseBatchSQLResponseBodyData& operator=(ListSparkWarehouseBatchSQLResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->queries_ != nullptr && this->total_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSparkWarehouseBatchSQLResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSparkWarehouseBatchSQLResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queries Field Functions 
    bool hasQueries() const { return this->queries_ != nullptr;};
    void deleteQueries() { this->queries_ = nullptr;};
    inline const vector<Models::SparkBatchSQL> & queries() const { DARABONBA_PTR_GET_CONST(queries_, vector<Models::SparkBatchSQL>) };
    inline vector<Models::SparkBatchSQL> queries() { DARABONBA_PTR_GET(queries_, vector<Models::SparkBatchSQL>) };
    inline ListSparkWarehouseBatchSQLResponseBodyData& setQueries(const vector<Models::SparkBatchSQL> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
    inline ListSparkWarehouseBatchSQLResponseBodyData& setQueries(vector<Models::SparkBatchSQL> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListSparkWarehouseBatchSQLResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The queried Spark SQL statements.
    std::shared_ptr<vector<Models::SparkBatchSQL>> queries_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
