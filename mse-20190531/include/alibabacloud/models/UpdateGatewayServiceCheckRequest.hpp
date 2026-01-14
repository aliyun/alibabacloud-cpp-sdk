// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYSERVICECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayServiceCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayServiceCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Check, check_);
      DARABONBA_PTR_TO_JSON(ExpectedStatuses, expectedStatuses_);
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
    friend void from_json(const Darabonba::Json& j, UpdateGatewayServiceCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Check, check_);
      DARABONBA_PTR_FROM_JSON(ExpectedStatuses, expectedStatuses_);
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
    UpdateGatewayServiceCheckRequest() = default ;
    UpdateGatewayServiceCheckRequest(const UpdateGatewayServiceCheckRequest &) = default ;
    UpdateGatewayServiceCheckRequest(UpdateGatewayServiceCheckRequest &&) = default ;
    UpdateGatewayServiceCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayServiceCheckRequest() = default ;
    UpdateGatewayServiceCheckRequest& operator=(const UpdateGatewayServiceCheckRequest &) = default ;
    UpdateGatewayServiceCheckRequest& operator=(UpdateGatewayServiceCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->check_ == nullptr && this->expectedStatuses_ == nullptr && this->gatewayUniqueId_ == nullptr && this->healthyThreshold_ == nullptr && this->httpHost_ == nullptr
        && this->httpPath_ == nullptr && this->interval_ == nullptr && this->protocol_ == nullptr && this->serviceId_ == nullptr && this->timeout_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayServiceCheckRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // check Field Functions 
    bool hasCheck() const { return this->check_ != nullptr;};
    void deleteCheck() { this->check_ = nullptr;};
    inline bool getCheck() const { DARABONBA_PTR_GET_DEFAULT(check_, false) };
    inline UpdateGatewayServiceCheckRequest& setCheck(bool check) { DARABONBA_PTR_SET_VALUE(check_, check) };


    // expectedStatuses Field Functions 
    bool hasExpectedStatuses() const { return this->expectedStatuses_ != nullptr;};
    void deleteExpectedStatuses() { this->expectedStatuses_ = nullptr;};
    inline const vector<int32_t> & getExpectedStatuses() const { DARABONBA_PTR_GET_CONST(expectedStatuses_, vector<int32_t>) };
    inline vector<int32_t> getExpectedStatuses() { DARABONBA_PTR_GET(expectedStatuses_, vector<int32_t>) };
    inline UpdateGatewayServiceCheckRequest& setExpectedStatuses(const vector<int32_t> & expectedStatuses) { DARABONBA_PTR_SET_VALUE(expectedStatuses_, expectedStatuses) };
    inline UpdateGatewayServiceCheckRequest& setExpectedStatuses(vector<int32_t> && expectedStatuses) { DARABONBA_PTR_SET_RVALUE(expectedStatuses_, expectedStatuses) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayServiceCheckRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline UpdateGatewayServiceCheckRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // httpHost Field Functions 
    bool hasHttpHost() const { return this->httpHost_ != nullptr;};
    void deleteHttpHost() { this->httpHost_ = nullptr;};
    inline string getHttpHost() const { DARABONBA_PTR_GET_DEFAULT(httpHost_, "") };
    inline UpdateGatewayServiceCheckRequest& setHttpHost(string httpHost) { DARABONBA_PTR_SET_VALUE(httpHost_, httpHost) };


    // httpPath Field Functions 
    bool hasHttpPath() const { return this->httpPath_ != nullptr;};
    void deleteHttpPath() { this->httpPath_ = nullptr;};
    inline string getHttpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
    inline UpdateGatewayServiceCheckRequest& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateGatewayServiceCheckRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateGatewayServiceCheckRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateGatewayServiceCheckRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateGatewayServiceCheckRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline UpdateGatewayServiceCheckRequest& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to enable the health check.
    shared_ptr<bool> check_ {};
    // The expected status code, which is required if the health check protocol is HTTP.
    shared_ptr<vector<int32_t>> expectedStatuses_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The healthy threshold of the health check.
    shared_ptr<int32_t> healthyThreshold_ {};
    // The health check domain name, which is optional if the health check protocol is HTTP.
    shared_ptr<string> httpHost_ {};
    // The health check path, which is required if the health check protocol is HTTP.
    shared_ptr<string> httpPath_ {};
    // The interval at which the health check is performed.
    shared_ptr<int32_t> interval_ {};
    // The health check protocol. Valid values:
    // 
    // *   HTTP
    // *   TCP
    shared_ptr<string> protocol_ {};
    // The ID of the service.
    shared_ptr<string> serviceId_ {};
    // The timeout period of responses to the health check. Unit: seconds.
    shared_ptr<int32_t> timeout_ {};
    // The unhealthy threshold of the health check.
    shared_ptr<int32_t> unhealthyThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
