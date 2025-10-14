// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALIDINGASSISTANTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALIDINGASSISTANTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateAlidingAssistantShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlidingAssistantShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ext, extShrink_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Instructions, instructions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecommendPrompts, recommendPromptsShrink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIdentityId, sourceIdentityId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(WelcomeContent, welcomeContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlidingAssistantShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ext, extShrink_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecommendPrompts, recommendPromptsShrink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceIdentityId, sourceIdentityId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(WelcomeContent, welcomeContent_);
    };
    CreateAlidingAssistantShrinkRequest() = default ;
    CreateAlidingAssistantShrinkRequest(const CreateAlidingAssistantShrinkRequest &) = default ;
    CreateAlidingAssistantShrinkRequest(CreateAlidingAssistantShrinkRequest &&) = default ;
    CreateAlidingAssistantShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlidingAssistantShrinkRequest() = default ;
    CreateAlidingAssistantShrinkRequest& operator=(const CreateAlidingAssistantShrinkRequest &) = default ;
    CreateAlidingAssistantShrinkRequest& operator=(CreateAlidingAssistantShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->description_ == nullptr && return this->extShrink_ == nullptr && return this->icon_ == nullptr && return this->instructions_ == nullptr && return this->name_ == nullptr
        && return this->recommendPromptsShrink_ == nullptr && return this->source_ == nullptr && return this->sourceIdentityId_ == nullptr && return this->tenantContextShrink_ == nullptr && return this->welcomeContent_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline CreateAlidingAssistantShrinkRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAlidingAssistantShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extShrink Field Functions 
    bool hasExtShrink() const { return this->extShrink_ != nullptr;};
    void deleteExtShrink() { this->extShrink_ = nullptr;};
    inline string extShrink() const { DARABONBA_PTR_GET_DEFAULT(extShrink_, "") };
    inline CreateAlidingAssistantShrinkRequest& setExtShrink(string extShrink) { DARABONBA_PTR_SET_VALUE(extShrink_, extShrink) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline CreateAlidingAssistantShrinkRequest& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline CreateAlidingAssistantShrinkRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlidingAssistantShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recommendPromptsShrink Field Functions 
    bool hasRecommendPromptsShrink() const { return this->recommendPromptsShrink_ != nullptr;};
    void deleteRecommendPromptsShrink() { this->recommendPromptsShrink_ = nullptr;};
    inline string recommendPromptsShrink() const { DARABONBA_PTR_GET_DEFAULT(recommendPromptsShrink_, "") };
    inline CreateAlidingAssistantShrinkRequest& setRecommendPromptsShrink(string recommendPromptsShrink) { DARABONBA_PTR_SET_VALUE(recommendPromptsShrink_, recommendPromptsShrink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline CreateAlidingAssistantShrinkRequest& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceIdentityId Field Functions 
    bool hasSourceIdentityId() const { return this->sourceIdentityId_ != nullptr;};
    void deleteSourceIdentityId() { this->sourceIdentityId_ = nullptr;};
    inline string sourceIdentityId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentityId_, "") };
    inline CreateAlidingAssistantShrinkRequest& setSourceIdentityId(string sourceIdentityId) { DARABONBA_PTR_SET_VALUE(sourceIdentityId_, sourceIdentityId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateAlidingAssistantShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // welcomeContent Field Functions 
    bool hasWelcomeContent() const { return this->welcomeContent_ != nullptr;};
    void deleteWelcomeContent() { this->welcomeContent_ = nullptr;};
    inline string welcomeContent() const { DARABONBA_PTR_GET_DEFAULT(welcomeContent_, "") };
    inline CreateAlidingAssistantShrinkRequest& setWelcomeContent(string welcomeContent) { DARABONBA_PTR_SET_VALUE(welcomeContent_, welcomeContent) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> extShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> icon_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instructions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> recommendPromptsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> source_ = nullptr;
    std::shared_ptr<string> sourceIdentityId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> welcomeContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
