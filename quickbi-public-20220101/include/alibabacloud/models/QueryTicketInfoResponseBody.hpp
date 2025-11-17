// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTICKETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTICKETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTicketInfoResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryTicketInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTicketInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTicketInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTicketInfoResponseBody() = default ;
    QueryTicketInfoResponseBody(const QueryTicketInfoResponseBody &) = default ;
    QueryTicketInfoResponseBody(QueryTicketInfoResponseBody &&) = default ;
    QueryTicketInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTicketInfoResponseBody() = default ;
    QueryTicketInfoResponseBody& operator=(const QueryTicketInfoResponseBody &) = default ;
    QueryTicketInfoResponseBody& operator=(QueryTicketInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr && return this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTicketInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryTicketInfoResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, QueryTicketInfoResponseBodyResult) };
    inline QueryTicketInfoResponseBodyResult result() { DARABONBA_PTR_GET(result_, QueryTicketInfoResponseBodyResult) };
    inline QueryTicketInfoResponseBody& setResult(const QueryTicketInfoResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryTicketInfoResponseBody& setResult(QueryTicketInfoResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTicketInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the generated ticket.
    std::shared_ptr<QueryTicketInfoResponseBodyResult> result_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
