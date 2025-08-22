// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPJVMCONFIGRESPONSEBODYJVMINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPJVMCONFIGRESPONSEBODYJVMINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAppJVMConfigResponseBodyJvmInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppJVMConfigResponseBodyJvmInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ProcId, procId_);
      DARABONBA_PTR_TO_JSON(VmArgs, vmArgs_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppJVMConfigResponseBodyJvmInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ProcId, procId_);
      DARABONBA_PTR_FROM_JSON(VmArgs, vmArgs_);
    };
    GetAppJVMConfigResponseBodyJvmInfoList() = default ;
    GetAppJVMConfigResponseBodyJvmInfoList(const GetAppJVMConfigResponseBodyJvmInfoList &) = default ;
    GetAppJVMConfigResponseBodyJvmInfoList(GetAppJVMConfigResponseBodyJvmInfoList &&) = default ;
    GetAppJVMConfigResponseBodyJvmInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppJVMConfigResponseBodyJvmInfoList() = default ;
    GetAppJVMConfigResponseBodyJvmInfoList& operator=(const GetAppJVMConfigResponseBodyJvmInfoList &) = default ;
    GetAppJVMConfigResponseBodyJvmInfoList& operator=(GetAppJVMConfigResponseBodyJvmInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentVersion_ != nullptr
        && this->hostName_ != nullptr && this->ip_ != nullptr && this->pid_ != nullptr && this->procId_ != nullptr && this->vmArgs_ != nullptr; };
    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline GetAppJVMConfigResponseBodyJvmInfoList& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline GetAppJVMConfigResponseBodyJvmInfoList& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetAppJVMConfigResponseBodyJvmInfoList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetAppJVMConfigResponseBodyJvmInfoList& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // procId Field Functions 
    bool hasProcId() const { return this->procId_ != nullptr;};
    void deleteProcId() { this->procId_ = nullptr;};
    inline string procId() const { DARABONBA_PTR_GET_DEFAULT(procId_, "") };
    inline GetAppJVMConfigResponseBodyJvmInfoList& setProcId(string procId) { DARABONBA_PTR_SET_VALUE(procId_, procId) };


    // vmArgs Field Functions 
    bool hasVmArgs() const { return this->vmArgs_ != nullptr;};
    void deleteVmArgs() { this->vmArgs_ = nullptr;};
    inline string vmArgs() const { DARABONBA_PTR_GET_DEFAULT(vmArgs_, "") };
    inline GetAppJVMConfigResponseBodyJvmInfoList& setVmArgs(string vmArgs) { DARABONBA_PTR_SET_VALUE(vmArgs_, vmArgs) };


  protected:
    // The version of the agent.
    std::shared_ptr<string> agentVersion_ = nullptr;
    // The hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The application ID.
    std::shared_ptr<string> pid_ = nullptr;
    // The process ID.
    std::shared_ptr<string> procId_ = nullptr;
    // The VM parameters.
    std::shared_ptr<string> vmArgs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
