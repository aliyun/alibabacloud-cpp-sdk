// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class CreateAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(JsonRpcResponse, jsonRpcResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateAgentSessionResponseBody() = default ;
    CreateAgentSessionResponseBody(const CreateAgentSessionResponseBody &) = default ;
    CreateAgentSessionResponseBody(CreateAgentSessionResponseBody &&) = default ;
    CreateAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentSessionResponseBody() = default ;
    CreateAgentSessionResponseBody& operator=(const CreateAgentSessionResponseBody &) = default ;
    CreateAgentSessionResponseBody& operator=(CreateAgentSessionResponseBody &&) = default ;
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
    inline CreateAgentSessionResponseBody& setJsonRpcResponse(const Darabonba::Json & jsonRpcResponse) { DARABONBA_SET_VALUE(jsonRpcResponse_, jsonRpcResponse) };
    inline CreateAgentSessionResponseBody& setJsonRpcResponse(Darabonba::Json && jsonRpcResponse) { DARABONBA_SET_RVALUE(jsonRpcResponse_, jsonRpcResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateAgentSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response object. The business result is located in `result`.
    Darabonba::Json jsonRpcResponse_ {};
    // The server-side request ID, which is used to troubleshoot this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation is successful. Determine the final execution state based on the description of this operation.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
