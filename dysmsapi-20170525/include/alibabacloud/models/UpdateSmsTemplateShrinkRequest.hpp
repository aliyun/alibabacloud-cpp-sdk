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
        && this->intlType_ == nullptr && this->moreDataShrink_ == nullptr && this->ownerId_ == nullptr && this->relatedSignName_ == nullptr && this->remark_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->templateCode_ == nullptr && this->templateContent_ == nullptr && this->templateName_ == nullptr
        && this->templateRule_ == nullptr && this->templateType_ == nullptr && this->trafficDriving_ == nullptr; };
    // applySceneContent Field Functions 
    bool hasApplySceneContent() const { return this->applySceneContent_ != nullptr;};
    void deleteApplySceneContent() { this->applySceneContent_ = nullptr;};
    inline string getApplySceneContent() const { DARABONBA_PTR_GET_DEFAULT(applySceneContent_, "") };
    inline UpdateSmsTemplateShrinkRequest& setApplySceneContent(string applySceneContent) { DARABONBA_PTR_SET_VALUE(applySceneContent_, applySceneContent) };


    // intlType Field Functions 
    bool hasIntlType() const { return this->intlType_ != nullptr;};
    void deleteIntlType() { this->intlType_ = nullptr;};
    inline int32_t getIntlType() const { DARABONBA_PTR_GET_DEFAULT(intlType_, 0) };
    inline UpdateSmsTemplateShrinkRequest& setIntlType(int32_t intlType) { DARABONBA_PTR_SET_VALUE(intlType_, intlType) };


    // moreDataShrink Field Functions 
    bool hasMoreDataShrink() const { return this->moreDataShrink_ != nullptr;};
    void deleteMoreDataShrink() { this->moreDataShrink_ = nullptr;};
    inline string getMoreDataShrink() const { DARABONBA_PTR_GET_DEFAULT(moreDataShrink_, "") };
    inline UpdateSmsTemplateShrinkRequest& setMoreDataShrink(string moreDataShrink) { DARABONBA_PTR_SET_VALUE(moreDataShrink_, moreDataShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSmsTemplateShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // relatedSignName Field Functions 
    bool hasRelatedSignName() const { return this->relatedSignName_ != nullptr;};
    void deleteRelatedSignName() { this->relatedSignName_ = nullptr;};
    inline string getRelatedSignName() const { DARABONBA_PTR_GET_DEFAULT(relatedSignName_, "") };
    inline UpdateSmsTemplateShrinkRequest& setRelatedSignName(string relatedSignName) { DARABONBA_PTR_SET_VALUE(relatedSignName_, relatedSignName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateSmsTemplateShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSmsTemplateShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSmsTemplateShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateRule Field Functions 
    bool hasTemplateRule() const { return this->templateRule_ != nullptr;};
    void deleteTemplateRule() { this->templateRule_ = nullptr;};
    inline string getTemplateRule() const { DARABONBA_PTR_GET_DEFAULT(templateRule_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTemplateRule(string templateRule) { DARABONBA_PTR_SET_VALUE(templateRule_, templateRule) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline UpdateSmsTemplateShrinkRequest& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // trafficDriving Field Functions 
    bool hasTrafficDriving() const { return this->trafficDriving_ != nullptr;};
    void deleteTrafficDriving() { this->trafficDriving_ = nullptr;};
    inline string getTrafficDriving() const { DARABONBA_PTR_GET_DEFAULT(trafficDriving_, "") };
    inline UpdateSmsTemplateShrinkRequest& setTrafficDriving(string trafficDriving) { DARABONBA_PTR_SET_VALUE(trafficDriving_, trafficDriving) };


  protected:
    // The business scenario.
    // 
    // - If the associated SMS signature\\"s business scenario is "Live App", the `ApplySceneContent` parameter must be an app URL starting with `http://` or `https://`.
    // 
    // - The `ApplySceneContent` parameter is required if the associated SMS signature\\"s business scenario is "Registered Trademark" or "Name of Enterprise or Public Institution".
    shared_ptr<string> applySceneContent_ {};
    // The type of the international/regional template. This parameter is required when the **TemplateType** parameter is set to **3**. Valid values:
    // 
    // - **0**: SMS notification.
    // 
    // - **1**: promotional SMS.
    // 
    // - **2**: verification code.
    shared_ptr<int32_t> intlType_ {};
    // Additional materials, such as supporting documents or business screenshots, to help reviewers understand your business. If `TemplateType` is set to `2` (promotional SMS), you must upload proof of user authorization. For more information, see [Upload specifications for user authorization materials](https://help.aliyun.com/document_detail/312341.html).
    shared_ptr<string> moreDataShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The SMS signature associated with the template.
    shared_ptr<string> relatedSignName_ {};
    // Describe your business scenario, including a URL if applicable. You must also provide a complete SMS message example with populated variables. Providing this information as required is critical for template approval.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The code of the rejected SMS template. You can find the template code on the [Messages in Chinese Mainland > Template Management](https://dysms.console.aliyun.com/domestic/text/template) tab in the console or by calling the [QuerySmsTemplateList](~~QuerySmsTemplateList~~) operation.
    // 
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
    // The new template content, up to 500 characters long.
    // 
    // The template content and its variables must comply with [SMS template specifications](https://help.aliyun.com/document_detail/463161.html) to be approved. To increase the approval rate and efficiency, refer to the common examples on the [Apply for Template](https://dysms.console.aliyun.com/domestic/text/template/add) page. For more information about variable specifications, see [TemplateContent parameter variable specifications](https://help.aliyun.com/document_detail/2806243.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateContent_ {};
    // The name of the SMS template, up to 30 characters long. You can find the names of rejected templates on the [Messages in Chinese Mainland > Template Management](https://dysms.console.aliyun.com/domestic/text/template) tab in the console or by calling the [QuerySmsTemplateList](~~QuerySmsTemplateList~~) operation.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The rules for the variables in the template. For details on how to define these rules, see the [example document](https://help.aliyun.com/document_detail/2806243.html).
    shared_ptr<string> templateRule_ {};
    // The SMS type. Valid values:
    // 
    // - **0**: verification code.
    // 
    // - **1**: SMS notification.
    // 
    // - **2**: promotional SMS.
    // 
    // - **3**: international/regional message.
    // 
    // > Only enterprise-verified users can apply for promotional SMS and international/regional messages. For more information about the differences between personal and enterprise accounts, see [Usage notes](https://help.aliyun.com/zh/sms/user-guide/usage-notes?spm=a2c4g.11186623.0.0.67447f576NJnE8).
    // 
    // This parameter is required.
    shared_ptr<int32_t> templateType_ {};
    // >Warning: 
    // 
    // To manage SMS content security, messages that contain traffic-driving information such as phone numbers and URLs may be blocked by carriers, which can cause delivery failures. We recommend that you avoid including such information in your SMS templates to prevent delivery failures.
    // 
    // 
    // 
    // A JSON string that contains a list of traffic-driving information.
    // >Notice: The value must be in the JSON format. Convert the value to a string before you pass it in.
    // 
    // ### 1. Fields
    // 
    // {
    // "trafficDrivingType":"Traffic-driving type",
    // "trafficDrivingContent":"Traffic-driving content",
    // "variableName":"variable name",
    // "companyName":"Name of the enterprise or public institution",
    // "organizationCode":"Unified Social Credit Code",
    // "icpNo":"ICP filing/permit number",
    // "icpPicOssKey":"OSS key of the ICP filing screenshot",
    // "companyDifferentFromSignQuaReason":"The reason why the name of the enterprise or public institution is different from that in the SMS signature qualification"
    // }
    // 
    // ### 2. Notes
    // 
    // - If the content is not a variable, do not pass the `variableName` field.
    // 
    // - If the name of the enterprise or public institution is different from that in the SMS signature qualification, provide the `companyDifferentFromSignQuaReason` field.
    // 
    // - If `trafficDrivingType` is set to `DOMAIN`, you must provide all the fields.
    // 
    // - For `trafficDrivingType` values other than `DOMAIN`, the `trafficDrivingType`, `trafficDrivingContent`, `companyName`, and `organizationCode` fields are required. The `variableName` and `companyDifferentFromSignQuaReason` fields are optional.
    // 
    // ### 3. TrafficDrivingType enumeration
    // 
    // >Warning: 
    // 
    // Due to regulatory requirements, mobile numbers are not supported.
    // 
    // 
    // 
    // - `DOMAIN`: A domain name.
    // 
    // - `FIXED_PHONE`: A fixed-line phone number.
    // 
    // - `400_PHONE`: A phone number that starts with 400.
    // 
    // - `800_PHONE`: A phone number that starts with 800.
    // 
    // - `95_PHONE`: A phone number that starts with 95.
    // 
    // - `96_PHONE`: A phone number that starts with 96.
    // 
    // - `1_PHONE`: A 3-digit to 8-digit phone number that starts with 1.
    // 
    // - `OTHER_PHONE`: Another type of phone number.
    shared_ptr<string> trafficDriving_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
