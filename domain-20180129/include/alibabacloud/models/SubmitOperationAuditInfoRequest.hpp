// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITOPERATIONAUDITINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITOPERATIONAUDITINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SubmitOperationAuditInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitOperationAuditInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditInfo, auditInfo_);
      DARABONBA_PTR_TO_JSON(AuditType, auditType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitOperationAuditInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditInfo, auditInfo_);
      DARABONBA_PTR_FROM_JSON(AuditType, auditType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    SubmitOperationAuditInfoRequest() = default ;
    SubmitOperationAuditInfoRequest(const SubmitOperationAuditInfoRequest &) = default ;
    SubmitOperationAuditInfoRequest(SubmitOperationAuditInfoRequest &&) = default ;
    SubmitOperationAuditInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitOperationAuditInfoRequest() = default ;
    SubmitOperationAuditInfoRequest& operator=(const SubmitOperationAuditInfoRequest &) = default ;
    SubmitOperationAuditInfoRequest& operator=(SubmitOperationAuditInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditInfo_ == nullptr
        && return this->auditType_ == nullptr && return this->domainName_ == nullptr && return this->id_ == nullptr && return this->lang_ == nullptr; };
    // auditInfo Field Functions 
    bool hasAuditInfo() const { return this->auditInfo_ != nullptr;};
    void deleteAuditInfo() { this->auditInfo_ = nullptr;};
    inline string auditInfo() const { DARABONBA_PTR_GET_DEFAULT(auditInfo_, "") };
    inline SubmitOperationAuditInfoRequest& setAuditInfo(string auditInfo) { DARABONBA_PTR_SET_VALUE(auditInfo_, auditInfo) };


    // auditType Field Functions 
    bool hasAuditType() const { return this->auditType_ != nullptr;};
    void deleteAuditType() { this->auditType_ = nullptr;};
    inline int32_t auditType() const { DARABONBA_PTR_GET_DEFAULT(auditType_, 0) };
    inline SubmitOperationAuditInfoRequest& setAuditType(int32_t auditType) { DARABONBA_PTR_SET_VALUE(auditType_, auditType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SubmitOperationAuditInfoRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SubmitOperationAuditInfoRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SubmitOperationAuditInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    std::shared_ptr<string> auditInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> auditType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
