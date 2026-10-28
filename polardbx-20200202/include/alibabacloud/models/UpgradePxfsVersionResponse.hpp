// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEPXFSVERSIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEPXFSVERSIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpgradePxfsVersionResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpgradePxfsVersionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradePxfsVersionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradePxfsVersionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpgradePxfsVersionResponse() = default ;
    UpgradePxfsVersionResponse(const UpgradePxfsVersionResponse &) = default ;
    UpgradePxfsVersionResponse(UpgradePxfsVersionResponse &&) = default ;
    UpgradePxfsVersionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradePxfsVersionResponse() = default ;
    UpgradePxfsVersionResponse& operator=(const UpgradePxfsVersionResponse &) = default ;
    UpgradePxfsVersionResponse& operator=(UpgradePxfsVersionResponse &&) = default ;
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
    inline UpgradePxfsVersionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpgradePxfsVersionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpgradePxfsVersionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpgradePxfsVersionResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpgradePxfsVersionResponseBody) };
    inline UpgradePxfsVersionResponseBody getBody() { DARABONBA_PTR_GET(body_, UpgradePxfsVersionResponseBody) };
    inline UpgradePxfsVersionResponse& setBody(const UpgradePxfsVersionResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpgradePxfsVersionResponse& setBody(UpgradePxfsVersionResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpgradePxfsVersionResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
