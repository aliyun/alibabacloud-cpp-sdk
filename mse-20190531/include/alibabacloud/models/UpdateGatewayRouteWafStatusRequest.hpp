// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteWafStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
    };
    UpdateGatewayRouteWafStatusRequest() = default ;
    UpdateGatewayRouteWafStatusRequest(const UpdateGatewayRouteWafStatusRequest &) = default ;
    UpdateGatewayRouteWafStatusRequest(UpdateGatewayRouteWafStatusRequest &&) = default ;
    UpdateGatewayRouteWafStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusRequest() = default ;
    UpdateGatewayRouteWafStatusRequest& operator=(const UpdateGatewayRouteWafStatusRequest &) = default ;
    UpdateGatewayRouteWafStatusRequest& operator=(UpdateGatewayRouteWafStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->enableWaf_ == nullptr && this->gatewayUniqueId_ == nullptr && this->routeId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteWafStatusRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool getEnableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline UpdateGatewayRouteWafStatusRequest& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteWafStatusRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
    inline UpdateGatewayRouteWafStatusRequest& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to activate Web Application Firewall (WAF).
    shared_ptr<bool> enableWaf_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The ID of the route.
    shared_ptr<int64_t> routeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
