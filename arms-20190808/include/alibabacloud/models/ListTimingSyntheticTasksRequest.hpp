// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTimingSyntheticTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimingSyntheticTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Search, search_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimingSyntheticTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListTimingSyntheticTasksRequest() = default ;
    ListTimingSyntheticTasksRequest(const ListTimingSyntheticTasksRequest &) = default ;
    ListTimingSyntheticTasksRequest(ListTimingSyntheticTasksRequest &&) = default ;
    ListTimingSyntheticTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimingSyntheticTasksRequest() = default ;
    ListTimingSyntheticTasksRequest& operator=(const ListTimingSyntheticTasksRequest &) = default ;
    ListTimingSyntheticTasksRequest& operator=(ListTimingSyntheticTasksRequest &&) = default ;
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class Search : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Search& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(OrderField, orderField_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
        DARABONBA_PTR_TO_JSON(TaskTypes, taskTypes_);
      };
      friend void from_json(const Darabonba::Json& j, Search& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
        DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypes_);
      };
      Search() = default ;
      Search(const Search &) = default ;
      Search(Search &&) = default ;
      Search(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Search() = default ;
      Search& operator=(const Search &) = default ;
      Search& operator=(Search &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->order_ == nullptr && this->orderField_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr
        && this->taskIds_ == nullptr && this->taskTypes_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Search& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
      inline Search& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // orderField Field Functions 
      bool hasOrderField() const { return this->orderField_ != nullptr;};
      void deleteOrderField() { this->orderField_ = nullptr;};
      inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
      inline Search& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Search& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Search& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Search& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskIds Field Functions 
      bool hasTaskIds() const { return this->taskIds_ != nullptr;};
      void deleteTaskIds() { this->taskIds_ = nullptr;};
      inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
      inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
      inline Search& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
      inline Search& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


      // taskTypes Field Functions 
      bool hasTaskTypes() const { return this->taskTypes_ != nullptr;};
      void deleteTaskTypes() { this->taskTypes_ = nullptr;};
      inline const vector<int32_t> & getTaskTypes() const { DARABONBA_PTR_GET_CONST(taskTypes_, vector<int32_t>) };
      inline vector<int32_t> getTaskTypes() { DARABONBA_PTR_GET(taskTypes_, vector<int32_t>) };
      inline Search& setTaskTypes(const vector<int32_t> & taskTypes) { DARABONBA_PTR_SET_VALUE(taskTypes_, taskTypes) };
      inline Search& setTaskTypes(vector<int32_t> && taskTypes) { DARABONBA_PTR_SET_RVALUE(taskTypes_, taskTypes) };


    protected:
      // The task name.
      shared_ptr<string> name_ {};
      // The order by which tasks are sorted. 1: ascending order. -1: descending order.
      shared_ptr<int32_t> order_ {};
      // The condition by which tasks are sorted. You can sort tasks by gmtCreate, gmtModified, status, or monitorCount.
      shared_ptr<string> orderField_ {};
      // The page number. This parameter is required.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page. This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
      // The task status. CREATING: The task is being created. RUNNING: The task is running. PARTIAL_RUNNING: The task is partially running. STOP: The task is stopped. LIMIT_STOP: The task is stopped due to quota limit. EXCEPTION: The task is abnormal. DELETE: The task is deleted. DELETE_EXCEPTION: An exception occurs while deleting the task.
      shared_ptr<string> status_ {};
      // The task IDs.
      shared_ptr<vector<string>> taskIds_ {};
      // The task types.
      shared_ptr<vector<int32_t>> taskTypes_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->search_ == nullptr && this->tags_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTimingSyntheticTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTimingSyntheticTasksRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline const ListTimingSyntheticTasksRequest::Search & getSearch() const { DARABONBA_PTR_GET_CONST(search_, ListTimingSyntheticTasksRequest::Search) };
    inline ListTimingSyntheticTasksRequest::Search getSearch() { DARABONBA_PTR_GET(search_, ListTimingSyntheticTasksRequest::Search) };
    inline ListTimingSyntheticTasksRequest& setSearch(const ListTimingSyntheticTasksRequest::Search & search) { DARABONBA_PTR_SET_VALUE(search_, search) };
    inline ListTimingSyntheticTasksRequest& setSearch(ListTimingSyntheticTasksRequest::Search && search) { DARABONBA_PTR_SET_RVALUE(search_, search) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListTimingSyntheticTasksRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListTimingSyntheticTasksRequest::Tags>) };
    inline vector<ListTimingSyntheticTasksRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListTimingSyntheticTasksRequest::Tags>) };
    inline ListTimingSyntheticTasksRequest& setTags(const vector<ListTimingSyntheticTasksRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTimingSyntheticTasksRequest& setTags(vector<ListTimingSyntheticTasksRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The search keyword.
    shared_ptr<ListTimingSyntheticTasksRequest::Search> search_ {};
    // The tags.
    shared_ptr<vector<ListTimingSyntheticTasksRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
