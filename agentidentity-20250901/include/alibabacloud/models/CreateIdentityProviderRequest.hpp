// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedAudience, allowedAudience_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiscoveryURL, discoveryURL_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedAudience, allowedAudience_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiscoveryURL, discoveryURL_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
    };
    CreateIdentityProviderRequest() = default ;
    CreateIdentityProviderRequest(const CreateIdentityProviderRequest &) = default ;
    CreateIdentityProviderRequest(CreateIdentityProviderRequest &&) = default ;
    CreateIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequest() = default ;
    CreateIdentityProviderRequest& operator=(const CreateIdentityProviderRequest &) = default ;
    CreateIdentityProviderRequest& operator=(CreateIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedAudience_ == nullptr
        && return this->description_ == nullptr && return this->discoveryURL_ == nullptr && return this->identityProviderName_ == nullptr; };
    // allowedAudience Field Functions 
    bool hasAllowedAudience() const { return this->allowedAudience_ != nullptr;};
    void deleteAllowedAudience() { this->allowedAudience_ = nullptr;};
    inline const vector<string> & allowedAudience() const { DARABONBA_PTR_GET_CONST(allowedAudience_, vector<string>) };
    inline vector<string> allowedAudience() { DARABONBA_PTR_GET(allowedAudience_, vector<string>) };
    inline CreateIdentityProviderRequest& setAllowedAudience(const vector<string> & allowedAudience) { DARABONBA_PTR_SET_VALUE(allowedAudience_, allowedAudience) };
    inline CreateIdentityProviderRequest& setAllowedAudience(vector<string> && allowedAudience) { DARABONBA_PTR_SET_RVALUE(allowedAudience_, allowedAudience) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIdentityProviderRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // discoveryURL Field Functions 
    bool hasDiscoveryURL() const { return this->discoveryURL_ != nullptr;};
    void deleteDiscoveryURL() { this->discoveryURL_ = nullptr;};
    inline string discoveryURL() const { DARABONBA_PTR_GET_DEFAULT(discoveryURL_, "") };
    inline CreateIdentityProviderRequest& setDiscoveryURL(string discoveryURL) { DARABONBA_PTR_SET_VALUE(discoveryURL_, discoveryURL) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline CreateIdentityProviderRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


  protected:
    std::shared_ptr<vector<string>> allowedAudience_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> discoveryURL_ = nullptr;
    std::shared_ptr<string> identityProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
