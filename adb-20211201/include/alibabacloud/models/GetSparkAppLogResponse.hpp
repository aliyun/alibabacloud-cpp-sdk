// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPLOGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPLOGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetSparkAppLogResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppLogResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppLogResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppLogResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetSparkAppLogResponse() = default ;
    GetSparkAppLogResponse(const GetSparkAppLogResponse &) = default ;
    GetSparkAppLogResponse(GetSparkAppLogResponse &&) = default ;
    GetSparkAppLogResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppLogResponse() = default ;
    GetSparkAppLogResponse& operator=(const GetSparkAppLogResponse &) = default ;
    GetSparkAppLogResponse& operator=(GetSparkAppLogResponse &&) = default ;
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
    inline GetSparkAppLogResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetSparkAppLogResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetSparkAppLogResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetSparkAppLogResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetSparkAppLogResponseBody) };
    inline GetSparkAppLogResponseBody body() { DARABONBA_PTR_GET(body_, GetSparkAppLogResponseBody) };
    inline GetSparkAppLogResponse& setBody(const GetSparkAppLogResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetSparkAppLogResponse& setBody(GetSparkAppLogResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetSparkAppLogResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
