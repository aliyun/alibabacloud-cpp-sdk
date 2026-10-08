// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_APPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AppConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_TO_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_TO_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_TO_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_TO_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_TO_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_TO_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_TO_JSON(IsMultilingualApp, isMultilingualApp_);
      DARABONBA_PTR_TO_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_TO_JSON(LimitCpu, limitCpu_);
      DARABONBA_PTR_TO_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(LocalVolumes, localVolumes_);
      DARABONBA_PTR_TO_JSON(NasId, nasId_);
      DARABONBA_PTR_TO_JSON(NasMountDescs, nasMountDescs_);
      DARABONBA_PTR_TO_JSON(NasStorageType, nasStorageType_);
      DARABONBA_PTR_TO_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(RequestCpu, requestCpu_);
      DARABONBA_PTR_TO_JSON(RequestMem, requestMem_);
      DARABONBA_PTR_TO_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_TO_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_TO_JSON(WebContainerConfig, webContainerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AppConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(CommandArgs, commandArgs_);
      DARABONBA_PTR_FROM_JSON(ConfigMountDescs, configMountDescs_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_FROM_JSON(EmptyDirs, emptyDirs_);
      DARABONBA_PTR_FROM_JSON(EnableAhas, enableAhas_);
      DARABONBA_PTR_FROM_JSON(EnvFroms, envFroms_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_FROM_JSON(IsMultilingualApp, isMultilingualApp_);
      DARABONBA_PTR_FROM_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(LimitCpu, limitCpu_);
      DARABONBA_PTR_FROM_JSON(LimitMem, limitMem_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(LocalVolumes, localVolumes_);
      DARABONBA_PTR_FROM_JSON(NasId, nasId_);
      DARABONBA_PTR_FROM_JSON(NasMountDescs, nasMountDescs_);
      DARABONBA_PTR_FROM_JSON(NasStorageType, nasStorageType_);
      DARABONBA_PTR_FROM_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(PvcMountDescs, pvcMountDescs_);
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(RequestCpu, requestCpu_);
      DARABONBA_PTR_FROM_JSON(RequestMem, requestMem_);
      DARABONBA_PTR_FROM_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_FROM_JSON(SlsConfigs, slsConfigs_);
      DARABONBA_PTR_FROM_JSON(WebContainerConfig, webContainerConfig_);
    };
    AppConfig() = default ;
    AppConfig(const AppConfig &) = default ;
    AppConfig(AppConfig &&) = default ;
    AppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppConfig() = default ;
    AppConfig& operator=(const AppConfig &) = default ;
    AppConfig& operator=(AppConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebContainerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebContainerConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectorType, connectorType_);
        DARABONBA_PTR_TO_JSON(ContextInputType, contextInputType_);
        DARABONBA_PTR_TO_JSON(ContextPath, contextPath_);
        DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
        DARABONBA_PTR_TO_JSON(MaxThreads, maxThreads_);
        DARABONBA_PTR_TO_JSON(ServerXml, serverXml_);
        DARABONBA_PTR_TO_JSON(UriEncoding, uriEncoding_);
        DARABONBA_PTR_TO_JSON(UseAdvancedServerXml, useAdvancedServerXml_);
        DARABONBA_PTR_TO_JSON(UseBodyEncoding, useBodyEncoding_);
        DARABONBA_PTR_TO_JSON(UseDefaultConfig, useDefaultConfig_);
      };
      friend void from_json(const Darabonba::Json& j, WebContainerConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectorType, connectorType_);
        DARABONBA_PTR_FROM_JSON(ContextInputType, contextInputType_);
        DARABONBA_PTR_FROM_JSON(ContextPath, contextPath_);
        DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
        DARABONBA_PTR_FROM_JSON(MaxThreads, maxThreads_);
        DARABONBA_PTR_FROM_JSON(ServerXml, serverXml_);
        DARABONBA_PTR_FROM_JSON(UriEncoding, uriEncoding_);
        DARABONBA_PTR_FROM_JSON(UseAdvancedServerXml, useAdvancedServerXml_);
        DARABONBA_PTR_FROM_JSON(UseBodyEncoding, useBodyEncoding_);
        DARABONBA_PTR_FROM_JSON(UseDefaultConfig, useDefaultConfig_);
      };
      WebContainerConfig() = default ;
      WebContainerConfig(const WebContainerConfig &) = default ;
      WebContainerConfig(WebContainerConfig &&) = default ;
      WebContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebContainerConfig() = default ;
      WebContainerConfig& operator=(const WebContainerConfig &) = default ;
      WebContainerConfig& operator=(WebContainerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectorType_ == nullptr
        && this->contextInputType_ == nullptr && this->contextPath_ == nullptr && this->httpPort_ == nullptr && this->maxThreads_ == nullptr && this->serverXml_ == nullptr
        && this->uriEncoding_ == nullptr && this->useAdvancedServerXml_ == nullptr && this->useBodyEncoding_ == nullptr && this->useDefaultConfig_ == nullptr; };
      // connectorType Field Functions 
      bool hasConnectorType() const { return this->connectorType_ != nullptr;};
      void deleteConnectorType() { this->connectorType_ = nullptr;};
      inline string getConnectorType() const { DARABONBA_PTR_GET_DEFAULT(connectorType_, "") };
      inline WebContainerConfig& setConnectorType(string connectorType) { DARABONBA_PTR_SET_VALUE(connectorType_, connectorType) };


      // contextInputType Field Functions 
      bool hasContextInputType() const { return this->contextInputType_ != nullptr;};
      void deleteContextInputType() { this->contextInputType_ = nullptr;};
      inline string getContextInputType() const { DARABONBA_PTR_GET_DEFAULT(contextInputType_, "") };
      inline WebContainerConfig& setContextInputType(string contextInputType) { DARABONBA_PTR_SET_VALUE(contextInputType_, contextInputType) };


      // contextPath Field Functions 
      bool hasContextPath() const { return this->contextPath_ != nullptr;};
      void deleteContextPath() { this->contextPath_ = nullptr;};
      inline string getContextPath() const { DARABONBA_PTR_GET_DEFAULT(contextPath_, "") };
      inline WebContainerConfig& setContextPath(string contextPath) { DARABONBA_PTR_SET_VALUE(contextPath_, contextPath) };


      // httpPort Field Functions 
      bool hasHttpPort() const { return this->httpPort_ != nullptr;};
      void deleteHttpPort() { this->httpPort_ = nullptr;};
      inline int64_t getHttpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, 0L) };
      inline WebContainerConfig& setHttpPort(int64_t httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


      // maxThreads Field Functions 
      bool hasMaxThreads() const { return this->maxThreads_ != nullptr;};
      void deleteMaxThreads() { this->maxThreads_ = nullptr;};
      inline int64_t getMaxThreads() const { DARABONBA_PTR_GET_DEFAULT(maxThreads_, 0L) };
      inline WebContainerConfig& setMaxThreads(int64_t maxThreads) { DARABONBA_PTR_SET_VALUE(maxThreads_, maxThreads) };


      // serverXml Field Functions 
      bool hasServerXml() const { return this->serverXml_ != nullptr;};
      void deleteServerXml() { this->serverXml_ = nullptr;};
      inline string getServerXml() const { DARABONBA_PTR_GET_DEFAULT(serverXml_, "") };
      inline WebContainerConfig& setServerXml(string serverXml) { DARABONBA_PTR_SET_VALUE(serverXml_, serverXml) };


      // uriEncoding Field Functions 
      bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
      void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
      inline string getUriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
      inline WebContainerConfig& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


      // useAdvancedServerXml Field Functions 
      bool hasUseAdvancedServerXml() const { return this->useAdvancedServerXml_ != nullptr;};
      void deleteUseAdvancedServerXml() { this->useAdvancedServerXml_ = nullptr;};
      inline bool getUseAdvancedServerXml() const { DARABONBA_PTR_GET_DEFAULT(useAdvancedServerXml_, false) };
      inline WebContainerConfig& setUseAdvancedServerXml(bool useAdvancedServerXml) { DARABONBA_PTR_SET_VALUE(useAdvancedServerXml_, useAdvancedServerXml) };


      // useBodyEncoding Field Functions 
      bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
      void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
      inline bool getUseBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
      inline WebContainerConfig& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


      // useDefaultConfig Field Functions 
      bool hasUseDefaultConfig() const { return this->useDefaultConfig_ != nullptr;};
      void deleteUseDefaultConfig() { this->useDefaultConfig_ = nullptr;};
      inline bool getUseDefaultConfig() const { DARABONBA_PTR_GET_DEFAULT(useDefaultConfig_, false) };
      inline WebContainerConfig& setUseDefaultConfig(bool useDefaultConfig) { DARABONBA_PTR_SET_VALUE(useDefaultConfig_, useDefaultConfig) };


    protected:
      shared_ptr<string> connectorType_ {};
      shared_ptr<string> contextInputType_ {};
      shared_ptr<string> contextPath_ {};
      shared_ptr<int64_t> httpPort_ {};
      shared_ptr<int64_t> maxThreads_ {};
      shared_ptr<string> serverXml_ {};
      shared_ptr<string> uriEncoding_ {};
      shared_ptr<bool> useAdvancedServerXml_ {};
      shared_ptr<bool> useBodyEncoding_ {};
      shared_ptr<bool> useDefaultConfig_ {};
    };

    class SlsConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(LogDir, logDir_);
        DARABONBA_PTR_TO_JSON(Logstore, logstore_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SlsConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(LogDir, logDir_);
        DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SlsConfigs() = default ;
      SlsConfigs(const SlsConfigs &) = default ;
      SlsConfigs(SlsConfigs &&) = default ;
      SlsConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsConfigs() = default ;
      SlsConfigs& operator=(const SlsConfigs &) = default ;
      SlsConfigs& operator=(SlsConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logDir_ == nullptr
        && this->logstore_ == nullptr && this->project_ == nullptr && this->type_ == nullptr; };
      // logDir Field Functions 
      bool hasLogDir() const { return this->logDir_ != nullptr;};
      void deleteLogDir() { this->logDir_ = nullptr;};
      inline string getLogDir() const { DARABONBA_PTR_GET_DEFAULT(logDir_, "") };
      inline SlsConfigs& setLogDir(string logDir) { DARABONBA_PTR_SET_VALUE(logDir_, logDir) };


      // logstore Field Functions 
      bool hasLogstore() const { return this->logstore_ != nullptr;};
      void deleteLogstore() { this->logstore_ = nullptr;};
      inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
      inline SlsConfigs& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline SlsConfigs& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SlsConfigs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> logDir_ {};
      shared_ptr<string> logstore_ {};
      shared_ptr<string> project_ {};
      shared_ptr<string> type_ {};
    };

    class PvcMountDescs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PvcMountDescs& obj) { 
        DARABONBA_PTR_TO_JSON(MountPaths, mountPaths_);
        DARABONBA_PTR_TO_JSON(PvcName, pvcName_);
      };
      friend void from_json(const Darabonba::Json& j, PvcMountDescs& obj) { 
        DARABONBA_PTR_FROM_JSON(MountPaths, mountPaths_);
        DARABONBA_PTR_FROM_JSON(PvcName, pvcName_);
      };
      PvcMountDescs() = default ;
      PvcMountDescs(const PvcMountDescs &) = default ;
      PvcMountDescs(PvcMountDescs &&) = default ;
      PvcMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PvcMountDescs() = default ;
      PvcMountDescs& operator=(const PvcMountDescs &) = default ;
      PvcMountDescs& operator=(PvcMountDescs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MountPaths : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountPaths& obj) { 
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_TO_JSON(SubPathExpr, subPathExpr_);
        };
        friend void from_json(const Darabonba::Json& j, MountPaths& obj) { 
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_FROM_JSON(SubPathExpr, subPathExpr_);
        };
        MountPaths() = default ;
        MountPaths(const MountPaths &) = default ;
        MountPaths(MountPaths &&) = default ;
        MountPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountPaths() = default ;
        MountPaths& operator=(const MountPaths &) = default ;
        MountPaths& operator=(MountPaths &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->readOnly_ == nullptr && this->subPathExpr_ == nullptr; };
        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline MountPaths& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline MountPaths& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


        // subPathExpr Field Functions 
        bool hasSubPathExpr() const { return this->subPathExpr_ != nullptr;};
        void deleteSubPathExpr() { this->subPathExpr_ = nullptr;};
        inline string getSubPathExpr() const { DARABONBA_PTR_GET_DEFAULT(subPathExpr_, "") };
        inline MountPaths& setSubPathExpr(string subPathExpr) { DARABONBA_PTR_SET_VALUE(subPathExpr_, subPathExpr) };


      protected:
        shared_ptr<string> mountPath_ {};
        shared_ptr<bool> readOnly_ {};
        shared_ptr<string> subPathExpr_ {};
      };

      virtual bool empty() const override { return this->mountPaths_ == nullptr
        && this->pvcName_ == nullptr; };
      // mountPaths Field Functions 
      bool hasMountPaths() const { return this->mountPaths_ != nullptr;};
      void deleteMountPaths() { this->mountPaths_ = nullptr;};
      inline const vector<PvcMountDescs::MountPaths> & getMountPaths() const { DARABONBA_PTR_GET_CONST(mountPaths_, vector<PvcMountDescs::MountPaths>) };
      inline vector<PvcMountDescs::MountPaths> getMountPaths() { DARABONBA_PTR_GET(mountPaths_, vector<PvcMountDescs::MountPaths>) };
      inline PvcMountDescs& setMountPaths(const vector<PvcMountDescs::MountPaths> & mountPaths) { DARABONBA_PTR_SET_VALUE(mountPaths_, mountPaths) };
      inline PvcMountDescs& setMountPaths(vector<PvcMountDescs::MountPaths> && mountPaths) { DARABONBA_PTR_SET_RVALUE(mountPaths_, mountPaths) };


      // pvcName Field Functions 
      bool hasPvcName() const { return this->pvcName_ != nullptr;};
      void deletePvcName() { this->pvcName_ = nullptr;};
      inline string getPvcName() const { DARABONBA_PTR_GET_DEFAULT(pvcName_, "") };
      inline PvcMountDescs& setPvcName(string pvcName) { DARABONBA_PTR_SET_VALUE(pvcName_, pvcName) };


    protected:
      shared_ptr<vector<PvcMountDescs::MountPaths>> mountPaths_ {};
      shared_ptr<string> pvcName_ {};
    };

    class PackageConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PackageConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EdasContainerVersion, edasContainerVersion_);
        DARABONBA_PTR_TO_JSON(Jdk, jdk_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(PackageUrl, packageUrl_);
        DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
        DARABONBA_PTR_TO_JSON(Timezone, timezone_);
        DARABONBA_PTR_TO_JSON(UriEncoding, uriEncoding_);
        DARABONBA_PTR_TO_JSON(UseBodyEncoding, useBodyEncoding_);
        DARABONBA_PTR_TO_JSON(WebContainer, webContainer_);
      };
      friend void from_json(const Darabonba::Json& j, PackageConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EdasContainerVersion, edasContainerVersion_);
        DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(PackageUrl, packageUrl_);
        DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
        DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
        DARABONBA_PTR_FROM_JSON(UriEncoding, uriEncoding_);
        DARABONBA_PTR_FROM_JSON(UseBodyEncoding, useBodyEncoding_);
        DARABONBA_PTR_FROM_JSON(WebContainer, webContainer_);
      };
      PackageConfig() = default ;
      PackageConfig(const PackageConfig &) = default ;
      PackageConfig(PackageConfig &&) = default ;
      PackageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PackageConfig() = default ;
      PackageConfig& operator=(const PackageConfig &) = default ;
      PackageConfig& operator=(PackageConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->edasContainerVersion_ == nullptr
        && this->jdk_ == nullptr && this->packageType_ == nullptr && this->packageUrl_ == nullptr && this->packageVersion_ == nullptr && this->timezone_ == nullptr
        && this->uriEncoding_ == nullptr && this->useBodyEncoding_ == nullptr && this->webContainer_ == nullptr; };
      // edasContainerVersion Field Functions 
      bool hasEdasContainerVersion() const { return this->edasContainerVersion_ != nullptr;};
      void deleteEdasContainerVersion() { this->edasContainerVersion_ = nullptr;};
      inline string getEdasContainerVersion() const { DARABONBA_PTR_GET_DEFAULT(edasContainerVersion_, "") };
      inline PackageConfig& setEdasContainerVersion(string edasContainerVersion) { DARABONBA_PTR_SET_VALUE(edasContainerVersion_, edasContainerVersion) };


      // jdk Field Functions 
      bool hasJdk() const { return this->jdk_ != nullptr;};
      void deleteJdk() { this->jdk_ = nullptr;};
      inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
      inline PackageConfig& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline PackageConfig& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // packageUrl Field Functions 
      bool hasPackageUrl() const { return this->packageUrl_ != nullptr;};
      void deletePackageUrl() { this->packageUrl_ = nullptr;};
      inline string getPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(packageUrl_, "") };
      inline PackageConfig& setPackageUrl(string packageUrl) { DARABONBA_PTR_SET_VALUE(packageUrl_, packageUrl) };


      // packageVersion Field Functions 
      bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
      void deletePackageVersion() { this->packageVersion_ = nullptr;};
      inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
      inline PackageConfig& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


      // timezone Field Functions 
      bool hasTimezone() const { return this->timezone_ != nullptr;};
      void deleteTimezone() { this->timezone_ = nullptr;};
      inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
      inline PackageConfig& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


      // uriEncoding Field Functions 
      bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
      void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
      inline string getUriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
      inline PackageConfig& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


      // useBodyEncoding Field Functions 
      bool hasUseBodyEncoding() const { return this->useBodyEncoding_ != nullptr;};
      void deleteUseBodyEncoding() { this->useBodyEncoding_ = nullptr;};
      inline bool getUseBodyEncoding() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncoding_, false) };
      inline PackageConfig& setUseBodyEncoding(bool useBodyEncoding) { DARABONBA_PTR_SET_VALUE(useBodyEncoding_, useBodyEncoding) };


      // webContainer Field Functions 
      bool hasWebContainer() const { return this->webContainer_ != nullptr;};
      void deleteWebContainer() { this->webContainer_ = nullptr;};
      inline string getWebContainer() const { DARABONBA_PTR_GET_DEFAULT(webContainer_, "") };
      inline PackageConfig& setWebContainer(string webContainer) { DARABONBA_PTR_SET_VALUE(webContainer_, webContainer) };


    protected:
      shared_ptr<string> edasContainerVersion_ {};
      shared_ptr<string> jdk_ {};
      shared_ptr<string> packageType_ {};
      shared_ptr<string> packageUrl_ {};
      shared_ptr<string> packageVersion_ {};
      shared_ptr<string> timezone_ {};
      shared_ptr<string> uriEncoding_ {};
      shared_ptr<bool> useBodyEncoding_ {};
      shared_ptr<string> webContainer_ {};
    };

    class NasMountDescs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NasMountDescs& obj) { 
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(NasPath, nasPath_);
      };
      friend void from_json(const Darabonba::Json& j, NasMountDescs& obj) { 
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(NasPath, nasPath_);
      };
      NasMountDescs() = default ;
      NasMountDescs(const NasMountDescs &) = default ;
      NasMountDescs(NasMountDescs &&) = default ;
      NasMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NasMountDescs() = default ;
      NasMountDescs& operator=(const NasMountDescs &) = default ;
      NasMountDescs& operator=(NasMountDescs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->nasPath_ == nullptr; };
      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline NasMountDescs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // nasPath Field Functions 
      bool hasNasPath() const { return this->nasPath_ != nullptr;};
      void deleteNasPath() { this->nasPath_ = nullptr;};
      inline string getNasPath() const { DARABONBA_PTR_GET_DEFAULT(nasPath_, "") };
      inline NasMountDescs& setNasPath(string nasPath) { DARABONBA_PTR_SET_VALUE(nasPath_, nasPath) };


    protected:
      shared_ptr<string> mountPath_ {};
      shared_ptr<string> nasPath_ {};
    };

    class LocalVolumes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LocalVolumes& obj) { 
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodePath, nodePath_);
        DARABONBA_PTR_TO_JSON(OpsAuth, opsAuth_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, LocalVolumes& obj) { 
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodePath, nodePath_);
        DARABONBA_PTR_FROM_JSON(OpsAuth, opsAuth_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      LocalVolumes() = default ;
      LocalVolumes(const LocalVolumes &) = default ;
      LocalVolumes(LocalVolumes &&) = default ;
      LocalVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LocalVolumes() = default ;
      LocalVolumes& operator=(const LocalVolumes &) = default ;
      LocalVolumes& operator=(LocalVolumes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->name_ == nullptr && this->nodePath_ == nullptr && this->opsAuth_ == nullptr && this->type_ == nullptr; };
      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline LocalVolumes& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LocalVolumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodePath Field Functions 
      bool hasNodePath() const { return this->nodePath_ != nullptr;};
      void deleteNodePath() { this->nodePath_ = nullptr;};
      inline string getNodePath() const { DARABONBA_PTR_GET_DEFAULT(nodePath_, "") };
      inline LocalVolumes& setNodePath(string nodePath) { DARABONBA_PTR_SET_VALUE(nodePath_, nodePath) };


      // opsAuth Field Functions 
      bool hasOpsAuth() const { return this->opsAuth_ != nullptr;};
      void deleteOpsAuth() { this->opsAuth_ = nullptr;};
      inline int64_t getOpsAuth() const { DARABONBA_PTR_GET_DEFAULT(opsAuth_, 0L) };
      inline LocalVolumes& setOpsAuth(int64_t opsAuth) { DARABONBA_PTR_SET_VALUE(opsAuth_, opsAuth) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline LocalVolumes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> mountPath_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nodePath_ {};
      shared_ptr<int64_t> opsAuth_ {};
      shared_ptr<string> type_ {};
    };

    class ImageConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ContainerRegistryId, containerRegistryId_);
        DARABONBA_PTR_TO_JSON(CrInstanceId, crInstanceId_);
        DARABONBA_PTR_TO_JSON(CrRegionId, crRegionId_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ImageConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ContainerRegistryId, containerRegistryId_);
        DARABONBA_PTR_FROM_JSON(CrInstanceId, crInstanceId_);
        DARABONBA_PTR_FROM_JSON(CrRegionId, crRegionId_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      };
      ImageConfig() = default ;
      ImageConfig(const ImageConfig &) = default ;
      ImageConfig(ImageConfig &&) = default ;
      ImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageConfig() = default ;
      ImageConfig& operator=(const ImageConfig &) = default ;
      ImageConfig& operator=(ImageConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->containerRegistryId_ == nullptr
        && this->crInstanceId_ == nullptr && this->crRegionId_ == nullptr && this->imageUrl_ == nullptr; };
      // containerRegistryId Field Functions 
      bool hasContainerRegistryId() const { return this->containerRegistryId_ != nullptr;};
      void deleteContainerRegistryId() { this->containerRegistryId_ = nullptr;};
      inline string getContainerRegistryId() const { DARABONBA_PTR_GET_DEFAULT(containerRegistryId_, "") };
      inline ImageConfig& setContainerRegistryId(string containerRegistryId) { DARABONBA_PTR_SET_VALUE(containerRegistryId_, containerRegistryId) };


      // crInstanceId Field Functions 
      bool hasCrInstanceId() const { return this->crInstanceId_ != nullptr;};
      void deleteCrInstanceId() { this->crInstanceId_ = nullptr;};
      inline string getCrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(crInstanceId_, "") };
      inline ImageConfig& setCrInstanceId(string crInstanceId) { DARABONBA_PTR_SET_VALUE(crInstanceId_, crInstanceId) };


      // crRegionId Field Functions 
      bool hasCrRegionId() const { return this->crRegionId_ != nullptr;};
      void deleteCrRegionId() { this->crRegionId_ = nullptr;};
      inline string getCrRegionId() const { DARABONBA_PTR_GET_DEFAULT(crRegionId_, "") };
      inline ImageConfig& setCrRegionId(string crRegionId) { DARABONBA_PTR_SET_VALUE(crRegionId_, crRegionId) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline ImageConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    protected:
      shared_ptr<string> containerRegistryId_ {};
      shared_ptr<string> crInstanceId_ {};
      shared_ptr<string> crRegionId_ {};
      shared_ptr<string> imageUrl_ {};
    };

    class Envs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Envs& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
        DARABONBA_PTR_TO_JSON(ValueFrom, valueFrom_);
      };
      friend void from_json(const Darabonba::Json& j, Envs& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
        DARABONBA_PTR_FROM_JSON(ValueFrom, valueFrom_);
      };
      Envs() = default ;
      Envs(const Envs &) = default ;
      Envs(Envs &&) = default ;
      Envs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Envs() = default ;
      Envs& operator=(const Envs &) = default ;
      Envs& operator=(Envs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr && this->valueFrom_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Envs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Envs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // valueFrom Field Functions 
      bool hasValueFrom() const { return this->valueFrom_ != nullptr;};
      void deleteValueFrom() { this->valueFrom_ = nullptr;};
      inline string getValueFrom() const { DARABONBA_PTR_GET_DEFAULT(valueFrom_, "") };
      inline Envs& setValueFrom(string valueFrom) { DARABONBA_PTR_SET_VALUE(valueFrom_, valueFrom) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
      shared_ptr<string> valueFrom_ {};
    };

    class EnvFroms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnvFroms& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigMapRef, configMapRef_);
        DARABONBA_PTR_TO_JSON(SecretRef, secretRef_);
      };
      friend void from_json(const Darabonba::Json& j, EnvFroms& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigMapRef, configMapRef_);
        DARABONBA_PTR_FROM_JSON(SecretRef, secretRef_);
      };
      EnvFroms() = default ;
      EnvFroms(const EnvFroms &) = default ;
      EnvFroms(EnvFroms &&) = default ;
      EnvFroms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnvFroms() = default ;
      EnvFroms& operator=(const EnvFroms &) = default ;
      EnvFroms& operator=(EnvFroms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configMapRef_ == nullptr
        && this->secretRef_ == nullptr; };
      // configMapRef Field Functions 
      bool hasConfigMapRef() const { return this->configMapRef_ != nullptr;};
      void deleteConfigMapRef() { this->configMapRef_ = nullptr;};
      inline string getConfigMapRef() const { DARABONBA_PTR_GET_DEFAULT(configMapRef_, "") };
      inline EnvFroms& setConfigMapRef(string configMapRef) { DARABONBA_PTR_SET_VALUE(configMapRef_, configMapRef) };


      // secretRef Field Functions 
      bool hasSecretRef() const { return this->secretRef_ != nullptr;};
      void deleteSecretRef() { this->secretRef_ = nullptr;};
      inline string getSecretRef() const { DARABONBA_PTR_GET_DEFAULT(secretRef_, "") };
      inline EnvFroms& setSecretRef(string secretRef) { DARABONBA_PTR_SET_VALUE(secretRef_, secretRef) };


    protected:
      shared_ptr<string> configMapRef_ {};
      shared_ptr<string> secretRef_ {};
    };

    class EmptyDirs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EmptyDirs& obj) { 
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
        DARABONBA_PTR_TO_JSON(SubPathExpr, subPathExpr_);
      };
      friend void from_json(const Darabonba::Json& j, EmptyDirs& obj) { 
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
        DARABONBA_PTR_FROM_JSON(SubPathExpr, subPathExpr_);
      };
      EmptyDirs() = default ;
      EmptyDirs(const EmptyDirs &) = default ;
      EmptyDirs(EmptyDirs &&) = default ;
      EmptyDirs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EmptyDirs() = default ;
      EmptyDirs& operator=(const EmptyDirs &) = default ;
      EmptyDirs& operator=(EmptyDirs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->name_ == nullptr && this->readOnly_ == nullptr && this->subPathExpr_ == nullptr; };
      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline EmptyDirs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EmptyDirs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // readOnly Field Functions 
      bool hasReadOnly() const { return this->readOnly_ != nullptr;};
      void deleteReadOnly() { this->readOnly_ = nullptr;};
      inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
      inline EmptyDirs& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      // subPathExpr Field Functions 
      bool hasSubPathExpr() const { return this->subPathExpr_ != nullptr;};
      void deleteSubPathExpr() { this->subPathExpr_ = nullptr;};
      inline string getSubPathExpr() const { DARABONBA_PTR_GET_DEFAULT(subPathExpr_, "") };
      inline EmptyDirs& setSubPathExpr(string subPathExpr) { DARABONBA_PTR_SET_VALUE(subPathExpr_, subPathExpr) };


    protected:
      shared_ptr<string> mountPath_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> readOnly_ {};
      shared_ptr<string> subPathExpr_ {};
    };

    class ConfigMountDescs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigMountDescs& obj) { 
        DARABONBA_PTR_TO_JSON(MountItems, mountItems_);
        DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigMountDescs& obj) { 
        DARABONBA_PTR_FROM_JSON(MountItems, mountItems_);
        DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ConfigMountDescs() = default ;
      ConfigMountDescs(const ConfigMountDescs &) = default ;
      ConfigMountDescs(ConfigMountDescs &&) = default ;
      ConfigMountDescs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigMountDescs() = default ;
      ConfigMountDescs& operator=(const ConfigMountDescs &) = default ;
      ConfigMountDescs& operator=(ConfigMountDescs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MountItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountItems& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, MountItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        MountItems() = default ;
        MountItems(const MountItems &) = default ;
        MountItems(MountItems &&) = default ;
        MountItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountItems() = default ;
        MountItems& operator=(const MountItems &) = default ;
        MountItems& operator=(MountItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->path_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline MountItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline MountItems& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> path_ {};
      };

      virtual bool empty() const override { return this->mountItems_ == nullptr
        && this->mountPath_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // mountItems Field Functions 
      bool hasMountItems() const { return this->mountItems_ != nullptr;};
      void deleteMountItems() { this->mountItems_ = nullptr;};
      inline const vector<ConfigMountDescs::MountItems> & getMountItems() const { DARABONBA_PTR_GET_CONST(mountItems_, vector<ConfigMountDescs::MountItems>) };
      inline vector<ConfigMountDescs::MountItems> getMountItems() { DARABONBA_PTR_GET(mountItems_, vector<ConfigMountDescs::MountItems>) };
      inline ConfigMountDescs& setMountItems(const vector<ConfigMountDescs::MountItems> & mountItems) { DARABONBA_PTR_SET_VALUE(mountItems_, mountItems) };
      inline ConfigMountDescs& setMountItems(vector<ConfigMountDescs::MountItems> && mountItems) { DARABONBA_PTR_SET_RVALUE(mountItems_, mountItems) };


      // mountPath Field Functions 
      bool hasMountPath() const { return this->mountPath_ != nullptr;};
      void deleteMountPath() { this->mountPath_ = nullptr;};
      inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
      inline ConfigMountDescs& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConfigMountDescs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ConfigMountDescs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<ConfigMountDescs::MountItems>> mountItems_ {};
      shared_ptr<string> mountPath_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->command_ == nullptr
        && this->commandArgs_ == nullptr && this->configMountDescs_ == nullptr && this->deployAcrossNodes_ == nullptr && this->deployAcrossZones_ == nullptr && this->emptyDirs_ == nullptr
        && this->enableAhas_ == nullptr && this->envFroms_ == nullptr && this->envs_ == nullptr && this->imageConfig_ == nullptr && this->isMultilingualApp_ == nullptr
        && this->javaStartUpConfig_ == nullptr && this->limitCpu_ == nullptr && this->limitMem_ == nullptr && this->liveness_ == nullptr && this->localVolumes_ == nullptr
        && this->nasId_ == nullptr && this->nasMountDescs_ == nullptr && this->nasStorageType_ == nullptr && this->packageConfig_ == nullptr && this->postStart_ == nullptr
        && this->preStop_ == nullptr && this->pvcMountDescs_ == nullptr && this->readiness_ == nullptr && this->replicas_ == nullptr && this->requestCpu_ == nullptr
        && this->requestMem_ == nullptr && this->runtimeClassName_ == nullptr && this->slsConfigs_ == nullptr && this->webContainerConfig_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline AppConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // commandArgs Field Functions 
    bool hasCommandArgs() const { return this->commandArgs_ != nullptr;};
    void deleteCommandArgs() { this->commandArgs_ = nullptr;};
    inline const vector<string> & getCommandArgs() const { DARABONBA_PTR_GET_CONST(commandArgs_, vector<string>) };
    inline vector<string> getCommandArgs() { DARABONBA_PTR_GET(commandArgs_, vector<string>) };
    inline AppConfig& setCommandArgs(const vector<string> & commandArgs) { DARABONBA_PTR_SET_VALUE(commandArgs_, commandArgs) };
    inline AppConfig& setCommandArgs(vector<string> && commandArgs) { DARABONBA_PTR_SET_RVALUE(commandArgs_, commandArgs) };


    // configMountDescs Field Functions 
    bool hasConfigMountDescs() const { return this->configMountDescs_ != nullptr;};
    void deleteConfigMountDescs() { this->configMountDescs_ = nullptr;};
    inline const vector<AppConfig::ConfigMountDescs> & getConfigMountDescs() const { DARABONBA_PTR_GET_CONST(configMountDescs_, vector<AppConfig::ConfigMountDescs>) };
    inline vector<AppConfig::ConfigMountDescs> getConfigMountDescs() { DARABONBA_PTR_GET(configMountDescs_, vector<AppConfig::ConfigMountDescs>) };
    inline AppConfig& setConfigMountDescs(const vector<AppConfig::ConfigMountDescs> & configMountDescs) { DARABONBA_PTR_SET_VALUE(configMountDescs_, configMountDescs) };
    inline AppConfig& setConfigMountDescs(vector<AppConfig::ConfigMountDescs> && configMountDescs) { DARABONBA_PTR_SET_RVALUE(configMountDescs_, configMountDescs) };


    // deployAcrossNodes Field Functions 
    bool hasDeployAcrossNodes() const { return this->deployAcrossNodes_ != nullptr;};
    void deleteDeployAcrossNodes() { this->deployAcrossNodes_ = nullptr;};
    inline bool getDeployAcrossNodes() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossNodes_, false) };
    inline AppConfig& setDeployAcrossNodes(bool deployAcrossNodes) { DARABONBA_PTR_SET_VALUE(deployAcrossNodes_, deployAcrossNodes) };


    // deployAcrossZones Field Functions 
    bool hasDeployAcrossZones() const { return this->deployAcrossZones_ != nullptr;};
    void deleteDeployAcrossZones() { this->deployAcrossZones_ = nullptr;};
    inline bool getDeployAcrossZones() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossZones_, false) };
    inline AppConfig& setDeployAcrossZones(bool deployAcrossZones) { DARABONBA_PTR_SET_VALUE(deployAcrossZones_, deployAcrossZones) };


    // emptyDirs Field Functions 
    bool hasEmptyDirs() const { return this->emptyDirs_ != nullptr;};
    void deleteEmptyDirs() { this->emptyDirs_ = nullptr;};
    inline const vector<AppConfig::EmptyDirs> & getEmptyDirs() const { DARABONBA_PTR_GET_CONST(emptyDirs_, vector<AppConfig::EmptyDirs>) };
    inline vector<AppConfig::EmptyDirs> getEmptyDirs() { DARABONBA_PTR_GET(emptyDirs_, vector<AppConfig::EmptyDirs>) };
    inline AppConfig& setEmptyDirs(const vector<AppConfig::EmptyDirs> & emptyDirs) { DARABONBA_PTR_SET_VALUE(emptyDirs_, emptyDirs) };
    inline AppConfig& setEmptyDirs(vector<AppConfig::EmptyDirs> && emptyDirs) { DARABONBA_PTR_SET_RVALUE(emptyDirs_, emptyDirs) };


    // enableAhas Field Functions 
    bool hasEnableAhas() const { return this->enableAhas_ != nullptr;};
    void deleteEnableAhas() { this->enableAhas_ = nullptr;};
    inline bool getEnableAhas() const { DARABONBA_PTR_GET_DEFAULT(enableAhas_, false) };
    inline AppConfig& setEnableAhas(bool enableAhas) { DARABONBA_PTR_SET_VALUE(enableAhas_, enableAhas) };


    // envFroms Field Functions 
    bool hasEnvFroms() const { return this->envFroms_ != nullptr;};
    void deleteEnvFroms() { this->envFroms_ = nullptr;};
    inline const vector<AppConfig::EnvFroms> & getEnvFroms() const { DARABONBA_PTR_GET_CONST(envFroms_, vector<AppConfig::EnvFroms>) };
    inline vector<AppConfig::EnvFroms> getEnvFroms() { DARABONBA_PTR_GET(envFroms_, vector<AppConfig::EnvFroms>) };
    inline AppConfig& setEnvFroms(const vector<AppConfig::EnvFroms> & envFroms) { DARABONBA_PTR_SET_VALUE(envFroms_, envFroms) };
    inline AppConfig& setEnvFroms(vector<AppConfig::EnvFroms> && envFroms) { DARABONBA_PTR_SET_RVALUE(envFroms_, envFroms) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const vector<AppConfig::Envs> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, vector<AppConfig::Envs>) };
    inline vector<AppConfig::Envs> getEnvs() { DARABONBA_PTR_GET(envs_, vector<AppConfig::Envs>) };
    inline AppConfig& setEnvs(const vector<AppConfig::Envs> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline AppConfig& setEnvs(vector<AppConfig::Envs> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // imageConfig Field Functions 
    bool hasImageConfig() const { return this->imageConfig_ != nullptr;};
    void deleteImageConfig() { this->imageConfig_ = nullptr;};
    inline const AppConfig::ImageConfig & getImageConfig() const { DARABONBA_PTR_GET_CONST(imageConfig_, AppConfig::ImageConfig) };
    inline AppConfig::ImageConfig getImageConfig() { DARABONBA_PTR_GET(imageConfig_, AppConfig::ImageConfig) };
    inline AppConfig& setImageConfig(const AppConfig::ImageConfig & imageConfig) { DARABONBA_PTR_SET_VALUE(imageConfig_, imageConfig) };
    inline AppConfig& setImageConfig(AppConfig::ImageConfig && imageConfig) { DARABONBA_PTR_SET_RVALUE(imageConfig_, imageConfig) };


    // isMultilingualApp Field Functions 
    bool hasIsMultilingualApp() const { return this->isMultilingualApp_ != nullptr;};
    void deleteIsMultilingualApp() { this->isMultilingualApp_ = nullptr;};
    inline bool getIsMultilingualApp() const { DARABONBA_PTR_GET_DEFAULT(isMultilingualApp_, false) };
    inline AppConfig& setIsMultilingualApp(bool isMultilingualApp) { DARABONBA_PTR_SET_VALUE(isMultilingualApp_, isMultilingualApp) };


    // javaStartUpConfig Field Functions 
    bool hasJavaStartUpConfig() const { return this->javaStartUpConfig_ != nullptr;};
    void deleteJavaStartUpConfig() { this->javaStartUpConfig_ = nullptr;};
    inline string getJavaStartUpConfig() const { DARABONBA_PTR_GET_DEFAULT(javaStartUpConfig_, "") };
    inline AppConfig& setJavaStartUpConfig(string javaStartUpConfig) { DARABONBA_PTR_SET_VALUE(javaStartUpConfig_, javaStartUpConfig) };


    // limitCpu Field Functions 
    bool hasLimitCpu() const { return this->limitCpu_ != nullptr;};
    void deleteLimitCpu() { this->limitCpu_ = nullptr;};
    inline string getLimitCpu() const { DARABONBA_PTR_GET_DEFAULT(limitCpu_, "") };
    inline AppConfig& setLimitCpu(string limitCpu) { DARABONBA_PTR_SET_VALUE(limitCpu_, limitCpu) };


    // limitMem Field Functions 
    bool hasLimitMem() const { return this->limitMem_ != nullptr;};
    void deleteLimitMem() { this->limitMem_ = nullptr;};
    inline string getLimitMem() const { DARABONBA_PTR_GET_DEFAULT(limitMem_, "") };
    inline AppConfig& setLimitMem(string limitMem) { DARABONBA_PTR_SET_VALUE(limitMem_, limitMem) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline AppConfig& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // localVolumes Field Functions 
    bool hasLocalVolumes() const { return this->localVolumes_ != nullptr;};
    void deleteLocalVolumes() { this->localVolumes_ = nullptr;};
    inline const vector<AppConfig::LocalVolumes> & getLocalVolumes() const { DARABONBA_PTR_GET_CONST(localVolumes_, vector<AppConfig::LocalVolumes>) };
    inline vector<AppConfig::LocalVolumes> getLocalVolumes() { DARABONBA_PTR_GET(localVolumes_, vector<AppConfig::LocalVolumes>) };
    inline AppConfig& setLocalVolumes(const vector<AppConfig::LocalVolumes> & localVolumes) { DARABONBA_PTR_SET_VALUE(localVolumes_, localVolumes) };
    inline AppConfig& setLocalVolumes(vector<AppConfig::LocalVolumes> && localVolumes) { DARABONBA_PTR_SET_RVALUE(localVolumes_, localVolumes) };


    // nasId Field Functions 
    bool hasNasId() const { return this->nasId_ != nullptr;};
    void deleteNasId() { this->nasId_ = nullptr;};
    inline string getNasId() const { DARABONBA_PTR_GET_DEFAULT(nasId_, "") };
    inline AppConfig& setNasId(string nasId) { DARABONBA_PTR_SET_VALUE(nasId_, nasId) };


    // nasMountDescs Field Functions 
    bool hasNasMountDescs() const { return this->nasMountDescs_ != nullptr;};
    void deleteNasMountDescs() { this->nasMountDescs_ = nullptr;};
    inline const vector<AppConfig::NasMountDescs> & getNasMountDescs() const { DARABONBA_PTR_GET_CONST(nasMountDescs_, vector<AppConfig::NasMountDescs>) };
    inline vector<AppConfig::NasMountDescs> getNasMountDescs() { DARABONBA_PTR_GET(nasMountDescs_, vector<AppConfig::NasMountDescs>) };
    inline AppConfig& setNasMountDescs(const vector<AppConfig::NasMountDescs> & nasMountDescs) { DARABONBA_PTR_SET_VALUE(nasMountDescs_, nasMountDescs) };
    inline AppConfig& setNasMountDescs(vector<AppConfig::NasMountDescs> && nasMountDescs) { DARABONBA_PTR_SET_RVALUE(nasMountDescs_, nasMountDescs) };


    // nasStorageType Field Functions 
    bool hasNasStorageType() const { return this->nasStorageType_ != nullptr;};
    void deleteNasStorageType() { this->nasStorageType_ = nullptr;};
    inline string getNasStorageType() const { DARABONBA_PTR_GET_DEFAULT(nasStorageType_, "") };
    inline AppConfig& setNasStorageType(string nasStorageType) { DARABONBA_PTR_SET_VALUE(nasStorageType_, nasStorageType) };


    // packageConfig Field Functions 
    bool hasPackageConfig() const { return this->packageConfig_ != nullptr;};
    void deletePackageConfig() { this->packageConfig_ = nullptr;};
    inline const AppConfig::PackageConfig & getPackageConfig() const { DARABONBA_PTR_GET_CONST(packageConfig_, AppConfig::PackageConfig) };
    inline AppConfig::PackageConfig getPackageConfig() { DARABONBA_PTR_GET(packageConfig_, AppConfig::PackageConfig) };
    inline AppConfig& setPackageConfig(const AppConfig::PackageConfig & packageConfig) { DARABONBA_PTR_SET_VALUE(packageConfig_, packageConfig) };
    inline AppConfig& setPackageConfig(AppConfig::PackageConfig && packageConfig) { DARABONBA_PTR_SET_RVALUE(packageConfig_, packageConfig) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string getPostStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline AppConfig& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string getPreStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline AppConfig& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // pvcMountDescs Field Functions 
    bool hasPvcMountDescs() const { return this->pvcMountDescs_ != nullptr;};
    void deletePvcMountDescs() { this->pvcMountDescs_ = nullptr;};
    inline const vector<AppConfig::PvcMountDescs> & getPvcMountDescs() const { DARABONBA_PTR_GET_CONST(pvcMountDescs_, vector<AppConfig::PvcMountDescs>) };
    inline vector<AppConfig::PvcMountDescs> getPvcMountDescs() { DARABONBA_PTR_GET(pvcMountDescs_, vector<AppConfig::PvcMountDescs>) };
    inline AppConfig& setPvcMountDescs(const vector<AppConfig::PvcMountDescs> & pvcMountDescs) { DARABONBA_PTR_SET_VALUE(pvcMountDescs_, pvcMountDescs) };
    inline AppConfig& setPvcMountDescs(vector<AppConfig::PvcMountDescs> && pvcMountDescs) { DARABONBA_PTR_SET_RVALUE(pvcMountDescs_, pvcMountDescs) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string getReadiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline AppConfig& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int64_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0L) };
    inline AppConfig& setReplicas(int64_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // requestCpu Field Functions 
    bool hasRequestCpu() const { return this->requestCpu_ != nullptr;};
    void deleteRequestCpu() { this->requestCpu_ = nullptr;};
    inline string getRequestCpu() const { DARABONBA_PTR_GET_DEFAULT(requestCpu_, "") };
    inline AppConfig& setRequestCpu(string requestCpu) { DARABONBA_PTR_SET_VALUE(requestCpu_, requestCpu) };


    // requestMem Field Functions 
    bool hasRequestMem() const { return this->requestMem_ != nullptr;};
    void deleteRequestMem() { this->requestMem_ = nullptr;};
    inline string getRequestMem() const { DARABONBA_PTR_GET_DEFAULT(requestMem_, "") };
    inline AppConfig& setRequestMem(string requestMem) { DARABONBA_PTR_SET_VALUE(requestMem_, requestMem) };


    // runtimeClassName Field Functions 
    bool hasRuntimeClassName() const { return this->runtimeClassName_ != nullptr;};
    void deleteRuntimeClassName() { this->runtimeClassName_ = nullptr;};
    inline string getRuntimeClassName() const { DARABONBA_PTR_GET_DEFAULT(runtimeClassName_, "") };
    inline AppConfig& setRuntimeClassName(string runtimeClassName) { DARABONBA_PTR_SET_VALUE(runtimeClassName_, runtimeClassName) };


    // slsConfigs Field Functions 
    bool hasSlsConfigs() const { return this->slsConfigs_ != nullptr;};
    void deleteSlsConfigs() { this->slsConfigs_ = nullptr;};
    inline const vector<AppConfig::SlsConfigs> & getSlsConfigs() const { DARABONBA_PTR_GET_CONST(slsConfigs_, vector<AppConfig::SlsConfigs>) };
    inline vector<AppConfig::SlsConfigs> getSlsConfigs() { DARABONBA_PTR_GET(slsConfigs_, vector<AppConfig::SlsConfigs>) };
    inline AppConfig& setSlsConfigs(const vector<AppConfig::SlsConfigs> & slsConfigs) { DARABONBA_PTR_SET_VALUE(slsConfigs_, slsConfigs) };
    inline AppConfig& setSlsConfigs(vector<AppConfig::SlsConfigs> && slsConfigs) { DARABONBA_PTR_SET_RVALUE(slsConfigs_, slsConfigs) };


    // webContainerConfig Field Functions 
    bool hasWebContainerConfig() const { return this->webContainerConfig_ != nullptr;};
    void deleteWebContainerConfig() { this->webContainerConfig_ = nullptr;};
    inline const AppConfig::WebContainerConfig & getWebContainerConfig() const { DARABONBA_PTR_GET_CONST(webContainerConfig_, AppConfig::WebContainerConfig) };
    inline AppConfig::WebContainerConfig getWebContainerConfig() { DARABONBA_PTR_GET(webContainerConfig_, AppConfig::WebContainerConfig) };
    inline AppConfig& setWebContainerConfig(const AppConfig::WebContainerConfig & webContainerConfig) { DARABONBA_PTR_SET_VALUE(webContainerConfig_, webContainerConfig) };
    inline AppConfig& setWebContainerConfig(AppConfig::WebContainerConfig && webContainerConfig) { DARABONBA_PTR_SET_RVALUE(webContainerConfig_, webContainerConfig) };


  protected:
    shared_ptr<string> command_ {};
    shared_ptr<vector<string>> commandArgs_ {};
    shared_ptr<vector<AppConfig::ConfigMountDescs>> configMountDescs_ {};
    shared_ptr<bool> deployAcrossNodes_ {};
    shared_ptr<bool> deployAcrossZones_ {};
    shared_ptr<vector<AppConfig::EmptyDirs>> emptyDirs_ {};
    shared_ptr<bool> enableAhas_ {};
    shared_ptr<vector<AppConfig::EnvFroms>> envFroms_ {};
    shared_ptr<vector<AppConfig::Envs>> envs_ {};
    shared_ptr<AppConfig::ImageConfig> imageConfig_ {};
    shared_ptr<bool> isMultilingualApp_ {};
    shared_ptr<string> javaStartUpConfig_ {};
    shared_ptr<string> limitCpu_ {};
    shared_ptr<string> limitMem_ {};
    shared_ptr<string> liveness_ {};
    shared_ptr<vector<AppConfig::LocalVolumes>> localVolumes_ {};
    shared_ptr<string> nasId_ {};
    shared_ptr<vector<AppConfig::NasMountDescs>> nasMountDescs_ {};
    shared_ptr<string> nasStorageType_ {};
    shared_ptr<AppConfig::PackageConfig> packageConfig_ {};
    shared_ptr<string> postStart_ {};
    shared_ptr<string> preStop_ {};
    shared_ptr<vector<AppConfig::PvcMountDescs>> pvcMountDescs_ {};
    shared_ptr<string> readiness_ {};
    shared_ptr<int64_t> replicas_ {};
    shared_ptr<string> requestCpu_ {};
    shared_ptr<string> requestMem_ {};
    shared_ptr<string> runtimeClassName_ {};
    shared_ptr<vector<AppConfig::SlsConfigs>> slsConfigs_ {};
    shared_ptr<AppConfig::WebContainerConfig> webContainerConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
