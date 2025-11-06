// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTERETRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTERETRYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateGatewayRouteRetryRequestRetryJSON.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteRetryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRetryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RetryJSON, retryJSON_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRetryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RetryJSON, retryJSON_);
    };
    UpdateGatewayRouteRetryRequest() = default ;
    UpdateGatewayRouteRetryRequest(const UpdateGatewayRouteRetryRequest &) = default ;
    UpdateGatewayRouteRetryRequest(UpdateGatewayRouteRetryRequest &&) = default ;
    UpdateGatewayRouteRetryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRetryRequest() = default ;
    UpdateGatewayRouteRetryRequest& operator=(const UpdateGatewayRouteRetryRequest &) = default ;
    UpdateGatewayRouteRetryRequest& operator=(UpdateGatewayRouteRetryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->id_ == nullptr && return this->retryJSON_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteRetryRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteRetryRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteRetryRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteRetryRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // retryJSON Field Functions 
    bool hasRetryJSON() const { return this->retryJSON_ != nullptr;};
    void deleteRetryJSON() { this->retryJSON_ = nullptr;};
    inline const UpdateGatewayRouteRetryRequestRetryJSON & retryJSON() const { DARABONBA_PTR_GET_CONST(retryJSON_, UpdateGatewayRouteRetryRequestRetryJSON) };
    inline UpdateGatewayRouteRetryRequestRetryJSON retryJSON() { DARABONBA_PTR_GET(retryJSON_, UpdateGatewayRouteRetryRequestRetryJSON) };
    inline UpdateGatewayRouteRetryRequest& setRetryJSON(const UpdateGatewayRouteRetryRequestRetryJSON & retryJSON) { DARABONBA_PTR_SET_VALUE(retryJSON_, retryJSON) };
    inline UpdateGatewayRouteRetryRequest& setRetryJSON(UpdateGatewayRouteRetryRequestRetryJSON && retryJSON) { DARABONBA_PTR_SET_RVALUE(retryJSON_, retryJSON) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the associated record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The information about the retry policy.
    std::shared_ptr<UpdateGatewayRouteRetryRequestRetryJSON> retryJSON_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
