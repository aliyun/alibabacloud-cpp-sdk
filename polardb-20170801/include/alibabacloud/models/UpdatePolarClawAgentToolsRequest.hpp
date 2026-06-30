// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTTOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTTOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawAgentToolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawAgentToolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(Allow, allow_);
      DARABONBA_PTR_TO_JSON(AlsoAllow, alsoAllow_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Deny, deny_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawAgentToolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(Allow, allow_);
      DARABONBA_PTR_FROM_JSON(AlsoAllow, alsoAllow_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Deny, deny_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
    };
    UpdatePolarClawAgentToolsRequest() = default ;
    UpdatePolarClawAgentToolsRequest(const UpdatePolarClawAgentToolsRequest &) = default ;
    UpdatePolarClawAgentToolsRequest(UpdatePolarClawAgentToolsRequest &&) = default ;
    UpdatePolarClawAgentToolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawAgentToolsRequest() = default ;
    UpdatePolarClawAgentToolsRequest& operator=(const UpdatePolarClawAgentToolsRequest &) = default ;
    UpdatePolarClawAgentToolsRequest& operator=(UpdatePolarClawAgentToolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->allow_ == nullptr && this->alsoAllow_ == nullptr && this->applicationId_ == nullptr && this->deny_ == nullptr && this->profile_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawAgentToolsRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // allow Field Functions 
    bool hasAllow() const { return this->allow_ != nullptr;};
    void deleteAllow() { this->allow_ = nullptr;};
    inline const vector<string> & getAllow() const { DARABONBA_PTR_GET_CONST(allow_, vector<string>) };
    inline vector<string> getAllow() { DARABONBA_PTR_GET(allow_, vector<string>) };
    inline UpdatePolarClawAgentToolsRequest& setAllow(const vector<string> & allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };
    inline UpdatePolarClawAgentToolsRequest& setAllow(vector<string> && allow) { DARABONBA_PTR_SET_RVALUE(allow_, allow) };


    // alsoAllow Field Functions 
    bool hasAlsoAllow() const { return this->alsoAllow_ != nullptr;};
    void deleteAlsoAllow() { this->alsoAllow_ = nullptr;};
    inline const vector<string> & getAlsoAllow() const { DARABONBA_PTR_GET_CONST(alsoAllow_, vector<string>) };
    inline vector<string> getAlsoAllow() { DARABONBA_PTR_GET(alsoAllow_, vector<string>) };
    inline UpdatePolarClawAgentToolsRequest& setAlsoAllow(const vector<string> & alsoAllow) { DARABONBA_PTR_SET_VALUE(alsoAllow_, alsoAllow) };
    inline UpdatePolarClawAgentToolsRequest& setAlsoAllow(vector<string> && alsoAllow) { DARABONBA_PTR_SET_RVALUE(alsoAllow_, alsoAllow) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawAgentToolsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline const vector<string> & getDeny() const { DARABONBA_PTR_GET_CONST(deny_, vector<string>) };
    inline vector<string> getDeny() { DARABONBA_PTR_GET(deny_, vector<string>) };
    inline UpdatePolarClawAgentToolsRequest& setDeny(const vector<string> & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
    inline UpdatePolarClawAgentToolsRequest& setDeny(vector<string> && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline UpdatePolarClawAgentToolsRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


  protected:
    // Agent ID
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The list of explicitly allowed tools.
    shared_ptr<vector<string>> allow_ {};
    // The list of additionally allowed tools.
    shared_ptr<vector<string>> alsoAllow_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The list of denied tools.
    shared_ptr<vector<string>> deny_ {};
    // The tool profile.
    shared_ptr<string> profile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
