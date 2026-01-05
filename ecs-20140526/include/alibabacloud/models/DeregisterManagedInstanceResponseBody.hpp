// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEREGISTERMANAGEDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEREGISTERMANAGEDINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeregisterManagedInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeregisterManagedInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeregisterManagedInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeregisterManagedInstanceResponseBody() = default ;
    DeregisterManagedInstanceResponseBody(const DeregisterManagedInstanceResponseBody &) = default ;
    DeregisterManagedInstanceResponseBody(DeregisterManagedInstanceResponseBody &&) = default ;
    DeregisterManagedInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeregisterManagedInstanceResponseBody() = default ;
    DeregisterManagedInstanceResponseBody& operator=(const DeregisterManagedInstanceResponseBody &) = default ;
    DeregisterManagedInstanceResponseBody& operator=(DeregisterManagedInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
        DARABONBA_PTR_TO_JSON(ActivationId, activationId_);
        DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
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
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivationId, activationId_);
        DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
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
      };
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activationId_ == nullptr
        && this->agentVersion_ == nullptr && this->hostname_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->invocationCount_ == nullptr && this->lastInvokedTime_ == nullptr && this->machineId_ == nullptr && this->osType_ == nullptr
        && this->osVersion_ == nullptr && this->registrationTime_ == nullptr && this->resourceGroupId_ == nullptr; };
      // activationId Field Functions 
      bool hasActivationId() const { return this->activationId_ != nullptr;};
      void deleteActivationId() { this->activationId_ = nullptr;};
      inline string getActivationId() const { DARABONBA_PTR_GET_DEFAULT(activationId_, "") };
      inline Instance& setActivationId(string activationId) { DARABONBA_PTR_SET_VALUE(activationId_, activationId) };


      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
      inline Instance& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Instance& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Instance& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Instance& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // invocationCount Field Functions 
      bool hasInvocationCount() const { return this->invocationCount_ != nullptr;};
      void deleteInvocationCount() { this->invocationCount_ = nullptr;};
      inline int64_t getInvocationCount() const { DARABONBA_PTR_GET_DEFAULT(invocationCount_, 0L) };
      inline Instance& setInvocationCount(int64_t invocationCount) { DARABONBA_PTR_SET_VALUE(invocationCount_, invocationCount) };


      // lastInvokedTime Field Functions 
      bool hasLastInvokedTime() const { return this->lastInvokedTime_ != nullptr;};
      void deleteLastInvokedTime() { this->lastInvokedTime_ = nullptr;};
      inline string getLastInvokedTime() const { DARABONBA_PTR_GET_DEFAULT(lastInvokedTime_, "") };
      inline Instance& setLastInvokedTime(string lastInvokedTime) { DARABONBA_PTR_SET_VALUE(lastInvokedTime_, lastInvokedTime) };


      // machineId Field Functions 
      bool hasMachineId() const { return this->machineId_ != nullptr;};
      void deleteMachineId() { this->machineId_ = nullptr;};
      inline string getMachineId() const { DARABONBA_PTR_GET_DEFAULT(machineId_, "") };
      inline Instance& setMachineId(string machineId) { DARABONBA_PTR_SET_VALUE(machineId_, machineId) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Instance& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // osVersion Field Functions 
      bool hasOsVersion() const { return this->osVersion_ != nullptr;};
      void deleteOsVersion() { this->osVersion_ = nullptr;};
      inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
      inline Instance& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


      // registrationTime Field Functions 
      bool hasRegistrationTime() const { return this->registrationTime_ != nullptr;};
      void deleteRegistrationTime() { this->registrationTime_ = nullptr;};
      inline string getRegistrationTime() const { DARABONBA_PTR_GET_DEFAULT(registrationTime_, "") };
      inline Instance& setRegistrationTime(string registrationTime) { DARABONBA_PTR_SET_VALUE(registrationTime_, registrationTime) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Instance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    protected:
      // The activation code ID.
      shared_ptr<string> activationId_ {};
      // The version number of Cloud Assistant Agent.
      shared_ptr<string> agentVersion_ {};
      // The hostname of the managed instance.
      shared_ptr<string> hostname_ {};
      // The managed instance ID.
      shared_ptr<string> instanceId_ {};
      // The name of the managed instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the managed instance.
      shared_ptr<string> internetIp_ {};
      // The internal IP address of the managed instance.
      shared_ptr<string> intranetIp_ {};
      // The number of times that Cloud Assistant tasks were executed on the managed instance.
      shared_ptr<int64_t> invocationCount_ {};
      // The time when the Cloud Assistant task was last executed.
      shared_ptr<string> lastInvokedTime_ {};
      // The machine code of the managed instance.
      shared_ptr<string> machineId_ {};
      // The operating system type of the managed instance.
      shared_ptr<string> osType_ {};
      // The version information about the operating system.
      shared_ptr<string> osVersion_ {};
      // The time when the managed instance was registered.
      shared_ptr<string> registrationTime_ {};
      // The ID of the resource group to which the managed instance belongs.
      shared_ptr<string> resourceGroupId_ {};
    };

    virtual bool empty() const override { return this->instance_ == nullptr
        && this->requestId_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const DeregisterManagedInstanceResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, DeregisterManagedInstanceResponseBody::Instance) };
    inline DeregisterManagedInstanceResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, DeregisterManagedInstanceResponseBody::Instance) };
    inline DeregisterManagedInstanceResponseBody& setInstance(const DeregisterManagedInstanceResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DeregisterManagedInstanceResponseBody& setInstance(DeregisterManagedInstanceResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeregisterManagedInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the managed instances.
    shared_ptr<DeregisterManagedInstanceResponseBody::Instance> instance_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
