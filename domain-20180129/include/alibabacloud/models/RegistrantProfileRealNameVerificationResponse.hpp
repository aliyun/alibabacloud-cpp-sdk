// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTRANTPROFILEREALNAMEVERIFICATIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_REGISTRANTPROFILEREALNAMEVERIFICATIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RegistrantProfileRealNameVerificationResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class RegistrantProfileRealNameVerificationResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegistrantProfileRealNameVerificationResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RegistrantProfileRealNameVerificationResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RegistrantProfileRealNameVerificationResponse() = default ;
    RegistrantProfileRealNameVerificationResponse(const RegistrantProfileRealNameVerificationResponse &) = default ;
    RegistrantProfileRealNameVerificationResponse(RegistrantProfileRealNameVerificationResponse &&) = default ;
    RegistrantProfileRealNameVerificationResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegistrantProfileRealNameVerificationResponse() = default ;
    RegistrantProfileRealNameVerificationResponse& operator=(const RegistrantProfileRealNameVerificationResponse &) = default ;
    RegistrantProfileRealNameVerificationResponse& operator=(RegistrantProfileRealNameVerificationResponse &&) = default ;
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
    inline RegistrantProfileRealNameVerificationResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RegistrantProfileRealNameVerificationResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RegistrantProfileRealNameVerificationResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RegistrantProfileRealNameVerificationResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, RegistrantProfileRealNameVerificationResponseBody) };
    inline RegistrantProfileRealNameVerificationResponseBody body() { DARABONBA_PTR_GET(body_, RegistrantProfileRealNameVerificationResponseBody) };
    inline RegistrantProfileRealNameVerificationResponse& setBody(const RegistrantProfileRealNameVerificationResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RegistrantProfileRealNameVerificationResponse& setBody(RegistrantProfileRealNameVerificationResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<RegistrantProfileRealNameVerificationResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
