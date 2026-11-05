// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLYAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPLYAGENTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class ReplyAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplyAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReplyAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReplyAgentSessionResponseBody() = default ;
    ReplyAgentSessionResponseBody(const ReplyAgentSessionResponseBody &) = default ;
    ReplyAgentSessionResponseBody(ReplyAgentSessionResponseBody &&) = default ;
    ReplyAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplyAgentSessionResponseBody() = default ;
    ReplyAgentSessionResponseBody& operator=(const ReplyAgentSessionResponseBody &) = default ;
    ReplyAgentSessionResponseBody& operator=(ReplyAgentSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jsonRpcResponse_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // jsonRpcResponse Field Functions 
    bool hasJsonRpcResponse() const { return this->jsonRpcResponse_ != nullptr;};
    void deleteJsonRpcResponse() { this->jsonRpcResponse_ = nullptr;};
    inline     const Darabonba::Json & getJsonRpcResponse() const { DARABONBA_GET(jsonRpcResponse_) };
    Darabonba::Json & getJsonRpcResponse() { DARABONBA_GET(jsonRpcResponse_) };
    inline ReplyAgentSessionResponseBody& setJsonRpcResponse(const Darabonba::Json & jsonRpcResponse) { DARABONBA_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline ReplyAgentSessionResponseBody& setJsonRpcResponse(Darabonba::Json && jsonRpcResponse) { DARABONBA_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReplyAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReplyAgentSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The JSON-RPC response. For core embedded fields, see the supplementary description.
    Darabonba::Json jsonRpcResponse_ {};
    // The ID of the current request, used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the current API call is successful. This parameter cannot replace the business acceptance result.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
