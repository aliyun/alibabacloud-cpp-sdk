// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWSKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWSKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Env, envShrink_);
      DARABONBA_PTR_TO_JSON(SkillKey, skillKey_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Env, envShrink_);
      DARABONBA_PTR_FROM_JSON(SkillKey, skillKey_);
    };
    UpdatePolarClawSkillShrinkRequest() = default ;
    UpdatePolarClawSkillShrinkRequest(const UpdatePolarClawSkillShrinkRequest &) = default ;
    UpdatePolarClawSkillShrinkRequest(UpdatePolarClawSkillShrinkRequest &&) = default ;
    UpdatePolarClawSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawSkillShrinkRequest() = default ;
    UpdatePolarClawSkillShrinkRequest& operator=(const UpdatePolarClawSkillShrinkRequest &) = default ;
    UpdatePolarClawSkillShrinkRequest& operator=(UpdatePolarClawSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->applicationId_ == nullptr && this->enabled_ == nullptr && this->envShrink_ == nullptr && this->skillKey_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline UpdatePolarClawSkillShrinkRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawSkillShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdatePolarClawSkillShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // envShrink Field Functions 
    bool hasEnvShrink() const { return this->envShrink_ != nullptr;};
    void deleteEnvShrink() { this->envShrink_ = nullptr;};
    inline string getEnvShrink() const { DARABONBA_PTR_GET_DEFAULT(envShrink_, "") };
    inline UpdatePolarClawSkillShrinkRequest& setEnvShrink(string envShrink) { DARABONBA_PTR_SET_VALUE(envShrink_, envShrink) };


    // skillKey Field Functions 
    bool hasSkillKey() const { return this->skillKey_ != nullptr;};
    void deleteSkillKey() { this->skillKey_ = nullptr;};
    inline string getSkillKey() const { DARABONBA_PTR_GET_DEFAULT(skillKey_, "") };
    inline UpdatePolarClawSkillShrinkRequest& setSkillKey(string skillKey) { DARABONBA_PTR_SET_VALUE(skillKey_, skillKey) };


  protected:
    // The Skill API key. An empty string indicates that the key is deleted.
    shared_ptr<string> apiKey_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // Specifies whether to enable the Skill.
    shared_ptr<bool> enabled_ {};
    // The environment variables as a key-value map. A null value indicates that the variable is deleted.
    shared_ptr<string> envShrink_ {};
    // The Skill identifier key.
    // 
    // This parameter is required.
    shared_ptr<string> skillKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
