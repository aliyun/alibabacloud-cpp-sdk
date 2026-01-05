// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgentServiceConfig.hpp>
#include <alibabacloud/models/AiServiceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addresses, addresses_);
      DARABONBA_PTR_TO_JSON(agentServiceConfig, agentServiceConfig_);
      DARABONBA_PTR_TO_JSON(aiServiceConfig, aiServiceConfig_);
      DARABONBA_PTR_TO_JSON(dnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(healthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(healthyPanicThreshold, healthyPanicThreshold_);
      DARABONBA_PTR_TO_JSON(outlierDetectionConfig, outlierDetectionConfig_);
      DARABONBA_PTR_TO_JSON(ports, ports_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(agentServiceConfig, agentServiceConfig_);
      DARABONBA_PTR_FROM_JSON(aiServiceConfig, aiServiceConfig_);
      DARABONBA_PTR_FROM_JSON(dnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(healthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(healthyPanicThreshold, healthyPanicThreshold_);
      DARABONBA_PTR_FROM_JSON(outlierDetectionConfig, outlierDetectionConfig_);
      DARABONBA_PTR_FROM_JSON(ports, ports_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
    };
    UpdateServiceRequest() = default ;
    UpdateServiceRequest(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest(UpdateServiceRequest &&) = default ;
    UpdateServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequest() = default ;
    UpdateServiceRequest& operator=(const UpdateServiceRequest &) = default ;
    UpdateServiceRequest& operator=(UpdateServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Ports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ports& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, Ports& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      Ports() = default ;
      Ports(const Ports &) = default ;
      Ports(Ports &&) = default ;
      Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ports() = default ;
      Ports& operator=(const Ports &) = default ;
      Ports& operator=(Ports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->port_ == nullptr && this->protocol_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Ports& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Ports& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Ports& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The port name.
      shared_ptr<string> name_ {};
      // The port.
      shared_ptr<int32_t> port_ {};
      // The protocol.
      shared_ptr<string> protocol_ {};
    };

    class OutlierDetectionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutlierDetectionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(baseEjectionTime, baseEjectionTime_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(failurePercentageMinimumHosts, failurePercentageMinimumHosts_);
        DARABONBA_PTR_TO_JSON(failurePercentageThreshold, failurePercentageThreshold_);
        DARABONBA_PTR_TO_JSON(interval, interval_);
      };
      friend void from_json(const Darabonba::Json& j, OutlierDetectionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(baseEjectionTime, baseEjectionTime_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(failurePercentageMinimumHosts, failurePercentageMinimumHosts_);
        DARABONBA_PTR_FROM_JSON(failurePercentageThreshold, failurePercentageThreshold_);
        DARABONBA_PTR_FROM_JSON(interval, interval_);
      };
      OutlierDetectionConfig() = default ;
      OutlierDetectionConfig(const OutlierDetectionConfig &) = default ;
      OutlierDetectionConfig(OutlierDetectionConfig &&) = default ;
      OutlierDetectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutlierDetectionConfig() = default ;
      OutlierDetectionConfig& operator=(const OutlierDetectionConfig &) = default ;
      OutlierDetectionConfig& operator=(OutlierDetectionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baseEjectionTime_ == nullptr
        && this->enable_ == nullptr && this->failurePercentageMinimumHosts_ == nullptr && this->failurePercentageThreshold_ == nullptr && this->interval_ == nullptr; };
      // baseEjectionTime Field Functions 
      bool hasBaseEjectionTime() const { return this->baseEjectionTime_ != nullptr;};
      void deleteBaseEjectionTime() { this->baseEjectionTime_ = nullptr;};
      inline int32_t getBaseEjectionTime() const { DARABONBA_PTR_GET_DEFAULT(baseEjectionTime_, 0) };
      inline OutlierDetectionConfig& setBaseEjectionTime(int32_t baseEjectionTime) { DARABONBA_PTR_SET_VALUE(baseEjectionTime_, baseEjectionTime) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline OutlierDetectionConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // failurePercentageMinimumHosts Field Functions 
      bool hasFailurePercentageMinimumHosts() const { return this->failurePercentageMinimumHosts_ != nullptr;};
      void deleteFailurePercentageMinimumHosts() { this->failurePercentageMinimumHosts_ = nullptr;};
      inline int32_t getFailurePercentageMinimumHosts() const { DARABONBA_PTR_GET_DEFAULT(failurePercentageMinimumHosts_, 0) };
      inline OutlierDetectionConfig& setFailurePercentageMinimumHosts(int32_t failurePercentageMinimumHosts) { DARABONBA_PTR_SET_VALUE(failurePercentageMinimumHosts_, failurePercentageMinimumHosts) };


      // failurePercentageThreshold Field Functions 
      bool hasFailurePercentageThreshold() const { return this->failurePercentageThreshold_ != nullptr;};
      void deleteFailurePercentageThreshold() { this->failurePercentageThreshold_ = nullptr;};
      inline int32_t getFailurePercentageThreshold() const { DARABONBA_PTR_GET_DEFAULT(failurePercentageThreshold_, 0) };
      inline OutlierDetectionConfig& setFailurePercentageThreshold(int32_t failurePercentageThreshold) { DARABONBA_PTR_SET_VALUE(failurePercentageThreshold_, failurePercentageThreshold) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline OutlierDetectionConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    protected:
      // The initial isolation duration after a node is isolated (e.g., 30 seconds). The isolation time is calculated as: k \\* base_ejection_time (with k initially set to 1). Each subsequent isolation increases the isolation time (k is incremented by 1), while consecutive healthy checks gradually decrease the isolation time (k is decremented by 1).
      shared_ptr<int32_t> baseEjectionTime_ {};
      // enable
      shared_ptr<bool> enable_ {};
      // The panic threshold.
      // 
      // When the proportion of healthy nodes in the service is greater than the panic threshold, health checks take effect normally, and requests are only sent to healthy nodes, not to ejected nodes. When the proportion of healthy nodes in the service is less than or equal to the panic threshold, health checks are effectively disabled, and requests are sent to all nodes, including those that have been ejected nodes.
      shared_ptr<int32_t> failurePercentageMinimumHosts_ {};
      // When the request failure rate of a node reaches this threshold, the system triggers the isolation mechanism of the node.
      shared_ptr<int32_t> failurePercentageThreshold_ {};
      // The detection interval.
      shared_ptr<int32_t> interval_ {};
    };

    class HealthCheckConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthCheckConfig& obj) { 
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
      friend void from_json(const Darabonba::Json& j, HealthCheckConfig& obj) { 
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
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->expectedStatuses_ == nullptr && this->healthyThreshold_ == nullptr && this->httpHost_ == nullptr && this->httpPath_ == nullptr && this->interval_ == nullptr
        && this->protocol_ == nullptr && this->timeout_ == nullptr && this->unhealthyThreshold_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline HealthCheckConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // expectedStatuses Field Functions 
      bool hasExpectedStatuses() const { return this->expectedStatuses_ != nullptr;};
      void deleteExpectedStatuses() { this->expectedStatuses_ = nullptr;};
      inline const vector<string> & getExpectedStatuses() const { DARABONBA_PTR_GET_CONST(expectedStatuses_, vector<string>) };
      inline vector<string> getExpectedStatuses() { DARABONBA_PTR_GET(expectedStatuses_, vector<string>) };
      inline HealthCheckConfig& setExpectedStatuses(const vector<string> & expectedStatuses) { DARABONBA_PTR_SET_VALUE(expectedStatuses_, expectedStatuses) };
      inline HealthCheckConfig& setExpectedStatuses(vector<string> && expectedStatuses) { DARABONBA_PTR_SET_RVALUE(expectedStatuses_, expectedStatuses) };


      // healthyThreshold Field Functions 
      bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
      void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
      inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
      inline HealthCheckConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


      // httpHost Field Functions 
      bool hasHttpHost() const { return this->httpHost_ != nullptr;};
      void deleteHttpHost() { this->httpHost_ = nullptr;};
      inline string getHttpHost() const { DARABONBA_PTR_GET_DEFAULT(httpHost_, "") };
      inline HealthCheckConfig& setHttpHost(string httpHost) { DARABONBA_PTR_SET_VALUE(httpHost_, httpHost) };


      // httpPath Field Functions 
      bool hasHttpPath() const { return this->httpPath_ != nullptr;};
      void deleteHttpPath() { this->httpPath_ = nullptr;};
      inline string getHttpPath() const { DARABONBA_PTR_GET_DEFAULT(httpPath_, "") };
      inline HealthCheckConfig& setHttpPath(string httpPath) { DARABONBA_PTR_SET_VALUE(httpPath_, httpPath) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline HealthCheckConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline HealthCheckConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline HealthCheckConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // unhealthyThreshold Field Functions 
      bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
      void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
      inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
      inline HealthCheckConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    protected:
      // Specifies whether to enable health checks.
      shared_ptr<bool> enable_ {};
      // The normal status codes to be returned. This parameter is required if the health check protocol is HTTP.
      shared_ptr<vector<string>> expectedStatuses_ {};
      // The healthy threshold.
      shared_ptr<int32_t> healthyThreshold_ {};
      // The domain name that you want to use for health checks. Optional. This parameter is available if the health check protocol is HTTP.
      shared_ptr<string> httpHost_ {};
      // The request path of health checks. This parameter is required if the health check protocol is HTTP.
      shared_ptr<string> httpPath_ {};
      // The health check interval. Unit: seconds
      shared_ptr<int32_t> interval_ {};
      // The protocol over which the system performs health checks.
      // 
      // Valid values:
      // 
      // *   TCP
      // *   HTTP
      shared_ptr<string> protocol_ {};
      // The timeout period for a health check response. Unit: seconds
      shared_ptr<int32_t> timeout_ {};
      // The unhealthy threshold.
      shared_ptr<int32_t> unhealthyThreshold_ {};
    };

    virtual bool empty() const override { return this->addresses_ == nullptr
        && this->agentServiceConfig_ == nullptr && this->aiServiceConfig_ == nullptr && this->dnsServers_ == nullptr && this->healthCheckConfig_ == nullptr && this->healthyPanicThreshold_ == nullptr
        && this->outlierDetectionConfig_ == nullptr && this->ports_ == nullptr && this->protocol_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline UpdateServiceRequest& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline UpdateServiceRequest& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // agentServiceConfig Field Functions 
    bool hasAgentServiceConfig() const { return this->agentServiceConfig_ != nullptr;};
    void deleteAgentServiceConfig() { this->agentServiceConfig_ = nullptr;};
    inline const AgentServiceConfig & getAgentServiceConfig() const { DARABONBA_PTR_GET_CONST(agentServiceConfig_, AgentServiceConfig) };
    inline AgentServiceConfig getAgentServiceConfig() { DARABONBA_PTR_GET(agentServiceConfig_, AgentServiceConfig) };
    inline UpdateServiceRequest& setAgentServiceConfig(const AgentServiceConfig & agentServiceConfig) { DARABONBA_PTR_SET_VALUE(agentServiceConfig_, agentServiceConfig) };
    inline UpdateServiceRequest& setAgentServiceConfig(AgentServiceConfig && agentServiceConfig) { DARABONBA_PTR_SET_RVALUE(agentServiceConfig_, agentServiceConfig) };


    // aiServiceConfig Field Functions 
    bool hasAiServiceConfig() const { return this->aiServiceConfig_ != nullptr;};
    void deleteAiServiceConfig() { this->aiServiceConfig_ = nullptr;};
    inline const AiServiceConfig & getAiServiceConfig() const { DARABONBA_PTR_GET_CONST(aiServiceConfig_, AiServiceConfig) };
    inline AiServiceConfig getAiServiceConfig() { DARABONBA_PTR_GET(aiServiceConfig_, AiServiceConfig) };
    inline UpdateServiceRequest& setAiServiceConfig(const AiServiceConfig & aiServiceConfig) { DARABONBA_PTR_SET_VALUE(aiServiceConfig_, aiServiceConfig) };
    inline UpdateServiceRequest& setAiServiceConfig(AiServiceConfig && aiServiceConfig) { DARABONBA_PTR_SET_RVALUE(aiServiceConfig_, aiServiceConfig) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const vector<string> & getDnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, vector<string>) };
    inline vector<string> getDnsServers() { DARABONBA_PTR_GET(dnsServers_, vector<string>) };
    inline UpdateServiceRequest& setDnsServers(const vector<string> & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline UpdateServiceRequest& setDnsServers(vector<string> && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const UpdateServiceRequest::HealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, UpdateServiceRequest::HealthCheckConfig) };
    inline UpdateServiceRequest::HealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, UpdateServiceRequest::HealthCheckConfig) };
    inline UpdateServiceRequest& setHealthCheckConfig(const UpdateServiceRequest::HealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline UpdateServiceRequest& setHealthCheckConfig(UpdateServiceRequest::HealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // healthyPanicThreshold Field Functions 
    bool hasHealthyPanicThreshold() const { return this->healthyPanicThreshold_ != nullptr;};
    void deleteHealthyPanicThreshold() { this->healthyPanicThreshold_ = nullptr;};
    inline float getHealthyPanicThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyPanicThreshold_, 0.0) };
    inline UpdateServiceRequest& setHealthyPanicThreshold(float healthyPanicThreshold) { DARABONBA_PTR_SET_VALUE(healthyPanicThreshold_, healthyPanicThreshold) };


    // outlierDetectionConfig Field Functions 
    bool hasOutlierDetectionConfig() const { return this->outlierDetectionConfig_ != nullptr;};
    void deleteOutlierDetectionConfig() { this->outlierDetectionConfig_ = nullptr;};
    inline const UpdateServiceRequest::OutlierDetectionConfig & getOutlierDetectionConfig() const { DARABONBA_PTR_GET_CONST(outlierDetectionConfig_, UpdateServiceRequest::OutlierDetectionConfig) };
    inline UpdateServiceRequest::OutlierDetectionConfig getOutlierDetectionConfig() { DARABONBA_PTR_GET(outlierDetectionConfig_, UpdateServiceRequest::OutlierDetectionConfig) };
    inline UpdateServiceRequest& setOutlierDetectionConfig(const UpdateServiceRequest::OutlierDetectionConfig & outlierDetectionConfig) { DARABONBA_PTR_SET_VALUE(outlierDetectionConfig_, outlierDetectionConfig) };
    inline UpdateServiceRequest& setOutlierDetectionConfig(UpdateServiceRequest::OutlierDetectionConfig && outlierDetectionConfig) { DARABONBA_PTR_SET_RVALUE(outlierDetectionConfig_, outlierDetectionConfig) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<UpdateServiceRequest::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<UpdateServiceRequest::Ports>) };
    inline vector<UpdateServiceRequest::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<UpdateServiceRequest::Ports>) };
    inline UpdateServiceRequest& setPorts(const vector<UpdateServiceRequest::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline UpdateServiceRequest& setPorts(vector<UpdateServiceRequest::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateServiceRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The list of domain names or fixed addresses.
    shared_ptr<vector<string>> addresses_ {};
    // The agent service configurations.
    shared_ptr<AgentServiceConfig> agentServiceConfig_ {};
    // The AI service configurations.
    shared_ptr<AiServiceConfig> aiServiceConfig_ {};
    // A DNS service address.
    shared_ptr<vector<string>> dnsServers_ {};
    // The health check configurations.
    shared_ptr<UpdateServiceRequest::HealthCheckConfig> healthCheckConfig_ {};
    // The health check threshold.
    shared_ptr<float> healthyPanicThreshold_ {};
    // The passive health check configurations.
    shared_ptr<UpdateServiceRequest::OutlierDetectionConfig> outlierDetectionConfig_ {};
    // The port information.
    shared_ptr<vector<UpdateServiceRequest::Ports>> ports_ {};
    // The service protocol.
    shared_ptr<string> protocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
