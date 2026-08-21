// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETQUERYREFUNDORDERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_TICKETQUERYREFUNDORDERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/TicketQueryRefundOrderResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketQueryRefundOrderResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketQueryRefundOrderResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, TicketQueryRefundOrderResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    TicketQueryRefundOrderResponse() = default ;
    TicketQueryRefundOrderResponse(const TicketQueryRefundOrderResponse &) = default ;
    TicketQueryRefundOrderResponse(TicketQueryRefundOrderResponse &&) = default ;
    TicketQueryRefundOrderResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketQueryRefundOrderResponse() = default ;
    TicketQueryRefundOrderResponse& operator=(const TicketQueryRefundOrderResponse &) = default ;
    TicketQueryRefundOrderResponse& operator=(TicketQueryRefundOrderResponse &&) = default ;
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
    inline TicketQueryRefundOrderResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline TicketQueryRefundOrderResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline TicketQueryRefundOrderResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const TicketQueryRefundOrderResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, TicketQueryRefundOrderResponseBody) };
    inline TicketQueryRefundOrderResponseBody getBody() { DARABONBA_PTR_GET(body_, TicketQueryRefundOrderResponseBody) };
    inline TicketQueryRefundOrderResponse& setBody(const TicketQueryRefundOrderResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline TicketQueryRefundOrderResponse& setBody(TicketQueryRefundOrderResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<TicketQueryRefundOrderResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
