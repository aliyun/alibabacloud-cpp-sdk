// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmsTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplySceneContent, applySceneContent_);
      DARABONBA_PTR_TO_JSON(IntlType, intlType_);
      DARABONBA_PTR_TO_JSON(MoreData, moreDataShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RelatedSignName, relatedSignName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateRule, templateRule_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(TrafficDriving, trafficDriving_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplySceneContent, applySceneContent_);
      DARABONBA_PTR_FROM_JSON(IntlType, intlType_);
      DARABONBA_PTR_FROM_JSON(MoreData, moreDataShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RelatedSignName, relatedSignName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateRule, templateRule_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(TrafficDriving, trafficDriving_);
    };
    CreateSmsTemplateShrinkRequest() = default ;
    CreateSmsTemplateShrinkRequest(const CreateSmsTemplateShrinkRequest &) = default ;
    CreateSmsTemplateShrinkRequest(CreateSmsTemplateShrinkRequest &&) = default ;
    CreateSmsTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsTemplateShrinkRequest() = default ;
    CreateSmsTemplateShrinkRequest& operator=(const CreateSmsTemplateShrinkRequest &) = default ;
    CreateSmsTemplateShrinkRequest& operator=(CreateSmsTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applySceneContent_ == nullptr
        && this->intlType_ == nullptr && this->moreDataShrink_ == nullptr && this->ownerId_ == nullptr && this->relatedSignName_ == nullptr && this->remark_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->templateContent_ == nullptr && this->templateName_ == nullptr && this->templateRule_ == nullptr
        && this->templateType_ == nullptr && this->trafficDriving_ == nullptr; };
    // applySceneContent Field Functions 
    bool hasApplySceneContent() const { return this->applySceneContent_ != nullptr;};
    void deleteApplySceneContent() { this->applySceneContent_ = nullptr;};
    inline string getApplySceneContent() const { DARABONBA_PTR_GET_DEFAULT(applySceneContent_, "") };
    inline CreateSmsTemplateShrinkRequest& setApplySceneContent(string applySceneContent) { DARABONBA_PTR_SET_VALUE(applySceneContent_, applySceneContent) };


    // intlType Field Functions 
    bool hasIntlType() const { return this->intlType_ != nullptr;};
    void deleteIntlType() { this->intlType_ = nullptr;};
    inline int32_t getIntlType() const { DARABONBA_PTR_GET_DEFAULT(intlType_, 0) };
    inline CreateSmsTemplateShrinkRequest& setIntlType(int32_t intlType) { DARABONBA_PTR_SET_VALUE(intlType_, intlType) };


    // moreDataShrink Field Functions 
    bool hasMoreDataShrink() const { return this->moreDataShrink_ != nullptr;};
    void deleteMoreDataShrink() { this->moreDataShrink_ = nullptr;};
    inline string getMoreDataShrink() const { DARABONBA_PTR_GET_DEFAULT(moreDataShrink_, "") };
    inline CreateSmsTemplateShrinkRequest& setMoreDataShrink(string moreDataShrink) { DARABONBA_PTR_SET_VALUE(moreDataShrink_, moreDataShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsTemplateShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // relatedSignName Field Functions 
    bool hasRelatedSignName() const { return this->relatedSignName_ != nullptr;};
    void deleteRelatedSignName() { this->relatedSignName_ = nullptr;};
    inline string getRelatedSignName() const { DARABONBA_PTR_GET_DEFAULT(relatedSignName_, "") };
    inline CreateSmsTemplateShrinkRequest& setRelatedSignName(string relatedSignName) { DARABONBA_PTR_SET_VALUE(relatedSignName_, relatedSignName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateSmsTemplateShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsTemplateShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsTemplateShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline CreateSmsTemplateShrinkRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateSmsTemplateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateRule Field Functions 
    bool hasTemplateRule() const { return this->templateRule_ != nullptr;};
    void deleteTemplateRule() { this->templateRule_ = nullptr;};
    inline string getTemplateRule() const { DARABONBA_PTR_GET_DEFAULT(templateRule_, "") };
    inline CreateSmsTemplateShrinkRequest& setTemplateRule(string templateRule) { DARABONBA_PTR_SET_VALUE(templateRule_, templateRule) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline CreateSmsTemplateShrinkRequest& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // trafficDriving Field Functions 
    bool hasTrafficDriving() const { return this->trafficDriving_ != nullptr;};
    void deleteTrafficDriving() { this->trafficDriving_ = nullptr;};
    inline string getTrafficDriving() const { DARABONBA_PTR_GET_DEFAULT(trafficDriving_, "") };
    inline CreateSmsTemplateShrinkRequest& setTrafficDriving(string trafficDriving) { DARABONBA_PTR_SET_VALUE(trafficDriving_, trafficDriving) };


  protected:
    // The business scenario.
    // 
    // - If the associated signature\\"s use case is "Live App", `ApplySceneContent` must be an app URL that starts with `http://` or `https://`.
    // 
    // - This parameter is required if the associated signature\\"s use case is "Registered Trademark Name" or "organization name".
    shared_ptr<string> applySceneContent_ {};
    // The type of the template for international/Hong Kong, Macao, and Taiwan messages. This parameter is required when **TemplateType** is set to **3**. Valid values:
    // 
    // - **0**: notification message.
    // 
    // - **1**: promotional message.
    // 
    // - **2**: verification code.
    shared_ptr<int32_t> intlType_ {};
    // Additional information. You can upload supporting documents or business screenshots to help reviewers better understand your business scenario. If you are applying for a promotional message template (where `TemplateType` is `2`), you must upload user authorization materials. For more information, see [Specifications for Uploading User Authorization Materials](https://help.aliyun.com/document_detail/312341.html).
    shared_ptr<string> moreDataShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The name of the signature to associate with the template. The signature must be an approved signature.
    // 
    // >Notice: 
    // 
    // - This parameter is required if **TemplateType** is set to **0**, **1**, or **2**.
    // 
    // - Associating a signature can expedite the review process. The signature associated here is unrelated to the one you select when sending SMS messages.
    shared_ptr<string> relatedSignName_ {};
    // Describe the business scenario for the SMS messages, or provide a URL for online scenarios. You must also provide a complete SMS example with actual values for any variables. Complete information increases the chance of template approval. Templates that do not provide this information as specified may be rejected.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The template content. The content must be 500 characters or less.
    // 
    // The template content and variables must comply with the [SMS Template Specifications](https://help.aliyun.com/document_detail/463161.html). Templates that do not comply may be rejected. You can find common template examples on the [Apply for Template](https://dysms.console.aliyun.com/domestic/text/template/add) page. Using these examples can speed up the review process and increase the approval rate. For variable specifications, see [Variable Specifications for the TemplateContent Parameter](https://help.aliyun.com/document_detail/2806243.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateContent_ {};
    // The template name. The name must be 30 characters or less.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The rules for variables in the template. For instructions on how to define these rules, see [Sample Document](https://help.aliyun.com/document_detail/2806243.html).
    // 
    // > - This parameter is required if the message template contains variables.
    shared_ptr<string> templateRule_ {};
    // The SMS type. Valid values:
    // 
    // - **0**: verification code.
    // 
    // - **1**: notification message.
    // 
    // - **2**: promotional message.
    // 
    // - **3**: international/Hong Kong, Macao, and Taiwan messages.
    // 
    // > Only enterprise-verified users can apply for promotional messages or international/Hong Kong, Macao, and Taiwan messages. For more information about the differences in privileges between individual and enterprise users, see [Usage Notes](https://help.aliyun.com/zh/sms/user-guide/usage-notes?spm=a2c4g.11186623.0.0.67447f576NJnE8).
    // 
    // This parameter is required.
    shared_ptr<int32_t> templateType_ {};
    // >Warning: 
    // 
    // To control the security of SMS content, messages that contain traffic-driving information, such as phone numbers and links, may be blocked by carriers, which can lead to delivery failures. To reduce this risk, we recommend that you avoid including such information in message templates.
    // 
    // 
    // 
    // A JSON string that contains a list of traffic-driving information.
    // >Notice: The value must be a JSON array serialized into a string.
    // 
    // ### 1. Fields
    // 
    // {
    // "trafficDrivingType":"traffic driving type",
    // "trafficDrivingContent":"traffic driving content",
    // "variableName":"variable name",
    // "companyName":"organization name",
    // "organizationCode":"unified social credit code",
    // "icpNo":"ICP filing or license number",
    // "icpPicOssKey":"OSS key of the ICP filing screenshot",
    // "companyDifferentFromSignQuaReason":"Reason for the discrepancy between the organization name and the signature qualification"
    // }
    // 
    // ### 2. Notes
    // 
    // - If the content is not a variable, do not pass the `variableName` parameter.
    // 
    // - If the organization name is different from the one in the signature qualification, pass the `companyDifferentFromSignQuaReason` parameter.
    // 
    // - If `trafficDrivingType` is set to `DOMAIN`, all parameters in this object are required.
    // 
    // - If `trafficDrivingType` is set to another value, pass the `trafficDrivingType`, `trafficDrivingContent`, `variableName` (if applicable), `companyName`, `organizationCode`, and `companyDifferentFromSignQuaReason` (if applicable) parameters.
    // 
    // ### 3. trafficDrivingType enum values
    // 
    // >Warning: 
    // 
    // Due to regulatory requirements, mobile phone numbers are not supported.
    // 
    // 
    // 
    // - DOMAIN: A domain link.
    // 
    // - FIXED_PHONE: Fixed-line phone.
    // 
    // - 400_PHONE: Phone number prefixed with 400.
    // 
    // - 800_PHONE: Phone number prefixed with 800.
    // 
    // - 95_PHONE: Phone number prefixed with 95.
    // 
    // - 96_PHONE: Phone number prefixed with 96.
    // 
    // - 1_PHONE: A 3- to 8-digit phone number that starts with 1.
    // 
    // - OTHER_PHONE: Other phone number.
    shared_ptr<string> trafficDriving_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
