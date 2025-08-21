// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBCACHECUSTOMRULERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBCACHECUSTOMRULERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyWebCacheCustomRuleResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyWebCacheCustomRuleResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebCacheCustomRuleResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebCacheCustomRuleResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyWebCacheCustomRuleResponse() = default ;
    ModifyWebCacheCustomRuleResponse(const ModifyWebCacheCustomRuleResponse &) = default ;
    ModifyWebCacheCustomRuleResponse(ModifyWebCacheCustomRuleResponse &&) = default ;
    ModifyWebCacheCustomRuleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebCacheCustomRuleResponse() = default ;
    ModifyWebCacheCustomRuleResponse& operator=(const ModifyWebCacheCustomRuleResponse &) = default ;
    ModifyWebCacheCustomRuleResponse& operator=(ModifyWebCacheCustomRuleResponse &&) = default ;
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
    inline ModifyWebCacheCustomRuleResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyWebCacheCustomRuleResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyWebCacheCustomRuleResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyWebCacheCustomRuleResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyWebCacheCustomRuleResponseBody) };
    inline ModifyWebCacheCustomRuleResponseBody body() { DARABONBA_PTR_GET(body_, ModifyWebCacheCustomRuleResponseBody) };
    inline ModifyWebCacheCustomRuleResponse& setBody(const ModifyWebCacheCustomRuleResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyWebCacheCustomRuleResponse& setBody(ModifyWebCacheCustomRuleResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyWebCacheCustomRuleResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
