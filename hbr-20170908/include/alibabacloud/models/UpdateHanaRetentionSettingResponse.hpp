// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHANARETENTIONSETTINGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHANARETENTIONSETTINGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateHanaRetentionSettingResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateHanaRetentionSettingResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHanaRetentionSettingResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHanaRetentionSettingResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateHanaRetentionSettingResponse() = default ;
    UpdateHanaRetentionSettingResponse(const UpdateHanaRetentionSettingResponse &) = default ;
    UpdateHanaRetentionSettingResponse(UpdateHanaRetentionSettingResponse &&) = default ;
    UpdateHanaRetentionSettingResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHanaRetentionSettingResponse() = default ;
    UpdateHanaRetentionSettingResponse& operator=(const UpdateHanaRetentionSettingResponse &) = default ;
    UpdateHanaRetentionSettingResponse& operator=(UpdateHanaRetentionSettingResponse &&) = default ;
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
    inline UpdateHanaRetentionSettingResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateHanaRetentionSettingResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateHanaRetentionSettingResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateHanaRetentionSettingResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateHanaRetentionSettingResponseBody) };
    inline UpdateHanaRetentionSettingResponseBody body() { DARABONBA_PTR_GET(body_, UpdateHanaRetentionSettingResponseBody) };
    inline UpdateHanaRetentionSettingResponse& setBody(const UpdateHanaRetentionSettingResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateHanaRetentionSettingResponse& setBody(UpdateHanaRetentionSettingResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateHanaRetentionSettingResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
