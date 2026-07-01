// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(SignList, signList_);
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
      DARABONBA_PTR_FROM_JSON(SignList, signList_);
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
    class SignList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SignList& obj) { 
        DARABONBA_PTR_TO_JSON(SignList, signList_);
      };
      friend void from_json(const Darabonba::Json& j, SignList& obj) { 
        DARABONBA_PTR_FROM_JSON(SignList, signList_);
      };
      SignList() = default ;
      SignList(const SignList &) = default ;
      SignList(SignList &&) = default ;
      SignList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SignList() = default ;
      SignList& operator=(const SignList &) = default ;
      SignList& operator=(SignList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->signList_ == nullptr; };
      // signList Field Functions 
      bool hasSignList() const { return this->signList_ != nullptr;};
      void deleteSignList() { this->signList_ = nullptr;};
      inline const vector<string> & getSignList() const { DARABONBA_PTR_GET_CONST(signList_, vector<string>) };
      inline vector<string> getSignList() { DARABONBA_PTR_GET(signList_, vector<string>) };
      inline SignList& setSignList(const vector<string> & signList) { DARABONBA_PTR_SET_VALUE(signList_, signList) };
      inline SignList& setSignList(vector<string> && signList) { DARABONBA_PTR_SET_RVALUE(signList_, signList) };


    protected:
      shared_ptr<vector<string>> signList_ {};
    };

    class MoreDataFileUrlList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MoreDataFileUrlList& obj) { 
        DARABONBA_PTR_TO_JSON(MoreDataFileUrl, moreDataFileUrl_);
      };
      friend void from_json(const Darabonba::Json& j, MoreDataFileUrlList& obj) { 
        DARABONBA_PTR_FROM_JSON(MoreDataFileUrl, moreDataFileUrl_);
      };
      MoreDataFileUrlList() = default ;
      MoreDataFileUrlList(const MoreDataFileUrlList &) = default ;
      MoreDataFileUrlList(MoreDataFileUrlList &&) = default ;
      MoreDataFileUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MoreDataFileUrlList() = default ;
      MoreDataFileUrlList& operator=(const MoreDataFileUrlList &) = default ;
      MoreDataFileUrlList& operator=(MoreDataFileUrlList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->moreDataFileUrl_ == nullptr; };
      // moreDataFileUrl Field Functions 
      bool hasMoreDataFileUrl() const { return this->moreDataFileUrl_ != nullptr;};
      void deleteMoreDataFileUrl() { this->moreDataFileUrl_ = nullptr;};
      inline const vector<string> & getMoreDataFileUrl() const { DARABONBA_PTR_GET_CONST(moreDataFileUrl_, vector<string>) };
      inline vector<string> getMoreDataFileUrl() { DARABONBA_PTR_GET(moreDataFileUrl_, vector<string>) };
      inline MoreDataFileUrlList& setMoreDataFileUrl(const vector<string> & moreDataFileUrl) { DARABONBA_PTR_SET_VALUE(moreDataFileUrl_, moreDataFileUrl) };
      inline MoreDataFileUrlList& setMoreDataFileUrl(vector<string> && moreDataFileUrl) { DARABONBA_PTR_SET_RVALUE(moreDataFileUrl_, moreDataFileUrl) };


    protected:
      shared_ptr<vector<string>> moreDataFileUrl_ {};
    };

    class FileUrlList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileUrlList& obj) { 
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      };
      friend void from_json(const Darabonba::Json& j, FileUrlList& obj) { 
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      };
      FileUrlList() = default ;
      FileUrlList(const FileUrlList &) = default ;
      FileUrlList(FileUrlList &&) = default ;
      FileUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileUrlList() = default ;
      FileUrlList& operator=(const FileUrlList &) = default ;
      FileUrlList& operator=(FileUrlList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileUrl_ == nullptr; };
      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline const vector<string> & getFileUrl() const { DARABONBA_PTR_GET_CONST(fileUrl_, vector<string>) };
      inline vector<string> getFileUrl() { DARABONBA_PTR_GET(fileUrl_, vector<string>) };
      inline FileUrlList& setFileUrl(const vector<string> & fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };
      inline FileUrlList& setFileUrl(vector<string> && fileUrl) { DARABONBA_PTR_SET_RVALUE(fileUrl_, fileUrl) };


    protected:
      shared_ptr<vector<string>> fileUrl_ {};
    };

    class AuditInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuditInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AuditDate, auditDate_);
        DARABONBA_PTR_TO_JSON(RejectInfo, rejectInfo_);
      };
      friend void from_json(const Darabonba::Json& j, AuditInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditDate, auditDate_);
        DARABONBA_PTR_FROM_JSON(RejectInfo, rejectInfo_);
      };
      AuditInfo() = default ;
      AuditInfo(const AuditInfo &) = default ;
      AuditInfo(AuditInfo &&) = default ;
      AuditInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuditInfo() = default ;
      AuditInfo& operator=(const AuditInfo &) = default ;
      AuditInfo& operator=(AuditInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditDate_ == nullptr
        && this->rejectInfo_ == nullptr; };
      // auditDate Field Functions 
      bool hasAuditDate() const { return this->auditDate_ != nullptr;};
      void deleteAuditDate() { this->auditDate_ = nullptr;};
      inline string getAuditDate() const { DARABONBA_PTR_GET_DEFAULT(auditDate_, "") };
      inline AuditInfo& setAuditDate(string auditDate) { DARABONBA_PTR_SET_VALUE(auditDate_, auditDate) };


      // rejectInfo Field Functions 
      bool hasRejectInfo() const { return this->rejectInfo_ != nullptr;};
      void deleteRejectInfo() { this->rejectInfo_ = nullptr;};
      inline string getRejectInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectInfo_, "") };
      inline AuditInfo& setRejectInfo(string rejectInfo) { DARABONBA_PTR_SET_VALUE(rejectInfo_, rejectInfo) };


    protected:
      // 审核时间。
      shared_ptr<string> auditDate_ {};
      // 审核未通过的原因。
      shared_ptr<string> rejectInfo_ {};
    };

    virtual bool empty() const override { return this->applyScene_ == nullptr
        && this->auditInfo_ == nullptr && this->code_ == nullptr && this->createDate_ == nullptr && this->fileUrlList_ == nullptr && this->intlType_ == nullptr
        && this->message_ == nullptr && this->moreDataFileUrlList_ == nullptr && this->orderId_ == nullptr && this->relatedSignName_ == nullptr && this->remark_ == nullptr
        && this->requestId_ == nullptr && this->signList_ == nullptr && this->templateCode_ == nullptr && this->templateContent_ == nullptr && this->templateName_ == nullptr
        && this->templateStatus_ == nullptr && this->templateTag_ == nullptr && this->templateType_ == nullptr && this->variableAttribute_ == nullptr && this->vendorAuditStatus_ == nullptr; };
    // applyScene Field Functions 
    bool hasApplyScene() const { return this->applyScene_ != nullptr;};
    void deleteApplyScene() { this->applyScene_ = nullptr;};
    inline string getApplyScene() const { DARABONBA_PTR_GET_DEFAULT(applyScene_, "") };
    inline GetSmsTemplateResponseBody& setApplyScene(string applyScene) { DARABONBA_PTR_SET_VALUE(applyScene_, applyScene) };


    // auditInfo Field Functions 
    bool hasAuditInfo() const { return this->auditInfo_ != nullptr;};
    void deleteAuditInfo() { this->auditInfo_ = nullptr;};
    inline const GetSmsTemplateResponseBody::AuditInfo & getAuditInfo() const { DARABONBA_PTR_GET_CONST(auditInfo_, GetSmsTemplateResponseBody::AuditInfo) };
    inline GetSmsTemplateResponseBody::AuditInfo getAuditInfo() { DARABONBA_PTR_GET(auditInfo_, GetSmsTemplateResponseBody::AuditInfo) };
    inline GetSmsTemplateResponseBody& setAuditInfo(const GetSmsTemplateResponseBody::AuditInfo & auditInfo) { DARABONBA_PTR_SET_VALUE(auditInfo_, auditInfo) };
    inline GetSmsTemplateResponseBody& setAuditInfo(GetSmsTemplateResponseBody::AuditInfo && auditInfo) { DARABONBA_PTR_SET_RVALUE(auditInfo_, auditInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmsTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetSmsTemplateResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // fileUrlList Field Functions 
    bool hasFileUrlList() const { return this->fileUrlList_ != nullptr;};
    void deleteFileUrlList() { this->fileUrlList_ = nullptr;};
    inline const GetSmsTemplateResponseBody::FileUrlList & getFileUrlList() const { DARABONBA_PTR_GET_CONST(fileUrlList_, GetSmsTemplateResponseBody::FileUrlList) };
    inline GetSmsTemplateResponseBody::FileUrlList getFileUrlList() { DARABONBA_PTR_GET(fileUrlList_, GetSmsTemplateResponseBody::FileUrlList) };
    inline GetSmsTemplateResponseBody& setFileUrlList(const GetSmsTemplateResponseBody::FileUrlList & fileUrlList) { DARABONBA_PTR_SET_VALUE(fileUrlList_, fileUrlList) };
    inline GetSmsTemplateResponseBody& setFileUrlList(GetSmsTemplateResponseBody::FileUrlList && fileUrlList) { DARABONBA_PTR_SET_RVALUE(fileUrlList_, fileUrlList) };


    // intlType Field Functions 
    bool hasIntlType() const { return this->intlType_ != nullptr;};
    void deleteIntlType() { this->intlType_ = nullptr;};
    inline int32_t getIntlType() const { DARABONBA_PTR_GET_DEFAULT(intlType_, 0) };
    inline GetSmsTemplateResponseBody& setIntlType(int32_t intlType) { DARABONBA_PTR_SET_VALUE(intlType_, intlType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmsTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // moreDataFileUrlList Field Functions 
    bool hasMoreDataFileUrlList() const { return this->moreDataFileUrlList_ != nullptr;};
    void deleteMoreDataFileUrlList() { this->moreDataFileUrlList_ = nullptr;};
    inline const GetSmsTemplateResponseBody::MoreDataFileUrlList & getMoreDataFileUrlList() const { DARABONBA_PTR_GET_CONST(moreDataFileUrlList_, GetSmsTemplateResponseBody::MoreDataFileUrlList) };
    inline GetSmsTemplateResponseBody::MoreDataFileUrlList getMoreDataFileUrlList() { DARABONBA_PTR_GET(moreDataFileUrlList_, GetSmsTemplateResponseBody::MoreDataFileUrlList) };
    inline GetSmsTemplateResponseBody& setMoreDataFileUrlList(const GetSmsTemplateResponseBody::MoreDataFileUrlList & moreDataFileUrlList) { DARABONBA_PTR_SET_VALUE(moreDataFileUrlList_, moreDataFileUrlList) };
    inline GetSmsTemplateResponseBody& setMoreDataFileUrlList(GetSmsTemplateResponseBody::MoreDataFileUrlList && moreDataFileUrlList) { DARABONBA_PTR_SET_RVALUE(moreDataFileUrlList_, moreDataFileUrlList) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetSmsTemplateResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // relatedSignName Field Functions 
    bool hasRelatedSignName() const { return this->relatedSignName_ != nullptr;};
    void deleteRelatedSignName() { this->relatedSignName_ = nullptr;};
    inline string getRelatedSignName() const { DARABONBA_PTR_GET_DEFAULT(relatedSignName_, "") };
    inline GetSmsTemplateResponseBody& setRelatedSignName(string relatedSignName) { DARABONBA_PTR_SET_VALUE(relatedSignName_, relatedSignName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetSmsTemplateResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmsTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signList Field Functions 
    bool hasSignList() const { return this->signList_ != nullptr;};
    void deleteSignList() { this->signList_ = nullptr;};
    inline const GetSmsTemplateResponseBody::SignList & getSignList() const { DARABONBA_PTR_GET_CONST(signList_, GetSmsTemplateResponseBody::SignList) };
    inline GetSmsTemplateResponseBody::SignList getSignList() { DARABONBA_PTR_GET(signList_, GetSmsTemplateResponseBody::SignList) };
    inline GetSmsTemplateResponseBody& setSignList(const GetSmsTemplateResponseBody::SignList & signList) { DARABONBA_PTR_SET_VALUE(signList_, signList) };
    inline GetSmsTemplateResponseBody& setSignList(GetSmsTemplateResponseBody::SignList && signList) { DARABONBA_PTR_SET_RVALUE(signList_, signList) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline GetSmsTemplateResponseBody& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline GetSmsTemplateResponseBody& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetSmsTemplateResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline string getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
    inline GetSmsTemplateResponseBody& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // templateTag Field Functions 
    bool hasTemplateTag() const { return this->templateTag_ != nullptr;};
    void deleteTemplateTag() { this->templateTag_ = nullptr;};
    inline int32_t getTemplateTag() const { DARABONBA_PTR_GET_DEFAULT(templateTag_, 0) };
    inline GetSmsTemplateResponseBody& setTemplateTag(int32_t templateTag) { DARABONBA_PTR_SET_VALUE(templateTag_, templateTag) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline GetSmsTemplateResponseBody& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // variableAttribute Field Functions 
    bool hasVariableAttribute() const { return this->variableAttribute_ != nullptr;};
    void deleteVariableAttribute() { this->variableAttribute_ = nullptr;};
    inline string getVariableAttribute() const { DARABONBA_PTR_GET_DEFAULT(variableAttribute_, "") };
    inline GetSmsTemplateResponseBody& setVariableAttribute(string variableAttribute) { DARABONBA_PTR_SET_VALUE(variableAttribute_, variableAttribute) };


    // vendorAuditStatus Field Functions 
    bool hasVendorAuditStatus() const { return this->vendorAuditStatus_ != nullptr;};
    void deleteVendorAuditStatus() { this->vendorAuditStatus_ = nullptr;};
    inline     const Darabonba::Json & getVendorAuditStatus() const { DARABONBA_GET(vendorAuditStatus_) };
    Darabonba::Json & getVendorAuditStatus() { DARABONBA_GET(vendorAuditStatus_) };
    inline GetSmsTemplateResponseBody& setVendorAuditStatus(const Darabonba::Json & vendorAuditStatus) { DARABONBA_SET_VALUE(vendorAuditStatus_, vendorAuditStatus) };
    inline GetSmsTemplateResponseBody& setVendorAuditStatus(Darabonba::Json && vendorAuditStatus) { DARABONBA_SET_RVALUE(vendorAuditStatus_, vendorAuditStatus) };


  protected:
    // 应用场景内容。
    shared_ptr<string> applyScene_ {};
    // 审核信息。
    shared_ptr<GetSmsTemplateResponseBody::AuditInfo> auditInfo_ {};
    // 请求状态码。取值：
    // 
    // * OK：代表请求成功。
    // * 其他错误码，请参见[API错误码](https://help.aliyun.com/document_detail/101346.html)。
    shared_ptr<string> code_ {};
    // 创建短信模板的时间。
    shared_ptr<string> createDate_ {};
    shared_ptr<GetSmsTemplateResponseBody::FileUrlList> fileUrlList_ {};
    // 国际/港澳台模板类型。当**TemplateType**参数返回值为**3**时，此参数取值：
    // - **0**：短信通知。
    // - **1**：推广短信。
    // - **2**：验证码。
    shared_ptr<int32_t> intlType_ {};
    // 状态码的描述。
    shared_ptr<string> message_ {};
    shared_ptr<GetSmsTemplateResponseBody::MoreDataFileUrlList> moreDataFileUrlList_ {};
    // 工单号。
    // 
    // 审核人员查询审核时会用到此参数。您需要审核加急时需要提供此工单号。
    shared_ptr<string> orderId_ {};
    // 申请模板时，关联的短信签名。
    shared_ptr<string> relatedSignName_ {};
    // 短信模板申请说明，是模板审核的参考信息之一。
    shared_ptr<string> remark_ {};
    // 本次调用请求的ID，是由阿里云为该请求生成的唯一标识符，可用于排查和定位问题。
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSmsTemplateResponseBody::SignList> signList_ {};
    // 短信模板Code。
    shared_ptr<string> templateCode_ {};
    // 短信模板内容。
    shared_ptr<string> templateContent_ {};
    // 短信模板名称。
    shared_ptr<string> templateName_ {};
    // 模板审核状态。返回值：
    // 
    // - **0**：审核中。
    // - **1**：通过审核。
    // - **2**：未通过审核，会返回审核失败的原因，请参考[短信审核失败的处理建议](https://www.alibabacloud.com/help/en/sms/user-guide/causes-of-application-failures-and-suggestions)，调用[UpdateSmsTemplate](https://www.alibabacloud.com/help/en/sms/developer-reference/api-dysmsapi-2017-05-25-updatesmstemplate)接口或在[模板管理](https://dysms.console.aliyun.com/domestic/text/template)页面修改短信模板。
    // - **10**：取消审核。
    shared_ptr<string> templateStatus_ {};
    // 模板标识。取值：
    // 
    // - 2：用户自定义创建模板。
    // 
    // - 3：系统赠送模板。
    // 
    // - 4：测试模板。
    shared_ptr<int32_t> templateTag_ {};
    // 短信类型。取值：
    // 
    // - **0**：验证码。
    // - **1**：短信通知。
    // - **2**：推广短信。
    // - **3**：国际/港澳台消息。
    // 
    // > 仅支持企业认证用户申请推广短信和国际/港澳台消息。个人用户与企业用户权益区别详情请参见[使用须知](https://www.alibabacloud.com/help/en/sms/user-guide/usage-notes)。
    shared_ptr<string> templateType_ {};
    // 模板变量规则。
    // 
    // 模板变量规则详情，请参见[示例文档](https://www.alibabacloud.com/help/en/sms/templaterule-template-variable-parameter-filling-example)。
    shared_ptr<string> variableAttribute_ {};
    // 各运营商审核状态，仅数字短信会返回该参数。
    // 
    // 
    // key代表运营商。取值：
    // 
    // - MOBILE_VENDOR：中国移动。
    // 
    // - TELECOM_VENDOR：中国电信。
    // 
    // - UNICOM_VENDOR：中国联通。
    // 
    //  value代表审核状态。取值： 
    // 
    // - 0：审核中。
    // 
    // - 1：通过。
    // 
    //  - 2：不通过。
    // 
    //  - 15：已失效。
    Darabonba::Json vendorAuditStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
