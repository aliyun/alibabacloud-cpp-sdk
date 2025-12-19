// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OAUTH2DISCOVERY_HPP_
#define ALIBABACLOUD_MODELS_OAUTH2DISCOVERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AuthorizationServerMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class OAuth2Discovery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OAuth2Discovery& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationServerMetadata, authorizationServerMetadata_);
      DARABONBA_PTR_TO_JSON(DiscoveryURL, discoveryURL_);
    };
    friend void from_json(const Darabonba::Json& j, OAuth2Discovery& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationServerMetadata, authorizationServerMetadata_);
      DARABONBA_PTR_FROM_JSON(DiscoveryURL, discoveryURL_);
    };
    OAuth2Discovery() = default ;
    OAuth2Discovery(const OAuth2Discovery &) = default ;
    OAuth2Discovery(OAuth2Discovery &&) = default ;
    OAuth2Discovery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OAuth2Discovery() = default ;
    OAuth2Discovery& operator=(const OAuth2Discovery &) = default ;
    OAuth2Discovery& operator=(OAuth2Discovery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationServerMetadata_ == nullptr
        && return this->discoveryURL_ == nullptr; };
    // authorizationServerMetadata Field Functions 
    bool hasAuthorizationServerMetadata() const { return this->authorizationServerMetadata_ != nullptr;};
    void deleteAuthorizationServerMetadata() { this->authorizationServerMetadata_ = nullptr;};
    inline const AuthorizationServerMetadata & authorizationServerMetadata() const { DARABONBA_PTR_GET_CONST(authorizationServerMetadata_, AuthorizationServerMetadata) };
    inline AuthorizationServerMetadata authorizationServerMetadata() { DARABONBA_PTR_GET(authorizationServerMetadata_, AuthorizationServerMetadata) };
    inline OAuth2Discovery& setAuthorizationServerMetadata(const AuthorizationServerMetadata & authorizationServerMetadata) { DARABONBA_PTR_SET_VALUE(authorizationServerMetadata_, authorizationServerMetadata) };
    inline OAuth2Discovery& setAuthorizationServerMetadata(AuthorizationServerMetadata && authorizationServerMetadata) { DARABONBA_PTR_SET_RVALUE(authorizationServerMetadata_, authorizationServerMetadata) };


    // discoveryURL Field Functions 
    bool hasDiscoveryURL() const { return this->discoveryURL_ != nullptr;};
    void deleteDiscoveryURL() { this->discoveryURL_ = nullptr;};
    inline string discoveryURL() const { DARABONBA_PTR_GET_DEFAULT(discoveryURL_, "") };
    inline OAuth2Discovery& setDiscoveryURL(string discoveryURL) { DARABONBA_PTR_SET_VALUE(discoveryURL_, discoveryURL) };


  protected:
    std::shared_ptr<AuthorizationServerMetadata> authorizationServerMetadata_ = nullptr;
    std::shared_ptr<string> discoveryURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
