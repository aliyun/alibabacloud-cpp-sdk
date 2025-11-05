// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUPONAPPROVALSTATUSLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_COUPONAPPROVALSTATUSLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CouponApprovalStatusListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CouponApprovalStatusListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IssuerAccount, issuerAccount_);
      DARABONBA_PTR_TO_JSON(IssuerUid, issuerUid_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_TO_JSON(TimeOfRequest, timeOfRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CouponApprovalStatusListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IssuerAccount, issuerAccount_);
      DARABONBA_PTR_FROM_JSON(IssuerUid, issuerUid_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
      DARABONBA_PTR_FROM_JSON(TimeOfRequest, timeOfRequest_);
    };
    CouponApprovalStatusListResponseBodyData() = default ;
    CouponApprovalStatusListResponseBodyData(const CouponApprovalStatusListResponseBodyData &) = default ;
    CouponApprovalStatusListResponseBodyData(CouponApprovalStatusListResponseBodyData &&) = default ;
    CouponApprovalStatusListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CouponApprovalStatusListResponseBodyData() = default ;
    CouponApprovalStatusListResponseBodyData& operator=(const CouponApprovalStatusListResponseBodyData &) = default ;
    CouponApprovalStatusListResponseBodyData& operator=(CouponApprovalStatusListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->issuerAccount_ == nullptr
        && return this->issuerUid_ == nullptr && return this->note_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->templateStatus_ == nullptr
        && return this->timeOfRequest_ == nullptr; };
    // issuerAccount Field Functions 
    bool hasIssuerAccount() const { return this->issuerAccount_ != nullptr;};
    void deleteIssuerAccount() { this->issuerAccount_ = nullptr;};
    inline string issuerAccount() const { DARABONBA_PTR_GET_DEFAULT(issuerAccount_, "") };
    inline CouponApprovalStatusListResponseBodyData& setIssuerAccount(string issuerAccount) { DARABONBA_PTR_SET_VALUE(issuerAccount_, issuerAccount) };


    // issuerUid Field Functions 
    bool hasIssuerUid() const { return this->issuerUid_ != nullptr;};
    void deleteIssuerUid() { this->issuerUid_ = nullptr;};
    inline string issuerUid() const { DARABONBA_PTR_GET_DEFAULT(issuerUid_, "") };
    inline CouponApprovalStatusListResponseBodyData& setIssuerUid(string issuerUid) { DARABONBA_PTR_SET_VALUE(issuerUid_, issuerUid) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline CouponApprovalStatusListResponseBodyData& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CouponApprovalStatusListResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CouponApprovalStatusListResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateStatus Field Functions 
    bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
    void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
    inline int64_t templateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, 0L) };
    inline CouponApprovalStatusListResponseBodyData& setTemplateStatus(int64_t templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


    // timeOfRequest Field Functions 
    bool hasTimeOfRequest() const { return this->timeOfRequest_ != nullptr;};
    void deleteTimeOfRequest() { this->timeOfRequest_ = nullptr;};
    inline string timeOfRequest() const { DARABONBA_PTR_GET_DEFAULT(timeOfRequest_, "") };
    inline CouponApprovalStatusListResponseBodyData& setTimeOfRequest(string timeOfRequest) { DARABONBA_PTR_SET_VALUE(timeOfRequest_, timeOfRequest) };


  protected:
    std::shared_ptr<string> issuerAccount_ = nullptr;
    std::shared_ptr<string> issuerUid_ = nullptr;
    std::shared_ptr<string> note_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<int64_t> templateStatus_ = nullptr;
    std::shared_ptr<string> timeOfRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
