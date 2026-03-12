// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORUPDATINGCONTACTBYTEMPATEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORUPDATINGCONTACTBYTEMPATEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class SaveTaskForUpdatingContactByTempateIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForUpdatingContactByTempateIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddTransferLock, addTransferLock_);
      DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForUpdatingContactByTempateIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTransferLock, addTransferLock_);
      DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveTaskForUpdatingContactByTempateIdRequest() = default ;
    SaveTaskForUpdatingContactByTempateIdRequest(const SaveTaskForUpdatingContactByTempateIdRequest &) = default ;
    SaveTaskForUpdatingContactByTempateIdRequest(SaveTaskForUpdatingContactByTempateIdRequest &&) = default ;
    SaveTaskForUpdatingContactByTempateIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForUpdatingContactByTempateIdRequest() = default ;
    SaveTaskForUpdatingContactByTempateIdRequest& operator=(const SaveTaskForUpdatingContactByTempateIdRequest &) = default ;
    SaveTaskForUpdatingContactByTempateIdRequest& operator=(SaveTaskForUpdatingContactByTempateIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addTransferLock_ == nullptr
        && this->contactTemplateId_ == nullptr && this->contactType_ == nullptr && this->domainName_ == nullptr && this->lang_ == nullptr && this->saleId_ == nullptr
        && this->userClientIp_ == nullptr; };
    // addTransferLock Field Functions 
    bool hasAddTransferLock() const { return this->addTransferLock_ != nullptr;};
    void deleteAddTransferLock() { this->addTransferLock_ = nullptr;};
    inline bool getAddTransferLock() const { DARABONBA_PTR_GET_DEFAULT(addTransferLock_, false) };
    inline SaveTaskForUpdatingContactByTempateIdRequest& setAddTransferLock(bool addTransferLock) { DARABONBA_PTR_SET_VALUE(addTransferLock_, addTransferLock) };


    // contactTemplateId Field Functions 
    bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
    void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
    inline int64_t getContactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, 0L) };
    inline SaveTaskForUpdatingContactByTempateIdRequest& setContactTemplateId(int64_t contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline SaveTaskForUpdatingContactByTempateIdRequest& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveTaskForUpdatingContactByTempateIdRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveTaskForUpdatingContactByTempateIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline SaveTaskForUpdatingContactByTempateIdRequest& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveTaskForUpdatingContactByTempateIdRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<bool> addTransferLock_ {};
    // This parameter is required.
    shared_ptr<int64_t> contactTemplateId_ {};
    // This parameter is required.
    shared_ptr<string> contactType_ {};
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
