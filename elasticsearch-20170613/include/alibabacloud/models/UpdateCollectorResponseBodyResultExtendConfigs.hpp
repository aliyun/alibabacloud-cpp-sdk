// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOLLECTORRESPONSEBODYRESULTEXTENDCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOLLECTORRESPONSEBODYRESULTEXTENDCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCollectorResponseBodyResultExtendConfigsMachines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateCollectorResponseBodyResultExtendConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCollectorResponseBodyResultExtendConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(enableMonitoring, enableMonitoring_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(hosts, hosts_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(kibanaHost, kibanaHost_);
      DARABONBA_PTR_TO_JSON(machines, machines_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(successPodsCount, successPodsCount_);
      DARABONBA_PTR_TO_JSON(totalPodsCount, totalPodsCount_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCollectorResponseBodyResultExtendConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(enableMonitoring, enableMonitoring_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(kibanaHost, kibanaHost_);
      DARABONBA_PTR_FROM_JSON(machines, machines_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(successPodsCount, successPodsCount_);
      DARABONBA_PTR_FROM_JSON(totalPodsCount, totalPodsCount_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    UpdateCollectorResponseBodyResultExtendConfigs() = default ;
    UpdateCollectorResponseBodyResultExtendConfigs(const UpdateCollectorResponseBodyResultExtendConfigs &) = default ;
    UpdateCollectorResponseBodyResultExtendConfigs(UpdateCollectorResponseBodyResultExtendConfigs &&) = default ;
    UpdateCollectorResponseBodyResultExtendConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCollectorResponseBodyResultExtendConfigs() = default ;
    UpdateCollectorResponseBodyResultExtendConfigs& operator=(const UpdateCollectorResponseBodyResultExtendConfigs &) = default ;
    UpdateCollectorResponseBodyResultExtendConfigs& operator=(UpdateCollectorResponseBodyResultExtendConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configType_ != nullptr
        && this->enableMonitoring_ != nullptr && this->groupId_ != nullptr && this->host_ != nullptr && this->hosts_ != nullptr && this->instanceId_ != nullptr
        && this->instanceType_ != nullptr && this->kibanaHost_ != nullptr && this->machines_ != nullptr && this->protocol_ != nullptr && this->successPodsCount_ != nullptr
        && this->totalPodsCount_ != nullptr && this->type_ != nullptr && this->userName_ != nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // enableMonitoring Field Functions 
    bool hasEnableMonitoring() const { return this->enableMonitoring_ != nullptr;};
    void deleteEnableMonitoring() { this->enableMonitoring_ = nullptr;};
    inline bool enableMonitoring() const { DARABONBA_PTR_GET_DEFAULT(enableMonitoring_, false) };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setEnableMonitoring(bool enableMonitoring) { DARABONBA_PTR_SET_VALUE(enableMonitoring_, enableMonitoring) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<string> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<string>) };
    inline vector<string> hosts() { DARABONBA_PTR_GET(hosts_, vector<string>) };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setHosts(const vector<string> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setHosts(vector<string> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // kibanaHost Field Functions 
    bool hasKibanaHost() const { return this->kibanaHost_ != nullptr;};
    void deleteKibanaHost() { this->kibanaHost_ = nullptr;};
    inline string kibanaHost() const { DARABONBA_PTR_GET_DEFAULT(kibanaHost_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setKibanaHost(string kibanaHost) { DARABONBA_PTR_SET_VALUE(kibanaHost_, kibanaHost) };


    // machines Field Functions 
    bool hasMachines() const { return this->machines_ != nullptr;};
    void deleteMachines() { this->machines_ = nullptr;};
    inline const vector<Models::UpdateCollectorResponseBodyResultExtendConfigsMachines> & machines() const { DARABONBA_PTR_GET_CONST(machines_, vector<Models::UpdateCollectorResponseBodyResultExtendConfigsMachines>) };
    inline vector<Models::UpdateCollectorResponseBodyResultExtendConfigsMachines> machines() { DARABONBA_PTR_GET(machines_, vector<Models::UpdateCollectorResponseBodyResultExtendConfigsMachines>) };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setMachines(const vector<Models::UpdateCollectorResponseBodyResultExtendConfigsMachines> & machines) { DARABONBA_PTR_SET_VALUE(machines_, machines) };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setMachines(vector<Models::UpdateCollectorResponseBodyResultExtendConfigsMachines> && machines) { DARABONBA_PTR_SET_RVALUE(machines_, machines) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // successPodsCount Field Functions 
    bool hasSuccessPodsCount() const { return this->successPodsCount_ != nullptr;};
    void deleteSuccessPodsCount() { this->successPodsCount_ = nullptr;};
    inline string successPodsCount() const { DARABONBA_PTR_GET_DEFAULT(successPodsCount_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setSuccessPodsCount(string successPodsCount) { DARABONBA_PTR_SET_VALUE(successPodsCount_, successPodsCount) };


    // totalPodsCount Field Functions 
    bool hasTotalPodsCount() const { return this->totalPodsCount_ != nullptr;};
    void deleteTotalPodsCount() { this->totalPodsCount_ = nullptr;};
    inline string totalPodsCount() const { DARABONBA_PTR_GET_DEFAULT(totalPodsCount_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setTotalPodsCount(string totalPodsCount) { DARABONBA_PTR_SET_VALUE(totalPodsCount_, totalPodsCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateCollectorResponseBodyResultExtendConfigs& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The type of the configuration items. Valid values:
    // 
    // *   collectorTargetInstance: indicates the information about the output of the shipper.
    // *   collectorDeployMachine: indicates the information about the machine on which the shipper is installed.
    // *   collectorElasticsearchForKibana: indicates the information about the Elasticsearch cluster for which Kibana Dashboard is enabled.
    std::shared_ptr<string> configType_ = nullptr;
    // Indicates whether Kibana Monitoring is enabled. This parameter is returned only when **configType** is set to **collectorTargetInstance** and **instanceType** is set to **elasticsearch**. Valid values: true and false.
    std::shared_ptr<bool> enableMonitoring_ = nullptr;
    // The machine group ID. This parameter is returned only when **configType** is set to **collectorDeployMachine**.
    std::shared_ptr<string> groupId_ = nullptr;
    // The address that is used to access Kibana over an internal network after you enable Kibana Dashboard. This parameter is returned only when **configType** is set to **collectorElasticsearchForKibana**.
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<vector<string>> hosts_ = nullptr;
    // The ID of the object that is associated with the shipper. If **configType** is set to **collectorTargetInstance**, the value of this parameter is the ID of the output of the shipper. If **configType** is set to **collectorDeployMachines** and **type** is set to **ACKCluster**, the value of this parameter is the ID of an ACK cluster.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the output of the shipper. Valid values: elasticsearch and logstash. This parameter is returned only when **configType** is set to **collectorTargetInstance**.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The address that is used to access Kibana over the Internet after you enable Kibana Dashboard. This parameter is returned only when **configType** is set to **collectorElasticsearchForKibana**.
    std::shared_ptr<string> kibanaHost_ = nullptr;
    // This parameter is returned only when configType is set to collectorDeployMachine.
    // 
    // This parameter indicates the information about the ECS instances or ACK clusters on which the shipper is installed.
    std::shared_ptr<vector<Models::UpdateCollectorResponseBodyResultExtendConfigsMachines>> machines_ = nullptr;
    // The transfer protocol that is used. It is the same as the protocol over which you can access the output of the shipper. Valid values: HTTP and HTTPS. This parameter is returned only when **configType** is set to **collectorTargetInstance**.
    std::shared_ptr<string> protocol_ = nullptr;
    // The number of pods from which logs are successfully collected in the ACK cluster. This parameter is returned only when **configType** is set to **collectorDeployMachines** and **type** is set to **ACKCluster**.
    std::shared_ptr<string> successPodsCount_ = nullptr;
    // The number of pods from which logs needed to be collected in the ACK cluster. This parameter is returned only when **configType** is set to **collectorDeployMachines** and **type** is set to **ACKCluster**.
    std::shared_ptr<string> totalPodsCount_ = nullptr;
    // The type of the machine on which the shipper is installed. This parameter is returned only when **configType** is set to **collectorDeployMachine**. Valid values:
    // 
    // *   ECSInstanceId
    // *   ACKCluster
    std::shared_ptr<string> type_ = nullptr;
    // The username that is used to access the output of the shipper. Default value: elastic. This parameter is returned only when **configType** is set to **collectorTargetInstance** or **collectorElasticsearchForKibana**.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
