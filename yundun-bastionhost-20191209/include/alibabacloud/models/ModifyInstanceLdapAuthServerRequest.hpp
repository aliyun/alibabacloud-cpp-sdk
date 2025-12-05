// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCELDAPAUTHSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCELDAPAUTHSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyInstanceLDAPAuthServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceLDAPAuthServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(BaseDN, baseDN_);
      DARABONBA_PTR_TO_JSON(EmailMapping, emailMapping_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSSL, isSSL_);
      DARABONBA_PTR_TO_JSON(LoginNameMapping, loginNameMapping_);
      DARABONBA_PTR_TO_JSON(MobileMapping, mobileMapping_);
      DARABONBA_PTR_TO_JSON(NameMapping, nameMapping_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(StandbyServer, standbyServer_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceLDAPAuthServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(BaseDN, baseDN_);
      DARABONBA_PTR_FROM_JSON(EmailMapping, emailMapping_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSSL, isSSL_);
      DARABONBA_PTR_FROM_JSON(LoginNameMapping, loginNameMapping_);
      DARABONBA_PTR_FROM_JSON(MobileMapping, mobileMapping_);
      DARABONBA_PTR_FROM_JSON(NameMapping, nameMapping_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(StandbyServer, standbyServer_);
    };
    ModifyInstanceLDAPAuthServerRequest() = default ;
    ModifyInstanceLDAPAuthServerRequest(const ModifyInstanceLDAPAuthServerRequest &) = default ;
    ModifyInstanceLDAPAuthServerRequest(ModifyInstanceLDAPAuthServerRequest &&) = default ;
    ModifyInstanceLDAPAuthServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceLDAPAuthServerRequest() = default ;
    ModifyInstanceLDAPAuthServerRequest& operator=(const ModifyInstanceLDAPAuthServerRequest &) = default ;
    ModifyInstanceLDAPAuthServerRequest& operator=(ModifyInstanceLDAPAuthServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->baseDN_ == nullptr && return this->emailMapping_ == nullptr && return this->filter_ == nullptr && return this->instanceId_ == nullptr && return this->isSSL_ == nullptr
        && return this->loginNameMapping_ == nullptr && return this->mobileMapping_ == nullptr && return this->nameMapping_ == nullptr && return this->password_ == nullptr && return this->port_ == nullptr
        && return this->regionId_ == nullptr && return this->server_ == nullptr && return this->standbyServer_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // baseDN Field Functions 
    bool hasBaseDN() const { return this->baseDN_ != nullptr;};
    void deleteBaseDN() { this->baseDN_ = nullptr;};
    inline string baseDN() const { DARABONBA_PTR_GET_DEFAULT(baseDN_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setBaseDN(string baseDN) { DARABONBA_PTR_SET_VALUE(baseDN_, baseDN) };


    // emailMapping Field Functions 
    bool hasEmailMapping() const { return this->emailMapping_ != nullptr;};
    void deleteEmailMapping() { this->emailMapping_ = nullptr;};
    inline string emailMapping() const { DARABONBA_PTR_GET_DEFAULT(emailMapping_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setEmailMapping(string emailMapping) { DARABONBA_PTR_SET_VALUE(emailMapping_, emailMapping) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSSL Field Functions 
    bool hasIsSSL() const { return this->isSSL_ != nullptr;};
    void deleteIsSSL() { this->isSSL_ = nullptr;};
    inline string isSSL() const { DARABONBA_PTR_GET_DEFAULT(isSSL_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setIsSSL(string isSSL) { DARABONBA_PTR_SET_VALUE(isSSL_, isSSL) };


    // loginNameMapping Field Functions 
    bool hasLoginNameMapping() const { return this->loginNameMapping_ != nullptr;};
    void deleteLoginNameMapping() { this->loginNameMapping_ = nullptr;};
    inline string loginNameMapping() const { DARABONBA_PTR_GET_DEFAULT(loginNameMapping_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setLoginNameMapping(string loginNameMapping) { DARABONBA_PTR_SET_VALUE(loginNameMapping_, loginNameMapping) };


    // mobileMapping Field Functions 
    bool hasMobileMapping() const { return this->mobileMapping_ != nullptr;};
    void deleteMobileMapping() { this->mobileMapping_ = nullptr;};
    inline string mobileMapping() const { DARABONBA_PTR_GET_DEFAULT(mobileMapping_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setMobileMapping(string mobileMapping) { DARABONBA_PTR_SET_VALUE(mobileMapping_, mobileMapping) };


    // nameMapping Field Functions 
    bool hasNameMapping() const { return this->nameMapping_ != nullptr;};
    void deleteNameMapping() { this->nameMapping_ = nullptr;};
    inline string nameMapping() const { DARABONBA_PTR_GET_DEFAULT(nameMapping_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setNameMapping(string nameMapping) { DARABONBA_PTR_SET_VALUE(nameMapping_, nameMapping) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // standbyServer Field Functions 
    bool hasStandbyServer() const { return this->standbyServer_ != nullptr;};
    void deleteStandbyServer() { this->standbyServer_ = nullptr;};
    inline string standbyServer() const { DARABONBA_PTR_GET_DEFAULT(standbyServer_, "") };
    inline ModifyInstanceLDAPAuthServerRequest& setStandbyServer(string standbyServer) { DARABONBA_PTR_SET_VALUE(standbyServer_, standbyServer) };


  protected:
    // The username of the account that is used for the LDAP server.
    // 
    // This parameter is required.
    std::shared_ptr<string> account_ = nullptr;
    // The Base distinguished name (DN).
    // 
    // This parameter is required.
    std::shared_ptr<string> baseDN_ = nullptr;
    // The field that is used to indicate the email address of a user on the LDAP server.
    std::shared_ptr<string> emailMapping_ = nullptr;
    // The condition that is used to filter users.
    std::shared_ptr<string> filter_ = nullptr;
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether to support SSL. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> isSSL_ = nullptr;
    // The field that is used to indicate the logon name of a user on the LDAP server.
    std::shared_ptr<string> loginNameMapping_ = nullptr;
    // The field that is used to indicate the mobile phone number of a user on the LDAP server.
    std::shared_ptr<string> mobileMapping_ = nullptr;
    // The field that is used to indicate the name of a user on the LDAP server.
    std::shared_ptr<string> nameMapping_ = nullptr;
    // The password of the account that is used for the LDAP server. You must configure a password when you configure LDAP authentication. If you leave this parameter empty when you modify the settings of LDAP authentication, the current password is used.
    std::shared_ptr<string> password_ = nullptr;
    // The port that is used to access the LDAP server.
    // 
    // This parameter is required.
    std::shared_ptr<string> port_ = nullptr;
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The address of the LDAP server.
    // 
    // This parameter is required.
    std::shared_ptr<string> server_ = nullptr;
    // The address of the secondary LDAP server.
    std::shared_ptr<string> standbyServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
