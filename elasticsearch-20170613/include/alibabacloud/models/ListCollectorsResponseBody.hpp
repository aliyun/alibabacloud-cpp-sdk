// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLLECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLLECTORSRESPONSEBODY_HPP_
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
  class ListCollectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCollectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListCollectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListCollectorsResponseBody() = default ;
    ListCollectorsResponseBody(const ListCollectorsResponseBody &) = default ;
    ListCollectorsResponseBody(ListCollectorsResponseBody &&) = default ;
    ListCollectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCollectorsResponseBody() = default ;
    ListCollectorsResponseBody& operator=(const ListCollectorsResponseBody &) = default ;
    ListCollectorsResponseBody& operator=(ListCollectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      class ExtendConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendConfigs& obj) { 
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
        friend void from_json(const Darabonba::Json& j, ExtendConfigs& obj) { 
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
          // The status of the shipper on the ECS instance. Valid values:
          // 
          // *   heartOk
          // *   heartLost
          // *   uninstalled
          // *   failed
          shared_ptr<string> agentStatus_ {};
          // The IDs of the ECS instances.
          shared_ptr<string> instanceId_ {};
        };

        virtual bool empty() const override { return this->configType_ == nullptr
        && this->enableMonitoring_ == nullptr && this->groupId_ == nullptr && this->host_ == nullptr && this->hosts_ == nullptr && this->instanceId_ == nullptr
        && this->instanceType_ == nullptr && this->kibanaHost_ == nullptr && this->machines_ == nullptr && this->protocol_ == nullptr && this->successPodsCount_ == nullptr
        && this->totalPodsCount_ == nullptr && this->type_ == nullptr && this->userName_ == nullptr; };
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


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline ExtendConfigs& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


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


        // kibanaHost Field Functions 
        bool hasKibanaHost() const { return this->kibanaHost_ != nullptr;};
        void deleteKibanaHost() { this->kibanaHost_ = nullptr;};
        inline string getKibanaHost() const { DARABONBA_PTR_GET_DEFAULT(kibanaHost_, "") };
        inline ExtendConfigs& setKibanaHost(string kibanaHost) { DARABONBA_PTR_SET_VALUE(kibanaHost_, kibanaHost) };


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


        // successPodsCount Field Functions 
        bool hasSuccessPodsCount() const { return this->successPodsCount_ != nullptr;};
        void deleteSuccessPodsCount() { this->successPodsCount_ = nullptr;};
        inline string getSuccessPodsCount() const { DARABONBA_PTR_GET_DEFAULT(successPodsCount_, "") };
        inline ExtendConfigs& setSuccessPodsCount(string successPodsCount) { DARABONBA_PTR_SET_VALUE(successPodsCount_, successPodsCount) };


        // totalPodsCount Field Functions 
        bool hasTotalPodsCount() const { return this->totalPodsCount_ != nullptr;};
        void deleteTotalPodsCount() { this->totalPodsCount_ = nullptr;};
        inline string getTotalPodsCount() const { DARABONBA_PTR_GET_DEFAULT(totalPodsCount_, "") };
        inline ExtendConfigs& setTotalPodsCount(string totalPodsCount) { DARABONBA_PTR_SET_VALUE(totalPodsCount_, totalPodsCount) };


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
        // The configuration type. Valid values:
        // 
        // *   collectorTargetInstance
        // *   collectorDeployMachine
        // *   collectorElasticsearchForKibana
        shared_ptr<string> configType_ {};
        // Indicates whether monitoring is enabled. This parameter is returned if the value of **configType** is **collectorTargetInstance** and the value of **instanceType** is **elasticsearch**. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> enableMonitoring_ {};
        // The ID of the machine group. This parameter is returned if the value of **configType** is **collectorDeployMachine**.
        shared_ptr<string> groupId_ {};
        // The internal endpoint of Kibana after you enable the Kibana dashboard. This parameter is returned if the value of **configType** is **collectorElasticsearchForKibana**.
        shared_ptr<string> host_ {};
        shared_ptr<vector<string>> hosts_ {};
        // The ID of the resource with which the shipper is associated. If the value of **configType** is **collectorTargetInstance**, the value of this parameter is the ID of the resource specified in the output configuration part of the shipper. If the value of **configType** is **collectorDeployMachine** and the value of **type** is **ACKCluster**, the value of this parameter is the ID of the ACK cluster.
        shared_ptr<string> instanceId_ {};
        // The type of the cluster specified in the output configuration part of the shipper. Valid values: elasticsearch and logstash. This parameter is returned if the value of **configType** is **collectorTargetInstance**.
        shared_ptr<string> instanceType_ {};
        // The public endpoint of Kibana after you enable the Kibana dashboard. This parameter is returned if the value of **configType** is **collectorElasticsearchForKibana**.
        shared_ptr<string> kibanaHost_ {};
        // The information about the ECS instances on which the shipper is deployed. This parameter is returned if the value of **configType** is **collectorDeployMachine** and the value of **type** is **ECSInstanceId**.
        shared_ptr<vector<ExtendConfigs::Machines>> machines_ {};
        // The transmission protocol, which must be the same as the access protocol of the resource specified in the output configuration part of the shipper. Valid values: HTTP and HTTPS. This parameter is returned if the value of **configType** is **collectorTargetInstance**.
        shared_ptr<string> protocol_ {};
        // The number of pods from which data is successfully collected in the ACK cluster. This parameter is returned if the value of **configType** is **collectorDeployMachine** and the value of **type** is **ACKCluster**.
        shared_ptr<string> successPodsCount_ {};
        // The total number of pods from which data is collected in the ACK cluster. This parameter is returned if the value of **configType** is **collectorDeployMachine** and the value of **type** is **ACKCluster**.
        shared_ptr<string> totalPodsCount_ {};
        // The type of the machine on which the shipper is deployed. This parameter is returned if the value of **configType** is **collectorDeployMachine**. Valid values:
        // 
        // *   ECSInstanceId
        // *   ACKCluster
        shared_ptr<string> type_ {};
        // The username that is used to access the resource specified in the output configuration part of the shipper. The default value is elastic. This parameter is returned if the value of **configType** is **collectorTargetInstance** or **collectorElasticsearchForKibana**.
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
        // The content of the file.
        shared_ptr<string> content_ {};
        // The name of the file.
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
      inline Result& setCollectorPaths(const vector<string> & collectorPaths) { DARABONBA_PTR_SET_VALUE(collectorPaths_, collectorPaths) };
      inline Result& setCollectorPaths(vector<string> && collectorPaths) { DARABONBA_PTR_SET_RVALUE(collectorPaths_, collectorPaths) };


      // configs Field Functions 
      bool hasConfigs() const { return this->configs_ != nullptr;};
      void deleteConfigs() { this->configs_ = nullptr;};
      inline const vector<Result::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<Result::Configs>) };
      inline vector<Result::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<Result::Configs>) };
      inline Result& setConfigs(const vector<Result::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
      inline Result& setConfigs(vector<Result::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


      // dryRun Field Functions 
      bool hasDryRun() const { return this->dryRun_ != nullptr;};
      void deleteDryRun() { this->dryRun_ = nullptr;};
      inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
      inline Result& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


      // extendConfigs Field Functions 
      bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
      void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
      inline const vector<Result::ExtendConfigs> & getExtendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Result::ExtendConfigs>) };
      inline vector<Result::ExtendConfigs> getExtendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Result::ExtendConfigs>) };
      inline Result& setExtendConfigs(const vector<Result::ExtendConfigs> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
      inline Result& setExtendConfigs(vector<Result::ExtendConfigs> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


      // gmtCreatedTime Field Functions 
      bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
      void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
      inline string getGmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
      inline Result& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


      // gmtUpdateTime Field Functions 
      bool hasGmtUpdateTime() const { return this->gmtUpdateTime_ != nullptr;};
      void deleteGmtUpdateTime() { this->gmtUpdateTime_ = nullptr;};
      inline string getGmtUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtUpdateTime_, "") };
      inline Result& setGmtUpdateTime(string gmtUpdateTime) { DARABONBA_PTR_SET_VALUE(gmtUpdateTime_, gmtUpdateTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Result& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // resId Field Functions 
      bool hasResId() const { return this->resId_ != nullptr;};
      void deleteResId() { this->resId_ = nullptr;};
      inline string getResId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
      inline Result& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


      // resType Field Functions 
      bool hasResType() const { return this->resType_ != nullptr;};
      void deleteResType() { this->resType_ = nullptr;};
      inline string getResType() const { DARABONBA_PTR_GET_DEFAULT(resType_, "") };
      inline Result& setResType(string resType) { DARABONBA_PTR_SET_VALUE(resType_, resType) };


      // resVersion Field Functions 
      bool hasResVersion() const { return this->resVersion_ != nullptr;};
      void deleteResVersion() { this->resVersion_ = nullptr;};
      inline string getResVersion() const { DARABONBA_PTR_GET_DEFAULT(resVersion_, "") };
      inline Result& setResVersion(string resVersion) { DARABONBA_PTR_SET_VALUE(resVersion_, resVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Result& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<vector<string>> collectorPaths_ {};
      // The information about the configuration file of the shipper.
      shared_ptr<vector<Result::Configs>> configs_ {};
      // Indicates whether a dry run is performed. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> dryRun_ {};
      // The extended configurations of the shipper.
      shared_ptr<vector<Result::ExtendConfigs>> extendConfigs_ {};
      // The time when the shipper was created.
      shared_ptr<string> gmtCreatedTime_ {};
      // The time when the shipper was updated.
      shared_ptr<string> gmtUpdateTime_ {};
      // The name of the shipper.
      shared_ptr<string> name_ {};
      // The account ID.
      shared_ptr<string> ownerId_ {};
      // The ID of the shipper.
      shared_ptr<string> resId_ {};
      // The type of the shipper. Valid values: fileBeat, metricBeat, heartBeat, and auditBeat.
      shared_ptr<string> resType_ {};
      // The version of the shipper.
      shared_ptr<string> resVersion_ {};
      // The status of the shipper. Valid values:
      // 
      // *   activating
      // *   active
      shared_ptr<string> status_ {};
      // The ID of the virtual private cloud (VPC) where the shipper resides.
      shared_ptr<string> vpcId_ {};
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
      // The total number of entries returned.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListCollectorsResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListCollectorsResponseBody::Headers) };
    inline ListCollectorsResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListCollectorsResponseBody::Headers) };
    inline ListCollectorsResponseBody& setHeaders(const ListCollectorsResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListCollectorsResponseBody& setHeaders(ListCollectorsResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCollectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListCollectorsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListCollectorsResponseBody::Result>) };
    inline vector<ListCollectorsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListCollectorsResponseBody::Result>) };
    inline ListCollectorsResponseBody& setResult(const vector<ListCollectorsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListCollectorsResponseBody& setResult(vector<ListCollectorsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The header of the response.
    shared_ptr<ListCollectorsResponseBody::Headers> headers_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListCollectorsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
