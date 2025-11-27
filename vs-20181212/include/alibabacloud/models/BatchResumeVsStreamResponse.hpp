// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_BATCHRESUMEVSSTREAMRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/BatchResumeVsStreamResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchResumeVsStreamResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchResumeVsStreamResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, BatchResumeVsStreamResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    BatchResumeVsStreamResponse() = default ;
    BatchResumeVsStreamResponse(const BatchResumeVsStreamResponse &) = default ;
    BatchResumeVsStreamResponse(BatchResumeVsStreamResponse &&) = default ;
    BatchResumeVsStreamResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchResumeVsStreamResponse() = default ;
    BatchResumeVsStreamResponse& operator=(const BatchResumeVsStreamResponse &) = default ;
    BatchResumeVsStreamResponse& operator=(BatchResumeVsStreamResponse &&) = default ;
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
    inline BatchResumeVsStreamResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline BatchResumeVsStreamResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline BatchResumeVsStreamResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const BatchResumeVsStreamResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, BatchResumeVsStreamResponseBody) };
    inline BatchResumeVsStreamResponseBody body() { DARABONBA_PTR_GET(body_, BatchResumeVsStreamResponseBody) };
    inline BatchResumeVsStreamResponse& setBody(const BatchResumeVsStreamResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline BatchResumeVsStreamResponse& setBody(BatchResumeVsStreamResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<BatchResumeVsStreamResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
