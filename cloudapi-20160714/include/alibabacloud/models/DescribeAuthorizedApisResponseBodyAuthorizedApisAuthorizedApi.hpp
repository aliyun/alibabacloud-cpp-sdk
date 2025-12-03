// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPISRESPONSEBODYAUTHORIZEDAPISAUTHORIZEDAPI_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPISRESPONSEBODYAUTHORIZEDAPISAUTHORIZEDAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AuthVaildTime, authVaildTime_);
      DARABONBA_PTR_TO_JSON(AuthorizationSource, authorizationSource_);
      DARABONBA_PTR_TO_JSON(AuthorizedTime, authorizedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AuthVaildTime, authVaildTime_);
      DARABONBA_PTR_FROM_JSON(AuthorizationSource, authorizationSource_);
      DARABONBA_PTR_FROM_JSON(AuthorizedTime, authorizedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi() = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi(const DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi &) = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi(DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi &&) = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi() = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& operator=(const DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi &) = default ;
    DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& operator=(DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->authVaildTime_ == nullptr && return this->authorizationSource_ == nullptr && return this->authorizedTime_ == nullptr && return this->description_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->operator_ == nullptr && return this->regionId_ == nullptr && return this->stageName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // authVaildTime Field Functions 
    bool hasAuthVaildTime() const { return this->authVaildTime_ != nullptr;};
    void deleteAuthVaildTime() { this->authVaildTime_ = nullptr;};
    inline string authVaildTime() const { DARABONBA_PTR_GET_DEFAULT(authVaildTime_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setAuthVaildTime(string authVaildTime) { DARABONBA_PTR_SET_VALUE(authVaildTime_, authVaildTime) };


    // authorizationSource Field Functions 
    bool hasAuthorizationSource() const { return this->authorizationSource_ != nullptr;};
    void deleteAuthorizationSource() { this->authorizationSource_ = nullptr;};
    inline string authorizationSource() const { DARABONBA_PTR_GET_DEFAULT(authorizationSource_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setAuthorizationSource(string authorizationSource) { DARABONBA_PTR_SET_VALUE(authorizationSource_, authorizationSource) };


    // authorizedTime Field Functions 
    bool hasAuthorizedTime() const { return this->authorizedTime_ != nullptr;};
    void deleteAuthorizedTime() { this->authorizedTime_ = nullptr;};
    inline string authorizedTime() const { DARABONBA_PTR_GET_DEFAULT(authorizedTime_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setAuthorizedTime(string authorizedTime) { DARABONBA_PTR_SET_VALUE(authorizedTime_, authorizedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApisAuthorizedApi& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The unique identifier of the API, which is automatically generated by the system.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API
    std::shared_ptr<string> apiName_ = nullptr;
    // The expiration time of the authorization in UTC.
    std::shared_ptr<string> authVaildTime_ = nullptr;
    // The authorization source. Valid values:
    // 
    // *   **CONSOLE**
    // *   **API**
    std::shared_ptr<string> authorizationSource_ = nullptr;
    // The authorization time in UTC.
    std::shared_ptr<string> authorizedTime_ = nullptr;
    // Authorization description
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group. This ID is generated by the system and globally unique.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The authorizer. Valid values:
    // 
    // *   **PROVIDER:** API owner
    // *   **CONSUMER:** API caller
    std::shared_ptr<string> operator_ = nullptr;
    // The region to which the API belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**: the test environment
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
