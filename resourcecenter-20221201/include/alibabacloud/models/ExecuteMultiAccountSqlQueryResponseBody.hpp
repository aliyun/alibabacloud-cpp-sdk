// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMULTIACCOUNTSQLQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMULTIACCOUNTSQLQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteMultiAccountSQLQueryResponseBodyColumns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ExecuteMultiAccountSQLQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMultiAccountSQLQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMultiAccountSQLQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
    };
    ExecuteMultiAccountSQLQueryResponseBody() = default ;
    ExecuteMultiAccountSQLQueryResponseBody(const ExecuteMultiAccountSQLQueryResponseBody &) = default ;
    ExecuteMultiAccountSQLQueryResponseBody(ExecuteMultiAccountSQLQueryResponseBody &&) = default ;
    ExecuteMultiAccountSQLQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMultiAccountSQLQueryResponseBody() = default ;
    ExecuteMultiAccountSQLQueryResponseBody& operator=(const ExecuteMultiAccountSQLQueryResponseBody &) = default ;
    ExecuteMultiAccountSQLQueryResponseBody& operator=(ExecuteMultiAccountSQLQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->rows_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<ExecuteMultiAccountSQLQueryResponseBodyColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<ExecuteMultiAccountSQLQueryResponseBodyColumns>) };
    inline vector<ExecuteMultiAccountSQLQueryResponseBodyColumns> columns() { DARABONBA_PTR_GET(columns_, vector<ExecuteMultiAccountSQLQueryResponseBodyColumns>) };
    inline ExecuteMultiAccountSQLQueryResponseBody& setColumns(const vector<ExecuteMultiAccountSQLQueryResponseBodyColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ExecuteMultiAccountSQLQueryResponseBody& setColumns(vector<ExecuteMultiAccountSQLQueryResponseBodyColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ExecuteMultiAccountSQLQueryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ExecuteMultiAccountSQLQueryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteMultiAccountSQLQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<Darabonba::Json> & rows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> rows() { DARABONBA_PTR_GET(rows_, vector<Darabonba::Json>) };
    inline ExecuteMultiAccountSQLQueryResponseBody& setRows(const vector<Darabonba::Json> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline ExecuteMultiAccountSQLQueryResponseBody& setRows(vector<Darabonba::Json> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


  protected:
    // The columns.
    std::shared_ptr<vector<ExecuteMultiAccountSQLQueryResponseBodyColumns>> columns_ = nullptr;
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
