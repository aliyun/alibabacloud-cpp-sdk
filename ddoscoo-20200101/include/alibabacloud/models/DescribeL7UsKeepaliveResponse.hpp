// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7USKEEPALIVERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeL7UsKeepaliveResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7UsKeepaliveResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7UsKeepaliveResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7UsKeepaliveResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeL7UsKeepaliveResponse() = default ;
    DescribeL7UsKeepaliveResponse(const DescribeL7UsKeepaliveResponse &) = default ;
    DescribeL7UsKeepaliveResponse(DescribeL7UsKeepaliveResponse &&) = default ;
    DescribeL7UsKeepaliveResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7UsKeepaliveResponse() = default ;
    DescribeL7UsKeepaliveResponse& operator=(const DescribeL7UsKeepaliveResponse &) = default ;
    DescribeL7UsKeepaliveResponse& operator=(DescribeL7UsKeepaliveResponse &&) = default ;
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
    inline DescribeL7UsKeepaliveResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeL7UsKeepaliveResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeL7UsKeepaliveResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeL7UsKeepaliveResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeL7UsKeepaliveResponseBody) };
    inline DescribeL7UsKeepaliveResponseBody body() { DARABONBA_PTR_GET(body_, DescribeL7UsKeepaliveResponseBody) };
    inline DescribeL7UsKeepaliveResponse& setBody(const DescribeL7UsKeepaliveResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeL7UsKeepaliveResponse& setBody(DescribeL7UsKeepaliveResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeL7UsKeepaliveResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
