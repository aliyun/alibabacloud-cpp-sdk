// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTTOOLSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTTOOLSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawAgentToolsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawAgentToolsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(Allow, allowShrink_);
      DARABONBA_PTR_TO_JSON(AlsoAllow, alsoAllowShrink_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Deny, denyShrink_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawAgentToolsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(Allow, allowShrink_);
      DARABONBA_PTR_FROM_JSON(AlsoAllow, alsoAllowShrink_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Deny, denyShrink_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
    };
    UpdatePolarClawAgentToolsShrinkRequest() = default ;
    UpdatePolarClawAgentToolsShrinkRequest(const UpdatePolarClawAgentToolsShrinkRequest &) = default ;
    UpdatePolarClawAgentToolsShrinkRequest(UpdatePolarClawAgentToolsShrinkRequest &&) = default ;
    UpdatePolarClawAgentToolsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawAgentToolsShrinkRequest() = default ;
    UpdatePolarClawAgentToolsShrinkRequest& operator=(const UpdatePolarClawAgentToolsShrinkRequest &) = default ;
    UpdatePolarClawAgentToolsShrinkRequest& operator=(UpdatePolarClawAgentToolsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->allowShrink_ == nullptr && this->alsoAllowShrink_ == nullptr && this->applicationId_ == nullptr && this->denyShrink_ == nullptr && this->profile_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawAgentToolsShrinkRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // allowShrink Field Functions 
    bool hasAllowShrink() const { return this->allowShrink_ != nullptr;};
    void deleteAllowShrink() { this->allowShrink_ = nullptr;};
    inline string getAllowShrink() const { DARABONBA_PTR_GET_DEFAULT(allowShrink_, "") };
    inline UpdatePolarClawAgentToolsShrinkRequest& setAllowShrink(string allowShrink) { DARABONBA_PTR_SET_VALUE(allowShrink_, allowShrink) };


    // alsoAllowShrink Field Functions 
    bool hasAlsoAllowShrink() const { return this->alsoAllowShrink_ != nullptr;};
    void deleteAlsoAllowShrink() { this->alsoAllowShrink_ = nullptr;};
    inline string getAlsoAllowShrink() const { DARABONBA_PTR_GET_DEFAULT(alsoAllowShrink_, "") };
    inline UpdatePolarClawAgentToolsShrinkRequest& setAlsoAllowShrink(string alsoAllowShrink) { DARABONBA_PTR_SET_VALUE(alsoAllowShrink_, alsoAllowShrink) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawAgentToolsShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // denyShrink Field Functions 
    bool hasDenyShrink() const { return this->denyShrink_ != nullptr;};
    void deleteDenyShrink() { this->denyShrink_ = nullptr;};
    inline string getDenyShrink() const { DARABONBA_PTR_GET_DEFAULT(denyShrink_, "") };
    inline UpdatePolarClawAgentToolsShrinkRequest& setDenyShrink(string denyShrink) { DARABONBA_PTR_SET_VALUE(denyShrink_, denyShrink) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline UpdatePolarClawAgentToolsShrinkRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


  protected:
    // Agent ID
    // 
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // The list of explicitly allowed tools.
    shared_ptr<string> allowShrink_ {};
    // The list of additionally allowed tools.
    shared_ptr<string> alsoAllowShrink_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The list of denied tools.
    shared_ptr<string> denyShrink_ {};
    // The tool profile.
    shared_ptr<string> profile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
