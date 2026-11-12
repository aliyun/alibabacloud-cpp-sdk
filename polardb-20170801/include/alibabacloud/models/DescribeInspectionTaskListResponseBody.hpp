// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeInspectionTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInspectionTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskLists, taskLists_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInspectionTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskLists, taskLists_);
    };
    DescribeInspectionTaskListResponseBody() = default ;
    DescribeInspectionTaskListResponseBody(const DescribeInspectionTaskListResponseBody &) = default ;
    DescribeInspectionTaskListResponseBody(DescribeInspectionTaskListResponseBody &&) = default ;
    DescribeInspectionTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInspectionTaskListResponseBody() = default ;
    DescribeInspectionTaskListResponseBody& operator=(const DescribeInspectionTaskListResponseBody &) = default ;
    DescribeInspectionTaskListResponseBody& operator=(DescribeInspectionTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskLists& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(DBClusterIds, DBClusterIds_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(TaskDescription, taskDescription_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskLists& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(DBClusterIds, DBClusterIds_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(TaskDescription, taskDescription_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskLists() = default ;
      TaskLists(const TaskLists &) = default ;
      TaskLists(TaskLists &&) = default ;
      TaskLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskLists() = default ;
      TaskLists& operator=(const TaskLists &) = default ;
      TaskLists& operator=(TaskLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->cronExpression_ == nullptr && this->DBClusterIds_ == nullptr && this->expireTime_ == nullptr && this->taskDescription_ == nullptr && this->taskId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TaskLists& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline TaskLists& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // DBClusterIds Field Functions 
      bool hasDBClusterIds() const { return this->DBClusterIds_ != nullptr;};
      void deleteDBClusterIds() { this->DBClusterIds_ = nullptr;};
      inline string getDBClusterIds() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIds_, "") };
      inline TaskLists& setDBClusterIds(string DBClusterIds) { DARABONBA_PTR_SET_VALUE(DBClusterIds_, DBClusterIds) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline TaskLists& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // taskDescription Field Functions 
      bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
      void deleteTaskDescription() { this->taskDescription_ = nullptr;};
      inline string getTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
      inline TaskLists& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskLists& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The last modification date of the task, in the YYYY-MM-DD format.
      shared_ptr<string> createTime_ {};
      // The cron expression for scheduled inspections.
      shared_ptr<string> cronExpression_ {};
      // The IDs of the PolarDB clusters to be inspected. Multiple IDs are separated by commas.
      shared_ptr<string> DBClusterIds_ {};
      // The expiration date of the inspection task, in the YYYY-MM-DD format.
      shared_ptr<string> expireTime_ {};
      // The description of the inspection task.
      shared_ptr<string> taskDescription_ {};
      // The ID of the inspection task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskLists_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInspectionTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskLists Field Functions 
    bool hasTaskLists() const { return this->taskLists_ != nullptr;};
    void deleteTaskLists() { this->taskLists_ = nullptr;};
    inline const vector<DescribeInspectionTaskListResponseBody::TaskLists> & getTaskLists() const { DARABONBA_PTR_GET_CONST(taskLists_, vector<DescribeInspectionTaskListResponseBody::TaskLists>) };
    inline vector<DescribeInspectionTaskListResponseBody::TaskLists> getTaskLists() { DARABONBA_PTR_GET(taskLists_, vector<DescribeInspectionTaskListResponseBody::TaskLists>) };
    inline DescribeInspectionTaskListResponseBody& setTaskLists(const vector<DescribeInspectionTaskListResponseBody::TaskLists> & taskLists) { DARABONBA_PTR_SET_VALUE(taskLists_, taskLists) };
    inline DescribeInspectionTaskListResponseBody& setTaskLists(vector<DescribeInspectionTaskListResponseBody::TaskLists> && taskLists) { DARABONBA_PTR_SET_RVALUE(taskLists_, taskLists) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of inspection tasks.
    shared_ptr<vector<DescribeInspectionTaskListResponseBody::TaskLists>> taskLists_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
