// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTableAddColumnResponseBodyTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableAddColumnResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableAddColumnResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableAddColumnResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    UpdateTableAddColumnResponseBody() = default ;
    UpdateTableAddColumnResponseBody(const UpdateTableAddColumnResponseBody &) = default ;
    UpdateTableAddColumnResponseBody(UpdateTableAddColumnResponseBody &&) = default ;
    UpdateTableAddColumnResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableAddColumnResponseBody() = default ;
    UpdateTableAddColumnResponseBody& operator=(const UpdateTableAddColumnResponseBody &) = default ;
    UpdateTableAddColumnResponseBody& operator=(UpdateTableAddColumnResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTableAddColumnResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const UpdateTableAddColumnResponseBodyTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, UpdateTableAddColumnResponseBodyTaskInfo) };
    inline UpdateTableAddColumnResponseBodyTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, UpdateTableAddColumnResponseBodyTaskInfo) };
    inline UpdateTableAddColumnResponseBody& setTaskInfo(const UpdateTableAddColumnResponseBodyTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline UpdateTableAddColumnResponseBody& setTaskInfo(UpdateTableAddColumnResponseBodyTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the request task. After a request task is submitted, it is divided into multiple subtasks that are run in sequence. After the current subtask is complete, the next subtask starts to run. After all subtasks are complete, the request task is complete. If a request task is aborted due to one of the following issues, address the issue based on the error code and initiate the request task again:
    // 
    // *   The request task fails to be submitted.
    // *   After the request task is submitted, a subtask fails to run.
    std::shared_ptr<UpdateTableAddColumnResponseBodyTaskInfo> taskInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
