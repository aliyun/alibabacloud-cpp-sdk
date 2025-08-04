// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNASDEFAULTMOUNTTARGETRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNASDEFAULTMOUNTTARGETRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyNASDefaultMountTargetResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNASDefaultMountTargetResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNASDefaultMountTargetResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyNASDefaultMountTargetResponse() = default ;
    ModifyNASDefaultMountTargetResponse(const ModifyNASDefaultMountTargetResponse &) = default ;
    ModifyNASDefaultMountTargetResponse(ModifyNASDefaultMountTargetResponse &&) = default ;
    ModifyNASDefaultMountTargetResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNASDefaultMountTargetResponse() = default ;
    ModifyNASDefaultMountTargetResponse& operator=(const ModifyNASDefaultMountTargetResponse &) = default ;
    ModifyNASDefaultMountTargetResponse& operator=(ModifyNASDefaultMountTargetResponse &&) = default ;
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
    inline ModifyNASDefaultMountTargetResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ModifyNASDefaultMountTargetResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ModifyNASDefaultMountTargetResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyNASDefaultMountTargetResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ModifyNASDefaultMountTargetResponseBody) };
    inline ModifyNASDefaultMountTargetResponseBody body() { DARABONBA_PTR_GET(body_, ModifyNASDefaultMountTargetResponseBody) };
    inline ModifyNASDefaultMountTargetResponse& setBody(const ModifyNASDefaultMountTargetResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyNASDefaultMountTargetResponse& setBody(ModifyNASDefaultMountTargetResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ModifyNASDefaultMountTargetResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
