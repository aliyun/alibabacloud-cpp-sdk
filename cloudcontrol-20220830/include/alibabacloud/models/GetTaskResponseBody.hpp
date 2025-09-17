// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTaskResponseBodyTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(task, task_);
    };
    GetTaskResponseBody() = default ;
    GetTaskResponseBody(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody(GetTaskResponseBody &&) = default ;
    GetTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBody() = default ;
    GetTaskResponseBody& operator=(const GetTaskResponseBody &) = default ;
    GetTaskResponseBody& operator=(GetTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->task_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetTaskResponseBodyTask & task() const { DARABONBA_PTR_GET_CONST(task_, GetTaskResponseBodyTask) };
    inline GetTaskResponseBodyTask task() { DARABONBA_PTR_GET(task_, GetTaskResponseBodyTask) };
    inline GetTaskResponseBody& setTask(const GetTaskResponseBodyTask & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetTaskResponseBody& setTask(GetTaskResponseBodyTask && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The ID of a request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the task.
    std::shared_ptr<GetTaskResponseBodyTask> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
