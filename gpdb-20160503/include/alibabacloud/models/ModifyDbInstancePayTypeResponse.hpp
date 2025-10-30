// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEPAYTYPERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEPAYTYPERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModifyDBInstancePayTypeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyDBInstancePayTypeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstancePayTypeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstancePayTypeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyDBInstancePayTypeResponse() = default ;
    ModifyDBInstancePayTypeResponse(const ModifyDBInstancePayTypeResponse &) = default ;
    ModifyDBInstancePayTypeResponse(ModifyDBInstancePayTypeResponse &&) = default ;
    ModifyDBInstancePayTypeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstancePayTypeResponse() = default ;
    ModifyDBInstancePayTypeResponse& operator=(const ModifyDBInstancePayTypeResponse &) = default ;
    ModifyDBInstancePayTypeResponse& operator=(ModifyDBInstancePayTypeResponse &&) = default ;
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
    inline ModifyDBInstancePayTypeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyDBInstancePayTypeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyDBInstancePayTypeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyDBInstancePayTypeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyDBInstancePayTypeResponseBody) };
    inline ModifyDBInstancePayTypeResponseBody body() { DARABONBA_PTR_GET(body_, ModifyDBInstancePayTypeResponseBody) };
    inline ModifyDBInstancePayTypeResponse& setBody(const ModifyDBInstancePayTypeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyDBInstancePayTypeResponse& setBody(ModifyDBInstancePayTypeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyDBInstancePayTypeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
