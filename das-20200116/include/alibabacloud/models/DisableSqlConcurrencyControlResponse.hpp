// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESQLCONCURRENCYCONTROLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DISABLESQLCONCURRENCYCONTROLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DisableSqlConcurrencyControlResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableSqlConcurrencyControlResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSqlConcurrencyControlResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSqlConcurrencyControlResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DisableSqlConcurrencyControlResponse() = default ;
    DisableSqlConcurrencyControlResponse(const DisableSqlConcurrencyControlResponse &) = default ;
    DisableSqlConcurrencyControlResponse(DisableSqlConcurrencyControlResponse &&) = default ;
    DisableSqlConcurrencyControlResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSqlConcurrencyControlResponse() = default ;
    DisableSqlConcurrencyControlResponse& operator=(const DisableSqlConcurrencyControlResponse &) = default ;
    DisableSqlConcurrencyControlResponse& operator=(DisableSqlConcurrencyControlResponse &&) = default ;
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
    inline DisableSqlConcurrencyControlResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DisableSqlConcurrencyControlResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DisableSqlConcurrencyControlResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DisableSqlConcurrencyControlResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DisableSqlConcurrencyControlResponseBody) };
    inline DisableSqlConcurrencyControlResponseBody getBody() { DARABONBA_PTR_GET(body_, DisableSqlConcurrencyControlResponseBody) };
    inline DisableSqlConcurrencyControlResponse& setBody(const DisableSqlConcurrencyControlResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DisableSqlConcurrencyControlResponse& setBody(DisableSqlConcurrencyControlResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DisableSqlConcurrencyControlResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
