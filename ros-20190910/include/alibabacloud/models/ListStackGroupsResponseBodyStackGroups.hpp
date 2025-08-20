// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPSRESPONSEBODYSTACKGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPSRESPONSEBODYSTACKGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListStackGroupsResponseBodyStackGroupsAutoDeployment.hpp>
#include <vector>
#include <alibabacloud/models/ListStackGroupsResponseBodyStackGroupsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupsResponseBodyStackGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupsResponseBodyStackGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDeployment, autoDeployment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_TO_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StackGroupDriftStatus, stackGroupDriftStatus_);
      DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupsResponseBodyStackGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDeployment, autoDeployment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
      DARABONBA_PTR_FROM_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StackGroupDriftStatus, stackGroupDriftStatus_);
      DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListStackGroupsResponseBodyStackGroups() = default ;
    ListStackGroupsResponseBodyStackGroups(const ListStackGroupsResponseBodyStackGroups &) = default ;
    ListStackGroupsResponseBodyStackGroups(ListStackGroupsResponseBodyStackGroups &&) = default ;
    ListStackGroupsResponseBodyStackGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupsResponseBodyStackGroups() = default ;
    ListStackGroupsResponseBodyStackGroups& operator=(const ListStackGroupsResponseBodyStackGroups &) = default ;
    ListStackGroupsResponseBodyStackGroups& operator=(ListStackGroupsResponseBodyStackGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoDeployment_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->driftDetectionTime_ != nullptr && this->permissionModel_ != nullptr && this->resourceGroupId_ != nullptr
        && this->stackGroupDriftStatus_ != nullptr && this->stackGroupId_ != nullptr && this->stackGroupName_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->updateTime_ != nullptr; };
    // autoDeployment Field Functions 
    bool hasAutoDeployment() const { return this->autoDeployment_ != nullptr;};
    void deleteAutoDeployment() { this->autoDeployment_ = nullptr;};
    inline const Models::ListStackGroupsResponseBodyStackGroupsAutoDeployment & autoDeployment() const { DARABONBA_PTR_GET_CONST(autoDeployment_, Models::ListStackGroupsResponseBodyStackGroupsAutoDeployment) };
    inline Models::ListStackGroupsResponseBodyStackGroupsAutoDeployment autoDeployment() { DARABONBA_PTR_GET(autoDeployment_, Models::ListStackGroupsResponseBodyStackGroupsAutoDeployment) };
    inline ListStackGroupsResponseBodyStackGroups& setAutoDeployment(const Models::ListStackGroupsResponseBodyStackGroupsAutoDeployment & autoDeployment) { DARABONBA_PTR_SET_VALUE(autoDeployment_, autoDeployment) };
    inline ListStackGroupsResponseBodyStackGroups& setAutoDeployment(Models::ListStackGroupsResponseBodyStackGroupsAutoDeployment && autoDeployment) { DARABONBA_PTR_SET_RVALUE(autoDeployment_, autoDeployment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // driftDetectionTime Field Functions 
    bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
    void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
    inline string driftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


    // permissionModel Field Functions 
    bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
    void deletePermissionModel() { this->permissionModel_ = nullptr;};
    inline string permissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // stackGroupDriftStatus Field Functions 
    bool hasStackGroupDriftStatus() const { return this->stackGroupDriftStatus_ != nullptr;};
    void deleteStackGroupDriftStatus() { this->stackGroupDriftStatus_ = nullptr;};
    inline string stackGroupDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackGroupDriftStatus_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setStackGroupDriftStatus(string stackGroupDriftStatus) { DARABONBA_PTR_SET_VALUE(stackGroupDriftStatus_, stackGroupDriftStatus) };


    // stackGroupId Field Functions 
    bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
    void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
    inline string stackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListStackGroupsResponseBodyStackGroupsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListStackGroupsResponseBodyStackGroupsTags>) };
    inline vector<Models::ListStackGroupsResponseBodyStackGroupsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListStackGroupsResponseBodyStackGroupsTags>) };
    inline ListStackGroupsResponseBodyStackGroups& setTags(const vector<Models::ListStackGroupsResponseBodyStackGroupsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListStackGroupsResponseBodyStackGroups& setTags(vector<Models::ListStackGroupsResponseBodyStackGroupsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListStackGroupsResponseBodyStackGroups& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The information about automatic deployment settings.
    std::shared_ptr<Models::ListStackGroupsResponseBodyStackGroupsAutoDeployment> autoDeployment_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the stack group.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the most recent successful drift detection was performed on the stack group.
    std::shared_ptr<string> driftDetectionTime_ = nullptr;
    // The permission model of the stack group.
    // 
    // Valid values:
    // 
    // *   SELF_MANAGED
    // *   SERVICE_MANAGED
    // 
    // > For more information about the permission models of stack groups, see [Overview](https://help.aliyun.com/document_detail/154578.html).
    std::shared_ptr<string> permissionModel_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The drift state of the stack group on which the most recent successful drift detection was performed.
    // 
    // Valid values:
    // 
    // *   DRIFTED: The stack group has drifted.
    // *   NOT_CHECKED: No drift detection is performed on the stack group.
    // *   IN_SYNC: No drifts are detected on the stack group.
    std::shared_ptr<string> stackGroupDriftStatus_ = nullptr;
    // The ID of the stack group.
    std::shared_ptr<string> stackGroupId_ = nullptr;
    // The name of the stack group.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The state of the stack group.
    // 
    // Valid values:
    // 
    // *   ACTIVE
    // *   DELETED
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are added to the stack group.
    std::shared_ptr<vector<Models::ListStackGroupsResponseBodyStackGroupsTags>> tags_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
