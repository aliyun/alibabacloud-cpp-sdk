// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGESETSRESPONSEBODYCHANGESETS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGESETSRESPONSEBODYCHANGESETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListChangeSetsResponseBodyChangeSetsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListChangeSetsResponseBodyChangeSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeSetsResponseBodyChangeSets& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_TO_JSON(ChangeSetType, changeSetType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeSetsResponseBodyChangeSets& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(ChangeSetName, changeSetName_);
      DARABONBA_PTR_FROM_JSON(ChangeSetType, changeSetType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListChangeSetsResponseBodyChangeSets() = default ;
    ListChangeSetsResponseBodyChangeSets(const ListChangeSetsResponseBodyChangeSets &) = default ;
    ListChangeSetsResponseBodyChangeSets(ListChangeSetsResponseBodyChangeSets &&) = default ;
    ListChangeSetsResponseBodyChangeSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeSetsResponseBodyChangeSets() = default ;
    ListChangeSetsResponseBodyChangeSets& operator=(const ListChangeSetsResponseBodyChangeSets &) = default ;
    ListChangeSetsResponseBodyChangeSets& operator=(ListChangeSetsResponseBodyChangeSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeSetId_ != nullptr
        && this->changeSetName_ != nullptr && this->changeSetType_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->executionStatus_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->stackId_ != nullptr && this->stackName_ != nullptr && this->status_ != nullptr
        && this->statusReason_ != nullptr && this->tags_ != nullptr; };
    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string changeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // changeSetName Field Functions 
    bool hasChangeSetName() const { return this->changeSetName_ != nullptr;};
    void deleteChangeSetName() { this->changeSetName_ = nullptr;};
    inline string changeSetName() const { DARABONBA_PTR_GET_DEFAULT(changeSetName_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setChangeSetName(string changeSetName) { DARABONBA_PTR_SET_VALUE(changeSetName_, changeSetName) };


    // changeSetType Field Functions 
    bool hasChangeSetType() const { return this->changeSetType_ != nullptr;};
    void deleteChangeSetType() { this->changeSetType_ = nullptr;};
    inline string changeSetType() const { DARABONBA_PTR_GET_DEFAULT(changeSetType_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setChangeSetType(string changeSetType) { DARABONBA_PTR_SET_VALUE(changeSetType_, changeSetType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionStatus Field Functions 
    bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
    void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
    inline string executionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline string stackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListChangeSetsResponseBodyChangeSets& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListChangeSetsResponseBodyChangeSetsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListChangeSetsResponseBodyChangeSetsTags>) };
    inline vector<Models::ListChangeSetsResponseBodyChangeSetsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListChangeSetsResponseBodyChangeSetsTags>) };
    inline ListChangeSetsResponseBodyChangeSets& setTags(const vector<Models::ListChangeSetsResponseBodyChangeSetsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListChangeSetsResponseBodyChangeSets& setTags(vector<Models::ListChangeSetsResponseBodyChangeSetsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the change set.
    std::shared_ptr<string> changeSetId_ = nullptr;
    // The name of the change set.
    std::shared_ptr<string> changeSetName_ = nullptr;
    // The type of the change set.
    std::shared_ptr<string> changeSetType_ = nullptr;
    // The time when the change set was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the change set.
    std::shared_ptr<string> description_ = nullptr;
    // The execution status of the change set.
    std::shared_ptr<string> executionStatus_ = nullptr;
    // The region ID of the change set.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the stack with which the change set is associated.
    std::shared_ptr<string> stackId_ = nullptr;
    // The name of the stack with which the change set is associated.
    std::shared_ptr<string> stackName_ = nullptr;
    // The status of the change set.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the change set is in its current state.
    std::shared_ptr<string> statusReason_ = nullptr;
    std::shared_ptr<vector<Models::ListChangeSetsResponseBodyChangeSetsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
