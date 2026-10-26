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
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(IsSSL, isSSL_);
        DARABONBA_PTR_TO_JSON(IsSyncEmailAttr, isSyncEmailAttr_);
        DARABONBA_PTR_TO_JSON(IsSyncMobileAttr, isSyncMobileAttr_);
        DARABONBA_PTR_TO_JSON(IsSyncNameAttr, isSyncNameAttr_);
        DARABONBA_PTR_TO_JSON(IsSyncOuAsUserGroup, isSyncOuAsUserGroup_);
        DARABONBA_PTR_TO_JSON(LatestSyncTime, latestSyncTime_);
        DARABONBA_PTR_TO_JSON(MobileMapping, mobileMapping_);
        DARABONBA_PTR_TO_JSON(NameMapping, nameMapping_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Server, server_);
        DARABONBA_PTR_TO_JSON(ServerName, serverName_);
        DARABONBA_PTR_TO_JSON(StandbyServer, standbyServer_);
        DARABONBA_PTR_TO_JSON(SyncInterval, syncInterval_);
        DARABONBA_PTR_TO_JSON(UserSourceId, userSourceId_);
      };
      friend void from_json(const Darabonba::Json& j, AD& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(BaseDN, baseDN_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EmailMapping, emailMapping_);
        DARABONBA_PTR_FROM_JSON(Filter, filter_);
        DARABONBA_PTR_FROM_JSON(HasPassword, hasPassword_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(IsSSL, isSSL_);
        DARABONBA_PTR_FROM_JSON(IsSyncEmailAttr, isSyncEmailAttr_);
        DARABONBA_PTR_FROM_JSON(IsSyncMobileAttr, isSyncMobileAttr_);
        DARABONBA_PTR_FROM_JSON(IsSyncNameAttr, isSyncNameAttr_);
        DARABONBA_PTR_FROM_JSON(IsSyncOuAsUserGroup, isSyncOuAsUserGroup_);
        DARABONBA_PTR_FROM_JSON(LatestSyncTime, latestSyncTime_);
        DARABONBA_PTR_FROM_JSON(MobileMapping, mobileMapping_);
        DARABONBA_PTR_FROM_JSON(NameMapping, nameMapping_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Server, server_);
        DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
        DARABONBA_PTR_FROM_JSON(StandbyServer, standbyServer_);
        DARABONBA_PTR_FROM_JSON(SyncInterval, syncInterval_);
        DARABONBA_PTR_FROM_JSON(UserSourceId, userSourceId_);
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
        && this->isDefault_ == nullptr && this->isSSL_ == nullptr && this->isSyncEmailAttr_ == nullptr && this->isSyncMobileAttr_ == nullptr && this->isSyncNameAttr_ == nullptr
        && this->isSyncOuAsUserGroup_ == nullptr && this->latestSyncTime_ == nullptr && this->mobileMapping_ == nullptr && this->nameMapping_ == nullptr && this->port_ == nullptr
        && this->server_ == nullptr && this->serverName_ == nullptr && this->standbyServer_ == nullptr && this->syncInterval_ == nullptr && this->userSourceId_ == nullptr; };
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


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline AD& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // isSSL Field Functions 
      bool hasIsSSL() const { return this->isSSL_ != nullptr;};
      void deleteIsSSL() { this->isSSL_ = nullptr;};
      inline bool getIsSSL() const { DARABONBA_PTR_GET_DEFAULT(isSSL_, false) };
      inline AD& setIsSSL(bool isSSL) { DARABONBA_PTR_SET_VALUE(isSSL_, isSSL) };


      // isSyncEmailAttr Field Functions 
      bool hasIsSyncEmailAttr() const { return this->isSyncEmailAttr_ != nullptr;};
      void deleteIsSyncEmailAttr() { this->isSyncEmailAttr_ = nullptr;};
      inline bool getIsSyncEmailAttr() const { DARABONBA_PTR_GET_DEFAULT(isSyncEmailAttr_, false) };
      inline AD& setIsSyncEmailAttr(bool isSyncEmailAttr) { DARABONBA_PTR_SET_VALUE(isSyncEmailAttr_, isSyncEmailAttr) };


      // isSyncMobileAttr Field Functions 
      bool hasIsSyncMobileAttr() const { return this->isSyncMobileAttr_ != nullptr;};
      void deleteIsSyncMobileAttr() { this->isSyncMobileAttr_ = nullptr;};
      inline bool getIsSyncMobileAttr() const { DARABONBA_PTR_GET_DEFAULT(isSyncMobileAttr_, false) };
      inline AD& setIsSyncMobileAttr(bool isSyncMobileAttr) { DARABONBA_PTR_SET_VALUE(isSyncMobileAttr_, isSyncMobileAttr) };


      // isSyncNameAttr Field Functions 
      bool hasIsSyncNameAttr() const { return this->isSyncNameAttr_ != nullptr;};
      void deleteIsSyncNameAttr() { this->isSyncNameAttr_ = nullptr;};
      inline bool getIsSyncNameAttr() const { DARABONBA_PTR_GET_DEFAULT(isSyncNameAttr_, false) };
      inline AD& setIsSyncNameAttr(bool isSyncNameAttr) { DARABONBA_PTR_SET_VALUE(isSyncNameAttr_, isSyncNameAttr) };


      // isSyncOuAsUserGroup Field Functions 
      bool hasIsSyncOuAsUserGroup() const { return this->isSyncOuAsUserGroup_ != nullptr;};
      void deleteIsSyncOuAsUserGroup() { this->isSyncOuAsUserGroup_ = nullptr;};
      inline bool getIsSyncOuAsUserGroup() const { DARABONBA_PTR_GET_DEFAULT(isSyncOuAsUserGroup_, false) };
      inline AD& setIsSyncOuAsUserGroup(bool isSyncOuAsUserGroup) { DARABONBA_PTR_SET_VALUE(isSyncOuAsUserGroup_, isSyncOuAsUserGroup) };


      // latestSyncTime Field Functions 
      bool hasLatestSyncTime() const { return this->latestSyncTime_ != nullptr;};
      void deleteLatestSyncTime() { this->latestSyncTime_ = nullptr;};
      inline int64_t getLatestSyncTime() const { DARABONBA_PTR_GET_DEFAULT(latestSyncTime_, 0L) };
      inline AD& setLatestSyncTime(int64_t latestSyncTime) { DARABONBA_PTR_SET_VALUE(latestSyncTime_, latestSyncTime) };


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


      // serverName Field Functions 
      bool hasServerName() const { return this->serverName_ != nullptr;};
      void deleteServerName() { this->serverName_ = nullptr;};
      inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
      inline AD& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


      // standbyServer Field Functions 
      bool hasStandbyServer() const { return this->standbyServer_ != nullptr;};
      void deleteStandbyServer() { this->standbyServer_ = nullptr;};
      inline string getStandbyServer() const { DARABONBA_PTR_GET_DEFAULT(standbyServer_, "") };
      inline AD& setStandbyServer(string standbyServer) { DARABONBA_PTR_SET_VALUE(standbyServer_, standbyServer) };


      // syncInterval Field Functions 
      bool hasSyncInterval() const { return this->syncInterval_ != nullptr;};
      void deleteSyncInterval() { this->syncInterval_ = nullptr;};
      inline int64_t getSyncInterval() const { DARABONBA_PTR_GET_DEFAULT(syncInterval_, 0L) };
      inline AD& setSyncInterval(int64_t syncInterval) { DARABONBA_PTR_SET_VALUE(syncInterval_, syncInterval) };


      // userSourceId Field Functions 
      bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
      void deleteUserSourceId() { this->userSourceId_ = nullptr;};
      inline string getUserSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
      inline AD& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


    protected:
      // The distinguished name (DN) of the server account.
      shared_ptr<string> account_ {};
      // The base DN used to connect to the AD server.
      shared_ptr<string> baseDN_ {};
      // The domain on the AD server.
      shared_ptr<string> domain_ {};
      // The name of the field that maps to the user email address on the AD server.
      shared_ptr<string> emailMapping_ {};
      // The filter condition for users.
      shared_ptr<string> filter_ {};
      // Specifies whether a password is set. Valid values:
      // - **true**: A password is set.
      // - **false**: No password is set.
      shared_ptr<bool> hasPassword_ {};
      // Specifies whether the server is the default AD authentication server. A value of true indicates that the server is the default AD authentication server, and a value of false indicates that the server is not the default AD authentication server.
      shared_ptr<bool> isDefault_ {};
      // Specifies whether SSL is supported. Valid values:
      // 
      // - **true**: Supported.
      // - **false**: Not supported.
      shared_ptr<bool> isSSL_ {};
      // Specifies whether email addresses are synchronized. A value of true indicates that email addresses are synchronized, and a value of false indicates that email addresses are not synchronized.
      shared_ptr<bool> isSyncEmailAttr_ {};
      // Specifies whether mobile phone numbers are synchronized. A value of true indicates that mobile phone numbers are synchronized, and a value of false indicates that mobile phone numbers are not synchronized.
      shared_ptr<bool> isSyncMobileAttr_ {};
      // Specifies whether display names are synchronized. A value of true indicates that display names are synchronized, and a value of false indicates that display names are not synchronized.
      shared_ptr<bool> isSyncNameAttr_ {};
      // Specifies whether the organization to which a user belongs is synchronized as a user group. A value of true indicates that the organization is synchronized as a user group, and a value of false indicates that the organization is not synchronized as a user group.
      shared_ptr<bool> isSyncOuAsUserGroup_ {};
      // The time when the user snapshot was last synchronized.
      shared_ptr<int64_t> latestSyncTime_ {};
      // The name of the field that maps to the user mobile phone number on the AD server.
      shared_ptr<string> mobileMapping_ {};
      // The name of the field that maps to the username on the AD server.
      shared_ptr<string> nameMapping_ {};
      // The port of the server.
      shared_ptr<int64_t> port_ {};
      // The address of the server.
      shared_ptr<string> server_ {};
      // The name of the AD authentication server.
      shared_ptr<string> serverName_ {};
      // The address of the standby server.
      shared_ptr<string> standbyServer_ {};
      // The interval for automatic synchronization of user snapshots. Unit: hours. Valid values: 0, and 4 to 168. A value of 0 indicates that automatic synchronization is disabled and no synchronization is performed.
      shared_ptr<int64_t> syncInterval_ {};
      shared_ptr<string> userSourceId_ {};
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
    // The Active Directory (AD) authentication configurations.
    shared_ptr<GetInstanceADAuthServerResponseBody::AD> AD_ {};
    // The ID of the request. The ID is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
