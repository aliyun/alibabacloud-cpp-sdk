// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRENDERINGINSTANCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRENDERINGINSTANCERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyRenderingInstanceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ModifyRenderingInstanceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRenderingInstanceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRenderingInstanceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyRenderingInstanceResponse() = default ;
    ModifyRenderingInstanceResponse(const ModifyRenderingInstanceResponse &) = default ;
    ModifyRenderingInstanceResponse(ModifyRenderingInstanceResponse &&) = default ;
    ModifyRenderingInstanceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRenderingInstanceResponse() = default ;
    ModifyRenderingInstanceResponse& operator=(const ModifyRenderingInstanceResponse &) = default ;
    ModifyRenderingInstanceResponse& operator=(ModifyRenderingInstanceResponse &&) = default ;
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
    inline ModifyRenderingInstanceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyRenderingInstanceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyRenderingInstanceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyRenderingInstanceResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyRenderingInstanceResponseBody) };
    inline ModifyRenderingInstanceResponseBody body() { DARABONBA_PTR_GET(body_, ModifyRenderingInstanceResponseBody) };
    inline ModifyRenderingInstanceResponse& setBody(const ModifyRenderingInstanceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyRenderingInstanceResponse& setBody(ModifyRenderingInstanceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyRenderingInstanceResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
