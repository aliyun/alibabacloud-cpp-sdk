// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBLOCKUNBINDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBLOCKUNBINDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyWebLockUnbindResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyWebLockUnbindResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebLockUnbindResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebLockUnbindResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyWebLockUnbindResponse() = default ;
    ModifyWebLockUnbindResponse(const ModifyWebLockUnbindResponse &) = default ;
    ModifyWebLockUnbindResponse(ModifyWebLockUnbindResponse &&) = default ;
    ModifyWebLockUnbindResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebLockUnbindResponse() = default ;
    ModifyWebLockUnbindResponse& operator=(const ModifyWebLockUnbindResponse &) = default ;
    ModifyWebLockUnbindResponse& operator=(ModifyWebLockUnbindResponse &&) = default ;
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
    inline ModifyWebLockUnbindResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyWebLockUnbindResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyWebLockUnbindResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyWebLockUnbindResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyWebLockUnbindResponseBody) };
    inline ModifyWebLockUnbindResponseBody body() { DARABONBA_PTR_GET(body_, ModifyWebLockUnbindResponseBody) };
    inline ModifyWebLockUnbindResponse& setBody(const ModifyWebLockUnbindResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyWebLockUnbindResponse& setBody(ModifyWebLockUnbindResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyWebLockUnbindResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
