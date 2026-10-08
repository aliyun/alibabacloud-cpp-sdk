// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORUPDATINGCONTACTINFOBYREGISTRANTPROFILEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORUPDATINGCONTACTINFOBYREGISTRANTPROFILEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(TransferOutProhibited, transferOutProhibited_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(TransferOutProhibited, transferOutProhibited_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest() = default ;
    SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &) = default ;
    SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest(SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &&) = default ;
    SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest() = default ;
    SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& operator=(const SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &) = default ;
    SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& operator=(SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactType_ == nullptr
        && this->domainName_ == nullptr && this->lang_ == nullptr && this->registrantProfileId_ == nullptr && this->transferOutProhibited_ == nullptr && this->userClientIp_ == nullptr; };
    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & getDomainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> getDomainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // transferOutProhibited Field Functions 
    bool hasTransferOutProhibited() const { return this->transferOutProhibited_ != nullptr;};
    void deleteTransferOutProhibited() { this->transferOutProhibited_ = nullptr;};
    inline bool getTransferOutProhibited() const { DARABONBA_PTR_GET_DEFAULT(transferOutProhibited_, false) };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setTransferOutProhibited(bool transferOutProhibited) { DARABONBA_PTR_SET_VALUE(transferOutProhibited_, transferOutProhibited) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The contact type to modify. Valid values:
    // 
    // - **registrant**: The domain name\\"s registrant.
    // 
    // - **admin**: The administrative contact for the domain name.
    // 
    // - **billing**: The billing contact.
    // 
    // - **tech**: The technical contact.
    // 
    // This parameter is required.
    shared_ptr<string> contactType_ {};
    // An array of domain names to update.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> domainName_ {};
    // The language of the error message that is returned if the request fails. Valid values:
    // 
    // - **zh**: Chinese.
    // 
    // - **en**: English.
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // The ID of the registrant profile. This ID is automatically generated when you create a registrant profile. You can find registrant profile IDs by calling the [QueryRegistrantProfiles](https://help.aliyun.com/document_detail/67701.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> registrantProfileId_ {};
    // Specifies whether to enable the transfer lock. This parameter is valid only when **ContactType** is set to **registrant**. If enabled, this feature prevents the domain name from being transferred for 60 days after the registrant information is modified.
    // 
    // - **true**: Enables the lock, which prevents the domain name from being transferred out.
    // 
    // - **false**: Disables the lock, which allows the domain name to be transferred out.
    // 
    // Default value: **false**.
    shared_ptr<bool> transferOutProhibited_ {};
    // The IP address of the client. You can set this parameter to **127.0.0.1**.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
