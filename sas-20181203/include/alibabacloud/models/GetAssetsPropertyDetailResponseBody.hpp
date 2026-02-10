// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAssetsPropertyDetailResponseBody() = default ;
    GetAssetsPropertyDetailResponseBody(const GetAssetsPropertyDetailResponseBody &) = default ;
    GetAssetsPropertyDetailResponseBody(GetAssetsPropertyDetailResponseBody &&) = default ;
    GetAssetsPropertyDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyDetailResponseBody() = default ;
    GetAssetsPropertyDetailResponseBody& operator=(const GetAssetsPropertyDetailResponseBody &) = default ;
    GetAssetsPropertyDetailResponseBody& operator=(GetAssetsPropertyDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Propertys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Propertys& obj) { 
        DARABONBA_PTR_TO_JSON(Agent, agent_);
        DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
        DARABONBA_PTR_TO_JSON(File, file_);
        DARABONBA_PTR_TO_JSON(Filepath, filepath_);
        DARABONBA_PTR_TO_JSON(ImageDigest, imageDigest_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(InstallationPath, installationPath_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(ListenProtocol, listenProtocol_);
        DARABONBA_PTR_TO_JSON(McpName, mcpName_);
        DARABONBA_PTR_TO_JSON(MiddlewareName, middlewareName_);
        DARABONBA_PTR_TO_JSON(MiddlewareVersion, middlewareVersion_);
        DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(PathMode, pathMode_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ProcessStarted, processStarted_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SkillsName, skillsName_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TransportName, transportName_);
        DARABONBA_PTR_TO_JSON(UsedByCount, usedByCount_);
        DARABONBA_PTR_TO_JSON(User, user_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(WebPath, webPath_);
      };
      friend void from_json(const Darabonba::Json& j, Propertys& obj) { 
        DARABONBA_PTR_FROM_JSON(Agent, agent_);
        DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
        DARABONBA_PTR_FROM_JSON(File, file_);
        DARABONBA_PTR_FROM_JSON(Filepath, filepath_);
        DARABONBA_PTR_FROM_JSON(ImageDigest, imageDigest_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(InstallationPath, installationPath_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(ListenProtocol, listenProtocol_);
        DARABONBA_PTR_FROM_JSON(McpName, mcpName_);
        DARABONBA_PTR_FROM_JSON(MiddlewareName, middlewareName_);
        DARABONBA_PTR_FROM_JSON(MiddlewareVersion, middlewareVersion_);
        DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(PathMode, pathMode_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ProcessStarted, processStarted_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SkillsName, skillsName_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TransportName, transportName_);
        DARABONBA_PTR_FROM_JSON(UsedByCount, usedByCount_);
        DARABONBA_PTR_FROM_JSON(User, user_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(WebPath, webPath_);
      };
      Propertys() = default ;
      Propertys(const Propertys &) = default ;
      Propertys(Propertys &&) = default ;
      Propertys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Propertys() = default ;
      Propertys& operator=(const Propertys &) = default ;
      Propertys& operator=(Propertys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agent_ == nullptr
        && this->containerName_ == nullptr && this->createTimestamp_ == nullptr && this->description_ == nullptr && this->domain_ == nullptr && this->endPoint_ == nullptr
        && this->file_ == nullptr && this->filepath_ == nullptr && this->imageDigest_ == nullptr && this->imageName_ == nullptr && this->installationPath_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->ip_ == nullptr
        && this->listenProtocol_ == nullptr && this->mcpName_ == nullptr && this->middlewareName_ == nullptr && this->middlewareVersion_ == nullptr && this->modelName_ == nullptr
        && this->moduleName_ == nullptr && this->path_ == nullptr && this->pathMode_ == nullptr && this->pid_ == nullptr && this->port_ == nullptr
        && this->processStarted_ == nullptr && this->regionId_ == nullptr && this->repoName_ == nullptr && this->repoNamespace_ == nullptr && this->serverType_ == nullptr
        && this->size_ == nullptr && this->skillsName_ == nullptr && this->tag_ == nullptr && this->transportName_ == nullptr && this->usedByCount_ == nullptr
        && this->user_ == nullptr && this->uuid_ == nullptr && this->webPath_ == nullptr; };
      // agent Field Functions 
      bool hasAgent() const { return this->agent_ != nullptr;};
      void deleteAgent() { this->agent_ = nullptr;};
      inline string getAgent() const { DARABONBA_PTR_GET_DEFAULT(agent_, "") };
      inline Propertys& setAgent(string agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


      // containerName Field Functions 
      bool hasContainerName() const { return this->containerName_ != nullptr;};
      void deleteContainerName() { this->containerName_ = nullptr;};
      inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
      inline Propertys& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Propertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Propertys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Propertys& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // endPoint Field Functions 
      bool hasEndPoint() const { return this->endPoint_ != nullptr;};
      void deleteEndPoint() { this->endPoint_ = nullptr;};
      inline string getEndPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
      inline Propertys& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


      // file Field Functions 
      bool hasFile() const { return this->file_ != nullptr;};
      void deleteFile() { this->file_ = nullptr;};
      inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
      inline Propertys& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


      // filepath Field Functions 
      bool hasFilepath() const { return this->filepath_ != nullptr;};
      void deleteFilepath() { this->filepath_ = nullptr;};
      inline string getFilepath() const { DARABONBA_PTR_GET_DEFAULT(filepath_, "") };
      inline Propertys& setFilepath(string filepath) { DARABONBA_PTR_SET_VALUE(filepath_, filepath) };


      // imageDigest Field Functions 
      bool hasImageDigest() const { return this->imageDigest_ != nullptr;};
      void deleteImageDigest() { this->imageDigest_ = nullptr;};
      inline string getImageDigest() const { DARABONBA_PTR_GET_DEFAULT(imageDigest_, "") };
      inline Propertys& setImageDigest(string imageDigest) { DARABONBA_PTR_SET_VALUE(imageDigest_, imageDigest) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Propertys& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // installationPath Field Functions 
      bool hasInstallationPath() const { return this->installationPath_ != nullptr;};
      void deleteInstallationPath() { this->installationPath_ = nullptr;};
      inline string getInstallationPath() const { DARABONBA_PTR_GET_DEFAULT(installationPath_, "") };
      inline Propertys& setInstallationPath(string installationPath) { DARABONBA_PTR_SET_VALUE(installationPath_, installationPath) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Propertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Propertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Propertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Propertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Propertys& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // listenProtocol Field Functions 
      bool hasListenProtocol() const { return this->listenProtocol_ != nullptr;};
      void deleteListenProtocol() { this->listenProtocol_ = nullptr;};
      inline string getListenProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenProtocol_, "") };
      inline Propertys& setListenProtocol(string listenProtocol) { DARABONBA_PTR_SET_VALUE(listenProtocol_, listenProtocol) };


      // mcpName Field Functions 
      bool hasMcpName() const { return this->mcpName_ != nullptr;};
      void deleteMcpName() { this->mcpName_ = nullptr;};
      inline string getMcpName() const { DARABONBA_PTR_GET_DEFAULT(mcpName_, "") };
      inline Propertys& setMcpName(string mcpName) { DARABONBA_PTR_SET_VALUE(mcpName_, mcpName) };


      // middlewareName Field Functions 
      bool hasMiddlewareName() const { return this->middlewareName_ != nullptr;};
      void deleteMiddlewareName() { this->middlewareName_ = nullptr;};
      inline string getMiddlewareName() const { DARABONBA_PTR_GET_DEFAULT(middlewareName_, "") };
      inline Propertys& setMiddlewareName(string middlewareName) { DARABONBA_PTR_SET_VALUE(middlewareName_, middlewareName) };


      // middlewareVersion Field Functions 
      bool hasMiddlewareVersion() const { return this->middlewareVersion_ != nullptr;};
      void deleteMiddlewareVersion() { this->middlewareVersion_ = nullptr;};
      inline string getMiddlewareVersion() const { DARABONBA_PTR_GET_DEFAULT(middlewareVersion_, "") };
      inline Propertys& setMiddlewareVersion(string middlewareVersion) { DARABONBA_PTR_SET_VALUE(middlewareVersion_, middlewareVersion) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Propertys& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline Propertys& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Propertys& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // pathMode Field Functions 
      bool hasPathMode() const { return this->pathMode_ != nullptr;};
      void deletePathMode() { this->pathMode_ = nullptr;};
      inline string getPathMode() const { DARABONBA_PTR_GET_DEFAULT(pathMode_, "") };
      inline Propertys& setPathMode(string pathMode) { DARABONBA_PTR_SET_VALUE(pathMode_, pathMode) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline Propertys& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Propertys& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // processStarted Field Functions 
      bool hasProcessStarted() const { return this->processStarted_ != nullptr;};
      void deleteProcessStarted() { this->processStarted_ = nullptr;};
      inline int64_t getProcessStarted() const { DARABONBA_PTR_GET_DEFAULT(processStarted_, 0L) };
      inline Propertys& setProcessStarted(int64_t processStarted) { DARABONBA_PTR_SET_VALUE(processStarted_, processStarted) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Propertys& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Propertys& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoNamespace Field Functions 
      bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
      void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
      inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
      inline Propertys& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


      // serverType Field Functions 
      bool hasServerType() const { return this->serverType_ != nullptr;};
      void deleteServerType() { this->serverType_ = nullptr;};
      inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
      inline Propertys& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Propertys& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // skillsName Field Functions 
      bool hasSkillsName() const { return this->skillsName_ != nullptr;};
      void deleteSkillsName() { this->skillsName_ = nullptr;};
      inline string getSkillsName() const { DARABONBA_PTR_GET_DEFAULT(skillsName_, "") };
      inline Propertys& setSkillsName(string skillsName) { DARABONBA_PTR_SET_VALUE(skillsName_, skillsName) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Propertys& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // transportName Field Functions 
      bool hasTransportName() const { return this->transportName_ != nullptr;};
      void deleteTransportName() { this->transportName_ = nullptr;};
      inline string getTransportName() const { DARABONBA_PTR_GET_DEFAULT(transportName_, "") };
      inline Propertys& setTransportName(string transportName) { DARABONBA_PTR_SET_VALUE(transportName_, transportName) };


      // usedByCount Field Functions 
      bool hasUsedByCount() const { return this->usedByCount_ != nullptr;};
      void deleteUsedByCount() { this->usedByCount_ = nullptr;};
      inline int32_t getUsedByCount() const { DARABONBA_PTR_GET_DEFAULT(usedByCount_, 0) };
      inline Propertys& setUsedByCount(int32_t usedByCount) { DARABONBA_PTR_SET_VALUE(usedByCount_, usedByCount) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Propertys& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Propertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // webPath Field Functions 
      bool hasWebPath() const { return this->webPath_ != nullptr;};
      void deleteWebPath() { this->webPath_ = nullptr;};
      inline string getWebPath() const { DARABONBA_PTR_GET_DEFAULT(webPath_, "") };
      inline Propertys& setWebPath(string webPath) { DARABONBA_PTR_SET_VALUE(webPath_, webPath) };


    protected:
      shared_ptr<string> agent_ {};
      // Container name.
      shared_ptr<string> containerName_ {};
      // The timestamp of the latest asset fingerprint scan, in milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      shared_ptr<string> description_ {};
      // Web site domain. 
      // > Only returned when **Biz** is **web_server**.
      shared_ptr<string> domain_ {};
      // Large model service request interface address.
      shared_ptr<string> endPoint_ {};
      // File path for requesting the large model service.
      shared_ptr<string> file_ {};
      // Kernel module file path.
      // > Returned only when **Biz** is **lkm**.
      shared_ptr<string> filepath_ {};
      shared_ptr<string> imageDigest_ {};
      // Image name.
      shared_ptr<string> imageName_ {};
      // AI tool installation path
      shared_ptr<string> installationPath_ {};
      // The instance ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The IP address of the server.
      shared_ptr<string> ip_ {};
      // Web site process listening protocol. 
      // >Only returned when **Biz** is **web_server**.
      shared_ptr<string> listenProtocol_ {};
      shared_ptr<string> mcpName_ {};
      // AI tool name
      shared_ptr<string> middlewareName_ {};
      // AI tool version.
      shared_ptr<string> middlewareVersion_ {};
      // Name of the large model vendor
      shared_ptr<string> modelName_ {};
      // Module name.
      // > Returned only when **Biz** is **lkm**.
      shared_ptr<string> moduleName_ {};
      // The meaning varies based on the value of **Biz**:
      // - When **Biz** is **web_server**, it represents the Web root path
      // - When **Biz** is **autorun**, it represents the startup item path
      shared_ptr<string> path_ {};
      // Web site directory permissions. 
      // > Only returned when **Biz** is **web_server**.
      shared_ptr<string> pathMode_ {};
      // Web site process Pid. 
      // > Only returned when **Biz** is **web_server**.
      shared_ptr<string> pid_ {};
      // Web site port.
      // > Returned only when **Biz** is **web_server**.
      shared_ptr<string> port_ {};
      // Timestamp of the web site process startup, in milliseconds.  
      // > Only returned when **Biz** is **web_server**.
      shared_ptr<int64_t> processStarted_ {};
      // The ID of the region where the instance is located.
      shared_ptr<string> regionId_ {};
      shared_ptr<string> repoName_ {};
      shared_ptr<string> repoNamespace_ {};
      // Web site type.
      // > Returned only when **Biz** is **web_server**.
      shared_ptr<string> serverType_ {};
      // Kernel module size.
      // > Returned only when **Biz** is **lkm**.
      shared_ptr<int32_t> size_ {};
      shared_ptr<string> skillsName_ {};
      shared_ptr<string> tag_ {};
      shared_ptr<string> transportName_ {};
      // Number of dependencies for the kernel module.
      // > Returned only when **Biz** is **lkm**.
      shared_ptr<int32_t> usedByCount_ {};
      // Web site user. 
      // > Only returned when **Biz** is **web_server**.
      shared_ptr<string> user_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // Web site web path. 
      // > Only returned when **Biz** is **web_server**.
      shared_ptr<string> webPath_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of asset fingerprint details displayed on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page when performing a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // The NextToken value returned when using the NextToken method.
      shared_ptr<string> nextToken_ {};
      // The number of asset fingerprint details displayed per page when performing a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of detailed asset fingerprint information queried.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->propertys_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetAssetsPropertyDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetAssetsPropertyDetailResponseBody::PageInfo) };
    inline GetAssetsPropertyDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, GetAssetsPropertyDetailResponseBody::PageInfo) };
    inline GetAssetsPropertyDetailResponseBody& setPageInfo(const GetAssetsPropertyDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetAssetsPropertyDetailResponseBody& setPageInfo(GetAssetsPropertyDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<GetAssetsPropertyDetailResponseBody::Propertys> & getPropertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<GetAssetsPropertyDetailResponseBody::Propertys>) };
    inline vector<GetAssetsPropertyDetailResponseBody::Propertys> getPropertys() { DARABONBA_PTR_GET(propertys_, vector<GetAssetsPropertyDetailResponseBody::Propertys>) };
    inline GetAssetsPropertyDetailResponseBody& setPropertys(const vector<GetAssetsPropertyDetailResponseBody::Propertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline GetAssetsPropertyDetailResponseBody& setPropertys(vector<GetAssetsPropertyDetailResponseBody::Propertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetsPropertyDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information displayed on the page when performing a paginated query.
    shared_ptr<GetAssetsPropertyDetailResponseBody::PageInfo> pageInfo_ {};
    // Collection of asset fingerprint details.
    shared_ptr<vector<GetAssetsPropertyDetailResponseBody::Propertys>> propertys_ {};
    // The ID of this call request, a unique identifier generated by Alibaba Cloud for the request, which can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
