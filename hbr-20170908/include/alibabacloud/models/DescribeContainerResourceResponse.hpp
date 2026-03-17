// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERRESOURCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERRESOURCERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeContainerResourceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeContainerResourceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerResourceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerResourceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeContainerResourceResponse() = default ;
    DescribeContainerResourceResponse(const DescribeContainerResourceResponse &) = default ;
    DescribeContainerResourceResponse(DescribeContainerResourceResponse &&) = default ;
    DescribeContainerResourceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerResourceResponse() = default ;
    DescribeContainerResourceResponse& operator=(const DescribeContainerResourceResponse &) = default ;
    DescribeContainerResourceResponse& operator=(DescribeContainerResourceResponse &&) = default ;
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
    inline DescribeContainerResourceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeContainerResourceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeContainerResourceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeContainerResourceResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DescribeContainerResourceResponseBody) };
    inline DescribeContainerResourceResponseBody getBody() { DARABONBA_PTR_GET(body_, DescribeContainerResourceResponseBody) };
    inline DescribeContainerResourceResponse& setBody(const DescribeContainerResourceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeContainerResourceResponse& setBody(DescribeContainerResourceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DescribeContainerResourceResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
