// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACTIVEOPERATIONTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyActiveOperationTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyActiveOperationTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyActiveOperationTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    ModifyActiveOperationTasksResponseBody() = default ;
    ModifyActiveOperationTasksResponseBody(const ModifyActiveOperationTasksResponseBody &) = default ;
    ModifyActiveOperationTasksResponseBody(ModifyActiveOperationTasksResponseBody &&) = default ;
    ModifyActiveOperationTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyActiveOperationTasksResponseBody() = default ;
    ModifyActiveOperationTasksResponseBody& operator=(const ModifyActiveOperationTasksResponseBody &) = default ;
    ModifyActiveOperationTasksResponseBody& operator=(ModifyActiveOperationTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyActiveOperationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline string taskIds() const { DARABONBA_PTR_GET_DEFAULT(taskIds_, "") };
    inline ModifyActiveOperationTasksResponseBody& setTaskIds(string taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task IDs.
    std::shared_ptr<string> taskIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
