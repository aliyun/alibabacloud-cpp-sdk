// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPULLTOPUSHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPULLTOPUSHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLivePullToPushResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePullToPushResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePullToPushResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateLivePullToPushResponseBody() = default ;
    CreateLivePullToPushResponseBody(const CreateLivePullToPushResponseBody &) = default ;
    CreateLivePullToPushResponseBody(CreateLivePullToPushResponseBody &&) = default ;
    CreateLivePullToPushResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePullToPushResponseBody() = default ;
    CreateLivePullToPushResponseBody& operator=(const CreateLivePullToPushResponseBody &) = default ;
    CreateLivePullToPushResponseBody& operator=(CreateLivePullToPushResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->requestId_ == nullptr && return this->retCode_ == nullptr && return this->taskId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLivePullToPushResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLivePullToPushResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline CreateLivePullToPushResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateLivePullToPushResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The description of the custom rule.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The code that is returned for the request.
    // 
    // > 
    // 
    // *   0 is returned if the request is normal.
    // 
    // *   For information about codes that are returned when exceptions occur, see the following Error codes table.
    std::shared_ptr<int32_t> retCode_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
