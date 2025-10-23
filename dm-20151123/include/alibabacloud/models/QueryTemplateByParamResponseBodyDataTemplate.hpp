// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATEBYPARAMRESPONSEBODYDATATEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATEBYPARAMRESPONSEBODYDATATEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTemplateByParamResponseBodyDataTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateByParamResponseBodyDataTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(SmsStatus, smsStatus_);
      DARABONBA_PTR_TO_JSON(SmsTemplateCode, smsTemplateCode_);
      DARABONBA_PTR_TO_JSON(Smsrejectinfo, smsrejectinfo_);
      DARABONBA_PTR_TO_JSON(TemplateComment, templateComment_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(UtcCreatetime, utcCreatetime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateByParamResponseBodyDataTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(SmsStatus, smsStatus_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateCode, smsTemplateCode_);
      DARABONBA_PTR_FROM_JSON(Smsrejectinfo, smsrejectinfo_);
      DARABONBA_PTR_FROM_JSON(TemplateComment, templateComment_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(UtcCreatetime, utcCreatetime_);
    };
    QueryTemplateByParamResponseBodyDataTemplate() = default ;
    QueryTemplateByParamResponseBodyDataTemplate(const QueryTemplateByParamResponseBodyDataTemplate &) = default ;
    QueryTemplateByParamResponseBodyDataTemplate(QueryTemplateByParamResponseBodyDataTemplate &&) = default ;
    QueryTemplateByParamResponseBodyDataTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateByParamResponseBodyDataTemplate() = default ;
    QueryTemplateByParamResponseBodyDataTemplate& operator=(const QueryTemplateByParamResponseBodyDataTemplate &) = default ;
    QueryTemplateByParamResponseBodyDataTemplate& operator=(QueryTemplateByParamResponseBodyDataTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->smsStatus_ == nullptr && return this->smsTemplateCode_ == nullptr && return this->smsrejectinfo_ == nullptr && return this->templateComment_ == nullptr && return this->templateId_ == nullptr
        && return this->templateName_ == nullptr && return this->templateStatus_ == nullptr && return this->templateType_ == nullptr && return this->utcCreatetime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryTemplateByParamResponseBodyDataTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // smsStatus Field Functions 
    bool hasSmsStatus() const { return this->smsStatus_ != nullptr;};
    void deleteSmsStatus() { this->smsStatus_ = nullptr;};
    inline int32_t smsStatus() const { DARABONBA_PTR_GET_DEFAULT(smsStatus_, 0) };
    inline QueryTemplateByParamResponseBodyDataTemplate& setSmsStatus(int32_t smsStatus) { DARABONBA_PTR_SET_VALUE(smsStatus_, smsStatus) };


    // smsTemplateCode Field Functions 
    bool hasSmsTemplateCode() const { return this->smsTemplateCode_ != nullptr;};
    void deleteSmsTemplateCode() { this->smsTemplateCode_ = nullptr;};
    inline int32_t smsTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateCode_, 0) };
    inline QueryTemplateByParamResponseBodyDataTemplate& setSmsTemplateCode(int32_t smsTemplateCode) { DARABONBA_PTR_SET_VALUE(smsTemplateCode_, smsTemplateCode) };


    // smsrejectinfo Field Functions 
    bool hasSmsrejectinfo() const { return this->smsrejectinfo_ != nullptr;};
    void deleteSmsrejectinfo() { this->smsrejectinfo_ = nullptr;};
    inline int32_t smsrejectinfo() const { DARABONBA_PTR_GET_DEFAULT(smsrejectinfo_, 0) };
    inline QueryTemplateByParamResponseBodyDataTemplate& setSmsrejectinfo(int32_t smsrejectinfo) { DARABONBA_PTR_SET_VALUE(smsrejectinfo_, smsrejectinfo) };


    // templateComment Field Functions 
    bool hasTemplateComment() const { return this->templateComment_ != nullptr;};
    void deleteTemplateComment() { this->templateComment_ = nullptr;};
    inline string templateComment() const { DARABONBA_PTR_GET_DEFAULT(templateComment_, "") };
    inline QueryTemplateByParamResponseBodyDataTemplate& setTemplateComment(string templateComment) { DARABONBA_PTR_SET_VALUE(templateComment_, templateComment) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QueryTemplateByParamResponseBodyDataTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline QueryTemplateByParamResponseBodyDataTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline string templateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, "") };
    inline QueryTemplateByParamResponseBodyDataTemplate& setTemplateStatus(string templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline QueryTemplateByParamResponseBodyDataTemplate& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // utcCreatetime Field Functions 
    bool hasUtcCreatetime() const { return this->utcCreatetime_ != nullptr;};
    void deleteUtcCreatetime() { this->utcCreatetime_ = nullptr;};
    inline int64_t utcCreatetime() const { DARABONBA_PTR_GET_DEFAULT(utcCreatetime_, 0L) };
    inline QueryTemplateByParamResponseBodyDataTemplate& setUtcCreatetime(int64_t utcCreatetime) { DARABONBA_PTR_SET_VALUE(utcCreatetime_, utcCreatetime) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> smsStatus_ = nullptr;
    std::shared_ptr<int32_t> smsTemplateCode_ = nullptr;
    std::shared_ptr<int32_t> smsrejectinfo_ = nullptr;
    std::shared_ptr<string> templateComment_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> templateStatus_ = nullptr;
    std::shared_ptr<int32_t> templateType_ = nullptr;
    std::shared_ptr<int64_t> utcCreatetime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
