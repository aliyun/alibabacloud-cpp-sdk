// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class BindIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_TO_JSON(IdpMetadata, idpMetadata_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoginEnabled, loginEnabled_);
      DARABONBA_PTR_TO_JSON(SyncEnabled, syncEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, BindIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_FROM_JSON(IdpMetadata, idpMetadata_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoginEnabled, loginEnabled_);
      DARABONBA_PTR_FROM_JSON(SyncEnabled, syncEnabled_);
    };
    BindIdentityProviderRequest() = default ;
    BindIdentityProviderRequest(const BindIdentityProviderRequest &) = default ;
    BindIdentityProviderRequest(BindIdentityProviderRequest &&) = default ;
    BindIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindIdentityProviderRequest() = default ;
    BindIdentityProviderRequest& operator=(const BindIdentityProviderRequest &) = default ;
    BindIdentityProviderRequest& operator=(BindIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->identityProviderType_ == nullptr && this->idpMetadata_ == nullptr && this->instanceId_ == nullptr && this->loginEnabled_ == nullptr && this->syncEnabled_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline BindIdentityProviderRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // identityProviderType Field Functions 
    bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
    void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
    inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
    inline BindIdentityProviderRequest& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


    // idpMetadata Field Functions 
    bool hasIdpMetadata() const { return this->idpMetadata_ != nullptr;};
    void deleteIdpMetadata() { this->idpMetadata_ = nullptr;};
    inline string getIdpMetadata() const { DARABONBA_PTR_GET_DEFAULT(idpMetadata_, "") };
    inline BindIdentityProviderRequest& setIdpMetadata(string idpMetadata) { DARABONBA_PTR_SET_VALUE(idpMetadata_, idpMetadata) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BindIdentityProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loginEnabled Field Functions 
    bool hasLoginEnabled() const { return this->loginEnabled_ != nullptr;};
    void deleteLoginEnabled() { this->loginEnabled_ = nullptr;};
    inline bool getLoginEnabled() const { DARABONBA_PTR_GET_DEFAULT(loginEnabled_, false) };
    inline BindIdentityProviderRequest& setLoginEnabled(bool loginEnabled) { DARABONBA_PTR_SET_VALUE(loginEnabled_, loginEnabled) };


    // syncEnabled Field Functions 
    bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
    void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
    inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
    inline BindIdentityProviderRequest& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> identityProviderType_ {};
    shared_ptr<string> idpMetadata_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> loginEnabled_ {};
    shared_ptr<bool> syncEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
