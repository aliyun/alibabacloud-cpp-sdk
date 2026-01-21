// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEADAUTHSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEADAUTHSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceADAuthServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceADAuthServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AD, AD_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceADAuthServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AD, AD_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceADAuthServerResponseBody() = default ;
    GetInstanceADAuthServerResponseBody(const GetInstanceADAuthServerResponseBody &) = default ;
    GetInstanceADAuthServerResponseBody(GetInstanceADAuthServerResponseBody &&) = default ;
    GetInstanceADAuthServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceADAuthServerResponseBody() = default ;
    GetInstanceADAuthServerResponseBody& operator=(const GetInstanceADAuthServerResponseBody &) = default ;
    GetInstanceADAuthServerResponseBody& operator=(GetInstanceADAuthServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AD : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AD& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AD& obj) { 
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
      AD() = default ;
      AD(const AD &) = default ;
      AD(AD &&) = default ;
      AD(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AD() = default ;
      AD& operator=(const AD &) = default ;
      AD& operator=(AD &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->account_ == nullptr
        && this->baseDN_ == nullptr && this->domain_ == nullptr && this->emailMapping_ == nullptr && this->filter_ == nullptr && this->hasPassword_ == nullptr
        && this->isSSL_ == nullptr && this->mobileMapping_ == nullptr && this->nameMapping_ == nullptr && this->port_ == nullptr && this->server_ == nullptr
        && this->standbyServer_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline AD& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // baseDN Field Functions 
      bool hasBaseDN() const { return this->baseDN_ != nullptr;};
      void deleteBaseDN() { this->baseDN_ = nullptr;};
      inline string getBaseDN() const { DARABONBA_PTR_GET_DEFAULT(baseDN_, "") };
      inline AD& setBaseDN(string baseDN) { DARABONBA_PTR_SET_VALUE(baseDN_, baseDN) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline AD& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // emailMapping Field Functions 
      bool hasEmailMapping() const { return this->emailMapping_ != nullptr;};
      void deleteEmailMapping() { this->emailMapping_ = nullptr;};
      inline string getEmailMapping() const { DARABONBA_PTR_GET_DEFAULT(emailMapping_, "") };
      inline AD& setEmailMapping(string emailMapping) { DARABONBA_PTR_SET_VALUE(emailMapping_, emailMapping) };


      // filter Field Functions 
      bool hasFilter() const { return this->filter_ != nullptr;};
      void deleteFilter() { this->filter_ = nullptr;};
      inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
      inline AD& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


      // hasPassword Field Functions 
      bool hasHasPassword() const { return this->hasPassword_ != nullptr;};
      void deleteHasPassword() { this->hasPassword_ = nullptr;};
      inline bool getHasPassword() const { DARABONBA_PTR_GET_DEFAULT(hasPassword_, false) };
      inline AD& setHasPassword(bool hasPassword) { DARABONBA_PTR_SET_VALUE(hasPassword_, hasPassword) };


      // isSSL Field Functions 
      bool hasIsSSL() const { return this->isSSL_ != nullptr;};
      void deleteIsSSL() { this->isSSL_ = nullptr;};
      inline bool getIsSSL() const { DARABONBA_PTR_GET_DEFAULT(isSSL_, false) };
      inline AD& setIsSSL(bool isSSL) { DARABONBA_PTR_SET_VALUE(isSSL_, isSSL) };


      // mobileMapping Field Functions 
      bool hasMobileMapping() const { return this->mobileMapping_ != nullptr;};
      void deleteMobileMapping() { this->mobileMapping_ = nullptr;};
      inline string getMobileMapping() const { DARABONBA_PTR_GET_DEFAULT(mobileMapping_, "") };
      inline AD& setMobileMapping(string mobileMapping) { DARABONBA_PTR_SET_VALUE(mobileMapping_, mobileMapping) };


      // nameMapping Field Functions 
      bool hasNameMapping() const { return this->nameMapping_ != nullptr;};
      void deleteNameMapping() { this->nameMapping_ = nullptr;};
      inline string getNameMapping() const { DARABONBA_PTR_GET_DEFAULT(nameMapping_, "") };
      inline AD& setNameMapping(string nameMapping) { DARABONBA_PTR_SET_VALUE(nameMapping_, nameMapping) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
      inline AD& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // server Field Functions 
      bool hasServer() const { return this->server_ != nullptr;};
      void deleteServer() { this->server_ = nullptr;};
      inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
      inline AD& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


      // standbyServer Field Functions 
      bool hasStandbyServer() const { return this->standbyServer_ != nullptr;};
      void deleteStandbyServer() { this->standbyServer_ = nullptr;};
      inline string getStandbyServer() const { DARABONBA_PTR_GET_DEFAULT(standbyServer_, "") };
      inline AD& setStandbyServer(string standbyServer) { DARABONBA_PTR_SET_VALUE(standbyServer_, standbyServer) };


    protected:
      // The distinguished name (DN) of the AD server account.
      shared_ptr<string> account_ {};
      // The Base DN of the AD server.
      shared_ptr<string> baseDN_ {};
      // The domain on the AD server.
      shared_ptr<string> domain_ {};
      // The field that is used to indicate the email address of a user on the AD server.
      shared_ptr<string> emailMapping_ {};
      // The condition that is used to filter users.
      shared_ptr<string> filter_ {};
      // Indicates whether passwords are required. Valid values:
      // 
      // *   **true**:
      // *   **false**
      shared_ptr<bool> hasPassword_ {};
      // Indicates whether SSL is supported. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isSSL_ {};
      // The field that is used to indicate the mobile phone number of a user on the AD server.
      shared_ptr<string> mobileMapping_ {};
      // The field that is used to indicate the name of a user on the AD server.
      shared_ptr<string> nameMapping_ {};
      // The port that is used to access the AD server.
      shared_ptr<int64_t> port_ {};
      // The address of the AD server.
      shared_ptr<string> server_ {};
      // The address of the secondary AD server.
      shared_ptr<string> standbyServer_ {};
    };

    virtual bool empty() const override { return this->AD_ == nullptr
        && this->requestId_ == nullptr; };
    // AD Field Functions 
    bool hasAD() const { return this->AD_ != nullptr;};
    void deleteAD() { this->AD_ = nullptr;};
    inline const GetInstanceADAuthServerResponseBody::AD & getAD() const { DARABONBA_PTR_GET_CONST(AD_, GetInstanceADAuthServerResponseBody::AD) };
    inline GetInstanceADAuthServerResponseBody::AD getAD() { DARABONBA_PTR_GET(AD_, GetInstanceADAuthServerResponseBody::AD) };
    inline GetInstanceADAuthServerResponseBody& setAD(const GetInstanceADAuthServerResponseBody::AD & aD) { DARABONBA_PTR_SET_VALUE(AD_, aD) };
    inline GetInstanceADAuthServerResponseBody& setAD(GetInstanceADAuthServerResponseBody::AD && aD) { DARABONBA_PTR_SET_RVALUE(AD_, aD) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceADAuthServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The settings of AD authentication.
    shared_ptr<GetInstanceADAuthServerResponseBody::AD> AD_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
