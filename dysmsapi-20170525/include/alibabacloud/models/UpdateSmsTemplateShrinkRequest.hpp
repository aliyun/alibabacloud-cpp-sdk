// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMSTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMSTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class UpdateSmsTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmsTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplySceneContent, applySceneContent_);
      DARABONBA_PTR_TO_JSON(IntlType, intlType_);
      DARABONBA_PTR_TO_JSON(MoreData, moreDataShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RelatedSignName, relatedSignName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateRule, templateRule_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(TrafficDriving, trafficDriving_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmsTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplySceneContent, applySceneContent_);
      DARABONBA_PTR_FROM_JSON(IntlType, intlType_);
      DARABONBA_PTR_FROM_JSON(MoreData, moreDataShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RelatedSignName, relatedSignName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateRule, templateRule_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(TrafficDriving, trafficDriving_);
    };
    UpdateSmsTemplateShrinkRequest() = default ;
    UpdateSmsTemplateShrinkRequest(const UpdateSmsTemplateShrinkRequest &) = default ;
    UpdateSmsTemplateShrinkRequest(UpdateSmsTemplateShrinkRequest &&) = default ;
    UpdateSmsTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmsTemplateShrinkRequest() = default ;
    UpdateSmsTemplateShrinkRequest& operator=(const UpdateSmsTemplateShrinkRequest &) = default ;
    UpdateSmsTemplateShrinkRequest& operator=(UpdateSmsTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applySceneContent_ == nullptr
        && return this->intlType_ == nullptr && return this->moreDataShrink_ == nullptr && return this->ownerId_ == nullptr && return this->relatedSignName_ == nullptr && return this->remark_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->templateCode_ == nullptr && return this->templateContent_ == nullptr && return this->templateName_ == nullptr
        && return this->templateRule_ == nullptr && return this->templateType_ == nullptr && return this->trafficDriving_ == nullptr; };
    // applySceneContent Field Functions 
    bool hasApplySceneContent() const { return this->applySceneContent_ != nullptr;};
    void deleteApplySceneContent() { this->applySceneContent_ = nullptr;};
    inline string applySceneContent() const { DARABONBA_PTR_GET_DEFAULT(applySceneContent_, "") };
    inline UpdateSmsTemplateShrinkRequest& setApplySceneContent(string applySceneContent) { DARABONBA_PTR_SET_VALUE(applySceneContent_, applySceneContent) };


    // intlType Field Functions 
    bool hasIntlType() const { return this->intlType_ != nullptr;};
    void deleteIntlType() { this->intlType_ = nullptr;};
    inline int32_t intlType() const { DARABONBA_PTR_GET_DEFAULT(intlType_, 0) };
    inline UpdateSmsTemplateShrinkRequest& setIntlType(int32_t intlType) { DARABONBA_PTR_SET_VALUE(intlType_, intlType) };


    // moreDataShrink Field Functions 
    bool hasMoreDataShrink() const { return this->moreDataShrink_ != nullptr;};
    void deleteMoreDataShrink() { this->moreDataShrink_ = nullptr;};
    inline string moreDataShrink() const { DARABONBA_PTR_GET_DEFAULT(moreDataShrink_, "") };
    inline UpdateSmsTemplateShrinkRequest& setMoreDataShrink(string moreDataShrink) { DARABONBA_PTR_SET_VALUE(moreDataShrink_, moreDataShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSmsTemplateShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // relatedSignName Field Functions 
    bool hasRelatedSignName() const { return this->relatedSignName_ != nullptr;};
    void deleteRelatedSignName() { this->relatedSignName_ = nullptr;};
    inline string relatedSignName() const { DARABONBA_PTR_GET_DEFAULT(relatedSignName_, "") };
    inline UpdateSmsTemplateShrinkRequest& setRelatedSignName(string relatedSignName) { DARABONBA_PTR_SET_VALUE(relatedSignName_, relatedSignName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateSmsTemplateShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSmsTemplateShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSmsTemplateShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateRule Field Functions 
    bool hasTemplateRule() const { return this->templateRule_ != nullptr;};
    void deleteTemplateRule() { this->templateRule_ = nullptr;};
    inline string templateRule() const { DARABONBA_PTR_GET_DEFAULT(templateRule_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTemplateRule(string templateRule) { DARABONBA_PTR_SET_VALUE(templateRule_, templateRule) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline UpdateSmsTemplateShrinkRequest& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // trafficDriving Field Functions 
    bool hasTrafficDriving() const { return this->trafficDriving_ != nullptr;};
    void deleteTrafficDriving() { this->trafficDriving_ = nullptr;};
    inline string trafficDriving() const { DARABONBA_PTR_GET_DEFAULT(trafficDriving_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTrafficDriving(string trafficDriving) { DARABONBA_PTR_SET_VALUE(trafficDriving_, trafficDriving) };


  protected:
    // Application scenarios, instructions as follows:
    // - For registered websites, please enter the MIIT-registered domain with HTTP or HTTPS.
    // - For launched apps, provide the app store display link with HTTP or HTTPS, ensuring the app is online.
    // - For public accounts or mini-programs, enter the full name of the public account or mini-program, ensuring they are online.
    // - For e-commerce platform stores, applicable only to enterprise users, enter the display link of the e-commerce store with HTTP or HTTPS.
    std::shared_ptr<string> applySceneContent_ = nullptr;
    // International/Hong Kong, Macao, and Taiwan template type. When the **TemplateType** parameter is **3**, this parameter is required for international/Hong Kong, Macao, and Taiwan templates, with values:
    // - **0**: Verification code.
    // - **1**: SMS notification.
    // - **2**: Promotional SMS.
    std::shared_ptr<int32_t> intlType_ = nullptr;
    // Additional information, such as uploading business proof documents or screenshots, to help reviewers understand your business details. Optional and can be left unset.
    std::shared_ptr<string> moreDataShrink_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // SMS signature associated with the template during the application.
    std::shared_ptr<string> relatedSignName_ = nullptr;
    // Explanation for the SMS template application, which serves as a reference for template review.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Template Code of an unapproved template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateCode_ = nullptr;
    // Template content, up to 500 characters in length.
    // 
    // Both the template content and variable content must comply with SMS regulations; otherwise, the template will fail the review. You can also view common template examples on the template application page. Using sample templates can enhance review efficiency and success rates. Variable specifications can be found in [TemplateContent Parameter Variable Specifications](https://help.aliyun.com/zh/sms/templaterule-template-variable-parameter-filling-example?spm).
    // 
    // This parameter is required.
    std::shared_ptr<string> templateContent_ = nullptr;
    // Template name, up to 30 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    // Template variable rules.
    // 
    // For guidance on filling variable rules, refer to the [Sample Documentation](https://help.aliyun.com/zh/sms/templaterule-template-variable-parameter-filling-example?spm).
    std::shared_ptr<string> templateRule_ = nullptr;
    // SMS type. Values:
    // 
    // - **0**: Verification code.
    // - **1**: SMS notification.
    // - **2**: Promotional SMS.
    // - **3**: International/Hong Kong, Macao, and Taiwan messages.
    // 
    // > Only enterprise-certified users can apply for promotional SMS and international/Hong Kong, Macao, and Taiwan messages. Details on differences between personal and enterprise user rights are available in [Usage Guidelines](https://help.aliyun.com/zh/sms/user-guide/usage-notes?spm=a2c4g.11186623.0.0.67447f576NJnE8).
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> templateType_ = nullptr;
    std::shared_ptr<string> trafficDriving_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
