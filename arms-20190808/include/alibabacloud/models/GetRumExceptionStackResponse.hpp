// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetRumExceptionStackResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumExceptionStackResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumExceptionStackResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumExceptionStackResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetRumExceptionStackResponse() = default ;
    GetRumExceptionStackResponse(const GetRumExceptionStackResponse &) = default ;
    GetRumExceptionStackResponse(GetRumExceptionStackResponse &&) = default ;
    GetRumExceptionStackResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumExceptionStackResponse() = default ;
    GetRumExceptionStackResponse& operator=(const GetRumExceptionStackResponse &) = default ;
    GetRumExceptionStackResponse& operator=(GetRumExceptionStackResponse &&) = default ;
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
    inline GetRumExceptionStackResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetRumExceptionStackResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetRumExceptionStackResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetRumExceptionStackResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetRumExceptionStackResponseBody) };
    inline GetRumExceptionStackResponseBody body() { DARABONBA_PTR_GET(body_, GetRumExceptionStackResponseBody) };
    inline GetRumExceptionStackResponse& setBody(const GetRumExceptionStackResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetRumExceptionStackResponse& setBody(GetRumExceptionStackResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetRumExceptionStackResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
