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
        && return this->expireMode_ == nullptr && return this->expireTimestamp_ == nullptr && return this->parentResourceType_ == nullptr && return this->resourceType_ == nullptr; };
    // authorizationResourceInfos Field Functions 
    bool hasAuthorizationResourceInfos() const { return this->authorizationResourceInfos_ != nullptr;};
    void deleteAuthorizationResourceInfos() { this->authorizationResourceInfos_ = nullptr;};
    inline const vector<AuthorizationResourceInfo> & authorizationResourceInfos() const { DARABONBA_PTR_GET_CONST(authorizationResourceInfos_, vector<AuthorizationResourceInfo>) };
    inline vector<AuthorizationResourceInfo> authorizationResourceInfos() { DARABONBA_PTR_GET(authorizationResourceInfos_, vector<AuthorizationResourceInfo>) };
    inline CreateConsumerAuthorizationRuleRequest& setAuthorizationResourceInfos(const vector<AuthorizationResourceInfo> & authorizationResourceInfos) { DARABONBA_PTR_SET_VALUE(authorizationResourceInfos_, authorizationResourceInfos) };
    inline CreateConsumerAuthorizationRuleRequest& setAuthorizationResourceInfos(vector<AuthorizationResourceInfo> && authorizationResourceInfos) { DARABONBA_PTR_SET_RVALUE(authorizationResourceInfos_, authorizationResourceInfos) };


    // expireMode Field Functions 
    bool hasExpireMode() const { return this->expireMode_ != nullptr;};
    void deleteExpireMode() { this->expireMode_ = nullptr;};
    inline string expireMode() const { DARABONBA_PTR_GET_DEFAULT(expireMode_, "") };
    inline CreateConsumerAuthorizationRuleRequest& setExpireMode(string expireMode) { DARABONBA_PTR_SET_VALUE(expireMode_, expireMode) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline CreateConsumerAuthorizationRuleRequest& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // parentResourceType Field Functions 
    bool hasParentResourceType() const { return this->parentResourceType_ != nullptr;};
    void deleteParentResourceType() { this->parentResourceType_ = nullptr;};
    inline string parentResourceType() const { DARABONBA_PTR_GET_DEFAULT(parentResourceType_, "") };
    inline CreateConsumerAuthorizationRuleRequest& setParentResourceType(string parentResourceType) { DARABONBA_PTR_SET_VALUE(parentResourceType_, parentResourceType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateConsumerAuthorizationRuleRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<vector<AuthorizationResourceInfo>> authorizationResourceInfos_ = nullptr;
    std::shared_ptr<string> expireMode_ = nullptr;
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    std::shared_ptr<string> parentResourceType_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
