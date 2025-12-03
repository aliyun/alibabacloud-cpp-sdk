// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYAPISRESPONSEBODYAPIHISITEMSAPIHISITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYAPISRESPONSEBODYAPIHISITEMSAPIHISITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeHistoryApisResponseBodyApiHisItemsApiHisItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HistoryVersion, historyVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HistoryVersion, historyVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeHistoryApisResponseBodyApiHisItemsApiHisItem() = default ;
    DescribeHistoryApisResponseBodyApiHisItemsApiHisItem(const DescribeHistoryApisResponseBodyApiHisItemsApiHisItem &) = default ;
    DescribeHistoryApisResponseBodyApiHisItemsApiHisItem(DescribeHistoryApisResponseBodyApiHisItemsApiHisItem &&) = default ;
    DescribeHistoryApisResponseBodyApiHisItemsApiHisItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryApisResponseBodyApiHisItemsApiHisItem() = default ;
    DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& operator=(const DescribeHistoryApisResponseBodyApiHisItemsApiHisItem &) = default ;
    DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& operator=(DescribeHistoryApisResponseBodyApiHisItemsApiHisItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->deployedTime_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr
        && return this->historyVersion_ == nullptr && return this->regionId_ == nullptr && return this->stageAlias_ == nullptr && return this->stageName_ == nullptr && return this->status_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // deployedTime Field Functions 
    bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
    void deleteDeployedTime() { this->deployedTime_ = nullptr;};
    inline string deployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // historyVersion Field Functions 
    bool hasHistoryVersion() const { return this->historyVersion_ != nullptr;};
    void deleteHistoryVersion() { this->historyVersion_ = nullptr;};
    inline string historyVersion() const { DARABONBA_PTR_GET_DEFAULT(historyVersion_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setHistoryVersion(string historyVersion) { DARABONBA_PTR_SET_VALUE(historyVersion_, historyVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageAlias Field Functions 
    bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
    void deleteStageAlias() { this->stageAlias_ = nullptr;};
    inline string stageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHistoryApisResponseBodyApiHisItemsApiHisItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The API ID.
    std::shared_ptr<string> apiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The time when the API was published. The time is displayed in UTC.
    std::shared_ptr<string> deployedTime_ = nullptr;
    // The API description.
    std::shared_ptr<string> description_ = nullptr;
    // The API group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group to which the API belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The historical version of the API definition.
    std::shared_ptr<string> historyVersion_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The environment alias.
    std::shared_ptr<string> stageAlias_ = nullptr;
    // The environment name. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    std::shared_ptr<string> stageName_ = nullptr;
    // Indicates whether an API version is effective. Valid values: ONLINE and OFFLINE.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
