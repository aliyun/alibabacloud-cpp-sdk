// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSHIVEWORKLOADRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSHIVEWORKLOADRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeApsHiveWorkloadResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsHiveWorkloadResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsHiveWorkloadResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsHiveWorkloadResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeApsHiveWorkloadResponse() = default ;
    DescribeApsHiveWorkloadResponse(const DescribeApsHiveWorkloadResponse &) = default ;
    DescribeApsHiveWorkloadResponse(DescribeApsHiveWorkloadResponse &&) = default ;
    DescribeApsHiveWorkloadResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsHiveWorkloadResponse() = default ;
    DescribeApsHiveWorkloadResponse& operator=(const DescribeApsHiveWorkloadResponse &) = default ;
    DescribeApsHiveWorkloadResponse& operator=(DescribeApsHiveWorkloadResponse &&) = default ;
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
    inline DescribeApsHiveWorkloadResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeApsHiveWorkloadResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeApsHiveWorkloadResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeApsHiveWorkloadResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeApsHiveWorkloadResponseBody) };
    inline DescribeApsHiveWorkloadResponseBody body() { DARABONBA_PTR_GET(body_, DescribeApsHiveWorkloadResponseBody) };
    inline DescribeApsHiveWorkloadResponse& setBody(const DescribeApsHiveWorkloadResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeApsHiveWorkloadResponse& setBody(DescribeApsHiveWorkloadResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeApsHiveWorkloadResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
