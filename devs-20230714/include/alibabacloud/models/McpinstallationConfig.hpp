// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPINSTALLATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPINSTALLATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class MCPInstallationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPInstallationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(mcpServers, mcpServers_);
    };
    friend void from_json(const Darabonba::Json& j, MCPInstallationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(mcpServers, mcpServers_);
    };
    MCPInstallationConfig() = default ;
    MCPInstallationConfig(const MCPInstallationConfig &) = default ;
    MCPInstallationConfig(MCPInstallationConfig &&) = default ;
    MCPInstallationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPInstallationConfig() = default ;
    MCPInstallationConfig& operator=(const MCPInstallationConfig &) = default ;
    MCPInstallationConfig& operator=(MCPInstallationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mcpServers_ != nullptr; };
    // mcpServers Field Functions 
    bool hasMcpServers() const { return this->mcpServers_ != nullptr;};
    void deleteMcpServers() { this->mcpServers_ = nullptr;};
    inline const MCPServerInstallationConfig & mcpServers() const { DARABONBA_PTR_GET_CONST(mcpServers_, MCPServerInstallationConfig) };
    inline MCPServerInstallationConfig mcpServers() { DARABONBA_PTR_GET(mcpServers_, MCPServerInstallationConfig) };
    inline MCPInstallationConfig& setMcpServers(const MCPServerInstallationConfig & mcpServers) { DARABONBA_PTR_SET_VALUE(mcpServers_, mcpServers) };
    inline MCPInstallationConfig& setMcpServers(MCPServerInstallationConfig && mcpServers) { DARABONBA_PTR_SET_RVALUE(mcpServers_, mcpServers) };


  protected:
    std::shared_ptr<MCPServerInstallationConfig> mcpServers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
