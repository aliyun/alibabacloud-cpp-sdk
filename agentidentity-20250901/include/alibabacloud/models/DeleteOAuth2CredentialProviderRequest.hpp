// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOAUTH2CREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOAUTH2CREDENTIALPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeleteOAuth2CredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOAuth2CredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOAuth2CredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OAuth2CredentialProviderName, OAuth2CredentialProviderName_);
    };
    DeleteOAuth2CredentialProviderRequest() = default ;
    DeleteOAuth2CredentialProviderRequest(const DeleteOAuth2CredentialProviderRequest &) = default ;
    DeleteOAuth2CredentialProviderRequest(DeleteOAuth2CredentialProviderRequest &&) = default ;
    DeleteOAuth2CredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOAuth2CredentialProviderRequest() = default ;
    DeleteOAuth2CredentialProviderRequest& operator=(const DeleteOAuth2CredentialProviderRequest &) = default ;
    DeleteOAuth2CredentialProviderRequest& operator=(DeleteOAuth2CredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->OAuth2CredentialProviderName_ == nullptr; };
    // OAuth2CredentialProviderName Field Functions 
    bool hasOAuth2CredentialProviderName() const { return this->OAuth2CredentialProviderName_ != nullptr;};
    void deleteOAuth2CredentialProviderName() { this->OAuth2CredentialProviderName_ = nullptr;};
    inline string OAuth2CredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(OAuth2CredentialProviderName_, "") };
    inline DeleteOAuth2CredentialProviderRequest& setOAuth2CredentialProviderName(string OAuth2CredentialProviderName) { DARABONBA_PTR_SET_VALUE(OAuth2CredentialProviderName_, OAuth2CredentialProviderName) };


  protected:
    std::shared_ptr<string> OAuth2CredentialProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
