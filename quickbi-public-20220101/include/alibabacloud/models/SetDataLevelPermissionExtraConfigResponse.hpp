// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDATALEVELPERMISSIONEXTRACONFIGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SETDATALEVELPERMISSIONEXTRACONFIGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SetDataLevelPermissionExtraConfigResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SetDataLevelPermissionExtraConfigResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDataLevelPermissionExtraConfigResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SetDataLevelPermissionExtraConfigResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SetDataLevelPermissionExtraConfigResponse() = default ;
    SetDataLevelPermissionExtraConfigResponse(const SetDataLevelPermissionExtraConfigResponse &) = default ;
    SetDataLevelPermissionExtraConfigResponse(SetDataLevelPermissionExtraConfigResponse &&) = default ;
    SetDataLevelPermissionExtraConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDataLevelPermissionExtraConfigResponse() = default ;
    SetDataLevelPermissionExtraConfigResponse& operator=(const SetDataLevelPermissionExtraConfigResponse &) = default ;
    SetDataLevelPermissionExtraConfigResponse& operator=(SetDataLevelPermissionExtraConfigResponse &&) = default ;
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
    inline SetDataLevelPermissionExtraConfigResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SetDataLevelPermissionExtraConfigResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SetDataLevelPermissionExtraConfigResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SetDataLevelPermissionExtraConfigResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, SetDataLevelPermissionExtraConfigResponseBody) };
    inline SetDataLevelPermissionExtraConfigResponseBody body() { DARABONBA_PTR_GET(body_, SetDataLevelPermissionExtraConfigResponseBody) };
    inline SetDataLevelPermissionExtraConfigResponse& setBody(const SetDataLevelPermissionExtraConfigResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SetDataLevelPermissionExtraConfigResponse& setBody(SetDataLevelPermissionExtraConfigResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<SetDataLevelPermissionExtraConfigResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
