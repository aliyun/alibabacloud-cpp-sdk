// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERRESPONSEBODY_HPP_
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
  class CreateIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProvider, identityProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProvider, identityProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIdentityProviderResponseBody() = default ;
    CreateIdentityProviderResponseBody(const CreateIdentityProviderResponseBody &) = default ;
    CreateIdentityProviderResponseBody(CreateIdentityProviderResponseBody &&) = default ;
    CreateIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderResponseBody() = default ;
    CreateIdentityProviderResponseBody& operator=(const CreateIdentityProviderResponseBody &) = default ;
    CreateIdentityProviderResponseBody& operator=(CreateIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IdentityProvider : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityProvider& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedAudience, allowedAudience_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiscoveryURL, discoveryURL_);
        DARABONBA_PTR_TO_JSON(IdentityProviderArn, identityProviderArn_);
        DARABONBA_PTR_TO_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityProvider& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedAudience, allowedAudience_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiscoveryURL, discoveryURL_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderArn, identityProviderArn_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderName, identityProviderName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      IdentityProvider() = default ;
      IdentityProvider(const IdentityProvider &) = default ;
      IdentityProvider(IdentityProvider &&) = default ;
      IdentityProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityProvider() = default ;
      IdentityProvider& operator=(const IdentityProvider &) = default ;
      IdentityProvider& operator=(IdentityProvider &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowedAudience_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->discoveryURL_ == nullptr && this->identityProviderArn_ == nullptr && this->identityProviderName_ == nullptr
        && this->updateTime_ == nullptr; };
      // allowedAudience Field Functions 
      bool hasAllowedAudience() const { return this->allowedAudience_ != nullptr;};
      void deleteAllowedAudience() { this->allowedAudience_ = nullptr;};
      inline const vector<string> & getAllowedAudience() const { DARABONBA_PTR_GET_CONST(allowedAudience_, vector<string>) };
      inline vector<string> getAllowedAudience() { DARABONBA_PTR_GET(allowedAudience_, vector<string>) };
      inline IdentityProvider& setAllowedAudience(const vector<string> & allowedAudience) { DARABONBA_PTR_SET_VALUE(allowedAudience_, allowedAudience) };
      inline IdentityProvider& setAllowedAudience(vector<string> && allowedAudience) { DARABONBA_PTR_SET_RVALUE(allowedAudience_, allowedAudience) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline IdentityProvider& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline IdentityProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // discoveryURL Field Functions 
      bool hasDiscoveryURL() const { return this->discoveryURL_ != nullptr;};
      void deleteDiscoveryURL() { this->discoveryURL_ = nullptr;};
      inline string getDiscoveryURL() const { DARABONBA_PTR_GET_DEFAULT(discoveryURL_, "") };
      inline IdentityProvider& setDiscoveryURL(string discoveryURL) { DARABONBA_PTR_SET_VALUE(discoveryURL_, discoveryURL) };


      // identityProviderArn Field Functions 
      bool hasIdentityProviderArn() const { return this->identityProviderArn_ != nullptr;};
      void deleteIdentityProviderArn() { this->identityProviderArn_ = nullptr;};
      inline string getIdentityProviderArn() const { DARABONBA_PTR_GET_DEFAULT(identityProviderArn_, "") };
      inline IdentityProvider& setIdentityProviderArn(string identityProviderArn) { DARABONBA_PTR_SET_VALUE(identityProviderArn_, identityProviderArn) };


      // identityProviderName Field Functions 
      bool hasIdentityProviderName() const { return this->identityProviderName_ != nullptr;};
      void deleteIdentityProviderName() { this->identityProviderName_ = nullptr;};
      inline string getIdentityProviderName() const { DARABONBA_PTR_GET_DEFAULT(identityProviderName_, "") };
      inline IdentityProvider& setIdentityProviderName(string identityProviderName) { DARABONBA_PTR_SET_VALUE(identityProviderName_, identityProviderName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline IdentityProvider& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<vector<string>> allowedAudience_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> discoveryURL_ {};
      shared_ptr<string> identityProviderArn_ {};
      shared_ptr<string> identityProviderName_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->identityProvider_ == nullptr
        && this->requestId_ == nullptr; };
    // identityProvider Field Functions 
    bool hasIdentityProvider() const { return this->identityProvider_ != nullptr;};
    void deleteIdentityProvider() { this->identityProvider_ = nullptr;};
    inline const CreateIdentityProviderResponseBody::IdentityProvider & getIdentityProvider() const { DARABONBA_PTR_GET_CONST(identityProvider_, CreateIdentityProviderResponseBody::IdentityProvider) };
    inline CreateIdentityProviderResponseBody::IdentityProvider getIdentityProvider() { DARABONBA_PTR_GET(identityProvider_, CreateIdentityProviderResponseBody::IdentityProvider) };
    inline CreateIdentityProviderResponseBody& setIdentityProvider(const CreateIdentityProviderResponseBody::IdentityProvider & identityProvider) { DARABONBA_PTR_SET_VALUE(identityProvider_, identityProvider) };
    inline CreateIdentityProviderResponseBody& setIdentityProvider(CreateIdentityProviderResponseBody::IdentityProvider && identityProvider) { DARABONBA_PTR_SET_RVALUE(identityProvider_, identityProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateIdentityProviderResponseBody::IdentityProvider> identityProvider_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
