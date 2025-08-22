// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVPODMONITORRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVPODMONITORRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeEnvPodMonitorResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvPodMonitorResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvPodMonitorResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvPodMonitorResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeEnvPodMonitorResponse() = default ;
    DescribeEnvPodMonitorResponse(const DescribeEnvPodMonitorResponse &) = default ;
    DescribeEnvPodMonitorResponse(DescribeEnvPodMonitorResponse &&) = default ;
    DescribeEnvPodMonitorResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvPodMonitorResponse() = default ;
    DescribeEnvPodMonitorResponse& operator=(const DescribeEnvPodMonitorResponse &) = default ;
    DescribeEnvPodMonitorResponse& operator=(DescribeEnvPodMonitorResponse &&) = default ;
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
    inline DescribeEnvPodMonitorResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeEnvPodMonitorResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeEnvPodMonitorResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeEnvPodMonitorResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeEnvPodMonitorResponseBody) };
    inline DescribeEnvPodMonitorResponseBody body() { DARABONBA_PTR_GET(body_, DescribeEnvPodMonitorResponseBody) };
    inline DescribeEnvPodMonitorResponse& setBody(const DescribeEnvPodMonitorResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeEnvPodMonitorResponse& setBody(DescribeEnvPodMonitorResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeEnvPodMonitorResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
