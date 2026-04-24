// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORDATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORDATARESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeMonitorDataResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeMonitorDataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorDataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorDataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeMonitorDataResponse() = default ;
    DescribeMonitorDataResponse(const DescribeMonitorDataResponse &) = default ;
    DescribeMonitorDataResponse(DescribeMonitorDataResponse &&) = default ;
    DescribeMonitorDataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorDataResponse() = default ;
    DescribeMonitorDataResponse& operator=(const DescribeMonitorDataResponse &) = default ;
    DescribeMonitorDataResponse& operator=(DescribeMonitorDataResponse &&) = default ;
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
    inline DescribeMonitorDataResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeMonitorDataResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeMonitorDataResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeMonitorDataResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DescribeMonitorDataResponseBody) };
    inline DescribeMonitorDataResponseBody getBody() { DARABONBA_PTR_GET(body_, DescribeMonitorDataResponseBody) };
    inline DescribeMonitorDataResponse& setBody(const DescribeMonitorDataResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeMonitorDataResponse& setBody(DescribeMonitorDataResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DescribeMonitorDataResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
