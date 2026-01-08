// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDownloadTaskTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadTaskTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskTypeArray, taskTypeArray_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadTaskTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskTypeArray, taskTypeArray_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDownloadTaskTypeResponseBody() = default ;
    DescribeDownloadTaskTypeResponseBody(const DescribeDownloadTaskTypeResponseBody &) = default ;
    DescribeDownloadTaskTypeResponseBody(DescribeDownloadTaskTypeResponseBody &&) = default ;
    DescribeDownloadTaskTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadTaskTypeResponseBody() = default ;
    DescribeDownloadTaskTypeResponseBody& operator=(const DescribeDownloadTaskTypeResponseBody &) = default ;
    DescribeDownloadTaskTypeResponseBody& operator=(DescribeDownloadTaskTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskTypeArray : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskTypeArray& obj) { 
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, TaskTypeArray& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      TaskTypeArray() = default ;
      TaskTypeArray(const TaskTypeArray &) = default ;
      TaskTypeArray(TaskTypeArray &&) = default ;
      TaskTypeArray(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskTypeArray() = default ;
      TaskTypeArray& operator=(const TaskTypeArray &) = default ;
      TaskTypeArray& operator=(TaskTypeArray &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->taskName_ == nullptr
        && this->taskType_ == nullptr; };
      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskTypeArray& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline TaskTypeArray& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The name of the task type.
      shared_ptr<string> taskName_ {};
      // The type of the task.
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskTypeArray_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDownloadTaskTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskTypeArray Field Functions 
    bool hasTaskTypeArray() const { return this->taskTypeArray_ != nullptr;};
    void deleteTaskTypeArray() { this->taskTypeArray_ = nullptr;};
    inline const vector<DescribeDownloadTaskTypeResponseBody::TaskTypeArray> & getTaskTypeArray() const { DARABONBA_PTR_GET_CONST(taskTypeArray_, vector<DescribeDownloadTaskTypeResponseBody::TaskTypeArray>) };
    inline vector<DescribeDownloadTaskTypeResponseBody::TaskTypeArray> getTaskTypeArray() { DARABONBA_PTR_GET(taskTypeArray_, vector<DescribeDownloadTaskTypeResponseBody::TaskTypeArray>) };
    inline DescribeDownloadTaskTypeResponseBody& setTaskTypeArray(const vector<DescribeDownloadTaskTypeResponseBody::TaskTypeArray> & taskTypeArray) { DARABONBA_PTR_SET_VALUE(taskTypeArray_, taskTypeArray) };
    inline DescribeDownloadTaskTypeResponseBody& setTaskTypeArray(vector<DescribeDownloadTaskTypeResponseBody::TaskTypeArray> && taskTypeArray) { DARABONBA_PTR_SET_RVALUE(taskTypeArray_, taskTypeArray) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDownloadTaskTypeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The task types.
    shared_ptr<vector<DescribeDownloadTaskTypeResponseBody::TaskTypeArray>> taskTypeArray_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
