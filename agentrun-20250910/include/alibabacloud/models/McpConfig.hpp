// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BoundConfiguration.hpp>
#include <alibabacloud/models/McpProxyConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class McpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const McpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(boundConfiguration, boundConfiguration_);
      DARABONBA_PTR_TO_JSON(mcpProxyConfiguration, mcpProxyConfiguration_);
      DARABONBA_PTR_TO_JSON(proxyEnabled, proxyEnabled_);
      DARABONBA_PTR_TO_JSON(sessionAffinity, sessionAffinity_);
      DARABONBA_PTR_TO_JSON(sessionAffinityConfig, sessionAffinityConfig_);
    };
    friend void from_json(const Darabonba::Json& j, McpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(boundConfiguration, boundConfiguration_);
      DARABONBA_PTR_FROM_JSON(mcpProxyConfiguration, mcpProxyConfiguration_);
      DARABONBA_PTR_FROM_JSON(proxyEnabled, proxyEnabled_);
      DARABONBA_PTR_FROM_JSON(sessionAffinity, sessionAffinity_);
      DARABONBA_PTR_FROM_JSON(sessionAffinityConfig, sessionAffinityConfig_);
    };
    McpConfig() = default ;
    McpConfig(const McpConfig &) = default ;
    McpConfig(McpConfig &&) = default ;
    McpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~McpConfig() = default ;
    McpConfig& operator=(const McpConfig &) = default ;
    McpConfig& operator=(McpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boundConfiguration_ == nullptr
        && this->mcpProxyConfiguration_ == nullptr && this->proxyEnabled_ == nullptr && this->sessionAffinity_ == nullptr && this->sessionAffinityConfig_ == nullptr; };
    // boundConfiguration Field Functions 
    bool hasBoundConfiguration() const { return this->boundConfiguration_ != nullptr;};
    void deleteBoundConfiguration() { this->boundConfiguration_ = nullptr;};
    inline const BoundConfiguration & getBoundConfiguration() const { DARABONBA_PTR_GET_CONST(boundConfiguration_, BoundConfiguration) };
    inline BoundConfiguration getBoundConfiguration() { DARABONBA_PTR_GET(boundConfiguration_, BoundConfiguration) };
    inline McpConfig& setBoundConfiguration(const BoundConfiguration & boundConfiguration) { DARABONBA_PTR_SET_VALUE(boundConfiguration_, boundConfiguration) };
    inline McpConfig& setBoundConfiguration(BoundConfiguration && boundConfiguration) { DARABONBA_PTR_SET_RVALUE(boundConfiguration_, boundConfiguration) };


    // mcpProxyConfiguration Field Functions 
    bool hasMcpProxyConfiguration() const { return this->mcpProxyConfiguration_ != nullptr;};
    void deleteMcpProxyConfiguration() { this->mcpProxyConfiguration_ = nullptr;};
    inline const McpProxyConfiguration & getMcpProxyConfiguration() const { DARABONBA_PTR_GET_CONST(mcpProxyConfiguration_, McpProxyConfiguration) };
    inline McpProxyConfiguration getMcpProxyConfiguration() { DARABONBA_PTR_GET(mcpProxyConfiguration_, McpProxyConfiguration) };
    inline McpConfig& setMcpProxyConfiguration(const McpProxyConfiguration & mcpProxyConfiguration) { DARABONBA_PTR_SET_VALUE(mcpProxyConfiguration_, mcpProxyConfiguration) };
    inline McpConfig& setMcpProxyConfiguration(McpProxyConfiguration && mcpProxyConfiguration) { DARABONBA_PTR_SET_RVALUE(mcpProxyConfiguration_, mcpProxyConfiguration) };


    // proxyEnabled Field Functions 
    bool hasProxyEnabled() const { return this->proxyEnabled_ != nullptr;};
    void deleteProxyEnabled() { this->proxyEnabled_ = nullptr;};
    inline bool getProxyEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyEnabled_, false) };
    inline McpConfig& setProxyEnabled(bool proxyEnabled) { DARABONBA_PTR_SET_VALUE(proxyEnabled_, proxyEnabled) };


    // sessionAffinity Field Functions 
    bool hasSessionAffinity() const { return this->sessionAffinity_ != nullptr;};
    void deleteSessionAffinity() { this->sessionAffinity_ = nullptr;};
    inline string getSessionAffinity() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinity_, "") };
    inline McpConfig& setSessionAffinity(string sessionAffinity) { DARABONBA_PTR_SET_VALUE(sessionAffinity_, sessionAffinity) };


    // sessionAffinityConfig Field Functions 
    bool hasSessionAffinityConfig() const { return this->sessionAffinityConfig_ != nullptr;};
    void deleteSessionAffinityConfig() { this->sessionAffinityConfig_ = nullptr;};
    inline string getSessionAffinityConfig() const { DARABONBA_PTR_GET_DEFAULT(sessionAffinityConfig_, "") };
    inline McpConfig& setSessionAffinityConfig(string sessionAffinityConfig) { DARABONBA_PTR_SET_VALUE(sessionAffinityConfig_, sessionAffinityConfig) };


  protected:
    // 工具的绑定配置，定义工具与 HTTP 路径和方法的映射关系
    shared_ptr<BoundConfiguration> boundConfiguration_ {};
    // MCP 代理的详细配置，包括钩子函数等，用于在 MCP 请求处理过程中执行自定义逻辑
    shared_ptr<McpProxyConfiguration> mcpProxyConfiguration_ {};
    // 是否启用 MCP 代理功能，启用后可以通过代理配置对 MCP 请求进行拦截和处理
    shared_ptr<bool> proxyEnabled_ {};
    // 会话亲和性策略，用于控制请求的路由方式。NONE：无亲和性，MCP_SSE：基于 SSE 的会话亲和性，MCP_STREAMABLE：基于流式 HTTP 的会话亲和性
    shared_ptr<string> sessionAffinity_ {};
    // 会话亲和性的详细配置信息，JSON 格式字符串，包含会话保持的具体参数
    shared_ptr<string> sessionAffinityConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
