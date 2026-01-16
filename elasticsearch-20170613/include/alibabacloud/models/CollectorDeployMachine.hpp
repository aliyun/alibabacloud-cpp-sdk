// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLECTORDEPLOYMACHINE_HPP_
#define ALIBABACLOUD_MODELS_COLLECTORDEPLOYMACHINE_HPP_
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
  class CollectorDeployMachine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollectorDeployMachine& obj) { 
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(machines, machines_);
      DARABONBA_PTR_TO_JSON(successPodsCount, successPodsCount_);
      DARABONBA_PTR_TO_JSON(totalPodsCount, totalPodsCount_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CollectorDeployMachine& obj) { 
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(machines, machines_);
      DARABONBA_PTR_FROM_JSON(successPodsCount, successPodsCount_);
      DARABONBA_PTR_FROM_JSON(totalPodsCount, totalPodsCount_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CollectorDeployMachine() = default ;
    CollectorDeployMachine(const CollectorDeployMachine &) = default ;
    CollectorDeployMachine(CollectorDeployMachine &&) = default ;
    CollectorDeployMachine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollectorDeployMachine() = default ;
    CollectorDeployMachine& operator=(const CollectorDeployMachine &) = default ;
    CollectorDeployMachine& operator=(CollectorDeployMachine &&) = default ;
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
      shared_ptr<string> agentStatus_ {};
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->configType_ == nullptr
        && this->groupId_ == nullptr && this->instanceId_ == nullptr && this->machines_ == nullptr && this->successPodsCount_ == nullptr && this->totalPodsCount_ == nullptr
        && this->type_ == nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline CollectorDeployMachine& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CollectorDeployMachine& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CollectorDeployMachine& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // machines Field Functions 
    bool hasMachines() const { return this->machines_ != nullptr;};
    void deleteMachines() { this->machines_ = nullptr;};
    inline const vector<CollectorDeployMachine::Machines> & getMachines() const { DARABONBA_PTR_GET_CONST(machines_, vector<CollectorDeployMachine::Machines>) };
    inline vector<CollectorDeployMachine::Machines> getMachines() { DARABONBA_PTR_GET(machines_, vector<CollectorDeployMachine::Machines>) };
    inline CollectorDeployMachine& setMachines(const vector<CollectorDeployMachine::Machines> & machines) { DARABONBA_PTR_SET_VALUE(machines_, machines) };
    inline CollectorDeployMachine& setMachines(vector<CollectorDeployMachine::Machines> && machines) { DARABONBA_PTR_SET_RVALUE(machines_, machines) };


    // successPodsCount Field Functions 
    bool hasSuccessPodsCount() const { return this->successPodsCount_ != nullptr;};
    void deleteSuccessPodsCount() { this->successPodsCount_ = nullptr;};
    inline string getSuccessPodsCount() const { DARABONBA_PTR_GET_DEFAULT(successPodsCount_, "") };
    inline CollectorDeployMachine& setSuccessPodsCount(string successPodsCount) { DARABONBA_PTR_SET_VALUE(successPodsCount_, successPodsCount) };


    // totalPodsCount Field Functions 
    bool hasTotalPodsCount() const { return this->totalPodsCount_ != nullptr;};
    void deleteTotalPodsCount() { this->totalPodsCount_ = nullptr;};
    inline string getTotalPodsCount() const { DARABONBA_PTR_GET_DEFAULT(totalPodsCount_, "") };
    inline CollectorDeployMachine& setTotalPodsCount(string totalPodsCount) { DARABONBA_PTR_SET_VALUE(totalPodsCount_, totalPodsCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CollectorDeployMachine& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> configType_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<CollectorDeployMachine::Machines>> machines_ {};
    shared_ptr<string> successPodsCount_ {};
    shared_ptr<string> totalPodsCount_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
