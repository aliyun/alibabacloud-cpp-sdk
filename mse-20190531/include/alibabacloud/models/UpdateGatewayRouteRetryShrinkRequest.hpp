// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTERETRYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTERETRYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteRetryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRetryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RetryJSON, retryJSONShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRetryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RetryJSON, retryJSONShrink_);
    };
    UpdateGatewayRouteRetryShrinkRequest() = default ;
    UpdateGatewayRouteRetryShrinkRequest(const UpdateGatewayRouteRetryShrinkRequest &) = default ;
    UpdateGatewayRouteRetryShrinkRequest(UpdateGatewayRouteRetryShrinkRequest &&) = default ;
    UpdateGatewayRouteRetryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRetryShrinkRequest() = default ;
    UpdateGatewayRouteRetryShrinkRequest& operator=(const UpdateGatewayRouteRetryShrinkRequest &) = default ;
    UpdateGatewayRouteRetryShrinkRequest& operator=(UpdateGatewayRouteRetryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->id_ == nullptr && this->retryJSONShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayRouteRetryShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayRouteRetryShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayRouteRetryShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGatewayRouteRetryShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // retryJSONShrink Field Functions 
    bool hasRetryJSONShrink() const { return this->retryJSONShrink_ != nullptr;};
    void deleteRetryJSONShrink() { this->retryJSONShrink_ = nullptr;};
    inline string getRetryJSONShrink() const { DARABONBA_PTR_GET_DEFAULT(retryJSONShrink_, "") };
    inline UpdateGatewayRouteRetryShrinkRequest& setRetryJSONShrink(string retryJSONShrink) { DARABONBA_PTR_SET_VALUE(retryJSONShrink_, retryJSONShrink) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The ID of the associated record.
    shared_ptr<int64_t> id_ {};
    // The information about the retry policy.
    shared_ptr<string> retryJSONShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
