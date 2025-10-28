// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetK8sAppPrecheckResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sAppPrecheckResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sAppPrecheckResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sAppPrecheckResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetK8sAppPrecheckResultResponse() = default ;
    GetK8sAppPrecheckResultResponse(const GetK8sAppPrecheckResultResponse &) = default ;
    GetK8sAppPrecheckResultResponse(GetK8sAppPrecheckResultResponse &&) = default ;
    GetK8sAppPrecheckResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sAppPrecheckResultResponse() = default ;
    GetK8sAppPrecheckResultResponse& operator=(const GetK8sAppPrecheckResultResponse &) = default ;
    GetK8sAppPrecheckResultResponse& operator=(GetK8sAppPrecheckResultResponse &&) = default ;
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
    inline GetK8sAppPrecheckResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetK8sAppPrecheckResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetK8sAppPrecheckResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetK8sAppPrecheckResultResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetK8sAppPrecheckResultResponseBody) };
    inline GetK8sAppPrecheckResultResponseBody body() { DARABONBA_PTR_GET(body_, GetK8sAppPrecheckResultResponseBody) };
    inline GetK8sAppPrecheckResultResponse& setBody(const GetK8sAppPrecheckResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetK8sAppPrecheckResultResponse& setBody(GetK8sAppPrecheckResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetK8sAppPrecheckResultResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
