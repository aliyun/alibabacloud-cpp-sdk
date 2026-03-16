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
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(returnAgentCredentialContent, returnAgentCredentialContent_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoveryEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(agentEndpointConfigs, agentEndpointConfigs_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(returnAgentCredentialContent, returnAgentCredentialContent_);
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
        && this->credentialName_ == nullptr && this->name_ == nullptr && this->returnAgentCredentialContent_ == nullptr; };
    // agentEndpointConfigs Field Functions 
    bool hasAgentEndpointConfigs() const { return this->agentEndpointConfigs_ != nullptr;};
    void deleteAgentEndpointConfigs() { this->agentEndpointConfigs_ = nullptr;};
    inline const vector<AgentEndpointConfig> & getAgentEndpointConfigs() const { DARABONBA_PTR_GET_CONST(agentEndpointConfigs_, vector<AgentEndpointConfig>) };
    inline vector<AgentEndpointConfig> getAgentEndpointConfigs() { DARABONBA_PTR_GET(agentEndpointConfigs_, vector<AgentEndpointConfig>) };
    inline DiscoveryEndpoint& setAgentEndpointConfigs(const vector<AgentEndpointConfig> & agentEndpointConfigs) { DARABONBA_PTR_SET_VALUE(agentEndpointConfigs_, agentEndpointConfigs) };
    inline DiscoveryEndpoint& setAgentEndpointConfigs(vector<AgentEndpointConfig> && agentEndpointConfigs) { DARABONBA_PTR_SET_RVALUE(agentEndpointConfigs_, agentEndpointConfigs) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline DiscoveryEndpoint& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DiscoveryEndpoint& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // returnAgentCredentialContent Field Functions 
    bool hasReturnAgentCredentialContent() const { return this->returnAgentCredentialContent_ != nullptr;};
    void deleteReturnAgentCredentialContent() { this->returnAgentCredentialContent_ = nullptr;};
    inline bool getReturnAgentCredentialContent() const { DARABONBA_PTR_GET_DEFAULT(returnAgentCredentialContent_, false) };
    inline DiscoveryEndpoint& setReturnAgentCredentialContent(bool returnAgentCredentialContent) { DARABONBA_PTR_SET_VALUE(returnAgentCredentialContent_, returnAgentCredentialContent) };


  protected:
    shared_ptr<vector<AgentEndpointConfig>> agentEndpointConfigs_ {};
    // 该发现端点使用的凭证名称
    shared_ptr<string> credentialName_ {};
    shared_ptr<string> name_ {};
    // 是否在发现结果中返回 agent 的凭证内容
    shared_ptr<bool> returnAgentCredentialContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
