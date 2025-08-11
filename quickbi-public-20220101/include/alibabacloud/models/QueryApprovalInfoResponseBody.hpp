// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPROVALINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPROVALINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryApprovalInfoResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryApprovalInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApprovalInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApprovalInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryApprovalInfoResponseBody() = default ;
    QueryApprovalInfoResponseBody(const QueryApprovalInfoResponseBody &) = default ;
    QueryApprovalInfoResponseBody(QueryApprovalInfoResponseBody &&) = default ;
    QueryApprovalInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApprovalInfoResponseBody() = default ;
    QueryApprovalInfoResponseBody& operator=(const QueryApprovalInfoResponseBody &) = default ;
    QueryApprovalInfoResponseBody& operator=(QueryApprovalInfoResponseBody &&) = default ;
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
    inline QueryApprovalInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryApprovalInfoResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, QueryApprovalInfoResponseBodyResult) };
    inline QueryApprovalInfoResponseBodyResult result() { DARABONBA_PTR_GET(result_, QueryApprovalInfoResponseBodyResult) };
    inline QueryApprovalInfoResponseBody& setResult(const QueryApprovalInfoResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryApprovalInfoResponseBody& setResult(QueryApprovalInfoResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryApprovalInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Return the result of the interface execution.
    std::shared_ptr<QueryApprovalInfoResponseBodyResult> result_ = nullptr;
    // Indicates whether the API call was successful. Possible values are:
    // - true: success
    // - false: failure
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
