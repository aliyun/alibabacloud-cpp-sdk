// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOVERABLEOTSINSTANCESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOVERABLEOTSINSTANCESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeRecoverableOtsInstancesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecoverableOtsInstancesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecoverableOtsInstancesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeRecoverableOtsInstancesResponse() = default ;
    DescribeRecoverableOtsInstancesResponse(const DescribeRecoverableOtsInstancesResponse &) = default ;
    DescribeRecoverableOtsInstancesResponse(DescribeRecoverableOtsInstancesResponse &&) = default ;
    DescribeRecoverableOtsInstancesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecoverableOtsInstancesResponse() = default ;
    DescribeRecoverableOtsInstancesResponse& operator=(const DescribeRecoverableOtsInstancesResponse &) = default ;
    DescribeRecoverableOtsInstancesResponse& operator=(DescribeRecoverableOtsInstancesResponse &&) = default ;
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
    inline DescribeRecoverableOtsInstancesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeRecoverableOtsInstancesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeRecoverableOtsInstancesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeRecoverableOtsInstancesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeRecoverableOtsInstancesResponseBody) };
    inline DescribeRecoverableOtsInstancesResponseBody body() { DARABONBA_PTR_GET(body_, DescribeRecoverableOtsInstancesResponseBody) };
    inline DescribeRecoverableOtsInstancesResponse& setBody(const DescribeRecoverableOtsInstancesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeRecoverableOtsInstancesResponse& setBody(DescribeRecoverableOtsInstancesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeRecoverableOtsInstancesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
