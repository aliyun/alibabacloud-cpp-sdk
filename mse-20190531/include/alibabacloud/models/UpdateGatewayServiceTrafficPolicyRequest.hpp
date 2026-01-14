// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICETRAFFICPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICETRAFFICPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrafficPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayServiceTrafficPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayServiceTrafficPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayServiceTrafficPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayTrafficPolicy, gatewayTrafficPolicy_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    UpdateGatewayServiceTrafficPolicyRequest() = default ;
    UpdateGatewayServiceTrafficPolicyRequest(const UpdateGatewayServiceTrafficPolicyRequest &) = default ;
    UpdateGatewayServiceTrafficPolicyRequest(UpdateGatewayServiceTrafficPolicyRequest &&) = default ;
    UpdateGatewayServiceTrafficPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayServiceTrafficPolicyRequest() = default ;
    UpdateGatewayServiceTrafficPolicyRequest& operator=(const UpdateGatewayServiceTrafficPolicyRequest &) = default ;
    UpdateGatewayServiceTrafficPolicyRequest& operator=(UpdateGatewayServiceTrafficPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayTrafficPolicy_ == nullptr && this->gatewayUniqueId_ == nullptr && this->serviceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayServiceTrafficPolicyRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdateGatewayServiceTrafficPolicyRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayTrafficPolicy Field Functions 
    bool hasGatewayTrafficPolicy() const { return this->gatewayTrafficPolicy_ != nullptr;};
    void deleteGatewayTrafficPolicy() { this->gatewayTrafficPolicy_ = nullptr;};
    inline const TrafficPolicy & getGatewayTrafficPolicy() const { DARABONBA_PTR_GET_CONST(gatewayTrafficPolicy_, TrafficPolicy) };
    inline TrafficPolicy getGatewayTrafficPolicy() { DARABONBA_PTR_GET(gatewayTrafficPolicy_, TrafficPolicy) };
    inline UpdateGatewayServiceTrafficPolicyRequest& setGatewayTrafficPolicy(const TrafficPolicy & gatewayTrafficPolicy) { DARABONBA_PTR_SET_VALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };
    inline UpdateGatewayServiceTrafficPolicyRequest& setGatewayTrafficPolicy(TrafficPolicy && gatewayTrafficPolicy) { DARABONBA_PTR_SET_RVALUE(gatewayTrafficPolicy_, gatewayTrafficPolicy) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayServiceTrafficPolicyRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
    inline UpdateGatewayServiceTrafficPolicyRequest& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   **zh-CN** (default): Chinese
    // *   **en-US**: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The traffic policy of the gateway.
    // 
    // This parameter is required.
    shared_ptr<TrafficPolicy> gatewayTrafficPolicy_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The ID of the service.
    shared_ptr<int64_t> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
