// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCEDITTIMELINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ASYNCEDITTIMELINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncEditTimelineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncEditTimelineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncEditTimelineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    AsyncEditTimelineResponseBodyData() = default ;
    AsyncEditTimelineResponseBodyData(const AsyncEditTimelineResponseBodyData &) = default ;
    AsyncEditTimelineResponseBodyData(AsyncEditTimelineResponseBodyData &&) = default ;
    AsyncEditTimelineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncEditTimelineResponseBodyData() = default ;
    AsyncEditTimelineResponseBodyData& operator=(const AsyncEditTimelineResponseBodyData &) = default ;
    AsyncEditTimelineResponseBodyData& operator=(AsyncEditTimelineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->taskId_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AsyncEditTimelineResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncEditTimelineResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
