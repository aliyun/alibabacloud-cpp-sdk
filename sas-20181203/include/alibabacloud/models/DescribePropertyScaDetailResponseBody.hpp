// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCADETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCADETAILRESPONSEBODY_HPP_
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
  class DescribePropertyScaDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScaDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Propertys, propertys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScaDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Propertys, propertys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePropertyScaDetailResponseBody() = default ;
    DescribePropertyScaDetailResponseBody(const DescribePropertyScaDetailResponseBody &) = default ;
    DescribePropertyScaDetailResponseBody(DescribePropertyScaDetailResponseBody &&) = default ;
    DescribePropertyScaDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScaDetailResponseBody() = default ;
    DescribePropertyScaDetailResponseBody& operator=(const DescribePropertyScaDetailResponseBody &) = default ;
    DescribePropertyScaDetailResponseBody& operator=(DescribePropertyScaDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Propertys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Propertys& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Propertys& obj) { 
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
      virtual bool empty() const override { return this->bizType_ == nullptr
        && this->bizTypeDispaly_ == nullptr && this->cmdline_ == nullptr && this->configPath_ == nullptr && this->containerName_ == nullptr && this->createTimestamp_ == nullptr
        && this->imageName_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr
        && this->ip_ == nullptr && this->listenIp_ == nullptr && this->listenProtocol_ == nullptr && this->listenStatus_ == nullptr && this->name_ == nullptr
        && this->path_ == nullptr && this->pid_ == nullptr && this->podName_ == nullptr && this->port_ == nullptr && this->ppid_ == nullptr
        && this->processStarted_ == nullptr && this->processUser_ == nullptr && this->proof_ == nullptr && this->runtimeEnvVersion_ == nullptr && this->type_ == nullptr
        && this->uuid_ == nullptr && this->version_ == nullptr && this->webPath_ == nullptr; };
      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline Propertys& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // bizTypeDispaly Field Functions 
      bool hasBizTypeDispaly() const { return this->bizTypeDispaly_ != nullptr;};
      void deleteBizTypeDispaly() { this->bizTypeDispaly_ = nullptr;};
      inline string getBizTypeDispaly() const { DARABONBA_PTR_GET_DEFAULT(bizTypeDispaly_, "") };
      inline Propertys& setBizTypeDispaly(string bizTypeDispaly) { DARABONBA_PTR_SET_VALUE(bizTypeDispaly_, bizTypeDispaly) };


      // cmdline Field Functions 
      bool hasCmdline() const { return this->cmdline_ != nullptr;};
      void deleteCmdline() { this->cmdline_ = nullptr;};
      inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
      inline Propertys& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


      // configPath Field Functions 
      bool hasConfigPath() const { return this->configPath_ != nullptr;};
      void deleteConfigPath() { this->configPath_ = nullptr;};
      inline string getConfigPath() const { DARABONBA_PTR_GET_DEFAULT(configPath_, "") };
      inline Propertys& setConfigPath(string configPath) { DARABONBA_PTR_SET_VALUE(configPath_, configPath) };


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


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Propertys& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


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


      // listenIp Field Functions 
      bool hasListenIp() const { return this->listenIp_ != nullptr;};
      void deleteListenIp() { this->listenIp_ = nullptr;};
      inline string getListenIp() const { DARABONBA_PTR_GET_DEFAULT(listenIp_, "") };
      inline Propertys& setListenIp(string listenIp) { DARABONBA_PTR_SET_VALUE(listenIp_, listenIp) };


      // listenProtocol Field Functions 
      bool hasListenProtocol() const { return this->listenProtocol_ != nullptr;};
      void deleteListenProtocol() { this->listenProtocol_ = nullptr;};
      inline string getListenProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenProtocol_, "") };
      inline Propertys& setListenProtocol(string listenProtocol) { DARABONBA_PTR_SET_VALUE(listenProtocol_, listenProtocol) };


      // listenStatus Field Functions 
      bool hasListenStatus() const { return this->listenStatus_ != nullptr;};
      void deleteListenStatus() { this->listenStatus_ = nullptr;};
      inline string getListenStatus() const { DARABONBA_PTR_GET_DEFAULT(listenStatus_, "") };
      inline Propertys& setListenStatus(string listenStatus) { DARABONBA_PTR_SET_VALUE(listenStatus_, listenStatus) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Propertys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Propertys& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline Propertys& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // podName Field Functions 
      bool hasPodName() const { return this->podName_ != nullptr;};
      void deletePodName() { this->podName_ = nullptr;};
      inline string getPodName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
      inline Propertys& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Propertys& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // ppid Field Functions 
      bool hasPpid() const { return this->ppid_ != nullptr;};
      void deletePpid() { this->ppid_ = nullptr;};
      inline string getPpid() const { DARABONBA_PTR_GET_DEFAULT(ppid_, "") };
      inline Propertys& setPpid(string ppid) { DARABONBA_PTR_SET_VALUE(ppid_, ppid) };


      // processStarted Field Functions 
      bool hasProcessStarted() const { return this->processStarted_ != nullptr;};
      void deleteProcessStarted() { this->processStarted_ = nullptr;};
      inline int64_t getProcessStarted() const { DARABONBA_PTR_GET_DEFAULT(processStarted_, 0L) };
      inline Propertys& setProcessStarted(int64_t processStarted) { DARABONBA_PTR_SET_VALUE(processStarted_, processStarted) };


      // processUser Field Functions 
      bool hasProcessUser() const { return this->processUser_ != nullptr;};
      void deleteProcessUser() { this->processUser_ = nullptr;};
      inline string getProcessUser() const { DARABONBA_PTR_GET_DEFAULT(processUser_, "") };
      inline Propertys& setProcessUser(string processUser) { DARABONBA_PTR_SET_VALUE(processUser_, processUser) };


      // proof Field Functions 
      bool hasProof() const { return this->proof_ != nullptr;};
      void deleteProof() { this->proof_ = nullptr;};
      inline string getProof() const { DARABONBA_PTR_GET_DEFAULT(proof_, "") };
      inline Propertys& setProof(string proof) { DARABONBA_PTR_SET_VALUE(proof_, proof) };


      // runtimeEnvVersion Field Functions 
      bool hasRuntimeEnvVersion() const { return this->runtimeEnvVersion_ != nullptr;};
      void deleteRuntimeEnvVersion() { this->runtimeEnvVersion_ = nullptr;};
      inline string getRuntimeEnvVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeEnvVersion_, "") };
      inline Propertys& setRuntimeEnvVersion(string runtimeEnvVersion) { DARABONBA_PTR_SET_VALUE(runtimeEnvVersion_, runtimeEnvVersion) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Propertys& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Propertys& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Propertys& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // webPath Field Functions 
      bool hasWebPath() const { return this->webPath_ != nullptr;};
      void deleteWebPath() { this->webPath_ = nullptr;};
      inline string getWebPath() const { DARABONBA_PTR_GET_DEFAULT(webPath_, "") };
      inline Propertys& setWebPath(string webPath) { DARABONBA_PTR_SET_VALUE(webPath_, webPath) };


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
      shared_ptr<string> bizType_ {};
      // The display name of the type of the middleware, database, or web service . Valid values:
      // 
      // *   System service
      // *   Software library
      // *   Container component
      // *   Database
      // *   Web container
      // *   JAR package
      // *   Web framework
      shared_ptr<string> bizTypeDispaly_ {};
      // The command line of the process.
      shared_ptr<string> cmdline_ {};
      // The path to the configuration file.
      shared_ptr<string> configPath_ {};
      // The name of the container.
      shared_ptr<string> containerName_ {};
      // The latest collection timestamp, which indicates the last timestamp when Security Center collected the information about the middleware, database, or web service. Unit: milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // The name of the image.
      shared_ptr<string> imageName_ {};
      // The ID of the server on which the middleware, database, or web service is run.
      shared_ptr<string> instanceId_ {};
      // The name of the server on which the middleware, database, or web service is run.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server on which the middleware, database, or web service is run.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server on which the middleware, database, or web service is run.
      shared_ptr<string> intranetIp_ {};
      // The public IP address of the server on which the middleware, database, or web service is run.
      shared_ptr<string> ip_ {};
      // The IP address that the process monitors.
      shared_ptr<string> listenIp_ {};
      // The protocol of the traffic on which the process listens. Valid values:
      // 
      // *   **UDP**
      // *   **TCP**
      shared_ptr<string> listenProtocol_ {};
      // The listening status of the process. Valid values:
      // 
      // *   **NONE**: not listening
      // *   **LISTEN**: listening
      shared_ptr<string> listenStatus_ {};
      // The name of the middleware, database, or web service.
      shared_ptr<string> name_ {};
      // The path of the middleware, database, or web service.
      shared_ptr<string> path_ {};
      // The PID.
      shared_ptr<string> pid_ {};
      // The name of the Kubernetes pod.
      shared_ptr<string> podName_ {};
      // The port of the middleware, database, or web service.
      shared_ptr<string> port_ {};
      // The ID of the parent process.
      shared_ptr<string> ppid_ {};
      // The timestamp when the process starts. Unit: milliseconds.
      shared_ptr<int64_t> processStarted_ {};
      // The name of the user who runs the process.
      shared_ptr<string> processUser_ {};
      // The version verification information about the middleware, database, or web service.
      shared_ptr<string> proof_ {};
      // The version of the runtime environment.
      // 
      // >  The value of this parameter can be the Java Development Kit (JDK) version of the runtime environment for a Java process.
      shared_ptr<string> runtimeEnvVersion_ {};
      // The type of the middleware, database, or web service.
      shared_ptr<string> type_ {};
      // The UUID of the server on which the middleware, database, or web service is run.
      shared_ptr<string> uuid_ {};
      // The version of the middleware, database, or web service.
      shared_ptr<string> version_ {};
      // The web directory.
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The value of NextToken that is returned when the NextToken method is used.
      shared_ptr<string> nextToken_ {};
      // The number of entries returned per page. Default value: **10**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->propertys_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribePropertyScaDetailResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribePropertyScaDetailResponseBody::PageInfo) };
    inline DescribePropertyScaDetailResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribePropertyScaDetailResponseBody::PageInfo) };
    inline DescribePropertyScaDetailResponseBody& setPageInfo(const DescribePropertyScaDetailResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribePropertyScaDetailResponseBody& setPageInfo(DescribePropertyScaDetailResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // propertys Field Functions 
    bool hasPropertys() const { return this->propertys_ != nullptr;};
    void deletePropertys() { this->propertys_ = nullptr;};
    inline const vector<DescribePropertyScaDetailResponseBody::Propertys> & getPropertys() const { DARABONBA_PTR_GET_CONST(propertys_, vector<DescribePropertyScaDetailResponseBody::Propertys>) };
    inline vector<DescribePropertyScaDetailResponseBody::Propertys> getPropertys() { DARABONBA_PTR_GET(propertys_, vector<DescribePropertyScaDetailResponseBody::Propertys>) };
    inline DescribePropertyScaDetailResponseBody& setPropertys(const vector<DescribePropertyScaDetailResponseBody::Propertys> & propertys) { DARABONBA_PTR_SET_VALUE(propertys_, propertys) };
    inline DescribePropertyScaDetailResponseBody& setPropertys(vector<DescribePropertyScaDetailResponseBody::Propertys> && propertys) { DARABONBA_PTR_SET_RVALUE(propertys_, propertys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyScaDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<DescribePropertyScaDetailResponseBody::PageInfo> pageInfo_ {};
    // The details about the asset fingerprints returned.
    shared_ptr<vector<DescribePropertyScaDetailResponseBody::Propertys>> propertys_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
