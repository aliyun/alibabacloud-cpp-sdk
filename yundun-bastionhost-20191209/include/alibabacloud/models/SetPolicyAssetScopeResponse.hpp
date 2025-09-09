// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYASSETSCOPERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SetPolicyAssetScopeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyAssetScopeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAssetScopeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAssetScopeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SetPolicyAssetScopeResponse() = default ;
    SetPolicyAssetScopeResponse(const SetPolicyAssetScopeResponse &) = default ;
    SetPolicyAssetScopeResponse(SetPolicyAssetScopeResponse &&) = default ;
    SetPolicyAssetScopeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAssetScopeResponse() = default ;
    SetPolicyAssetScopeResponse& operator=(const SetPolicyAssetScopeResponse &) = default ;
    SetPolicyAssetScopeResponse& operator=(SetPolicyAssetScopeResponse &&) = default ;
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
    inline SetPolicyAssetScopeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SetPolicyAssetScopeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SetPolicyAssetScopeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SetPolicyAssetScopeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, SetPolicyAssetScopeResponseBody) };
    inline SetPolicyAssetScopeResponseBody body() { DARABONBA_PTR_GET(body_, SetPolicyAssetScopeResponseBody) };
    inline SetPolicyAssetScopeResponse& setBody(const SetPolicyAssetScopeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SetPolicyAssetScopeResponse& setBody(SetPolicyAssetScopeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<SetPolicyAssetScopeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
