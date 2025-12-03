// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYIPCONTROLRESPONSEBODYAPIINFOSAPIINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYIPCONTROLRESPONSEBODYAPIINFOSAPIINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByIpControlResponseBodyApiInfosApiInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByIpControlResponseBodyApiInfosApiInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByIpControlResponseBodyApiInfosApiInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(BoundTime, boundTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    DescribeApisByIpControlResponseBodyApiInfosApiInfo() = default ;
    DescribeApisByIpControlResponseBodyApiInfosApiInfo(const DescribeApisByIpControlResponseBodyApiInfosApiInfo &) = default ;
    DescribeApisByIpControlResponseBodyApiInfosApiInfo(DescribeApisByIpControlResponseBodyApiInfosApiInfo &&) = default ;
    DescribeApisByIpControlResponseBodyApiInfosApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByIpControlResponseBodyApiInfosApiInfo() = default ;
    DescribeApisByIpControlResponseBodyApiInfosApiInfo& operator=(const DescribeApisByIpControlResponseBodyApiInfosApiInfo &) = default ;
    DescribeApisByIpControlResponseBodyApiInfosApiInfo& operator=(DescribeApisByIpControlResponseBodyApiInfosApiInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->boundTime_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr
        && return this->regionId_ == nullptr && return this->stageName_ == nullptr && return this->visibility_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // boundTime Field Functions 
    bool hasBoundTime() const { return this->boundTime_ != nullptr;};
    void deleteBoundTime() { this->boundTime_ = nullptr;};
    inline string boundTime() const { DARABONBA_PTR_GET_DEFAULT(boundTime_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setBoundTime(string boundTime) { DARABONBA_PTR_SET_VALUE(boundTime_, boundTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeApisByIpControlResponseBodyApiInfosApiInfo& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API
    std::shared_ptr<string> apiName_ = nullptr;
    // The time of API binding.
    std::shared_ptr<string> boundTime_ = nullptr;
    // The description of the API.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The region in which the API is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST.
    std::shared_ptr<string> stageName_ = nullptr;
    // The visibility of the API. Valid values:
    // 
    // *   **PUBLIC**
    // *   **PRIVATE**
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
