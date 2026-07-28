// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUERYEXPLAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUERYEXPLAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeQueryExplainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQueryExplainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExplainResult, explainResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQueryExplainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExplainResult, explainResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
    };
    DescribeQueryExplainResponseBody() = default ;
    DescribeQueryExplainResponseBody(const DescribeQueryExplainResponseBody &) = default ;
    DescribeQueryExplainResponseBody(DescribeQueryExplainResponseBody &&) = default ;
    DescribeQueryExplainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQueryExplainResponseBody() = default ;
    DescribeQueryExplainResponseBody& operator=(const DescribeQueryExplainResponseBody &) = default ;
    DescribeQueryExplainResponseBody& operator=(DescribeQueryExplainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->explainResult_ == nullptr
        && this->requestId_ == nullptr && this->sql_ == nullptr; };
    // explainResult Field Functions 
    bool hasExplainResult() const { return this->explainResult_ != nullptr;};
    void deleteExplainResult() { this->explainResult_ = nullptr;};
    inline string getExplainResult() const { DARABONBA_PTR_GET_DEFAULT(explainResult_, "") };
    inline DescribeQueryExplainResponseBody& setExplainResult(string explainResult) { DARABONBA_PTR_SET_VALUE(explainResult_, explainResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQueryExplainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline DescribeQueryExplainResponseBody& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


  protected:
    // The Explain result.
    shared_ptr<string> explainResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The SQL statement for which the execution plan is retrieved. Excessively long SQL statements in audit logs may be truncated.
    shared_ptr<string> sql_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
