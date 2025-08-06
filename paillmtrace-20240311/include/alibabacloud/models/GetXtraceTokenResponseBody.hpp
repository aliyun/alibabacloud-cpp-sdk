// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETXTRACETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETXTRACETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class GetXtraceTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetXtraceTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GrpcEndpoint, grpcEndpoint_);
      DARABONBA_PTR_TO_JSON(GrpcInternalEndpoint, grpcInternalEndpoint_);
      DARABONBA_PTR_TO_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_TO_JSON(HttpInternalEndpoint, httpInternalEndpoint_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetXtraceTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GrpcEndpoint, grpcEndpoint_);
      DARABONBA_PTR_FROM_JSON(GrpcInternalEndpoint, grpcInternalEndpoint_);
      DARABONBA_PTR_FROM_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_FROM_JSON(HttpInternalEndpoint, httpInternalEndpoint_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetXtraceTokenResponseBody() = default ;
    GetXtraceTokenResponseBody(const GetXtraceTokenResponseBody &) = default ;
    GetXtraceTokenResponseBody(GetXtraceTokenResponseBody &&) = default ;
    GetXtraceTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetXtraceTokenResponseBody() = default ;
    GetXtraceTokenResponseBody& operator=(const GetXtraceTokenResponseBody &) = default ;
    GetXtraceTokenResponseBody& operator=(GetXtraceTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->grpcEndpoint_ != nullptr && this->grpcInternalEndpoint_ != nullptr && this->httpEndpoint_ != nullptr && this->httpInternalEndpoint_ != nullptr && this->message_ != nullptr
        && this->requestId_ != nullptr && this->token_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetXtraceTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // grpcEndpoint Field Functions 
    bool hasGrpcEndpoint() const { return this->grpcEndpoint_ != nullptr;};
    void deleteGrpcEndpoint() { this->grpcEndpoint_ = nullptr;};
    inline string grpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(grpcEndpoint_, "") };
    inline GetXtraceTokenResponseBody& setGrpcEndpoint(string grpcEndpoint) { DARABONBA_PTR_SET_VALUE(grpcEndpoint_, grpcEndpoint) };


    // grpcInternalEndpoint Field Functions 
    bool hasGrpcInternalEndpoint() const { return this->grpcInternalEndpoint_ != nullptr;};
    void deleteGrpcInternalEndpoint() { this->grpcInternalEndpoint_ = nullptr;};
    inline string grpcInternalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(grpcInternalEndpoint_, "") };
    inline GetXtraceTokenResponseBody& setGrpcInternalEndpoint(string grpcInternalEndpoint) { DARABONBA_PTR_SET_VALUE(grpcInternalEndpoint_, grpcInternalEndpoint) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string httpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline GetXtraceTokenResponseBody& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpInternalEndpoint Field Functions 
    bool hasHttpInternalEndpoint() const { return this->httpInternalEndpoint_ != nullptr;};
    void deleteHttpInternalEndpoint() { this->httpInternalEndpoint_ = nullptr;};
    inline string httpInternalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpInternalEndpoint_, "") };
    inline GetXtraceTokenResponseBody& setHttpInternalEndpoint(string httpInternalEndpoint) { DARABONBA_PTR_SET_VALUE(httpInternalEndpoint_, httpInternalEndpoint) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetXtraceTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetXtraceTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetXtraceTokenResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The internal error code. This parameter is returned only when an error occurs.
    std::shared_ptr<string> code_ = nullptr;
    // The gRPC endpoint used for uploading ARM traces.
    std::shared_ptr<string> grpcEndpoint_ = nullptr;
    // The internal gRPC endpoint used for uploading ARMS traces used by Alibaba Cloud.
    std::shared_ptr<string> grpcInternalEndpoint_ = nullptr;
    // The endpoint used for uploading ARMS traces.
    std::shared_ptr<string> httpEndpoint_ = nullptr;
    // The internal endpoint used for uploading ARMS traces used by Alibaba Cloud.
    std::shared_ptr<string> httpInternalEndpoint_ = nullptr;
    // The error message. This parameter is returned only when an error occurs.
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The token used for uploading ARMS traces.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
