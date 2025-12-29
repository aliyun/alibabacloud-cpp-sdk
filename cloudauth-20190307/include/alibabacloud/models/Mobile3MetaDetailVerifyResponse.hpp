// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILE3METADETAILVERIFYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MOBILE3METADETAILVERIFYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/Mobile3MetaDetailVerifyResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Mobile3MetaDetailVerifyResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Mobile3MetaDetailVerifyResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, Mobile3MetaDetailVerifyResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    Mobile3MetaDetailVerifyResponse() = default ;
    Mobile3MetaDetailVerifyResponse(const Mobile3MetaDetailVerifyResponse &) = default ;
    Mobile3MetaDetailVerifyResponse(Mobile3MetaDetailVerifyResponse &&) = default ;
    Mobile3MetaDetailVerifyResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Mobile3MetaDetailVerifyResponse() = default ;
    Mobile3MetaDetailVerifyResponse& operator=(const Mobile3MetaDetailVerifyResponse &) = default ;
    Mobile3MetaDetailVerifyResponse& operator=(Mobile3MetaDetailVerifyResponse &&) = default ;
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
    inline Mobile3MetaDetailVerifyResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline Mobile3MetaDetailVerifyResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline Mobile3MetaDetailVerifyResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Mobile3MetaDetailVerifyResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, Mobile3MetaDetailVerifyResponseBody) };
    inline Mobile3MetaDetailVerifyResponseBody getBody() { DARABONBA_PTR_GET(body_, Mobile3MetaDetailVerifyResponseBody) };
    inline Mobile3MetaDetailVerifyResponse& setBody(const Mobile3MetaDetailVerifyResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline Mobile3MetaDetailVerifyResponse& setBody(Mobile3MetaDetailVerifyResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<Mobile3MetaDetailVerifyResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
