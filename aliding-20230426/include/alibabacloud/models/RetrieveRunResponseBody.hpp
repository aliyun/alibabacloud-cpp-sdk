// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RetrieveRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(run, run_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(run, run_);
    };
    RetrieveRunResponseBody() = default ;
    RetrieveRunResponseBody(const RetrieveRunResponseBody &) = default ;
    RetrieveRunResponseBody(RetrieveRunResponseBody &&) = default ;
    RetrieveRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveRunResponseBody() = default ;
    RetrieveRunResponseBody& operator=(const RetrieveRunResponseBody &) = default ;
    RetrieveRunResponseBody& operator=(RetrieveRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Run : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Run& obj) { 
        DARABONBA_PTR_TO_JSON(cancelledAt, cancelledAt_);
        DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
        DARABONBA_PTR_TO_JSON(createAt, createAt_);
        DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(failedAt, failedAt_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(lastErrorMsg, lastErrorMsg_);
        DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(threadId, threadId_);
      };
      friend void from_json(const Darabonba::Json& j, Run& obj) { 
        DARABONBA_PTR_FROM_JSON(cancelledAt, cancelledAt_);
        DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
        DARABONBA_PTR_FROM_JSON(createAt, createAt_);
        DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(failedAt, failedAt_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(lastErrorMsg, lastErrorMsg_);
        DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      };
      Run() = default ;
      Run(const Run &) = default ;
      Run(Run &&) = default ;
      Run(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Run() = default ;
      Run& operator=(const Run &) = default ;
      Run& operator=(Run &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cancelledAt_ == nullptr
        && this->completedAt_ == nullptr && this->createAt_ == nullptr && this->expiresAt_ == nullptr && this->failedAt_ == nullptr && this->id_ == nullptr
        && this->lastErrorMsg_ == nullptr && this->startedAt_ == nullptr && this->status_ == nullptr && this->threadId_ == nullptr; };
      // cancelledAt Field Functions 
      bool hasCancelledAt() const { return this->cancelledAt_ != nullptr;};
      void deleteCancelledAt() { this->cancelledAt_ = nullptr;};
      inline int64_t getCancelledAt() const { DARABONBA_PTR_GET_DEFAULT(cancelledAt_, 0L) };
      inline Run& setCancelledAt(int64_t cancelledAt) { DARABONBA_PTR_SET_VALUE(cancelledAt_, cancelledAt) };


      // completedAt Field Functions 
      bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
      void deleteCompletedAt() { this->completedAt_ = nullptr;};
      inline int64_t getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, 0L) };
      inline Run& setCompletedAt(int64_t completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


      // createAt Field Functions 
      bool hasCreateAt() const { return this->createAt_ != nullptr;};
      void deleteCreateAt() { this->createAt_ = nullptr;};
      inline int64_t getCreateAt() const { DARABONBA_PTR_GET_DEFAULT(createAt_, 0L) };
      inline Run& setCreateAt(int64_t createAt) { DARABONBA_PTR_SET_VALUE(createAt_, createAt) };


      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline int64_t getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
      inline Run& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // failedAt Field Functions 
      bool hasFailedAt() const { return this->failedAt_ != nullptr;};
      void deleteFailedAt() { this->failedAt_ = nullptr;};
      inline int64_t getFailedAt() const { DARABONBA_PTR_GET_DEFAULT(failedAt_, 0L) };
      inline Run& setFailedAt(int64_t failedAt) { DARABONBA_PTR_SET_VALUE(failedAt_, failedAt) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Run& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastErrorMsg Field Functions 
      bool hasLastErrorMsg() const { return this->lastErrorMsg_ != nullptr;};
      void deleteLastErrorMsg() { this->lastErrorMsg_ = nullptr;};
      inline string getLastErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(lastErrorMsg_, "") };
      inline Run& setLastErrorMsg(string lastErrorMsg) { DARABONBA_PTR_SET_VALUE(lastErrorMsg_, lastErrorMsg) };


      // startedAt Field Functions 
      bool hasStartedAt() const { return this->startedAt_ != nullptr;};
      void deleteStartedAt() { this->startedAt_ = nullptr;};
      inline int64_t getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, 0L) };
      inline Run& setStartedAt(int64_t startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Run& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // threadId Field Functions 
      bool hasThreadId() const { return this->threadId_ != nullptr;};
      void deleteThreadId() { this->threadId_ = nullptr;};
      inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
      inline Run& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    protected:
      shared_ptr<int64_t> cancelledAt_ {};
      shared_ptr<int64_t> completedAt_ {};
      shared_ptr<int64_t> createAt_ {};
      shared_ptr<int64_t> expiresAt_ {};
      shared_ptr<int64_t> failedAt_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> lastErrorMsg_ {};
      shared_ptr<int64_t> startedAt_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> threadId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->run_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetrieveRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // run Field Functions 
    bool hasRun() const { return this->run_ != nullptr;};
    void deleteRun() { this->run_ = nullptr;};
    inline const RetrieveRunResponseBody::Run & getRun() const { DARABONBA_PTR_GET_CONST(run_, RetrieveRunResponseBody::Run) };
    inline RetrieveRunResponseBody::Run getRun() { DARABONBA_PTR_GET(run_, RetrieveRunResponseBody::Run) };
    inline RetrieveRunResponseBody& setRun(const RetrieveRunResponseBody::Run & run) { DARABONBA_PTR_SET_VALUE(run_, run) };
    inline RetrieveRunResponseBody& setRun(RetrieveRunResponseBody::Run && run) { DARABONBA_PTR_SET_RVALUE(run_, run) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<RetrieveRunResponseBody::Run> run_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
