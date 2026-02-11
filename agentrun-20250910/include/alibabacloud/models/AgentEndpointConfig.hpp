// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTENDPOINTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTENDPOINTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class AgentEndpointConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentEndpointConfig& obj) { 
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(customDomainUrl, customDomainUrl_);
      DARABONBA_PTR_TO_JSON(endpointUrl, endpointUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AgentEndpointConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(customDomainUrl, customDomainUrl_);
      DARABONBA_PTR_FROM_JSON(endpointUrl, endpointUrl_);
    };
    AgentEndpointConfig() = default ;
    AgentEndpointConfig(const AgentEndpointConfig &) = default ;
    AgentEndpointConfig(AgentEndpointConfig &&) = default ;
    AgentEndpointConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentEndpointConfig() = default ;
    AgentEndpointConfig& operator=(const AgentEndpointConfig &) = default ;
    AgentEndpointConfig& operator=(AgentEndpointConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->customDomainUrl_ == nullptr && this->endpointUrl_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline AgentEndpointConfig& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // customDomainUrl Field Functions 
    bool hasCustomDomainUrl() const { return this->customDomainUrl_ != nullptr;};
    void deleteCustomDomainUrl() { this->customDomainUrl_ = nullptr;};
    inline string getCustomDomainUrl() const { DARABONBA_PTR_GET_DEFAULT(customDomainUrl_, "") };
    inline AgentEndpointConfig& setCustomDomainUrl(string customDomainUrl) { DARABONBA_PTR_SET_VALUE(customDomainUrl_, customDomainUrl) };


    // endpointUrl Field Functions 
    bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
    void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
    inline string getEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
    inline AgentEndpointConfig& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


  protected:
    shared_ptr<string> agentName_ {};
    shared_ptr<string> customDomainUrl_ {};
    shared_ptr<string> endpointUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
