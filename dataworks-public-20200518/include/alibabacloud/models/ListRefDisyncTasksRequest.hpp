// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREFDISYNCTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREFDISYNCTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListRefDISyncTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRefDISyncTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RefType, refType_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRefDISyncTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RefType, refType_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ListRefDISyncTasksRequest() = default ;
    ListRefDISyncTasksRequest(const ListRefDISyncTasksRequest &) = default ;
    ListRefDISyncTasksRequest(ListRefDISyncTasksRequest &&) = default ;
    ListRefDISyncTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRefDISyncTasksRequest() = default ;
    ListRefDISyncTasksRequest& operator=(const ListRefDISyncTasksRequest &) = default ;
    ListRefDISyncTasksRequest& operator=(ListRefDISyncTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasourceName_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->projectId_ != nullptr && this->refType_ != nullptr && this->taskType_ != nullptr; };
    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline ListRefDISyncTasksRequest& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRefDISyncTasksRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRefDISyncTasksRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListRefDISyncTasksRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // refType Field Functions 
    bool hasRefType() const { return this->refType_ != nullptr;};
    void deleteRefType() { this->refType_ = nullptr;};
    inline string refType() const { DARABONBA_PTR_GET_DEFAULT(refType_, "") };
    inline ListRefDISyncTasksRequest& setRefType(string refType) { DARABONBA_PTR_SET_VALUE(refType_, refType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListRefDISyncTasksRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The name of the data source. You can call the [ListDataSources](https://help.aliyun.com/document_detail/211431.html) operation to query the name of the data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasourceName_ = nullptr;
    // The page number. Valid values: 1 to 100.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The condition used to filter synchronization tasks. Valid values:
    // 
    // *   from: queries the synchronization tasks that use the data source as the source.
    // *   to: queries the synchronization tasks that use the data source as the destination.
    // 
    // This parameter is required.
    std::shared_ptr<string> refType_ = nullptr;
    // The type of the synchronization task that you want to query. Valid values:
    // 
    // *   DI_OFFLINE: batch synchronization task
    // *   DI_REALTIME: real-time synchronization task
    // 
    // You can call the ListRefDISyncTasks operation to query only one type of the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
