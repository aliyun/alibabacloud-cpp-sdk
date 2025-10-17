// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMANAGEDINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMANAGEDINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeManagedInstancesResponseBodyInstancesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeManagedInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeManagedInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ActivationId, activationId_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(Connected, connected_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(InvocationCount, invocationCount_);
      DARABONBA_PTR_TO_JSON(LastInvokedTime, lastInvokedTime_);
      DARABONBA_PTR_TO_JSON(MachineId, machineId_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(RegistrationTime, registrationTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeManagedInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivationId, activationId_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(Connected, connected_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(InvocationCount, invocationCount_);
      DARABONBA_PTR_FROM_JSON(LastInvokedTime, lastInvokedTime_);
      DARABONBA_PTR_FROM_JSON(MachineId, machineId_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(RegistrationTime, registrationTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeManagedInstancesResponseBodyInstances() = default ;
    DescribeManagedInstancesResponseBodyInstances(const DescribeManagedInstancesResponseBodyInstances &) = default ;
    DescribeManagedInstancesResponseBodyInstances(DescribeManagedInstancesResponseBodyInstances &&) = default ;
    DescribeManagedInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeManagedInstancesResponseBodyInstances() = default ;
    DescribeManagedInstancesResponseBodyInstances& operator=(const DescribeManagedInstancesResponseBodyInstances &) = default ;
    DescribeManagedInstancesResponseBodyInstances& operator=(DescribeManagedInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activationId_ == nullptr
        && return this->agentVersion_ == nullptr && return this->connected_ == nullptr && return this->hostname_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->invocationCount_ == nullptr && return this->lastInvokedTime_ == nullptr && return this->machineId_ == nullptr
        && return this->osType_ == nullptr && return this->osVersion_ == nullptr && return this->registrationTime_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr; };
    // activationId Field Functions 
    bool hasActivationId() const { return this->activationId_ != nullptr;};
    void deleteActivationId() { this->activationId_ = nullptr;};
    inline string activationId() const { DARABONBA_PTR_GET_DEFAULT(activationId_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setActivationId(string activationId) { DARABONBA_PTR_SET_VALUE(activationId_, activationId) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // connected Field Functions 
    bool hasConnected() const { return this->connected_ != nullptr;};
    void deleteConnected() { this->connected_ = nullptr;};
    inline bool connected() const { DARABONBA_PTR_GET_DEFAULT(connected_, false) };
    inline DescribeManagedInstancesResponseBodyInstances& setConnected(bool connected) { DARABONBA_PTR_SET_VALUE(connected_, connected) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // invocationCount Field Functions 
    bool hasInvocationCount() const { return this->invocationCount_ != nullptr;};
    void deleteInvocationCount() { this->invocationCount_ = nullptr;};
    inline int64_t invocationCount() const { DARABONBA_PTR_GET_DEFAULT(invocationCount_, 0L) };
    inline DescribeManagedInstancesResponseBodyInstances& setInvocationCount(int64_t invocationCount) { DARABONBA_PTR_SET_VALUE(invocationCount_, invocationCount) };


    // lastInvokedTime Field Functions 
    bool hasLastInvokedTime() const { return this->lastInvokedTime_ != nullptr;};
    void deleteLastInvokedTime() { this->lastInvokedTime_ = nullptr;};
    inline string lastInvokedTime() const { DARABONBA_PTR_GET_DEFAULT(lastInvokedTime_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setLastInvokedTime(string lastInvokedTime) { DARABONBA_PTR_SET_VALUE(lastInvokedTime_, lastInvokedTime) };


    // machineId Field Functions 
    bool hasMachineId() const { return this->machineId_ != nullptr;};
    void deleteMachineId() { this->machineId_ = nullptr;};
    inline string machineId() const { DARABONBA_PTR_GET_DEFAULT(machineId_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setMachineId(string machineId) { DARABONBA_PTR_SET_VALUE(machineId_, machineId) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // registrationTime Field Functions 
    bool hasRegistrationTime() const { return this->registrationTime_ != nullptr;};
    void deleteRegistrationTime() { this->registrationTime_ = nullptr;};
    inline string registrationTime() const { DARABONBA_PTR_GET_DEFAULT(registrationTime_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setRegistrationTime(string registrationTime) { DARABONBA_PTR_SET_VALUE(registrationTime_, registrationTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeManagedInstancesResponseBodyInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeManagedInstancesResponseBodyInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeManagedInstancesResponseBodyInstancesTags>) };
    inline vector<Models::DescribeManagedInstancesResponseBodyInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeManagedInstancesResponseBodyInstancesTags>) };
    inline DescribeManagedInstancesResponseBodyInstances& setTags(const vector<Models::DescribeManagedInstancesResponseBodyInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeManagedInstancesResponseBodyInstances& setTags(vector<Models::DescribeManagedInstancesResponseBodyInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the activation code.
    std::shared_ptr<string> activationId_ = nullptr;
    // The version number of Cloud Assistant Agent.
    std::shared_ptr<string> agentVersion_ = nullptr;
    // Indicates whether the managed instance is connected. Valid values:
    // 
    // *   true: The managed instance is connected. You can manage the instance by using Cloud Assistant.
    // *   false: The managed instance is not connected. The managed instance may be down or Cloud Assistant Agent may be incorrectly installed.
    std::shared_ptr<bool> connected_ = nullptr;
    // The hostname of the managed instance.
    std::shared_ptr<string> hostname_ = nullptr;
    // The ID of the managed instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the managed instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the managed instance.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The internal IP address of the managed instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The number of times that Cloud Assistant tasks were executed on the managed instance.
    std::shared_ptr<int64_t> invocationCount_ = nullptr;
    // The time when the last Cloud Assistant task was executed.
    std::shared_ptr<string> lastInvokedTime_ = nullptr;
    // The machine code of the managed instance.
    std::shared_ptr<string> machineId_ = nullptr;
    // The operating system type of the managed instance.
    std::shared_ptr<string> osType_ = nullptr;
    // The version information of the operating system.
    std::shared_ptr<string> osVersion_ = nullptr;
    // The time when the managed instance was registered.
    std::shared_ptr<string> registrationTime_ = nullptr;
    // The ID of the resource group to which the managed instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the managed instance.
    std::shared_ptr<vector<Models::DescribeManagedInstancesResponseBodyInstancesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
