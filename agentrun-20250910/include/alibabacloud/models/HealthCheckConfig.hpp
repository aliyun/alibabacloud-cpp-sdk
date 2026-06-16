// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HEALTHCHECKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HEALTHCHECKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class HealthCheckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HealthCheckConfig& obj) { 
      DARABONBA_PTR_TO_JSON(failureThreshold, failureThreshold_);
      DARABONBA_PTR_TO_JSON(httpGetUrl, httpGetUrl_);
      DARABONBA_PTR_TO_JSON(initialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_TO_JSON(periodSeconds, periodSeconds_);
      DARABONBA_PTR_TO_JSON(successThreshold, successThreshold_);
      DARABONBA_PTR_TO_JSON(timeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, HealthCheckConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(failureThreshold, failureThreshold_);
      DARABONBA_PTR_FROM_JSON(httpGetUrl, httpGetUrl_);
      DARABONBA_PTR_FROM_JSON(initialDelaySeconds, initialDelaySeconds_);
      DARABONBA_PTR_FROM_JSON(periodSeconds, periodSeconds_);
      DARABONBA_PTR_FROM_JSON(successThreshold, successThreshold_);
      DARABONBA_PTR_FROM_JSON(timeoutSeconds, timeoutSeconds_);
    };
    HealthCheckConfig() = default ;
    HealthCheckConfig(const HealthCheckConfig &) = default ;
    HealthCheckConfig(HealthCheckConfig &&) = default ;
    HealthCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HealthCheckConfig() = default ;
    HealthCheckConfig& operator=(const HealthCheckConfig &) = default ;
    HealthCheckConfig& operator=(HealthCheckConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failureThreshold_ == nullptr
        && this->httpGetUrl_ == nullptr && this->initialDelaySeconds_ == nullptr && this->periodSeconds_ == nullptr && this->successThreshold_ == nullptr && this->timeoutSeconds_ == nullptr; };
    // failureThreshold Field Functions 
    bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
    void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
    inline int32_t getFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
    inline HealthCheckConfig& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


    // httpGetUrl Field Functions 
    bool hasHttpGetUrl() const { return this->httpGetUrl_ != nullptr;};
    void deleteHttpGetUrl() { this->httpGetUrl_ = nullptr;};
    inline string getHttpGetUrl() const { DARABONBA_PTR_GET_DEFAULT(httpGetUrl_, "") };
    inline HealthCheckConfig& setHttpGetUrl(string httpGetUrl) { DARABONBA_PTR_SET_VALUE(httpGetUrl_, httpGetUrl) };


    // initialDelaySeconds Field Functions 
    bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
    void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
    inline int32_t getInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
    inline HealthCheckConfig& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


    // periodSeconds Field Functions 
    bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
    void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
    inline int32_t getPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
    inline HealthCheckConfig& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


    // successThreshold Field Functions 
    bool hasSuccessThreshold() const { return this->successThreshold_ != nullptr;};
    void deleteSuccessThreshold() { this->successThreshold_ = nullptr;};
    inline int32_t getSuccessThreshold() const { DARABONBA_PTR_GET_DEFAULT(successThreshold_, 0) };
    inline HealthCheckConfig& setSuccessThreshold(int32_t successThreshold) { DARABONBA_PTR_SET_VALUE(successThreshold_, successThreshold) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline HealthCheckConfig& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    // The number of consecutive failed health checks before the container is considered unhealthy
    shared_ptr<int32_t> failureThreshold_ {};
    // The URL address for the HTTP GET request used in health checks
    shared_ptr<string> httpGetUrl_ {};
    // The delay time (in seconds) after the container starts before the first health check is executed
    shared_ptr<int32_t> initialDelaySeconds_ {};
    // The time interval (in seconds) between health checks
    shared_ptr<int32_t> periodSeconds_ {};
    // The number of consecutive successful health checks required before the container is considered healthy
    shared_ptr<int32_t> successThreshold_ {};
    // The timeout duration (in seconds) for health checks
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
