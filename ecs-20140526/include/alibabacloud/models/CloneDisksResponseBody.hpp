// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEDISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONEDISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CloneDisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneDisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskGroupId, taskGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneDisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskGroupId, taskGroupId_);
    };
    CloneDisksResponseBody() = default ;
    CloneDisksResponseBody(const CloneDisksResponseBody &) = default ;
    CloneDisksResponseBody(CloneDisksResponseBody &&) = default ;
    CloneDisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneDisksResponseBody() = default ;
    CloneDisksResponseBody& operator=(const CloneDisksResponseBody &) = default ;
    CloneDisksResponseBody& operator=(CloneDisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskGroupId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneDisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskGroupId Field Functions 
    bool hasTaskGroupId() const { return this->taskGroupId_ != nullptr;};
    void deleteTaskGroupId() { this->taskGroupId_ = nullptr;};
    inline string getTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(taskGroupId_, "") };
    inline CloneDisksResponseBody& setTaskGroupId(string taskGroupId) { DARABONBA_PTR_SET_VALUE(taskGroupId_, taskGroupId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
