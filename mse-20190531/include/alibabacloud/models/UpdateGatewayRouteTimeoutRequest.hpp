// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTETIMEOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTETIMEOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateGatewayRouteTimeoutRequestTimeoutJSON.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteTimeoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteTimeoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(TimeoutJSON, timeoutJSON_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteTimeoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(TimeoutJSON, timeoutJSON_);
    };
    UpdateGatewayRouteTimeoutRequest() = default ;
    UpdateGatewayRouteTimeoutRequest(const UpdateGatewayRouteTimeoutRequest &) = default ;
    UpdateGatewayRouteTimeoutRequest(UpdateGatewayRouteTimeoutRequest &&) = default ;
    UpdateGatewayRouteTimeoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteTimeoutRequest() = default ;
    UpdateGatewayRouteTimeoutRequest& operator=(const UpdateGatewayRouteTimeoutRequest &) = default ;
    UpdateGatewayRouteTimeoutRequest& operator=(UpdateGatewayRouteTimeoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->id_ == nullptr && return this->timeoutJSON_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteTimeoutRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteTimeoutRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteTimeoutRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteTimeoutRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // timeoutJSON Field Functions 
    bool hasTimeoutJSON() const { return this->timeoutJSON_ != nullptr;};
    void deleteTimeoutJSON() { this->timeoutJSON_ = nullptr;};
    inline const UpdateGatewayRouteTimeoutRequestTimeoutJSON & timeoutJSON() const { DARABONBA_PTR_GET_CONST(timeoutJSON_, UpdateGatewayRouteTimeoutRequestTimeoutJSON) };
    inline UpdateGatewayRouteTimeoutRequestTimeoutJSON timeoutJSON() { DARABONBA_PTR_GET(timeoutJSON_, UpdateGatewayRouteTimeoutRequestTimeoutJSON) };
    inline UpdateGatewayRouteTimeoutRequest& setTimeoutJSON(const UpdateGatewayRouteTimeoutRequestTimeoutJSON & timeoutJSON) { DARABONBA_PTR_SET_VALUE(timeoutJSON_, timeoutJSON) };
    inline UpdateGatewayRouteTimeoutRequest& setTimeoutJSON(UpdateGatewayRouteTimeoutRequestTimeoutJSON && timeoutJSON) { DARABONBA_PTR_SET_RVALUE(timeoutJSON_, timeoutJSON) };


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
    // The timeout period.
    std::shared_ptr<UpdateGatewayRouteTimeoutRequestTimeoutJSON> timeoutJSON_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
