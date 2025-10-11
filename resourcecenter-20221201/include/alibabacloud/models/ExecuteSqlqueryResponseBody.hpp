// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESQLQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESQLQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteSQLQueryResponseBodyColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ExecuteSQLQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteSQLQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteSQLQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
    };
    ExecuteSQLQueryResponseBody() = default ;
    ExecuteSQLQueryResponseBody(const ExecuteSQLQueryResponseBody &) = default ;
    ExecuteSQLQueryResponseBody(ExecuteSQLQueryResponseBody &&) = default ;
    ExecuteSQLQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteSQLQueryResponseBody() = default ;
    ExecuteSQLQueryResponseBody& operator=(const ExecuteSQLQueryResponseBody &) = default ;
    ExecuteSQLQueryResponseBody& operator=(ExecuteSQLQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columns_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->rows_ != nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<ExecuteSQLQueryResponseBodyColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<ExecuteSQLQueryResponseBodyColumns>) };
    inline vector<ExecuteSQLQueryResponseBodyColumns> columns() { DARABONBA_PTR_GET(columns_, vector<ExecuteSQLQueryResponseBodyColumns>) };
    inline ExecuteSQLQueryResponseBody& setColumns(const vector<ExecuteSQLQueryResponseBodyColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ExecuteSQLQueryResponseBody& setColumns(vector<ExecuteSQLQueryResponseBodyColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ExecuteSQLQueryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ExecuteSQLQueryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteSQLQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<Darabonba::Json> & rows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> rows() { DARABONBA_PTR_GET(rows_, vector<Darabonba::Json>) };
    inline ExecuteSQLQueryResponseBody& setRows(const vector<Darabonba::Json> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline ExecuteSQLQueryResponseBody& setRows(vector<Darabonba::Json> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


  protected:
    // The columns.
    std::shared_ptr<vector<ExecuteSQLQueryResponseBodyColumns>> columns_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array of search results.
    std::shared_ptr<vector<Darabonba::Json>> rows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
