// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICE_HPP_
#define ALIBABACLOUD_MODELS_SERVICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgentServiceConfig.hpp>
#include <alibabacloud/models/AiServiceConfig.hpp>
#include <alibabacloud/models/ServiceHealthCheck.hpp>
#include <alibabacloud/models/LabelDetail.hpp>
#include <alibabacloud/models/ServicePorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class Service : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Service& obj) { 
      DARABONBA_PTR_TO_JSON(addresses, addresses_);
      DARABONBA_PTR_TO_JSON(agentServiceConfig, agentServiceConfig_);
      DARABONBA_PTR_TO_JSON(aiServiceConfig, aiServiceConfig_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(expressType, expressType_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(healthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(healthStatus, healthStatus_);
      DARABONBA_PTR_TO_JSON(labelDetails, labelDetails_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(outlierEndpoints, outlierEndpoints_);
      DARABONBA_PTR_TO_JSON(ports, ports_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(unhealthyEndpoints, unhealthyEndpoints_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, Service& obj) { 
      DARABONBA_PTR_FROM_JSON(addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(agentServiceConfig, agentServiceConfig_);
      DARABONBA_PTR_FROM_JSON(aiServiceConfig, aiServiceConfig_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(expressType, expressType_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(healthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(healthStatus, healthStatus_);
      DARABONBA_PTR_FROM_JSON(labelDetails, labelDetails_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(outlierEndpoints, outlierEndpoints_);
      DARABONBA_PTR_FROM_JSON(ports, ports_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(unhealthyEndpoints, unhealthyEndpoints_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    Service() = default ;
    Service(const Service &) = default ;
    Service(Service &&) = default ;
    Service(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Service() = default ;
    Service& operator=(const Service &) = default ;
    Service& operator=(Service &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addresses_ != nullptr
        && this->agentServiceConfig_ != nullptr && this->aiServiceConfig_ != nullptr && this->createTimestamp_ != nullptr && this->expressType_ != nullptr && this->gatewayId_ != nullptr
        && this->groupName_ != nullptr && this->healthCheck_ != nullptr && this->healthStatus_ != nullptr && this->labelDetails_ != nullptr && this->name_ != nullptr
        && this->namespace_ != nullptr && this->outlierEndpoints_ != nullptr && this->ports_ != nullptr && this->protocol_ != nullptr && this->qualifier_ != nullptr
        && this->resourceGroupId_ != nullptr && this->serviceId_ != nullptr && this->sourceType_ != nullptr && this->unhealthyEndpoints_ != nullptr && this->updateTimestamp_ != nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> addresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline Service& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline Service& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // agentServiceConfig Field Functions 
    bool hasAgentServiceConfig() const { return this->agentServiceConfig_ != nullptr;};
    void deleteAgentServiceConfig() { this->agentServiceConfig_ = nullptr;};
    inline const AgentServiceConfig & agentServiceConfig() const { DARABONBA_PTR_GET_CONST(agentServiceConfig_, AgentServiceConfig) };
    inline AgentServiceConfig agentServiceConfig() { DARABONBA_PTR_GET(agentServiceConfig_, AgentServiceConfig) };
    inline Service& setAgentServiceConfig(const AgentServiceConfig & agentServiceConfig) { DARABONBA_PTR_SET_VALUE(agentServiceConfig_, agentServiceConfig) };
    inline Service& setAgentServiceConfig(AgentServiceConfig && agentServiceConfig) { DARABONBA_PTR_SET_RVALUE(agentServiceConfig_, agentServiceConfig) };


    // aiServiceConfig Field Functions 
    bool hasAiServiceConfig() const { return this->aiServiceConfig_ != nullptr;};
    void deleteAiServiceConfig() { this->aiServiceConfig_ = nullptr;};
    inline const AiServiceConfig & aiServiceConfig() const { DARABONBA_PTR_GET_CONST(aiServiceConfig_, AiServiceConfig) };
    inline AiServiceConfig aiServiceConfig() { DARABONBA_PTR_GET(aiServiceConfig_, AiServiceConfig) };
    inline Service& setAiServiceConfig(const AiServiceConfig & aiServiceConfig) { DARABONBA_PTR_SET_VALUE(aiServiceConfig_, aiServiceConfig) };
    inline Service& setAiServiceConfig(AiServiceConfig && aiServiceConfig) { DARABONBA_PTR_SET_RVALUE(aiServiceConfig_, aiServiceConfig) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline Service& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expressType Field Functions 
    bool hasExpressType() const { return this->expressType_ != nullptr;};
    void deleteExpressType() { this->expressType_ = nullptr;};
    inline string expressType() const { DARABONBA_PTR_GET_DEFAULT(expressType_, "") };
    inline Service& setExpressType(string expressType) { DARABONBA_PTR_SET_VALUE(expressType_, expressType) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline Service& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline Service& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const ServiceHealthCheck & healthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, ServiceHealthCheck) };
    inline ServiceHealthCheck healthCheck() { DARABONBA_PTR_GET(healthCheck_, ServiceHealthCheck) };
    inline Service& setHealthCheck(const ServiceHealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline Service& setHealthCheck(ServiceHealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // healthStatus Field Functions 
    bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
    void deleteHealthStatus() { this->healthStatus_ = nullptr;};
    inline string healthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
    inline Service& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


    // labelDetails Field Functions 
    bool hasLabelDetails() const { return this->labelDetails_ != nullptr;};
    void deleteLabelDetails() { this->labelDetails_ = nullptr;};
    inline const vector<LabelDetail> & labelDetails() const { DARABONBA_PTR_GET_CONST(labelDetails_, vector<LabelDetail>) };
    inline vector<LabelDetail> labelDetails() { DARABONBA_PTR_GET(labelDetails_, vector<LabelDetail>) };
    inline Service& setLabelDetails(const vector<LabelDetail> & labelDetails) { DARABONBA_PTR_SET_VALUE(labelDetails_, labelDetails) };
    inline Service& setLabelDetails(vector<LabelDetail> && labelDetails) { DARABONBA_PTR_SET_RVALUE(labelDetails_, labelDetails) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Service& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Service& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // outlierEndpoints Field Functions 
    bool hasOutlierEndpoints() const { return this->outlierEndpoints_ != nullptr;};
    void deleteOutlierEndpoints() { this->outlierEndpoints_ = nullptr;};
    inline const vector<string> & outlierEndpoints() const { DARABONBA_PTR_GET_CONST(outlierEndpoints_, vector<string>) };
    inline vector<string> outlierEndpoints() { DARABONBA_PTR_GET(outlierEndpoints_, vector<string>) };
    inline Service& setOutlierEndpoints(const vector<string> & outlierEndpoints) { DARABONBA_PTR_SET_VALUE(outlierEndpoints_, outlierEndpoints) };
    inline Service& setOutlierEndpoints(vector<string> && outlierEndpoints) { DARABONBA_PTR_SET_RVALUE(outlierEndpoints_, outlierEndpoints) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<ServicePorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<ServicePorts>) };
    inline vector<ServicePorts> ports() { DARABONBA_PTR_GET(ports_, vector<ServicePorts>) };
    inline Service& setPorts(const vector<ServicePorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline Service& setPorts(vector<ServicePorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline Service& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline Service& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline Service& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline Service& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline Service& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // unhealthyEndpoints Field Functions 
    bool hasUnhealthyEndpoints() const { return this->unhealthyEndpoints_ != nullptr;};
    void deleteUnhealthyEndpoints() { this->unhealthyEndpoints_ = nullptr;};
    inline const vector<string> & unhealthyEndpoints() const { DARABONBA_PTR_GET_CONST(unhealthyEndpoints_, vector<string>) };
    inline vector<string> unhealthyEndpoints() { DARABONBA_PTR_GET(unhealthyEndpoints_, vector<string>) };
    inline Service& setUnhealthyEndpoints(const vector<string> & unhealthyEndpoints) { DARABONBA_PTR_SET_VALUE(unhealthyEndpoints_, unhealthyEndpoints) };
    inline Service& setUnhealthyEndpoints(vector<string> && unhealthyEndpoints) { DARABONBA_PTR_SET_RVALUE(unhealthyEndpoints_, unhealthyEndpoints) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline Service& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    std::shared_ptr<vector<string>> addresses_ = nullptr;
    std::shared_ptr<AgentServiceConfig> agentServiceConfig_ = nullptr;
    std::shared_ptr<AiServiceConfig> aiServiceConfig_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> expressType_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<ServiceHealthCheck> healthCheck_ = nullptr;
    std::shared_ptr<string> healthStatus_ = nullptr;
    std::shared_ptr<vector<LabelDetail>> labelDetails_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<vector<string>> outlierEndpoints_ = nullptr;
    std::shared_ptr<vector<ServicePorts>> ports_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<vector<string>> unhealthyEndpoints_ = nullptr;
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
