// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDISYNCTASKCONFIGPROCESSRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDISYNCTASKCONFIGPROCESSRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class QueryDISyncTaskConfigProcessResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDISyncTaskConfigProcessResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncProcessId, asyncProcessId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDISyncTaskConfigProcessResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncProcessId, asyncProcessId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    QueryDISyncTaskConfigProcessResultRequest() = default ;
    QueryDISyncTaskConfigProcessResultRequest(const QueryDISyncTaskConfigProcessResultRequest &) = default ;
    QueryDISyncTaskConfigProcessResultRequest(QueryDISyncTaskConfigProcessResultRequest &&) = default ;
    QueryDISyncTaskConfigProcessResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDISyncTaskConfigProcessResultRequest() = default ;
    QueryDISyncTaskConfigProcessResultRequest& operator=(const QueryDISyncTaskConfigProcessResultRequest &) = default ;
    QueryDISyncTaskConfigProcessResultRequest& operator=(QueryDISyncTaskConfigProcessResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncProcessId_ != nullptr
        && this->projectId_ != nullptr && this->taskType_ != nullptr; };
    // asyncProcessId Field Functions 
    bool hasAsyncProcessId() const { return this->asyncProcessId_ != nullptr;};
    void deleteAsyncProcessId() { this->asyncProcessId_ = nullptr;};
    inline int64_t asyncProcessId() const { DARABONBA_PTR_GET_DEFAULT(asyncProcessId_, 0L) };
    inline QueryDISyncTaskConfigProcessResultRequest& setAsyncProcessId(int64_t asyncProcessId) { DARABONBA_PTR_SET_VALUE(asyncProcessId_, asyncProcessId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline QueryDISyncTaskConfigProcessResultRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline QueryDISyncTaskConfigProcessResultRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The asynchronous thread ID. You can call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) or [GenerateDISyncTaskConfigForUpdating](https://help.aliyun.com/document_detail/383464.html) operation to obtain the ID.
    // 
    // *   The GenerateDISyncTaskConfigForCreating operation is used to generate the ID of the asynchronous thread that is used to create a real-time synchronization task in Data Integration.
    // *   The GenerateDISyncTaskConfigForUpdating operation is used to generate the ID of the asynchronous thread that is used to update a real-time synchronization task in Data Integration.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> asyncProcessId_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The type of the object that you want to create or update in Data Integration in asynchronous mode. Valid values:
    // 
    // *   DI_REALTIME: real-time synchronization task
    // *   DI_SOLUTION: synchronization solution DataWorks allows you to create or update real-time synchronization tasks and synchronization solutions in Data Integration only in asynchronous mode.
    // 
    // Valid values:
    // 
    // *   DI_OFFLINE
    // *   DI_REALTIME
    // *   DI_SOLUTION
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
