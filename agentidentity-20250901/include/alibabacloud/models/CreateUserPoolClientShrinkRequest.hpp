// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERPOOLCLIENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERPOOLCLIENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateUserPoolClientShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserPoolClientShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenValidity, accessTokenValidity_);
      DARABONBA_PTR_TO_JSON(ClientName, clientName_);
      DARABONBA_PTR_TO_JSON(EnforcePKCE, enforcePKCE_);
      DARABONBA_PTR_TO_JSON(RedirectURIs, redirectURIsShrink_);
      DARABONBA_PTR_TO_JSON(RefreshTokenValidity, refreshTokenValidity_);
      DARABONBA_PTR_TO_JSON(SecretRequired, secretRequired_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserPoolClientShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenValidity, accessTokenValidity_);
      DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
      DARABONBA_PTR_FROM_JSON(EnforcePKCE, enforcePKCE_);
      DARABONBA_PTR_FROM_JSON(RedirectURIs, redirectURIsShrink_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenValidity, refreshTokenValidity_);
      DARABONBA_PTR_FROM_JSON(SecretRequired, secretRequired_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    CreateUserPoolClientShrinkRequest() = default ;
    CreateUserPoolClientShrinkRequest(const CreateUserPoolClientShrinkRequest &) = default ;
    CreateUserPoolClientShrinkRequest(CreateUserPoolClientShrinkRequest &&) = default ;
    CreateUserPoolClientShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserPoolClientShrinkRequest() = default ;
    CreateUserPoolClientShrinkRequest& operator=(const CreateUserPoolClientShrinkRequest &) = default ;
    CreateUserPoolClientShrinkRequest& operator=(CreateUserPoolClientShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessTokenValidity_ == nullptr
        && this->clientName_ == nullptr && this->enforcePKCE_ == nullptr && this->redirectURIsShrink_ == nullptr && this->refreshTokenValidity_ == nullptr && this->secretRequired_ == nullptr
        && this->userPoolName_ == nullptr; };
    // accessTokenValidity Field Functions 
    bool hasAccessTokenValidity() const { return this->accessTokenValidity_ != nullptr;};
    void deleteAccessTokenValidity() { this->accessTokenValidity_ = nullptr;};
    inline string getAccessTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValidity_, "") };
    inline CreateUserPoolClientShrinkRequest& setAccessTokenValidity(string accessTokenValidity) { DARABONBA_PTR_SET_VALUE(accessTokenValidity_, accessTokenValidity) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline CreateUserPoolClientShrinkRequest& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // enforcePKCE Field Functions 
    bool hasEnforcePKCE() const { return this->enforcePKCE_ != nullptr;};
    void deleteEnforcePKCE() { this->enforcePKCE_ = nullptr;};
    inline bool getEnforcePKCE() const { DARABONBA_PTR_GET_DEFAULT(enforcePKCE_, false) };
    inline CreateUserPoolClientShrinkRequest& setEnforcePKCE(bool enforcePKCE) { DARABONBA_PTR_SET_VALUE(enforcePKCE_, enforcePKCE) };


    // redirectURIsShrink Field Functions 
    bool hasRedirectURIsShrink() const { return this->redirectURIsShrink_ != nullptr;};
    void deleteRedirectURIsShrink() { this->redirectURIsShrink_ = nullptr;};
    inline string getRedirectURIsShrink() const { DARABONBA_PTR_GET_DEFAULT(redirectURIsShrink_, "") };
    inline CreateUserPoolClientShrinkRequest& setRedirectURIsShrink(string redirectURIsShrink) { DARABONBA_PTR_SET_VALUE(redirectURIsShrink_, redirectURIsShrink) };


    // refreshTokenValidity Field Functions 
    bool hasRefreshTokenValidity() const { return this->refreshTokenValidity_ != nullptr;};
    void deleteRefreshTokenValidity() { this->refreshTokenValidity_ = nullptr;};
    inline string getRefreshTokenValidity() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValidity_, "") };
    inline CreateUserPoolClientShrinkRequest& setRefreshTokenValidity(string refreshTokenValidity) { DARABONBA_PTR_SET_VALUE(refreshTokenValidity_, refreshTokenValidity) };


    // secretRequired Field Functions 
    bool hasSecretRequired() const { return this->secretRequired_ != nullptr;};
    void deleteSecretRequired() { this->secretRequired_ = nullptr;};
    inline bool getSecretRequired() const { DARABONBA_PTR_GET_DEFAULT(secretRequired_, false) };
    inline CreateUserPoolClientShrinkRequest& setSecretRequired(bool secretRequired) { DARABONBA_PTR_SET_VALUE(secretRequired_, secretRequired) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline CreateUserPoolClientShrinkRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> accessTokenValidity_ {};
    shared_ptr<string> clientName_ {};
    shared_ptr<bool> enforcePKCE_ {};
    shared_ptr<string> redirectURIsShrink_ {};
    shared_ptr<string> refreshTokenValidity_ {};
    shared_ptr<bool> secretRequired_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
