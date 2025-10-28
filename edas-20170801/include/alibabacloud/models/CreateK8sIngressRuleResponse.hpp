// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEK8SINGRESSRULERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEK8SINGRESSRULERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateK8sIngressRuleResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class CreateK8sIngressRuleResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateK8sIngressRuleResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateK8sIngressRuleResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateK8sIngressRuleResponse() = default ;
    CreateK8sIngressRuleResponse(const CreateK8sIngressRuleResponse &) = default ;
    CreateK8sIngressRuleResponse(CreateK8sIngressRuleResponse &&) = default ;
    CreateK8sIngressRuleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateK8sIngressRuleResponse() = default ;
    CreateK8sIngressRuleResponse& operator=(const CreateK8sIngressRuleResponse &) = default ;
    CreateK8sIngressRuleResponse& operator=(CreateK8sIngressRuleResponse &&) = default ;
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
    inline CreateK8sIngressRuleResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateK8sIngressRuleResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateK8sIngressRuleResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateK8sIngressRuleResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateK8sIngressRuleResponseBody) };
    inline CreateK8sIngressRuleResponseBody body() { DARABONBA_PTR_GET(body_, CreateK8sIngressRuleResponseBody) };
    inline CreateK8sIngressRuleResponse& setBody(const CreateK8sIngressRuleResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateK8sIngressRuleResponse& setBody(CreateK8sIngressRuleResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateK8sIngressRuleResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
