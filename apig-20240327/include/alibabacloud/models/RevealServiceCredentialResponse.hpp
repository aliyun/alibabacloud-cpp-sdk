// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVEALSERVICECREDENTIALRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_REVEALSERVICECREDENTIALRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RevealServiceCredentialResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class RevealServiceCredentialResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevealServiceCredentialResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RevealServiceCredentialResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RevealServiceCredentialResponse() = default ;
    RevealServiceCredentialResponse(const RevealServiceCredentialResponse &) = default ;
    RevealServiceCredentialResponse(RevealServiceCredentialResponse &&) = default ;
    RevealServiceCredentialResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevealServiceCredentialResponse() = default ;
    RevealServiceCredentialResponse& operator=(const RevealServiceCredentialResponse &) = default ;
    RevealServiceCredentialResponse& operator=(RevealServiceCredentialResponse &&) = default ;
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
    inline RevealServiceCredentialResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RevealServiceCredentialResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RevealServiceCredentialResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RevealServiceCredentialResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, RevealServiceCredentialResponseBody) };
    inline RevealServiceCredentialResponseBody getBody() { DARABONBA_PTR_GET(body_, RevealServiceCredentialResponseBody) };
    inline RevealServiceCredentialResponse& setBody(const RevealServiceCredentialResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RevealServiceCredentialResponse& setBody(RevealServiceCredentialResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<RevealServiceCredentialResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
