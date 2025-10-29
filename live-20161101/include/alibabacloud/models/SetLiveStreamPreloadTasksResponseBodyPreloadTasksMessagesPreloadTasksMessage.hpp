// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSRESPONSEBODYPRELOADTASKSMESSAGESPRELOADTASKSMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSRESPONSEBODYPRELOADTASKSMESSAGESPRELOADTASKSMESSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PlayUrl, playUrl_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PlayUrl, playUrl_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage() = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage(const SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage &) = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage(SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage &&) = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage() = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage& operator=(const SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage &) = default ;
    SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage& operator=(SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->playUrl_ == nullptr && return this->taskId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // playUrl Field Functions 
    bool hasPlayUrl() const { return this->playUrl_ != nullptr;};
    void deletePlayUrl() { this->playUrl_ = nullptr;};
    inline string playUrl() const { DARABONBA_PTR_GET_DEFAULT(playUrl_, "") };
    inline SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage& setPlayUrl(string playUrl) { DARABONBA_PTR_SET_VALUE(playUrl_, playUrl) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessagesPreloadTasksMessage& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Indicates whether the prefetch task is successful. Valid values:
    // 
    // *   Successfully
    // *   InternalError
    std::shared_ptr<string> description_ = nullptr;
    // The streaming URL.
    std::shared_ptr<string> playUrl_ = nullptr;
    // The ID of the prefetch task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
