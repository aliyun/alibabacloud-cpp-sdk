// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEcsInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListEcsInstancesResponseBody() = default ;
    ListEcsInstancesResponseBody(const ListEcsInstancesResponseBody &) = default ;
    ListEcsInstancesResponseBody(ListEcsInstancesResponseBody &&) = default ;
    ListEcsInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsInstancesResponseBody() = default ;
    ListEcsInstancesResponseBody& operator=(const ListEcsInstancesResponseBody &) = default ;
    ListEcsInstancesResponseBody& operator=(ListEcsInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(cloudAssistantStatus, cloudAssistantStatus_);
        DARABONBA_PTR_TO_JSON(collectors, collectors_);
        DARABONBA_PTR_TO_JSON(ecsInstanceId, ecsInstanceId_);
        DARABONBA_PTR_TO_JSON(ecsInstanceName, ecsInstanceName_);
        DARABONBA_PTR_TO_JSON(ipAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(osType, osType_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(cloudAssistantStatus, cloudAssistantStatus_);
        DARABONBA_PTR_FROM_JSON(collectors, collectors_);
        DARABONBA_PTR_FROM_JSON(ecsInstanceId, ecsInstanceId_);
        DARABONBA_PTR_FROM_JSON(ecsInstanceName, ecsInstanceName_);
        DARABONBA_PTR_FROM_JSON(ipAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(osType, osType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpAddress& obj) { 
          DARABONBA_PTR_TO_JSON(host, host_);
          DARABONBA_PTR_TO_JSON(ipType, ipType_);
        };
        friend void from_json(const Darabonba::Json& j, IpAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(host, host_);
          DARABONBA_PTR_FROM_JSON(ipType, ipType_);
        };
        IpAddress() = default ;
        IpAddress(const IpAddress &) = default ;
        IpAddress(IpAddress &&) = default ;
        IpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpAddress() = default ;
        IpAddress& operator=(const IpAddress &) = default ;
        IpAddress& operator=(IpAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->host_ == nullptr
        && this->ipType_ == nullptr; };
        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline IpAddress& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // ipType Field Functions 
        bool hasIpType() const { return this->ipType_ != nullptr;};
        void deleteIpType() { this->ipType_ = nullptr;};
        inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
        inline IpAddress& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


      protected:
        // The information about the collectors on the ECS instance.
        shared_ptr<string> host_ {};
        // The IP address of the endpoint.
        shared_ptr<string> ipType_ {};
      };

      class Collectors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Collectors& obj) { 
          DARABONBA_PTR_TO_JSON(collectorPaths, collectorPaths_);
          DARABONBA_PTR_TO_JSON(configs, configs_);
          DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
          DARABONBA_PTR_TO_JSON(extendConfigs, extendConfigs_);
          DARABONBA_PTR_TO_JSON(gmtCreatedTime, gmtCreatedTime_);
          DARABONBA_PTR_TO_JSON(gmtUpdateTime, gmtUpdateTime_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
          DARABONBA_PTR_TO_JSON(resId, resId_);
          DARABONBA_PTR_TO_JSON(resType, resType_);
          DARABONBA_PTR_TO_JSON(resVersion, resVersion_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Collectors& obj) { 
          DARABONBA_PTR_FROM_JSON(collectorPaths, collectorPaths_);
          DARABONBA_PTR_FROM_JSON(configs, configs_);
          DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
          DARABONBA_PTR_FROM_JSON(extendConfigs, extendConfigs_);
          DARABONBA_PTR_FROM_JSON(gmtCreatedTime, gmtCreatedTime_);
          DARABONBA_PTR_FROM_JSON(gmtUpdateTime, gmtUpdateTime_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(resId, resId_);
          DARABONBA_PTR_FROM_JSON(resType, resType_);
          DARABONBA_PTR_FROM_JSON(resVersion, resVersion_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        };
        Collectors() = default ;
        Collectors(const Collectors &) = default ;
        Collectors(Collectors &&) = default ;
        Collectors(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Collectors() = default ;
        Collectors& operator=(const Collectors &) = default ;
        Collectors& operator=(Collectors &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExtendConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtendConfigs& obj) { 
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
          friend void from_json(const Darabonba::Json& j, ExtendConfigs& obj) { 
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
          ExtendConfigs() = default ;
          ExtendConfigs(const ExtendConfigs &) = default ;
          ExtendConfigs(ExtendConfigs &&) = default ;
          ExtendConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtendConfigs() = default ;
          ExtendConfigs& operator=(const ExtendConfigs &) = default ;
          ExtendConfigs& operator=(ExtendConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Machines : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Machines& obj) { 
              DARABONBA_PTR_TO_JSON(agentStatus, agentStatus_);
              DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
            };
            friend void from_json(const Darabonba::Json& j, Machines& obj) { 
              DARABONBA_PTR_FROM_JSON(agentStatus, agentStatus_);
              DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
            };
            Machines() = default ;
            Machines(const Machines &) = default ;
            Machines(Machines &&) = default ;
            Machines(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Machines() = default ;
            Machines& operator=(const Machines &) = default ;
            Machines& operator=(Machines &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->agentStatus_ == nullptr
        && this->instanceId_ == nullptr; };
            // agentStatus Field Functions 
            bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
            void deleteAgentStatus() { this->agentStatus_ = nullptr;};
            inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
            inline Machines& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline Machines& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          protected:
            // The IDs of ECS instances.
            shared_ptr<string> agentStatus_ {};
            // The list of access addresses of the specified instance for the output of the collector. Displayed when the **configType** is **collectorTargetInstance**.
            shared_ptr<string> instanceId_ {};
          };

          virtual bool empty() const override { return this->configType_ == nullptr
        && this->enableMonitoring_ == nullptr && this->groupId_ == nullptr && this->hosts_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr
        && this->machines_ == nullptr && this->protocol_ == nullptr && this->type_ == nullptr && this->userName_ == nullptr; };
          // configType Field Functions 
          bool hasConfigType() const { return this->configType_ != nullptr;};
          void deleteConfigType() { this->configType_ = nullptr;};
          inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
          inline ExtendConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


          // enableMonitoring Field Functions 
          bool hasEnableMonitoring() const { return this->enableMonitoring_ != nullptr;};
          void deleteEnableMonitoring() { this->enableMonitoring_ = nullptr;};
          inline bool getEnableMonitoring() const { DARABONBA_PTR_GET_DEFAULT(enableMonitoring_, false) };
          inline ExtendConfigs& setEnableMonitoring(bool enableMonitoring) { DARABONBA_PTR_SET_VALUE(enableMonitoring_, enableMonitoring) };


          // groupId Field Functions 
          bool hasGroupId() const { return this->groupId_ != nullptr;};
          void deleteGroupId() { this->groupId_ = nullptr;};
          inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
          inline ExtendConfigs& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


          // hosts Field Functions 
          bool hasHosts() const { return this->hosts_ != nullptr;};
          void deleteHosts() { this->hosts_ = nullptr;};
          inline const vector<string> & getHosts() const { DARABONBA_PTR_GET_CONST(hosts_, vector<string>) };
          inline vector<string> getHosts() { DARABONBA_PTR_GET(hosts_, vector<string>) };
          inline ExtendConfigs& setHosts(const vector<string> & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
          inline ExtendConfigs& setHosts(vector<string> && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline ExtendConfigs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline ExtendConfigs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // machines Field Functions 
          bool hasMachines() const { return this->machines_ != nullptr;};
          void deleteMachines() { this->machines_ = nullptr;};
          inline const vector<ExtendConfigs::Machines> & getMachines() const { DARABONBA_PTR_GET_CONST(machines_, vector<ExtendConfigs::Machines>) };
          inline vector<ExtendConfigs::Machines> getMachines() { DARABONBA_PTR_GET(machines_, vector<ExtendConfigs::Machines>) };
          inline ExtendConfigs& setMachines(const vector<ExtendConfigs::Machines> & machines) { DARABONBA_PTR_SET_VALUE(machines_, machines) };
          inline ExtendConfigs& setMachines(vector<ExtendConfigs::Machines> && machines) { DARABONBA_PTR_SET_RVALUE(machines_, machines) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline ExtendConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ExtendConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline ExtendConfigs& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          // The instance type specified by Collector Output. Supports Elasticsearch and Logstash. Displayed when the **configType** is **collectorTargetInstance**.
          shared_ptr<string> configType_ {};
          // The ID of the host group. Displayed when the **configType** is **collectorDeployMachine**.
          shared_ptr<bool> enableMonitoring_ {};
          // The configuration type. Valid values:
          // 
          // *   collectorTargetInstance: Collector Output
          // *   collectorDeployMachine: Collector Deployment Machine
          // *   Collector Elasticsearch ForKibana: Elasticsearch instance information that supports the Kibana dashboard
          shared_ptr<string> groupId_ {};
          // The path in which Filebeat is collected.
          shared_ptr<vector<string>> hosts_ {};
          // The list of ECS instances on which the collector is deployed. Displayed when the **configType** is **collectorDeployMachines** and the **type** is **ECSInstanceId**.
          shared_ptr<string> instanceId_ {};
          // The transmission protocol, which must be the same as the access protocol of the instance specified by Output. HTTP and HTTPS. Displayed when the **configType** is **collectorTargetInstance**.
          shared_ptr<string> instanceType_ {};
          // The status of each crawl on the ECS instance. Valid values:
          // 
          // *   heartOk: The heartbeat is normal.
          // *   heartLost: The heartbeat is abnormal.
          // *   uninstalled
          // *   failed: The installation failed.
          shared_ptr<vector<ExtendConfigs::Machines>> machines_ {};
          // The username that is used to access the instance. The default value is elastic. Displayed when the **configType** is **collectorTargetInstance** or **collectorElasticsearchForKibana**.
          shared_ptr<string> protocol_ {};
          // The ID of the instance that is associated with the crawker. If the **configType** parameter is set to **collectorTargetInstance**, the value of this parameter is the ID of the output collector. If the **configType** parameter is set to **collectorDeployMachines** and the **type** parameter is set to **ACKCluster**, the value of this parameter is the ID of the ACK cluster.
          shared_ptr<string> type_ {};
          // The type of the machine on which the Collector is deployed. This parameter is displayed when the **configType** is **collectorDeployMachine**. Valid values:
          // 
          // *   ECSInstanceId:ECS
          // *   ACKCluster: Container Kubernetes
          shared_ptr<string> userName_ {};
        };

        class Configs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Configs& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(fileName, fileName_);
          };
          friend void from_json(const Darabonba::Json& j, Configs& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(fileName, fileName_);
          };
          Configs() = default ;
          Configs(const Configs &) = default ;
          Configs(Configs &&) = default ;
          Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Configs() = default ;
          Configs& operator=(const Configs &) = default ;
          Configs& operator=(Configs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->fileName_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Configs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // fileName Field Functions 
          bool hasFileName() const { return this->fileName_ != nullptr;};
          void deleteFileName() { this->fileName_ = nullptr;};
          inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
          inline Configs& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        protected:
          // The name of the file.
          shared_ptr<string> content_ {};
          // The information about the extended parameter.
          shared_ptr<string> fileName_ {};
        };

        virtual bool empty() const override { return this->collectorPaths_ == nullptr
        && this->configs_ == nullptr && this->dryRun_ == nullptr && this->extendConfigs_ == nullptr && this->gmtCreatedTime_ == nullptr && this->gmtUpdateTime_ == nullptr
        && this->name_ == nullptr && this->ownerId_ == nullptr && this->resId_ == nullptr && this->resType_ == nullptr && this->resVersion_ == nullptr
        && this->status_ == nullptr && this->vpcId_ == nullptr; };
        // collectorPaths Field Functions 
        bool hasCollectorPaths() const { return this->collectorPaths_ != nullptr;};
        void deleteCollectorPaths() { this->collectorPaths_ = nullptr;};
        inline const vector<string> & getCollectorPaths() const { DARABONBA_PTR_GET_CONST(collectorPaths_, vector<string>) };
        inline vector<string> getCollectorPaths() { DARABONBA_PTR_GET(collectorPaths_, vector<string>) };
        inline Collectors& setCollectorPaths(const vector<string> & collectorPaths) { DARABONBA_PTR_SET_VALUE(collectorPaths_, collectorPaths) };
        inline Collectors& setCollectorPaths(vector<string> && collectorPaths) { DARABONBA_PTR_SET_RVALUE(collectorPaths_, collectorPaths) };


        // configs Field Functions 
        bool hasConfigs() const { return this->configs_ != nullptr;};
        void deleteConfigs() { this->configs_ = nullptr;};
        inline const vector<Collectors::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<Collectors::Configs>) };
        inline vector<Collectors::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<Collectors::Configs>) };
        inline Collectors& setConfigs(const vector<Collectors::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
        inline Collectors& setConfigs(vector<Collectors::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


        // dryRun Field Functions 
        bool hasDryRun() const { return this->dryRun_ != nullptr;};
        void deleteDryRun() { this->dryRun_ = nullptr;};
        inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
        inline Collectors& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


        // extendConfigs Field Functions 
        bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
        void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
        inline const vector<Collectors::ExtendConfigs> & getExtendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Collectors::ExtendConfigs>) };
        inline vector<Collectors::ExtendConfigs> getExtendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Collectors::ExtendConfigs>) };
        inline Collectors& setExtendConfigs(const vector<Collectors::ExtendConfigs> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
        inline Collectors& setExtendConfigs(vector<Collectors::ExtendConfigs> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


        // gmtCreatedTime Field Functions 
        bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
        void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
        inline string getGmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
        inline Collectors& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


        // gmtUpdateTime Field Functions 
        bool hasGmtUpdateTime() const { return this->gmtUpdateTime_ != nullptr;};
        void deleteGmtUpdateTime() { this->gmtUpdateTime_ = nullptr;};
        inline string getGmtUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdateTime_, "") };
        inline Collectors& setGmtUpdateTime(string gmtUpdateTime) { DARABONBA_PTR_SET_VALUE(gmtUpdateTime_, gmtUpdateTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Collectors& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline Collectors& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // resId Field Functions 
        bool hasResId() const { return this->resId_ != nullptr;};
        void deleteResId() { this->resId_ = nullptr;};
        inline string getResId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
        inline Collectors& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


        // resType Field Functions 
        bool hasResType() const { return this->resType_ != nullptr;};
        void deleteResType() { this->resType_ = nullptr;};
        inline string getResType() const { DARABONBA_PTR_GET_DEFAULT(resType_, "") };
        inline Collectors& setResType(string resType) { DARABONBA_PTR_SET_VALUE(resType_, resType) };


        // resVersion Field Functions 
        bool hasResVersion() const { return this->resVersion_ != nullptr;};
        void deleteResVersion() { this->resVersion_ = nullptr;};
        inline string getResVersion() const { DARABONBA_PTR_GET_DEFAULT(resVersion_, "") };
        inline Collectors& setResVersion(string resVersion) { DARABONBA_PTR_SET_VALUE(resVersion_, resVersion) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Collectors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Collectors& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<vector<string>> collectorPaths_ {};
        // The content of the file.
        shared_ptr<vector<Collectors::Configs>> configs_ {};
        // The ID of the Alibaba Cloud account.
        shared_ptr<bool> dryRun_ {};
        // Whether Monitoring is enabled. This field is displayed when the **configType** is **collectorTargetInstance** and the **instanceType** is **Elasticsearch**. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<vector<Collectors::ExtendConfigs>> extendConfigs_ {};
        // The status of the collector. Valid values:
        // 
        // *   activating: The project is taking effect.
        // *   active: The instance has taken effect.
        shared_ptr<string> gmtCreatedTime_ {};
        // Specifies whether to verify and create a crawer. Valid values:
        // 
        // *   true: only verifies and does not create a
        // *   false: verifies and creates a
        shared_ptr<string> gmtUpdateTime_ {};
        // The configuration file information of the collector.
        shared_ptr<string> name_ {};
        // The ID of the Virtual Private Cloud to which the collector belongs.
        shared_ptr<string> ownerId_ {};
        // The time when the collector was updated.
        shared_ptr<string> resId_ {};
        // The version of the collector. If the machine type of the collector is ECS, only **6.8.5_with_community** is supported.
        shared_ptr<string> resType_ {};
        // The time when the crawl collector was created.
        shared_ptr<string> resVersion_ {};
        // The name of the collector.
        shared_ptr<string> status_ {};
        // The type of the collector. FileBeat, metricBeat, heartBeat, and auditBeat are supported.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->cloudAssistantStatus_ == nullptr
        && this->collectors_ == nullptr && this->ecsInstanceId_ == nullptr && this->ecsInstanceName_ == nullptr && this->ipAddress_ == nullptr && this->osType_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr; };
      // cloudAssistantStatus Field Functions 
      bool hasCloudAssistantStatus() const { return this->cloudAssistantStatus_ != nullptr;};
      void deleteCloudAssistantStatus() { this->cloudAssistantStatus_ = nullptr;};
      inline string getCloudAssistantStatus() const { DARABONBA_PTR_GET_DEFAULT(cloudAssistantStatus_, "") };
      inline Result& setCloudAssistantStatus(string cloudAssistantStatus) { DARABONBA_PTR_SET_VALUE(cloudAssistantStatus_, cloudAssistantStatus) };


      // collectors Field Functions 
      bool hasCollectors() const { return this->collectors_ != nullptr;};
      void deleteCollectors() { this->collectors_ = nullptr;};
      inline const vector<Result::Collectors> & getCollectors() const { DARABONBA_PTR_GET_CONST(collectors_, vector<Result::Collectors>) };
      inline vector<Result::Collectors> getCollectors() { DARABONBA_PTR_GET(collectors_, vector<Result::Collectors>) };
      inline Result& setCollectors(const vector<Result::Collectors> & collectors) { DARABONBA_PTR_SET_VALUE(collectors_, collectors) };
      inline Result& setCollectors(vector<Result::Collectors> && collectors) { DARABONBA_PTR_SET_RVALUE(collectors_, collectors) };


      // ecsInstanceId Field Functions 
      bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
      void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
      inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
      inline Result& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


      // ecsInstanceName Field Functions 
      bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
      void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
      inline string getEcsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
      inline Result& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline const vector<Result::IpAddress> & getIpAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<Result::IpAddress>) };
      inline vector<Result::IpAddress> getIpAddress() { DARABONBA_PTR_GET(ipAddress_, vector<Result::IpAddress>) };
      inline Result& setIpAddress(const vector<Result::IpAddress> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
      inline Result& setIpAddress(vector<Result::IpAddress> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Result& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Result& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    protected:
      // The name of the ECS instance.
      shared_ptr<string> cloudAssistantStatus_ {};
      // The ID of the collector instance.
      shared_ptr<vector<Result::Collectors>> collectors_ {};
      // The tags of the ECS instance.
      shared_ptr<string> ecsInstanceId_ {};
      // The ID of the ECS instance.
      shared_ptr<string> ecsInstanceName_ {};
      // The type of the IP address that is used by the instance. Valid values:
      // 
      // *   public: public endpoint
      // *   private: private network address
      shared_ptr<vector<Result::IpAddress>> ipAddress_ {};
      // The status of the ECS instance. Valid values:
      // 
      // *   running: The master instance is running
      // *   starting
      // *   stopping: The task is being stopped.
      // *   stopped: The node is stopped.
      shared_ptr<string> osType_ {};
      // The IP address of the ECS instance.
      shared_ptr<string> status_ {};
      // The operating system type of the ECS instance. Valid values:
      // 
      // *   windows:Windows operating system
      // *   linux:Linux operating system
      shared_ptr<string> tags_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The returned data.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListEcsInstancesResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListEcsInstancesResponseBody::Headers) };
    inline ListEcsInstancesResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListEcsInstancesResponseBody::Headers) };
    inline ListEcsInstancesResponseBody& setHeaders(const ListEcsInstancesResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListEcsInstancesResponseBody& setHeaders(ListEcsInstancesResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEcsInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListEcsInstancesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListEcsInstancesResponseBody::Result>) };
    inline vector<ListEcsInstancesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListEcsInstancesResponseBody::Result>) };
    inline ListEcsInstancesResponseBody& setResult(const vector<ListEcsInstancesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListEcsInstancesResponseBody& setResult(vector<ListEcsInstancesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The number of returned records.
    shared_ptr<ListEcsInstancesResponseBody::Headers> headers_ {};
    // The header of the response.
    shared_ptr<string> requestId_ {};
    // Cloud Assistant the installation status, support:
    // 
    // *   true: The Prometheus agent was installed.
    // *   false: The Prometheus agent was not installed.
    shared_ptr<vector<ListEcsInstancesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
