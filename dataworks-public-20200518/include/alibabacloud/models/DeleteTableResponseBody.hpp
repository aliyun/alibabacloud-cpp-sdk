// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteTableResponseBodyTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    DeleteTableResponseBody() = default ;
    DeleteTableResponseBody(const DeleteTableResponseBody &) = default ;
    DeleteTableResponseBody(DeleteTableResponseBody &&) = default ;
    DeleteTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTableResponseBody() = default ;
    DeleteTableResponseBody& operator=(const DeleteTableResponseBody &) = default ;
    DeleteTableResponseBody& operator=(DeleteTableResponseBody &&) = default ;
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
    inline DeleteTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const DeleteTableResponseBodyTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DeleteTableResponseBodyTaskInfo) };
    inline DeleteTableResponseBodyTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, DeleteTableResponseBodyTaskInfo) };
    inline DeleteTableResponseBody& setTaskInfo(const DeleteTableResponseBodyTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DeleteTableResponseBody& setTaskInfo(DeleteTableResponseBodyTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the task that is used to delete the table.
    std::shared_ptr<DeleteTableResponseBodyTaskInfo> taskInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
