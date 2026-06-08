// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroups, stackGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroups, stackGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStackGroupsResponseBody() = default ;
    ListStackGroupsResponseBody(const ListStackGroupsResponseBody &) = default ;
    ListStackGroupsResponseBody(ListStackGroupsResponseBody &&) = default ;
    ListStackGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupsResponseBody() = default ;
    ListStackGroupsResponseBody& operator=(const ListStackGroupsResponseBody &) = default ;
    ListStackGroupsResponseBody& operator=(ListStackGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackGroups& obj) { 
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
      friend void from_json(const Darabonba::Json& j, StackGroups& obj) { 
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
      StackGroups() = default ;
      StackGroups(const StackGroups &) = default ;
      StackGroups(StackGroups &&) = default ;
      StackGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackGroups() = default ;
      StackGroups& operator=(const StackGroups &) = default ;
      StackGroups& operator=(StackGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the tag that is added to the stack group.
        shared_ptr<string> key_ {};
        // The value of the tag that is added to the stack group.
        shared_ptr<string> value_ {};
      };

      class AutoDeployment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoDeployment& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
        };
        friend void from_json(const Darabonba::Json& j, AutoDeployment& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
        };
        AutoDeployment() = default ;
        AutoDeployment(const AutoDeployment &) = default ;
        AutoDeployment(AutoDeployment &&) = default ;
        AutoDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoDeployment() = default ;
        AutoDeployment& operator=(const AutoDeployment &) = default ;
        AutoDeployment& operator=(AutoDeployment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->retainStacksOnAccountRemoval_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline AutoDeployment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // retainStacksOnAccountRemoval Field Functions 
        bool hasRetainStacksOnAccountRemoval() const { return this->retainStacksOnAccountRemoval_ != nullptr;};
        void deleteRetainStacksOnAccountRemoval() { this->retainStacksOnAccountRemoval_ = nullptr;};
        inline bool getRetainStacksOnAccountRemoval() const { DARABONBA_PTR_GET_DEFAULT(retainStacksOnAccountRemoval_, false) };
        inline AutoDeployment& setRetainStacksOnAccountRemoval(bool retainStacksOnAccountRemoval) { DARABONBA_PTR_SET_VALUE(retainStacksOnAccountRemoval_, retainStacksOnAccountRemoval) };


      protected:
        // Indicates whether automatic deployment is enabled.
        // 
        // Valid values:
        // 
        // *   true: Automatic deployment is enabled. If you add a member to the folder to which the stack group belongs after automatic deployment is enabled, Resource Orchestration Service (ROS) automatically adds the stack instances in the stack group to the specified region of the member. If you delete the member from the folder, ROS automatically deletes the stack instances in the stack group from the specified region of the member.
        // *   false: Automatic deployment is disabled. After you disable automatic deployment, the stack instances remain unchanged when you change the member in the folder.
        shared_ptr<bool> enabled_ {};
        // Indicates whether the stacks within a member are retained when you delete the member from the folder.
        // 
        // Valid values:
        // 
        // *   true
        // *   false
        // 
        // > This parameter is returned only if Enabled is set to true.
        shared_ptr<bool> retainStacksOnAccountRemoval_ {};
      };

      virtual bool empty() const override { return this->autoDeployment_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->driftDetectionTime_ == nullptr && this->permissionModel_ == nullptr && this->resourceGroupId_ == nullptr
        && this->stackGroupDriftStatus_ == nullptr && this->stackGroupId_ == nullptr && this->stackGroupName_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->updateTime_ == nullptr; };
      // autoDeployment Field Functions 
      bool hasAutoDeployment() const { return this->autoDeployment_ != nullptr;};
      void deleteAutoDeployment() { this->autoDeployment_ = nullptr;};
      inline const StackGroups::AutoDeployment & getAutoDeployment() const { DARABONBA_PTR_GET_CONST(autoDeployment_, StackGroups::AutoDeployment) };
      inline StackGroups::AutoDeployment getAutoDeployment() { DARABONBA_PTR_GET(autoDeployment_, StackGroups::AutoDeployment) };
      inline StackGroups& setAutoDeployment(const StackGroups::AutoDeployment & autoDeployment) { DARABONBA_PTR_SET_VALUE(autoDeployment_, autoDeployment) };
      inline StackGroups& setAutoDeployment(StackGroups::AutoDeployment && autoDeployment) { DARABONBA_PTR_SET_RVALUE(autoDeployment_, autoDeployment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline StackGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StackGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // driftDetectionTime Field Functions 
      bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
      void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
      inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
      inline StackGroups& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


      // permissionModel Field Functions 
      bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
      void deletePermissionModel() { this->permissionModel_ = nullptr;};
      inline string getPermissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
      inline StackGroups& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline StackGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // stackGroupDriftStatus Field Functions 
      bool hasStackGroupDriftStatus() const { return this->stackGroupDriftStatus_ != nullptr;};
      void deleteStackGroupDriftStatus() { this->stackGroupDriftStatus_ = nullptr;};
      inline string getStackGroupDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackGroupDriftStatus_, "") };
      inline StackGroups& setStackGroupDriftStatus(string stackGroupDriftStatus) { DARABONBA_PTR_SET_VALUE(stackGroupDriftStatus_, stackGroupDriftStatus) };


      // stackGroupId Field Functions 
      bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
      void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
      inline string getStackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
      inline StackGroups& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


      // stackGroupName Field Functions 
      bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
      void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
      inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
      inline StackGroups& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StackGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<StackGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<StackGroups::Tags>) };
      inline vector<StackGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<StackGroups::Tags>) };
      inline StackGroups& setTags(const vector<StackGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline StackGroups& setTags(vector<StackGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline StackGroups& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The information about automatic deployment settings.
      shared_ptr<StackGroups::AutoDeployment> autoDeployment_ {};
      shared_ptr<string> createTime_ {};
      // The description of the stack group.
      shared_ptr<string> description_ {};
      // The time when the most recent successful drift detection was performed on the stack group.
      shared_ptr<string> driftDetectionTime_ {};
      // The permission model of the stack group.
      // 
      // Valid values:
      // 
      // *   SELF_MANAGED
      // *   SERVICE_MANAGED
      // 
      // > For more information about the permission models of stack groups, see [Overview](https://help.aliyun.com/document_detail/154578.html).
      shared_ptr<string> permissionModel_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The drift state of the stack group on which the most recent successful drift detection was performed.
      // 
      // Valid values:
      // 
      // *   DRIFTED: The stack group has drifted.
      // *   NOT_CHECKED: No drift detection is performed on the stack group.
      // *   IN_SYNC: No drifts are detected on the stack group.
      shared_ptr<string> stackGroupDriftStatus_ {};
      // The ID of the stack group.
      shared_ptr<string> stackGroupId_ {};
      // The name of the stack group.
      shared_ptr<string> stackGroupName_ {};
      // The state of the stack group.
      // 
      // Valid values:
      // 
      // *   ACTIVE
      // *   DELETED
      shared_ptr<string> status_ {};
      // The tags that are added to the stack group.
      shared_ptr<vector<StackGroups::Tags>> tags_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->stackGroups_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStackGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStackGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroups Field Functions 
    bool hasStackGroups() const { return this->stackGroups_ != nullptr;};
    void deleteStackGroups() { this->stackGroups_ = nullptr;};
    inline const vector<ListStackGroupsResponseBody::StackGroups> & getStackGroups() const { DARABONBA_PTR_GET_CONST(stackGroups_, vector<ListStackGroupsResponseBody::StackGroups>) };
    inline vector<ListStackGroupsResponseBody::StackGroups> getStackGroups() { DARABONBA_PTR_GET(stackGroups_, vector<ListStackGroupsResponseBody::StackGroups>) };
    inline ListStackGroupsResponseBody& setStackGroups(const vector<ListStackGroupsResponseBody::StackGroups> & stackGroups) { DARABONBA_PTR_SET_VALUE(stackGroups_, stackGroups) };
    inline ListStackGroupsResponseBody& setStackGroups(vector<ListStackGroupsResponseBody::StackGroups> && stackGroups) { DARABONBA_PTR_SET_RVALUE(stackGroups_, stackGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The stack groups.
    shared_ptr<vector<ListStackGroupsResponseBody::StackGroups>> stackGroups_ {};
    // The total number of stack groups.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
