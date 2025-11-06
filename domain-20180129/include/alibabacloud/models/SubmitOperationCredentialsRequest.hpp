// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITOPERATIONCREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITOPERATIONCREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SubmitOperationCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitOperationCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditRecordId, auditRecordId_);
      DARABONBA_PTR_TO_JSON(AuditType, auditType_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegType, regType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitOperationCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditRecordId, auditRecordId_);
      DARABONBA_PTR_FROM_JSON(AuditType, auditType_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegType, regType_);
    };
    SubmitOperationCredentialsRequest() = default ;
    SubmitOperationCredentialsRequest(const SubmitOperationCredentialsRequest &) = default ;
    SubmitOperationCredentialsRequest(SubmitOperationCredentialsRequest &&) = default ;
    SubmitOperationCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitOperationCredentialsRequest() = default ;
    SubmitOperationCredentialsRequest& operator=(const SubmitOperationCredentialsRequest &) = default ;
    SubmitOperationCredentialsRequest& operator=(SubmitOperationCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditRecordId_ == nullptr
        && return this->auditType_ == nullptr && return this->credentials_ == nullptr && return this->lang_ == nullptr && return this->regType_ == nullptr; };
    // auditRecordId Field Functions 
    bool hasAuditRecordId() const { return this->auditRecordId_ != nullptr;};
    void deleteAuditRecordId() { this->auditRecordId_ = nullptr;};
    inline int64_t auditRecordId() const { DARABONBA_PTR_GET_DEFAULT(auditRecordId_, 0L) };
    inline SubmitOperationCredentialsRequest& setAuditRecordId(int64_t auditRecordId) { DARABONBA_PTR_SET_VALUE(auditRecordId_, auditRecordId) };


    // auditType Field Functions 
    bool hasAuditType() const { return this->auditType_ != nullptr;};
    void deleteAuditType() { this->auditType_ = nullptr;};
    inline int32_t auditType() const { DARABONBA_PTR_GET_DEFAULT(auditType_, 0) };
    inline SubmitOperationCredentialsRequest& setAuditType(int32_t auditType) { DARABONBA_PTR_SET_VALUE(auditType_, auditType) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline string credentials() const { DARABONBA_PTR_GET_DEFAULT(credentials_, "") };
    inline SubmitOperationCredentialsRequest& setCredentials(string credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SubmitOperationCredentialsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regType Field Functions 
    bool hasRegType() const { return this->regType_ != nullptr;};
    void deleteRegType() { this->regType_ = nullptr;};
    inline int32_t regType() const { DARABONBA_PTR_GET_DEFAULT(regType_, 0) };
    inline SubmitOperationCredentialsRequest& setRegType(int32_t regType) { DARABONBA_PTR_SET_VALUE(regType_, regType) };


  protected:
    std::shared_ptr<int64_t> auditRecordId_ = nullptr;
    std::shared_ptr<int32_t> auditType_ = nullptr;
    std::shared_ptr<string> credentials_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<int32_t> regType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
