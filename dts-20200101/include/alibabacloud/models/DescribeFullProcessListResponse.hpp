// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFULLPROCESSLISTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFULLPROCESSLISTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeFullProcessListResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeFullProcessListResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFullProcessListResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFullProcessListResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeFullProcessListResponse() = default ;
    DescribeFullProcessListResponse(const DescribeFullProcessListResponse &) = default ;
    DescribeFullProcessListResponse(DescribeFullProcessListResponse &&) = default ;
    DescribeFullProcessListResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFullProcessListResponse() = default ;
    DescribeFullProcessListResponse& operator=(const DescribeFullProcessListResponse &) = default ;
    DescribeFullProcessListResponse& operator=(DescribeFullProcessListResponse &&) = default ;
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
    inline DescribeFullProcessListResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeFullProcessListResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeFullProcessListResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeFullProcessListResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeFullProcessListResponseBody) };
    inline DescribeFullProcessListResponseBody body() { DARABONBA_PTR_GET(body_, DescribeFullProcessListResponseBody) };
    inline DescribeFullProcessListResponse& setBody(const DescribeFullProcessListResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeFullProcessListResponse& setBody(DescribeFullProcessListResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeFullProcessListResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
