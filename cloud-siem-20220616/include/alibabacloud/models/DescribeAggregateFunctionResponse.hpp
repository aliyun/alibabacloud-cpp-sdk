// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGGREGATEFUNCTIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGGREGATEFUNCTIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeAggregateFunctionResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAggregateFunctionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAggregateFunctionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAggregateFunctionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeAggregateFunctionResponse() = default ;
    DescribeAggregateFunctionResponse(const DescribeAggregateFunctionResponse &) = default ;
    DescribeAggregateFunctionResponse(DescribeAggregateFunctionResponse &&) = default ;
    DescribeAggregateFunctionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAggregateFunctionResponse() = default ;
    DescribeAggregateFunctionResponse& operator=(const DescribeAggregateFunctionResponse &) = default ;
    DescribeAggregateFunctionResponse& operator=(DescribeAggregateFunctionResponse &&) = default ;
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
    inline DescribeAggregateFunctionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeAggregateFunctionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeAggregateFunctionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeAggregateFunctionResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeAggregateFunctionResponseBody) };
    inline DescribeAggregateFunctionResponseBody body() { DARABONBA_PTR_GET(body_, DescribeAggregateFunctionResponseBody) };
    inline DescribeAggregateFunctionResponse& setBody(const DescribeAggregateFunctionResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeAggregateFunctionResponse& setBody(DescribeAggregateFunctionResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeAggregateFunctionResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
