// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKET4AIPRORESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKET4AIPRORESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateTicket4AiProResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CreateTicket4AiProResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicket4AiProResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicket4AiProResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateTicket4AiProResponse() = default ;
    CreateTicket4AiProResponse(const CreateTicket4AiProResponse &) = default ;
    CreateTicket4AiProResponse(CreateTicket4AiProResponse &&) = default ;
    CreateTicket4AiProResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicket4AiProResponse() = default ;
    CreateTicket4AiProResponse& operator=(const CreateTicket4AiProResponse &) = default ;
    CreateTicket4AiProResponse& operator=(CreateTicket4AiProResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline CreateTicket4AiProResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateTicket4AiProResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateTicket4AiProResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateTicket4AiProResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateTicket4AiProResponseBody) };
    inline CreateTicket4AiProResponseBody getBody() { DARABONBA_PTR_GET(body_, CreateTicket4AiProResponseBody) };
    inline CreateTicket4AiProResponse& setBody(const CreateTicket4AiProResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateTicket4AiProResponse& setBody(CreateTicket4AiProResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CreateTicket4AiProResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
