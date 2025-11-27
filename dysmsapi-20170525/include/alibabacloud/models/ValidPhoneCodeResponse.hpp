// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDPHONECODERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_VALIDPHONECODERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ValidPhoneCodeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class ValidPhoneCodeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidPhoneCodeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ValidPhoneCodeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ValidPhoneCodeResponse() = default ;
    ValidPhoneCodeResponse(const ValidPhoneCodeResponse &) = default ;
    ValidPhoneCodeResponse(ValidPhoneCodeResponse &&) = default ;
    ValidPhoneCodeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidPhoneCodeResponse() = default ;
    ValidPhoneCodeResponse& operator=(const ValidPhoneCodeResponse &) = default ;
    ValidPhoneCodeResponse& operator=(ValidPhoneCodeResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ValidPhoneCodeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ValidPhoneCodeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ValidPhoneCodeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ValidPhoneCodeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ValidPhoneCodeResponseBody) };
    inline ValidPhoneCodeResponseBody body() { DARABONBA_PTR_GET(body_, ValidPhoneCodeResponseBody) };
    inline ValidPhoneCodeResponse& setBody(const ValidPhoneCodeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidPhoneCodeResponse& setBody(ValidPhoneCodeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ValidPhoneCodeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
