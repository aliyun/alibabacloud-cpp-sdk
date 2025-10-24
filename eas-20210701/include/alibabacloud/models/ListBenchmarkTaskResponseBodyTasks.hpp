// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBENCHMARKTASKRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTBENCHMARKTASKRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListBenchmarkTaskResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBenchmarkTaskResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableAgent, availableAgent_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListBenchmarkTaskResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableAgent, availableAgent_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListBenchmarkTaskResponseBodyTasks() = default ;
    ListBenchmarkTaskResponseBodyTasks(const ListBenchmarkTaskResponseBodyTasks &) = default ;
    ListBenchmarkTaskResponseBodyTasks(ListBenchmarkTaskResponseBodyTasks &&) = default ;
    ListBenchmarkTaskResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBenchmarkTaskResponseBodyTasks() = default ;
    ListBenchmarkTaskResponseBodyTasks& operator=(const ListBenchmarkTaskResponseBodyTasks &) = default ;
    ListBenchmarkTaskResponseBodyTasks& operator=(ListBenchmarkTaskResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableAgent_ == nullptr
        && return this->createTime_ == nullptr && return this->message_ == nullptr && return this->region_ == nullptr && return this->serviceName_ == nullptr && return this->status_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->updateTime_ == nullptr; };
    // availableAgent Field Functions 
    bool hasAvailableAgent() const { return this->availableAgent_ != nullptr;};
    void deleteAvailableAgent() { this->availableAgent_ = nullptr;};
    inline int64_t availableAgent() const { DARABONBA_PTR_GET_DEFAULT(availableAgent_, 0L) };
    inline ListBenchmarkTaskResponseBodyTasks& setAvailableAgent(int64_t availableAgent) { DARABONBA_PTR_SET_VALUE(availableAgent_, availableAgent) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListBenchmarkTaskResponseBodyTasks& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBenchmarkTaskResponseBodyTasks& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListBenchmarkTaskResponseBodyTasks& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListBenchmarkTaskResponseBodyTasks& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBenchmarkTaskResponseBodyTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListBenchmarkTaskResponseBodyTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListBenchmarkTaskResponseBodyTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListBenchmarkTaskResponseBodyTasks& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The number of instances that are available for stress testing.
    std::shared_ptr<int64_t> availableAgent_ = nullptr;
    // The time when the stress testing task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The region ID of the stress testing task.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the service on which you want to perform a stress testing.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The state of the stress testing task.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Starting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DeleteFailed
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Running
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Stopping
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Error
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Updating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Deleting
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CreateFailed
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the stress testing task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the stress testing task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The time when the stress testing task was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
