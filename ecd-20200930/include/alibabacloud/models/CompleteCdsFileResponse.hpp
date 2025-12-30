// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETECDSFILERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_COMPLETECDSFILERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CompleteCdsFileResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CompleteCdsFileResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompleteCdsFileResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CompleteCdsFileResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CompleteCdsFileResponse() = default ;
    CompleteCdsFileResponse(const CompleteCdsFileResponse &) = default ;
    CompleteCdsFileResponse(CompleteCdsFileResponse &&) = default ;
    CompleteCdsFileResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompleteCdsFileResponse() = default ;
    CompleteCdsFileResponse& operator=(const CompleteCdsFileResponse &) = default ;
    CompleteCdsFileResponse& operator=(CompleteCdsFileResponse &&) = default ;
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
    inline CompleteCdsFileResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CompleteCdsFileResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CompleteCdsFileResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CompleteCdsFileResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CompleteCdsFileResponseBody) };
    inline CompleteCdsFileResponseBody getBody() { DARABONBA_PTR_GET(body_, CompleteCdsFileResponseBody) };
    inline CompleteCdsFileResponse& setBody(const CompleteCdsFileResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CompleteCdsFileResponse& setBody(CompleteCdsFileResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CompleteCdsFileResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
