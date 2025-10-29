// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTTPAPIOPERATIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETHTTPAPIOPERATIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetHttpApiOperationResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetHttpApiOperationResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHttpApiOperationResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetHttpApiOperationResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetHttpApiOperationResponse() = default ;
    GetHttpApiOperationResponse(const GetHttpApiOperationResponse &) = default ;
    GetHttpApiOperationResponse(GetHttpApiOperationResponse &&) = default ;
    GetHttpApiOperationResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHttpApiOperationResponse() = default ;
    GetHttpApiOperationResponse& operator=(const GetHttpApiOperationResponse &) = default ;
    GetHttpApiOperationResponse& operator=(GetHttpApiOperationResponse &&) = default ;
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
    inline GetHttpApiOperationResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetHttpApiOperationResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetHttpApiOperationResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetHttpApiOperationResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetHttpApiOperationResponseBody) };
    inline GetHttpApiOperationResponseBody body() { DARABONBA_PTR_GET(body_, GetHttpApiOperationResponseBody) };
    inline GetHttpApiOperationResponse& setBody(const GetHttpApiOperationResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetHttpApiOperationResponse& setBody(GetHttpApiOperationResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetHttpApiOperationResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
