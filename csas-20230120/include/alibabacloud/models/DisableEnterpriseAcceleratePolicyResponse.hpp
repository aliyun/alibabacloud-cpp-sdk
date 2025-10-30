// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEENTERPRISEACCELERATEPOLICYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DISABLEENTERPRISEACCELERATEPOLICYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DisableEnterpriseAcceleratePolicyResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DisableEnterpriseAcceleratePolicyResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableEnterpriseAcceleratePolicyResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DisableEnterpriseAcceleratePolicyResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DisableEnterpriseAcceleratePolicyResponse() = default ;
    DisableEnterpriseAcceleratePolicyResponse(const DisableEnterpriseAcceleratePolicyResponse &) = default ;
    DisableEnterpriseAcceleratePolicyResponse(DisableEnterpriseAcceleratePolicyResponse &&) = default ;
    DisableEnterpriseAcceleratePolicyResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableEnterpriseAcceleratePolicyResponse() = default ;
    DisableEnterpriseAcceleratePolicyResponse& operator=(const DisableEnterpriseAcceleratePolicyResponse &) = default ;
    DisableEnterpriseAcceleratePolicyResponse& operator=(DisableEnterpriseAcceleratePolicyResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DisableEnterpriseAcceleratePolicyResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DisableEnterpriseAcceleratePolicyResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DisableEnterpriseAcceleratePolicyResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DisableEnterpriseAcceleratePolicyResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DisableEnterpriseAcceleratePolicyResponseBody) };
    inline DisableEnterpriseAcceleratePolicyResponseBody body() { DARABONBA_PTR_GET(body_, DisableEnterpriseAcceleratePolicyResponseBody) };
    inline DisableEnterpriseAcceleratePolicyResponse& setBody(const DisableEnterpriseAcceleratePolicyResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DisableEnterpriseAcceleratePolicyResponse& setBody(DisableEnterpriseAcceleratePolicyResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DisableEnterpriseAcceleratePolicyResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
