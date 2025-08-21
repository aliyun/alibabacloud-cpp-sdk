// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODYRESULTCOLLECTORSEXTENDCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODYRESULTCOLLECTORSEXTENDCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEcsInstancesResponseBodyResultCollectorsExtendConfigsMachines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEcsInstancesResponseBodyResultCollectorsExtendConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(enableMonitoring, enableMonitoring_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(hosts, hosts_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(machines, machines_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(enableMonitoring, enableMonitoring_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(machines, machines_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    ListEcsInstancesResponseBodyResultCollectorsExtendConfigs() = default ;
    ListEcsInstancesResponseBodyResultCollectorsExtendConfigs(const ListEcsInstancesResponseBodyResultCollectorsExtendConfigs &) = default ;
    ListEcsInstancesResponseBodyResultCollectorsExtendConfigs(ListEcsInstancesResponseBodyResultCollectorsExtendConfigs &&) = default ;
    ListEcsInstancesResponseBodyResultCollectorsExtendConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsInstancesResponseBodyResultCollectorsExtendConfigs() = default ;
    ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& operator=(const ListEcsInstancesResponseBodyResultCollectorsExtendConfigs &) = default ;
    ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& operator=(ListEcsInstancesResponseBodyResultCollectorsExtendConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configType_ != nullptr
        && this->enableMonitoring_ != nullptr && this->groupId_ != nullptr && this->hosts_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr
        && this->machines_ != nullptr && this->protocol_ != nullptr && this->type_ != nullptr && this->userName_ != nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // enableMonitoring Field Functions 
    bool hasEnableMonitoring() const { return this->enableMonitoring_ != nullptr;};
    void deleteEnableMonitoring() { this->enableMonitoring_ = nullptr;};
    inline bool enableMonitoring() const { DARABONBA_PTR_GET_DEFAULT(enableMonitoring_, false) };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setEnableMonitoring(bool enableMonitoring) { DARABONBA_PTR_SET_VALUE(enableMonitoring_, enableMonitoring) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const vector<string> & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<string>) };
    inline vector<string> hosts() { DARABONBA_PTR_GET(hosts_, vector<string>) };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setHosts(const vector<string> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setHosts(vector<string> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // machines Field Functions 
    bool hasMachines() const { return this->machines_ != nullptr;};
    void deleteMachines() { this->machines_ = nullptr;};
    inline const vector<Models::ListEcsInstancesResponseBodyResultCollectorsExtendConfigsMachines> & machines() const { DARABONBA_PTR_GET_CONST(machines_, vector<Models::ListEcsInstancesResponseBodyResultCollectorsExtendConfigsMachines>) };
    inline vector<Models::ListEcsInstancesResponseBodyResultCollectorsExtendConfigsMachines> machines() { DARABONBA_PTR_GET(machines_, vector<Models::ListEcsInstancesResponseBodyResultCollectorsExtendConfigsMachines>) };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setMachines(const vector<Models::ListEcsInstancesResponseBodyResultCollectorsExtendConfigsMachines> & machines) { DARABONBA_PTR_SET_VALUE(machines_, machines) };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setMachines(vector<Models::ListEcsInstancesResponseBodyResultCollectorsExtendConfigsMachines> && machines) { DARABONBA_PTR_SET_RVALUE(machines_, machines) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListEcsInstancesResponseBodyResultCollectorsExtendConfigs& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The instance type specified by Collector Output. Supports Elasticsearch and Logstash. Displayed when the **configType** is **collectorTargetInstance**.
    std::shared_ptr<string> configType_ = nullptr;
    // The ID of the host group. Displayed when the **configType** is **collectorDeployMachine**.
    std::shared_ptr<bool> enableMonitoring_ = nullptr;
    // The configuration type. Valid values:
    // 
    // *   collectorTargetInstance: Collector Output
    // *   collectorDeployMachine: Collector Deployment Machine
    // *   Collector Elasticsearch ForKibana: Elasticsearch instance information that supports the Kibana dashboard
    std::shared_ptr<string> groupId_ = nullptr;
    // The path in which Filebeat is collected.
    std::shared_ptr<vector<string>> hosts_ = nullptr;
    // The list of ECS instances on which the collector is deployed. Displayed when the **configType** is **collectorDeployMachines** and the **type** is **ECSInstanceId**.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The transmission protocol, which must be the same as the access protocol of the instance specified by Output. HTTP and HTTPS. Displayed when the **configType** is **collectorTargetInstance**.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The status of each crawl on the ECS instance. Valid values:
    // 
    // *   heartOk: The heartbeat is normal.
    // *   heartLost: The heartbeat is abnormal.
    // *   uninstalled
    // *   failed: The installation failed.
    std::shared_ptr<vector<Models::ListEcsInstancesResponseBodyResultCollectorsExtendConfigsMachines>> machines_ = nullptr;
    // The username that is used to access the instance. The default value is elastic. Displayed when the **configType** is **collectorTargetInstance** or **collectorElasticsearchForKibana**.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the instance that is associated with the crawker. If the **configType** parameter is set to **collectorTargetInstance**, the value of this parameter is the ID of the output collector. If the **configType** parameter is set to **collectorDeployMachines** and the **type** parameter is set to **ACKCluster**, the value of this parameter is the ID of the ACK cluster.
    std::shared_ptr<string> type_ = nullptr;
    // The type of the machine on which the Collector is deployed. This parameter is displayed when the **configType** is **collectorDeployMachine**. Valid values:
    // 
    // *   ECSInstanceId:ECS
    // *   ACKCluster: Container Kubernetes
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
