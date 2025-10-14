// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERDELIVERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUserDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserDeliveryTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    GetUserDeliveryTaskRequest() = default ;
    GetUserDeliveryTaskRequest(const GetUserDeliveryTaskRequest &) = default ;
    GetUserDeliveryTaskRequest(GetUserDeliveryTaskRequest &&) = default ;
    GetUserDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserDeliveryTaskRequest() = default ;
    GetUserDeliveryTaskRequest& operator=(const GetUserDeliveryTaskRequest &) = default ;
    GetUserDeliveryTaskRequest& operator=(GetUserDeliveryTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskName_ == nullptr; };
    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetUserDeliveryTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The name of the delivery task.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
