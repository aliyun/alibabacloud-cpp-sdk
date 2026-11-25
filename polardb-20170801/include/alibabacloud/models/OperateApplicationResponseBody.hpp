// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class OperateApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    OperateApplicationResponseBody() = default ;
    OperateApplicationResponseBody(const OperateApplicationResponseBody &) = default ;
    OperateApplicationResponseBody(OperateApplicationResponseBody &&) = default ;
    OperateApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateApplicationResponseBody() = default ;
    OperateApplicationResponseBody& operator=(const OperateApplicationResponseBody &) = default ;
    OperateApplicationResponseBody& operator=(OperateApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OperateApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline OperateApplicationResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The asynchronous task ID. For Ray restart, the parent task ID of restart_ray_cluster is returned. For DisableHeadScheduling and EnableHeadScheduling, the modify_ray_head_scheduling task ID is returned. A success response only indicates that the request is accepted. Historical applications or MCP paths may not return a task ID, and the default output is 0, which does not represent a valid task.
    shared_ptr<int32_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
