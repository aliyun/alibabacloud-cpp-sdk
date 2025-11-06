// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICETRAFFICPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICETRAFFICPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayServiceTrafficPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayServiceTrafficPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayTrafficPolicy, gatewayTrafficPolicyShrink_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayServiceTrafficPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayTrafficPolicy, gatewayTrafficPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    UpdateGatewayServiceTrafficPolicyShrinkRequest() = default ;
    UpdateGatewayServiceTrafficPolicyShrinkRequest(const UpdateGatewayServiceTrafficPolicyShrinkRequest &) = default ;
    UpdateGatewayServiceTrafficPolicyShrinkRequest(UpdateGatewayServiceTrafficPolicyShrinkRequest &&) = default ;
    UpdateGatewayServiceTrafficPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayServiceTrafficPolicyShrinkRequest() = default ;
    UpdateGatewayServiceTrafficPolicyShrinkRequest& operator=(const UpdateGatewayServiceTrafficPolicyShrinkRequest &) = default ;
    UpdateGatewayServiceTrafficPolicyShrinkRequest& operator=(UpdateGatewayServiceTrafficPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayTrafficPolicyShrink_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->serviceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayServiceTrafficPolicyShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayServiceTrafficPolicyShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayTrafficPolicyShrink Field Functions 
    bool hasGatewayTrafficPolicyShrink() const { return this->gatewayTrafficPolicyShrink_ != nullptr;};
    void deleteGatewayTrafficPolicyShrink() { this->gatewayTrafficPolicyShrink_ = nullptr;};
    inline string gatewayTrafficPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(gatewayTrafficPolicyShrink_, "") };
    inline UpdateGatewayServiceTrafficPolicyShrinkRequest& setGatewayTrafficPolicyShrink(string gatewayTrafficPolicyShrink) { DARABONBA_PTR_SET_VALUE(gatewayTrafficPolicyShrink_, gatewayTrafficPolicyShrink) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayServiceTrafficPolicyShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline UpdateGatewayServiceTrafficPolicyShrinkRequest& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   **zh-CN** (default): Chinese
    // *   **en-US**: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The traffic policy of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayTrafficPolicyShrink_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the service.
    std::shared_ptr<int64_t> serviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
