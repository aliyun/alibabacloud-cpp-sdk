// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATIAGENTREGISTERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEATIAGENTREGISTERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreateAtiAgentRegisterInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAtiAgentRegisterInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_TO_JSON(AgentDisplayName, agentDisplayName_);
      DARABONBA_PTR_TO_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAtiAgentRegisterInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentDescription, agentDescription_);
      DARABONBA_PTR_FROM_JSON(AgentDisplayName, agentDisplayName_);
      DARABONBA_PTR_FROM_JSON(AgentHost, agentHost_);
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
    };
    CreateAtiAgentRegisterInfoRequest() = default ;
    CreateAtiAgentRegisterInfoRequest(const CreateAtiAgentRegisterInfoRequest &) = default ;
    CreateAtiAgentRegisterInfoRequest(CreateAtiAgentRegisterInfoRequest &&) = default ;
    CreateAtiAgentRegisterInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAtiAgentRegisterInfoRequest() = default ;
    CreateAtiAgentRegisterInfoRequest& operator=(const CreateAtiAgentRegisterInfoRequest &) = default ;
    CreateAtiAgentRegisterInfoRequest& operator=(CreateAtiAgentRegisterInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(AgentUrl, agentUrl_);
        DARABONBA_PTR_TO_JSON(MetadataUrl, metadataUrl_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Transports, transports_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentUrl, agentUrl_);
        DARABONBA_PTR_FROM_JSON(MetadataUrl, metadataUrl_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Transports, transports_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentUrl_ == nullptr
        && this->metadataUrl_ == nullptr && this->protocol_ == nullptr && this->transports_ == nullptr; };
      // agentUrl Field Functions 
      bool hasAgentUrl() const { return this->agentUrl_ != nullptr;};
      void deleteAgentUrl() { this->agentUrl_ = nullptr;};
      inline string getAgentUrl() const { DARABONBA_PTR_GET_DEFAULT(agentUrl_, "") };
      inline Endpoints& setAgentUrl(string agentUrl) { DARABONBA_PTR_SET_VALUE(agentUrl_, agentUrl) };


      // metadataUrl Field Functions 
      bool hasMetadataUrl() const { return this->metadataUrl_ != nullptr;};
      void deleteMetadataUrl() { this->metadataUrl_ = nullptr;};
      inline string getMetadataUrl() const { DARABONBA_PTR_GET_DEFAULT(metadataUrl_, "") };
      inline Endpoints& setMetadataUrl(string metadataUrl) { DARABONBA_PTR_SET_VALUE(metadataUrl_, metadataUrl) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Endpoints& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // transports Field Functions 
      bool hasTransports() const { return this->transports_ != nullptr;};
      void deleteTransports() { this->transports_ = nullptr;};
      inline const vector<string> & getTransports() const { DARABONBA_PTR_GET_CONST(transports_, vector<string>) };
      inline vector<string> getTransports() { DARABONBA_PTR_GET(transports_, vector<string>) };
      inline Endpoints& setTransports(const vector<string> & transports) { DARABONBA_PTR_SET_VALUE(transports_, transports) };
      inline Endpoints& setTransports(vector<string> && transports) { DARABONBA_PTR_SET_RVALUE(transports_, transports) };


    protected:
      // The actual service address of the agent endpoint, which is the HTTPS entry point where the agent runs online. This is a required field with a maximum of 500 characters.
      // 
      // Example: https://my-agent.example.com/mcp
      // 
      // After a caller discovers this agent through DNS, it can use this URL to initiate a connection directly. This is the address where the agent is actually online.
      shared_ptr<string> agentUrl_ {};
      // An optional URL that points to the metadata description file of the agent (typically in JSON format). This allows other agents or clients to automatically discover the agent capabilities before connecting, including:
      // - Functions supported by the agent
      // - Input/output formats
      // - Version information
      // - Other capability declarations
      shared_ptr<string> metadataUrl_ {};
      // The communication protocol standard that the agent endpoint follows. This determines how the invoker interacts with the agent.
      // 
      // Valid values:
      // - MCP: Model Context Protocol, an agent tool invocation protocol developed by Anthropic.
      // - A2A: Agent-to-Agent Protocol, a cross-agent communication protocol developed by Google.
      // - OpenAPI: Standard RESTful API specification (Swagger/OpenAPI).
      // 
      // When other agents or clients see this protocol identity, they know which method to use to communicate with the agent. For example, MCP uses the MCP SDK, A2A uses the A2A SDK, and OpenAPI uses standard HTTP requests.
      shared_ptr<string> protocol_ {};
      // The transport methods.
      shared_ptr<vector<string>> transports_ {};
    };

    virtual bool empty() const override { return this->agentDescription_ == nullptr
        && this->agentDisplayName_ == nullptr && this->agentHost_ == nullptr && this->agentVersion_ == nullptr && this->clientToken_ == nullptr && this->endpoints_ == nullptr
        && this->registrantId_ == nullptr; };
    // agentDescription Field Functions 
    bool hasAgentDescription() const { return this->agentDescription_ != nullptr;};
    void deleteAgentDescription() { this->agentDescription_ = nullptr;};
    inline string getAgentDescription() const { DARABONBA_PTR_GET_DEFAULT(agentDescription_, "") };
    inline CreateAtiAgentRegisterInfoRequest& setAgentDescription(string agentDescription) { DARABONBA_PTR_SET_VALUE(agentDescription_, agentDescription) };


    // agentDisplayName Field Functions 
    bool hasAgentDisplayName() const { return this->agentDisplayName_ != nullptr;};
    void deleteAgentDisplayName() { this->agentDisplayName_ = nullptr;};
    inline string getAgentDisplayName() const { DARABONBA_PTR_GET_DEFAULT(agentDisplayName_, "") };
    inline CreateAtiAgentRegisterInfoRequest& setAgentDisplayName(string agentDisplayName) { DARABONBA_PTR_SET_VALUE(agentDisplayName_, agentDisplayName) };


    // agentHost Field Functions 
    bool hasAgentHost() const { return this->agentHost_ != nullptr;};
    void deleteAgentHost() { this->agentHost_ = nullptr;};
    inline string getAgentHost() const { DARABONBA_PTR_GET_DEFAULT(agentHost_, "") };
    inline CreateAtiAgentRegisterInfoRequest& setAgentHost(string agentHost) { DARABONBA_PTR_SET_VALUE(agentHost_, agentHost) };


    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline CreateAtiAgentRegisterInfoRequest& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAtiAgentRegisterInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<CreateAtiAgentRegisterInfoRequest::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<CreateAtiAgentRegisterInfoRequest::Endpoints>) };
    inline vector<CreateAtiAgentRegisterInfoRequest::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<CreateAtiAgentRegisterInfoRequest::Endpoints>) };
    inline CreateAtiAgentRegisterInfoRequest& setEndpoints(const vector<CreateAtiAgentRegisterInfoRequest::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline CreateAtiAgentRegisterInfoRequest& setEndpoints(vector<CreateAtiAgentRegisterInfoRequest::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // registrantId Field Functions 
    bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
    void deleteRegistrantId() { this->registrantId_ = nullptr;};
    inline string getRegistrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
    inline CreateAtiAgentRegisterInfoRequest& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


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
    shared_ptr<vector<CreateAtiAgentRegisterInfoRequest::Endpoints>> endpoints_ {};
    // The ID of the verified registrant. Obtain this ID by invoking the identity verification API operation or from the ATS console.
    // 
    // This parameter is required.
    shared_ptr<string> registrantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
