// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATARESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATARESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDataResponseBodyResultHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    QueryDataResponseBodyResult() = default ;
    QueryDataResponseBodyResult(const QueryDataResponseBodyResult &) = default ;
    QueryDataResponseBodyResult(QueryDataResponseBodyResult &&) = default ;
    QueryDataResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataResponseBodyResult() = default ;
    QueryDataResponseBodyResult& operator=(const QueryDataResponseBodyResult &) = default ;
    QueryDataResponseBodyResult& operator=(QueryDataResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->sql_ == nullptr && return this->values_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<Models::QueryDataResponseBodyResultHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<Models::QueryDataResponseBodyResultHeaders>) };
    inline vector<Models::QueryDataResponseBodyResultHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<Models::QueryDataResponseBodyResultHeaders>) };
    inline QueryDataResponseBodyResult& setHeaders(const vector<Models::QueryDataResponseBodyResultHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryDataResponseBodyResult& setHeaders(vector<Models::QueryDataResponseBodyResultHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline QueryDataResponseBodyResult& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<Darabonba::Json> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> values() { DARABONBA_PTR_GET(values_, vector<Darabonba::Json>) };
    inline QueryDataResponseBodyResult& setValues(const vector<Darabonba::Json> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline QueryDataResponseBodyResult& setValues(vector<Darabonba::Json> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // Column headers.
    std::shared_ptr<vector<Models::QueryDataResponseBodyResultHeaders>> headers_ = nullptr;
    // The SQL query that was executed.
    // > The filter conditions in the returned SQL statement include not only the parameters passed through this interface but also the row and column permission configurations.
    std::shared_ptr<string> sql_ = nullptr;
    // The results of the query.
    std::shared_ptr<vector<Darabonba::Json>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
