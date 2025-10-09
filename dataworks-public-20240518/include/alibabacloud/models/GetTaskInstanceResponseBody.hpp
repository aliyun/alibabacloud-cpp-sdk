// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTaskInstanceResponseBodyTaskInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInstance, taskInstance_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInstance, taskInstance_);
    };
    GetTaskInstanceResponseBody() = default ;
    GetTaskInstanceResponseBody(const GetTaskInstanceResponseBody &) = default ;
    GetTaskInstanceResponseBody(GetTaskInstanceResponseBody &&) = default ;
    GetTaskInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInstanceResponseBody() = default ;
    GetTaskInstanceResponseBody& operator=(const GetTaskInstanceResponseBody &) = default ;
    GetTaskInstanceResponseBody& operator=(GetTaskInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskInstance_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInstance Field Functions 
    bool hasTaskInstance() const { return this->taskInstance_ != nullptr;};
    void deleteTaskInstance() { this->taskInstance_ = nullptr;};
    inline const GetTaskInstanceResponseBodyTaskInstance & taskInstance() const { DARABONBA_PTR_GET_CONST(taskInstance_, GetTaskInstanceResponseBodyTaskInstance) };
    inline GetTaskInstanceResponseBodyTaskInstance taskInstance() { DARABONBA_PTR_GET(taskInstance_, GetTaskInstanceResponseBodyTaskInstance) };
    inline GetTaskInstanceResponseBody& setTaskInstance(const GetTaskInstanceResponseBodyTaskInstance & taskInstance) { DARABONBA_PTR_SET_VALUE(taskInstance_, taskInstance) };
    inline GetTaskInstanceResponseBody& setTaskInstance(GetTaskInstanceResponseBodyTaskInstance && taskInstance) { DARABONBA_PTR_SET_RVALUE(taskInstance_, taskInstance) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the task instance.
    std::shared_ptr<GetTaskInstanceResponseBodyTaskInstance> taskInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
