// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEADAUTHSERVERRESPONSEBODYAD_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEADAUTHSERVERRESPONSEBODYAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceADAuthServerResponseBodyAD : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceADAuthServerResponseBodyAD& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(BaseDN, baseDN_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EmailMapping, emailMapping_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_TO_JSON(IsSSL, isSSL_);
      DARABONBA_PTR_TO_JSON(MobileMapping, mobileMapping_);
      DARABONBA_PTR_TO_JSON(NameMapping, nameMapping_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(StandbyServer, standbyServer_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceADAuthServerResponseBodyAD& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(BaseDN, baseDN_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EmailMapping, emailMapping_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
      DARABONBA_PTR_FROM_JSON(IsSSL, isSSL_);
      DARABONBA_PTR_FROM_JSON(MobileMapping, mobileMapping_);
      DARABONBA_PTR_FROM_JSON(NameMapping, nameMapping_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(StandbyServer, standbyServer_);
    };
    GetInstanceADAuthServerResponseBodyAD() = default ;
    GetInstanceADAuthServerResponseBodyAD(const GetInstanceADAuthServerResponseBodyAD &) = default ;
    GetInstanceADAuthServerResponseBodyAD(GetInstanceADAuthServerResponseBodyAD &&) = default ;
    GetInstanceADAuthServerResponseBodyAD(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceADAuthServerResponseBodyAD() = default ;
    GetInstanceADAuthServerResponseBodyAD& operator=(const GetInstanceADAuthServerResponseBodyAD &) = default ;
    GetInstanceADAuthServerResponseBodyAD& operator=(GetInstanceADAuthServerResponseBodyAD &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->baseDN_ != nullptr && this->domain_ != nullptr && this->emailMapping_ != nullptr && this->filter_ != nullptr && this->hasPassword_ != nullptr
        && this->isSSL_ != nullptr && this->mobileMapping_ != nullptr && this->nameMapping_ != nullptr && this->port_ != nullptr && this->server_ != nullptr
        && this->standbyServer_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // baseDN Field Functions 
    bool hasBaseDN() const { return this->baseDN_ != nullptr;};
    void deleteBaseDN() { this->baseDN_ = nullptr;};
    inline string baseDN() const { DARABONBA_PTR_GET_DEFAULT(baseDN_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setBaseDN(string baseDN) { DARABONBA_PTR_SET_VALUE(baseDN_, baseDN) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // emailMapping Field Functions 
    bool hasEmailMapping() const { return this->emailMapping_ != nullptr;};
    void deleteEmailMapping() { this->emailMapping_ = nullptr;};
    inline string emailMapping() const { DARABONBA_PTR_GET_DEFAULT(emailMapping_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setEmailMapping(string emailMapping) { DARABONBA_PTR_SET_VALUE(emailMapping_, emailMapping) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // hasPassword Field Functions 
    bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
    void deleteHasPassword() { this->hasPassword_ = nullptr;};
    inline bool hasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
    inline GetInstanceADAuthServerResponseBodyAD& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


    // isSSL Field Functions 
    bool hasIsSSL() const { return this->isSSL_ != nullptr;};
    void deleteIsSSL() { this->isSSL_ = nullptr;};
    inline bool isSSL() const { DARABONBA_PTR_GET_DEFAULT(isSSL_, false) };
    inline GetInstanceADAuthServerResponseBodyAD& setIsSSL(bool isSSL) { DARABONBA_PTR_SET_VALUE(isSSL_, isSSL) };


    // mobileMapping Field Functions 
    bool hasMobileMapping() const { return this->mobileMapping_ != nullptr;};
    void deleteMobileMapping() { this->mobileMapping_ = nullptr;};
    inline string mobileMapping() const { DARABONBA_PTR_GET_DEFAULT(mobileMapping_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setMobileMapping(string mobileMapping) { DARABONBA_PTR_SET_VALUE(mobileMapping_, mobileMapping) };


    // nameMapping Field Functions 
    bool hasNameMapping() const { return this->nameMapping_ != nullptr;};
    void deleteNameMapping() { this->nameMapping_ = nullptr;};
    inline string nameMapping() const { DARABONBA_PTR_GET_DEFAULT(nameMapping_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setNameMapping(string nameMapping) { DARABONBA_PTR_SET_VALUE(nameMapping_, nameMapping) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline GetInstanceADAuthServerResponseBodyAD& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // standbyServer Field Functions 
    bool hasStandbyServer() const { return this->standbyServer_ != nullptr;};
    void deleteStandbyServer() { this->standbyServer_ = nullptr;};
    inline string standbyServer() const { DARABONBA_PTR_GET_DEFAULT(standbyServer_, "") };
    inline GetInstanceADAuthServerResponseBodyAD& setStandbyServer(string standbyServer) { DARABONBA_PTR_SET_VALUE(standbyServer_, standbyServer) };


  protected:
    // The distinguished name (DN) of the AD server account.
    std::shared_ptr<string> account_ = nullptr;
    // The Base DN of the AD server.
    std::shared_ptr<string> baseDN_ = nullptr;
    // The domain on the AD server.
    std::shared_ptr<string> domain_ = nullptr;
    // The field that is used to indicate the email address of a user on the AD server.
    std::shared_ptr<string> emailMapping_ = nullptr;
    // The condition that is used to filter users.
    std::shared_ptr<string> filter_ = nullptr;
    // Indicates whether passwords are required. Valid values:
    // 
    // *   **true**:
    // *   **false**
    std::shared_ptr<bool> hasPassword_ = nullptr;
    // Indicates whether SSL is supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isSSL_ = nullptr;
    // The field that is used to indicate the mobile phone number of a user on the AD server.
    std::shared_ptr<string> mobileMapping_ = nullptr;
    // The field that is used to indicate the name of a user on the AD server.
    std::shared_ptr<string> nameMapping_ = nullptr;
    // The port that is used to access the AD server.
    std::shared_ptr<int64_t> port_ = nullptr;
    // The address of the AD server.
    std::shared_ptr<string> server_ = nullptr;
    // The address of the secondary AD server.
    std::shared_ptr<string> standbyServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
