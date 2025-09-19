// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKRESPONSEBODYCREATESIMILARSECURITYEVENTSQUERYTASKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMILARSECURITYEVENTSQUERYTASKRESPONSEBODYCREATESIMILARSECURITYEVENTSQUERYTASKRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse() = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse(const CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse &) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse(CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse &&) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse() = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse& operator=(const CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse &) = default ;
    CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse& operator=(CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->taskId_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CreateSimilarSecurityEventsQueryTaskResponseBodyCreateSimilarSecurityEventsQueryTaskResponse& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The status of the task. Valid values:
    // 
    // *   **New**: The task is created.
    // *   **RetrievingData**: Data is being retrieved.
    // *   **DataRetrieved**: Data is retrieved.
    // *   **Processing**: The task is running.
    // *   **Success**: The task is successful.
    // *   **Failed**: The task failed.
    // *   **PartialFailed**: The task partially failed.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
