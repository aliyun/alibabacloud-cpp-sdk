// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class GetAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAgentSessionResponseBody() = default ;
    GetAgentSessionResponseBody(const GetAgentSessionResponseBody &) = default ;
    GetAgentSessionResponseBody(GetAgentSessionResponseBody &&) = default ;
    GetAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSessionResponseBody() = default ;
    GetAgentSessionResponseBody& operator=(const GetAgentSessionResponseBody &) = default ;
    GetAgentSessionResponseBody& operator=(GetAgentSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jsonRpcResponse_ == nullptr
        && this->requestId_ == nullptr; };
    // jsonRpcResponse Field Functions 
    bool hasJsonRpcResponse() const { return this->jsonRpcResponse_ != nullptr;};
    void deleteJsonRpcResponse() { this->jsonRpcResponse_ = nullptr;};
    inline     const Darabonba::Json & getJsonRpcResponse() const { DARABONBA_GET(jsonRpcResponse_) };
    Darabonba::Json & getJsonRpcResponse() { DARABONBA_GET(jsonRpcResponse_) };
    inline GetAgentSessionResponseBody& setJsonRpcResponse(const Darabonba::Json & jsonRpcResponse) { DARABONBA_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline GetAgentSessionResponseBody& setJsonRpcResponse(Darabonba::Json && jsonRpcResponse) { DARABONBA_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response object. The business result is located in `result`.
    Darabonba::Json jsonRpcResponse_ {};
    // The server-side request ID, which is used to troubleshoot this call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
