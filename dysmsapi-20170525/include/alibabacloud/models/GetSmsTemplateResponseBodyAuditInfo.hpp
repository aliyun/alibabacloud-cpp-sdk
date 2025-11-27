// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODYAUDITINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSMSTEMPLATERESPONSEBODYAUDITINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetSmsTemplateResponseBodyAuditInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsTemplateResponseBodyAuditInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AuditDate, auditDate_);
      DARABONBA_PTR_TO_JSON(RejectInfo, rejectInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsTemplateResponseBodyAuditInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditDate, auditDate_);
      DARABONBA_PTR_FROM_JSON(RejectInfo, rejectInfo_);
    };
    GetSmsTemplateResponseBodyAuditInfo() = default ;
    GetSmsTemplateResponseBodyAuditInfo(const GetSmsTemplateResponseBodyAuditInfo &) = default ;
    GetSmsTemplateResponseBodyAuditInfo(GetSmsTemplateResponseBodyAuditInfo &&) = default ;
    GetSmsTemplateResponseBodyAuditInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsTemplateResponseBodyAuditInfo() = default ;
    GetSmsTemplateResponseBodyAuditInfo& operator=(const GetSmsTemplateResponseBodyAuditInfo &) = default ;
    GetSmsTemplateResponseBodyAuditInfo& operator=(GetSmsTemplateResponseBodyAuditInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditDate_ == nullptr
        && return this->rejectInfo_ == nullptr; };
    // auditDate Field Functions 
    bool hasAuditDate() const { return this->auditDate_ != nullptr;};
    void deleteAuditDate() { this->auditDate_ = nullptr;};
    inline string auditDate() const { DARABONBA_PTR_GET_DEFAULT(auditDate_, "") };
    inline GetSmsTemplateResponseBodyAuditInfo& setAuditDate(string auditDate) { DARABONBA_PTR_SET_VALUE(auditDate_, auditDate) };


    // rejectInfo Field Functions 
    bool hasRejectInfo() const { return this->rejectInfo_ != nullptr;};
    void deleteRejectInfo() { this->rejectInfo_ = nullptr;};
    inline string rejectInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectInfo_, "") };
    inline GetSmsTemplateResponseBodyAuditInfo& setRejectInfo(string rejectInfo) { DARABONBA_PTR_SET_VALUE(rejectInfo_, rejectInfo) };


  protected:
    // Audit date and time.
    std::shared_ptr<string> auditDate_ = nullptr;
    // Reasons for failed audit.
    std::shared_ptr<string> rejectInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
