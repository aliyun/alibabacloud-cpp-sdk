// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESQLQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESQLQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Columns : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Columns& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Columns& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Columns() = default ;
      Columns(const Columns &) = default ;
      Columns(Columns &&) = default ;
      Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Columns() = default ;
      Columns& operator=(const Columns &) = default ;
      Columns& operator=(Columns &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Columns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the column.
      shared_ptr<string> name_ {};
      // The type of the column.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->columns_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rows_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<ExecuteSQLQueryResponseBody::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<ExecuteSQLQueryResponseBody::Columns>) };
    inline vector<ExecuteSQLQueryResponseBody::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<ExecuteSQLQueryResponseBody::Columns>) };
    inline ExecuteSQLQueryResponseBody& setColumns(const vector<ExecuteSQLQueryResponseBody::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ExecuteSQLQueryResponseBody& setColumns(vector<ExecuteSQLQueryResponseBody::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ExecuteSQLQueryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ExecuteSQLQueryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteSQLQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<Darabonba::Json> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getRows() { DARABONBA_PTR_GET(rows_, vector<Darabonba::Json>) };
    inline ExecuteSQLQueryResponseBody& setRows(const vector<Darabonba::Json> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline ExecuteSQLQueryResponseBody& setRows(vector<Darabonba::Json> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


  protected:
    // The columns.
    shared_ptr<vector<ExecuteSQLQueryResponseBody::Columns>> columns_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // An array of search results.
    shared_ptr<vector<Darabonba::Json>> rows_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
