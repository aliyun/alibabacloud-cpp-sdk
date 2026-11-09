// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGEOFCLIENTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGEOFCLIENTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryMqttTraceMessageOfClientResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryMqttTraceMessageOfClientResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMqttTraceMessageOfClientResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMqttTraceMessageOfClientResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryMqttTraceMessageOfClientResponse() = default ;
    QueryMqttTraceMessageOfClientResponse(const QueryMqttTraceMessageOfClientResponse &) = default ;
    QueryMqttTraceMessageOfClientResponse(QueryMqttTraceMessageOfClientResponse &&) = default ;
    QueryMqttTraceMessageOfClientResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMqttTraceMessageOfClientResponse() = default ;
    QueryMqttTraceMessageOfClientResponse& operator=(const QueryMqttTraceMessageOfClientResponse &) = default ;
    QueryMqttTraceMessageOfClientResponse& operator=(QueryMqttTraceMessageOfClientResponse &&) = default ;
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
    inline QueryMqttTraceMessageOfClientResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryMqttTraceMessageOfClientResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryMqttTraceMessageOfClientResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryMqttTraceMessageOfClientResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, QueryMqttTraceMessageOfClientResponseBody) };
    inline QueryMqttTraceMessageOfClientResponseBody getBody() { DARABONBA_PTR_GET(body_, QueryMqttTraceMessageOfClientResponseBody) };
    inline QueryMqttTraceMessageOfClientResponse& setBody(const QueryMqttTraceMessageOfClientResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryMqttTraceMessageOfClientResponse& setBody(QueryMqttTraceMessageOfClientResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<QueryMqttTraceMessageOfClientResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
