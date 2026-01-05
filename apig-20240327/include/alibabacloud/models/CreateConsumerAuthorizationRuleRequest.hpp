// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AuthorizationResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authorizationResourceInfos, authorizationResourceInfos_);
      DARABONBA_PTR_TO_JSON(expireMode, expireMode_);
      DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(parentResourceType, parentResourceType_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizationResourceInfos, authorizationResourceInfos_);
      DARABONBA_PTR_FROM_JSON(expireMode, expireMode_);
      DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(parentResourceType, parentResourceType_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    CreateConsumerAuthorizationRuleRequest() = default ;
    CreateConsumerAuthorizationRuleRequest(const CreateConsumerAuthorizationRuleRequest &) = default ;
    CreateConsumerAuthorizationRuleRequest(CreateConsumerAuthorizationRuleRequest &&) = default ;
    CreateConsumerAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAuthorizationRuleRequest() = default ;
    CreateConsumerAuthorizationRuleRequest& operator=(const CreateConsumerAuthorizationRuleRequest &) = default ;
    CreateConsumerAuthorizationRuleRequest& operator=(CreateConsumerAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationResourceInfos_ == nullptr
        && this->expireMode_ == nullptr && this->expireTimestamp_ == nullptr && this->parentResourceType_ == nullptr && this->resourceType_ == nullptr; };
    // authorizationResourceInfos Field Functions 
    bool hasAuthorizationResourceInfos() const { return this->authorizationResourceInfos_ != nullptr;};
    void deleteAuthorizationResourceInfos() { this->authorizationResourceInfos_ = nullptr;};
    inline const vector<AuthorizationResourceInfo> & getAuthorizationResourceInfos() const { DARABONBA_PTR_GET_CONST(authorizationResourceInfos_, vector<AuthorizationResourceInfo>) };
    inline vector<AuthorizationResourceInfo> getAuthorizationResourceInfos() { DARABONBA_PTR_GET(authorizationResourceInfos_, vector<AuthorizationResourceInfo>) };
    inline CreateConsumerAuthorizationRuleRequest& setAuthorizationResourceInfos(const vector<AuthorizationResourceInfo> & authorizationResourceInfos) { DARABONBA_PTR_SET_VALUE(authorizationResourceInfos_, authorizationResourceInfos) };
    inline CreateConsumerAuthorizationRuleRequest& setAuthorizationResourceInfos(vector<AuthorizationResourceInfo> && authorizationResourceInfos) { DARABONBA_PTR_SET_RVALUE(authorizationResourceInfos_, authorizationResourceInfos) };


    // expireMode Field Functions 
    bool hasExpireMode() const { return this->expireMode_ != nullptr;};
    void deleteExpireMode() { this->expireMode_ = nullptr;};
    inline string getExpireMode() const { DARABONBA_PTR_GET_DEFAULT(expireMode_, "") };
    inline CreateConsumerAuthorizationRuleRequest& setExpireMode(string expireMode) { DARABONBA_PTR_SET_VALUE(expireMode_, expireMode) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline CreateConsumerAuthorizationRuleRequest& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // parentResourceType Field Functions 
    bool hasParentResourceType() const { return this->parentResourceType_ != nullptr;};
    void deleteParentResourceType() { this->parentResourceType_ = nullptr;};
    inline string getParentResourceType() const { DARABONBA_PTR_GET_DEFAULT(parentResourceType_, "") };
    inline CreateConsumerAuthorizationRuleRequest& setParentResourceType(string parentResourceType) { DARABONBA_PTR_SET_VALUE(parentResourceType_, parentResourceType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateConsumerAuthorizationRuleRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The list of resource authorization information.
    shared_ptr<vector<AuthorizationResourceInfo>> authorizationResourceInfos_ {};
    // The expiry mode. Valid values: LongTerm and ShortTerm.
    shared_ptr<string> expireMode_ {};
    // The expiration time.
    shared_ptr<int64_t> expireTimestamp_ {};
    // The type of the parent resource.
    shared_ptr<string> parentResourceType_ {};
    // The resource type,
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
