// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOTASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFOTASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetFoTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFoTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFoTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetFoTaskStatusRequest() = default ;
    GetFoTaskStatusRequest(const GetFoTaskStatusRequest &) = default ;
    GetFoTaskStatusRequest(GetFoTaskStatusRequest &&) = default ;
    GetFoTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFoTaskStatusRequest() = default ;
    GetFoTaskStatusRequest& operator=(const GetFoTaskStatusRequest &) = default ;
    GetFoTaskStatusRequest& operator=(GetFoTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline GetFoTaskStatusRequest& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The disaster recovery switchover task ID.
    std::shared_ptr<int32_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
