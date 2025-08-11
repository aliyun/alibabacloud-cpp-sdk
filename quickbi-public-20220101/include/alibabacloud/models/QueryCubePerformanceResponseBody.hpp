// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUBEPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUBEPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCubePerformanceResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryCubePerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCubePerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCubePerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCubePerformanceResponseBody() = default ;
    QueryCubePerformanceResponseBody(const QueryCubePerformanceResponseBody &) = default ;
    QueryCubePerformanceResponseBody(QueryCubePerformanceResponseBody &&) = default ;
    QueryCubePerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCubePerformanceResponseBody() = default ;
    QueryCubePerformanceResponseBody& operator=(const QueryCubePerformanceResponseBody &) = default ;
    QueryCubePerformanceResponseBody& operator=(QueryCubePerformanceResponseBody &&) = default ;
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
    inline QueryCubePerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryCubePerformanceResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryCubePerformanceResponseBodyResult>) };
    inline vector<QueryCubePerformanceResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<QueryCubePerformanceResponseBodyResult>) };
    inline QueryCubePerformanceResponseBody& setResult(const vector<QueryCubePerformanceResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryCubePerformanceResponseBody& setResult(vector<QueryCubePerformanceResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCubePerformanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Array of report objects
    std::shared_ptr<vector<QueryCubePerformanceResponseBodyResult>> result_ = nullptr;
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
