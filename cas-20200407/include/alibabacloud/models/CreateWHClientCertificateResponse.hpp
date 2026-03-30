// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWHCLIENTCERTIFICATERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEWHCLIENTCERTIFICATERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateWHClientCertificateResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateWHClientCertificateResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWHClientCertificateResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWHClientCertificateResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateWHClientCertificateResponse() = default ;
    CreateWHClientCertificateResponse(const CreateWHClientCertificateResponse &) = default ;
    CreateWHClientCertificateResponse(CreateWHClientCertificateResponse &&) = default ;
    CreateWHClientCertificateResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWHClientCertificateResponse() = default ;
    CreateWHClientCertificateResponse& operator=(const CreateWHClientCertificateResponse &) = default ;
    CreateWHClientCertificateResponse& operator=(CreateWHClientCertificateResponse &&) = default ;
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
    inline CreateWHClientCertificateResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateWHClientCertificateResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateWHClientCertificateResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateWHClientCertificateResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateWHClientCertificateResponseBody) };
    inline CreateWHClientCertificateResponseBody getBody() { DARABONBA_PTR_GET(body_, CreateWHClientCertificateResponseBody) };
    inline CreateWHClientCertificateResponse& setBody(const CreateWHClientCertificateResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateWHClientCertificateResponse& setBody(CreateWHClientCertificateResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CreateWHClientCertificateResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
