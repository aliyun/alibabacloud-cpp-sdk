// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETRAFICMATCHRULEFROMTRAFFICMARKINGPOLICYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_REMOVETRAFICMATCHRULEFROMTRAFFICMARKINGPOLICYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse() = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse(const RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse &) = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse(RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse &&) = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse() = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& operator=(const RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse &) = default ;
    RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& operator=(RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse &&) = default ;
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
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody body() { DARABONBA_PTR_GET(body_, RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& setBody(const RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RemoveTraficMatchRuleFromTrafficMarkingPolicyResponse& setBody(RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<RemoveTraficMatchRuleFromTrafficMarkingPolicyResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
