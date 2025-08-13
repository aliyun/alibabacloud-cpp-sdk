// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODYDATAEXTERNALAUTHZ_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYAUTHDETAILRESPONSEBODYDATAEXTERNALAUTHZ_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGatewayAuthDetailResponseBodyDataExternalAuthZService.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayAuthDetailResponseBodyDataExternalAuthZ : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayAuthDetailResponseBodyDataExternalAuthZ& obj) { 
      DARABONBA_PTR_TO_JSON(AllowRequestHeaders, allowRequestHeaders_);
      DARABONBA_PTR_TO_JSON(AllowUpstreamHeaders, allowUpstreamHeaders_);
      DARABONBA_PTR_TO_JSON(BodyMaxBytes, bodyMaxBytes_);
      DARABONBA_PTR_TO_JSON(IsRestrict, isRestrict_);
      DARABONBA_PTR_TO_JSON(PrefixPath, prefixPath_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TokenKey, tokenKey_);
      DARABONBA_PTR_TO_JSON(WithRematchRoute, withRematchRoute_);
      DARABONBA_PTR_TO_JSON(WithRequestBody, withRequestBody_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayAuthDetailResponseBodyDataExternalAuthZ& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowRequestHeaders, allowRequestHeaders_);
      DARABONBA_PTR_FROM_JSON(AllowUpstreamHeaders, allowUpstreamHeaders_);
      DARABONBA_PTR_FROM_JSON(BodyMaxBytes, bodyMaxBytes_);
      DARABONBA_PTR_FROM_JSON(IsRestrict, isRestrict_);
      DARABONBA_PTR_FROM_JSON(PrefixPath, prefixPath_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TokenKey, tokenKey_);
      DARABONBA_PTR_FROM_JSON(WithRematchRoute, withRematchRoute_);
      DARABONBA_PTR_FROM_JSON(WithRequestBody, withRequestBody_);
    };
    GetGatewayAuthDetailResponseBodyDataExternalAuthZ() = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZ(const GetGatewayAuthDetailResponseBodyDataExternalAuthZ &) = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZ(GetGatewayAuthDetailResponseBodyDataExternalAuthZ &&) = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZ(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayAuthDetailResponseBodyDataExternalAuthZ() = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZ& operator=(const GetGatewayAuthDetailResponseBodyDataExternalAuthZ &) = default ;
    GetGatewayAuthDetailResponseBodyDataExternalAuthZ& operator=(GetGatewayAuthDetailResponseBodyDataExternalAuthZ &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowRequestHeaders_ != nullptr
        && this->allowUpstreamHeaders_ != nullptr && this->bodyMaxBytes_ != nullptr && this->isRestrict_ != nullptr && this->prefixPath_ != nullptr && this->service_ != nullptr
        && this->serviceId_ != nullptr && this->timeout_ != nullptr && this->tokenKey_ != nullptr && this->withRematchRoute_ != nullptr && this->withRequestBody_ != nullptr; };
    // allowRequestHeaders Field Functions 
    bool hasAllowRequestHeaders() const { return this->allowRequestHeaders_ != nullptr;};
    void deleteAllowRequestHeaders() { this->allowRequestHeaders_ = nullptr;};
    inline const vector<string> & allowRequestHeaders() const { DARABONBA_PTR_GET_CONST(allowRequestHeaders_, vector<string>) };
    inline vector<string> allowRequestHeaders() { DARABONBA_PTR_GET(allowRequestHeaders_, vector<string>) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setAllowRequestHeaders(const vector<string> & allowRequestHeaders) { DARABONBA_PTR_SET_VALUE(allowRequestHeaders_, allowRequestHeaders) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setAllowRequestHeaders(vector<string> && allowRequestHeaders) { DARABONBA_PTR_SET_RVALUE(allowRequestHeaders_, allowRequestHeaders) };


    // allowUpstreamHeaders Field Functions 
    bool hasAllowUpstreamHeaders() const { return this->allowUpstreamHeaders_ != nullptr;};
    void deleteAllowUpstreamHeaders() { this->allowUpstreamHeaders_ = nullptr;};
    inline const vector<string> & allowUpstreamHeaders() const { DARABONBA_PTR_GET_CONST(allowUpstreamHeaders_, vector<string>) };
    inline vector<string> allowUpstreamHeaders() { DARABONBA_PTR_GET(allowUpstreamHeaders_, vector<string>) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setAllowUpstreamHeaders(const vector<string> & allowUpstreamHeaders) { DARABONBA_PTR_SET_VALUE(allowUpstreamHeaders_, allowUpstreamHeaders) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setAllowUpstreamHeaders(vector<string> && allowUpstreamHeaders) { DARABONBA_PTR_SET_RVALUE(allowUpstreamHeaders_, allowUpstreamHeaders) };


    // bodyMaxBytes Field Functions 
    bool hasBodyMaxBytes() const { return this->bodyMaxBytes_ != nullptr;};
    void deleteBodyMaxBytes() { this->bodyMaxBytes_ = nullptr;};
    inline int32_t bodyMaxBytes() const { DARABONBA_PTR_GET_DEFAULT(bodyMaxBytes_, 0) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setBodyMaxBytes(int32_t bodyMaxBytes) { DARABONBA_PTR_SET_VALUE(bodyMaxBytes_, bodyMaxBytes) };


    // isRestrict Field Functions 
    bool hasIsRestrict() const { return this->isRestrict_ != nullptr;};
    void deleteIsRestrict() { this->isRestrict_ = nullptr;};
    inline bool isRestrict() const { DARABONBA_PTR_GET_DEFAULT(isRestrict_, false) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setIsRestrict(bool isRestrict) { DARABONBA_PTR_SET_VALUE(isRestrict_, isRestrict) };


    // prefixPath Field Functions 
    bool hasPrefixPath() const { return this->prefixPath_ != nullptr;};
    void deletePrefixPath() { this->prefixPath_ = nullptr;};
    inline string prefixPath() const { DARABONBA_PTR_GET_DEFAULT(prefixPath_, "") };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setPrefixPath(string prefixPath) { DARABONBA_PTR_SET_VALUE(prefixPath_, prefixPath) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline const Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZService & service() const { DARABONBA_PTR_GET_CONST(service_, Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZService) };
    inline Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZService service() { DARABONBA_PTR_GET(service_, Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZService) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setService(const Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZService & service) { DARABONBA_PTR_SET_VALUE(service_, service) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setService(Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZService && service) { DARABONBA_PTR_SET_RVALUE(service_, service) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // tokenKey Field Functions 
    bool hasTokenKey() const { return this->tokenKey_ != nullptr;};
    void deleteTokenKey() { this->tokenKey_ = nullptr;};
    inline string tokenKey() const { DARABONBA_PTR_GET_DEFAULT(tokenKey_, "") };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setTokenKey(string tokenKey) { DARABONBA_PTR_SET_VALUE(tokenKey_, tokenKey) };


    // withRematchRoute Field Functions 
    bool hasWithRematchRoute() const { return this->withRematchRoute_ != nullptr;};
    void deleteWithRematchRoute() { this->withRematchRoute_ = nullptr;};
    inline bool withRematchRoute() const { DARABONBA_PTR_GET_DEFAULT(withRematchRoute_, false) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setWithRematchRoute(bool withRematchRoute) { DARABONBA_PTR_SET_VALUE(withRematchRoute_, withRematchRoute) };


    // withRequestBody Field Functions 
    bool hasWithRequestBody() const { return this->withRequestBody_ != nullptr;};
    void deleteWithRequestBody() { this->withRequestBody_ = nullptr;};
    inline bool withRequestBody() const { DARABONBA_PTR_GET_DEFAULT(withRequestBody_, false) };
    inline GetGatewayAuthDetailResponseBodyDataExternalAuthZ& setWithRequestBody(bool withRequestBody) { DARABONBA_PTR_SET_VALUE(withRequestBody_, withRequestBody) };


  protected:
    std::shared_ptr<vector<string>> allowRequestHeaders_ = nullptr;
    std::shared_ptr<vector<string>> allowUpstreamHeaders_ = nullptr;
    std::shared_ptr<int32_t> bodyMaxBytes_ = nullptr;
    std::shared_ptr<bool> isRestrict_ = nullptr;
    std::shared_ptr<string> prefixPath_ = nullptr;
    std::shared_ptr<Models::GetGatewayAuthDetailResponseBodyDataExternalAuthZService> service_ = nullptr;
    std::shared_ptr<int64_t> serviceId_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> tokenKey_ = nullptr;
    std::shared_ptr<bool> withRematchRoute_ = nullptr;
    std::shared_ptr<bool> withRequestBody_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
