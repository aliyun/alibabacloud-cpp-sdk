// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ADDRESSVERIFYV2INTLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AddressVerifyV2IntlResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class AddressVerifyV2IntlResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddressVerifyV2IntlResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddressVerifyV2IntlResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AddressVerifyV2IntlResponse() = default ;
    AddressVerifyV2IntlResponse(const AddressVerifyV2IntlResponse &) = default ;
    AddressVerifyV2IntlResponse(AddressVerifyV2IntlResponse &&) = default ;
    AddressVerifyV2IntlResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddressVerifyV2IntlResponse() = default ;
    AddressVerifyV2IntlResponse& operator=(const AddressVerifyV2IntlResponse &) = default ;
    AddressVerifyV2IntlResponse& operator=(AddressVerifyV2IntlResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline AddressVerifyV2IntlResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AddressVerifyV2IntlResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AddressVerifyV2IntlResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AddressVerifyV2IntlResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, AddressVerifyV2IntlResponseBody) };
    inline AddressVerifyV2IntlResponseBody body() { DARABONBA_PTR_GET(body_, AddressVerifyV2IntlResponseBody) };
    inline AddressVerifyV2IntlResponse& setBody(const AddressVerifyV2IntlResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AddressVerifyV2IntlResponse& setBody(AddressVerifyV2IntlResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<AddressVerifyV2IntlResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
