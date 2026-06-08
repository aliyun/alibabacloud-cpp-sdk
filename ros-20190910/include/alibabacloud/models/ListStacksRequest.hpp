// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKSREQUEST_HPP_
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
  class ListStacksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStacksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentStackId, parentStackId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShowNestedStack, showNestedStack_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(StackIds, stackIds_);
      DARABONBA_PTR_TO_JSON(StackName, stackName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListStacksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentStackId, parentStackId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShowNestedStack, showNestedStack_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(StackIds, stackIds_);
      DARABONBA_PTR_FROM_JSON(StackName, stackName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListStacksRequest() = default ;
    ListStacksRequest(const ListStacksRequest &) = default ;
    ListStacksRequest(ListStacksRequest &&) = default ;
    ListStacksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStacksRequest() = default ;
    ListStacksRequest& operator=(const ListStacksRequest &) = default ;
    ListStacksRequest& operator=(ListStacksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N.\\
      // Valid values of N: 1 to 20.
      shared_ptr<string> key_ {};
      // The value of tag N.\\
      // Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->parentStackId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->showNestedStack_ == nullptr && this->stackId_ == nullptr && this->stackIds_ == nullptr && this->stackName_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListStacksRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListStacksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListStacksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentStackId Field Functions 
    bool hasParentStackId() const { return this->parentStackId_ != nullptr;};
    void deleteParentStackId() { this->parentStackId_ = nullptr;};
    inline string getParentStackId() const { DARABONBA_PTR_GET_DEFAULT(parentStackId_, "") };
    inline ListStacksRequest& setParentStackId(string parentStackId) { DARABONBA_PTR_SET_VALUE(parentStackId_, parentStackId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListStacksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListStacksRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // showNestedStack Field Functions 
    bool hasShowNestedStack() const { return this->showNestedStack_ != nullptr;};
    void deleteShowNestedStack() { this->showNestedStack_ = nullptr;};
    inline bool getShowNestedStack() const { DARABONBA_PTR_GET_DEFAULT(showNestedStack_, false) };
    inline ListStacksRequest& setShowNestedStack(bool showNestedStack) { DARABONBA_PTR_SET_VALUE(showNestedStack_, showNestedStack) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ListStacksRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // stackIds Field Functions 
    bool hasStackIds() const { return this->stackIds_ != nullptr;};
    void deleteStackIds() { this->stackIds_ = nullptr;};
    inline const vector<string> & getStackIds() const { DARABONBA_PTR_GET_CONST(stackIds_, vector<string>) };
    inline vector<string> getStackIds() { DARABONBA_PTR_GET(stackIds_, vector<string>) };
    inline ListStacksRequest& setStackIds(const vector<string> & stackIds) { DARABONBA_PTR_SET_VALUE(stackIds_, stackIds) };
    inline ListStacksRequest& setStackIds(vector<string> && stackIds) { DARABONBA_PTR_SET_RVALUE(stackIds_, stackIds) };


    // stackName Field Functions 
    bool hasStackName() const { return this->stackName_ != nullptr;};
    void deleteStackName() { this->stackName_ = nullptr;};
    inline const vector<string> & getStackName() const { DARABONBA_PTR_GET_CONST(stackName_, vector<string>) };
    inline vector<string> getStackName() { DARABONBA_PTR_GET(stackName_, vector<string>) };
    inline ListStacksRequest& setStackName(const vector<string> & stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };
    inline ListStacksRequest& setStackName(vector<string> && stackName) { DARABONBA_PTR_SET_RVALUE(stackName_, stackName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListStacksRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListStacksRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListStacksRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListStacksRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListStacksRequest::Tag>) };
    inline vector<ListStacksRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListStacksRequest::Tag>) };
    inline ListStacksRequest& setTag(const vector<ListStacksRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListStacksRequest& setTag(vector<ListStacksRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Maximum value: 50.
    // 
    // Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the parent stack.
    shared_ptr<string> parentStackId_ {};
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.\\
    // For more information about resource groups, see the "Resource Group" section of the [What is Resource Management?](https://help.aliyun.com/document_detail/94475.html) topic.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to return nested stacks. Valid values:
    // 
    // *   true
    // *   false (default)
    // 
    // > If you specify ParentStackId, you must set ShowNestedStack to true.
    shared_ptr<bool> showNestedStack_ {};
    // The stack ID. You can specify this parameter to query only the stack ID. If you want to query the detailed information about the stack, call the GetStack operation.
    shared_ptr<string> stackId_ {};
    // The IDs of the stacks.
    shared_ptr<vector<string>> stackIds_ {};
    // The names of the stacks.
    shared_ptr<vector<string>> stackName_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
    // The status of the stack.
    shared_ptr<vector<string>> status_ {};
    // The tags of the stack.
    shared_ptr<vector<ListStacksRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
