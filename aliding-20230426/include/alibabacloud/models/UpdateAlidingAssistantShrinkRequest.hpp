// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALIDINGASSISTANTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALIDINGASSISTANTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateAlidingAssistantShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlidingAssistantShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ext, extShrink_);
      DARABONBA_PTR_TO_JSON(FallbackContent, fallbackContent_);
      DARABONBA_PTR_TO_JSON(Feature, featureShrink_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Instructions, instructions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecommendPrompts, recommendPromptsShrink_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(WelcomeContent, welcomeContent_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlidingAssistantShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ext, extShrink_);
      DARABONBA_PTR_FROM_JSON(FallbackContent, fallbackContent_);
      DARABONBA_PTR_FROM_JSON(Feature, featureShrink_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecommendPrompts, recommendPromptsShrink_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(WelcomeContent, welcomeContent_);
    };
    UpdateAlidingAssistantShrinkRequest() = default ;
    UpdateAlidingAssistantShrinkRequest(const UpdateAlidingAssistantShrinkRequest &) = default ;
    UpdateAlidingAssistantShrinkRequest(UpdateAlidingAssistantShrinkRequest &&) = default ;
    UpdateAlidingAssistantShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlidingAssistantShrinkRequest() = default ;
    UpdateAlidingAssistantShrinkRequest& operator=(const UpdateAlidingAssistantShrinkRequest &) = default ;
    UpdateAlidingAssistantShrinkRequest& operator=(UpdateAlidingAssistantShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assistantId_ != nullptr
        && this->description_ != nullptr && this->extShrink_ != nullptr && this->fallbackContent_ != nullptr && this->featureShrink_ != nullptr && this->icon_ != nullptr
        && this->instructions_ != nullptr && this->name_ != nullptr && this->recommendPromptsShrink_ != nullptr && this->tenantContextShrink_ != nullptr && this->welcomeContent_ != nullptr; };
    // assistantId Field Functions 
    bool hasAssistantId() const { return this->assistantId_ != nullptr;};
    void deleteAssistantId() { this->assistantId_ = nullptr;};
    inline string assistantId() const { DARABONBA_PTR_GET_DEFAULT(assistantId_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extShrink Field Functions 
    bool hasExtShrink() const { return this->extShrink_ != nullptr;};
    void deleteExtShrink() { this->extShrink_ = nullptr;};
    inline string extShrink() const { DARABONBA_PTR_GET_DEFAULT(extShrink_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setExtShrink(string extShrink) { DARABONBA_PTR_SET_VALUE(extShrink_, extShrink) };


    // fallbackContent Field Functions 
    bool hasFallbackContent() const { return this->fallbackContent_ != nullptr;};
    void deleteFallbackContent() { this->fallbackContent_ = nullptr;};
    inline string fallbackContent() const { DARABONBA_PTR_GET_DEFAULT(fallbackContent_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setFallbackContent(string fallbackContent) { DARABONBA_PTR_SET_VALUE(fallbackContent_, fallbackContent) };


    // featureShrink Field Functions 
    bool hasFeatureShrink() const { return this->featureShrink_ != nullptr;};
    void deleteFeatureShrink() { this->featureShrink_ = nullptr;};
    inline string featureShrink() const { DARABONBA_PTR_GET_DEFAULT(featureShrink_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setFeatureShrink(string featureShrink) { DARABONBA_PTR_SET_VALUE(featureShrink_, featureShrink) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recommendPromptsShrink Field Functions 
    bool hasRecommendPromptsShrink() const { return this->recommendPromptsShrink_ != nullptr;};
    void deleteRecommendPromptsShrink() { this->recommendPromptsShrink_ = nullptr;};
    inline string recommendPromptsShrink() const { DARABONBA_PTR_GET_DEFAULT(recommendPromptsShrink_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setRecommendPromptsShrink(string recommendPromptsShrink) { DARABONBA_PTR_SET_VALUE(recommendPromptsShrink_, recommendPromptsShrink) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // welcomeContent Field Functions 
    bool hasWelcomeContent() const { return this->welcomeContent_ != nullptr;};
    void deleteWelcomeContent() { this->welcomeContent_ = nullptr;};
    inline string welcomeContent() const { DARABONBA_PTR_GET_DEFAULT(welcomeContent_, "") };
    inline UpdateAlidingAssistantShrinkRequest& setWelcomeContent(string welcomeContent) { DARABONBA_PTR_SET_VALUE(welcomeContent_, welcomeContent) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assistantId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> extShrink_ = nullptr;
    std::shared_ptr<string> fallbackContent_ = nullptr;
    std::shared_ptr<string> featureShrink_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> recommendPromptsShrink_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<string> welcomeContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
