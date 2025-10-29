// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceExportTaskResponseBodyTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceExportTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceExportTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(task, task_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceExportTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(task, task_);
    };
    GetResourceExportTaskResponseBody() = default ;
    GetResourceExportTaskResponseBody(const GetResourceExportTaskResponseBody &) = default ;
    GetResourceExportTaskResponseBody(GetResourceExportTaskResponseBody &&) = default ;
    GetResourceExportTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceExportTaskResponseBody() = default ;
    GetResourceExportTaskResponseBody& operator=(const GetResourceExportTaskResponseBody &) = default ;
    GetResourceExportTaskResponseBody& operator=(GetResourceExportTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceExportTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const GetResourceExportTaskResponseBodyTask & task() const { DARABONBA_PTR_GET_CONST(task_, GetResourceExportTaskResponseBodyTask) };
    inline GetResourceExportTaskResponseBodyTask task() { DARABONBA_PTR_GET(task_, GetResourceExportTaskResponseBodyTask) };
    inline GetResourceExportTaskResponseBody& setTask(const GetResourceExportTaskResponseBodyTask & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline GetResourceExportTaskResponseBody& setTask(GetResourceExportTaskResponseBodyTask && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetResourceExportTaskResponseBodyTask> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
