// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOLVERENDPOINTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOLVERENDPOINTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeResolverEndpointResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeResolverEndpointResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResolverEndpointResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResolverEndpointResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeResolverEndpointResponse() = default ;
    DescribeResolverEndpointResponse(const DescribeResolverEndpointResponse &) = default ;
    DescribeResolverEndpointResponse(DescribeResolverEndpointResponse &&) = default ;
    DescribeResolverEndpointResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResolverEndpointResponse() = default ;
    DescribeResolverEndpointResponse& operator=(const DescribeResolverEndpointResponse &) = default ;
    DescribeResolverEndpointResponse& operator=(DescribeResolverEndpointResponse &&) = default ;
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
    inline DescribeResolverEndpointResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeResolverEndpointResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeResolverEndpointResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeResolverEndpointResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DescribeResolverEndpointResponseBody) };
    inline DescribeResolverEndpointResponseBody getBody() { DARABONBA_PTR_GET(body_, DescribeResolverEndpointResponseBody) };
    inline DescribeResolverEndpointResponse& setBody(const DescribeResolverEndpointResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeResolverEndpointResponse& setBody(DescribeResolverEndpointResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DescribeResolverEndpointResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
