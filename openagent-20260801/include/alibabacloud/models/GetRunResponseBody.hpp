// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class GetRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetRunResponseBody() = default ;
    GetRunResponseBody(const GetRunResponseBody &) = default ;
    GetRunResponseBody(GetRunResponseBody &&) = default ;
    GetRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunResponseBody() = default ;
    GetRunResponseBody& operator=(const GetRunResponseBody &) = default ;
    GetRunResponseBody& operator=(GetRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(outcome, outcome_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(outcome, outcome_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      class Outcome : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outcome& obj) { 
          DARABONBA_PTR_TO_JSON(interrupts, interrupts_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Outcome& obj) { 
          DARABONBA_PTR_FROM_JSON(interrupts, interrupts_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Outcome() = default ;
        Outcome(const Outcome &) = default ;
        Outcome(Outcome &&) = default ;
        Outcome(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outcome() = default ;
        Outcome& operator=(const Outcome &) = default ;
        Outcome& operator=(Outcome &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Interrupts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Interrupts& obj) { 
            DARABONBA_PTR_TO_JSON(data, data_);
            DARABONBA_PTR_TO_JSON(expiresAt, expiresAt_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(message, message_);
            DARABONBA_ANY_TO_JSON(metadata, metadata_);
            DARABONBA_PTR_TO_JSON(reason, reason_);
            DARABONBA_ANY_TO_JSON(responseSchema, responseSchema_);
            DARABONBA_PTR_TO_JSON(toolCallId, toolCallId_);
          };
          friend void from_json(const Darabonba::Json& j, Interrupts& obj) { 
            DARABONBA_PTR_FROM_JSON(data, data_);
            DARABONBA_PTR_FROM_JSON(expiresAt, expiresAt_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(message, message_);
            DARABONBA_ANY_FROM_JSON(metadata, metadata_);
            DARABONBA_PTR_FROM_JSON(reason, reason_);
            DARABONBA_ANY_FROM_JSON(responseSchema, responseSchema_);
            DARABONBA_PTR_FROM_JSON(toolCallId, toolCallId_);
          };
          Interrupts() = default ;
          Interrupts(const Interrupts &) = default ;
          Interrupts(Interrupts &&) = default ;
          Interrupts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Interrupts() = default ;
          Interrupts& operator=(const Interrupts &) = default ;
          Interrupts& operator=(Interrupts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Data : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Data& obj) { 
              DARABONBA_PTR_TO_JSON(apiCalls, apiCalls_);
              DARABONBA_PTR_TO_JSON(approvalId, approvalId_);
              DARABONBA_PTR_TO_JSON(approvalUrl, approvalUrl_);
              DARABONBA_PTR_TO_JSON(cancellable, cancellable_);
              DARABONBA_PTR_TO_JSON(changeDigest, changeDigest_);
              DARABONBA_PTR_TO_JSON(title, title_);
            };
            friend void from_json(const Darabonba::Json& j, Data& obj) { 
              DARABONBA_PTR_FROM_JSON(apiCalls, apiCalls_);
              DARABONBA_PTR_FROM_JSON(approvalId, approvalId_);
              DARABONBA_PTR_FROM_JSON(approvalUrl, approvalUrl_);
              DARABONBA_PTR_FROM_JSON(cancellable, cancellable_);
              DARABONBA_PTR_FROM_JSON(changeDigest, changeDigest_);
              DARABONBA_PTR_FROM_JSON(title, title_);
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
            class ApiCalls : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ApiCalls& obj) { 
                DARABONBA_PTR_TO_JSON(action, action_);
                DARABONBA_PTR_TO_JSON(description, description_);
              };
              friend void from_json(const Darabonba::Json& j, ApiCalls& obj) { 
                DARABONBA_PTR_FROM_JSON(action, action_);
                DARABONBA_PTR_FROM_JSON(description, description_);
              };
              ApiCalls() = default ;
              ApiCalls(const ApiCalls &) = default ;
              ApiCalls(ApiCalls &&) = default ;
              ApiCalls(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ApiCalls() = default ;
              ApiCalls& operator=(const ApiCalls &) = default ;
              ApiCalls& operator=(ApiCalls &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->action_ == nullptr
        && this->description_ == nullptr; };
              // action Field Functions 
              bool hasAction() const { return this->action_ != nullptr;};
              void deleteAction() { this->action_ = nullptr;};
              inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
              inline ApiCalls& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


              // description Field Functions 
              bool hasDescription() const { return this->description_ != nullptr;};
              void deleteDescription() { this->description_ = nullptr;};
              inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
              inline ApiCalls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            protected:
              // The API name.
              shared_ptr<string> action_ {};
              // The operation description.
              shared_ptr<string> description_ {};
            };

            virtual bool empty() const override { return this->apiCalls_ == nullptr
        && this->approvalId_ == nullptr && this->approvalUrl_ == nullptr && this->cancellable_ == nullptr && this->changeDigest_ == nullptr && this->title_ == nullptr; };
            // apiCalls Field Functions 
            bool hasApiCalls() const { return this->apiCalls_ != nullptr;};
            void deleteApiCalls() { this->apiCalls_ = nullptr;};
            inline const vector<Data::ApiCalls> & getApiCalls() const { DARABONBA_PTR_GET_CONST(apiCalls_, vector<Data::ApiCalls>) };
            inline vector<Data::ApiCalls> getApiCalls() { DARABONBA_PTR_GET(apiCalls_, vector<Data::ApiCalls>) };
            inline Data& setApiCalls(const vector<Data::ApiCalls> & apiCalls) { DARABONBA_PTR_SET_VALUE(apiCalls_, apiCalls) };
            inline Data& setApiCalls(vector<Data::ApiCalls> && apiCalls) { DARABONBA_PTR_SET_RVALUE(apiCalls_, apiCalls) };


            // approvalId Field Functions 
            bool hasApprovalId() const { return this->approvalId_ != nullptr;};
            void deleteApprovalId() { this->approvalId_ = nullptr;};
            inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
            inline Data& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


            // approvalUrl Field Functions 
            bool hasApprovalUrl() const { return this->approvalUrl_ != nullptr;};
            void deleteApprovalUrl() { this->approvalUrl_ = nullptr;};
            inline string getApprovalUrl() const { DARABONBA_PTR_GET_DEFAULT(approvalUrl_, "") };
            inline Data& setApprovalUrl(string approvalUrl) { DARABONBA_PTR_SET_VALUE(approvalUrl_, approvalUrl) };


            // cancellable Field Functions 
            bool hasCancellable() const { return this->cancellable_ != nullptr;};
            void deleteCancellable() { this->cancellable_ = nullptr;};
            inline bool getCancellable() const { DARABONBA_PTR_GET_DEFAULT(cancellable_, false) };
            inline Data& setCancellable(bool cancellable) { DARABONBA_PTR_SET_VALUE(cancellable_, cancellable) };


            // changeDigest Field Functions 
            bool hasChangeDigest() const { return this->changeDigest_ != nullptr;};
            void deleteChangeDigest() { this->changeDigest_ = nullptr;};
            inline string getChangeDigest() const { DARABONBA_PTR_GET_DEFAULT(changeDigest_, "") };
            inline Data& setChangeDigest(string changeDigest) { DARABONBA_PTR_SET_VALUE(changeDigest_, changeDigest) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          protected:
            // The list of APIs pending approval.
            shared_ptr<vector<Data::ApiCalls>> apiCalls_ {};
            // The approval ID.
            shared_ptr<string> approvalId_ {};
            // The approval URL.
            shared_ptr<string> approvalUrl_ {};
            // Specifies whether the interrupt can be canceled.
            shared_ptr<bool> cancellable_ {};
            // The change digest.
            shared_ptr<string> changeDigest_ {};
            // The approval title.
            shared_ptr<string> title_ {};
          };

          virtual bool empty() const override { return this->data_ == nullptr
        && this->expiresAt_ == nullptr && this->id_ == nullptr && this->message_ == nullptr && this->metadata_ == nullptr && this->reason_ == nullptr
        && this->responseSchema_ == nullptr && this->toolCallId_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const Interrupts::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Interrupts::Data) };
          inline Interrupts::Data getData() { DARABONBA_PTR_GET(data_, Interrupts::Data) };
          inline Interrupts& setData(const Interrupts::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Interrupts& setData(Interrupts::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // expiresAt Field Functions 
          bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
          void deleteExpiresAt() { this->expiresAt_ = nullptr;};
          inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
          inline Interrupts& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Interrupts& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline Interrupts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // metadata Field Functions 
          bool hasMetadata() const { return this->metadata_ != nullptr;};
          void deleteMetadata() { this->metadata_ = nullptr;};
          inline           const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
          Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
          inline Interrupts& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
          inline Interrupts& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
          inline Interrupts& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


          // responseSchema Field Functions 
          bool hasResponseSchema() const { return this->responseSchema_ != nullptr;};
          void deleteResponseSchema() { this->responseSchema_ = nullptr;};
          inline           const Darabonba::Json & getResponseSchema() const { DARABONBA_GET(responseSchema_) };
          Darabonba::Json & getResponseSchema() { DARABONBA_GET(responseSchema_) };
          inline Interrupts& setResponseSchema(const Darabonba::Json & responseSchema) { DARABONBA_SET_VALUE(responseSchema_, responseSchema) };
          inline Interrupts& setResponseSchema(Darabonba::Json && responseSchema) { DARABONBA_SET_RVALUE(responseSchema_, responseSchema) };


          // toolCallId Field Functions 
          bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
          void deleteToolCallId() { this->toolCallId_ = nullptr;};
          inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
          inline Interrupts& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


        protected:
          // The interrupt data.
          shared_ptr<Interrupts::Data> data_ {};
          // The expiration time of the interrupt, in ISO 8601 format.
          shared_ptr<string> expiresAt_ {};
          // The interrupt ID.
          shared_ptr<string> id_ {};
          // The interrupt prompt.
          shared_ptr<string> message_ {};
          // The extended information.
          Darabonba::Json metadata_ {};
          // The reason for the interrupt: `tool_call` (tool calling requires processing), `input_required` (user input is required), `confirmation` (confirmation is required), or `out_of_band_approval` (waiting for out-of-band approval).
          shared_ptr<string> reason_ {};
          // The JSON Schema that the payload must conform to when resuming the interrupt.
          Darabonba::Json responseSchema_ {};
          // The ID used to invoke the tool calling.
          shared_ptr<string> toolCallId_ {};
        };

        virtual bool empty() const override { return this->interrupts_ == nullptr
        && this->type_ == nullptr; };
        // interrupts Field Functions 
        bool hasInterrupts() const { return this->interrupts_ != nullptr;};
        void deleteInterrupts() { this->interrupts_ = nullptr;};
        inline const vector<Outcome::Interrupts> & getInterrupts() const { DARABONBA_PTR_GET_CONST(interrupts_, vector<Outcome::Interrupts>) };
        inline vector<Outcome::Interrupts> getInterrupts() { DARABONBA_PTR_GET(interrupts_, vector<Outcome::Interrupts>) };
        inline Outcome& setInterrupts(const vector<Outcome::Interrupts> & interrupts) { DARABONBA_PTR_SET_VALUE(interrupts_, interrupts) };
        inline Outcome& setInterrupts(vector<Outcome::Interrupts> && interrupts) { DARABONBA_PTR_SET_RVALUE(interrupts_, interrupts) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Outcome& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of interrupts.
        shared_ptr<vector<Outcome::Interrupts>> interrupts_ {};
        // The outcome type: `success` (completed successfully) or `interrupt` (waiting for interrupt processing).
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->outcome_ == nullptr && this->runId_ == nullptr && this->sessionId_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // outcome Field Functions 
      bool hasOutcome() const { return this->outcome_ != nullptr;};
      void deleteOutcome() { this->outcome_ = nullptr;};
      inline const Data::Outcome & getOutcome() const { DARABONBA_PTR_GET_CONST(outcome_, Data::Outcome) };
      inline Data::Outcome getOutcome() { DARABONBA_PTR_GET(outcome_, Data::Outcome) };
      inline Data& setOutcome(const Data::Outcome & outcome) { DARABONBA_PTR_SET_VALUE(outcome_, outcome) };
      inline Data& setOutcome(Data::Outcome && outcome) { DARABONBA_PTR_SET_RVALUE(outcome_, outcome) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Data& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


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


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The time when the run was created, in ISO 8601 format.
      shared_ptr<string> createdAt_ {};
      // The run outcome.
      shared_ptr<Data::Outcome> outcome_ {};
      // The run ID.
      shared_ptr<string> runId_ {};
      // The session ID.
      shared_ptr<string> sessionId_ {};
      // The run status: `PENDING` (pending execution), `RUNNING` (running), `WAITING_USER` (waiting for interrupt processing), `COMPLETED` (completed), `FAILED` (failed), `CANCELLED` (canceled), or `REJECTED` (rejected).
      shared_ptr<string> status_ {};
      // The time when the run was last updated, in ISO 8601 format.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRunResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRunResponseBody::Data) };
    inline GetRunResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRunResponseBody::Data) };
    inline GetRunResponseBody& setData(const GetRunResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRunResponseBody& setData(GetRunResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRunResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data.
    shared_ptr<GetRunResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
