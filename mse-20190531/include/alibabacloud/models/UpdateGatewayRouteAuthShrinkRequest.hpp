// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEAUTHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEAUTHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteAuthShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteAuthShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthJSON, authJSONShrink_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteAuthShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthJSON, authJSONShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateGatewayRouteAuthShrinkRequest() = default ;
    UpdateGatewayRouteAuthShrinkRequest(const UpdateGatewayRouteAuthShrinkRequest &) = default ;
    UpdateGatewayRouteAuthShrinkRequest(UpdateGatewayRouteAuthShrinkRequest &&) = default ;
    UpdateGatewayRouteAuthShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteAuthShrinkRequest() = default ;
    UpdateGatewayRouteAuthShrinkRequest& operator=(const UpdateGatewayRouteAuthShrinkRequest &) = default ;
    UpdateGatewayRouteAuthShrinkRequest& operator=(UpdateGatewayRouteAuthShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->authJSONShrink_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->id_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteAuthShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authJSONShrink Field Functions 
    bool hasAuthJSONShrink() const { return this->authJSONShrink_ != nullptr;};
    void deleteAuthJSONShrink() { this->authJSONShrink_ = nullptr;};
    inline string authJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(authJSONShrink_, "") };
    inline UpdateGatewayRouteAuthShrinkRequest& setAuthJSONShrink(string authJSONShrink) { DARABONBA_PTR_SET_VALUE(authJSONShrink_, authJSONShrink) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteAuthShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteAuthShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteAuthShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The authentication configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> authJSONShrink_ = nullptr;
    // The gateway ID.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The route ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
