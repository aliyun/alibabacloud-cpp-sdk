// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTHEALTHCHECKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTHEALTHCHECKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateServiceRequestHealthCheckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestHealthCheckConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(expectedStatuses, expectedStatuses_);
      DARABONBA_PTR_TO_JSON(healthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(httpHost, httpHost_);
      DARABONBA_PTR_TO_JSON(httpPath, httpPath_);
      DARABONBA_PTR_TO_JSON(interval, interval_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(unhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestHealthCheckConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(expectedStatuses, expectedStatuses_);
      DARABONBA_PTR_FROM_JSON(healthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(httpHost, httpHost_);
      DARABONBA_PTR_FROM_JSON(httpPath, httpPath_);
      DARABONBA_PTR_FROM_JSON(interval, interval_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(unhealthyThreshold, unhealthyThreshold_);
    };
    UpdateServiceRequestHealthCheckConfig() = default ;
    UpdateServiceRequestHealthCheckConfig(const UpdateServiceRequestHealthCheckConfig &) = default ;
    UpdateServiceRequestHealthCheckConfig(UpdateServiceRequestHealthCheckConfig &&) = default ;
    UpdateServiceRequestHealthCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestHealthCheckConfig() = default ;
    UpdateServiceRequestHealthCheckConfig& operator=(const UpdateServiceRequestHealthCheckConfig &) = default ;
    UpdateServiceRequestHealthCheckConfig& operator=(UpdateServiceRequestHealthCheckConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->expectedStatuses_ == nullptr && return this->healthyThreshold_ == nullptr && return this->httpHost_ == nullptr && return this->httpPath_ == nullptr && return this->interval_ == nullptr
        && return this->protocol_ == nullptr && return this->timeout_ == nullptr && return this->unhealthyThreshold_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateServiceRequestHealthCheckConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // expectedStatuses Field Functions 
    bool hasExpectedStatuses() const { return this->expectedStatuses_ != nullptr;};
    void deleteExpectedStatuses() { this->expectedStatuses_ = nullptr;};
    inline const vector<string> & expectedStatuses() const { DARABONBA_PTR_GET_CONST(expectedStatuses_, vector<string>) };
    inline vector<string> expectedStatuses() { DARABONBA_PTR_GET(expectedStatuses_, vector<string>) };
    inline UpdateServiceRequestHealthCheckConfig& setExpectedStatuses(const vector<string> & expectedStatuses) { DARABONBA_PTR_SET_VALUE(expectedStatuses_, expectedStatuses) };
    inline UpdateServiceRequestHealthCheckConfig& setExpectedStatuses(vector<string> && expectedStatuses) { DARABONBA_PTR_SET_RVALUE(expectedStatuses_, expectedStatuses) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline UpdateServiceRequestHealthCheckConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // httpHost Field Functions 
    bool hasHttpHost() const { return this->httpHost_ != nullptr;};
    void deleteHttpHost() { this->httpHost_ = nullptr;};
    inline string httpHost() const { DARABONBA_PTR_GET_DEFAULT(httpHost_, "") };
    inline UpdateServiceRequestHealthCheckConfig& setHttpHost(string httpHost) { DARABONBA_PTR_SET_VALUE(httpHost_, httpHost) };


    // httpPath Field Functions 
    bool hasHttpPath() const { return this->httpPath_ != nullptr;};
    void deleteHttpPath() { this->httpPath_ = nullptr;};
    inline string httpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
    inline UpdateServiceRequestHealthCheckConfig& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateServiceRequestHealthCheckConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateServiceRequestHealthCheckConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateServiceRequestHealthCheckConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline UpdateServiceRequestHealthCheckConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // Specifies whether to enable health checks.
    std::shared_ptr<bool> enable_ = nullptr;
    // The normal status codes to be returned. This parameter is required if the health check protocol is HTTP.
    std::shared_ptr<vector<string>> expectedStatuses_ = nullptr;
    // The healthy threshold.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The domain name that you want to use for health checks. Optional. This parameter is available if the health check protocol is HTTP.
    std::shared_ptr<string> httpHost_ = nullptr;
    // The request path of health checks. This parameter is required if the health check protocol is HTTP.
    std::shared_ptr<string> httpPath_ = nullptr;
    // The health check interval. Unit: seconds
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The protocol over which the system performs health checks.
    // 
    // Valid values:
    // 
    // *   TCP
    // *   HTTP
    std::shared_ptr<string> protocol_ = nullptr;
    // The timeout period for a health check response. Unit: seconds
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The unhealthy threshold.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
