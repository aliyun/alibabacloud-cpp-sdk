// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class ListSubTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ListSubTasksRequest() = default ;
    ListSubTasksRequest(const ListSubTasksRequest &) = default ;
    ListSubTasksRequest(ListSubTasksRequest &&) = default ;
    ListSubTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubTasksRequest() = default ;
    ListSubTasksRequest& operator=(const ListSubTasksRequest &) = default ;
    ListSubTasksRequest& operator=(ListSubTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->rootTaskId_ == nullptr && this->taskType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSubTasksRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSubTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string getRootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline ListSubTasksRequest& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListSubTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> rootTaskId_ {};
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
