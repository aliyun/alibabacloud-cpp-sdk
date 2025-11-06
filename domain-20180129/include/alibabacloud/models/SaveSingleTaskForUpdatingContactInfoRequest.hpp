// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORUPDATINGCONTACTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORUPDATINGCONTACTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForUpdatingContactInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForUpdatingContactInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddTransferLock, addTransferLock_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForUpdatingContactInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTransferLock, addTransferLock_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveSingleTaskForUpdatingContactInfoRequest() = default ;
    SaveSingleTaskForUpdatingContactInfoRequest(const SaveSingleTaskForUpdatingContactInfoRequest &) = default ;
    SaveSingleTaskForUpdatingContactInfoRequest(SaveSingleTaskForUpdatingContactInfoRequest &&) = default ;
    SaveSingleTaskForUpdatingContactInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForUpdatingContactInfoRequest() = default ;
    SaveSingleTaskForUpdatingContactInfoRequest& operator=(const SaveSingleTaskForUpdatingContactInfoRequest &) = default ;
    SaveSingleTaskForUpdatingContactInfoRequest& operator=(SaveSingleTaskForUpdatingContactInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addTransferLock_ == nullptr
        && return this->contactType_ == nullptr && return this->domainName_ == nullptr && return this->instanceId_ == nullptr && return this->lang_ == nullptr && return this->registrantProfileId_ == nullptr
        && return this->userClientIp_ == nullptr; };
    // addTransferLock Field Functions 
    bool hasAddTransferLock() const { return this->addTransferLock_ != nullptr;};
    void deleteAddTransferLock() { this->addTransferLock_ = nullptr;};
    inline bool addTransferLock() const { DARABONBA_PTR_GET_DEFAULT(addTransferLock_, false) };
    inline SaveSingleTaskForUpdatingContactInfoRequest& setAddTransferLock(bool addTransferLock) { DARABONBA_PTR_SET_VALUE(addTransferLock_, addTransferLock) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline SaveSingleTaskForUpdatingContactInfoRequest& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForUpdatingContactInfoRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveSingleTaskForUpdatingContactInfoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForUpdatingContactInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t registrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveSingleTaskForUpdatingContactInfoRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveSingleTaskForUpdatingContactInfoRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<bool> addTransferLock_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> registrantProfileId_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
