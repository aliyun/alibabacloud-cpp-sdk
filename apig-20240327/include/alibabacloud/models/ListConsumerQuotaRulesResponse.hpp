// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERQUOTARULESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERQUOTARULESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListConsumerQuotaRulesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListConsumerQuotaRulesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerQuotaRulesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerQuotaRulesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListConsumerQuotaRulesResponse() = default ;
    ListConsumerQuotaRulesResponse(const ListConsumerQuotaRulesResponse &) = default ;
    ListConsumerQuotaRulesResponse(ListConsumerQuotaRulesResponse &&) = default ;
    ListConsumerQuotaRulesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerQuotaRulesResponse() = default ;
    ListConsumerQuotaRulesResponse& operator=(const ListConsumerQuotaRulesResponse &) = default ;
    ListConsumerQuotaRulesResponse& operator=(ListConsumerQuotaRulesResponse &&) = default ;
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
    inline ListConsumerQuotaRulesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListConsumerQuotaRulesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListConsumerQuotaRulesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListConsumerQuotaRulesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListConsumerQuotaRulesResponseBody) };
    inline ListConsumerQuotaRulesResponseBody getBody() { DARABONBA_PTR_GET(body_, ListConsumerQuotaRulesResponseBody) };
    inline ListConsumerQuotaRulesResponse& setBody(const ListConsumerQuotaRulesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListConsumerQuotaRulesResponse& setBody(ListConsumerQuotaRulesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListConsumerQuotaRulesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
