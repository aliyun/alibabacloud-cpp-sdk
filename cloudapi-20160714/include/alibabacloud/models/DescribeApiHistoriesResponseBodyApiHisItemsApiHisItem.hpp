// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORIESRESPONSEBODYAPIHISITEMSAPIHISITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORIESRESPONSEBODYAPIHISITEMSAPIHISITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HistoryVersion, historyVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HistoryVersion, historyVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem() = default ;
    DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem(const DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem &) = default ;
    DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem(DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem &&) = default ;
    DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem() = default ;
    DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& operator=(const DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem &) = default ;
    DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& operator=(DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->deployedTime_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr
        && return this->historyVersion_ == nullptr && return this->regionId_ == nullptr && return this->stageName_ == nullptr && return this->status_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // deployedTime Field Functions 
    bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
    void deleteDeployedTime() { this->deployedTime_ = nullptr;};
    inline string deployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // historyVersion Field Functions 
    bool hasHistoryVersion() const { return this->historyVersion_ != nullptr;};
    void deleteHistoryVersion() { this->historyVersion_ = nullptr;};
    inline string historyVersion() const { DARABONBA_PTR_GET_DEFAULT(historyVersion_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setHistoryVersion(string historyVersion) { DARABONBA_PTR_SET_VALUE(historyVersion_, historyVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApiHistoriesResponseBodyApiHisItemsApiHisItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The name of the API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The publishing time (UTC) of the API.
    std::shared_ptr<string> deployedTime_ = nullptr;
    // The description of the API.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The historical version of the API.
    std::shared_ptr<string> historyVersion_ = nullptr;
    // The region in which the API is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    std::shared_ptr<string> stageName_ = nullptr;
    // Indicates whether an API version is effective. Valid values: **ONLINE** and **OFFLINE**.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
