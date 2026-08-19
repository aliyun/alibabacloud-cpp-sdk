// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCRAWLERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCRAWLERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RunCrawlerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCrawlerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunAccepted, runAccepted_);
      DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCrawlerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunAccepted, runAccepted_);
      DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
    };
    RunCrawlerResponseBody() = default ;
    RunCrawlerResponseBody(const RunCrawlerResponseBody &) = default ;
    RunCrawlerResponseBody(RunCrawlerResponseBody &&) = default ;
    RunCrawlerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCrawlerResponseBody() = default ;
    RunCrawlerResponseBody& operator=(const RunCrawlerResponseBody &) = default ;
    RunCrawlerResponseBody& operator=(RunCrawlerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->requestId_ == nullptr && this->runAccepted_ == nullptr && this->runStatus_ == nullptr && this->success_ == nullptr && this->taskInstanceId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RunCrawlerResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCrawlerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runAccepted Field Functions 
    bool hasRunAccepted() const { return this->runAccepted_ != nullptr;};
    void deleteRunAccepted() { this->runAccepted_ = nullptr;};
    inline bool getRunAccepted() const { DARABONBA_PTR_GET_DEFAULT(runAccepted_, false) };
    inline RunCrawlerResponseBody& setRunAccepted(bool runAccepted) { DARABONBA_PTR_SET_VALUE(runAccepted_, runAccepted) };


    // runStatus Field Functions 
    bool hasRunStatus() const { return this->runStatus_ != nullptr;};
    void deleteRunStatus() { this->runStatus_ = nullptr;};
    inline string getRunStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
    inline RunCrawlerResponseBody& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunCrawlerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline int64_t getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
    inline RunCrawlerResponseBody& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


  protected:
    // The ID of the metadata crawler.
    shared_ptr<int64_t> id_ {};
    // The request ID. Used for locating logs and troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the run request was accepted. A value of true indicates that the request was accepted, but does not indicate that the collection task is complete.
    shared_ptr<bool> runAccepted_ {};
    // The initial run status after submission. The value is WAITING when the run request is successfully accepted. To query the final status, call ListCrawlerRuns.
    shared_ptr<string> runStatus_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The associated DataWorks task instance ID. This field may be empty. To query the final run record, call ListCrawlerRuns.
    shared_ptr<int64_t> taskInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
