// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DescTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmsContent, smsContent_);
      DARABONBA_PTR_TO_JSON(SmsType, smsType_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateNickName, templateNickName_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(TemplateSubject, templateSubject_);
      DARABONBA_PTR_TO_JSON(TemplateText, templateText_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmsContent, smsContent_);
      DARABONBA_PTR_FROM_JSON(SmsType, smsType_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateNickName, templateNickName_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateSubject, templateSubject_);
      DARABONBA_PTR_FROM_JSON(TemplateText, templateText_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    DescTemplateResponseBody() = default ;
    DescTemplateResponseBody(const DescTemplateResponseBody &) = default ;
    DescTemplateResponseBody(DescTemplateResponseBody &&) = default ;
    DescTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescTemplateResponseBody() = default ;
    DescTemplateResponseBody& operator=(const DescTemplateResponseBody &) = default ;
    DescTemplateResponseBody& operator=(DescTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->remark_ == nullptr && this->requestId_ == nullptr && this->smsContent_ == nullptr && this->smsType_ == nullptr && this->templateName_ == nullptr
        && this->templateNickName_ == nullptr && this->templateStatus_ == nullptr && this->templateSubject_ == nullptr && this->templateText_ == nullptr && this->templateType_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescTemplateResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescTemplateResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smsContent Field Functions 
    bool hasSmsContent() const { return this->smsContent_ != nullptr;};
    void deleteSmsContent() { this->smsContent_ = nullptr;};
    inline string getSmsContent() const { DARABONBA_PTR_GET_DEFAULT(smsContent_, "") };
    inline DescTemplateResponseBody& setSmsContent(string smsContent) { DARABONBA_PTR_SET_VALUE(smsContent_, smsContent) };


    // smsType Field Functions 
    bool hasSmsType() const { return this->smsType_ != nullptr;};
    void deleteSmsType() { this->smsType_ = nullptr;};
    inline string getSmsType() const { DARABONBA_PTR_GET_DEFAULT(smsType_, "") };
    inline DescTemplateResponseBody& setSmsType(string smsType) { DARABONBA_PTR_SET_VALUE(smsType_, smsType) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescTemplateResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateNickName Field Functions 
    bool hasTemplateNickName() const { return this->templateNickName_ != nullptr;};
    void deleteTemplateNickName() { this->templateNickName_ = nullptr;};
    inline string getTemplateNickName() const { DARABONBA_PTR_GET_DEFAULT(templateNickName_, "") };
    inline DescTemplateResponseBody& setTemplateNickName(string templateNickName) { DARABONBA_PTR_SET_VALUE(templateNickName_, templateNickName) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline string getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
    inline DescTemplateResponseBody& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // templateSubject Field Functions 
    bool hasTemplateSubject() const { return this->templateSubject_ != nullptr;};
    void deleteTemplateSubject() { this->templateSubject_ = nullptr;};
    inline string getTemplateSubject() const { DARABONBA_PTR_GET_DEFAULT(templateSubject_, "") };
    inline DescTemplateResponseBody& setTemplateSubject(string templateSubject) { DARABONBA_PTR_SET_VALUE(templateSubject_, templateSubject) };


    // templateText Field Functions 
    bool hasTemplateText() const { return this->templateText_ != nullptr;};
    void deleteTemplateText() { this->templateText_ = nullptr;};
    inline string getTemplateText() const { DARABONBA_PTR_GET_DEFAULT(templateText_, "") };
    inline DescTemplateResponseBody& setTemplateText(string templateText) { DARABONBA_PTR_SET_VALUE(templateText_, templateText) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescTemplateResponseBody& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> smsContent_ {};
    shared_ptr<string> smsType_ {};
    shared_ptr<string> templateName_ {};
    shared_ptr<string> templateNickName_ {};
    shared_ptr<string> templateStatus_ {};
    shared_ptr<string> templateSubject_ {};
    shared_ptr<string> templateText_ {};
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
