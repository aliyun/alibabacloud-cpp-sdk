// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeUsageOsSdkVersionDistributionStatDataResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageOsSdkVersionDistributionStatDataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageOsSdkVersionDistributionStatDataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageOsSdkVersionDistributionStatDataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeUsageOsSdkVersionDistributionStatDataResponse() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponse(const DescribeUsageOsSdkVersionDistributionStatDataResponse &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponse(DescribeUsageOsSdkVersionDistributionStatDataResponse &&) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponse() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponse& operator=(const DescribeUsageOsSdkVersionDistributionStatDataResponse &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponse& operator=(DescribeUsageOsSdkVersionDistributionStatDataResponse &&) = default ;
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
    inline DescribeUsageOsSdkVersionDistributionStatDataResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeUsageOsSdkVersionDistributionStatDataResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeUsageOsSdkVersionDistributionStatDataResponseBody) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBody body() { DARABONBA_PTR_GET(body_, DescribeUsageOsSdkVersionDistributionStatDataResponseBody) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponse& setBody(const DescribeUsageOsSdkVersionDistributionStatDataResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponse& setBody(DescribeUsageOsSdkVersionDistributionStatDataResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
