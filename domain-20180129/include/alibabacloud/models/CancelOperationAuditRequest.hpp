// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELOPERATIONAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELOPERATIONAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CancelOperationAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelOperationAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditRecordId, auditRecordId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, CancelOperationAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditRecordId, auditRecordId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    CancelOperationAuditRequest() = default ;
    CancelOperationAuditRequest(const CancelOperationAuditRequest &) = default ;
    CancelOperationAuditRequest(CancelOperationAuditRequest &&) = default ;
    CancelOperationAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelOperationAuditRequest() = default ;
    CancelOperationAuditRequest& operator=(const CancelOperationAuditRequest &) = default ;
    CancelOperationAuditRequest& operator=(CancelOperationAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditRecordId_ == nullptr
        && return this->lang_ == nullptr; };
    // auditRecordId Field Functions 
    bool hasAuditRecordId() const { return this->auditRecordId_ != nullptr;};
    void deleteAuditRecordId() { this->auditRecordId_ = nullptr;};
    inline int64_t auditRecordId() const { DARABONBA_PTR_GET_DEFAULT(auditRecordId_, 0L) };
    inline CancelOperationAuditRequest& setAuditRecordId(int64_t auditRecordId) { DARABONBA_PTR_SET_VALUE(auditRecordId_, auditRecordId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CancelOperationAuditRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> auditRecordId_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
