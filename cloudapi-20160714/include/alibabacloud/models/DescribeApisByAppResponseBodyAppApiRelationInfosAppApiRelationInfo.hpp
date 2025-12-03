// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYAPPRESPONSEBODYAPPAPIRELATIONINFOSAPPAPIRELATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYAPPRESPONSEBODYAPPAPIRELATIONINFOSAPPAPIRELATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AuthVaildTime, authVaildTime_);
      DARABONBA_PTR_TO_JSON(AuthorizationSource, authorizationSource_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AuthVaildTime, authVaildTime_);
      DARABONBA_PTR_FROM_JSON(AuthorizationSource, authorizationSource_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo() = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo(const DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo &) = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo(DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo &&) = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo() = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& operator=(const DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo &) = default ;
    DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& operator=(DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->authVaildTime_ == nullptr && return this->authorizationSource_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->method_ == nullptr && return this->operator_ == nullptr && return this->path_ == nullptr
        && return this->regionId_ == nullptr && return this->stageAlias_ == nullptr && return this->stageName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // authVaildTime Field Functions 
    bool hasAuthVaildTime() const { return this->authVaildTime_ != nullptr;};
    void deleteAuthVaildTime() { this->authVaildTime_ = nullptr;};
    inline string authVaildTime() const { DARABONBA_PTR_GET_DEFAULT(authVaildTime_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setAuthVaildTime(string authVaildTime) { DARABONBA_PTR_SET_VALUE(authVaildTime_, authVaildTime) };


    // authorizationSource Field Functions 
    bool hasAuthorizationSource() const { return this->authorizationSource_ != nullptr;};
    void deleteAuthorizationSource() { this->authorizationSource_ = nullptr;};
    inline string authorizationSource() const { DARABONBA_PTR_GET_DEFAULT(authorizationSource_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setAuthorizationSource(string authorizationSource) { DARABONBA_PTR_SET_VALUE(authorizationSource_, authorizationSource) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageAlias Field Functions 
    bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
    void deleteStageAlias() { this->stageAlias_ = nullptr;};
    inline string stageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The validity period of the authorization.
    std::shared_ptr<string> authVaildTime_ = nullptr;
    // The authorization source.
    std::shared_ptr<string> authorizationSource_ = nullptr;
    // The time when the authorization was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The authorization description.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The HTTP method of the API.
    std::shared_ptr<string> method_ = nullptr;
    // The authorizer. Valid values:
    // 
    // *   **PROVIDER**: API owner
    // *   **CONSUMER**: API caller
    std::shared_ptr<string> operator_ = nullptr;
    // The request path of the API.
    std::shared_ptr<string> path_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The environment alias.
    std::shared_ptr<string> stageAlias_ = nullptr;
    // The environment name.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
