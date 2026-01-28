// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/EvaluateVideoQualityResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class EvaluateVideoQualityResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateVideoQualityResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateVideoQualityResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    EvaluateVideoQualityResponse() = default ;
    EvaluateVideoQualityResponse(const EvaluateVideoQualityResponse &) = default ;
    EvaluateVideoQualityResponse(EvaluateVideoQualityResponse &&) = default ;
    EvaluateVideoQualityResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateVideoQualityResponse() = default ;
    EvaluateVideoQualityResponse& operator=(const EvaluateVideoQualityResponse &) = default ;
    EvaluateVideoQualityResponse& operator=(EvaluateVideoQualityResponse &&) = default ;
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
    inline EvaluateVideoQualityResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline EvaluateVideoQualityResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline EvaluateVideoQualityResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EvaluateVideoQualityResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, EvaluateVideoQualityResponseBody) };
    inline EvaluateVideoQualityResponseBody getBody() { DARABONBA_PTR_GET(body_, EvaluateVideoQualityResponseBody) };
    inline EvaluateVideoQualityResponse& setBody(const EvaluateVideoQualityResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EvaluateVideoQualityResponse& setBody(EvaluateVideoQualityResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<EvaluateVideoQualityResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
