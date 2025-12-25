// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCMCPSERVERSREQUESTNACOSMCPSERVERS_HPP_
#define ALIBABACLOUD_MODELS_SYNCMCPSERVERSREQUESTNACOSMCPSERVERS_HPP_
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
  class SyncMCPServersRequestNacosMcpServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncMCPServersRequestNacosMcpServers& obj) { 
      DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(mcpServerId, mcpServerId_);
      DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
    };
    friend void from_json(const Darabonba::Json& j, SyncMCPServersRequestNacosMcpServers& obj) { 
      DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(mcpServerId, mcpServerId_);
      DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
    };
    SyncMCPServersRequestNacosMcpServers() = default ;
    SyncMCPServersRequestNacosMcpServers(const SyncMCPServersRequestNacosMcpServers &) = default ;
    SyncMCPServersRequestNacosMcpServers(SyncMCPServersRequestNacosMcpServers &&) = default ;
    SyncMCPServersRequestNacosMcpServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncMCPServersRequestNacosMcpServers() = default ;
    SyncMCPServersRequestNacosMcpServers& operator=(const SyncMCPServersRequestNacosMcpServers &) = default ;
    SyncMCPServersRequestNacosMcpServers& operator=(SyncMCPServersRequestNacosMcpServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exposedUriPath_ == nullptr
        && return this->instanceId_ == nullptr && return this->mcpServerId_ == nullptr && return this->mcpServerName_ == nullptr && return this->protocols_ == nullptr; };
    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string exposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline SyncMCPServersRequestNacosMcpServers& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SyncMCPServersRequestNacosMcpServers& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mcpServerId Field Functions 
    bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
    void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
    inline string mcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
    inline SyncMCPServersRequestNacosMcpServers& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


    // mcpServerName Field Functions 
    bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
    void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
    inline string mcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
    inline SyncMCPServersRequestNacosMcpServers& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> protocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline SyncMCPServersRequestNacosMcpServers& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline SyncMCPServersRequestNacosMcpServers& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


  protected:
    std::shared_ptr<string> exposedUriPath_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    // MCP Server ID
    std::shared_ptr<string> mcpServerId_ = nullptr;
    std::shared_ptr<string> mcpServerName_ = nullptr;
    std::shared_ptr<vector<string>> protocols_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
