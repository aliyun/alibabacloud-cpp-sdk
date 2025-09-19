// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILRESPONSEBODYPROPERTYS_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILRESPONSEBODYPROPERTYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyDetailResponseBodyPropertys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Filepath, filepath_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstallationPath, installationPath_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(ListenProtocol, listenProtocol_);
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
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(UsedByCount, usedByCount_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(WebPath, webPath_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyDetailResponseBodyPropertys& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Filepath, filepath_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstallationPath, installationPath_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(ListenProtocol, listenProtocol_);
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
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(UsedByCount, usedByCount_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(WebPath, webPath_);
    };
    GetAssetsPropertyDetailResponseBodyPropertys() = default ;
    GetAssetsPropertyDetailResponseBodyPropertys(const GetAssetsPropertyDetailResponseBodyPropertys &) = default ;
    GetAssetsPropertyDetailResponseBodyPropertys(GetAssetsPropertyDetailResponseBodyPropertys &&) = default ;
    GetAssetsPropertyDetailResponseBodyPropertys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyDetailResponseBodyPropertys() = default ;
    GetAssetsPropertyDetailResponseBodyPropertys& operator=(const GetAssetsPropertyDetailResponseBodyPropertys &) = default ;
    GetAssetsPropertyDetailResponseBodyPropertys& operator=(GetAssetsPropertyDetailResponseBodyPropertys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerName_ != nullptr
        && this->createTimestamp_ != nullptr && this->domain_ != nullptr && this->endPoint_ != nullptr && this->file_ != nullptr && this->filepath_ != nullptr
        && this->imageName_ != nullptr && this->installationPath_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr
        && this->intranetIp_ != nullptr && this->ip_ != nullptr && this->listenProtocol_ != nullptr && this->middlewareName_ != nullptr && this->middlewareVersion_ != nullptr
        && this->modelName_ != nullptr && this->moduleName_ != nullptr && this->path_ != nullptr && this->pathMode_ != nullptr && this->pid_ != nullptr
        && this->port_ != nullptr && this->processStarted_ != nullptr && this->regionId_ != nullptr && this->serverType_ != nullptr && this->size_ != nullptr
        && this->usedByCount_ != nullptr && this->user_ != nullptr && this->uuid_ != nullptr && this->webPath_ != nullptr; };
    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endPoint Field Functions 
    bool hasEndPoint() const { return this->endPoint_ != nullptr;};
    void deleteEndPoint() { this->endPoint_ = nullptr;};
    inline string endPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string file() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // filepath Field Functions 
    bool hasFilepath() const { return this->filepath_ != nullptr;};
    void deleteFilepath() { this->filepath_ = nullptr;};
    inline string filepath() const { DARABONBA_PTR_GET_DEFAULT(filepath_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setFilepath(string filepath) { DARABONBA_PTR_SET_VALUE(filepath_, filepath) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // installationPath Field Functions 
    bool hasInstallationPath() const { return this->installationPath_ != nullptr;};
    void deleteInstallationPath() { this->installationPath_ = nullptr;};
    inline string installationPath() const { DARABONBA_PTR_GET_DEFAULT(installationPath_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setInstallationPath(string installationPath) { DARABONBA_PTR_SET_VALUE(installationPath_, installationPath) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // listenProtocol Field Functions 
    bool hasListenProtocol() const { return this->listenProtocol_ != nullptr;};
    void deleteListenProtocol() { this->listenProtocol_ = nullptr;};
    inline string listenProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenProtocol_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setListenProtocol(string listenProtocol) { DARABONBA_PTR_SET_VALUE(listenProtocol_, listenProtocol) };


    // middlewareName Field Functions 
    bool hasMiddlewareName() const { return this->middlewareName_ != nullptr;};
    void deleteMiddlewareName() { this->middlewareName_ = nullptr;};
    inline string middlewareName() const { DARABONBA_PTR_GET_DEFAULT(middlewareName_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setMiddlewareName(string middlewareName) { DARABONBA_PTR_SET_VALUE(middlewareName_, middlewareName) };


    // middlewareVersion Field Functions 
    bool hasMiddlewareVersion() const { return this->middlewareVersion_ != nullptr;};
    void deleteMiddlewareVersion() { this->middlewareVersion_ = nullptr;};
    inline string middlewareVersion() const { DARABONBA_PTR_GET_DEFAULT(middlewareVersion_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setMiddlewareVersion(string middlewareVersion) { DARABONBA_PTR_SET_VALUE(middlewareVersion_, middlewareVersion) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathMode Field Functions 
    bool hasPathMode() const { return this->pathMode_ != nullptr;};
    void deletePathMode() { this->pathMode_ = nullptr;};
    inline string pathMode() const { DARABONBA_PTR_GET_DEFAULT(pathMode_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setPathMode(string pathMode) { DARABONBA_PTR_SET_VALUE(pathMode_, pathMode) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // processStarted Field Functions 
    bool hasProcessStarted() const { return this->processStarted_ != nullptr;};
    void deleteProcessStarted() { this->processStarted_ = nullptr;};
    inline int64_t processStarted() const { DARABONBA_PTR_GET_DEFAULT(processStarted_, 0L) };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setProcessStarted(int64_t processStarted) { DARABONBA_PTR_SET_VALUE(processStarted_, processStarted) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // usedByCount Field Functions 
    bool hasUsedByCount() const { return this->usedByCount_ != nullptr;};
    void deleteUsedByCount() { this->usedByCount_ = nullptr;};
    inline int32_t usedByCount() const { DARABONBA_PTR_GET_DEFAULT(usedByCount_, 0) };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setUsedByCount(int32_t usedByCount) { DARABONBA_PTR_SET_VALUE(usedByCount_, usedByCount) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // webPath Field Functions 
    bool hasWebPath() const { return this->webPath_ != nullptr;};
    void deleteWebPath() { this->webPath_ = nullptr;};
    inline string webPath() const { DARABONBA_PTR_GET_DEFAULT(webPath_, "") };
    inline GetAssetsPropertyDetailResponseBodyPropertys& setWebPath(string webPath) { DARABONBA_PTR_SET_VALUE(webPath_, webPath) };


  protected:
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The timestamp of the last fingerprint collection. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The domain name of the website.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> endPoint_ = nullptr;
    std::shared_ptr<string> file_ = nullptr;
    // The path to the kernel module file.
    // 
    // > This parameter is returned only when **Biz** is set to **lkm**.
    std::shared_ptr<string> filepath_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    std::shared_ptr<string> installationPath_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The IP address of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // The listening protocol that the website uses.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> listenProtocol_ = nullptr;
    std::shared_ptr<string> middlewareName_ = nullptr;
    std::shared_ptr<string> middlewareVersion_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    // The name of the module.
    // 
    // > This parameter is returned only when **Biz** is set to **lkm**.
    std::shared_ptr<string> moduleName_ = nullptr;
    // The path. The value of this parameter varies based on the value of **Biz**.
    // 
    // *   If **Biz** is set to **web_server**, the value of this parameter indicates the path to the website root directory.
    // *   If **Biz** is set to **autorun**, the value of this parameter indicates the path to the startup item.
    std::shared_ptr<string> path_ = nullptr;
    // The permissions on the root directory of the website.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> pathMode_ = nullptr;
    // The process ID (PID) of the process that runs the website service.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> pid_ = nullptr;
    // The port of the website.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> port_ = nullptr;
    // The timestamp generated when the process was started. Unit: milliseconds.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<int64_t> processStarted_ = nullptr;
    // The ID of the region in which the server resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the website.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> serverType_ = nullptr;
    // The size of the kernel module.
    // 
    // > This parameter is returned only when **Biz** is set to **lkm**.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The number of times that the kernel module is referenced.
    // 
    // > This parameter is returned only when **Biz** is set to **lkm**.
    std::shared_ptr<int32_t> usedByCount_ = nullptr;
    // The user who started the process of the website.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> user_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The path to the root directory of the website.
    // 
    // > This parameter is returned only when **Biz** is set to **web_server**.
    std::shared_ptr<string> webPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
