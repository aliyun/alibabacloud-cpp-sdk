// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTWORKFLOWDEFINITIONRESPONSEBODYASYNCJOB_HPP_
#define ALIBABACLOUD_MODELS_IMPORTWORKFLOWDEFINITIONRESPONSEBODYASYNCJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ImportWorkflowDefinitionResponseBodyAsyncJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportWorkflowDefinitionResponseBodyAsyncJob& obj) { 
      DARABONBA_PTR_TO_JSON(Completed, completed_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowDefinitionResponseBodyAsyncJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Completed, completed_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ImportWorkflowDefinitionResponseBodyAsyncJob() = default ;
    ImportWorkflowDefinitionResponseBodyAsyncJob(const ImportWorkflowDefinitionResponseBodyAsyncJob &) = default ;
    ImportWorkflowDefinitionResponseBodyAsyncJob(ImportWorkflowDefinitionResponseBodyAsyncJob &&) = default ;
    ImportWorkflowDefinitionResponseBodyAsyncJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportWorkflowDefinitionResponseBodyAsyncJob() = default ;
    ImportWorkflowDefinitionResponseBodyAsyncJob& operator=(const ImportWorkflowDefinitionResponseBodyAsyncJob &) = default ;
    ImportWorkflowDefinitionResponseBodyAsyncJob& operator=(ImportWorkflowDefinitionResponseBodyAsyncJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completed_ != nullptr
        && this->createTime_ != nullptr && this->error_ != nullptr && this->id_ != nullptr && this->progress_ != nullptr && this->response_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // completed Field Functions 
    bool hasCompleted() const { return this->completed_ != nullptr;};
    void deleteCompleted() { this->completed_ = nullptr;};
    inline bool completed() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline string response() const { DARABONBA_PTR_GET_DEFAULT(response_, "") };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob& setResponse(string response) { DARABONBA_PTR_SET_VALUE(response_, response) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ImportWorkflowDefinitionResponseBodyAsyncJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the asynchronous task is complete.
    std::shared_ptr<bool> completed_ = nullptr;
    // The time when the asynchronous task was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The error message returned if the asynchronous task fails.
    std::shared_ptr<string> error_ = nullptr;
    // The ID of the asynchronous task.
    std::shared_ptr<string> id_ = nullptr;
    // The progress of the asynchronous task. Valid values: 0 to 100.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The response.
    // 
    // >  The workflow ID is returned.
    std::shared_ptr<string> response_ = nullptr;
    // The status of the asynchronous task.
    // 
    // Valid values:
    // 
    // *   Running: The asynchronous task is running.
    // *   Success: The asynchronous task is complete.
    // *   Fail: The asynchronous task fails.
    // *   Cancel: The asynchronous task is canceled.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the asynchronous task.
    // 
    // Valid values:
    // 
    // *   Create: The asynchronous task is used to create an object.
    // *   Cancel: The asynchronous task is used to cancel an operation.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
