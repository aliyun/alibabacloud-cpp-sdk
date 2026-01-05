// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCMCPSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCMCPSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class SyncMCPServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncMCPServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(nacosMcpServers, nacosMcpServers_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncMCPServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(nacosMcpServers, nacosMcpServers_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
    };
    SyncMCPServersRequest() = default ;
    SyncMCPServersRequest(const SyncMCPServersRequest &) = default ;
    SyncMCPServersRequest(SyncMCPServersRequest &&) = default ;
    SyncMCPServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncMCPServersRequest() = default ;
    SyncMCPServersRequest& operator=(const SyncMCPServersRequest &) = default ;
    SyncMCPServersRequest& operator=(SyncMCPServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NacosMcpServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NacosMcpServers& obj) { 
        DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
        DARABONBA_PTR_TO_JSON(protocols, protocols_);
      };
      friend void from_json(const Darabonba::Json& j, NacosMcpServers& obj) { 
        DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
        DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
        DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      };
      NacosMcpServers() = default ;
      NacosMcpServers(const NacosMcpServers &) = default ;
      NacosMcpServers(NacosMcpServers &&) = default ;
      NacosMcpServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NacosMcpServers() = default ;
      NacosMcpServers& operator=(const NacosMcpServers &) = default ;
      NacosMcpServers& operator=(NacosMcpServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exposedUriPath_ == nullptr
        && this->instanceId_ == nullptr && this->mcpServerId_ == nullptr && this->mcpServerName_ == nullptr && this->protocols_ == nullptr; };
      // exposedUriPath Field Functions 
      bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
      void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
      inline string getExposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
      inline NacosMcpServers& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NacosMcpServers& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // mcpServerId Field Functions 
      bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
      void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
      inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
      inline NacosMcpServers& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


      // mcpServerName Field Functions 
      bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
      void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
      inline string getMcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
      inline NacosMcpServers& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


      // protocols Field Functions 
      bool hasProtocols() const { return this->protocols_ != nullptr;};
      void deleteProtocols() { this->protocols_ = nullptr;};
      inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
      inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
      inline NacosMcpServers& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
      inline NacosMcpServers& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    protected:
      // The exposed URI path. This parameter is required when the protocol parameter is set to SSE or StreamableHTTP and the type parameter is set to RealMCP.
      shared_ptr<string> exposedUriPath_ {};
      // The Nacos instance ID.
      shared_ptr<string> instanceId_ {};
      // The MCP server ID.
      shared_ptr<string> mcpServerId_ {};
      // The name of the MCP server.
      shared_ptr<string> mcpServerName_ {};
      // The protocol.
      shared_ptr<vector<string>> protocols_ {};
    };

    virtual bool empty() const override { return this->domainIds_ == nullptr
        && this->gatewayId_ == nullptr && this->nacosMcpServers_ == nullptr && this->namespace_ == nullptr && this->sourceId_ == nullptr; };
    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & getDomainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> getDomainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline SyncMCPServersRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline SyncMCPServersRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline SyncMCPServersRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // nacosMcpServers Field Functions 
    bool hasNacosMcpServers() const { return this->nacosMcpServers_ != nullptr;};
    void deleteNacosMcpServers() { this->nacosMcpServers_ = nullptr;};
    inline const vector<SyncMCPServersRequest::NacosMcpServers> & getNacosMcpServers() const { DARABONBA_PTR_GET_CONST(nacosMcpServers_, vector<SyncMCPServersRequest::NacosMcpServers>) };
    inline vector<SyncMCPServersRequest::NacosMcpServers> getNacosMcpServers() { DARABONBA_PTR_GET(nacosMcpServers_, vector<SyncMCPServersRequest::NacosMcpServers>) };
    inline SyncMCPServersRequest& setNacosMcpServers(const vector<SyncMCPServersRequest::NacosMcpServers> & nacosMcpServers) { DARABONBA_PTR_SET_VALUE(nacosMcpServers_, nacosMcpServers) };
    inline SyncMCPServersRequest& setNacosMcpServers(vector<SyncMCPServersRequest::NacosMcpServers> && nacosMcpServers) { DARABONBA_PTR_SET_RVALUE(nacosMcpServers_, nacosMcpServers) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SyncMCPServersRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline SyncMCPServersRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    // The domain ID.
    shared_ptr<vector<string>> domainIds_ {};
    // The ID of the gateway.
    shared_ptr<string> gatewayId_ {};
    // The synchronized Nacos MCP server list. If the synchronized MCP server is included, add the mcpServerId parameter.
    shared_ptr<vector<SyncMCPServersRequest::NacosMcpServers>> nacosMcpServers_ {};
    // The Nacos namespace.
    shared_ptr<string> namespace_ {};
    // The source ID.
    shared_ptr<string> sourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
