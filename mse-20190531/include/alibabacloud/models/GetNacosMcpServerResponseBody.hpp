// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataToolSpecToolsMetaValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNacosMcpServerResponseBody() = default ;
    GetNacosMcpServerResponseBody(const GetNacosMcpServerResponseBody &) = default ;
    GetNacosMcpServerResponseBody(GetNacosMcpServerResponseBody &&) = default ;
    GetNacosMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBody() = default ;
    GetNacosMcpServerResponseBody& operator=(const GetNacosMcpServerResponseBody &) = default ;
    GetNacosMcpServerResponseBody& operator=(GetNacosMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllVersions, allVersions_);
        DARABONBA_PTR_TO_JSON(BackendEndpoints, backendEndpoints_);
        DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(FrontProtocol, frontProtocol_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_ANY_TO_JSON(LocalServerConfig, localServerConfig_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RemoteServerConfig, remoteServerConfig_);
        DARABONBA_PTR_TO_JSON(ToolSpec, toolSpec_);
        DARABONBA_PTR_TO_JSON(VersionDetail, versionDetail_);
        DARABONBA_PTR_TO_JSON(YamlConfig, yamlConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllVersions, allVersions_);
        DARABONBA_PTR_FROM_JSON(BackendEndpoints, backendEndpoints_);
        DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(FrontProtocol, frontProtocol_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_ANY_FROM_JSON(LocalServerConfig, localServerConfig_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RemoteServerConfig, remoteServerConfig_);
        DARABONBA_PTR_FROM_JSON(ToolSpec, toolSpec_);
        DARABONBA_PTR_FROM_JSON(VersionDetail, versionDetail_);
        DARABONBA_PTR_FROM_JSON(YamlConfig, yamlConfig_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VersionDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionDetail& obj) { 
          DARABONBA_PTR_TO_JSON(IsLatest, isLatest_);
          DARABONBA_PTR_TO_JSON(ReleaseDate, releaseDate_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, VersionDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(IsLatest, isLatest_);
          DARABONBA_PTR_FROM_JSON(ReleaseDate, releaseDate_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        VersionDetail() = default ;
        VersionDetail(const VersionDetail &) = default ;
        VersionDetail(VersionDetail &&) = default ;
        VersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionDetail() = default ;
        VersionDetail& operator=(const VersionDetail &) = default ;
        VersionDetail& operator=(VersionDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isLatest_ == nullptr
        && this->releaseDate_ == nullptr && this->version_ == nullptr; };
        // isLatest Field Functions 
        bool hasIsLatest() const { return this->isLatest_ != nullptr;};
        void deleteIsLatest() { this->isLatest_ = nullptr;};
        inline bool getIsLatest() const { DARABONBA_PTR_GET_DEFAULT(isLatest_, false) };
        inline VersionDetail& setIsLatest(bool isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


        // releaseDate Field Functions 
        bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
        void deleteReleaseDate() { this->releaseDate_ = nullptr;};
        inline string getReleaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
        inline VersionDetail& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline VersionDetail& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<bool> isLatest_ {};
        shared_ptr<string> releaseDate_ {};
        shared_ptr<string> version_ {};
      };

      class ToolSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ToolSpec& obj) { 
          DARABONBA_ANY_TO_JSON(SecuritySchemes, securitySchemes_);
          DARABONBA_PTR_TO_JSON(SpecificationType, specificationType_);
          DARABONBA_PTR_TO_JSON(ToolDecryptStatus, toolDecryptStatus_);
          DARABONBA_PTR_TO_JSON(Tools, tools_);
          DARABONBA_PTR_TO_JSON(ToolsMeta, toolsMeta_);
        };
        friend void from_json(const Darabonba::Json& j, ToolSpec& obj) { 
          DARABONBA_ANY_FROM_JSON(SecuritySchemes, securitySchemes_);
          DARABONBA_PTR_FROM_JSON(SpecificationType, specificationType_);
          DARABONBA_PTR_FROM_JSON(ToolDecryptStatus, toolDecryptStatus_);
          DARABONBA_PTR_FROM_JSON(Tools, tools_);
          DARABONBA_PTR_FROM_JSON(ToolsMeta, toolsMeta_);
        };
        ToolSpec() = default ;
        ToolSpec(const ToolSpec &) = default ;
        ToolSpec(ToolSpec &&) = default ;
        ToolSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ToolSpec() = default ;
        ToolSpec& operator=(const ToolSpec &) = default ;
        ToolSpec& operator=(ToolSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tools : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tools& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_ANY_TO_JSON(InputSchema, inputSchema_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Tools& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_ANY_FROM_JSON(InputSchema, inputSchema_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Tools() = default ;
          Tools(const Tools &) = default ;
          Tools(Tools &&) = default ;
          Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tools() = default ;
          Tools& operator=(const Tools &) = default ;
          Tools& operator=(Tools &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->inputSchema_ == nullptr && this->name_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Tools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // inputSchema Field Functions 
          bool hasInputSchema() const { return this->inputSchema_ != nullptr;};
          void deleteInputSchema() { this->inputSchema_ = nullptr;};
          inline           const Darabonba::Json & getInputSchema() const { DARABONBA_GET(inputSchema_) };
          Darabonba::Json & getInputSchema() { DARABONBA_GET(inputSchema_) };
          inline Tools& setInputSchema(const Darabonba::Json & inputSchema) { DARABONBA_SET_VALUE(inputSchema_, inputSchema) };
          inline Tools& setInputSchema(Darabonba::Json && inputSchema) { DARABONBA_SET_RVALUE(inputSchema_, inputSchema) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Tools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> description_ {};
          Darabonba::Json inputSchema_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->securitySchemes_ == nullptr
        && this->specificationType_ == nullptr && this->toolDecryptStatus_ == nullptr && this->tools_ == nullptr && this->toolsMeta_ == nullptr; };
        // securitySchemes Field Functions 
        bool hasSecuritySchemes() const { return this->securitySchemes_ != nullptr;};
        void deleteSecuritySchemes() { this->securitySchemes_ = nullptr;};
        inline         const Darabonba::Json & getSecuritySchemes() const { DARABONBA_GET(securitySchemes_) };
        Darabonba::Json & getSecuritySchemes() { DARABONBA_GET(securitySchemes_) };
        inline ToolSpec& setSecuritySchemes(const Darabonba::Json & securitySchemes) { DARABONBA_SET_VALUE(securitySchemes_, securitySchemes) };
        inline ToolSpec& setSecuritySchemes(Darabonba::Json && securitySchemes) { DARABONBA_SET_RVALUE(securitySchemes_, securitySchemes) };


        // specificationType Field Functions 
        bool hasSpecificationType() const { return this->specificationType_ != nullptr;};
        void deleteSpecificationType() { this->specificationType_ = nullptr;};
        inline string getSpecificationType() const { DARABONBA_PTR_GET_DEFAULT(specificationType_, "") };
        inline ToolSpec& setSpecificationType(string specificationType) { DARABONBA_PTR_SET_VALUE(specificationType_, specificationType) };


        // toolDecryptStatus Field Functions 
        bool hasToolDecryptStatus() const { return this->toolDecryptStatus_ != nullptr;};
        void deleteToolDecryptStatus() { this->toolDecryptStatus_ = nullptr;};
        inline string getToolDecryptStatus() const { DARABONBA_PTR_GET_DEFAULT(toolDecryptStatus_, "") };
        inline ToolSpec& setToolDecryptStatus(string toolDecryptStatus) { DARABONBA_PTR_SET_VALUE(toolDecryptStatus_, toolDecryptStatus) };


        // tools Field Functions 
        bool hasTools() const { return this->tools_ != nullptr;};
        void deleteTools() { this->tools_ = nullptr;};
        inline const vector<ToolSpec::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<ToolSpec::Tools>) };
        inline vector<ToolSpec::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<ToolSpec::Tools>) };
        inline ToolSpec& setTools(const vector<ToolSpec::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
        inline ToolSpec& setTools(vector<ToolSpec::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


        // toolsMeta Field Functions 
        bool hasToolsMeta() const { return this->toolsMeta_ != nullptr;};
        void deleteToolsMeta() { this->toolsMeta_ = nullptr;};
        inline const map<string, DataToolSpecToolsMetaValue> & getToolsMeta() const { DARABONBA_PTR_GET_CONST(toolsMeta_, map<string, DataToolSpecToolsMetaValue>) };
        inline map<string, DataToolSpecToolsMetaValue> getToolsMeta() { DARABONBA_PTR_GET(toolsMeta_, map<string, DataToolSpecToolsMetaValue>) };
        inline ToolSpec& setToolsMeta(const map<string, DataToolSpecToolsMetaValue> & toolsMeta) { DARABONBA_PTR_SET_VALUE(toolsMeta_, toolsMeta) };
        inline ToolSpec& setToolsMeta(map<string, DataToolSpecToolsMetaValue> && toolsMeta) { DARABONBA_PTR_SET_RVALUE(toolsMeta_, toolsMeta) };


      protected:
        Darabonba::Json securitySchemes_ {};
        shared_ptr<string> specificationType_ {};
        shared_ptr<string> toolDecryptStatus_ {};
        shared_ptr<vector<ToolSpec::Tools>> tools_ {};
        shared_ptr<map<string, DataToolSpecToolsMetaValue>> toolsMeta_ {};
      };

      class RemoteServerConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemoteServerConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExportPath, exportPath_);
          DARABONBA_PTR_TO_JSON(ServiceRef, serviceRef_);
        };
        friend void from_json(const Darabonba::Json& j, RemoteServerConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExportPath, exportPath_);
          DARABONBA_PTR_FROM_JSON(ServiceRef, serviceRef_);
        };
        RemoteServerConfig() = default ;
        RemoteServerConfig(const RemoteServerConfig &) = default ;
        RemoteServerConfig(RemoteServerConfig &&) = default ;
        RemoteServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemoteServerConfig() = default ;
        RemoteServerConfig& operator=(const RemoteServerConfig &) = default ;
        RemoteServerConfig& operator=(RemoteServerConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceRef : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceRef& obj) { 
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
            DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceRef& obj) { 
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
            DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          };
          ServiceRef() = default ;
          ServiceRef(const ServiceRef &) = default ;
          ServiceRef(ServiceRef &&) = default ;
          ServiceRef(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceRef() = default ;
          ServiceRef& operator=(const ServiceRef &) = default ;
          ServiceRef& operator=(ServiceRef &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->groupName_ == nullptr
        && this->namespaceId_ == nullptr && this->serviceName_ == nullptr; };
          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline ServiceRef& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // namespaceId Field Functions 
          bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
          void deleteNamespaceId() { this->namespaceId_ = nullptr;};
          inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
          inline ServiceRef& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline ServiceRef& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        protected:
          shared_ptr<string> groupName_ {};
          shared_ptr<string> namespaceId_ {};
          shared_ptr<string> serviceName_ {};
        };

        virtual bool empty() const override { return this->exportPath_ == nullptr
        && this->serviceRef_ == nullptr; };
        // exportPath Field Functions 
        bool hasExportPath() const { return this->exportPath_ != nullptr;};
        void deleteExportPath() { this->exportPath_ = nullptr;};
        inline string getExportPath() const { DARABONBA_PTR_GET_DEFAULT(exportPath_, "") };
        inline RemoteServerConfig& setExportPath(string exportPath) { DARABONBA_PTR_SET_VALUE(exportPath_, exportPath) };


        // serviceRef Field Functions 
        bool hasServiceRef() const { return this->serviceRef_ != nullptr;};
        void deleteServiceRef() { this->serviceRef_ = nullptr;};
        inline const RemoteServerConfig::ServiceRef & getServiceRef() const { DARABONBA_PTR_GET_CONST(serviceRef_, RemoteServerConfig::ServiceRef) };
        inline RemoteServerConfig::ServiceRef getServiceRef() { DARABONBA_PTR_GET(serviceRef_, RemoteServerConfig::ServiceRef) };
        inline RemoteServerConfig& setServiceRef(const RemoteServerConfig::ServiceRef & serviceRef) { DARABONBA_PTR_SET_VALUE(serviceRef_, serviceRef) };
        inline RemoteServerConfig& setServiceRef(RemoteServerConfig::ServiceRef && serviceRef) { DARABONBA_PTR_SET_RVALUE(serviceRef_, serviceRef) };


      protected:
        shared_ptr<string> exportPath_ {};
        shared_ptr<RemoteServerConfig::ServiceRef> serviceRef_ {};
      };

      class BackendEndpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendEndpoints& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, BackendEndpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        BackendEndpoints() = default ;
        BackendEndpoints(const BackendEndpoints &) = default ;
        BackendEndpoints(BackendEndpoints &&) = default ;
        BackendEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendEndpoints() = default ;
        BackendEndpoints& operator=(const BackendEndpoints &) = default ;
        BackendEndpoints& operator=(BackendEndpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->path_ == nullptr && this->port_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline BackendEndpoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline BackendEndpoints& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline BackendEndpoints& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> path_ {};
        shared_ptr<int32_t> port_ {};
      };

      class AllVersions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllVersions& obj) { 
          DARABONBA_PTR_TO_JSON(Is_latest, isLatest_);
          DARABONBA_PTR_TO_JSON(Release_date, releaseDate_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, AllVersions& obj) { 
          DARABONBA_PTR_FROM_JSON(Is_latest, isLatest_);
          DARABONBA_PTR_FROM_JSON(Release_date, releaseDate_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        AllVersions() = default ;
        AllVersions(const AllVersions &) = default ;
        AllVersions(AllVersions &&) = default ;
        AllVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllVersions() = default ;
        AllVersions& operator=(const AllVersions &) = default ;
        AllVersions& operator=(AllVersions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isLatest_ == nullptr
        && this->releaseDate_ == nullptr && this->version_ == nullptr; };
        // isLatest Field Functions 
        bool hasIsLatest() const { return this->isLatest_ != nullptr;};
        void deleteIsLatest() { this->isLatest_ = nullptr;};
        inline bool getIsLatest() const { DARABONBA_PTR_GET_DEFAULT(isLatest_, false) };
        inline AllVersions& setIsLatest(bool isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


        // releaseDate Field Functions 
        bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
        void deleteReleaseDate() { this->releaseDate_ = nullptr;};
        inline string getReleaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
        inline AllVersions& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline AllVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<bool> isLatest_ {};
        shared_ptr<string> releaseDate_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->allVersions_ == nullptr
        && this->backendEndpoints_ == nullptr && this->capabilities_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->frontProtocol_ == nullptr
        && this->id_ == nullptr && this->localServerConfig_ == nullptr && this->name_ == nullptr && this->protocol_ == nullptr && this->remoteServerConfig_ == nullptr
        && this->toolSpec_ == nullptr && this->versionDetail_ == nullptr && this->yamlConfig_ == nullptr; };
      // allVersions Field Functions 
      bool hasAllVersions() const { return this->allVersions_ != nullptr;};
      void deleteAllVersions() { this->allVersions_ = nullptr;};
      inline const vector<Data::AllVersions> & getAllVersions() const { DARABONBA_PTR_GET_CONST(allVersions_, vector<Data::AllVersions>) };
      inline vector<Data::AllVersions> getAllVersions() { DARABONBA_PTR_GET(allVersions_, vector<Data::AllVersions>) };
      inline Data& setAllVersions(const vector<Data::AllVersions> & allVersions) { DARABONBA_PTR_SET_VALUE(allVersions_, allVersions) };
      inline Data& setAllVersions(vector<Data::AllVersions> && allVersions) { DARABONBA_PTR_SET_RVALUE(allVersions_, allVersions) };


      // backendEndpoints Field Functions 
      bool hasBackendEndpoints() const { return this->backendEndpoints_ != nullptr;};
      void deleteBackendEndpoints() { this->backendEndpoints_ = nullptr;};
      inline const vector<Data::BackendEndpoints> & getBackendEndpoints() const { DARABONBA_PTR_GET_CONST(backendEndpoints_, vector<Data::BackendEndpoints>) };
      inline vector<Data::BackendEndpoints> getBackendEndpoints() { DARABONBA_PTR_GET(backendEndpoints_, vector<Data::BackendEndpoints>) };
      inline Data& setBackendEndpoints(const vector<Data::BackendEndpoints> & backendEndpoints) { DARABONBA_PTR_SET_VALUE(backendEndpoints_, backendEndpoints) };
      inline Data& setBackendEndpoints(vector<Data::BackendEndpoints> && backendEndpoints) { DARABONBA_PTR_SET_RVALUE(backendEndpoints_, backendEndpoints) };


      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
      inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
      inline Data& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Data& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // frontProtocol Field Functions 
      bool hasFrontProtocol() const { return this->frontProtocol_ != nullptr;};
      void deleteFrontProtocol() { this->frontProtocol_ = nullptr;};
      inline string getFrontProtocol() const { DARABONBA_PTR_GET_DEFAULT(frontProtocol_, "") };
      inline Data& setFrontProtocol(string frontProtocol) { DARABONBA_PTR_SET_VALUE(frontProtocol_, frontProtocol) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // localServerConfig Field Functions 
      bool hasLocalServerConfig() const { return this->localServerConfig_ != nullptr;};
      void deleteLocalServerConfig() { this->localServerConfig_ = nullptr;};
      inline       const Darabonba::Json & getLocalServerConfig() const { DARABONBA_GET(localServerConfig_) };
      Darabonba::Json & getLocalServerConfig() { DARABONBA_GET(localServerConfig_) };
      inline Data& setLocalServerConfig(const Darabonba::Json & localServerConfig) { DARABONBA_SET_VALUE(localServerConfig_, localServerConfig) };
      inline Data& setLocalServerConfig(Darabonba::Json && localServerConfig) { DARABONBA_SET_RVALUE(localServerConfig_, localServerConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // remoteServerConfig Field Functions 
      bool hasRemoteServerConfig() const { return this->remoteServerConfig_ != nullptr;};
      void deleteRemoteServerConfig() { this->remoteServerConfig_ = nullptr;};
      inline const Data::RemoteServerConfig & getRemoteServerConfig() const { DARABONBA_PTR_GET_CONST(remoteServerConfig_, Data::RemoteServerConfig) };
      inline Data::RemoteServerConfig getRemoteServerConfig() { DARABONBA_PTR_GET(remoteServerConfig_, Data::RemoteServerConfig) };
      inline Data& setRemoteServerConfig(const Data::RemoteServerConfig & remoteServerConfig) { DARABONBA_PTR_SET_VALUE(remoteServerConfig_, remoteServerConfig) };
      inline Data& setRemoteServerConfig(Data::RemoteServerConfig && remoteServerConfig) { DARABONBA_PTR_SET_RVALUE(remoteServerConfig_, remoteServerConfig) };


      // toolSpec Field Functions 
      bool hasToolSpec() const { return this->toolSpec_ != nullptr;};
      void deleteToolSpec() { this->toolSpec_ = nullptr;};
      inline const Data::ToolSpec & getToolSpec() const { DARABONBA_PTR_GET_CONST(toolSpec_, Data::ToolSpec) };
      inline Data::ToolSpec getToolSpec() { DARABONBA_PTR_GET(toolSpec_, Data::ToolSpec) };
      inline Data& setToolSpec(const Data::ToolSpec & toolSpec) { DARABONBA_PTR_SET_VALUE(toolSpec_, toolSpec) };
      inline Data& setToolSpec(Data::ToolSpec && toolSpec) { DARABONBA_PTR_SET_RVALUE(toolSpec_, toolSpec) };


      // versionDetail Field Functions 
      bool hasVersionDetail() const { return this->versionDetail_ != nullptr;};
      void deleteVersionDetail() { this->versionDetail_ = nullptr;};
      inline const Data::VersionDetail & getVersionDetail() const { DARABONBA_PTR_GET_CONST(versionDetail_, Data::VersionDetail) };
      inline Data::VersionDetail getVersionDetail() { DARABONBA_PTR_GET(versionDetail_, Data::VersionDetail) };
      inline Data& setVersionDetail(const Data::VersionDetail & versionDetail) { DARABONBA_PTR_SET_VALUE(versionDetail_, versionDetail) };
      inline Data& setVersionDetail(Data::VersionDetail && versionDetail) { DARABONBA_PTR_SET_RVALUE(versionDetail_, versionDetail) };


      // yamlConfig Field Functions 
      bool hasYamlConfig() const { return this->yamlConfig_ != nullptr;};
      void deleteYamlConfig() { this->yamlConfig_ = nullptr;};
      inline string getYamlConfig() const { DARABONBA_PTR_GET_DEFAULT(yamlConfig_, "") };
      inline Data& setYamlConfig(string yamlConfig) { DARABONBA_PTR_SET_VALUE(yamlConfig_, yamlConfig) };


    protected:
      shared_ptr<vector<Data::AllVersions>> allVersions_ {};
      shared_ptr<vector<Data::BackendEndpoints>> backendEndpoints_ {};
      shared_ptr<vector<string>> capabilities_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> frontProtocol_ {};
      // ID。
      shared_ptr<string> id_ {};
      Darabonba::Json localServerConfig_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<Data::RemoteServerConfig> remoteServerConfig_ {};
      shared_ptr<Data::ToolSpec> toolSpec_ {};
      shared_ptr<Data::VersionDetail> versionDetail_ {};
      shared_ptr<string> yamlConfig_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNacosMcpServerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNacosMcpServerResponseBody::Data) };
    inline GetNacosMcpServerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNacosMcpServerResponseBody::Data) };
    inline GetNacosMcpServerResponseBody& setData(const GetNacosMcpServerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNacosMcpServerResponseBody& setData(GetNacosMcpServerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNacosMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetNacosMcpServerResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
