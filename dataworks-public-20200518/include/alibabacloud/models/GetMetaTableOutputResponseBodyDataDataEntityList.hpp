// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEOUTPUTRESPONSEBODYDATADATAENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEOUTPUTRESPONSEBODYDATADATAENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableOutputResponseBodyDataDataEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableOutputResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
      DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableOutputResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
      DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
    };
    GetMetaTableOutputResponseBodyDataDataEntityList() = default ;
    GetMetaTableOutputResponseBodyDataDataEntityList(const GetMetaTableOutputResponseBodyDataDataEntityList &) = default ;
    GetMetaTableOutputResponseBodyDataDataEntityList(GetMetaTableOutputResponseBodyDataDataEntityList &&) = default ;
    GetMetaTableOutputResponseBodyDataDataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableOutputResponseBodyDataDataEntityList() = default ;
    GetMetaTableOutputResponseBodyDataDataEntityList& operator=(const GetMetaTableOutputResponseBodyDataDataEntityList &) = default ;
    GetMetaTableOutputResponseBodyDataDataEntityList& operator=(GetMetaTableOutputResponseBodyDataDataEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->projectId_ != nullptr && this->startTime_ != nullptr && this->tableGuid_ != nullptr && this->taskId_ != nullptr && this->taskInstanceId_ != nullptr
        && this->waitTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetMetaTableOutputResponseBodyDataDataEntityList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetMetaTableOutputResponseBodyDataDataEntityList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMetaTableOutputResponseBodyDataDataEntityList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableOutputResponseBodyDataDataEntityList& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetMetaTableOutputResponseBodyDataDataEntityList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline int64_t taskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
    inline GetMetaTableOutputResponseBodyDataDataEntityList& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline string waitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, "") };
    inline GetMetaTableOutputResponseBodyDataDataEntityList& setWaitTime(string waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    // The end time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The GUID of the MaxCompute table.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> taskInstanceId_ = nullptr;
    // The waiting time.
    std::shared_ptr<string> waitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
