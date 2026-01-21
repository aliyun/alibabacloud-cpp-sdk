// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeExporterOutputListResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterOutputListResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterOutputListResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterOutputListResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeExporterOutputListResponse() = default ;
    DescribeExporterOutputListResponse(const DescribeExporterOutputListResponse &) = default ;
    DescribeExporterOutputListResponse(DescribeExporterOutputListResponse &&) = default ;
    DescribeExporterOutputListResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterOutputListResponse() = default ;
    DescribeExporterOutputListResponse& operator=(const DescribeExporterOutputListResponse &) = default ;
    DescribeExporterOutputListResponse& operator=(DescribeExporterOutputListResponse &&) = default ;
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
    inline DescribeExporterOutputListResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeExporterOutputListResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeExporterOutputListResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeExporterOutputListResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DescribeExporterOutputListResponseBody) };
    inline DescribeExporterOutputListResponseBody getBody() { DARABONBA_PTR_GET(body_, DescribeExporterOutputListResponseBody) };
    inline DescribeExporterOutputListResponse& setBody(const DescribeExporterOutputListResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeExporterOutputListResponse& setBody(DescribeExporterOutputListResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DescribeExporterOutputListResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
