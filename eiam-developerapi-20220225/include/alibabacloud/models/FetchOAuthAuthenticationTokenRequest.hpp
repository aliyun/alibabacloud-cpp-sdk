// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHOAUTHAUTHENTICATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHOAUTHAUTHENTICATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class FetchOAuthAuthenticationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchOAuthAuthenticationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, FetchOAuthAuthenticationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
    };
    FetchOAuthAuthenticationTokenRequest() = default ;
    FetchOAuthAuthenticationTokenRequest(const FetchOAuthAuthenticationTokenRequest &) = default ;
    FetchOAuthAuthenticationTokenRequest(FetchOAuthAuthenticationTokenRequest &&) = default ;
    FetchOAuthAuthenticationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchOAuthAuthenticationTokenRequest() = default ;
    FetchOAuthAuthenticationTokenRequest& operator=(const FetchOAuthAuthenticationTokenRequest &) = default ;
    FetchOAuthAuthenticationTokenRequest& operator=(FetchOAuthAuthenticationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialProviderIdentifier_ == nullptr
        && this->scope_ == nullptr; };
    // credentialProviderIdentifier Field Functions 
    bool hasCredentialProviderIdentifier() const { return this->credentialProviderIdentifier_ != nullptr;};
    void deleteCredentialProviderIdentifier() { this->credentialProviderIdentifier_ = nullptr;};
    inline string getCredentialProviderIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderIdentifier_, "") };
    inline FetchOAuthAuthenticationTokenRequest& setCredentialProviderIdentifier(string credentialProviderIdentifier) { DARABONBA_PTR_SET_VALUE(credentialProviderIdentifier_, credentialProviderIdentifier) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline FetchOAuthAuthenticationTokenRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // This parameter is required.
    shared_ptr<string> credentialProviderIdentifier_ {};
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
