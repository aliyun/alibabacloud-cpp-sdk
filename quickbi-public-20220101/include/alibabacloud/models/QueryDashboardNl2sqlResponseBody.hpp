// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDASHBOARDNL2SQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDASHBOARDNL2SQLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDashboardNl2sqlResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDashboardNl2sqlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDashboardNl2sqlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDashboardNl2sqlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDashboardNl2sqlResponseBody() = default ;
    QueryDashboardNl2sqlResponseBody(const QueryDashboardNl2sqlResponseBody &) = default ;
    QueryDashboardNl2sqlResponseBody(QueryDashboardNl2sqlResponseBody &&) = default ;
    QueryDashboardNl2sqlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDashboardNl2sqlResponseBody() = default ;
    QueryDashboardNl2sqlResponseBody& operator=(const QueryDashboardNl2sqlResponseBody &) = default ;
    QueryDashboardNl2sqlResponseBody& operator=(QueryDashboardNl2sqlResponseBody &&) = default ;
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
    inline QueryDashboardNl2sqlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryDashboardNl2sqlResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryDashboardNl2sqlResponseBodyResult>) };
    inline vector<QueryDashboardNl2sqlResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<QueryDashboardNl2sqlResponseBodyResult>) };
    inline QueryDashboardNl2sqlResponseBody& setResult(const vector<QueryDashboardNl2sqlResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDashboardNl2sqlResponseBody& setResult(vector<QueryDashboardNl2sqlResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDashboardNl2sqlResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<QueryDashboardNl2sqlResponseBodyResult>> result_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
