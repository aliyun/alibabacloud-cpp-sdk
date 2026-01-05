// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEHEALTHCHECK_HPP_
#define ALIBABACLOUD_MODELS_SERVICEHEALTHCHECK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ServiceHealthCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceHealthCheck& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(healthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(httpHost, httpHost_);
      DARABONBA_PTR_TO_JSON(httpPath, httpPath_);
      DARABONBA_PTR_TO_JSON(interval, interval_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(unhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceHealthCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(healthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(httpHost, httpHost_);
      DARABONBA_PTR_FROM_JSON(httpPath, httpPath_);
      DARABONBA_PTR_FROM_JSON(interval, interval_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(unhealthyThreshold, unhealthyThreshold_);
    };
    ServiceHealthCheck() = default ;
    ServiceHealthCheck(const ServiceHealthCheck &) = default ;
    ServiceHealthCheck(ServiceHealthCheck &&) = default ;
    ServiceHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceHealthCheck() = default ;
    ServiceHealthCheck& operator=(const ServiceHealthCheck &) = default ;
    ServiceHealthCheck& operator=(ServiceHealthCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->healthyThreshold_ == nullptr && this->httpHost_ == nullptr && this->httpPath_ == nullptr && this->interval_ == nullptr && this->protocol_ == nullptr
        && this->timeout_ == nullptr && this->unhealthyThreshold_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ServiceHealthCheck& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline ServiceHealthCheck& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // httpHost Field Functions 
    bool hasHttpHost() const { return this->httpHost_ != nullptr;};
    void deleteHttpHost() { this->httpHost_ = nullptr;};
    inline string getHttpHost() const { DARABONBA_PTR_GET_DEFAULT(httpHost_, "") };
    inline ServiceHealthCheck& setHttpHost(string httpHost) { DARABONBA_PTR_SET_VALUE(httpHost_, httpHost) };


    // httpPath Field Functions 
    bool hasHttpPath() const { return this->httpPath_ != nullptr;};
    void deleteHttpPath() { this->httpPath_ = nullptr;};
    inline string getHttpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
    inline ServiceHealthCheck& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ServiceHealthCheck& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ServiceHealthCheck& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ServiceHealthCheck& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline ServiceHealthCheck& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    shared_ptr<bool> enable_ {};
    shared_ptr<int32_t> healthyThreshold_ {};
    shared_ptr<string> httpHost_ {};
    shared_ptr<string> httpPath_ {};
    shared_ptr<int32_t> interval_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<int32_t> timeout_ {};
    shared_ptr<int32_t> unhealthyThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
