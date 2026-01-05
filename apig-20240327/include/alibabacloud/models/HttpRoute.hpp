// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPROUTE_HPP_
#define ALIBABACLOUD_MODELS_HTTPROUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Backend.hpp>
#include <map>
#include <alibabacloud/models/HttpRouteMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRoute& obj) { 
      DARABONBA_PTR_TO_JSON(backend, backend_);
      DARABONBA_PTR_TO_JSON(builtin, builtin_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainInfos, domainInfos_);
      DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_TO_JSON(gatewayStatus, gatewayStatus_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpServerInfo, mcpServerInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(backend, backend_);
      DARABONBA_PTR_FROM_JSON(builtin, builtin_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainInfos, domainInfos_);
      DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_FROM_JSON(gatewayStatus, gatewayStatus_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpServerInfo, mcpServerInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    HttpRoute() = default ;
    HttpRoute(const HttpRoute &) = default ;
    HttpRoute(HttpRoute &&) = default ;
    HttpRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRoute() = default ;
    HttpRoute& operator=(const HttpRoute &) = default ;
    HttpRoute& operator=(HttpRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class McpServerInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpServerInfo& obj) { 
        DARABONBA_PTR_TO_JSON(createFromType, createFromType_);
        DARABONBA_PTR_TO_JSON(importInstanceId, importInstanceId_);
        DARABONBA_PTR_TO_JSON(importMcpServerId, importMcpServerId_);
        DARABONBA_PTR_TO_JSON(importNamespace, importNamespace_);
        DARABONBA_PTR_TO_JSON(mcpRouteConfig, mcpRouteConfig_);
        DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
      };
      friend void from_json(const Darabonba::Json& j, McpServerInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(createFromType, createFromType_);
        DARABONBA_PTR_FROM_JSON(importInstanceId, importInstanceId_);
        DARABONBA_PTR_FROM_JSON(importMcpServerId, importMcpServerId_);
        DARABONBA_PTR_FROM_JSON(importNamespace, importNamespace_);
        DARABONBA_PTR_FROM_JSON(mcpRouteConfig, mcpRouteConfig_);
        DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
      };
      McpServerInfo() = default ;
      McpServerInfo(const McpServerInfo &) = default ;
      McpServerInfo(McpServerInfo &&) = default ;
      McpServerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpServerInfo() = default ;
      McpServerInfo& operator=(const McpServerInfo &) = default ;
      McpServerInfo& operator=(McpServerInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class McpRouteConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const McpRouteConfig& obj) { 
          DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, McpRouteConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        };
        McpRouteConfig() = default ;
        McpRouteConfig(const McpRouteConfig &) = default ;
        McpRouteConfig(McpRouteConfig &&) = default ;
        McpRouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~McpRouteConfig() = default ;
        McpRouteConfig& operator=(const McpRouteConfig &) = default ;
        McpRouteConfig& operator=(McpRouteConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->exposedUriPath_ == nullptr
        && this->protocol_ == nullptr; };
        // exposedUriPath Field Functions 
        bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
        void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
        inline string getExposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
        inline McpRouteConfig& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline McpRouteConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        shared_ptr<string> exposedUriPath_ {};
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->createFromType_ == nullptr
        && this->importInstanceId_ == nullptr && this->importMcpServerId_ == nullptr && this->importNamespace_ == nullptr && this->mcpRouteConfig_ == nullptr && this->mcpServerConfig_ == nullptr; };
      // createFromType Field Functions 
      bool hasCreateFromType() const { return this->createFromType_ != nullptr;};
      void deleteCreateFromType() { this->createFromType_ = nullptr;};
      inline string getCreateFromType() const { DARABONBA_PTR_GET_DEFAULT(createFromType_, "") };
      inline McpServerInfo& setCreateFromType(string createFromType) { DARABONBA_PTR_SET_VALUE(createFromType_, createFromType) };


      // importInstanceId Field Functions 
      bool hasImportInstanceId() const { return this->importInstanceId_ != nullptr;};
      void deleteImportInstanceId() { this->importInstanceId_ = nullptr;};
      inline string getImportInstanceId() const { DARABONBA_PTR_GET_DEFAULT(importInstanceId_, "") };
      inline McpServerInfo& setImportInstanceId(string importInstanceId) { DARABONBA_PTR_SET_VALUE(importInstanceId_, importInstanceId) };


      // importMcpServerId Field Functions 
      bool hasImportMcpServerId() const { return this->importMcpServerId_ != nullptr;};
      void deleteImportMcpServerId() { this->importMcpServerId_ = nullptr;};
      inline string getImportMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(importMcpServerId_, "") };
      inline McpServerInfo& setImportMcpServerId(string importMcpServerId) { DARABONBA_PTR_SET_VALUE(importMcpServerId_, importMcpServerId) };


      // importNamespace Field Functions 
      bool hasImportNamespace() const { return this->importNamespace_ != nullptr;};
      void deleteImportNamespace() { this->importNamespace_ = nullptr;};
      inline string getImportNamespace() const { DARABONBA_PTR_GET_DEFAULT(importNamespace_, "") };
      inline McpServerInfo& setImportNamespace(string importNamespace) { DARABONBA_PTR_SET_VALUE(importNamespace_, importNamespace) };


      // mcpRouteConfig Field Functions 
      bool hasMcpRouteConfig() const { return this->mcpRouteConfig_ != nullptr;};
      void deleteMcpRouteConfig() { this->mcpRouteConfig_ = nullptr;};
      inline const McpServerInfo::McpRouteConfig & getMcpRouteConfig() const { DARABONBA_PTR_GET_CONST(mcpRouteConfig_, McpServerInfo::McpRouteConfig) };
      inline McpServerInfo::McpRouteConfig getMcpRouteConfig() { DARABONBA_PTR_GET(mcpRouteConfig_, McpServerInfo::McpRouteConfig) };
      inline McpServerInfo& setMcpRouteConfig(const McpServerInfo::McpRouteConfig & mcpRouteConfig) { DARABONBA_PTR_SET_VALUE(mcpRouteConfig_, mcpRouteConfig) };
      inline McpServerInfo& setMcpRouteConfig(McpServerInfo::McpRouteConfig && mcpRouteConfig) { DARABONBA_PTR_SET_RVALUE(mcpRouteConfig_, mcpRouteConfig) };


      // mcpServerConfig Field Functions 
      bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
      void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
      inline string getMcpServerConfig() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfig_, "") };
      inline McpServerInfo& setMcpServerConfig(string mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };


    protected:
      shared_ptr<string> createFromType_ {};
      shared_ptr<string> importInstanceId_ {};
      shared_ptr<string> importMcpServerId_ {};
      shared_ptr<string> importNamespace_ {};
      shared_ptr<McpServerInfo::McpRouteConfig> mcpRouteConfig_ {};
      shared_ptr<string> mcpServerConfig_ {};
    };

    class EnvironmentInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnvironmentInfo& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
      };
      friend void from_json(const Darabonba::Json& j, EnvironmentInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
      };
      EnvironmentInfo() = default ;
      EnvironmentInfo(const EnvironmentInfo &) = default ;
      EnvironmentInfo(EnvironmentInfo &&) = default ;
      EnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnvironmentInfo() = default ;
      EnvironmentInfo& operator=(const EnvironmentInfo &) = default ;
      EnvironmentInfo& operator=(EnvironmentInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubDomains : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubDomains& obj) { 
          DARABONBA_PTR_TO_JSON(domainId, domainId_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(networkType, networkType_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, SubDomains& obj) { 
          DARABONBA_PTR_FROM_JSON(domainId, domainId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(networkType, networkType_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        };
        SubDomains() = default ;
        SubDomains(const SubDomains &) = default ;
        SubDomains(SubDomains &&) = default ;
        SubDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubDomains() = default ;
        SubDomains& operator=(const SubDomains &) = default ;
        SubDomains& operator=(SubDomains &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainId_ == nullptr
        && this->name_ == nullptr && this->networkType_ == nullptr && this->protocol_ == nullptr; };
        // domainId Field Functions 
        bool hasDomainId() const { return this->domainId_ != nullptr;};
        void deleteDomainId() { this->domainId_ = nullptr;};
        inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
        inline SubDomains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SubDomains& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SubDomains& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline SubDomains& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        shared_ptr<string> domainId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> protocol_ {};
      };

      class GatewayInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GatewayInfo& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, GatewayInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        GatewayInfo() = default ;
        GatewayInfo(const GatewayInfo &) = default ;
        GatewayInfo(GatewayInfo &&) = default ;
        GatewayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GatewayInfo() = default ;
        GatewayInfo& operator=(const GatewayInfo &) = default ;
        GatewayInfo& operator=(GatewayInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->name_ == nullptr; };
        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline GatewayInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline GatewayInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> gatewayId_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr
        && this->environmentId_ == nullptr && this->gatewayInfo_ == nullptr && this->name_ == nullptr && this->subDomains_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline EnvironmentInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline EnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // gatewayInfo Field Functions 
      bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
      void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
      inline const EnvironmentInfo::GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, EnvironmentInfo::GatewayInfo) };
      inline EnvironmentInfo::GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, EnvironmentInfo::GatewayInfo) };
      inline EnvironmentInfo& setGatewayInfo(const EnvironmentInfo::GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
      inline EnvironmentInfo& setGatewayInfo(EnvironmentInfo::GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EnvironmentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // subDomains Field Functions 
      bool hasSubDomains() const { return this->subDomains_ != nullptr;};
      void deleteSubDomains() { this->subDomains_ = nullptr;};
      inline const vector<EnvironmentInfo::SubDomains> & getSubDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<EnvironmentInfo::SubDomains>) };
      inline vector<EnvironmentInfo::SubDomains> getSubDomains() { DARABONBA_PTR_GET(subDomains_, vector<EnvironmentInfo::SubDomains>) };
      inline EnvironmentInfo& setSubDomains(const vector<EnvironmentInfo::SubDomains> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
      inline EnvironmentInfo& setSubDomains(vector<EnvironmentInfo::SubDomains> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<string> environmentId_ {};
      shared_ptr<EnvironmentInfo::GatewayInfo> gatewayInfo_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<EnvironmentInfo::SubDomains>> subDomains_ {};
    };

    class DomainInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainInfos& obj) { 
        DARABONBA_PTR_TO_JSON(domainId, domainId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, DomainInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(domainId, domainId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      DomainInfos() = default ;
      DomainInfos(const DomainInfos &) = default ;
      DomainInfos(DomainInfos &&) = default ;
      DomainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainInfos() = default ;
      DomainInfos& operator=(const DomainInfos &) = default ;
      DomainInfos& operator=(DomainInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainId_ == nullptr
        && this->name_ == nullptr && this->protocol_ == nullptr; };
      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline DomainInfos& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DomainInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline DomainInfos& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      shared_ptr<string> domainId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->backend_ == nullptr
        && this->builtin_ == nullptr && this->createTimestamp_ == nullptr && this->deployStatus_ == nullptr && this->description_ == nullptr && this->domainInfos_ == nullptr
        && this->environmentInfo_ == nullptr && this->gatewayStatus_ == nullptr && this->match_ == nullptr && this->mcpServerInfo_ == nullptr && this->name_ == nullptr
        && this->routeId_ == nullptr && this->updateTimestamp_ == nullptr; };
    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline const Backend & getBackend() const { DARABONBA_PTR_GET_CONST(backend_, Backend) };
    inline Backend getBackend() { DARABONBA_PTR_GET(backend_, Backend) };
    inline HttpRoute& setBackend(const Backend & backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };
    inline HttpRoute& setBackend(Backend && backend) { DARABONBA_PTR_SET_RVALUE(backend_, backend) };


    // builtin Field Functions 
    bool hasBuiltin() const { return this->builtin_ != nullptr;};
    void deleteBuiltin() { this->builtin_ = nullptr;};
    inline string getBuiltin() const { DARABONBA_PTR_GET_DEFAULT(builtin_, "") };
    inline HttpRoute& setBuiltin(string builtin) { DARABONBA_PTR_SET_VALUE(builtin_, builtin) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline HttpRoute& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline HttpRoute& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HttpRoute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainInfos Field Functions 
    bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
    void deleteDomainInfos() { this->domainInfos_ = nullptr;};
    inline const vector<HttpRoute::DomainInfos> & getDomainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, vector<HttpRoute::DomainInfos>) };
    inline vector<HttpRoute::DomainInfos> getDomainInfos() { DARABONBA_PTR_GET(domainInfos_, vector<HttpRoute::DomainInfos>) };
    inline HttpRoute& setDomainInfos(const vector<HttpRoute::DomainInfos> & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
    inline HttpRoute& setDomainInfos(vector<HttpRoute::DomainInfos> && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


    // environmentInfo Field Functions 
    bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
    void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
    inline const HttpRoute::EnvironmentInfo & getEnvironmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, HttpRoute::EnvironmentInfo) };
    inline HttpRoute::EnvironmentInfo getEnvironmentInfo() { DARABONBA_PTR_GET(environmentInfo_, HttpRoute::EnvironmentInfo) };
    inline HttpRoute& setEnvironmentInfo(const HttpRoute::EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
    inline HttpRoute& setEnvironmentInfo(HttpRoute::EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


    // gatewayStatus Field Functions 
    bool hasGatewayStatus() const { return this->gatewayStatus_ != nullptr;};
    void deleteGatewayStatus() { this->gatewayStatus_ = nullptr;};
    inline const map<string, string> & getGatewayStatus() const { DARABONBA_PTR_GET_CONST(gatewayStatus_, map<string, string>) };
    inline map<string, string> getGatewayStatus() { DARABONBA_PTR_GET(gatewayStatus_, map<string, string>) };
    inline HttpRoute& setGatewayStatus(const map<string, string> & gatewayStatus) { DARABONBA_PTR_SET_VALUE(gatewayStatus_, gatewayStatus) };
    inline HttpRoute& setGatewayStatus(map<string, string> && gatewayStatus) { DARABONBA_PTR_SET_RVALUE(gatewayStatus_, gatewayStatus) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch getMatch() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline HttpRoute& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline HttpRoute& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpServerInfo Field Functions 
    bool hasMcpServerInfo() const { return this->mcpServerInfo_ != nullptr;};
    void deleteMcpServerInfo() { this->mcpServerInfo_ = nullptr;};
    inline const HttpRoute::McpServerInfo & getMcpServerInfo() const { DARABONBA_PTR_GET_CONST(mcpServerInfo_, HttpRoute::McpServerInfo) };
    inline HttpRoute::McpServerInfo getMcpServerInfo() { DARABONBA_PTR_GET(mcpServerInfo_, HttpRoute::McpServerInfo) };
    inline HttpRoute& setMcpServerInfo(const HttpRoute::McpServerInfo & mcpServerInfo) { DARABONBA_PTR_SET_VALUE(mcpServerInfo_, mcpServerInfo) };
    inline HttpRoute& setMcpServerInfo(HttpRoute::McpServerInfo && mcpServerInfo) { DARABONBA_PTR_SET_RVALUE(mcpServerInfo_, mcpServerInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpRoute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline HttpRoute& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline HttpRoute& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    shared_ptr<Backend> backend_ {};
    shared_ptr<string> builtin_ {};
    shared_ptr<int64_t> createTimestamp_ {};
    shared_ptr<string> deployStatus_ {};
    shared_ptr<string> description_ {};
    shared_ptr<vector<HttpRoute::DomainInfos>> domainInfos_ {};
    shared_ptr<HttpRoute::EnvironmentInfo> environmentInfo_ {};
    shared_ptr<map<string, string>> gatewayStatus_ {};
    shared_ptr<HttpRouteMatch> match_ {};
    shared_ptr<HttpRoute::McpServerInfo> mcpServerInfo_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> routeId_ {};
    shared_ptr<int64_t> updateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
