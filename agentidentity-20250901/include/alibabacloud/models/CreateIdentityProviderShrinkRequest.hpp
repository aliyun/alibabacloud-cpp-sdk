// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateIdentityProviderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedAudience, allowedAudienceShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiscoveryURL, discoveryURL_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedAudience, allowedAudienceShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiscoveryURL, discoveryURL_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
    };
    CreateIdentityProviderShrinkRequest() = default ;
    CreateIdentityProviderShrinkRequest(const CreateIdentityProviderShrinkRequest &) = default ;
    CreateIdentityProviderShrinkRequest(CreateIdentityProviderShrinkRequest &&) = default ;
    CreateIdentityProviderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderShrinkRequest() = default ;
    CreateIdentityProviderShrinkRequest& operator=(const CreateIdentityProviderShrinkRequest &) = default ;
    CreateIdentityProviderShrinkRequest& operator=(CreateIdentityProviderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedAudienceShrink_ == nullptr
        && return this->description_ == nullptr && return this->discoveryURL_ == nullptr && return this->identityProviderName_ == nullptr; };
    // allowedAudienceShrink Field Functions 
    bool hasAllowedAudienceShrink() const { return this->allowedAudienceShrink_ != nullptr;};
    void deleteAllowedAudienceShrink() { this->allowedAudienceShrink_ = nullptr;};
    inline string allowedAudienceShrink() const { DARABONBA_PTR_GET_DEFAULT(allowedAudienceShrink_, "") };
    inline CreateIdentityProviderShrinkRequest& setAllowedAudienceShrink(string allowedAudienceShrink) { DARABONBA_PTR_SET_VALUE(allowedAudienceShrink_, allowedAudienceShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIdentityProviderShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // discoveryURL Field Functions 
    bool hasDiscoveryURL() const { return this->discoveryURL_ != nullptr;};
    void deleteDiscoveryURL() { this->discoveryURL_ = nullptr;};
    inline string discoveryURL() const { DARABONBA_PTR_GET_DEFAULT(discoveryURL_, "") };
    inline CreateIdentityProviderShrinkRequest& setDiscoveryURL(string discoveryURL) { DARABONBA_PTR_SET_VALUE(discoveryURL_, discoveryURL) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline CreateIdentityProviderShrinkRequest& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


  protected:
    std::shared_ptr<string> allowedAudienceShrink_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> discoveryURL_ = nullptr;
    std::shared_ptr<string> identityProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
