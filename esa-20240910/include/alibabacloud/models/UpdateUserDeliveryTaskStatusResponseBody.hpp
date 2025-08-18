// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERDELIVERYTASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERDELIVERYTASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateUserDeliveryTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserDeliveryTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserDeliveryTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    UpdateUserDeliveryTaskStatusResponseBody() = default ;
    UpdateUserDeliveryTaskStatusResponseBody(const UpdateUserDeliveryTaskStatusResponseBody &) = default ;
    UpdateUserDeliveryTaskStatusResponseBody(UpdateUserDeliveryTaskStatusResponseBody &&) = default ;
    UpdateUserDeliveryTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserDeliveryTaskStatusResponseBody() = default ;
    UpdateUserDeliveryTaskStatusResponseBody& operator=(const UpdateUserDeliveryTaskStatusResponseBody &) = default ;
    UpdateUserDeliveryTaskStatusResponseBody& operator=(UpdateUserDeliveryTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->status_ != nullptr && this->taskName_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserDeliveryTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateUserDeliveryTaskStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateUserDeliveryTaskStatusResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the delivery task.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the delivery task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
