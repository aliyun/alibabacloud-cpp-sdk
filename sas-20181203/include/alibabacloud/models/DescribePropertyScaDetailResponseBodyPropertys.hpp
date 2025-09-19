// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCADETAILRESPONSEBODYPROPERTYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCADETAILRESPONSEBODYPROPERTYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyScaDetailResponseBodyPropertys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScaDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BizTypeDispaly, bizTypeDispaly_);
      DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_TO_JSON(ConfigPath, configPath_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(ListenIp, listenIp_);
      DARABONBA_PTR_TO_JSON(ListenProtocol, listenProtocol_);
      DARABONBA_PTR_TO_JSON(ListenStatus, listenStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Ppid, ppid_);
      DARABONBA_PTR_TO_JSON(ProcessStarted, processStarted_);
      DARABONBA_PTR_TO_JSON(ProcessUser, processUser_);
      DARABONBA_PTR_TO_JSON(Proof, proof_);
      DARABONBA_PTR_TO_JSON(RuntimeEnvVersion, runtimeEnvVersion_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WebPath, webPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScaDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BizTypeDispaly, bizTypeDispaly_);
      DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_FROM_JSON(ConfigPath, configPath_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(ListenIp, listenIp_);
      DARABONBA_PTR_FROM_JSON(ListenProtocol, listenProtocol_);
      DARABONBA_PTR_FROM_JSON(ListenStatus, listenStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Ppid, ppid_);
      DARABONBA_PTR_FROM_JSON(ProcessStarted, processStarted_);
      DARABONBA_PTR_FROM_JSON(ProcessUser, processUser_);
      DARABONBA_PTR_FROM_JSON(Proof, proof_);
      DARABONBA_PTR_FROM_JSON(RuntimeEnvVersion, runtimeEnvVersion_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WebPath, webPath_);
    };
    DescribePropertyScaDetailResponseBodyPropertys() = default ;
    DescribePropertyScaDetailResponseBodyPropertys(const DescribePropertyScaDetailResponseBodyPropertys &) = default ;
    DescribePropertyScaDetailResponseBodyPropertys(DescribePropertyScaDetailResponseBodyPropertys &&) = default ;
    DescribePropertyScaDetailResponseBodyPropertys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScaDetailResponseBodyPropertys() = default ;
    DescribePropertyScaDetailResponseBodyPropertys& operator=(const DescribePropertyScaDetailResponseBodyPropertys &) = default ;
    DescribePropertyScaDetailResponseBodyPropertys& operator=(DescribePropertyScaDetailResponseBodyPropertys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->bizTypeDispaly_ != nullptr && this->cmdline_ != nullptr && this->configPath_ != nullptr && this->containerName_ != nullptr && this->createTimestamp_ != nullptr
        && this->imageName_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr
        && this->ip_ != nullptr && this->listenIp_ != nullptr && this->listenProtocol_ != nullptr && this->listenStatus_ != nullptr && this->name_ != nullptr
        && this->path_ != nullptr && this->pid_ != nullptr && this->podName_ != nullptr && this->port_ != nullptr && this->ppid_ != nullptr
        && this->processStarted_ != nullptr && this->processUser_ != nullptr && this->proof_ != nullptr && this->runtimeEnvVersion_ != nullptr && this->type_ != nullptr
        && this->uuid_ != nullptr && this->version_ != nullptr && this->webPath_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // bizTypeDispaly Field Functions 
    bool hasBizTypeDispaly() const { return this->bizTypeDispaly_ != nullptr;};
    void deleteBizTypeDispaly() { this->bizTypeDispaly_ = nullptr;};
    inline string bizTypeDispaly() const { DARABONBA_PTR_GET_DEFAULT(bizTypeDispaly_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setBizTypeDispaly(string bizTypeDispaly) { DARABONBA_PTR_SET_VALUE(bizTypeDispaly_, bizTypeDispaly) };


    // cmdline Field Functions 
    bool hasCmdline() const { return this->cmdline_ != nullptr;};
    void deleteCmdline() { this->cmdline_ = nullptr;};
    inline string cmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


    // configPath Field Functions 
    bool hasConfigPath() const { return this->configPath_ != nullptr;};
    void deleteConfigPath() { this->configPath_ = nullptr;};
    inline string configPath() const { DARABONBA_PTR_GET_DEFAULT(configPath_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setConfigPath(string configPath) { DARABONBA_PTR_SET_VALUE(configPath_, configPath) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribePropertyScaDetailResponseBodyPropertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // listenIp Field Functions 
    bool hasListenIp() const { return this->listenIp_ != nullptr;};
    void deleteListenIp() { this->listenIp_ = nullptr;};
    inline string listenIp() const { DARABONBA_PTR_GET_DEFAULT(listenIp_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setListenIp(string listenIp) { DARABONBA_PTR_SET_VALUE(listenIp_, listenIp) };


    // listenProtocol Field Functions 
    bool hasListenProtocol() const { return this->listenProtocol_ != nullptr;};
    void deleteListenProtocol() { this->listenProtocol_ = nullptr;};
    inline string listenProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenProtocol_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setListenProtocol(string listenProtocol) { DARABONBA_PTR_SET_VALUE(listenProtocol_, listenProtocol) };


    // listenStatus Field Functions 
    bool hasListenStatus() const { return this->listenStatus_ != nullptr;};
    void deleteListenStatus() { this->listenStatus_ = nullptr;};
    inline string listenStatus() const { DARABONBA_PTR_GET_DEFAULT(listenStatus_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setListenStatus(string listenStatus) { DARABONBA_PTR_SET_VALUE(listenStatus_, listenStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // ppid Field Functions 
    bool hasPpid() const { return this->ppid_ != nullptr;};
    void deletePpid() { this->ppid_ = nullptr;};
    inline string ppid() const { DARABONBA_PTR_GET_DEFAULT(ppid_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setPpid(string ppid) { DARABONBA_PTR_SET_VALUE(ppid_, ppid) };


    // processStarted Field Functions 
    bool hasProcessStarted() const { return this->processStarted_ != nullptr;};
    void deleteProcessStarted() { this->processStarted_ = nullptr;};
    inline int64_t processStarted() const { DARABONBA_PTR_GET_DEFAULT(processStarted_, 0L) };
    inline DescribePropertyScaDetailResponseBodyPropertys& setProcessStarted(int64_t processStarted) { DARABONBA_PTR_SET_VALUE(processStarted_, processStarted) };


    // processUser Field Functions 
    bool hasProcessUser() const { return this->processUser_ != nullptr;};
    void deleteProcessUser() { this->processUser_ = nullptr;};
    inline string processUser() const { DARABONBA_PTR_GET_DEFAULT(processUser_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setProcessUser(string processUser) { DARABONBA_PTR_SET_VALUE(processUser_, processUser) };


    // proof Field Functions 
    bool hasProof() const { return this->proof_ != nullptr;};
    void deleteProof() { this->proof_ = nullptr;};
    inline string proof() const { DARABONBA_PTR_GET_DEFAULT(proof_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setProof(string proof) { DARABONBA_PTR_SET_VALUE(proof_, proof) };


    // runtimeEnvVersion Field Functions 
    bool hasRuntimeEnvVersion() const { return this->runtimeEnvVersion_ != nullptr;};
    void deleteRuntimeEnvVersion() { this->runtimeEnvVersion_ = nullptr;};
    inline string runtimeEnvVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeEnvVersion_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setRuntimeEnvVersion(string runtimeEnvVersion) { DARABONBA_PTR_SET_VALUE(runtimeEnvVersion_, runtimeEnvVersion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // webPath Field Functions 
    bool hasWebPath() const { return this->webPath_ != nullptr;};
    void deleteWebPath() { this->webPath_ = nullptr;};
    inline string webPath() const { DARABONBA_PTR_GET_DEFAULT(webPath_, "") };
    inline DescribePropertyScaDetailResponseBodyPropertys& setWebPath(string webPath) { DARABONBA_PTR_SET_VALUE(webPath_, webPath) };


  protected:
    // The type of the middleware, database, or web service. Valid values:
    // 
    // *   **system_service**: system service
    // *   **software_library**: software library
    // *   **docker_component**: container component
    // *   **database**: database
    // *   **web_container**: web container
    // *   **jar**: JAR package
    // *   **web_framework**: web framework
    std::shared_ptr<string> bizType_ = nullptr;
    // The display name of the type of the middleware, database, or web service . Valid values:
    // 
    // *   System service
    // *   Software library
    // *   Container component
    // *   Database
    // *   Web container
    // *   JAR package
    // *   Web framework
    std::shared_ptr<string> bizTypeDispaly_ = nullptr;
    // The command line of the process.
    std::shared_ptr<string> cmdline_ = nullptr;
    // The path to the configuration file.
    std::shared_ptr<string> configPath_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The latest collection timestamp, which indicates the last timestamp when Security Center collected the information about the middleware, database, or web service. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The ID of the server on which the middleware, database, or web service is run.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server on which the middleware, database, or web service is run.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server on which the middleware, database, or web service is run.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server on which the middleware, database, or web service is run.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The public IP address of the server on which the middleware, database, or web service is run.
    std::shared_ptr<string> ip_ = nullptr;
    // The IP address that the process monitors.
    std::shared_ptr<string> listenIp_ = nullptr;
    // The protocol of the traffic on which the process listens. Valid values:
    // 
    // *   **UDP**
    // *   **TCP**
    std::shared_ptr<string> listenProtocol_ = nullptr;
    // The listening status of the process. Valid values:
    // 
    // *   **NONE**: not listening
    // *   **LISTEN**: listening
    std::shared_ptr<string> listenStatus_ = nullptr;
    // The name of the middleware, database, or web service.
    std::shared_ptr<string> name_ = nullptr;
    // The path of the middleware, database, or web service.
    std::shared_ptr<string> path_ = nullptr;
    // The PID.
    std::shared_ptr<string> pid_ = nullptr;
    // The name of the Kubernetes pod.
    std::shared_ptr<string> podName_ = nullptr;
    // The port of the middleware, database, or web service.
    std::shared_ptr<string> port_ = nullptr;
    // The ID of the parent process.
    std::shared_ptr<string> ppid_ = nullptr;
    // The timestamp when the process starts. Unit: milliseconds.
    std::shared_ptr<int64_t> processStarted_ = nullptr;
    // The name of the user who runs the process.
    std::shared_ptr<string> processUser_ = nullptr;
    // The version verification information about the middleware, database, or web service.
    std::shared_ptr<string> proof_ = nullptr;
    // The version of the runtime environment.
    // 
    // >  The value of this parameter can be the Java Development Kit (JDK) version of the runtime environment for a Java process.
    std::shared_ptr<string> runtimeEnvVersion_ = nullptr;
    // The type of the middleware, database, or web service.
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the server on which the middleware, database, or web service is run.
    std::shared_ptr<string> uuid_ = nullptr;
    // The version of the middleware, database, or web service.
    std::shared_ptr<string> version_ = nullptr;
    // The web directory.
    std::shared_ptr<string> webPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
