// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESREQUESTAUTHORIZATIONRULESRESOURCEIDENTIFIER_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESREQUESTAUTHORIZATIONRULESRESOURCEIDENTIFIER_HPP_
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
  class CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& obj) { 
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(parentResourceId, parentResourceId_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& obj) { 
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(parentResourceId, parentResourceId_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resources, resources_);
    };
    CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier() = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier(const CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier &) = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier(CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier &&) = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier() = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& operator=(const CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier &) = default ;
    CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& operator=(CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environmentId_ == nullptr
        && return this->parentResourceId_ == nullptr && return this->resourceId_ == nullptr && return this->resources_ == nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // parentResourceId Field Functions 
    bool hasParentResourceId() const { return this->parentResourceId_ != nullptr;};
    void deleteParentResourceId() { this->parentResourceId_ = nullptr;};
    inline string parentResourceId() const { DARABONBA_PTR_GET_DEFAULT(parentResourceId_, "") };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& setParentResourceId(string parentResourceId) { DARABONBA_PTR_SET_VALUE(parentResourceId_, parentResourceId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> resources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateConsumerAuthorizationRulesRequestAuthorizationRulesResourceIdentifier& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<string> parentResourceId_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<vector<string>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
