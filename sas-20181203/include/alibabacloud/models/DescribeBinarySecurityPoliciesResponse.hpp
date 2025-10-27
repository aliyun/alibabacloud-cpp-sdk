// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBINARYSECURITYPOLICIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeBinarySecurityPoliciesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBinarySecurityPoliciesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBinarySecurityPoliciesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBinarySecurityPoliciesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeBinarySecurityPoliciesResponse() = default ;
    DescribeBinarySecurityPoliciesResponse(const DescribeBinarySecurityPoliciesResponse &) = default ;
    DescribeBinarySecurityPoliciesResponse(DescribeBinarySecurityPoliciesResponse &&) = default ;
    DescribeBinarySecurityPoliciesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBinarySecurityPoliciesResponse() = default ;
    DescribeBinarySecurityPoliciesResponse& operator=(const DescribeBinarySecurityPoliciesResponse &) = default ;
    DescribeBinarySecurityPoliciesResponse& operator=(DescribeBinarySecurityPoliciesResponse &&) = default ;
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
    inline DescribeBinarySecurityPoliciesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeBinarySecurityPoliciesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeBinarySecurityPoliciesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeBinarySecurityPoliciesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeBinarySecurityPoliciesResponseBody) };
    inline DescribeBinarySecurityPoliciesResponseBody body() { DARABONBA_PTR_GET(body_, DescribeBinarySecurityPoliciesResponseBody) };
    inline DescribeBinarySecurityPoliciesResponse& setBody(const DescribeBinarySecurityPoliciesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeBinarySecurityPoliciesResponse& setBody(DescribeBinarySecurityPoliciesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeBinarySecurityPoliciesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
