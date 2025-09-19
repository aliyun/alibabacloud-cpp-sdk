// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeBackupPoliciesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupPoliciesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPoliciesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPoliciesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeBackupPoliciesResponse() = default ;
    DescribeBackupPoliciesResponse(const DescribeBackupPoliciesResponse &) = default ;
    DescribeBackupPoliciesResponse(DescribeBackupPoliciesResponse &&) = default ;
    DescribeBackupPoliciesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPoliciesResponse() = default ;
    DescribeBackupPoliciesResponse& operator=(const DescribeBackupPoliciesResponse &) = default ;
    DescribeBackupPoliciesResponse& operator=(DescribeBackupPoliciesResponse &&) = default ;
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
    inline DescribeBackupPoliciesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeBackupPoliciesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeBackupPoliciesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeBackupPoliciesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeBackupPoliciesResponseBody) };
    inline DescribeBackupPoliciesResponseBody body() { DARABONBA_PTR_GET(body_, DescribeBackupPoliciesResponseBody) };
    inline DescribeBackupPoliciesResponse& setBody(const DescribeBackupPoliciesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeBackupPoliciesResponse& setBody(DescribeBackupPoliciesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeBackupPoliciesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
