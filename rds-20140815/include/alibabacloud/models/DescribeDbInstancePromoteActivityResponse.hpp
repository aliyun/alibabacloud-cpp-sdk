// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPROMOTEACTIVITYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPROMOTEACTIVITYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeDBInstancePromoteActivityResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancePromoteActivityResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePromoteActivityResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePromoteActivityResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeDBInstancePromoteActivityResponse() = default ;
    DescribeDBInstancePromoteActivityResponse(const DescribeDBInstancePromoteActivityResponse &) = default ;
    DescribeDBInstancePromoteActivityResponse(DescribeDBInstancePromoteActivityResponse &&) = default ;
    DescribeDBInstancePromoteActivityResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePromoteActivityResponse() = default ;
    DescribeDBInstancePromoteActivityResponse& operator=(const DescribeDBInstancePromoteActivityResponse &) = default ;
    DescribeDBInstancePromoteActivityResponse& operator=(DescribeDBInstancePromoteActivityResponse &&) = default ;
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
    inline DescribeDBInstancePromoteActivityResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeDBInstancePromoteActivityResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeDBInstancePromoteActivityResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeDBInstancePromoteActivityResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeDBInstancePromoteActivityResponseBody) };
    inline DescribeDBInstancePromoteActivityResponseBody body() { DARABONBA_PTR_GET(body_, DescribeDBInstancePromoteActivityResponseBody) };
    inline DescribeDBInstancePromoteActivityResponse& setBody(const DescribeDBInstancePromoteActivityResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeDBInstancePromoteActivityResponse& setBody(DescribeDBInstancePromoteActivityResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeDBInstancePromoteActivityResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
