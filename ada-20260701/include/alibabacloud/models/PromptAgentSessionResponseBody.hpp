// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMPTAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PROMPTAGENTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
namespace Models
{
  class PromptAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromptAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_ANY_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, PromptAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_ANY_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Result, result_);
    };
    PromptAgentSessionResponseBody() = default ;
    PromptAgentSessionResponseBody(const PromptAgentSessionResponseBody &) = default ;
    PromptAgentSessionResponseBody(PromptAgentSessionResponseBody &&) = default ;
    PromptAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromptAgentSessionResponseBody() = default ;
    PromptAgentSessionResponseBody& operator=(const PromptAgentSessionResponseBody &) = default ;
    PromptAgentSessionResponseBody& operator=(PromptAgentSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->error_ == nullptr
        && this->id_ == nullptr && this->jsonrpc_ == nullptr && this->method_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline     const Darabonba::Json & getError() const { DARABONBA_GET(error_) };
    Darabonba::Json & getError() { DARABONBA_GET(error_) };
    inline PromptAgentSessionResponseBody& setError(const Darabonba::Json & error) { DARABONBA_SET_VALUE(error_, error) };
    inline PromptAgentSessionResponseBody& setError(Darabonba::Json && error) { DARABONBA_SET_RVALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PromptAgentSessionResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline PromptAgentSessionResponseBody& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline PromptAgentSessionResponseBody& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
    Darabonba::Json & getParams() { DARABONBA_GET(params_) };
    inline PromptAgentSessionResponseBody& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline PromptAgentSessionResponseBody& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PromptAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
    Darabonba::Json & getResult() { DARABONBA_GET(result_) };
    inline PromptAgentSessionResponseBody& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline PromptAgentSessionResponseBody& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


  protected:
    // The `Error` field in the frame. This is an in-stream error, which is an object.
    Darabonba::Json error_ {};
    // The `Id` field in the frame, used to associate the request. Notification frames may not contain this field.
    shared_ptr<string> id_ {};
    // The `Jsonrpc` field in the frame. The value is `2.0`.
    shared_ptr<string> jsonrpc_ {};
    // The `Method` field in the frame, used to distinguish notification categories.
    shared_ptr<string> method_ {};
    // The `Params` field in the frame. This is the notification payload, which is an object.
    Darabonba::Json params_ {};
    // The request diagnostic identifier. This identifier is not guaranteed to be included in every frame. You should also retain the diagnostic information in the response headers.
    shared_ptr<string> requestId_ {};
    // The `Result` field in the frame. This is the normal result, which is an object.
    Darabonba::Json result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
