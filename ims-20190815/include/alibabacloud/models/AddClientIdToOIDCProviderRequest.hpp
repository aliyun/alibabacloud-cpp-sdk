// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLIENTIDTOOIDCPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCLIENTIDTOOIDCPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class AddClientIdToOIDCProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddClientIdToOIDCProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(OIDCProviderName, OIDCProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, AddClientIdToOIDCProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(OIDCProviderName, OIDCProviderName_);
    };
    AddClientIdToOIDCProviderRequest() = default ;
    AddClientIdToOIDCProviderRequest(const AddClientIdToOIDCProviderRequest &) = default ;
    AddClientIdToOIDCProviderRequest(AddClientIdToOIDCProviderRequest &&) = default ;
    AddClientIdToOIDCProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddClientIdToOIDCProviderRequest() = default ;
    AddClientIdToOIDCProviderRequest& operator=(const AddClientIdToOIDCProviderRequest &) = default ;
    AddClientIdToOIDCProviderRequest& operator=(AddClientIdToOIDCProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->OIDCProviderName_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline AddClientIdToOIDCProviderRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // OIDCProviderName Field Functions 
    bool hasOIDCProviderName() const { return this->OIDCProviderName_ != nullptr;};
    void deleteOIDCProviderName() { this->OIDCProviderName_ = nullptr;};
    inline string getOIDCProviderName() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderName_, "") };
    inline AddClientIdToOIDCProviderRequest& setOIDCProviderName(string OIDCProviderName) { DARABONBA_PTR_SET_VALUE(OIDCProviderName_, OIDCProviderName) };


  protected:
    // The client ID that you want to add.
    // 
    // The client ID can contain letters, digits, and special characters and cannot start with the special characters. The special characters are `periods, (.), hyphens (-), underscores (_), colons (:), and forward slashes (/)`.``
    // 
    // The client ID can be up to 128 characters in length.
    shared_ptr<string> clientId_ {};
    // The name of the OIDC IdP.
    shared_ptr<string> OIDCProviderName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
