// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYINSTANCEADAUTHSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYINSTANCEADAUTHSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class VerifyInstanceADAuthServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyInstanceADAuthServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(BaseDN, baseDN_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSSL, isSSL_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Server, server_);
      DARABONBA_PTR_TO_JSON(StandbyServer, standbyServer_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyInstanceADAuthServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(BaseDN, baseDN_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSSL, isSSL_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
      DARABONBA_PTR_FROM_JSON(StandbyServer, standbyServer_);
    };
    VerifyInstanceADAuthServerRequest() = default ;
    VerifyInstanceADAuthServerRequest(const VerifyInstanceADAuthServerRequest &) = default ;
    VerifyInstanceADAuthServerRequest(VerifyInstanceADAuthServerRequest &&) = default ;
    VerifyInstanceADAuthServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyInstanceADAuthServerRequest() = default ;
    VerifyInstanceADAuthServerRequest& operator=(const VerifyInstanceADAuthServerRequest &) = default ;
    VerifyInstanceADAuthServerRequest& operator=(VerifyInstanceADAuthServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->baseDN_ == nullptr && this->domain_ == nullptr && this->filter_ == nullptr && this->instanceId_ == nullptr && this->isSSL_ == nullptr
        && this->password_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->server_ == nullptr && this->standbyServer_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline VerifyInstanceADAuthServerRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // baseDN Field Functions 
    bool hasBaseDN() const { return this->baseDN_ != nullptr;};
    void deleteBaseDN() { this->baseDN_ = nullptr;};
    inline string getBaseDN() const { DARABONBA_PTR_GET_DEFAULT(baseDN_, "") };
    inline VerifyInstanceADAuthServerRequest& setBaseDN(string baseDN) { DARABONBA_PTR_SET_VALUE(baseDN_, baseDN) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline VerifyInstanceADAuthServerRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline VerifyInstanceADAuthServerRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline VerifyInstanceADAuthServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSSL Field Functions 
    bool hasIsSSL() const { return this->isSSL_ != nullptr;};
    void deleteIsSSL() { this->isSSL_ = nullptr;};
    inline string getIsSSL() const { DARABONBA_PTR_GET_DEFAULT(isSSL_, "") };
    inline VerifyInstanceADAuthServerRequest& setIsSSL(string isSSL) { DARABONBA_PTR_SET_VALUE(isSSL_, isSSL) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline VerifyInstanceADAuthServerRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline VerifyInstanceADAuthServerRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline VerifyInstanceADAuthServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline VerifyInstanceADAuthServerRequest& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


    // standbyServer Field Functions 
    bool hasStandbyServer() const { return this->standbyServer_ != nullptr;};
    void deleteStandbyServer() { this->standbyServer_ = nullptr;};
    inline string getStandbyServer() const { DARABONBA_PTR_GET_DEFAULT(standbyServer_, "") };
    inline VerifyInstanceADAuthServerRequest& setStandbyServer(string standbyServer) { DARABONBA_PTR_SET_VALUE(standbyServer_, standbyServer) };


  protected:
    // This parameter is required.
    shared_ptr<string> account_ {};
    // This parameter is required.
    shared_ptr<string> baseDN_ {};
    // This parameter is required.
    shared_ptr<string> domain_ {};
    shared_ptr<string> filter_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> isSSL_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> port_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> server_ {};
    shared_ptr<string> standbyServer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
