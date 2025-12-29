// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMPIPELINEBATCHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMPIPELINEBATCHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ConfirmPipelineBatchResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ConfirmPipelineBatchResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmPipelineBatchResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmPipelineBatchResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ConfirmPipelineBatchResponse() = default ;
    ConfirmPipelineBatchResponse(const ConfirmPipelineBatchResponse &) = default ;
    ConfirmPipelineBatchResponse(ConfirmPipelineBatchResponse &&) = default ;
    ConfirmPipelineBatchResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmPipelineBatchResponse() = default ;
    ConfirmPipelineBatchResponse& operator=(const ConfirmPipelineBatchResponse &) = default ;
    ConfirmPipelineBatchResponse& operator=(ConfirmPipelineBatchResponse &&) = default ;
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
    inline ConfirmPipelineBatchResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ConfirmPipelineBatchResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ConfirmPipelineBatchResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ConfirmPipelineBatchResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ConfirmPipelineBatchResponseBody) };
    inline ConfirmPipelineBatchResponseBody getBody() { DARABONBA_PTR_GET(body_, ConfirmPipelineBatchResponseBody) };
    inline ConfirmPipelineBatchResponse& setBody(const ConfirmPipelineBatchResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ConfirmPipelineBatchResponse& setBody(ConfirmPipelineBatchResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ConfirmPipelineBatchResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
