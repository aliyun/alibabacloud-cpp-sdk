// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOICEADDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_INVOICEADDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/InvoiceAddResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InvoiceAddResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvoiceAddResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, InvoiceAddResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    InvoiceAddResponse() = default ;
    InvoiceAddResponse(const InvoiceAddResponse &) = default ;
    InvoiceAddResponse(InvoiceAddResponse &&) = default ;
    InvoiceAddResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvoiceAddResponse() = default ;
    InvoiceAddResponse& operator=(const InvoiceAddResponse &) = default ;
    InvoiceAddResponse& operator=(InvoiceAddResponse &&) = default ;
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
    inline InvoiceAddResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline InvoiceAddResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline InvoiceAddResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const InvoiceAddResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, InvoiceAddResponseBody) };
    inline InvoiceAddResponseBody body() { DARABONBA_PTR_GET(body_, InvoiceAddResponseBody) };
    inline InvoiceAddResponse& setBody(const InvoiceAddResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline InvoiceAddResponse& setBody(InvoiceAddResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<InvoiceAddResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
