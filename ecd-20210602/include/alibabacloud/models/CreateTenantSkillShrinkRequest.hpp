// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETENANTSKILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETENANTSKILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
namespace Models
{
  class CreateTenantSkillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTenantSkillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EnvVars, envVarsShrink_);
      DARABONBA_PTR_TO_JSON(IconETag, iconETag_);
      DARABONBA_PTR_TO_JSON(SkillChannel, skillChannel_);
      DARABONBA_PTR_TO_JSON(SkillIcon, skillIcon_);
      DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_TO_JSON(Slug, slug_);
      DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTenantSkillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EnvVars, envVarsShrink_);
      DARABONBA_PTR_FROM_JSON(IconETag, iconETag_);
      DARABONBA_PTR_FROM_JSON(SkillChannel, skillChannel_);
      DARABONBA_PTR_FROM_JSON(SkillIcon, skillIcon_);
      DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_FROM_JSON(Slug, slug_);
      DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
    };
    CreateTenantSkillShrinkRequest() = default ;
    CreateTenantSkillShrinkRequest(const CreateTenantSkillShrinkRequest &) = default ;
    CreateTenantSkillShrinkRequest(CreateTenantSkillShrinkRequest &&) = default ;
    CreateTenantSkillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTenantSkillShrinkRequest() = default ;
    CreateTenantSkillShrinkRequest& operator=(const CreateTenantSkillShrinkRequest &) = default ;
    CreateTenantSkillShrinkRequest& operator=(CreateTenantSkillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->envVarsShrink_ == nullptr && this->iconETag_ == nullptr && this->skillChannel_ == nullptr
        && this->skillIcon_ == nullptr && this->skillVersion_ == nullptr && this->slug_ == nullptr && this->taskKey_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateTenantSkillShrinkRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTenantSkillShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateTenantSkillShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // envVarsShrink Field Functions 
    bool hasEnvVarsShrink() const { return this->envVarsShrink_ != nullptr;};
    void deleteEnvVarsShrink() { this->envVarsShrink_ = nullptr;};
    inline string getEnvVarsShrink() const { DARABONBA_PTR_GET_DEFAULT(envVarsShrink_, "") };
    inline CreateTenantSkillShrinkRequest& setEnvVarsShrink(string envVarsShrink) { DARABONBA_PTR_SET_VALUE(envVarsShrink_, envVarsShrink) };


    // iconETag Field Functions 
    bool hasIconETag() const { return this->iconETag_ != nullptr;};
    void deleteIconETag() { this->iconETag_ = nullptr;};
    inline string getIconETag() const { DARABONBA_PTR_GET_DEFAULT(iconETag_, "") };
    inline CreateTenantSkillShrinkRequest& setIconETag(string iconETag) { DARABONBA_PTR_SET_VALUE(iconETag_, iconETag) };


    // skillChannel Field Functions 
    bool hasSkillChannel() const { return this->skillChannel_ != nullptr;};
    void deleteSkillChannel() { this->skillChannel_ = nullptr;};
    inline string getSkillChannel() const { DARABONBA_PTR_GET_DEFAULT(skillChannel_, "") };
    inline CreateTenantSkillShrinkRequest& setSkillChannel(string skillChannel) { DARABONBA_PTR_SET_VALUE(skillChannel_, skillChannel) };


    // skillIcon Field Functions 
    bool hasSkillIcon() const { return this->skillIcon_ != nullptr;};
    void deleteSkillIcon() { this->skillIcon_ = nullptr;};
    inline string getSkillIcon() const { DARABONBA_PTR_GET_DEFAULT(skillIcon_, "") };
    inline CreateTenantSkillShrinkRequest& setSkillIcon(string skillIcon) { DARABONBA_PTR_SET_VALUE(skillIcon_, skillIcon) };


    // skillVersion Field Functions 
    bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
    void deleteSkillVersion() { this->skillVersion_ = nullptr;};
    inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
    inline CreateTenantSkillShrinkRequest& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline CreateTenantSkillShrinkRequest& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


    // taskKey Field Functions 
    bool hasTaskKey() const { return this->taskKey_ != nullptr;};
    void deleteTaskKey() { this->taskKey_ = nullptr;};
    inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
    inline CreateTenantSkillShrinkRequest& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


  protected:
    // The API key of the skill.
    shared_ptr<string> apiKey_ {};
    // The description of the skill. Maximum length: 500 characters.
    shared_ptr<string> description_ {};
    // The display name.
    shared_ptr<string> displayName_ {};
    // The environment variables.
    shared_ptr<string> envVarsShrink_ {};
    // The icon parsing tag. This parameter is required when SkillIcon is specified.
    shared_ptr<string> iconETag_ {};
    // The skill channel. Valid values:
    // - ENTERPRISE: Enterprise Edition.
    // - BUSINESS: Business Edition.
    shared_ptr<string> skillChannel_ {};
    // The skill icon.
    shared_ptr<string> skillIcon_ {};
    // The skill version.
    shared_ptr<string> skillVersion_ {};
    // The slug identifier of the skill. This parameter is user-defined and must be unique within the tenant.
    shared_ptr<string> slug_ {};
    // The file parsing task key.
    shared_ptr<string> taskKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
