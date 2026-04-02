// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPPROXYCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_MCPPROXYCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Hook.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class McpProxyConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const McpProxyConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(hooks, hooks_);
    };
    friend void from_json(const Darabonba::Json& j, McpProxyConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(hooks, hooks_);
    };
    McpProxyConfiguration() = default ;
    McpProxyConfiguration(const McpProxyConfiguration &) = default ;
    McpProxyConfiguration(McpProxyConfiguration &&) = default ;
    McpProxyConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~McpProxyConfiguration() = default ;
    McpProxyConfiguration& operator=(const McpProxyConfiguration &) = default ;
    McpProxyConfiguration& operator=(McpProxyConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hooks_ == nullptr; };
    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<Hook> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Hook>) };
    inline vector<Hook> getHooks() { DARABONBA_PTR_GET(hooks_, vector<Hook>) };
    inline McpProxyConfiguration& setHooks(const vector<Hook> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline McpProxyConfiguration& setHooks(vector<Hook> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


  protected:
    // MCP 代理的钩子函数配置列表，每个钩子可以在请求处理的不同阶段执行自定义逻辑
    shared_ptr<vector<Hook>> hooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
