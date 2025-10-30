// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREVOKECERTIFICATERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTREVOKECERTIFICATERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListRevokeCertificateResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListRevokeCertificateResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRevokeCertificateResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListRevokeCertificateResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListRevokeCertificateResponse() = default ;
    ListRevokeCertificateResponse(const ListRevokeCertificateResponse &) = default ;
    ListRevokeCertificateResponse(ListRevokeCertificateResponse &&) = default ;
    ListRevokeCertificateResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRevokeCertificateResponse() = default ;
    ListRevokeCertificateResponse& operator=(const ListRevokeCertificateResponse &) = default ;
    ListRevokeCertificateResponse& operator=(ListRevokeCertificateResponse &&) = default ;
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
    inline ListRevokeCertificateResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListRevokeCertificateResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListRevokeCertificateResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListRevokeCertificateResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListRevokeCertificateResponseBody) };
    inline ListRevokeCertificateResponseBody body() { DARABONBA_PTR_GET(body_, ListRevokeCertificateResponseBody) };
    inline ListRevokeCertificateResponse& setBody(const ListRevokeCertificateResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListRevokeCertificateResponse& setBody(ListRevokeCertificateResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListRevokeCertificateResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
