// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCEPACKAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERRESOURCEPACKAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeUserResourcePackageResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeUserResourcePackageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserResourcePackageResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserResourcePackageResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeUserResourcePackageResponse() = default ;
    DescribeUserResourcePackageResponse(const DescribeUserResourcePackageResponse &) = default ;
    DescribeUserResourcePackageResponse(DescribeUserResourcePackageResponse &&) = default ;
    DescribeUserResourcePackageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserResourcePackageResponse() = default ;
    DescribeUserResourcePackageResponse& operator=(const DescribeUserResourcePackageResponse &) = default ;
    DescribeUserResourcePackageResponse& operator=(DescribeUserResourcePackageResponse &&) = default ;
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
    inline DescribeUserResourcePackageResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeUserResourcePackageResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeUserResourcePackageResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeUserResourcePackageResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DescribeUserResourcePackageResponseBody) };
    inline DescribeUserResourcePackageResponseBody getBody() { DARABONBA_PTR_GET(body_, DescribeUserResourcePackageResponseBody) };
    inline DescribeUserResourcePackageResponse& setBody(const DescribeUserResourcePackageResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeUserResourcePackageResponse& setBody(DescribeUserResourcePackageResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DescribeUserResourcePackageResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
