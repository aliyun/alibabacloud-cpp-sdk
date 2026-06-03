// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORUPDATINGCONTACTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORUPDATINGCONTACTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{
namespace Models
{
  class SaveBatchTaskForUpdatingContactInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForUpdatingContactInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddTransferLock, addTransferLock_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForUpdatingContactInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTransferLock, addTransferLock_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForUpdatingContactInfoRequest() = default ;
    SaveBatchTaskForUpdatingContactInfoRequest(const SaveBatchTaskForUpdatingContactInfoRequest &) = default ;
    SaveBatchTaskForUpdatingContactInfoRequest(SaveBatchTaskForUpdatingContactInfoRequest &&) = default ;
    SaveBatchTaskForUpdatingContactInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForUpdatingContactInfoRequest() = default ;
    SaveBatchTaskForUpdatingContactInfoRequest& operator=(const SaveBatchTaskForUpdatingContactInfoRequest &) = default ;
    SaveBatchTaskForUpdatingContactInfoRequest& operator=(SaveBatchTaskForUpdatingContactInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addTransferLock_ == nullptr
        && this->contactType_ == nullptr && this->domainName_ == nullptr && this->lang_ == nullptr && this->registrantProfileId_ == nullptr && this->userClientIp_ == nullptr; };
    // addTransferLock Field Functions 
    bool hasAddTransferLock() const { return this->addTransferLock_ != nullptr;};
    void deleteAddTransferLock() { this->addTransferLock_ = nullptr;};
    inline bool getAddTransferLock() const { DARABONBA_PTR_GET_DEFAULT(addTransferLock_, false) };
    inline SaveBatchTaskForUpdatingContactInfoRequest& setAddTransferLock(bool addTransferLock) { DARABONBA_PTR_SET_VALUE(addTransferLock_, addTransferLock) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline SaveBatchTaskForUpdatingContactInfoRequest& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & getDomainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> getDomainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveBatchTaskForUpdatingContactInfoRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveBatchTaskForUpdatingContactInfoRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForUpdatingContactInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveBatchTaskForUpdatingContactInfoRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForUpdatingContactInfoRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<bool> addTransferLock_ {};
    // This parameter is required.
    shared_ptr<string> contactType_ {};
    // This parameter is required.
    shared_ptr<vector<string>> domainName_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<int64_t> registrantProfileId_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif
