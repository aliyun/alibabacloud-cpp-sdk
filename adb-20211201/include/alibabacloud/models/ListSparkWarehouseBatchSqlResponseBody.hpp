// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKWAREHOUSEBATCHSQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKWAREHOUSEBATCHSQLRESPONSEBODY_HPP_
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
  class ListSparkWarehouseBatchSQLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkWarehouseBatchSQLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkWarehouseBatchSQLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSparkWarehouseBatchSQLResponseBody() = default ;
    ListSparkWarehouseBatchSQLResponseBody(const ListSparkWarehouseBatchSQLResponseBody &) = default ;
    ListSparkWarehouseBatchSQLResponseBody(ListSparkWarehouseBatchSQLResponseBody &&) = default ;
    ListSparkWarehouseBatchSQLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkWarehouseBatchSQLResponseBody() = default ;
    ListSparkWarehouseBatchSQLResponseBody& operator=(const ListSparkWarehouseBatchSQLResponseBody &) = default ;
    ListSparkWarehouseBatchSQLResponseBody& operator=(ListSparkWarehouseBatchSQLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Queries, queries_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Queries, queries_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->queries_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // queries Field Functions 
      bool hasQueries() const { return this->queries_ != nullptr;};
      void deleteQueries() { this->queries_ = nullptr;};
      inline const vector<SparkBatchSQL> & getQueries() const { DARABONBA_PTR_GET_CONST(queries_, vector<SparkBatchSQL>) };
      inline vector<SparkBatchSQL> getQueries() { DARABONBA_PTR_GET(queries_, vector<SparkBatchSQL>) };
      inline Data& setQueries(const vector<SparkBatchSQL> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
      inline Data& setQueries(vector<SparkBatchSQL> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The queried Spark SQL statements.
      shared_ptr<vector<SparkBatchSQL>> queries_ {};
      // The total number of entries.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSparkWarehouseBatchSQLResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSparkWarehouseBatchSQLResponseBody::Data) };
    inline ListSparkWarehouseBatchSQLResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSparkWarehouseBatchSQLResponseBody::Data) };
    inline ListSparkWarehouseBatchSQLResponseBody& setData(const ListSparkWarehouseBatchSQLResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSparkWarehouseBatchSQLResponseBody& setData(ListSparkWarehouseBatchSQLResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSparkWarehouseBatchSQLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListSparkWarehouseBatchSQLResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
