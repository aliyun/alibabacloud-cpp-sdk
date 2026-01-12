// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPBACKENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPBACKENDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MCPServiceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class MCPBackendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPBackendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, MCPBackendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    MCPBackendConfig() = default ;
    MCPBackendConfig(const MCPBackendConfig &) = default ;
    MCPBackendConfig(MCPBackendConfig &&) = default ;
    MCPBackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPBackendConfig() = default ;
    MCPBackendConfig& operator=(const MCPBackendConfig &) = default ;
    MCPBackendConfig& operator=(MCPBackendConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scene_ == nullptr
        && this->services_ == nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline MCPBackendConfig& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<MCPServiceConfig> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<MCPServiceConfig>) };
    inline vector<MCPServiceConfig> getServices() { DARABONBA_PTR_GET(services_, vector<MCPServiceConfig>) };
    inline MCPBackendConfig& setServices(const vector<MCPServiceConfig> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline MCPBackendConfig& setServices(vector<MCPServiceConfig> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    shared_ptr<string> scene_ {};
    shared_ptr<vector<MCPServiceConfig>> services_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
