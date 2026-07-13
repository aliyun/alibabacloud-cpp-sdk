// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATIAGENTREGISTERINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEATIAGENTREGISTERINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreateAtiAgentRegisterInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAtiAgentRegisterInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_TO_JSON(AgentDisplayName, agentDisplayName_);
      DARABONBA_PTR_TO_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpointsShrink_);
      DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAtiAgentRegisterInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_FROM_JSON(AgentDisplayName, agentDisplayName_);
      DARABONBA_PTR_FROM_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpointsShrink_);
      DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
    };
    CreateAtiAgentRegisterInfoShrinkRequest() = default ;
    CreateAtiAgentRegisterInfoShrinkRequest(const CreateAtiAgentRegisterInfoShrinkRequest &) = default ;
    CreateAtiAgentRegisterInfoShrinkRequest(CreateAtiAgentRegisterInfoShrinkRequest &&) = default ;
    CreateAtiAgentRegisterInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAtiAgentRegisterInfoShrinkRequest() = default ;
    CreateAtiAgentRegisterInfoShrinkRequest& operator=(const CreateAtiAgentRegisterInfoShrinkRequest &) = default ;
    CreateAtiAgentRegisterInfoShrinkRequest& operator=(CreateAtiAgentRegisterInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentDescription_ == nullptr
        && this->agentDisplayName_ == nullptr && this->agentHost_ == nullptr && this->agentVersion_ == nullptr && this->clientToken_ == nullptr && this->endpointsShrink_ == nullptr
        && this->registrantId_ == nullptr; };
    // agentDescription Field Functions 
    bool hasAgentDescription() const { return this->agentDescription_ != nullptr;};
    void deleteAgentDescription() { this->agentDescription_ = nullptr;};
    inline string getAgentDescription() const { DARABONBA_PTR_GET_DEFAULT(agentDescription_, "") };
    inline CreateAtiAgentRegisterInfoShrinkRequest& setAgentDescription(string agentDescription) { DARABONBA_PTR_SET_VALUE(agentDescription_, agentDescription) };


    // agentDisplayName Field Functions 
    bool hasAgentDisplayName() const { return this->agentDisplayName_ != nullptr;};
    void deleteAgentDisplayName() { this->agentDisplayName_ = nullptr;};
    inline string getAgentDisplayName() const { DARABONBA_PTR_GET_DEFAULT(agentDisplayName_, "") };
    inline CreateAtiAgentRegisterInfoShrinkRequest& setAgentDisplayName(string agentDisplayName) { DARABONBA_PTR_SET_VALUE(agentDisplayName_, agentDisplayName) };


    // agentHost Field Functions 
    bool hasAgentHost() const { return this->agentHost_ != nullptr;};
    void deleteAgentHost() { this->agentHost_ = nullptr;};
    inline string getAgentHost() const { DARABONBA_PTR_GET_DEFAULT(agentHost_, "") };
    inline CreateAtiAgentRegisterInfoShrinkRequest& setAgentHost(string agentHost) { DARABONBA_PTR_SET_VALUE(agentHost_, agentHost) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline CreateAtiAgentRegisterInfoShrinkRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAtiAgentRegisterInfoShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointsShrink Field Functions 
    bool hasEndpointsShrink() const { return this->endpointsShrink_ != nullptr;};
    void deleteEndpointsShrink() { this->endpointsShrink_ = nullptr;};
    inline string getEndpointsShrink() const { DARABONBA_PTR_GET_DEFAULT(endpointsShrink_, "") };
    inline CreateAtiAgentRegisterInfoShrinkRequest& setEndpointsShrink(string endpointsShrink) { DARABONBA_PTR_SET_VALUE(endpointsShrink_, endpointsShrink) };


    // registrantId Field Functions 
    bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
    void deleteRegistrantId() { this->registrantId_ = nullptr;};
    inline string getRegistrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
    inline CreateAtiAgentRegisterInfoShrinkRequest& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


  protected:
    // The description of the agent capabilities.
    shared_ptr<string> agentDescription_ {};
    // The display name of the agent.
    // 
    // This parameter is required.
    shared_ptr<string> agentDisplayName_ {};
    // The endpoint domain name through which the agent provides services.
    // 
    // This parameter is required.
    shared_ptr<string> agentHost_ {};
    // The version of the agent.
    // 
    // This parameter is required.
    shared_ptr<string> agentVersion_ {};
    // Provides idempotency. Within 3 minutes, the same value takes effect only once.
    shared_ptr<string> clientToken_ {};
    // The endpoint information of the agent.
    // 
    // This parameter is required.
    shared_ptr<string> endpointsShrink_ {};
    // The ID of the verified registrant. Obtain this ID by invoking the identity verification API operation or from the ATS console.
    // 
    // This parameter is required.
    shared_ptr<string> registrantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
