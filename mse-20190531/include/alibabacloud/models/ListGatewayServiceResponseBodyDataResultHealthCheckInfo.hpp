// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTHEALTHCHECKINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICERESPONSEBODYDATARESULTHEALTHCHECKINFO_HPP_
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
  class ListGatewayServiceResponseBodyDataResultHealthCheckInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceResponseBodyDataResultHealthCheckInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Check, check_);
      DARABONBA_PTR_TO_JSON(ExpectedStatuses, expectedStatuses_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(HttpHost, httpHost_);
      DARABONBA_PTR_TO_JSON(HttpPath, httpPath_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceResponseBodyDataResultHealthCheckInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Check, check_);
      DARABONBA_PTR_FROM_JSON(ExpectedStatuses, expectedStatuses_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(HttpHost, httpHost_);
      DARABONBA_PTR_FROM_JSON(HttpPath, httpPath_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    ListGatewayServiceResponseBodyDataResultHealthCheckInfo() = default ;
    ListGatewayServiceResponseBodyDataResultHealthCheckInfo(const ListGatewayServiceResponseBodyDataResultHealthCheckInfo &) = default ;
    ListGatewayServiceResponseBodyDataResultHealthCheckInfo(ListGatewayServiceResponseBodyDataResultHealthCheckInfo &&) = default ;
    ListGatewayServiceResponseBodyDataResultHealthCheckInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceResponseBodyDataResultHealthCheckInfo() = default ;
    ListGatewayServiceResponseBodyDataResultHealthCheckInfo& operator=(const ListGatewayServiceResponseBodyDataResultHealthCheckInfo &) = default ;
    ListGatewayServiceResponseBodyDataResultHealthCheckInfo& operator=(ListGatewayServiceResponseBodyDataResultHealthCheckInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->check_ != nullptr
        && this->expectedStatuses_ != nullptr && this->healthyThreshold_ != nullptr && this->httpHost_ != nullptr && this->httpPath_ != nullptr && this->interval_ != nullptr
        && this->protocol_ != nullptr && this->timeout_ != nullptr && this->unhealthyThreshold_ != nullptr; };
    // check Field Functions 
    bool hasCheck() const { return this->check_ != nullptr;};
    void deleteCheck() { this->check_ = nullptr;};
    inline bool check() const { DARABONBA_PTR_GET_DEFAULT(check_, false) };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setCheck(bool check) { DARABONBA_PTR_SET_VALUE(check_, check) };


    // expectedStatuses Field Functions 
    bool hasExpectedStatuses() const { return this->expectedStatuses_ != nullptr;};
    void deleteExpectedStatuses() { this->expectedStatuses_ = nullptr;};
    inline const vector<int32_t> & expectedStatuses() const { DARABONBA_PTR_GET_CONST(expectedStatuses_, vector<int32_t>) };
    inline vector<int32_t> expectedStatuses() { DARABONBA_PTR_GET(expectedStatuses_, vector<int32_t>) };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setExpectedStatuses(const vector<int32_t> & expectedStatuses) { DARABONBA_PTR_SET_VALUE(expectedStatuses_, expectedStatuses) };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setExpectedStatuses(vector<int32_t> && expectedStatuses) { DARABONBA_PTR_SET_RVALUE(expectedStatuses_, expectedStatuses) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // httpHost Field Functions 
    bool hasHttpHost() const { return this->httpHost_ != nullptr;};
    void deleteHttpHost() { this->httpHost_ = nullptr;};
    inline string httpHost() const { DARABONBA_PTR_GET_DEFAULT(httpHost_, "") };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setHttpHost(string httpHost) { DARABONBA_PTR_SET_VALUE(httpHost_, httpHost) };


    // httpPath Field Functions 
    bool hasHttpPath() const { return this->httpPath_ != nullptr;};
    void deleteHttpPath() { this->httpPath_ = nullptr;};
    inline string httpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline ListGatewayServiceResponseBodyDataResultHealthCheckInfo& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // Indicates whether checks are performed.
    std::shared_ptr<bool> check_ = nullptr;
    // The expected status of the health check.
    std::shared_ptr<vector<int32_t>> expectedStatuses_ = nullptr;
    // The threshold for healthy instances.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The endpoint of the HTTP request for the health check.
    std::shared_ptr<string> httpHost_ = nullptr;
    // The path to which the HTTP request for the health check is sent.
    std::shared_ptr<string> httpPath_ = nullptr;
    // The health check interval.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The network protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The timeout period.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The threshold for unhealthy instances.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
