// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVERYENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DISCOVERYENDPOINT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgentEndpointConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class DiscoveryEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoveryEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(agentEndpointConfigs, agentEndpointConfigs_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoveryEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(agentEndpointConfigs, agentEndpointConfigs_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DiscoveryEndpoint() = default ;
    DiscoveryEndpoint(const DiscoveryEndpoint &) = default ;
    DiscoveryEndpoint(DiscoveryEndpoint &&) = default ;
    DiscoveryEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoveryEndpoint() = default ;
    DiscoveryEndpoint& operator=(const DiscoveryEndpoint &) = default ;
    DiscoveryEndpoint& operator=(DiscoveryEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentEndpointConfigs_ == nullptr
        && this->name_ == nullptr; };
    // agentEndpointConfigs Field Functions 
    bool hasAgentEndpointConfigs() const { return this->agentEndpointConfigs_ != nullptr;};
    void deleteAgentEndpointConfigs() { this->agentEndpointConfigs_ = nullptr;};
    inline const vector<AgentEndpointConfig> & getAgentEndpointConfigs() const { DARABONBA_PTR_GET_CONST(agentEndpointConfigs_, vector<AgentEndpointConfig>) };
    inline vector<AgentEndpointConfig> getAgentEndpointConfigs() { DARABONBA_PTR_GET(agentEndpointConfigs_, vector<AgentEndpointConfig>) };
    inline DiscoveryEndpoint& setAgentEndpointConfigs(const vector<AgentEndpointConfig> & agentEndpointConfigs) { DARABONBA_PTR_SET_VALUE(agentEndpointConfigs_, agentEndpointConfigs) };
    inline DiscoveryEndpoint& setAgentEndpointConfigs(vector<AgentEndpointConfig> && agentEndpointConfigs) { DARABONBA_PTR_SET_RVALUE(agentEndpointConfigs_, agentEndpointConfigs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DiscoveryEndpoint& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<vector<AgentEndpointConfig>> agentEndpointConfigs_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
