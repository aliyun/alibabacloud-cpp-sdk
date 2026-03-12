// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTACTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTACTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class QueryContactTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContactTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(CCompany, CCompany_);
      DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_TO_JSON(DefaultTemplate, defaultTemplate_);
      DARABONBA_PTR_TO_JSON(ECompany, ECompany_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegType, regType_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContactTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(CCompany, CCompany_);
      DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_FROM_JSON(DefaultTemplate, defaultTemplate_);
      DARABONBA_PTR_FROM_JSON(ECompany, ECompany_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegType, regType_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryContactTemplateRequest() = default ;
    QueryContactTemplateRequest(const QueryContactTemplateRequest &) = default ;
    QueryContactTemplateRequest(QueryContactTemplateRequest &&) = default ;
    QueryContactTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContactTemplateRequest() = default ;
    QueryContactTemplateRequest& operator=(const QueryContactTemplateRequest &) = default ;
    QueryContactTemplateRequest& operator=(QueryContactTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->CCompany_ == nullptr && this->contactTemplateId_ == nullptr && this->defaultTemplate_ == nullptr && this->ECompany_ == nullptr && this->lang_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->regType_ == nullptr && this->userClientIp_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline QueryContactTemplateRequest& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // CCompany Field Functions 
    bool hasCCompany() const { return this->CCompany_ != nullptr;};
    void deleteCCompany() { this->CCompany_ = nullptr;};
    inline string getCCompany() const { DARABONBA_PTR_GET_DEFAULT(CCompany_, "") };
    inline QueryContactTemplateRequest& setCCompany(string CCompany) { DARABONBA_PTR_SET_VALUE(CCompany_, CCompany) };


    // contactTemplateId Field Functions 
    bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
    void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
    inline int64_t getContactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, 0L) };
    inline QueryContactTemplateRequest& setContactTemplateId(int64_t contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


    // defaultTemplate Field Functions 
    bool hasDefaultTemplate() const { return this->defaultTemplate_ != nullptr;};
    void deleteDefaultTemplate() { this->defaultTemplate_ = nullptr;};
    inline bool getDefaultTemplate() const { DARABONBA_PTR_GET_DEFAULT(defaultTemplate_, false) };
    inline QueryContactTemplateRequest& setDefaultTemplate(bool defaultTemplate) { DARABONBA_PTR_SET_VALUE(defaultTemplate_, defaultTemplate) };


    // ECompany Field Functions 
    bool hasECompany() const { return this->ECompany_ != nullptr;};
    void deleteECompany() { this->ECompany_ = nullptr;};
    inline string getECompany() const { DARABONBA_PTR_GET_DEFAULT(ECompany_, "") };
    inline QueryContactTemplateRequest& setECompany(string ECompany) { DARABONBA_PTR_SET_VALUE(ECompany_, ECompany) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryContactTemplateRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryContactTemplateRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryContactTemplateRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regType Field Functions 
    bool hasRegType() const { return this->regType_ != nullptr;};
    void deleteRegType() { this->regType_ = nullptr;};
    inline string getRegType() const { DARABONBA_PTR_GET_DEFAULT(regType_, "") };
    inline QueryContactTemplateRequest& setRegType(string regType) { DARABONBA_PTR_SET_VALUE(regType_, regType) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryContactTemplateRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> auditStatus_ {};
    shared_ptr<string> CCompany_ {};
    shared_ptr<int64_t> contactTemplateId_ {};
    shared_ptr<bool> defaultTemplate_ {};
    shared_ptr<string> ECompany_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regType_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
