// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIMETERINGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIMETERINGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeApiMeteringResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeApiMeteringResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiMeteringResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiMeteringResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeApiMeteringResponse() = default ;
    DescribeApiMeteringResponse(const DescribeApiMeteringResponse &) = default ;
    DescribeApiMeteringResponse(DescribeApiMeteringResponse &&) = default ;
    DescribeApiMeteringResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiMeteringResponse() = default ;
    DescribeApiMeteringResponse& operator=(const DescribeApiMeteringResponse &) = default ;
    DescribeApiMeteringResponse& operator=(DescribeApiMeteringResponse &&) = default ;
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
    inline DescribeApiMeteringResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeApiMeteringResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeApiMeteringResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeApiMeteringResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeApiMeteringResponseBody) };
    inline DescribeApiMeteringResponseBody body() { DARABONBA_PTR_GET(body_, DescribeApiMeteringResponseBody) };
    inline DescribeApiMeteringResponse& setBody(const DescribeApiMeteringResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeApiMeteringResponse& setBody(DescribeApiMeteringResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeApiMeteringResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
