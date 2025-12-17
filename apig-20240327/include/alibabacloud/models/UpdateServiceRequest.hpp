// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgentServiceConfig.hpp>
#include <alibabacloud/models/AiServiceConfig.hpp>
#include <alibabacloud/models/UpdateServiceRequestHealthCheckConfig.hpp>
#include <alibabacloud/models/UpdateServiceRequestOutlierDetectionConfig.hpp>
#include <alibabacloud/models/UpdateServiceRequestPorts.hpp>
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
    virtual bool empty() const override { return this->addresses_ == nullptr
        && return this->agentServiceConfig_ == nullptr && return this->aiServiceConfig_ == nullptr && return this->dnsServers_ == nullptr && return this->healthCheckConfig_ == nullptr && return this->healthyPanicThreshold_ == nullptr
        && return this->outlierDetectionConfig_ == nullptr && return this->ports_ == nullptr && return this->protocol_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> addresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline UpdateServiceRequest& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline UpdateServiceRequest& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // agentServiceConfig Field Functions 
    bool hasAgentServiceConfig() const { return this->agentServiceConfig_ != nullptr;};
    void deleteAgentServiceConfig() { this->agentServiceConfig_ = nullptr;};
    inline const AgentServiceConfig & agentServiceConfig() const { DARABONBA_PTR_GET_CONST(agentServiceConfig_, AgentServiceConfig) };
    inline AgentServiceConfig agentServiceConfig() { DARABONBA_PTR_GET(agentServiceConfig_, AgentServiceConfig) };
    inline UpdateServiceRequest& setAgentServiceConfig(const AgentServiceConfig & agentServiceConfig) { DARABONBA_PTR_SET_VALUE(agentServiceConfig_, agentServiceConfig) };
    inline UpdateServiceRequest& setAgentServiceConfig(AgentServiceConfig && agentServiceConfig) { DARABONBA_PTR_SET_RVALUE(agentServiceConfig_, agentServiceConfig) };


    // aiServiceConfig Field Functions 
    bool hasAiServiceConfig() const { return this->aiServiceConfig_ != nullptr;};
    void deleteAiServiceConfig() { this->aiServiceConfig_ = nullptr;};
    inline const AiServiceConfig & aiServiceConfig() const { DARABONBA_PTR_GET_CONST(aiServiceConfig_, AiServiceConfig) };
    inline AiServiceConfig aiServiceConfig() { DARABONBA_PTR_GET(aiServiceConfig_, AiServiceConfig) };
    inline UpdateServiceRequest& setAiServiceConfig(const AiServiceConfig & aiServiceConfig) { DARABONBA_PTR_SET_VALUE(aiServiceConfig_, aiServiceConfig) };
    inline UpdateServiceRequest& setAiServiceConfig(AiServiceConfig && aiServiceConfig) { DARABONBA_PTR_SET_RVALUE(aiServiceConfig_, aiServiceConfig) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const vector<string> & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, vector<string>) };
    inline vector<string> dnsServers() { DARABONBA_PTR_GET(dnsServers_, vector<string>) };
    inline UpdateServiceRequest& setDnsServers(const vector<string> & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline UpdateServiceRequest& setDnsServers(vector<string> && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const UpdateServiceRequestHealthCheckConfig & healthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, UpdateServiceRequestHealthCheckConfig) };
    inline UpdateServiceRequestHealthCheckConfig healthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, UpdateServiceRequestHealthCheckConfig) };
    inline UpdateServiceRequest& setHealthCheckConfig(const UpdateServiceRequestHealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline UpdateServiceRequest& setHealthCheckConfig(UpdateServiceRequestHealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // healthyPanicThreshold Field Functions 
    bool hasHealthyPanicThreshold() const { return this->healthyPanicThreshold_ != nullptr;};
    void deleteHealthyPanicThreshold() { this->healthyPanicThreshold_ = nullptr;};
    inline float healthyPanicThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyPanicThreshold_, 0.0) };
    inline UpdateServiceRequest& setHealthyPanicThreshold(float healthyPanicThreshold) { DARABONBA_PTR_SET_VALUE(healthyPanicThreshold_, healthyPanicThreshold) };


    // outlierDetectionConfig Field Functions 
    bool hasOutlierDetectionConfig() const { return this->outlierDetectionConfig_ != nullptr;};
    void deleteOutlierDetectionConfig() { this->outlierDetectionConfig_ = nullptr;};
    inline const UpdateServiceRequestOutlierDetectionConfig & outlierDetectionConfig() const { DARABONBA_PTR_GET_CONST(outlierDetectionConfig_, UpdateServiceRequestOutlierDetectionConfig) };
    inline UpdateServiceRequestOutlierDetectionConfig outlierDetectionConfig() { DARABONBA_PTR_GET(outlierDetectionConfig_, UpdateServiceRequestOutlierDetectionConfig) };
    inline UpdateServiceRequest& setOutlierDetectionConfig(const UpdateServiceRequestOutlierDetectionConfig & outlierDetectionConfig) { DARABONBA_PTR_SET_VALUE(outlierDetectionConfig_, outlierDetectionConfig) };
    inline UpdateServiceRequest& setOutlierDetectionConfig(UpdateServiceRequestOutlierDetectionConfig && outlierDetectionConfig) { DARABONBA_PTR_SET_RVALUE(outlierDetectionConfig_, outlierDetectionConfig) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<UpdateServiceRequestPorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<UpdateServiceRequestPorts>) };
    inline vector<UpdateServiceRequestPorts> ports() { DARABONBA_PTR_GET(ports_, vector<UpdateServiceRequestPorts>) };
    inline UpdateServiceRequest& setPorts(const vector<UpdateServiceRequestPorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline UpdateServiceRequest& setPorts(vector<UpdateServiceRequestPorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateServiceRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<vector<string>> addresses_ = nullptr;
    std::shared_ptr<AgentServiceConfig> agentServiceConfig_ = nullptr;
    std::shared_ptr<AiServiceConfig> aiServiceConfig_ = nullptr;
    std::shared_ptr<vector<string>> dnsServers_ = nullptr;
    std::shared_ptr<UpdateServiceRequestHealthCheckConfig> healthCheckConfig_ = nullptr;
    std::shared_ptr<float> healthyPanicThreshold_ = nullptr;
    std::shared_ptr<UpdateServiceRequestOutlierDetectionConfig> outlierDetectionConfig_ = nullptr;
    std::shared_ptr<vector<UpdateServiceRequestPorts>> ports_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
