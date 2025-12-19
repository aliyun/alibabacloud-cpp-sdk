// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDER_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDER_HPP_
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
  class CreateIdentityProviderResponseBodyIdentityProvider : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderResponseBodyIdentityProvider& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedAudience, allowedAudience_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiscoveryURL, discoveryURL_);
      DARABONBA_PTR_TO_JSON(IdentityProviderArn, identityProviderArn_);
      DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderResponseBodyIdentityProvider& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedAudience, allowedAudience_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiscoveryURL, discoveryURL_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderArn, identityProviderArn_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CreateIdentityProviderResponseBodyIdentityProvider() = default ;
    CreateIdentityProviderResponseBodyIdentityProvider(const CreateIdentityProviderResponseBodyIdentityProvider &) = default ;
    CreateIdentityProviderResponseBodyIdentityProvider(CreateIdentityProviderResponseBodyIdentityProvider &&) = default ;
    CreateIdentityProviderResponseBodyIdentityProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderResponseBodyIdentityProvider() = default ;
    CreateIdentityProviderResponseBodyIdentityProvider& operator=(const CreateIdentityProviderResponseBodyIdentityProvider &) = default ;
    CreateIdentityProviderResponseBodyIdentityProvider& operator=(CreateIdentityProviderResponseBodyIdentityProvider &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedAudience_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->discoveryURL_ == nullptr && return this->identityProviderArn_ == nullptr && return this->identityProviderName_ == nullptr
        && return this->updateTime_ == nullptr; };
    // allowedAudience Field Functions 
    bool hasAllowedAudience() const { return this->allowedAudience_ != nullptr;};
    void deleteAllowedAudience() { this->allowedAudience_ = nullptr;};
    inline const vector<string> & allowedAudience() const { DARABONBA_PTR_GET_CONST(allowedAudience_, vector<string>) };
    inline vector<string> allowedAudience() { DARABONBA_PTR_GET(allowedAudience_, vector<string>) };
    inline CreateIdentityProviderResponseBodyIdentityProvider& setAllowedAudience(const vector<string> & allowedAudience) { DARABONBA_PTR_SET_VALUE(allowedAudience_, allowedAudience) };
    inline CreateIdentityProviderResponseBodyIdentityProvider& setAllowedAudience(vector<string> && allowedAudience) { DARABONBA_PTR_SET_RVALUE(allowedAudience_, allowedAudience) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateIdentityProviderResponseBodyIdentityProvider& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIdentityProviderResponseBodyIdentityProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // discoveryURL Field Functions 
    bool hasDiscoveryURL() const { return this->discoveryURL_ != nullptr;};
    void deleteDiscoveryURL() { this->discoveryURL_ = nullptr;};
    inline string discoveryURL() const { DARABONBA_PTR_GET_DEFAULT(discoveryURL_, "") };
    inline CreateIdentityProviderResponseBodyIdentityProvider& setDiscoveryURL(string discoveryURL) { DARABONBA_PTR_SET_VALUE(discoveryURL_, discoveryURL) };


    // identityProviderArn Field Functions 
    bool hasIdentityProviderArn() const { return this->identityProviderArn_ != nullptr;};
    void deleteIdentityProviderArn() { this->identityProviderArn_ = nullptr;};
    inline string identityProviderArn() const { DARABONBA_PTR_GET_DEFAULT(identityProviderArn_, "") };
    inline CreateIdentityProviderResponseBodyIdentityProvider& setIdentityProviderArn(string identityProviderArn) { DARABONBA_PTR_SET_VALUE(identityProviderArn_, identityProviderArn) };


    // identityProviderName Field Functions 
    bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
    void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
    inline string identityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
    inline CreateIdentityProviderResponseBodyIdentityProvider& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline CreateIdentityProviderResponseBodyIdentityProvider& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<string>> allowedAudience_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> discoveryURL_ = nullptr;
    std::shared_ptr<string> identityProviderArn_ = nullptr;
    std::shared_ptr<string> identityProviderName_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
