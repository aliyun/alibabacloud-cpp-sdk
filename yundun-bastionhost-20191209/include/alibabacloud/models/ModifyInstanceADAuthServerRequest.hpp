// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEADAUTHSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEADAUTHSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyInstanceADAuthServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceADAuthServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(BaseDN, baseDN_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EmailMapping, emailMapping_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IsSSL, isSSL_);
      DARABONBA_PTR_TO_JSON(IsSyncEmailAttr, isSyncEmailAttr_);
      DARABONBA_PTR_TO_JSON(IsSyncMobileAttr, isSyncMobileAttr_);
      DARABONBA_PTR_TO_JSON(IsSyncNameAttr, isSyncNameAttr_);
      DARABONBA_PTR_TO_JSON(IsSyncOuAsUserGroup, isSyncOuAsUserGroup_);
      DARABONBA_PTR_TO_JSON(MobileMapping, mobileMapping_);
      DARABONBA_PTR_TO_JSON(NameMapping, nameMapping_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(ServerName, serverName_);
      DARABONBA_PTR_TO_JSON(StandbyServer, standbyServer_);
      DARABONBA_PTR_TO_JSON(SyncInterval, syncInterval_);
      DARABONBA_PTR_TO_JSON(UserSourceId, userSourceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceADAuthServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(BaseDN, baseDN_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EmailMapping, emailMapping_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IsSSL, isSSL_);
      DARABONBA_PTR_FROM_JSON(IsSyncEmailAttr, isSyncEmailAttr_);
      DARABONBA_PTR_FROM_JSON(IsSyncMobileAttr, isSyncMobileAttr_);
      DARABONBA_PTR_FROM_JSON(IsSyncNameAttr, isSyncNameAttr_);
      DARABONBA_PTR_FROM_JSON(IsSyncOuAsUserGroup, isSyncOuAsUserGroup_);
      DARABONBA_PTR_FROM_JSON(MobileMapping, mobileMapping_);
      DARABONBA_PTR_FROM_JSON(NameMapping, nameMapping_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
      DARABONBA_PTR_FROM_JSON(StandbyServer, standbyServer_);
      DARABONBA_PTR_FROM_JSON(SyncInterval, syncInterval_);
      DARABONBA_PTR_FROM_JSON(UserSourceId, userSourceId_);
    };
    ModifyInstanceADAuthServerRequest() = default ;
    ModifyInstanceADAuthServerRequest(const ModifyInstanceADAuthServerRequest &) = default ;
    ModifyInstanceADAuthServerRequest(ModifyInstanceADAuthServerRequest &&) = default ;
    ModifyInstanceADAuthServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceADAuthServerRequest() = default ;
    ModifyInstanceADAuthServerRequest& operator=(const ModifyInstanceADAuthServerRequest &) = default ;
    ModifyInstanceADAuthServerRequest& operator=(ModifyInstanceADAuthServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->baseDN_ == nullptr && this->domain_ == nullptr && this->emailMapping_ == nullptr && this->filter_ == nullptr && this->instanceId_ == nullptr
        && this->isDefault_ == nullptr && this->isSSL_ == nullptr && this->isSyncEmailAttr_ == nullptr && this->isSyncMobileAttr_ == nullptr && this->isSyncNameAttr_ == nullptr
        && this->isSyncOuAsUserGroup_ == nullptr && this->mobileMapping_ == nullptr && this->nameMapping_ == nullptr && this->password_ == nullptr && this->port_ == nullptr
        && this->regionId_ == nullptr && this->server_ == nullptr && this->serverName_ == nullptr && this->standbyServer_ == nullptr && this->syncInterval_ == nullptr
        && this->userSourceId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ModifyInstanceADAuthServerRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // baseDN Field Functions 
    bool hasBaseDN() const { return this->baseDN_ != nullptr;};
    void deleteBaseDN() { this->baseDN_ = nullptr;};
    inline string getBaseDN() const { DARABONBA_PTR_GET_DEFAULT(baseDN_, "") };
    inline ModifyInstanceADAuthServerRequest& setBaseDN(string baseDN) { DARABONBA_PTR_SET_VALUE(baseDN_, baseDN) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyInstanceADAuthServerRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // emailMapping Field Functions 
    bool hasEmailMapping() const { return this->emailMapping_ != nullptr;};
    void deleteEmailMapping() { this->emailMapping_ = nullptr;};
    inline string getEmailMapping() const { DARABONBA_PTR_GET_DEFAULT(emailMapping_, "") };
    inline ModifyInstanceADAuthServerRequest& setEmailMapping(string emailMapping) { DARABONBA_PTR_SET_VALUE(emailMapping_, emailMapping) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ModifyInstanceADAuthServerRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceADAuthServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline ModifyInstanceADAuthServerRequest& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isSSL Field Functions 
    bool hasIsSSL() const { return this->isSSL_ != nullptr;};
    void deleteIsSSL() { this->isSSL_ = nullptr;};
    inline string getIsSSL() const { DARABONBA_PTR_GET_DEFAULT(isSSL_, "") };
    inline ModifyInstanceADAuthServerRequest& setIsSSL(string isSSL) { DARABONBA_PTR_SET_VALUE(isSSL_, isSSL) };


    // isSyncEmailAttr Field Functions 
    bool hasIsSyncEmailAttr() const { return this->isSyncEmailAttr_ != nullptr;};
    void deleteIsSyncEmailAttr() { this->isSyncEmailAttr_ = nullptr;};
    inline string getIsSyncEmailAttr() const { DARABONBA_PTR_GET_DEFAULT(isSyncEmailAttr_, "") };
    inline ModifyInstanceADAuthServerRequest& setIsSyncEmailAttr(string isSyncEmailAttr) { DARABONBA_PTR_SET_VALUE(isSyncEmailAttr_, isSyncEmailAttr) };


    // isSyncMobileAttr Field Functions 
    bool hasIsSyncMobileAttr() const { return this->isSyncMobileAttr_ != nullptr;};
    void deleteIsSyncMobileAttr() { this->isSyncMobileAttr_ = nullptr;};
    inline string getIsSyncMobileAttr() const { DARABONBA_PTR_GET_DEFAULT(isSyncMobileAttr_, "") };
    inline ModifyInstanceADAuthServerRequest& setIsSyncMobileAttr(string isSyncMobileAttr) { DARABONBA_PTR_SET_VALUE(isSyncMobileAttr_, isSyncMobileAttr) };


    // isSyncNameAttr Field Functions 
    bool hasIsSyncNameAttr() const { return this->isSyncNameAttr_ != nullptr;};
    void deleteIsSyncNameAttr() { this->isSyncNameAttr_ = nullptr;};
    inline string getIsSyncNameAttr() const { DARABONBA_PTR_GET_DEFAULT(isSyncNameAttr_, "") };
    inline ModifyInstanceADAuthServerRequest& setIsSyncNameAttr(string isSyncNameAttr) { DARABONBA_PTR_SET_VALUE(isSyncNameAttr_, isSyncNameAttr) };


    // isSyncOuAsUserGroup Field Functions 
    bool hasIsSyncOuAsUserGroup() const { return this->isSyncOuAsUserGroup_ != nullptr;};
    void deleteIsSyncOuAsUserGroup() { this->isSyncOuAsUserGroup_ = nullptr;};
    inline string getIsSyncOuAsUserGroup() const { DARABONBA_PTR_GET_DEFAULT(isSyncOuAsUserGroup_, "") };
    inline ModifyInstanceADAuthServerRequest& setIsSyncOuAsUserGroup(string isSyncOuAsUserGroup) { DARABONBA_PTR_SET_VALUE(isSyncOuAsUserGroup_, isSyncOuAsUserGroup) };


    // mobileMapping Field Functions 
    bool hasMobileMapping() const { return this->mobileMapping_ != nullptr;};
    void deleteMobileMapping() { this->mobileMapping_ = nullptr;};
    inline string getMobileMapping() const { DARABONBA_PTR_GET_DEFAULT(mobileMapping_, "") };
    inline ModifyInstanceADAuthServerRequest& setMobileMapping(string mobileMapping) { DARABONBA_PTR_SET_VALUE(mobileMapping_, mobileMapping) };


    // nameMapping Field Functions 
    bool hasNameMapping() const { return this->nameMapping_ != nullptr;};
    void deleteNameMapping() { this->nameMapping_ = nullptr;};
    inline string getNameMapping() const { DARABONBA_PTR_GET_DEFAULT(nameMapping_, "") };
    inline ModifyInstanceADAuthServerRequest& setNameMapping(string nameMapping) { DARABONBA_PTR_SET_VALUE(nameMapping_, nameMapping) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyInstanceADAuthServerRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ModifyInstanceADAuthServerRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceADAuthServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline ModifyInstanceADAuthServerRequest& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline ModifyInstanceADAuthServerRequest& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


    // standbyServer Field Functions 
    bool hasStandbyServer() const { return this->standbyServer_ != nullptr;};
    void deleteStandbyServer() { this->standbyServer_ = nullptr;};
    inline string getStandbyServer() const { DARABONBA_PTR_GET_DEFAULT(standbyServer_, "") };
    inline ModifyInstanceADAuthServerRequest& setStandbyServer(string standbyServer) { DARABONBA_PTR_SET_VALUE(standbyServer_, standbyServer) };


    // syncInterval Field Functions 
    bool hasSyncInterval() const { return this->syncInterval_ != nullptr;};
    void deleteSyncInterval() { this->syncInterval_ = nullptr;};
    inline string getSyncInterval() const { DARABONBA_PTR_GET_DEFAULT(syncInterval_, "") };
    inline ModifyInstanceADAuthServerRequest& setSyncInterval(string syncInterval) { DARABONBA_PTR_SET_VALUE(syncInterval_, syncInterval) };


    // userSourceId Field Functions 
    bool hasUserSourceId() const { return this->userSourceId_ != nullptr;};
    void deleteUserSourceId() { this->userSourceId_ = nullptr;};
    inline string getUserSourceId() const { DARABONBA_PTR_GET_DEFAULT(userSourceId_, "") };
    inline ModifyInstanceADAuthServerRequest& setUserSourceId(string userSourceId) { DARABONBA_PTR_SET_VALUE(userSourceId_, userSourceId) };


  protected:
    // The server account.
    // 
    // This parameter is required.
    shared_ptr<string> account_ {};
    // The base distinguished name (Base DN).
    // 
    // This parameter is required.
    shared_ptr<string> baseDN_ {};
    // The domain on the AD server.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The server attribute name that maps to the user email address.
    shared_ptr<string> emailMapping_ {};
    // The filter condition for users.
    shared_ptr<string> filter_ {};
    // The instance ID of the Bastionhost instance.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether the AD authentication server is the default server. A value of true indicates that the server is the default AD authentication server. A value of false indicates that the server is not the default AD authentication server.
    shared_ptr<string> isDefault_ {};
    // Specifies whether SSL is supported. Valid values:
    // 
    // - **true**: Supported.
    // - **false**: Not supported.
    shared_ptr<string> isSSL_ {};
    // Specifies whether to synchronize the email address. A value of true indicates that the email address is synchronized. A value of false indicates that the email address is not synchronized.
    shared_ptr<string> isSyncEmailAttr_ {};
    // Specifies whether to synchronize the mobile phone number. A value of true indicates that the mobile phone number is synchronized. A value of false indicates that the mobile phone number is not synchronized.
    shared_ptr<string> isSyncMobileAttr_ {};
    // Specifies whether to synchronize the display name. A value of true indicates that the display name is synchronized. A value of false indicates that the display name is not synchronized.
    shared_ptr<string> isSyncNameAttr_ {};
    // Specifies whether to synchronize the organization to which the user belongs as a user group. A value of true indicates that the organization is synchronized as a user group. A value of false indicates that the organization is not synchronized as a user group.
    shared_ptr<string> isSyncOuAsUserGroup_ {};
    // The server attribute name that maps to the user mobile phone number.
    shared_ptr<string> mobileMapping_ {};
    // The server attribute name that maps to the username.
    shared_ptr<string> nameMapping_ {};
    // The password of the server account.
    shared_ptr<string> password_ {};
    // The port used to access the server.
    // 
    // This parameter is required.
    shared_ptr<string> port_ {};
    // The region ID of the Bastionhost instance.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The address of the server.
    // 
    // This parameter is required.
    shared_ptr<string> server_ {};
    // The name of the AD authentication server.
    shared_ptr<string> serverName_ {};
    // The address of the standby server.
    shared_ptr<string> standbyServer_ {};
    // The interval at which user snapshots are automatically synchronized, in hours. Valid values: 0, and 4 to 168. A value of 0 indicates that automatic synchronization is disabled.
    shared_ptr<string> syncInterval_ {};
    shared_ptr<string> userSourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
