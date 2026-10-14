// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HEALTHCHECKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HEALTHCHECKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class HealthCheckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HealthCheckConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CheckInterval, checkInterval_);
      DARABONBA_PTR_TO_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, HealthCheckConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckInterval, checkInterval_);
      DARABONBA_PTR_FROM_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
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
    virtual bool empty() const override { return this->checkInterval_ == nullptr
        && this->failureCount_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->timeoutSeconds_ == nullptr; };
    // checkInterval Field Functions 
    bool hasCheckInterval() const { return this->checkInterval_ != nullptr;};
    void deleteCheckInterval() { this->checkInterval_ = nullptr;};
    inline int32_t getCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(checkInterval_, 0) };
    inline HealthCheckConfig& setCheckInterval(int32_t checkInterval) { DARABONBA_PTR_SET_VALUE(checkInterval_, checkInterval) };


    // failureCount Field Functions 
    bool hasFailureCount() const { return this->failureCount_ != nullptr;};
    void deleteFailureCount() { this->failureCount_ = nullptr;};
    inline int32_t getFailureCount() const { DARABONBA_PTR_GET_DEFAULT(failureCount_, 0) };
    inline HealthCheckConfig& setFailureCount(int32_t failureCount) { DARABONBA_PTR_SET_VALUE(failureCount_, failureCount) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline HealthCheckConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline HealthCheckConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline HealthCheckConfig& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    // The check interval in seconds. Default value: 30 seconds.
    shared_ptr<int32_t> checkInterval_ {};
    // The failure count. Default value: 3.
    shared_ptr<int32_t> failureCount_ {};
    // The port number. This parameter is optional.
    shared_ptr<int32_t> port_ {};
    // The protocol type. Valid values: TCP and UDP. This parameter is required only in Continuous mode.
    shared_ptr<string> protocol_ {};
    // The timeout period for a single check in seconds. Default value: 5 seconds.
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
