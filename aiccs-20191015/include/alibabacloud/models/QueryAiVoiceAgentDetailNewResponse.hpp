// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILNEWRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILNEWRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryAiVoiceAgentDetailNewResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailNewResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailNewResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailNewResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryAiVoiceAgentDetailNewResponse() = default ;
    QueryAiVoiceAgentDetailNewResponse(const QueryAiVoiceAgentDetailNewResponse &) = default ;
    QueryAiVoiceAgentDetailNewResponse(QueryAiVoiceAgentDetailNewResponse &&) = default ;
    QueryAiVoiceAgentDetailNewResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailNewResponse() = default ;
    QueryAiVoiceAgentDetailNewResponse& operator=(const QueryAiVoiceAgentDetailNewResponse &) = default ;
    QueryAiVoiceAgentDetailNewResponse& operator=(QueryAiVoiceAgentDetailNewResponse &&) = default ;
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
    inline QueryAiVoiceAgentDetailNewResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryAiVoiceAgentDetailNewResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryAiVoiceAgentDetailNewResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryAiVoiceAgentDetailNewResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, QueryAiVoiceAgentDetailNewResponseBody) };
    inline QueryAiVoiceAgentDetailNewResponseBody getBody() { DARABONBA_PTR_GET(body_, QueryAiVoiceAgentDetailNewResponseBody) };
    inline QueryAiVoiceAgentDetailNewResponse& setBody(const QueryAiVoiceAgentDetailNewResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryAiVoiceAgentDetailNewResponse& setBody(QueryAiVoiceAgentDetailNewResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<QueryAiVoiceAgentDetailNewResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
