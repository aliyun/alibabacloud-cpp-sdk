// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSmsTemplateResponseBodyAuditInfo.hpp>
#include <alibabacloud/models/GetSmsTemplateResponseBodyFileUrlList.hpp>
#include <alibabacloud/models/GetSmsTemplateResponseBodyMoreDataFileUrlList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetSmsTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyScene, applyScene_);
      DARABONBA_PTR_TO_JSON(AuditInfo, auditInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(FileUrlList, fileUrlList_);
      DARABONBA_PTR_TO_JSON(IntlType, intlType_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MoreDataFileUrlList, moreDataFileUrlList_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RelatedSignName, relatedSignName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(TemplateTag, templateTag_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(VariableAttribute, variableAttribute_);
      DARABONBA_ANY_TO_JSON(VendorAuditStatus, vendorAuditStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyScene, applyScene_);
      DARABONBA_PTR_FROM_JSON(AuditInfo, auditInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(FileUrlList, fileUrlList_);
      DARABONBA_PTR_FROM_JSON(IntlType, intlType_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MoreDataFileUrlList, moreDataFileUrlList_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RelatedSignName, relatedSignName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateTag, templateTag_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(VariableAttribute, variableAttribute_);
      DARABONBA_ANY_FROM_JSON(VendorAuditStatus, vendorAuditStatus_);
    };
    GetSmsTemplateResponseBody() = default ;
    GetSmsTemplateResponseBody(const GetSmsTemplateResponseBody &) = default ;
    GetSmsTemplateResponseBody(GetSmsTemplateResponseBody &&) = default ;
    GetSmsTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsTemplateResponseBody() = default ;
    GetSmsTemplateResponseBody& operator=(const GetSmsTemplateResponseBody &) = default ;
    GetSmsTemplateResponseBody& operator=(GetSmsTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyScene_ != nullptr
        && this->auditInfo_ != nullptr && this->code_ != nullptr && this->createDate_ != nullptr && this->fileUrlList_ != nullptr && this->intlType_ != nullptr
        && this->message_ != nullptr && this->moreDataFileUrlList_ != nullptr && this->orderId_ != nullptr && this->relatedSignName_ != nullptr && this->remark_ != nullptr
        && this->requestId_ != nullptr && this->templateCode_ != nullptr && this->templateContent_ != nullptr && this->templateName_ != nullptr && this->templateStatus_ != nullptr
        && this->templateTag_ != nullptr && this->templateType_ != nullptr && this->variableAttribute_ != nullptr && this->vendorAuditStatus_ != nullptr; };
    // applyScene Field Functions 
    bool hasApplyScene() const { return this->applyScene_ != nullptr;};
    void deleteApplyScene() { this->applyScene_ = nullptr;};
    inline string applyScene() const { DARABONBA_PTR_GET_DEFAULT(applyScene_, "") };
    inline GetSmsTemplateResponseBody& setApplyScene(string applyScene) { DARABONBA_PTR_SET_VALUE(applyScene_, applyScene) };


    // auditInfo Field Functions 
    bool hasAuditInfo() const { return this->auditInfo_ != nullptr;};
    void deleteAuditInfo() { this->auditInfo_ = nullptr;};
    inline const GetSmsTemplateResponseBodyAuditInfo & auditInfo() const { DARABONBA_PTR_GET_CONST(auditInfo_, GetSmsTemplateResponseBodyAuditInfo) };
    inline GetSmsTemplateResponseBodyAuditInfo auditInfo() { DARABONBA_PTR_GET(auditInfo_, GetSmsTemplateResponseBodyAuditInfo) };
    inline GetSmsTemplateResponseBody& setAuditInfo(const GetSmsTemplateResponseBodyAuditInfo & auditInfo) { DARABONBA_PTR_SET_VALUE(auditInfo_, auditInfo) };
    inline GetSmsTemplateResponseBody& setAuditInfo(GetSmsTemplateResponseBodyAuditInfo && auditInfo) { DARABONBA_PTR_SET_RVALUE(auditInfo_, auditInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmsTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetSmsTemplateResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // fileUrlList Field Functions 
    bool hasFileUrlList() const { return this->fileUrlList_ != nullptr;};
    void deleteFileUrlList() { this->fileUrlList_ = nullptr;};
    inline const GetSmsTemplateResponseBodyFileUrlList & fileUrlList() const { DARABONBA_PTR_GET_CONST(fileUrlList_, GetSmsTemplateResponseBodyFileUrlList) };
    inline GetSmsTemplateResponseBodyFileUrlList fileUrlList() { DARABONBA_PTR_GET(fileUrlList_, GetSmsTemplateResponseBodyFileUrlList) };
    inline GetSmsTemplateResponseBody& setFileUrlList(const GetSmsTemplateResponseBodyFileUrlList & fileUrlList) { DARABONBA_PTR_SET_VALUE(fileUrlList_, fileUrlList) };
    inline GetSmsTemplateResponseBody& setFileUrlList(GetSmsTemplateResponseBodyFileUrlList && fileUrlList) { DARABONBA_PTR_SET_RVALUE(fileUrlList_, fileUrlList) };


    // intlType Field Functions 
    bool hasIntlType() const { return this->intlType_ != nullptr;};
    void deleteIntlType() { this->intlType_ = nullptr;};
    inline int32_t intlType() const { DARABONBA_PTR_GET_DEFAULT(intlType_, 0) };
    inline GetSmsTemplateResponseBody& setIntlType(int32_t intlType) { DARABONBA_PTR_SET_VALUE(intlType_, intlType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmsTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // moreDataFileUrlList Field Functions 
    bool hasMoreDataFileUrlList() const { return this->moreDataFileUrlList_ != nullptr;};
    void deleteMoreDataFileUrlList() { this->moreDataFileUrlList_ = nullptr;};
    inline const GetSmsTemplateResponseBodyMoreDataFileUrlList & moreDataFileUrlList() const { DARABONBA_PTR_GET_CONST(moreDataFileUrlList_, GetSmsTemplateResponseBodyMoreDataFileUrlList) };
    inline GetSmsTemplateResponseBodyMoreDataFileUrlList moreDataFileUrlList() { DARABONBA_PTR_GET(moreDataFileUrlList_, GetSmsTemplateResponseBodyMoreDataFileUrlList) };
    inline GetSmsTemplateResponseBody& setMoreDataFileUrlList(const GetSmsTemplateResponseBodyMoreDataFileUrlList & moreDataFileUrlList) { DARABONBA_PTR_SET_VALUE(moreDataFileUrlList_, moreDataFileUrlList) };
    inline GetSmsTemplateResponseBody& setMoreDataFileUrlList(GetSmsTemplateResponseBodyMoreDataFileUrlList && moreDataFileUrlList) { DARABONBA_PTR_SET_RVALUE(moreDataFileUrlList_, moreDataFileUrlList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetSmsTemplateResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // relatedSignName Field Functions 
    bool hasRelatedSignName() const { return this->relatedSignName_ != nullptr;};
    void deleteRelatedSignName() { this->relatedSignName_ = nullptr;};
    inline string relatedSignName() const { DARABONBA_PTR_GET_DEFAULT(relatedSignName_, "") };
    inline GetSmsTemplateResponseBody& setRelatedSignName(string relatedSignName) { DARABONBA_PTR_SET_VALUE(relatedSignName_, relatedSignName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetSmsTemplateResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmsTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline GetSmsTemplateResponseBody& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline GetSmsTemplateResponseBody& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetSmsTemplateResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline string templateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
    inline GetSmsTemplateResponseBody& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // templateTag Field Functions 
    bool hasTemplateTag() const { return this->templateTag_ != nullptr;};
    void deleteTemplateTag() { this->templateTag_ = nullptr;};
    inline int32_t templateTag() const { DARABONBA_PTR_GET_DEFAULT(templateTag_, 0) };
    inline GetSmsTemplateResponseBody& setTemplateTag(int32_t templateTag) { DARABONBA_PTR_SET_VALUE(templateTag_, templateTag) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline GetSmsTemplateResponseBody& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // variableAttribute Field Functions 
    bool hasVariableAttribute() const { return this->variableAttribute_ != nullptr;};
    void deleteVariableAttribute() { this->variableAttribute_ = nullptr;};
    inline string variableAttribute() const { DARABONBA_PTR_GET_DEFAULT(variableAttribute_, "") };
    inline GetSmsTemplateResponseBody& setVariableAttribute(string variableAttribute) { DARABONBA_PTR_SET_VALUE(variableAttribute_, variableAttribute) };


    // vendorAuditStatus Field Functions 
    bool hasVendorAuditStatus() const { return this->vendorAuditStatus_ != nullptr;};
    void deleteVendorAuditStatus() { this->vendorAuditStatus_ = nullptr;};
    inline     const Darabonba::Json & vendorAuditStatus() const { DARABONBA_GET(vendorAuditStatus_) };
    Darabonba::Json & vendorAuditStatus() { DARABONBA_GET(vendorAuditStatus_) };
    inline GetSmsTemplateResponseBody& setVendorAuditStatus(const Darabonba::Json & vendorAuditStatus) { DARABONBA_SET_VALUE(vendorAuditStatus_, vendorAuditStatus) };
    inline GetSmsTemplateResponseBody& setVendorAuditStatus(Darabonba::Json & vendorAuditStatus) { DARABONBA_SET_RVALUE(vendorAuditStatus_, vendorAuditStatus) };


  protected:
    // Application scenario content.
    std::shared_ptr<string> applyScene_ = nullptr;
    // Audit information.
    std::shared_ptr<GetSmsTemplateResponseBodyAuditInfo> auditInfo_ = nullptr;
    // Request status code.
    // 
    // * OK indicates a successful request.
    // * For other error codes, please refer to [API Error Codes](https://help.aliyun.com/document_detail/101346.html).
    std::shared_ptr<string> code_ = nullptr;
    // The time when the SMS template was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // File information, compatible with signatures created by the [AddSmsSign](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-addsmstemplate?spm) API.
    std::shared_ptr<GetSmsTemplateResponseBodyFileUrlList> fileUrlList_ = nullptr;
    // International/Hong Kong, Macao, and Taiwan template type. When the **TemplateType** parameter is **3**, this parameter is required for international/Hong Kong, Macao, and Taiwan templates, with values:
    // - **0**: Verification code.
    // - **1**: SMS notification.
    // - **2**: Promotional SMS.
    std::shared_ptr<int32_t> intlType_ = nullptr;
    // Description of the status code.
    std::shared_ptr<string> message_ = nullptr;
    // Additional documentation information, supplementing uploaded business proof files or operational screenshots file list.
    std::shared_ptr<GetSmsTemplateResponseBodyMoreDataFileUrlList> moreDataFileUrlList_ = nullptr;
    // Work order number.
    // 
    // This parameter is used by auditors when querying the audit. You need to provide this work order number when requesting expedited review.
    std::shared_ptr<string> orderId_ = nullptr;
    // The SMS signature associated with the template when applied.
    std::shared_ptr<string> relatedSignName_ = nullptr;
    // Explanation for the SMS template application, which is one of the reference information for template review.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and issue定位.
    std::shared_ptr<string> requestId_ = nullptr;
    // SMS template code.
    std::shared_ptr<string> templateCode_ = nullptr;
    // Content of the SMS template.
    std::shared_ptr<string> templateContent_ = nullptr;
    // Name of the SMS template.
    std::shared_ptr<string> templateName_ = nullptr;
    // Template review status. Return values:
    // 
    // - **0**: Under review.
    // - **1**: Approved.
    // - **2**: Not approved, with reasons for failure returned. Please refer to [Handling Suggestions for Failed SMS Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm=a2c4g.11186623.0.0.41fd339f3bPSCQ), invoke the [UpdateSmsTemplate](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-updatesmstemplate?spm) API or modify the SMS template on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
    // - **10**: Review canceled.
    std::shared_ptr<string> templateStatus_ = nullptr;
    // Template identifier, indicating whether the template is user-defined or system-provided. Values:
    // 
    // - **2**: User-defined template.
    // 
    // - **3**: System-provided template.
    std::shared_ptr<int32_t> templateTag_ = nullptr;
    // SMS type. Values:
    // 
    // - **0**: Verification code.
    // - **1**: SMS notification.
    // - **2**: Promotional SMS.
    // - **3**: International/Hong Kong, Macao, and Taiwan messages.
    // 
    // > Only enterprise-certified users can apply for promotional SMS and international/Hong Kong, Macao, and Taiwan messages. For details on the differences between personal and enterprise user rights, please refer to [Usage Notes](https://help.aliyun.com/zh/sms/user-guide/usage-notes?spm=a2c4g.11186623.0.0.67447f576NJnE8).
    std::shared_ptr<string> templateType_ = nullptr;
    // Template variable rules.
    // 
    // For detailed rules of template variables, refer to the [Example Document](https://help.aliyun.com/zh/sms/templaterule-template-variable-parameter-filling-example).
    std::shared_ptr<string> variableAttribute_ = nullptr;
    Darabonba::Json vendorAuditStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
