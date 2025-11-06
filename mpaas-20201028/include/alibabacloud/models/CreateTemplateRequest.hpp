// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DescInfo, descInfo_);
      DARABONBA_PTR_TO_JSON(IconUrls, iconUrls_);
      DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(JumpAction, jumpAction_);
      DARABONBA_PTR_TO_JSON(PushStyle, pushStyle_);
      DARABONBA_PTR_TO_JSON(ShowStyle, showStyle_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DescInfo, descInfo_);
      DARABONBA_PTR_FROM_JSON(IconUrls, iconUrls_);
      DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(JumpAction, jumpAction_);
      DARABONBA_PTR_FROM_JSON(PushStyle, pushStyle_);
      DARABONBA_PTR_FROM_JSON(ShowStyle, showStyle_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateTemplateRequest() = default ;
    CreateTemplateRequest(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest(CreateTemplateRequest &&) = default ;
    CreateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRequest() = default ;
    CreateTemplateRequest& operator=(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest& operator=(CreateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->content_ == nullptr && return this->descInfo_ == nullptr && return this->iconUrls_ == nullptr && return this->imageUrls_ == nullptr && return this->jumpAction_ == nullptr
        && return this->pushStyle_ == nullptr && return this->showStyle_ == nullptr && return this->templateName_ == nullptr && return this->tenantId_ == nullptr && return this->title_ == nullptr
        && return this->uri_ == nullptr && return this->variables_ == nullptr && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateTemplateRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // descInfo Field Functions 
    bool hasDescInfo() const { return this->descInfo_ != nullptr;};
    void deleteDescInfo() { this->descInfo_ = nullptr;};
    inline string descInfo() const { DARABONBA_PTR_GET_DEFAULT(descInfo_, "") };
    inline CreateTemplateRequest& setDescInfo(string descInfo) { DARABONBA_PTR_SET_VALUE(descInfo_, descInfo) };


    // iconUrls Field Functions 
    bool hasIconUrls() const { return this->iconUrls_ != nullptr;};
    void deleteIconUrls() { this->iconUrls_ = nullptr;};
    inline string iconUrls() const { DARABONBA_PTR_GET_DEFAULT(iconUrls_, "") };
    inline CreateTemplateRequest& setIconUrls(string iconUrls) { DARABONBA_PTR_SET_VALUE(iconUrls_, iconUrls) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline string imageUrls() const { DARABONBA_PTR_GET_DEFAULT(imageUrls_, "") };
    inline CreateTemplateRequest& setImageUrls(string imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };


    // jumpAction Field Functions 
    bool hasJumpAction() const { return this->jumpAction_ != nullptr;};
    void deleteJumpAction() { this->jumpAction_ = nullptr;};
    inline int32_t jumpAction() const { DARABONBA_PTR_GET_DEFAULT(jumpAction_, 0) };
    inline CreateTemplateRequest& setJumpAction(int32_t jumpAction) { DARABONBA_PTR_SET_VALUE(jumpAction_, jumpAction) };


    // pushStyle Field Functions 
    bool hasPushStyle() const { return this->pushStyle_ != nullptr;};
    void deletePushStyle() { this->pushStyle_ = nullptr;};
    inline int32_t pushStyle() const { DARABONBA_PTR_GET_DEFAULT(pushStyle_, 0) };
    inline CreateTemplateRequest& setPushStyle(int32_t pushStyle) { DARABONBA_PTR_SET_VALUE(pushStyle_, pushStyle) };


    // showStyle Field Functions 
    bool hasShowStyle() const { return this->showStyle_ != nullptr;};
    void deleteShowStyle() { this->showStyle_ = nullptr;};
    inline int64_t showStyle() const { DARABONBA_PTR_GET_DEFAULT(showStyle_, 0L) };
    inline CreateTemplateRequest& setShowStyle(int64_t showStyle) { DARABONBA_PTR_SET_VALUE(showStyle_, showStyle) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateTemplateRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateTemplateRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CreateTemplateRequest& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline string variables() const { DARABONBA_PTR_GET_DEFAULT(variables_, "") };
    inline CreateTemplateRequest& setVariables(string variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateTemplateRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> descInfo_ = nullptr;
    std::shared_ptr<string> iconUrls_ = nullptr;
    std::shared_ptr<string> imageUrls_ = nullptr;
    std::shared_ptr<int32_t> jumpAction_ = nullptr;
    std::shared_ptr<int32_t> pushStyle_ = nullptr;
    std::shared_ptr<int64_t> showStyle_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
    std::shared_ptr<string> variables_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
