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
        && return this->domainName_ == nullptr && return this->lang_ == nullptr && return this->registrantProfileId_ == nullptr && return this->transferOutProhibited_ == nullptr && return this->userClientIp_ == nullptr; };
    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & domainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> domainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t registrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // transferOutProhibited Field Functions 
    bool hasTransferOutProhibited() const { return this->transferOutProhibited_ != nullptr;};
    void deleteTransferOutProhibited() { this->transferOutProhibited_ = nullptr;};
    inline bool transferOutProhibited() const { DARABONBA_PTR_GET_DEFAULT(transferOutProhibited_, false) };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setTransferOutProhibited(bool transferOutProhibited) { DARABONBA_PTR_SET_VALUE(transferOutProhibited_, transferOutProhibited) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> domainName_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> registrantProfileId_ = nullptr;
    std::shared_ptr<bool> transferOutProhibited_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
