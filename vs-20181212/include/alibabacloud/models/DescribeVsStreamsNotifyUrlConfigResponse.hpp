// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeVsStreamsNotifyUrlConfigResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsNotifyUrlConfigResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsNotifyUrlConfigResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsNotifyUrlConfigResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeVsStreamsNotifyUrlConfigResponse() = default ;
    DescribeVsStreamsNotifyUrlConfigResponse(const DescribeVsStreamsNotifyUrlConfigResponse &) = default ;
    DescribeVsStreamsNotifyUrlConfigResponse(DescribeVsStreamsNotifyUrlConfigResponse &&) = default ;
    DescribeVsStreamsNotifyUrlConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsNotifyUrlConfigResponse() = default ;
    DescribeVsStreamsNotifyUrlConfigResponse& operator=(const DescribeVsStreamsNotifyUrlConfigResponse &) = default ;
    DescribeVsStreamsNotifyUrlConfigResponse& operator=(DescribeVsStreamsNotifyUrlConfigResponse &&) = default ;
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
    inline DescribeVsStreamsNotifyUrlConfigResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeVsStreamsNotifyUrlConfigResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeVsStreamsNotifyUrlConfigResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeVsStreamsNotifyUrlConfigResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeVsStreamsNotifyUrlConfigResponseBody) };
    inline DescribeVsStreamsNotifyUrlConfigResponseBody body() { DARABONBA_PTR_GET(body_, DescribeVsStreamsNotifyUrlConfigResponseBody) };
    inline DescribeVsStreamsNotifyUrlConfigResponse& setBody(const DescribeVsStreamsNotifyUrlConfigResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeVsStreamsNotifyUrlConfigResponse& setBody(DescribeVsStreamsNotifyUrlConfigResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeVsStreamsNotifyUrlConfigResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
