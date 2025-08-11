// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOMPONENTPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOMPONENTPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryComponentPerformanceResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryComponentPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryComponentPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryComponentPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryComponentPerformanceResponseBody() = default ;
    QueryComponentPerformanceResponseBody(const QueryComponentPerformanceResponseBody &) = default ;
    QueryComponentPerformanceResponseBody(QueryComponentPerformanceResponseBody &&) = default ;
    QueryComponentPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryComponentPerformanceResponseBody() = default ;
    QueryComponentPerformanceResponseBody& operator=(const QueryComponentPerformanceResponseBody &) = default ;
    QueryComponentPerformanceResponseBody& operator=(QueryComponentPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryComponentPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryComponentPerformanceResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryComponentPerformanceResponseBodyResult>) };
    inline vector<QueryComponentPerformanceResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<QueryComponentPerformanceResponseBodyResult>) };
    inline QueryComponentPerformanceResponseBody& setResult(const vector<QueryComponentPerformanceResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryComponentPerformanceResponseBody& setResult(vector<QueryComponentPerformanceResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryComponentPerformanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result returned.
    std::shared_ptr<vector<QueryComponentPerformanceResponseBodyResult>> result_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
