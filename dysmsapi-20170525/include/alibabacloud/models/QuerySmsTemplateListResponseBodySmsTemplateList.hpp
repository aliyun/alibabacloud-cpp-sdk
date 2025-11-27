// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSTEMPLATELISTRESPONSEBODYSMSTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSTEMPLATELISTRESPONSEBODYSMSTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySmsTemplateListResponseBodySmsTemplateListReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsTemplateListResponseBodySmsTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsTemplateListResponseBodySmsTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OuterTemplateType, outerTemplateType_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(TrafficDriving, trafficDriving_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsTemplateListResponseBodySmsTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OuterTemplateType, outerTemplateType_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(TrafficDriving, trafficDriving_);
    };
    QuerySmsTemplateListResponseBodySmsTemplateList() = default ;
    QuerySmsTemplateListResponseBodySmsTemplateList(const QuerySmsTemplateListResponseBodySmsTemplateList &) = default ;
    QuerySmsTemplateListResponseBodySmsTemplateList(QuerySmsTemplateListResponseBodySmsTemplateList &&) = default ;
    QuerySmsTemplateListResponseBodySmsTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsTemplateListResponseBodySmsTemplateList() = default ;
    QuerySmsTemplateListResponseBodySmsTemplateList& operator=(const QuerySmsTemplateListResponseBodySmsTemplateList &) = default ;
    QuerySmsTemplateListResponseBodySmsTemplateList& operator=(QuerySmsTemplateListResponseBodySmsTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && return this->createDate_ == nullptr && return this->orderId_ == nullptr && return this->outerTemplateType_ == nullptr && return this->reason_ == nullptr && return this->signatureName_ == nullptr
        && return this->templateCode_ == nullptr && return this->templateContent_ == nullptr && return this->templateName_ == nullptr && return this->templateType_ == nullptr && return this->trafficDriving_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outerTemplateType Field Functions 
    bool hasOuterTemplateType() const { return this->outerTemplateType_ != nullptr;};
    void deleteOuterTemplateType() { this->outerTemplateType_ = nullptr;};
    inline int32_t outerTemplateType() const { DARABONBA_PTR_GET_DEFAULT(outerTemplateType_, 0) };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setOuterTemplateType(int32_t outerTemplateType) { DARABONBA_PTR_SET_VALUE(outerTemplateType_, outerTemplateType) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline const Models::QuerySmsTemplateListResponseBodySmsTemplateListReason & reason() const { DARABONBA_PTR_GET_CONST(reason_, Models::QuerySmsTemplateListResponseBodySmsTemplateListReason) };
    inline Models::QuerySmsTemplateListResponseBodySmsTemplateListReason reason() { DARABONBA_PTR_GET(reason_, Models::QuerySmsTemplateListResponseBodySmsTemplateListReason) };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setReason(const Models::QuerySmsTemplateListResponseBodySmsTemplateListReason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setReason(Models::QuerySmsTemplateListResponseBodySmsTemplateListReason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


    // signatureName Field Functions 
    bool hasSignatureName() const { return this->signatureName_ != nullptr;};
    void deleteSignatureName() { this->signatureName_ = nullptr;};
    inline string signatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // trafficDriving Field Functions 
    bool hasTrafficDriving() const { return this->trafficDriving_ != nullptr;};
    void deleteTrafficDriving() { this->trafficDriving_ = nullptr;};
    inline string trafficDriving() const { DARABONBA_PTR_GET_DEFAULT(trafficDriving_, "") };
    inline QuerySmsTemplateListResponseBodySmsTemplateList& setTrafficDriving(string trafficDriving) { DARABONBA_PTR_SET_VALUE(trafficDriving_, trafficDriving) };


  protected:
    // The approval status of the message template. Valid values:
    // 
    // *   **AUDIT_STATE_INIT**: The message template is pending approval.
    // *   **AUDIT_STATE_PASS**: The message template is approved.
    // *   **AUDIT_STATE_NOT_PASS**: The message template is rejected. You can view the reason in the Reason response parameter.
    // *   **AUDIT_STATE_CANCEL** or **AUDIT_SATE_CANCEL**: The approval is canceled.
    std::shared_ptr<string> auditStatus_ = nullptr;
    // The time when the message template was created. The time is in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> createDate_ = nullptr;
    // The ticket ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The type of the message template. We recommend that you specify this parameter. Valid values:
    // 
    // *   **0**: verification code
    // *   **1**: notification message
    // *   **2**: promotional message
    // *   **3**: message sent to countries or regions outside the Chinese mainland
    // *   **7**: digital message
    // 
    // > The template type is the same as the value of the TemplateType parameter in the AddSmsTemplate and ModifySmsTemplate operations.
    std::shared_ptr<int32_t> outerTemplateType_ = nullptr;
    // The approval remarks.
    // 
    // *   If the value of AuditStatus is **AUDIT_STATE_PASS** or **AUDIT_STATE_INIT**, the value of Reason is No Approval Remarks.
    // *   If the value of AuditStatus is **AUDIT_STATE_NOT_PASS**, the reason why the message template is rejected is returned.
    std::shared_ptr<Models::QuerySmsTemplateListResponseBodySmsTemplateListReason> reason_ = nullptr;
    std::shared_ptr<string> signatureName_ = nullptr;
    // The code of the message template.
    // 
    // You can log on to the [Short Message Service (SMS) console](https://dysms.console.aliyun.com/dysms.htm), click **Go China** or **Go Globe** in the left-side navigation pane, and then view the template code on the **Templates** tab. You can also call the [AddSmsTemplate](https://help.aliyun.com/document_detail/121208.html) operation to obtain the template code.
    std::shared_ptr<string> templateCode_ = nullptr;
    // The content of the message template.
    std::shared_ptr<string> templateContent_ = nullptr;
    // The name of the message template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The type of the message template. Valid values:
    // 
    // *   **0**: notification message
    // *   **1**: promotional message
    // *   **2**: verification code
    // *   **6**: message sent to countries or regions outside the Chinese mainland
    // *   **7**: digital message
    std::shared_ptr<int32_t> templateType_ = nullptr;
    std::shared_ptr<string> trafficDriving_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
