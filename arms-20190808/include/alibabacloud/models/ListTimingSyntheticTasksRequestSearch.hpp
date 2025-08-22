// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSREQUESTSEARCH_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMINGSYNTHETICTASKSREQUESTSEARCH_HPP_
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
  class ListTimingSyntheticTasksRequestSearch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimingSyntheticTasksRequestSearch& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(TaskTypes, taskTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimingSyntheticTasksRequestSearch& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(TaskTypes, taskTypes_);
    };
    ListTimingSyntheticTasksRequestSearch() = default ;
    ListTimingSyntheticTasksRequestSearch(const ListTimingSyntheticTasksRequestSearch &) = default ;
    ListTimingSyntheticTasksRequestSearch(ListTimingSyntheticTasksRequestSearch &&) = default ;
    ListTimingSyntheticTasksRequestSearch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimingSyntheticTasksRequestSearch() = default ;
    ListTimingSyntheticTasksRequestSearch& operator=(const ListTimingSyntheticTasksRequestSearch &) = default ;
    ListTimingSyntheticTasksRequestSearch& operator=(ListTimingSyntheticTasksRequestSearch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->order_ != nullptr && this->orderField_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->status_ != nullptr
        && this->taskIds_ != nullptr && this->taskTypes_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTimingSyntheticTasksRequestSearch& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int32_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
    inline ListTimingSyntheticTasksRequestSearch& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string orderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListTimingSyntheticTasksRequestSearch& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListTimingSyntheticTasksRequestSearch& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTimingSyntheticTasksRequestSearch& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTimingSyntheticTasksRequestSearch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline ListTimingSyntheticTasksRequestSearch& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ListTimingSyntheticTasksRequestSearch& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // taskTypes Field Functions 
    bool hasTaskTypes() const { return this->taskTypes_ != nullptr;};
    void deleteTaskTypes() { this->taskTypes_ = nullptr;};
    inline const vector<int32_t> & taskTypes() const { DARABONBA_PTR_GET_CONST(taskTypes_, vector<int32_t>) };
    inline vector<int32_t> taskTypes() { DARABONBA_PTR_GET(taskTypes_, vector<int32_t>) };
    inline ListTimingSyntheticTasksRequestSearch& setTaskTypes(const vector<int32_t> & taskTypes) { DARABONBA_PTR_SET_VALUE(taskTypes_, taskTypes) };
    inline ListTimingSyntheticTasksRequestSearch& setTaskTypes(vector<int32_t> && taskTypes) { DARABONBA_PTR_SET_RVALUE(taskTypes_, taskTypes) };


  protected:
    // The task name.
    std::shared_ptr<string> name_ = nullptr;
    // The order by which tasks are sorted. 1: ascending order. -1: descending order.
    std::shared_ptr<int32_t> order_ = nullptr;
    // The condition by which tasks are sorted. You can sort tasks by gmtCreate, gmtModified, status, or monitorCount.
    std::shared_ptr<string> orderField_ = nullptr;
    // The page number. This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries per page. This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The task status. CREATING: The task is being created. RUNNING: The task is running. PARTIAL_RUNNING: The task is partially running. STOP: The task is stopped. LIMIT_STOP: The task is stopped due to quota limit. EXCEPTION: The task is abnormal. DELETE: The task is deleted. DELETE_EXCEPTION: An exception occurs while deleting the task.
    std::shared_ptr<string> status_ = nullptr;
    // The task IDs.
    std::shared_ptr<vector<string>> taskIds_ = nullptr;
    // The task types.
    std::shared_ptr<vector<int32_t>> taskTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
