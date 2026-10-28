// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESENDVERIFYACTIVATERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RESENDVERIFYACTIVATERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ResendVerifyActivateResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ResendVerifyActivateResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResendVerifyActivateResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ResendVerifyActivateResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ResendVerifyActivateResponse() = default ;
    ResendVerifyActivateResponse(const ResendVerifyActivateResponse &) = default ;
    ResendVerifyActivateResponse(ResendVerifyActivateResponse &&) = default ;
    ResendVerifyActivateResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResendVerifyActivateResponse() = default ;
    ResendVerifyActivateResponse& operator=(const ResendVerifyActivateResponse &) = default ;
    ResendVerifyActivateResponse& operator=(ResendVerifyActivateResponse &&) = default ;
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
    inline ResendVerifyActivateResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ResendVerifyActivateResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ResendVerifyActivateResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ResendVerifyActivateResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ResendVerifyActivateResponseBody) };
    inline ResendVerifyActivateResponseBody getBody() { DARABONBA_PTR_GET(body_, ResendVerifyActivateResponseBody) };
    inline ResendVerifyActivateResponse& setBody(const ResendVerifyActivateResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ResendVerifyActivateResponse& setBody(ResendVerifyActivateResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ResendVerifyActivateResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
