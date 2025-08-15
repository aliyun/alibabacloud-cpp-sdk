// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDPRODUCTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDPRODUCTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetAccessKeyLastUsedProductsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedProductsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedProductsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedProductsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetAccessKeyLastUsedProductsResponse() = default ;
    GetAccessKeyLastUsedProductsResponse(const GetAccessKeyLastUsedProductsResponse &) = default ;
    GetAccessKeyLastUsedProductsResponse(GetAccessKeyLastUsedProductsResponse &&) = default ;
    GetAccessKeyLastUsedProductsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedProductsResponse() = default ;
    GetAccessKeyLastUsedProductsResponse& operator=(const GetAccessKeyLastUsedProductsResponse &) = default ;
    GetAccessKeyLastUsedProductsResponse& operator=(GetAccessKeyLastUsedProductsResponse &&) = default ;
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
    inline GetAccessKeyLastUsedProductsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetAccessKeyLastUsedProductsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetAccessKeyLastUsedProductsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetAccessKeyLastUsedProductsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetAccessKeyLastUsedProductsResponseBody) };
    inline GetAccessKeyLastUsedProductsResponseBody body() { DARABONBA_PTR_GET(body_, GetAccessKeyLastUsedProductsResponseBody) };
    inline GetAccessKeyLastUsedProductsResponse& setBody(const GetAccessKeyLastUsedProductsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetAccessKeyLastUsedProductsResponse& setBody(GetAccessKeyLastUsedProductsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetAccessKeyLastUsedProductsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
