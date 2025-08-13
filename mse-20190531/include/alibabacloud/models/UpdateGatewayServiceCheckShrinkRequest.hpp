// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICECHECKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICECHECKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayServiceCheckShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayServiceCheckShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Check, check_);
      DARABONBA_PTR_TO_JSON(ExpectedStatuses, expectedStatusesShrink_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(HttpHost, httpHost_);
      DARABONBA_PTR_TO_JSON(HttpPath, httpPath_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayServiceCheckShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Check, check_);
      DARABONBA_PTR_FROM_JSON(ExpectedStatuses, expectedStatusesShrink_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(HttpHost, httpHost_);
      DARABONBA_PTR_FROM_JSON(HttpPath, httpPath_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    UpdateGatewayServiceCheckShrinkRequest() = default ;
    UpdateGatewayServiceCheckShrinkRequest(const UpdateGatewayServiceCheckShrinkRequest &) = default ;
    UpdateGatewayServiceCheckShrinkRequest(UpdateGatewayServiceCheckShrinkRequest &&) = default ;
    UpdateGatewayServiceCheckShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayServiceCheckShrinkRequest() = default ;
    UpdateGatewayServiceCheckShrinkRequest& operator=(const UpdateGatewayServiceCheckShrinkRequest &) = default ;
    UpdateGatewayServiceCheckShrinkRequest& operator=(UpdateGatewayServiceCheckShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->check_ != nullptr && this->expectedStatusesShrink_ != nullptr && this->gatewayUniqueId_ != nullptr && this->healthyThreshold_ != nullptr && this->httpHost_ != nullptr
        && this->httpPath_ != nullptr && this->interval_ != nullptr && this->protocol_ != nullptr && this->serviceId_ != nullptr && this->timeout_ != nullptr
        && this->unhealthyThreshold_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayServiceCheckShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // check Field Functions 
    bool hasCheck() const { return this->check_ != nullptr;};
    void deleteCheck() { this->check_ = nullptr;};
    inline bool check() const { DARABONBA_PTR_GET_DEFAULT(check_, false) };
    inline UpdateGatewayServiceCheckShrinkRequest& setCheck(bool check) { DARABONBA_PTR_SET_VALUE(check_, check) };


    // expectedStatusesShrink Field Functions 
    bool hasExpectedStatusesShrink() const { return this->expectedStatusesShrink_ != nullptr;};
    void deleteExpectedStatusesShrink() { this->expectedStatusesShrink_ = nullptr;};
    inline string expectedStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(expectedStatusesShrink_, "") };
    inline UpdateGatewayServiceCheckShrinkRequest& setExpectedStatusesShrink(string expectedStatusesShrink) { DARABONBA_PTR_SET_VALUE(expectedStatusesShrink_, expectedStatusesShrink) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayServiceCheckShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline UpdateGatewayServiceCheckShrinkRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // httpHost Field Functions 
    bool hasHttpHost() const { return this->httpHost_ != nullptr;};
    void deleteHttpHost() { this->httpHost_ = nullptr;};
    inline string httpHost() const { DARABONBA_PTR_GET_DEFAULT(httpHost_, "") };
    inline UpdateGatewayServiceCheckShrinkRequest& setHttpHost(string httpHost) { DARABONBA_PTR_SET_VALUE(httpHost_, httpHost) };


    // httpPath Field Functions 
    bool hasHttpPath() const { return this->httpPath_ != nullptr;};
    void deleteHttpPath() { this->httpPath_ = nullptr;};
    inline string httpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
    inline UpdateGatewayServiceCheckShrinkRequest& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateGatewayServiceCheckShrinkRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateGatewayServiceCheckShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateGatewayServiceCheckShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateGatewayServiceCheckShrinkRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline UpdateGatewayServiceCheckShrinkRequest& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Specifies whether to enable the health check.
    std::shared_ptr<bool> check_ = nullptr;
    // The expected status code, which is required if the health check protocol is HTTP.
    std::shared_ptr<string> expectedStatusesShrink_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The healthy threshold of the health check.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The health check domain name, which is optional if the health check protocol is HTTP.
    std::shared_ptr<string> httpHost_ = nullptr;
    // The health check path, which is required if the health check protocol is HTTP.
    std::shared_ptr<string> httpPath_ = nullptr;
    // The interval at which the health check is performed.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The health check protocol. Valid values:
    // 
    // *   HTTP
    // *   TCP
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the service.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The timeout period of responses to the health check. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The unhealthy threshold of the health check.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
