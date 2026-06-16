// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateAgentSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(cmsWorkspace, cmsWorkspace_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(cmsWorkspace, cmsWorkspace_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateAgentSpaceRequest() = default ;
    CreateAgentSpaceRequest(const CreateAgentSpaceRequest &) = default ;
    CreateAgentSpaceRequest(CreateAgentSpaceRequest &&) = default ;
    CreateAgentSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentSpaceRequest() = default ;
    CreateAgentSpaceRequest& operator=(const CreateAgentSpaceRequest &) = default ;
    CreateAgentSpaceRequest& operator=(CreateAgentSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->cmsWorkspace_ == nullptr && this->description_ == nullptr && this->clientToken_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline CreateAgentSpaceRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // cmsWorkspace Field Functions 
    bool hasCmsWorkspace() const { return this->cmsWorkspace_ != nullptr;};
    void deleteCmsWorkspace() { this->cmsWorkspace_ = nullptr;};
    inline string getCmsWorkspace() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspace_, "") };
    inline CreateAgentSpaceRequest& setCmsWorkspace(string cmsWorkspace) { DARABONBA_PTR_SET_VALUE(cmsWorkspace_, cmsWorkspace) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentSpaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAgentSpaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentSpace_ {};
    shared_ptr<string> cmsWorkspace_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
