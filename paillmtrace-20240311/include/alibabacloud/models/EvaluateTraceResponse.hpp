// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATETRACERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_EVALUATETRACERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class EvaluateTraceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateTraceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateTraceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    EvaluateTraceResponse() = default ;
    EvaluateTraceResponse(const EvaluateTraceResponse &) = default ;
    EvaluateTraceResponse(EvaluateTraceResponse &&) = default ;
    EvaluateTraceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateTraceResponse() = default ;
    EvaluateTraceResponse& operator=(const EvaluateTraceResponse &) = default ;
    EvaluateTraceResponse& operator=(EvaluateTraceResponse &&) = default ;
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
    inline EvaluateTraceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline EvaluateTraceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline EvaluateTraceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EvaluateTraceResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, EvaluateTraceResponseBody) };
    inline EvaluateTraceResponseBody body() { DARABONBA_PTR_GET(body_, EvaluateTraceResponseBody) };
    inline EvaluateTraceResponse& setBody(const EvaluateTraceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EvaluateTraceResponse& setBody(EvaluateTraceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<EvaluateTraceResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
