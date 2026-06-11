// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETAGENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETAGENTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HiMarketHttpRoute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketAgentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketAgentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(agentAPIConfig, agentAPIConfig_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketAgentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(agentAPIConfig, agentAPIConfig_);
    };
    HiMarketAgentConfig() = default ;
    HiMarketAgentConfig(const HiMarketAgentConfig &) = default ;
    HiMarketAgentConfig(HiMarketAgentConfig &&) = default ;
    HiMarketAgentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketAgentConfig() = default ;
    HiMarketAgentConfig& operator=(const HiMarketAgentConfig &) = default ;
    HiMarketAgentConfig& operator=(HiMarketAgentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgentAPIConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentAPIConfig& obj) { 
        DARABONBA_PTR_TO_JSON(agentProtocols, agentProtocols_);
        DARABONBA_PTR_TO_JSON(routes, routes_);
      };
      friend void from_json(const Darabonba::Json& j, AgentAPIConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(agentProtocols, agentProtocols_);
        DARABONBA_PTR_FROM_JSON(routes, routes_);
      };
      AgentAPIConfig() = default ;
      AgentAPIConfig(const AgentAPIConfig &) = default ;
      AgentAPIConfig(AgentAPIConfig &&) = default ;
      AgentAPIConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentAPIConfig() = default ;
      AgentAPIConfig& operator=(const AgentAPIConfig &) = default ;
      AgentAPIConfig& operator=(AgentAPIConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentProtocols_ == nullptr
        && this->routes_ == nullptr; };
      // agentProtocols Field Functions 
      bool hasAgentProtocols() const { return this->agentProtocols_ != nullptr;};
      void deleteAgentProtocols() { this->agentProtocols_ = nullptr;};
      inline const vector<string> & getAgentProtocols() const { DARABONBA_PTR_GET_CONST(agentProtocols_, vector<string>) };
      inline vector<string> getAgentProtocols() { DARABONBA_PTR_GET(agentProtocols_, vector<string>) };
      inline AgentAPIConfig& setAgentProtocols(const vector<string> & agentProtocols) { DARABONBA_PTR_SET_VALUE(agentProtocols_, agentProtocols) };
      inline AgentAPIConfig& setAgentProtocols(vector<string> && agentProtocols) { DARABONBA_PTR_SET_RVALUE(agentProtocols_, agentProtocols) };


      // routes Field Functions 
      bool hasRoutes() const { return this->routes_ != nullptr;};
      void deleteRoutes() { this->routes_ = nullptr;};
      inline const vector<HiMarketHttpRoute> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<HiMarketHttpRoute>) };
      inline vector<HiMarketHttpRoute> getRoutes() { DARABONBA_PTR_GET(routes_, vector<HiMarketHttpRoute>) };
      inline AgentAPIConfig& setRoutes(const vector<HiMarketHttpRoute> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
      inline AgentAPIConfig& setRoutes(vector<HiMarketHttpRoute> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    protected:
      // The communication protocols supported by the agent.
      shared_ptr<vector<string>> agentProtocols_ {};
      // The routing rules for incoming requests.
      shared_ptr<vector<HiMarketHttpRoute>> routes_ {};
    };

    virtual bool empty() const override { return this->agentAPIConfig_ == nullptr; };
    // agentAPIConfig Field Functions 
    bool hasAgentAPIConfig() const { return this->agentAPIConfig_ != nullptr;};
    void deleteAgentAPIConfig() { this->agentAPIConfig_ = nullptr;};
    inline const HiMarketAgentConfig::AgentAPIConfig & getAgentAPIConfig() const { DARABONBA_PTR_GET_CONST(agentAPIConfig_, HiMarketAgentConfig::AgentAPIConfig) };
    inline HiMarketAgentConfig::AgentAPIConfig getAgentAPIConfig() { DARABONBA_PTR_GET(agentAPIConfig_, HiMarketAgentConfig::AgentAPIConfig) };
    inline HiMarketAgentConfig& setAgentAPIConfig(const HiMarketAgentConfig::AgentAPIConfig & agentAPIConfig) { DARABONBA_PTR_SET_VALUE(agentAPIConfig_, agentAPIConfig) };
    inline HiMarketAgentConfig& setAgentAPIConfig(HiMarketAgentConfig::AgentAPIConfig && agentAPIConfig) { DARABONBA_PTR_SET_RVALUE(agentAPIConfig_, agentAPIConfig) };


  protected:
    // Contains the API configuration for the agent.
    shared_ptr<HiMarketAgentConfig::AgentAPIConfig> agentAPIConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
