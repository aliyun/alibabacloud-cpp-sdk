// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERDELIVERYTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERDELIVERYTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateUserDeliveryTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserDeliveryTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserDeliveryTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    UpdateUserDeliveryTaskStatusRequest() = default ;
    UpdateUserDeliveryTaskStatusRequest(const UpdateUserDeliveryTaskStatusRequest &) = default ;
    UpdateUserDeliveryTaskStatusRequest(UpdateUserDeliveryTaskStatusRequest &&) = default ;
    UpdateUserDeliveryTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserDeliveryTaskStatusRequest() = default ;
    UpdateUserDeliveryTaskStatusRequest& operator=(const UpdateUserDeliveryTaskStatusRequest &) = default ;
    UpdateUserDeliveryTaskStatusRequest& operator=(UpdateUserDeliveryTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->method_ == nullptr
        && this->taskName_ == nullptr; };
    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline UpdateUserDeliveryTaskStatusRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateUserDeliveryTaskStatusRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // Enables or disables the delivery task. Valid values: online and offline.
    // 
    // This parameter is required.
    shared_ptr<string> method_ {};
    // The name of the delivery task.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
