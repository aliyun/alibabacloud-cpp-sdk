// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerAuthorizationRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAuthorizationRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authorizationRules, authorizationRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAuthorizationRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizationRules, authorizationRules_);
    };
    CreateConsumerAuthorizationRulesRequest() = default ;
    CreateConsumerAuthorizationRulesRequest(const CreateConsumerAuthorizationRulesRequest &) = default ;
    CreateConsumerAuthorizationRulesRequest(CreateConsumerAuthorizationRulesRequest &&) = default ;
    CreateConsumerAuthorizationRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAuthorizationRulesRequest() = default ;
    CreateConsumerAuthorizationRulesRequest& operator=(const CreateConsumerAuthorizationRulesRequest &) = default ;
    CreateConsumerAuthorizationRulesRequest& operator=(CreateConsumerAuthorizationRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationRules& obj) { 
        DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
        DARABONBA_PTR_TO_JSON(expireMode, expireMode_);
        DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
        DARABONBA_PTR_TO_JSON(resourceIdentifier, resourceIdentifier_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationRules& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
        DARABONBA_PTR_FROM_JSON(expireMode, expireMode_);
        DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
        DARABONBA_PTR_FROM_JSON(resourceIdentifier, resourceIdentifier_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      };
      AuthorizationRules() = default ;
      AuthorizationRules(const AuthorizationRules &) = default ;
      AuthorizationRules(AuthorizationRules &&) = default ;
      AuthorizationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationRules() = default ;
      AuthorizationRules& operator=(const AuthorizationRules &) = default ;
      AuthorizationRules& operator=(AuthorizationRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceIdentifier : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceIdentifier& obj) { 
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(parentResourceId, parentResourceId_);
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resources, resources_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceIdentifier& obj) { 
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(parentResourceId, parentResourceId_);
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resources, resources_);
        };
        ResourceIdentifier() = default ;
        ResourceIdentifier(const ResourceIdentifier &) = default ;
        ResourceIdentifier(ResourceIdentifier &&) = default ;
        ResourceIdentifier(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceIdentifier() = default ;
        ResourceIdentifier& operator=(const ResourceIdentifier &) = default ;
        ResourceIdentifier& operator=(ResourceIdentifier &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->environmentId_ == nullptr
        && this->parentResourceId_ == nullptr && this->resourceId_ == nullptr && this->resources_ == nullptr; };
        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline ResourceIdentifier& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // parentResourceId Field Functions 
        bool hasParentResourceId() const { return this->parentResourceId_ != nullptr;};
        void deleteParentResourceId() { this->parentResourceId_ = nullptr;};
        inline string getParentResourceId() const { DARABONBA_PTR_GET_DEFAULT(parentResourceId_, "") };
        inline ResourceIdentifier& setParentResourceId(string parentResourceId) { DARABONBA_PTR_SET_VALUE(parentResourceId_, parentResourceId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ResourceIdentifier& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resources Field Functions 
        bool hasResources() const { return this->resources_ != nullptr;};
        void deleteResources() { this->resources_ = nullptr;};
        inline const vector<string> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
        inline vector<string> getResources() { DARABONBA_PTR_GET(resources_, vector<string>) };
        inline ResourceIdentifier& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
        inline ResourceIdentifier& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


      protected:
        // The environment ID.
        shared_ptr<string> environmentId_ {};
        // Parent resource ID
        shared_ptr<string> parentResourceId_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // List of resources
        shared_ptr<vector<string>> resources_ {};
      };

      virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->expireMode_ == nullptr && this->expireTimestamp_ == nullptr && this->resourceIdentifier_ == nullptr && this->resourceType_ == nullptr; };
      // consumerId Field Functions 
      bool hasConsumerId() const { return this->consumerId_ != nullptr;};
      void deleteConsumerId() { this->consumerId_ = nullptr;};
      inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
      inline AuthorizationRules& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


      // expireMode Field Functions 
      bool hasExpireMode() const { return this->expireMode_ != nullptr;};
      void deleteExpireMode() { this->expireMode_ = nullptr;};
      inline string getExpireMode() const { DARABONBA_PTR_GET_DEFAULT(expireMode_, "") };
      inline AuthorizationRules& setExpireMode(string expireMode) { DARABONBA_PTR_SET_VALUE(expireMode_, expireMode) };


      // expireTimestamp Field Functions 
      bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
      void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
      inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
      inline AuthorizationRules& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


      // resourceIdentifier Field Functions 
      bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
      void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
      inline const AuthorizationRules::ResourceIdentifier & getResourceIdentifier() const { DARABONBA_PTR_GET_CONST(resourceIdentifier_, AuthorizationRules::ResourceIdentifier) };
      inline AuthorizationRules::ResourceIdentifier getResourceIdentifier() { DARABONBA_PTR_GET(resourceIdentifier_, AuthorizationRules::ResourceIdentifier) };
      inline AuthorizationRules& setResourceIdentifier(const AuthorizationRules::ResourceIdentifier & resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };
      inline AuthorizationRules& setResourceIdentifier(AuthorizationRules::ResourceIdentifier && resourceIdentifier) { DARABONBA_PTR_SET_RVALUE(resourceIdentifier_, resourceIdentifier) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline AuthorizationRules& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The consumer ID.
      shared_ptr<string> consumerId_ {};
      // The expiration mode. Valid values: LongTerm and ShortTerm.
      shared_ptr<string> expireMode_ {};
      // The expiration timestamp.
      shared_ptr<int64_t> expireTimestamp_ {};
      // The resource identifier, which is provided to non-standard code sources for space reuse.
      shared_ptr<AuthorizationRules::ResourceIdentifier> resourceIdentifier_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->authorizationRules_ == nullptr; };
    // authorizationRules Field Functions 
    bool hasAuthorizationRules() const { return this->authorizationRules_ != nullptr;};
    void deleteAuthorizationRules() { this->authorizationRules_ = nullptr;};
    inline const vector<CreateConsumerAuthorizationRulesRequest::AuthorizationRules> & getAuthorizationRules() const { DARABONBA_PTR_GET_CONST(authorizationRules_, vector<CreateConsumerAuthorizationRulesRequest::AuthorizationRules>) };
    inline vector<CreateConsumerAuthorizationRulesRequest::AuthorizationRules> getAuthorizationRules() { DARABONBA_PTR_GET(authorizationRules_, vector<CreateConsumerAuthorizationRulesRequest::AuthorizationRules>) };
    inline CreateConsumerAuthorizationRulesRequest& setAuthorizationRules(const vector<CreateConsumerAuthorizationRulesRequest::AuthorizationRules> & authorizationRules) { DARABONBA_PTR_SET_VALUE(authorizationRules_, authorizationRules) };
    inline CreateConsumerAuthorizationRulesRequest& setAuthorizationRules(vector<CreateConsumerAuthorizationRulesRequest::AuthorizationRules> && authorizationRules) { DARABONBA_PTR_SET_RVALUE(authorizationRules_, authorizationRules) };


  protected:
    // The consumer authentication rules to be created.
    shared_ptr<vector<CreateConsumerAuthorizationRulesRequest::AuthorizationRules>> authorizationRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
