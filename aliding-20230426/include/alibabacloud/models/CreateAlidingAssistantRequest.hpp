// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALIDINGASSISTANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALIDINGASSISTANTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/CreateAlidingAssistantRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateAlidingAssistantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlidingAssistantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Instructions, instructions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecommendPrompts, recommendPrompts_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIdentityId, sourceIdentityId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(WelcomeContent, welcomeContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlidingAssistantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecommendPrompts, recommendPrompts_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceIdentityId, sourceIdentityId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(WelcomeContent, welcomeContent_);
    };
    CreateAlidingAssistantRequest() = default ;
    CreateAlidingAssistantRequest(const CreateAlidingAssistantRequest &) = default ;
    CreateAlidingAssistantRequest(CreateAlidingAssistantRequest &&) = default ;
    CreateAlidingAssistantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlidingAssistantRequest() = default ;
    CreateAlidingAssistantRequest& operator=(const CreateAlidingAssistantRequest &) = default ;
    CreateAlidingAssistantRequest& operator=(CreateAlidingAssistantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->description_ == nullptr && return this->ext_ == nullptr && return this->icon_ == nullptr && return this->instructions_ == nullptr && return this->name_ == nullptr
        && return this->recommendPrompts_ == nullptr && return this->source_ == nullptr && return this->sourceIdentityId_ == nullptr && return this->tenantContext_ == nullptr && return this->welcomeContent_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline CreateAlidingAssistantRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAlidingAssistantRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const map<string, string> & ext() const { DARABONBA_PTR_GET_CONST(ext_, map<string, string>) };
    inline map<string, string> ext() { DARABONBA_PTR_GET(ext_, map<string, string>) };
    inline CreateAlidingAssistantRequest& setExt(const map<string, string> & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline CreateAlidingAssistantRequest& setExt(map<string, string> && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline CreateAlidingAssistantRequest& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline CreateAlidingAssistantRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlidingAssistantRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recommendPrompts Field Functions 
    bool hasRecommendPrompts() const { return this->recommendPrompts_ != nullptr;};
    void deleteRecommendPrompts() { this->recommendPrompts_ = nullptr;};
    inline const vector<string> & recommendPrompts() const { DARABONBA_PTR_GET_CONST(recommendPrompts_, vector<string>) };
    inline vector<string> recommendPrompts() { DARABONBA_PTR_GET(recommendPrompts_, vector<string>) };
    inline CreateAlidingAssistantRequest& setRecommendPrompts(const vector<string> & recommendPrompts) { DARABONBA_PTR_SET_VALUE(recommendPrompts_, recommendPrompts) };
    inline CreateAlidingAssistantRequest& setRecommendPrompts(vector<string> && recommendPrompts) { DARABONBA_PTR_SET_RVALUE(recommendPrompts_, recommendPrompts) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline CreateAlidingAssistantRequest& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceIdentityId Field Functions 
    bool hasSourceIdentityId() const { return this->sourceIdentityId_ != nullptr;};
    void deleteSourceIdentityId() { this->sourceIdentityId_ = nullptr;};
    inline string sourceIdentityId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentityId_, "") };
    inline CreateAlidingAssistantRequest& setSourceIdentityId(string sourceIdentityId) { DARABONBA_PTR_SET_VALUE(sourceIdentityId_, sourceIdentityId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateAlidingAssistantRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateAlidingAssistantRequestTenantContext) };
    inline CreateAlidingAssistantRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateAlidingAssistantRequestTenantContext) };
    inline CreateAlidingAssistantRequest& setTenantContext(const CreateAlidingAssistantRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateAlidingAssistantRequest& setTenantContext(CreateAlidingAssistantRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // welcomeContent Field Functions 
    bool hasWelcomeContent() const { return this->welcomeContent_ != nullptr;};
    void deleteWelcomeContent() { this->welcomeContent_ = nullptr;};
    inline string welcomeContent() const { DARABONBA_PTR_GET_DEFAULT(welcomeContent_, "") };
    inline CreateAlidingAssistantRequest& setWelcomeContent(string welcomeContent) { DARABONBA_PTR_SET_VALUE(welcomeContent_, welcomeContent) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<map<string, string>> ext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> icon_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instructions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> recommendPrompts_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> source_ = nullptr;
    std::shared_ptr<string> sourceIdentityId_ = nullptr;
    std::shared_ptr<CreateAlidingAssistantRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> welcomeContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
