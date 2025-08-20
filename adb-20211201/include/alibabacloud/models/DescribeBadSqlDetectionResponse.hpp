// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBADSQLDETECTIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeBadSqlDetectionResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeBadSqlDetectionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBadSqlDetectionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBadSqlDetectionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeBadSqlDetectionResponse() = default ;
    DescribeBadSqlDetectionResponse(const DescribeBadSqlDetectionResponse &) = default ;
    DescribeBadSqlDetectionResponse(DescribeBadSqlDetectionResponse &&) = default ;
    DescribeBadSqlDetectionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBadSqlDetectionResponse() = default ;
    DescribeBadSqlDetectionResponse& operator=(const DescribeBadSqlDetectionResponse &) = default ;
    DescribeBadSqlDetectionResponse& operator=(DescribeBadSqlDetectionResponse &&) = default ;
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
    inline DescribeBadSqlDetectionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeBadSqlDetectionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeBadSqlDetectionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeBadSqlDetectionResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeBadSqlDetectionResponseBody) };
    inline DescribeBadSqlDetectionResponseBody body() { DARABONBA_PTR_GET(body_, DescribeBadSqlDetectionResponseBody) };
    inline DescribeBadSqlDetectionResponse& setBody(const DescribeBadSqlDetectionResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeBadSqlDetectionResponse& setBody(DescribeBadSqlDetectionResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeBadSqlDetectionResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
