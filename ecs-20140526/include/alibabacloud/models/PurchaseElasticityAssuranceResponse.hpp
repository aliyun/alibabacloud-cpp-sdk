// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEELASTICITYASSURANCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEELASTICITYASSURANCERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/PurchaseElasticityAssuranceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class PurchaseElasticityAssuranceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseElasticityAssuranceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseElasticityAssuranceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PurchaseElasticityAssuranceResponse() = default ;
    PurchaseElasticityAssuranceResponse(const PurchaseElasticityAssuranceResponse &) = default ;
    PurchaseElasticityAssuranceResponse(PurchaseElasticityAssuranceResponse &&) = default ;
    PurchaseElasticityAssuranceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseElasticityAssuranceResponse() = default ;
    PurchaseElasticityAssuranceResponse& operator=(const PurchaseElasticityAssuranceResponse &) = default ;
    PurchaseElasticityAssuranceResponse& operator=(PurchaseElasticityAssuranceResponse &&) = default ;
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
    inline PurchaseElasticityAssuranceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline PurchaseElasticityAssuranceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline PurchaseElasticityAssuranceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PurchaseElasticityAssuranceResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, PurchaseElasticityAssuranceResponseBody) };
    inline PurchaseElasticityAssuranceResponseBody body() { DARABONBA_PTR_GET(body_, PurchaseElasticityAssuranceResponseBody) };
    inline PurchaseElasticityAssuranceResponse& setBody(const PurchaseElasticityAssuranceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PurchaseElasticityAssuranceResponse& setBody(PurchaseElasticityAssuranceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<PurchaseElasticityAssuranceResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
