// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MeetingJoinUrl, meetingJoinUrl_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MeetingJoinUrl, meetingJoinUrl_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    CreateTaskResponseBodyData() = default ;
    CreateTaskResponseBodyData(const CreateTaskResponseBodyData &) = default ;
    CreateTaskResponseBodyData(CreateTaskResponseBodyData &&) = default ;
    CreateTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskResponseBodyData() = default ;
    CreateTaskResponseBodyData& operator=(const CreateTaskResponseBodyData &) = default ;
    CreateTaskResponseBodyData& operator=(CreateTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->meetingJoinUrl_ != nullptr
        && this->taskId_ != nullptr && this->taskKey_ != nullptr && this->taskStatus_ != nullptr; };
    // meetingJoinUrl Field Functions 
    bool hasMeetingJoinUrl() const { return this->meetingJoinUrl_ != nullptr;};
    void deleteMeetingJoinUrl() { this->meetingJoinUrl_ = nullptr;};
    inline string meetingJoinUrl() const { DARABONBA_PTR_GET_DEFAULT(meetingJoinUrl_, "") };
    inline CreateTaskResponseBodyData& setMeetingJoinUrl(string meetingJoinUrl) { DARABONBA_PTR_SET_VALUE(meetingJoinUrl_, meetingJoinUrl) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskKey Field Functions 
    bool hasTaskKey() const { return this->taskKey_ != nullptr;};
    void deleteTaskKey() { this->taskKey_ = nullptr;};
    inline string taskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
    inline CreateTaskResponseBodyData& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline CreateTaskResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> meetingJoinUrl_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskKey_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
