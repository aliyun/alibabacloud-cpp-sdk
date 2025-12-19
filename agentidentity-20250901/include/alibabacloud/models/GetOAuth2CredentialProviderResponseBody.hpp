// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOAUTH2CREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOAUTH2CREDENTIALPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOAuth2CredentialProviderResponseBodyOAuth2CredentialProvider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetOAuth2CredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOAuth2CredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OAuth2CredentialProvider, OAuth2CredentialProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOAuth2CredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OAuth2CredentialProvider, OAuth2CredentialProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOAuth2CredentialProviderResponseBody() = default ;
    GetOAuth2CredentialProviderResponseBody(const GetOAuth2CredentialProviderResponseBody &) = default ;
    GetOAuth2CredentialProviderResponseBody(GetOAuth2CredentialProviderResponseBody &&) = default ;
    GetOAuth2CredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOAuth2CredentialProviderResponseBody() = default ;
    GetOAuth2CredentialProviderResponseBody& operator=(const GetOAuth2CredentialProviderResponseBody &) = default ;
    GetOAuth2CredentialProviderResponseBody& operator=(GetOAuth2CredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->OAuth2CredentialProvider_ == nullptr
        && return this->requestId_ == nullptr; };
    // OAuth2CredentialProvider Field Functions 
    bool hasOAuth2CredentialProvider() const { return this->OAuth2CredentialProvider_ != nullptr;};
    void deleteOAuth2CredentialProvider() { this->OAuth2CredentialProvider_ = nullptr;};
    inline const GetOAuth2CredentialProviderResponseBodyOAuth2CredentialProvider & OAuth2CredentialProvider() const { DARABONBA_PTR_GET_CONST(OAuth2CredentialProvider_, GetOAuth2CredentialProviderResponseBodyOAuth2CredentialProvider) };
    inline GetOAuth2CredentialProviderResponseBodyOAuth2CredentialProvider OAuth2CredentialProvider() { DARABONBA_PTR_GET(OAuth2CredentialProvider_, GetOAuth2CredentialProviderResponseBodyOAuth2CredentialProvider) };
    inline GetOAuth2CredentialProviderResponseBody& setOAuth2CredentialProvider(const GetOAuth2CredentialProviderResponseBodyOAuth2CredentialProvider & OAuth2CredentialProvider) { DARABONBA_PTR_SET_VALUE(OAuth2CredentialProvider_, OAuth2CredentialProvider) };
    inline GetOAuth2CredentialProviderResponseBody& setOAuth2CredentialProvider(GetOAuth2CredentialProviderResponseBodyOAuth2CredentialProvider && OAuth2CredentialProvider) { DARABONBA_PTR_SET_RVALUE(OAuth2CredentialProvider_, OAuth2CredentialProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOAuth2CredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetOAuth2CredentialProviderResponseBodyOAuth2CredentialProvider> OAuth2CredentialProvider_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
