// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPAPI_HPP_
#define ALIBABACLOUD_MODELS_MCPAPI_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MCPBackendConfig.hpp>
#include <alibabacloud/models/MCPMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class MCPAPI : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPAPI& obj) { 
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(toolId, toolId_);
      DARABONBA_PTR_TO_JSON(toolsConfig, toolsConfig_);
    };
    friend void from_json(const Darabonba::Json& j, MCPAPI& obj) { 
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(exposedUriPath, exposedUriPath_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpStatisticsEnable, mcpStatisticsEnable_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(toolId, toolId_);
      DARABONBA_PTR_FROM_JSON(toolsConfig, toolsConfig_);
    };
    MCPAPI() = default ;
    MCPAPI(const MCPAPI &) = default ;
    MCPAPI(MCPAPI &&) = default ;
    MCPAPI(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPAPI() = default ;
    MCPAPI& operator=(const MCPAPI &) = default ;
    MCPAPI& operator=(MCPAPI &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendConfig_ == nullptr
        && return this->description_ == nullptr && return this->exposedUriPath_ == nullptr && return this->match_ == nullptr && return this->mcpStatisticsEnable_ == nullptr && return this->protocol_ == nullptr
        && return this->toolId_ == nullptr && return this->toolsConfig_ == nullptr; };
    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const MCPBackendConfig & backendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, MCPBackendConfig) };
    inline MCPBackendConfig backendConfig() { DARABONBA_PTR_GET(backendConfig_, MCPBackendConfig) };
    inline MCPAPI& setBackendConfig(const MCPBackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline MCPAPI& setBackendConfig(MCPBackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MCPAPI& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exposedUriPath Field Functions 
    bool hasExposedUriPath() const { return this->exposedUriPath_ != nullptr;};
    void deleteExposedUriPath() { this->exposedUriPath_ = nullptr;};
    inline string exposedUriPath() const { DARABONBA_PTR_GET_DEFAULT(exposedUriPath_, "") };
    inline MCPAPI& setExposedUriPath(string exposedUriPath) { DARABONBA_PTR_SET_VALUE(exposedUriPath_, exposedUriPath) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const MCPMatch & match() const { DARABONBA_PTR_GET_CONST(match_, MCPMatch) };
    inline MCPMatch match() { DARABONBA_PTR_GET(match_, MCPMatch) };
    inline MCPAPI& setMatch(const MCPMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline MCPAPI& setMatch(MCPMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpStatisticsEnable Field Functions 
    bool hasMcpStatisticsEnable() const { return this->mcpStatisticsEnable_ != nullptr;};
    void deleteMcpStatisticsEnable() { this->mcpStatisticsEnable_ = nullptr;};
    inline bool mcpStatisticsEnable() const { DARABONBA_PTR_GET_DEFAULT(mcpStatisticsEnable_, false) };
    inline MCPAPI& setMcpStatisticsEnable(bool mcpStatisticsEnable) { DARABONBA_PTR_SET_VALUE(mcpStatisticsEnable_, mcpStatisticsEnable) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline MCPAPI& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline MCPAPI& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


    // toolsConfig Field Functions 
    bool hasToolsConfig() const { return this->toolsConfig_ != nullptr;};
    void deleteToolsConfig() { this->toolsConfig_ = nullptr;};
    inline string toolsConfig() const { DARABONBA_PTR_GET_DEFAULT(toolsConfig_, "") };
    inline MCPAPI& setToolsConfig(string toolsConfig) { DARABONBA_PTR_SET_VALUE(toolsConfig_, toolsConfig) };


  protected:
    std::shared_ptr<MCPBackendConfig> backendConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> exposedUriPath_ = nullptr;
    std::shared_ptr<MCPMatch> match_ = nullptr;
    std::shared_ptr<bool> mcpStatisticsEnable_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> toolId_ = nullptr;
    std::shared_ptr<string> toolsConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
