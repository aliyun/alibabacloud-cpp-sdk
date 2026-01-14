// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AuthJSON, authJSON_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AuthJSON, authJSON_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    UpdateGatewayRouteAuthRequest() = default ;
    UpdateGatewayRouteAuthRequest(const UpdateGatewayRouteAuthRequest &) = default ;
    UpdateGatewayRouteAuthRequest(UpdateGatewayRouteAuthRequest &&) = default ;
    UpdateGatewayRouteAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteAuthRequest() = default ;
    UpdateGatewayRouteAuthRequest& operator=(const UpdateGatewayRouteAuthRequest &) = default ;
    UpdateGatewayRouteAuthRequest& operator=(UpdateGatewayRouteAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthJSON : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthJSON& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AuthJSON& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AuthJSON() = default ;
      AuthJSON(const AuthJSON &) = default ;
      AuthJSON(AuthJSON &&) = default ;
      AuthJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthJSON() = default ;
      AuthJSON& operator=(const AuthJSON &) = default ;
      AuthJSON& operator=(AuthJSON &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AuthJSON& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The authentication type. If an empty string is passed, no authentication type is available. Valid values:
      // 
      // *   JWT
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->authJSON_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteAuthRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // authJSON Field Functions 
    bool hasAuthJSON() const { return this->authJSON_ != nullptr;};
    void deleteAuthJSON() { this->authJSON_ = nullptr;};
    inline const UpdateGatewayRouteAuthRequest::AuthJSON & getAuthJSON() const { DARABONBA_PTR_GET_CONST(authJSON_, UpdateGatewayRouteAuthRequest::AuthJSON) };
    inline UpdateGatewayRouteAuthRequest::AuthJSON getAuthJSON() { DARABONBA_PTR_GET(authJSON_, UpdateGatewayRouteAuthRequest::AuthJSON) };
    inline UpdateGatewayRouteAuthRequest& setAuthJSON(const UpdateGatewayRouteAuthRequest::AuthJSON & authJSON) { DARABONBA_PTR_SET_VALUE(authJSON_, authJSON) };
    inline UpdateGatewayRouteAuthRequest& setAuthJSON(UpdateGatewayRouteAuthRequest::AuthJSON && authJSON) { DARABONBA_PTR_SET_RVALUE(authJSON_, authJSON) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteAuthRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteAuthRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteAuthRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The authentication configurations.
    // 
    // This parameter is required.
    shared_ptr<UpdateGatewayRouteAuthRequest::AuthJSON> authJSON_ {};
    // The gateway ID.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayUniqueId_ {};
    // The route ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
