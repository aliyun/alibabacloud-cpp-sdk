// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINNAMECREDENTIALBYTEMPLATEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINNAMECREDENTIALBYTEMPLATEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest() = default ;
    SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest(const SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest &) = default ;
    SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest(SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest &&) = default ;
    SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest() = default ;
    SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& operator=(const SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest &) = default ;
    SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& operator=(SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactTemplateId_ == nullptr
        && this->domainName_ == nullptr && this->lang_ == nullptr && this->saleId_ == nullptr && this->userClientIp_ == nullptr; };
    // contactTemplateId Field Functions 
    bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
    void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
    inline int64_t getContactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, 0L) };
    inline SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& setContactTemplateId(int64_t contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveTaskForSubmittingDomainNameCredentialByTemplateIdRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> contactTemplateId_ {};
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> saleId_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
