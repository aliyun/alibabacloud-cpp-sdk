// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTEIPADDRESSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTEIPADDRESSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeAnycastEipAddressResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastEipAddressResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastEipAddressResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastEipAddressResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeAnycastEipAddressResponse() = default ;
    DescribeAnycastEipAddressResponse(const DescribeAnycastEipAddressResponse &) = default ;
    DescribeAnycastEipAddressResponse(DescribeAnycastEipAddressResponse &&) = default ;
    DescribeAnycastEipAddressResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastEipAddressResponse() = default ;
    DescribeAnycastEipAddressResponse& operator=(const DescribeAnycastEipAddressResponse &) = default ;
    DescribeAnycastEipAddressResponse& operator=(DescribeAnycastEipAddressResponse &&) = default ;
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
    inline DescribeAnycastEipAddressResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeAnycastEipAddressResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeAnycastEipAddressResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeAnycastEipAddressResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeAnycastEipAddressResponseBody) };
    inline DescribeAnycastEipAddressResponseBody body() { DARABONBA_PTR_GET(body_, DescribeAnycastEipAddressResponseBody) };
    inline DescribeAnycastEipAddressResponse& setBody(const DescribeAnycastEipAddressResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeAnycastEipAddressResponse& setBody(DescribeAnycastEipAddressResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeAnycastEipAddressResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
