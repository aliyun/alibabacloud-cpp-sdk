// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeInstanceEndpointsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceEndpointsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceEndpointsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceEndpointsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeInstanceEndpointsResponse() = default ;
    DescribeInstanceEndpointsResponse(const DescribeInstanceEndpointsResponse &) = default ;
    DescribeInstanceEndpointsResponse(DescribeInstanceEndpointsResponse &&) = default ;
    DescribeInstanceEndpointsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceEndpointsResponse() = default ;
    DescribeInstanceEndpointsResponse& operator=(const DescribeInstanceEndpointsResponse &) = default ;
    DescribeInstanceEndpointsResponse& operator=(DescribeInstanceEndpointsResponse &&) = default ;
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
    inline DescribeInstanceEndpointsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeInstanceEndpointsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeInstanceEndpointsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeInstanceEndpointsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeInstanceEndpointsResponseBody) };
    inline DescribeInstanceEndpointsResponseBody body() { DARABONBA_PTR_GET(body_, DescribeInstanceEndpointsResponseBody) };
    inline DescribeInstanceEndpointsResponse& setBody(const DescribeInstanceEndpointsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeInstanceEndpointsResponse& setBody(DescribeInstanceEndpointsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeInstanceEndpointsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
