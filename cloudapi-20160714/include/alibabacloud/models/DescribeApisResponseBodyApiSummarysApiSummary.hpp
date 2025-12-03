// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYSAPISUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODYAPISUMMARYSAPISUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos.hpp>
#include <alibabacloud/models/DescribeApisResponseBodyApiSummarysApiSummaryTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisResponseBodyApiSummarysApiSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisResponseBodyApiSummarysApiSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiMethod, apiMethod_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DeployedInfos, deployedInfos_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisResponseBodyApiSummarysApiSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiMethod, apiMethod_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DeployedInfos, deployedInfos_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    DescribeApisResponseBodyApiSummarysApiSummary() = default ;
    DescribeApisResponseBodyApiSummarysApiSummary(const DescribeApisResponseBodyApiSummarysApiSummary &) = default ;
    DescribeApisResponseBodyApiSummarysApiSummary(DescribeApisResponseBodyApiSummarysApiSummary &&) = default ;
    DescribeApisResponseBodyApiSummarysApiSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisResponseBodyApiSummarysApiSummary() = default ;
    DescribeApisResponseBodyApiSummarysApiSummary& operator=(const DescribeApisResponseBodyApiSummarysApiSummary &) = default ;
    DescribeApisResponseBodyApiSummarysApiSummary& operator=(DescribeApisResponseBodyApiSummarysApiSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiMethod_ == nullptr && return this->apiName_ == nullptr && return this->apiPath_ == nullptr && return this->createdTime_ == nullptr && return this->deployedInfos_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->modifiedTime_ == nullptr && return this->regionId_ == nullptr
        && return this->tagList_ == nullptr && return this->visibility_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiMethod Field Functions 
    bool hasApiMethod() const { return this->apiMethod_ != nullptr;};
    void deleteApiMethod() { this->apiMethod_ = nullptr;};
    inline string apiMethod() const { DARABONBA_PTR_GET_DEFAULT(apiMethod_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setApiMethod(string apiMethod) { DARABONBA_PTR_SET_VALUE(apiMethod_, apiMethod) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiPath Field Functions 
    bool hasApiPath() const { return this->apiPath_ != nullptr;};
    void deleteApiPath() { this->apiPath_ = nullptr;};
    inline string apiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // deployedInfos Field Functions 
    bool hasDeployedInfos() const { return this->deployedInfos_ != nullptr;};
    void deleteDeployedInfos() { this->deployedInfos_ = nullptr;};
    inline const Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos & deployedInfos() const { DARABONBA_PTR_GET_CONST(deployedInfos_, Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos) };
    inline Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos deployedInfos() { DARABONBA_PTR_GET(deployedInfos_, Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos) };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setDeployedInfos(const Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos & deployedInfos) { DARABONBA_PTR_SET_VALUE(deployedInfos_, deployedInfos) };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setDeployedInfos(Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos && deployedInfos) { DARABONBA_PTR_SET_RVALUE(deployedInfos_, deployedInfos) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const Models::DescribeApisResponseBodyApiSummarysApiSummaryTagList & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, Models::DescribeApisResponseBodyApiSummarysApiSummaryTagList) };
    inline Models::DescribeApisResponseBodyApiSummarysApiSummaryTagList tagList() { DARABONBA_PTR_GET(tagList_, Models::DescribeApisResponseBodyApiSummarysApiSummaryTagList) };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setTagList(const Models::DescribeApisResponseBodyApiSummarysApiSummaryTagList & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setTagList(Models::DescribeApisResponseBodyApiSummarysApiSummaryTagList && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeApisResponseBodyApiSummarysApiSummary& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The HTTP method of the API request.
    std::shared_ptr<string> apiMethod_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The request path of the API.
    std::shared_ptr<string> apiPath_ = nullptr;
    // The time when the API was created. The time is displayed in UTC.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The API publishing statuses.
    std::shared_ptr<Models::DescribeApisResponseBodyApiSummarysApiSummaryDeployedInfos> deployedInfos_ = nullptr;
    // The API description.
    std::shared_ptr<string> description_ = nullptr;
    // The API group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group to which the API belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The time when the API was modified. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the region to which the API belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags that are added to the APIs.
    std::shared_ptr<Models::DescribeApisResponseBodyApiSummarysApiSummaryTagList> tagList_ = nullptr;
    // Indicates whether the API is public. Valid values:
    // 
    // *   **PUBLIC**: The API is public.
    // *   **PRIVATE**: The API is private.
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
