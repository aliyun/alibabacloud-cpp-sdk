// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class UpdateSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateSessionResponseBody() = default ;
    UpdateSessionResponseBody(const UpdateSessionResponseBody &) = default ;
    UpdateSessionResponseBody(UpdateSessionResponseBody &&) = default ;
    UpdateSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSessionResponseBody() = default ;
    UpdateSessionResponseBody& operator=(const UpdateSessionResponseBody &) = default ;
    UpdateSessionResponseBody& operator=(UpdateSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(lastRunId, lastRunId_);
        DARABONBA_PTR_TO_JSON(lastRunStatus, lastRunStatus_);
        DARABONBA_PTR_TO_JSON(pinned, pinned_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(lastRunId, lastRunId_);
        DARABONBA_PTR_FROM_JSON(lastRunStatus, lastRunStatus_);
        DARABONBA_PTR_FROM_JSON(pinned, pinned_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->lastRunId_ == nullptr && this->lastRunStatus_ == nullptr && this->pinned_ == nullptr && this->sessionId_ == nullptr && this->status_ == nullptr
        && this->title_ == nullptr && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // lastRunId Field Functions 
      bool hasLastRunId() const { return this->lastRunId_ != nullptr;};
      void deleteLastRunId() { this->lastRunId_ = nullptr;};
      inline string getLastRunId() const { DARABONBA_PTR_GET_DEFAULT(lastRunId_, "") };
      inline Data& setLastRunId(string lastRunId) { DARABONBA_PTR_SET_VALUE(lastRunId_, lastRunId) };


      // lastRunStatus Field Functions 
      bool hasLastRunStatus() const { return this->lastRunStatus_ != nullptr;};
      void deleteLastRunStatus() { this->lastRunStatus_ = nullptr;};
      inline string getLastRunStatus() const { DARABONBA_PTR_GET_DEFAULT(lastRunStatus_, "") };
      inline Data& setLastRunStatus(string lastRunStatus) { DARABONBA_PTR_SET_VALUE(lastRunStatus_, lastRunStatus) };


      // pinned Field Functions 
      bool hasPinned() const { return this->pinned_ != nullptr;};
      void deletePinned() { this->pinned_ = nullptr;};
      inline bool getPinned() const { DARABONBA_PTR_GET_DEFAULT(pinned_, false) };
      inline Data& setPinned(bool pinned) { DARABONBA_PTR_SET_VALUE(pinned_, pinned) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The time when the session was created, in RFC 3339 format.
      shared_ptr<string> createdAt_ {};
      // The ID of the last run.
      shared_ptr<string> lastRunId_ {};
      // The status of the last run. Valid values:
      // - `PENDING`: Pending.
      // - `RUNNING`: Running.
      // - `WAITING_USER`: Waiting for interrupt handling.
      // - `COMPLETED`: Completed.
      // - `FAILED`: Failed.
      // - `CANCELLED`: Cancelled.
      // - `REJECTED`: Rejected.
      shared_ptr<string> lastRunStatus_ {};
      // Indicates whether the session is pinned.
      shared_ptr<bool> pinned_ {};
      // The session ID.
      shared_ptr<string> sessionId_ {};
      // The session status. Valid values:
      // - `IDLE`: Idle.
      // - `ACTIVE`: Active.
      // - `WAITING_USER_INPUT`: Waiting for user input.
      // - `WAITING_APPROVAL`: Waiting for user confirmation.
      // - `WAITING_OUT_OF_BAND_APPROVAL`: Waiting for out-of-band approval.
      // - `CLOSED`: Closed.
      shared_ptr<string> status_ {};
      // The session title.
      shared_ptr<string> title_ {};
      // The time when the session was last updated, in RFC 3339 format.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateSessionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateSessionResponseBody::Data) };
    inline UpdateSessionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateSessionResponseBody::Data) };
    inline UpdateSessionResponseBody& setData(const UpdateSessionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateSessionResponseBody& setData(UpdateSessionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The session information.
    shared_ptr<UpdateSessionResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of true indicates success.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
