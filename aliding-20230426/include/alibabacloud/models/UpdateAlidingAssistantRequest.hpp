// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALIDINGASSISTANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALIDINGASSISTANTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/UpdateAlidingAssistantRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateAlidingAssistantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlidingAssistantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(FallbackContent, fallbackContent_);
      DARABONBA_PTR_TO_JSON(Feature, feature_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Instructions, instructions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecommendPrompts, recommendPrompts_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WelcomeContent, welcomeContent_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlidingAssistantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistantId, assistantId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(FallbackContent, fallbackContent_);
      DARABONBA_PTR_FROM_JSON(Feature, feature_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecommendPrompts, recommendPrompts_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WelcomeContent, welcomeContent_);
    };
    UpdateAlidingAssistantRequest() = default ;
    UpdateAlidingAssistantRequest(const UpdateAlidingAssistantRequest &) = default ;
    UpdateAlidingAssistantRequest(UpdateAlidingAssistantRequest &&) = default ;
    UpdateAlidingAssistantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlidingAssistantRequest() = default ;
    UpdateAlidingAssistantRequest& operator=(const UpdateAlidingAssistantRequest &) = default ;
    UpdateAlidingAssistantRequest& operator=(UpdateAlidingAssistantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assistantId_ != nullptr
        && this->description_ != nullptr && this->ext_ != nullptr && this->fallbackContent_ != nullptr && this->feature_ != nullptr && this->icon_ != nullptr
        && this->instructions_ != nullptr && this->name_ != nullptr && this->recommendPrompts_ != nullptr && this->tenantContext_ != nullptr && this->welcomeContent_ != nullptr; };
    // assistantId Field Functions 
    bool hasAssistantId() const { return this->assistantId_ != nullptr;};
    void deleteAssistantId() { this->assistantId_ = nullptr;};
    inline string assistantId() const { DARABONBA_PTR_GET_DEFAULT(assistantId_, "") };
    inline UpdateAlidingAssistantRequest& setAssistantId(string assistantId) { DARABONBA_PTR_SET_VALUE(assistantId_, assistantId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAlidingAssistantRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const map<string, string> & ext() const { DARABONBA_PTR_GET_CONST(ext_, map<string, string>) };
    inline map<string, string> ext() { DARABONBA_PTR_GET(ext_, map<string, string>) };
    inline UpdateAlidingAssistantRequest& setExt(const map<string, string> & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline UpdateAlidingAssistantRequest& setExt(map<string, string> && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // fallbackContent Field Functions 
    bool hasFallbackContent() const { return this->fallbackContent_ != nullptr;};
    void deleteFallbackContent() { this->fallbackContent_ = nullptr;};
    inline string fallbackContent() const { DARABONBA_PTR_GET_DEFAULT(fallbackContent_, "") };
    inline UpdateAlidingAssistantRequest& setFallbackContent(string fallbackContent) { DARABONBA_PTR_SET_VALUE(fallbackContent_, fallbackContent) };


    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline const map<string, string> & feature() const { DARABONBA_PTR_GET_CONST(feature_, map<string, string>) };
    inline map<string, string> feature() { DARABONBA_PTR_GET(feature_, map<string, string>) };
    inline UpdateAlidingAssistantRequest& setFeature(const map<string, string> & feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };
    inline UpdateAlidingAssistantRequest& setFeature(map<string, string> && feature) { DARABONBA_PTR_SET_RVALUE(feature_, feature) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline UpdateAlidingAssistantRequest& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline UpdateAlidingAssistantRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAlidingAssistantRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recommendPrompts Field Functions 
    bool hasRecommendPrompts() const { return this->recommendPrompts_ != nullptr;};
    void deleteRecommendPrompts() { this->recommendPrompts_ = nullptr;};
    inline const vector<string> & recommendPrompts() const { DARABONBA_PTR_GET_CONST(recommendPrompts_, vector<string>) };
    inline vector<string> recommendPrompts() { DARABONBA_PTR_GET(recommendPrompts_, vector<string>) };
    inline UpdateAlidingAssistantRequest& setRecommendPrompts(const vector<string> & recommendPrompts) { DARABONBA_PTR_SET_VALUE(recommendPrompts_, recommendPrompts) };
    inline UpdateAlidingAssistantRequest& setRecommendPrompts(vector<string> && recommendPrompts) { DARABONBA_PTR_SET_RVALUE(recommendPrompts_, recommendPrompts) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateAlidingAssistantRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateAlidingAssistantRequestTenantContext) };
    inline UpdateAlidingAssistantRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateAlidingAssistantRequestTenantContext) };
    inline UpdateAlidingAssistantRequest& setTenantContext(const UpdateAlidingAssistantRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateAlidingAssistantRequest& setTenantContext(UpdateAlidingAssistantRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // welcomeContent Field Functions 
    bool hasWelcomeContent() const { return this->welcomeContent_ != nullptr;};
    void deleteWelcomeContent() { this->welcomeContent_ = nullptr;};
    inline string welcomeContent() const { DARABONBA_PTR_GET_DEFAULT(welcomeContent_, "") };
    inline UpdateAlidingAssistantRequest& setWelcomeContent(string welcomeContent) { DARABONBA_PTR_SET_VALUE(welcomeContent_, welcomeContent) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assistantId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<map<string, string>> ext_ = nullptr;
    std::shared_ptr<string> fallbackContent_ = nullptr;
    std::shared_ptr<map<string, string>> feature_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> recommendPrompts_ = nullptr;
    std::shared_ptr<UpdateAlidingAssistantRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<string> welcomeContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
