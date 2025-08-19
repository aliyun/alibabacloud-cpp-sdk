// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEANUSERPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLEANUSERPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CleanUserPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CleanUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CleanUserPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    CleanUserPermissionsResponseBody() = default ;
    CleanUserPermissionsResponseBody(const CleanUserPermissionsResponseBody &) = default ;
    CleanUserPermissionsResponseBody(CleanUserPermissionsResponseBody &&) = default ;
    CleanUserPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CleanUserPermissionsResponseBody() = default ;
    CleanUserPermissionsResponseBody& operator=(const CleanUserPermissionsResponseBody &) = default ;
    CleanUserPermissionsResponseBody& operator=(CleanUserPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CleanUserPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CleanUserPermissionsResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
