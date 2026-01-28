// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORUPDATINGREGISTRANTINFOBYREGISTRANTPROFILEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORUPDATINGREGISTRANTINFOBYREGISTRANTPROFILEIDREQUEST_HPP_
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
  class SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(TransferOutProhibited, transferOutProhibited_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(TransferOutProhibited, transferOutProhibited_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest() = default ;
    SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &) = default ;
    SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest(SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &&) = default ;
    SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest() = default ;
    SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& operator=(const SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &) = default ;
    SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& operator=(SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->lang_ == nullptr && this->registrantProfileId_ == nullptr && this->transferOutProhibited_ == nullptr && this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline const vector<string> & getDomainName() const { DARABONBA_PTR_GET_CONST(domainName_, vector<string>) };
    inline vector<string> getDomainName() { DARABONBA_PTR_GET(domainName_, vector<string>) };
    inline SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& setDomainName(const vector<string> & domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };
    inline SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& setDomainName(vector<string> && domainName) { DARABONBA_PTR_SET_RVALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // transferOutProhibited Field Functions 
    bool hasTransferOutProhibited() const { return this->transferOutProhibited_ != nullptr;};
    void deleteTransferOutProhibited() { this->transferOutProhibited_ = nullptr;};
    inline bool getTransferOutProhibited() const { DARABONBA_PTR_GET_DEFAULT(transferOutProhibited_, false) };
    inline SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& setTransferOutProhibited(bool transferOutProhibited) { DARABONBA_PTR_SET_VALUE(transferOutProhibited_, transferOutProhibited) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> domainName_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<int64_t> registrantProfileId_ {};
    // This parameter is required.
    shared_ptr<bool> transferOutProhibited_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
