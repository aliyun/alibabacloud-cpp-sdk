// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONAGENTRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONAGENTRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateApplicationAgentRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationAgentRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationAgentRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    CreateApplicationAgentRelationRequest() = default ;
    CreateApplicationAgentRelationRequest(const CreateApplicationAgentRelationRequest &) = default ;
    CreateApplicationAgentRelationRequest(CreateApplicationAgentRelationRequest &&) = default ;
    CreateApplicationAgentRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationAgentRelationRequest() = default ;
    CreateApplicationAgentRelationRequest& operator=(const CreateApplicationAgentRelationRequest &) = default ;
    CreateApplicationAgentRelationRequest& operator=(CreateApplicationAgentRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->token_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreateApplicationAgentRelationRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateApplicationAgentRelationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateApplicationAgentRelationRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The instance ID of the Agent to attach.
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The ID of the Squad application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The authentication token.
    // 
    // This parameter is required.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
