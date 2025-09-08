// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeGreyTagRouteResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeGreyTagRouteResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGreyTagRouteResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGreyTagRouteResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeGreyTagRouteResponse() = default ;
    DescribeGreyTagRouteResponse(const DescribeGreyTagRouteResponse &) = default ;
    DescribeGreyTagRouteResponse(DescribeGreyTagRouteResponse &&) = default ;
    DescribeGreyTagRouteResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGreyTagRouteResponse() = default ;
    DescribeGreyTagRouteResponse& operator=(const DescribeGreyTagRouteResponse &) = default ;
    DescribeGreyTagRouteResponse& operator=(DescribeGreyTagRouteResponse &&) = default ;
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
    inline DescribeGreyTagRouteResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeGreyTagRouteResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeGreyTagRouteResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeGreyTagRouteResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeGreyTagRouteResponseBody) };
    inline DescribeGreyTagRouteResponseBody body() { DARABONBA_PTR_GET(body_, DescribeGreyTagRouteResponseBody) };
    inline DescribeGreyTagRouteResponse& setBody(const DescribeGreyTagRouteResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeGreyTagRouteResponse& setBody(DescribeGreyTagRouteResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeGreyTagRouteResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
