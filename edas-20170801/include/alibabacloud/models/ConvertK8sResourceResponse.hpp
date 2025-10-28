// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTK8SRESOURCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CONVERTK8SRESOURCERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ConvertK8sResourceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ConvertK8sResourceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertK8sResourceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertK8sResourceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ConvertK8sResourceResponse() = default ;
    ConvertK8sResourceResponse(const ConvertK8sResourceResponse &) = default ;
    ConvertK8sResourceResponse(ConvertK8sResourceResponse &&) = default ;
    ConvertK8sResourceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertK8sResourceResponse() = default ;
    ConvertK8sResourceResponse& operator=(const ConvertK8sResourceResponse &) = default ;
    ConvertK8sResourceResponse& operator=(ConvertK8sResourceResponse &&) = default ;
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
    inline ConvertK8sResourceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ConvertK8sResourceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ConvertK8sResourceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ConvertK8sResourceResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ConvertK8sResourceResponseBody) };
    inline ConvertK8sResourceResponseBody body() { DARABONBA_PTR_GET(body_, ConvertK8sResourceResponseBody) };
    inline ConvertK8sResourceResponse& setBody(const ConvertK8sResourceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ConvertK8sResourceResponse& setBody(ConvertK8sResourceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ConvertK8sResourceResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
