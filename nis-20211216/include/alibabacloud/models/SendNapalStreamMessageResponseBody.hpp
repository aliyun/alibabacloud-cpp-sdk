// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNAPALSTREAMMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDNAPALSTREAMMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class SendNapalStreamMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNapalStreamMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
      DARABONBA_PTR_TO_JSON(TaskArtifactUpdate, taskArtifactUpdate_);
      DARABONBA_PTR_TO_JSON(TaskStatusUpdate, taskStatusUpdate_);
    };
    friend void from_json(const Darabonba::Json& j, SendNapalStreamMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
      DARABONBA_PTR_FROM_JSON(TaskArtifactUpdate, taskArtifactUpdate_);
      DARABONBA_PTR_FROM_JSON(TaskStatusUpdate, taskStatusUpdate_);
    };
    SendNapalStreamMessageResponseBody() = default ;
    SendNapalStreamMessageResponseBody(const SendNapalStreamMessageResponseBody &) = default ;
    SendNapalStreamMessageResponseBody(SendNapalStreamMessageResponseBody &&) = default ;
    SendNapalStreamMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNapalStreamMessageResponseBody() = default ;
    SendNapalStreamMessageResponseBody& operator=(const SendNapalStreamMessageResponseBody &) = default ;
    SendNapalStreamMessageResponseBody& operator=(SendNapalStreamMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskStatusUpdate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskStatusUpdate& obj) { 
        DARABONBA_PTR_TO_JSON(ContextId, contextId_);
        DARABONBA_PTR_TO_JSON(Final, final_);
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskStatusUpdate& obj) { 
        DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
        DARABONBA_PTR_FROM_JSON(Final, final_);
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskStatusUpdate() = default ;
      TaskStatusUpdate(const TaskStatusUpdate &) = default ;
      TaskStatusUpdate(TaskStatusUpdate &&) = default ;
      TaskStatusUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskStatusUpdate() = default ;
      TaskStatusUpdate& operator=(const TaskStatusUpdate &) = default ;
      TaskStatusUpdate& operator=(TaskStatusUpdate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Message : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Message& obj) { 
            DARABONBA_PTR_TO_JSON(MessageId, messageId_);
            DARABONBA_PTR_TO_JSON(Parts, parts_);
            DARABONBA_PTR_TO_JSON(Role, role_);
          };
          friend void from_json(const Darabonba::Json& j, Message& obj) { 
            DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
            DARABONBA_PTR_FROM_JSON(Parts, parts_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
          };
          Message() = default ;
          Message(const Message &) = default ;
          Message(Message &&) = default ;
          Message(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Message() = default ;
          Message& operator=(const Message &) = default ;
          Message& operator=(Message &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Parts : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Parts& obj) { 
              DARABONBA_ANY_TO_JSON(Data, data_);
              DARABONBA_PTR_TO_JSON(Filename, filename_);
              DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
              DARABONBA_PTR_TO_JSON(Raw, raw_);
              DARABONBA_PTR_TO_JSON(Text, text_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Parts& obj) { 
              DARABONBA_ANY_FROM_JSON(Data, data_);
              DARABONBA_PTR_FROM_JSON(Filename, filename_);
              DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
              DARABONBA_PTR_FROM_JSON(Raw, raw_);
              DARABONBA_PTR_FROM_JSON(Text, text_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            Parts() = default ;
            Parts(const Parts &) = default ;
            Parts(Parts &&) = default ;
            Parts(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Parts() = default ;
            Parts& operator=(const Parts &) = default ;
            Parts& operator=(Parts &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->data_ == nullptr
        && this->filename_ == nullptr && this->mediaType_ == nullptr && this->raw_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
            // data Field Functions 
            bool hasData() const { return this->data_ != nullptr;};
            void deleteData() { this->data_ = nullptr;};
            inline             const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
            Darabonba::Json & getData() { DARABONBA_GET(data_) };
            inline Parts& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
            inline Parts& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


            // filename Field Functions 
            bool hasFilename() const { return this->filename_ != nullptr;};
            void deleteFilename() { this->filename_ = nullptr;};
            inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
            inline Parts& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


            // mediaType Field Functions 
            bool hasMediaType() const { return this->mediaType_ != nullptr;};
            void deleteMediaType() { this->mediaType_ = nullptr;};
            inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
            inline Parts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


            // raw Field Functions 
            bool hasRaw() const { return this->raw_ != nullptr;};
            void deleteRaw() { this->raw_ = nullptr;};
            inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
            inline Parts& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Parts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Parts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // Reserved field. This parameter is not returned by the current operation.
            Darabonba::Json data_ {};
            // Reserved field. This parameter is not returned by the current operation.
            shared_ptr<string> filename_ {};
            // Reserved field. This parameter is not returned by the current operation.
            shared_ptr<string> mediaType_ {};
            // Reserved field. This parameter is not returned by the current operation.
            shared_ptr<string> raw_ {};
            // The text content.
            shared_ptr<string> text_ {};
            // Reserved field. This parameter is not returned by the current operation.
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->messageId_ == nullptr
        && this->parts_ == nullptr && this->role_ == nullptr; };
          // messageId Field Functions 
          bool hasMessageId() const { return this->messageId_ != nullptr;};
          void deleteMessageId() { this->messageId_ = nullptr;};
          inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
          inline Message& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


          // parts Field Functions 
          bool hasParts() const { return this->parts_ != nullptr;};
          void deleteParts() { this->parts_ = nullptr;};
          inline const vector<Message::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Message::Parts>) };
          inline vector<Message::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<Message::Parts>) };
          inline Message& setParts(const vector<Message::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
          inline Message& setParts(vector<Message::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        protected:
          // The message ID.
          shared_ptr<string> messageId_ {};
          // The list of message content parts.
          shared_ptr<vector<Message::Parts>> parts_ {};
          // The message role.
          shared_ptr<string> role_ {};
        };

        virtual bool empty() const override { return this->message_ == nullptr
        && this->state_ == nullptr && this->timestamp_ == nullptr; };
        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline const Status::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, Status::Message) };
        inline Status::Message getMessage() { DARABONBA_PTR_GET(message_, Status::Message) };
        inline Status& setMessage(const Status::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
        inline Status& setMessage(Status::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Status& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Status& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The message body object.
        shared_ptr<Status::Message> message_ {};
        // The task status. Valid values:
        // - TASK_STATE_WORKING: The task is running.
        // - TASK_STATE_COMPLETED: The task is completed.
        // - TASK_STATE_FAILED: The task has failed.
        // - TASK_STATE_CANCELED: The task is canceled.
        shared_ptr<string> state_ {};
        // The status timestamp in ISO 8601 format.
        shared_ptr<string> timestamp_ {};
      };

      class Metadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
          DARABONBA_PTR_TO_JSON(Step, step_);
        };
        friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
          DARABONBA_PTR_FROM_JSON(Step, step_);
        };
        Metadata() = default ;
        Metadata(const Metadata &) = default ;
        Metadata(Metadata &&) = default ;
        Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metadata() = default ;
        Metadata& operator=(const Metadata &) = default ;
        Metadata& operator=(Metadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Step : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Step& obj) { 
            DARABONBA_PTR_TO_JSON(CostTime, costTime_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(IsError, isError_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_ANY_TO_JSON(Params, params_);
            DARABONBA_ANY_TO_JSON(Result, result_);
            DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
            DARABONBA_PTR_TO_JSON(UiContent, uiContent_);
          };
          friend void from_json(const Darabonba::Json& j, Step& obj) { 
            DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(IsError, isError_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_ANY_FROM_JSON(Params, params_);
            DARABONBA_ANY_FROM_JSON(Result, result_);
            DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
            DARABONBA_PTR_FROM_JSON(UiContent, uiContent_);
          };
          Step() = default ;
          Step(const Step &) = default ;
          Step(Step &&) = default ;
          Step(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Step() = default ;
          Step& operator=(const Step &) = default ;
          Step& operator=(Step &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->costTime_ == nullptr
        && this->id_ == nullptr && this->isError_ == nullptr && this->name_ == nullptr && this->params_ == nullptr && this->result_ == nullptr
        && this->retryCount_ == nullptr && this->uiContent_ == nullptr; };
          // costTime Field Functions 
          bool hasCostTime() const { return this->costTime_ != nullptr;};
          void deleteCostTime() { this->costTime_ = nullptr;};
          inline int64_t getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0L) };
          inline Step& setCostTime(int64_t costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Step& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // isError Field Functions 
          bool hasIsError() const { return this->isError_ != nullptr;};
          void deleteIsError() { this->isError_ = nullptr;};
          inline bool getIsError() const { DARABONBA_PTR_GET_DEFAULT(isError_, false) };
          inline Step& setIsError(bool isError) { DARABONBA_PTR_SET_VALUE(isError_, isError) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Step& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // params Field Functions 
          bool hasParams() const { return this->params_ != nullptr;};
          void deleteParams() { this->params_ = nullptr;};
          inline           const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
          Darabonba::Json & getParams() { DARABONBA_GET(params_) };
          inline Step& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
          inline Step& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


          // result Field Functions 
          bool hasResult() const { return this->result_ != nullptr;};
          void deleteResult() { this->result_ = nullptr;};
          inline           const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
          Darabonba::Json & getResult() { DARABONBA_GET(result_) };
          inline Step& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
          inline Step& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


          // retryCount Field Functions 
          bool hasRetryCount() const { return this->retryCount_ != nullptr;};
          void deleteRetryCount() { this->retryCount_ = nullptr;};
          inline int64_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0L) };
          inline Step& setRetryCount(int64_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


          // uiContent Field Functions 
          bool hasUiContent() const { return this->uiContent_ != nullptr;};
          void deleteUiContent() { this->uiContent_ = nullptr;};
          inline string getUiContent() const { DARABONBA_PTR_GET_DEFAULT(uiContent_, "") };
          inline Step& setUiContent(string uiContent) { DARABONBA_PTR_SET_VALUE(uiContent_, uiContent) };


        protected:
          // The execution duration of the step. Unit: milliseconds.
          shared_ptr<int64_t> costTime_ {};
          // The unique identifier of the step.
          shared_ptr<string> id_ {};
          // Indicates whether the step encountered an error during execution.
          shared_ptr<bool> isError_ {};
          // The step name.
          shared_ptr<string> name_ {};
          // The input parameters of the step.
          Darabonba::Json params_ {};
          // The execution result of the step.
          Darabonba::Json result_ {};
          // The number of retries.
          shared_ptr<int64_t> retryCount_ {};
          // The content displayed on the frontend.
          shared_ptr<string> uiContent_ {};
        };

        virtual bool empty() const override { return this->step_ == nullptr; };
        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline const Metadata::Step & getStep() const { DARABONBA_PTR_GET_CONST(step_, Metadata::Step) };
        inline Metadata::Step getStep() { DARABONBA_PTR_GET(step_, Metadata::Step) };
        inline Metadata& setStep(const Metadata::Step & step) { DARABONBA_PTR_SET_VALUE(step_, step) };
        inline Metadata& setStep(Metadata::Step && step) { DARABONBA_PTR_SET_RVALUE(step_, step) };


      protected:
        // The step execution information.
        shared_ptr<Metadata::Step> step_ {};
      };

      virtual bool empty() const override { return this->contextId_ == nullptr
        && this->final_ == nullptr && this->metadata_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
      // contextId Field Functions 
      bool hasContextId() const { return this->contextId_ != nullptr;};
      void deleteContextId() { this->contextId_ = nullptr;};
      inline string getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, "") };
      inline TaskStatusUpdate& setContextId(string contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


      // final Field Functions 
      bool hasFinal() const { return this->final_ != nullptr;};
      void deleteFinal() { this->final_ = nullptr;};
      inline bool getFinal() const { DARABONBA_PTR_GET_DEFAULT(final_, false) };
      inline TaskStatusUpdate& setFinal(bool final) { DARABONBA_PTR_SET_VALUE(final_, final) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const TaskStatusUpdate::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, TaskStatusUpdate::Metadata) };
      inline TaskStatusUpdate::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, TaskStatusUpdate::Metadata) };
      inline TaskStatusUpdate& setMetadata(const TaskStatusUpdate::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline TaskStatusUpdate& setMetadata(TaskStatusUpdate::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const TaskStatusUpdate::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, TaskStatusUpdate::Status) };
      inline TaskStatusUpdate::Status getStatus() { DARABONBA_PTR_GET(status_, TaskStatusUpdate::Status) };
      inline TaskStatusUpdate& setStatus(const TaskStatusUpdate::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline TaskStatusUpdate& setStatus(TaskStatusUpdate::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskStatusUpdate& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The session context ID.
      shared_ptr<string> contextId_ {};
      // Indicates whether this is a final event. A value of true indicates that the task has ended (completed or failed) and no more events will be pushed after this.
      shared_ptr<bool> final_ {};
      // The metadata object that contains step execution information.
      shared_ptr<TaskStatusUpdate::Metadata> metadata_ {};
      // The task status object.
      shared_ptr<TaskStatusUpdate::Status> status_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    class TaskArtifactUpdate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskArtifactUpdate& obj) { 
        DARABONBA_PTR_TO_JSON(Append, append_);
        DARABONBA_PTR_TO_JSON(Artifact, artifact_);
        DARABONBA_PTR_TO_JSON(ContextId, contextId_);
        DARABONBA_PTR_TO_JSON(LastChunk, lastChunk_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskArtifactUpdate& obj) { 
        DARABONBA_PTR_FROM_JSON(Append, append_);
        DARABONBA_PTR_FROM_JSON(Artifact, artifact_);
        DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
        DARABONBA_PTR_FROM_JSON(LastChunk, lastChunk_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskArtifactUpdate() = default ;
      TaskArtifactUpdate(const TaskArtifactUpdate &) = default ;
      TaskArtifactUpdate(TaskArtifactUpdate &&) = default ;
      TaskArtifactUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskArtifactUpdate() = default ;
      TaskArtifactUpdate& operator=(const TaskArtifactUpdate &) = default ;
      TaskArtifactUpdate& operator=(TaskArtifactUpdate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Artifact : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Artifact& obj) { 
          DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Extensions, extensions_);
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Parts, parts_);
        };
        friend void from_json(const Darabonba::Json& j, Artifact& obj) { 
          DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Parts, parts_);
        };
        Artifact() = default ;
        Artifact(const Artifact &) = default ;
        Artifact(Artifact &&) = default ;
        Artifact(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Artifact() = default ;
        Artifact& operator=(const Artifact &) = default ;
        Artifact& operator=(Artifact &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parts& obj) { 
            DARABONBA_ANY_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Filename, filename_);
            DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
            DARABONBA_PTR_TO_JSON(Raw, raw_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Parts& obj) { 
            DARABONBA_ANY_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Filename, filename_);
            DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
            DARABONBA_PTR_FROM_JSON(Raw, raw_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Parts() = default ;
          Parts(const Parts &) = default ;
          Parts(Parts &&) = default ;
          Parts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parts() = default ;
          Parts& operator=(const Parts &) = default ;
          Parts& operator=(Parts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->data_ == nullptr
        && this->filename_ == nullptr && this->mediaType_ == nullptr && this->raw_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline           const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
          Darabonba::Json & getData() { DARABONBA_GET(data_) };
          inline Parts& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
          inline Parts& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


          // filename Field Functions 
          bool hasFilename() const { return this->filename_ != nullptr;};
          void deleteFilename() { this->filename_ = nullptr;};
          inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
          inline Parts& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


          // mediaType Field Functions 
          bool hasMediaType() const { return this->mediaType_ != nullptr;};
          void deleteMediaType() { this->mediaType_ = nullptr;};
          inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
          inline Parts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


          // raw Field Functions 
          bool hasRaw() const { return this->raw_ != nullptr;};
          void deleteRaw() { this->raw_ = nullptr;};
          inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
          inline Parts& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Parts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Parts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // Reserved field. This parameter is not returned by the current operation.
          Darabonba::Json data_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> filename_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> mediaType_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> raw_ {};
          // The report text fragment.
          shared_ptr<string> text_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->description_ == nullptr && this->extensions_ == nullptr && this->metadata_ == nullptr && this->name_ == nullptr && this->parts_ == nullptr; };
        // artifactId Field Functions 
        bool hasArtifactId() const { return this->artifactId_ != nullptr;};
        void deleteArtifactId() { this->artifactId_ = nullptr;};
        inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
        inline Artifact& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Artifact& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // extensions Field Functions 
        bool hasExtensions() const { return this->extensions_ != nullptr;};
        void deleteExtensions() { this->extensions_ = nullptr;};
        inline const vector<string> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<string>) };
        inline vector<string> getExtensions() { DARABONBA_PTR_GET(extensions_, vector<string>) };
        inline Artifact& setExtensions(const vector<string> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
        inline Artifact& setExtensions(vector<string> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Artifact& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Artifact& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Artifact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parts Field Functions 
        bool hasParts() const { return this->parts_ != nullptr;};
        void deleteParts() { this->parts_ = nullptr;};
        inline const vector<Artifact::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Artifact::Parts>) };
        inline vector<Artifact::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<Artifact::Parts>) };
        inline Artifact& setParts(const vector<Artifact::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
        inline Artifact& setParts(vector<Artifact::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


      protected:
        // The unique identifier of the artifact.
        shared_ptr<string> artifactId_ {};
        // The description of the artifact.
        shared_ptr<string> description_ {};
        // Reserved field. This parameter is not returned by the current operation.
        shared_ptr<vector<string>> extensions_ {};
        // Reserved field. This parameter is not returned by the current operation.
        Darabonba::Json metadata_ {};
        // The name of the artifact.
        shared_ptr<string> name_ {};
        // The list of content parts.
        shared_ptr<vector<Artifact::Parts>> parts_ {};
      };

      virtual bool empty() const override { return this->append_ == nullptr
        && this->artifact_ == nullptr && this->contextId_ == nullptr && this->lastChunk_ == nullptr && this->taskId_ == nullptr; };
      // append Field Functions 
      bool hasAppend() const { return this->append_ != nullptr;};
      void deleteAppend() { this->append_ = nullptr;};
      inline bool getAppend() const { DARABONBA_PTR_GET_DEFAULT(append_, false) };
      inline TaskArtifactUpdate& setAppend(bool append) { DARABONBA_PTR_SET_VALUE(append_, append) };


      // artifact Field Functions 
      bool hasArtifact() const { return this->artifact_ != nullptr;};
      void deleteArtifact() { this->artifact_ = nullptr;};
      inline const TaskArtifactUpdate::Artifact & getArtifact() const { DARABONBA_PTR_GET_CONST(artifact_, TaskArtifactUpdate::Artifact) };
      inline TaskArtifactUpdate::Artifact getArtifact() { DARABONBA_PTR_GET(artifact_, TaskArtifactUpdate::Artifact) };
      inline TaskArtifactUpdate& setArtifact(const TaskArtifactUpdate::Artifact & artifact) { DARABONBA_PTR_SET_VALUE(artifact_, artifact) };
      inline TaskArtifactUpdate& setArtifact(TaskArtifactUpdate::Artifact && artifact) { DARABONBA_PTR_SET_RVALUE(artifact_, artifact) };


      // contextId Field Functions 
      bool hasContextId() const { return this->contextId_ != nullptr;};
      void deleteContextId() { this->contextId_ = nullptr;};
      inline string getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, "") };
      inline TaskArtifactUpdate& setContextId(string contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


      // lastChunk Field Functions 
      bool hasLastChunk() const { return this->lastChunk_ != nullptr;};
      void deleteLastChunk() { this->lastChunk_ = nullptr;};
      inline bool getLastChunk() const { DARABONBA_PTR_GET_DEFAULT(lastChunk_, false) };
      inline TaskArtifactUpdate& setLastChunk(bool lastChunk) { DARABONBA_PTR_SET_VALUE(lastChunk_, lastChunk) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskArtifactUpdate& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // Indicates whether the content is appended. A value of `true` indicates that the current Text is appended to the end of the existing report content. A value of `false` indicates that the existing content is overwritten.
      shared_ptr<bool> append_ {};
      // The artifact object.
      shared_ptr<TaskArtifactUpdate::Artifact> artifact_ {};
      // The session context ID.
      shared_ptr<string> contextId_ {};
      // Indicates whether this is the last chunk. A value of `true` indicates that the report content has been fully pushed and no more events will follow.
      shared_ptr<bool> lastChunk_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(Artifacts, artifacts_);
        DARABONBA_PTR_TO_JSON(ContextId, contextId_);
        DARABONBA_PTR_TO_JSON(History, history_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(Artifacts, artifacts_);
        DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
        DARABONBA_PTR_FROM_JSON(History, history_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Message : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Message& obj) { 
            DARABONBA_PTR_TO_JSON(MessageId, messageId_);
            DARABONBA_PTR_TO_JSON(Parts, parts_);
            DARABONBA_PTR_TO_JSON(Role, role_);
          };
          friend void from_json(const Darabonba::Json& j, Message& obj) { 
            DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
            DARABONBA_PTR_FROM_JSON(Parts, parts_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
          };
          Message() = default ;
          Message(const Message &) = default ;
          Message(Message &&) = default ;
          Message(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Message() = default ;
          Message& operator=(const Message &) = default ;
          Message& operator=(Message &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Parts : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Parts& obj) { 
              DARABONBA_ANY_TO_JSON(Data, data_);
              DARABONBA_PTR_TO_JSON(Filename, filename_);
              DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
              DARABONBA_PTR_TO_JSON(Raw, raw_);
              DARABONBA_PTR_TO_JSON(Text, text_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, Parts& obj) { 
              DARABONBA_ANY_FROM_JSON(Data, data_);
              DARABONBA_PTR_FROM_JSON(Filename, filename_);
              DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
              DARABONBA_PTR_FROM_JSON(Raw, raw_);
              DARABONBA_PTR_FROM_JSON(Text, text_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            Parts() = default ;
            Parts(const Parts &) = default ;
            Parts(Parts &&) = default ;
            Parts(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Parts() = default ;
            Parts& operator=(const Parts &) = default ;
            Parts& operator=(Parts &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->data_ == nullptr
        && this->filename_ == nullptr && this->mediaType_ == nullptr && this->raw_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
            // data Field Functions 
            bool hasData() const { return this->data_ != nullptr;};
            void deleteData() { this->data_ = nullptr;};
            inline             const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
            Darabonba::Json & getData() { DARABONBA_GET(data_) };
            inline Parts& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
            inline Parts& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


            // filename Field Functions 
            bool hasFilename() const { return this->filename_ != nullptr;};
            void deleteFilename() { this->filename_ = nullptr;};
            inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
            inline Parts& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


            // mediaType Field Functions 
            bool hasMediaType() const { return this->mediaType_ != nullptr;};
            void deleteMediaType() { this->mediaType_ = nullptr;};
            inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
            inline Parts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


            // raw Field Functions 
            bool hasRaw() const { return this->raw_ != nullptr;};
            void deleteRaw() { this->raw_ = nullptr;};
            inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
            inline Parts& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Parts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Parts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // Reserved field. This parameter is not returned by the current operation.
            Darabonba::Json data_ {};
            // Reserved field. This parameter is not returned by the current operation.
            shared_ptr<string> filename_ {};
            // Reserved field. This parameter is not returned by the current operation.
            shared_ptr<string> mediaType_ {};
            // Reserved field. This parameter is not returned by the current operation.
            shared_ptr<string> raw_ {};
            // The text content. The natural language instruction entered by the user, such as a diagnostic request or question consultation.
            shared_ptr<string> text_ {};
            // Reserved field. This parameter is not returned by the current operation.
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->messageId_ == nullptr
        && this->parts_ == nullptr && this->role_ == nullptr; };
          // messageId Field Functions 
          bool hasMessageId() const { return this->messageId_ != nullptr;};
          void deleteMessageId() { this->messageId_ = nullptr;};
          inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
          inline Message& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


          // parts Field Functions 
          bool hasParts() const { return this->parts_ != nullptr;};
          void deleteParts() { this->parts_ = nullptr;};
          inline const vector<Message::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Message::Parts>) };
          inline vector<Message::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<Message::Parts>) };
          inline Message& setParts(const vector<Message::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
          inline Message& setParts(vector<Message::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        protected:
          // The message ID.
          shared_ptr<string> messageId_ {};
          // The list of message content parts.
          shared_ptr<vector<Message::Parts>> parts_ {};
          // The message role.
          shared_ptr<string> role_ {};
        };

        virtual bool empty() const override { return this->message_ == nullptr
        && this->state_ == nullptr && this->timestamp_ == nullptr; };
        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline const Status::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, Status::Message) };
        inline Status::Message getMessage() { DARABONBA_PTR_GET(message_, Status::Message) };
        inline Status& setMessage(const Status::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
        inline Status& setMessage(Status::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Status& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline Status& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The message object defined by the A2A protocol. It contains the sender role, one or more content parts, and optional session and task context. When returned as a top-level field, it indicates a direct reply from the agent and is mutually exclusive with Task, TaskStatusUpdate, and TaskArtifactUpdate. The stream closes immediately after this message is returned. When returned as Status.Message, it represents a descriptive message associated with the task status. This API does not currently return a top-level Message. This field is reserved for protocol compatibility only.
        shared_ptr<Status::Message> message_ {};
        // The task state. Valid values:
        // - TASK_STATE_SUBMITTED: The task has been submitted.
        // - TASK_STATE_WORKING: The task is being executed.
        // - TASK_STATE_COMPLETED: The task has been completed.
        // - TASK_STATE_FAILED: The task has failed.
        shared_ptr<string> state_ {};
        // The status timestamp in ISO 8601 format.
        shared_ptr<string> timestamp_ {};
      };

      class History : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const History& obj) { 
          DARABONBA_PTR_TO_JSON(ContextId, contextId_);
          DARABONBA_PTR_TO_JSON(Extensions, extensions_);
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(Parts, parts_);
          DARABONBA_PTR_TO_JSON(ReferenceTaskIds, referenceTaskIds_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, History& obj) { 
          DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
          DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(Parts, parts_);
          DARABONBA_PTR_FROM_JSON(ReferenceTaskIds, referenceTaskIds_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        History() = default ;
        History(const History &) = default ;
        History(History &&) = default ;
        History(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~History() = default ;
        History& operator=(const History &) = default ;
        History& operator=(History &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parts& obj) { 
            DARABONBA_ANY_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Filename, filename_);
            DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
            DARABONBA_PTR_TO_JSON(Raw, raw_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Parts& obj) { 
            DARABONBA_ANY_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Filename, filename_);
            DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
            DARABONBA_PTR_FROM_JSON(Raw, raw_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Parts() = default ;
          Parts(const Parts &) = default ;
          Parts(Parts &&) = default ;
          Parts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parts() = default ;
          Parts& operator=(const Parts &) = default ;
          Parts& operator=(Parts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->data_ == nullptr
        && this->filename_ == nullptr && this->mediaType_ == nullptr && this->raw_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline           const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
          Darabonba::Json & getData() { DARABONBA_GET(data_) };
          inline Parts& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
          inline Parts& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


          // filename Field Functions 
          bool hasFilename() const { return this->filename_ != nullptr;};
          void deleteFilename() { this->filename_ = nullptr;};
          inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
          inline Parts& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


          // mediaType Field Functions 
          bool hasMediaType() const { return this->mediaType_ != nullptr;};
          void deleteMediaType() { this->mediaType_ = nullptr;};
          inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
          inline Parts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


          // raw Field Functions 
          bool hasRaw() const { return this->raw_ != nullptr;};
          void deleteRaw() { this->raw_ = nullptr;};
          inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
          inline Parts& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Parts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Parts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // Reserved field. This parameter is not returned by the current operation.
          Darabonba::Json data_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> filename_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> mediaType_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> raw_ {};
          // The text content.
          shared_ptr<string> text_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->contextId_ == nullptr
        && this->extensions_ == nullptr && this->messageId_ == nullptr && this->metadata_ == nullptr && this->parts_ == nullptr && this->referenceTaskIds_ == nullptr
        && this->role_ == nullptr && this->taskId_ == nullptr; };
        // contextId Field Functions 
        bool hasContextId() const { return this->contextId_ != nullptr;};
        void deleteContextId() { this->contextId_ = nullptr;};
        inline string getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, "") };
        inline History& setContextId(string contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


        // extensions Field Functions 
        bool hasExtensions() const { return this->extensions_ != nullptr;};
        void deleteExtensions() { this->extensions_ = nullptr;};
        inline const vector<string> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<string>) };
        inline vector<string> getExtensions() { DARABONBA_PTR_GET(extensions_, vector<string>) };
        inline History& setExtensions(const vector<string> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
        inline History& setExtensions(vector<string> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline History& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline History& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline History& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // parts Field Functions 
        bool hasParts() const { return this->parts_ != nullptr;};
        void deleteParts() { this->parts_ = nullptr;};
        inline const vector<History::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<History::Parts>) };
        inline vector<History::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<History::Parts>) };
        inline History& setParts(const vector<History::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
        inline History& setParts(vector<History::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


        // referenceTaskIds Field Functions 
        bool hasReferenceTaskIds() const { return this->referenceTaskIds_ != nullptr;};
        void deleteReferenceTaskIds() { this->referenceTaskIds_ = nullptr;};
        inline const vector<string> & getReferenceTaskIds() const { DARABONBA_PTR_GET_CONST(referenceTaskIds_, vector<string>) };
        inline vector<string> getReferenceTaskIds() { DARABONBA_PTR_GET(referenceTaskIds_, vector<string>) };
        inline History& setReferenceTaskIds(const vector<string> & referenceTaskIds) { DARABONBA_PTR_SET_VALUE(referenceTaskIds_, referenceTaskIds) };
        inline History& setReferenceTaskIds(vector<string> && referenceTaskIds) { DARABONBA_PTR_SET_RVALUE(referenceTaskIds_, referenceTaskIds) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline History& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline History& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // The session context ID.
        shared_ptr<string> contextId_ {};
        // Reserved field. This parameter is not returned by the current operation.
        shared_ptr<vector<string>> extensions_ {};
        // The message ID.
        shared_ptr<string> messageId_ {};
        // Reserved field. This parameter is not returned by the current operation.
        Darabonba::Json metadata_ {};
        // The list of message content parts.
        shared_ptr<vector<History::Parts>> parts_ {};
        // Reserved field. This parameter is not returned by the current operation.
        shared_ptr<vector<string>> referenceTaskIds_ {};
        // The message role.
        shared_ptr<string> role_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
      };

      class Artifacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
          DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Extensions, extensions_);
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Parts, parts_);
        };
        friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
          DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Parts, parts_);
        };
        Artifacts() = default ;
        Artifacts(const Artifacts &) = default ;
        Artifacts(Artifacts &&) = default ;
        Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Artifacts() = default ;
        Artifacts& operator=(const Artifacts &) = default ;
        Artifacts& operator=(Artifacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parts& obj) { 
            DARABONBA_ANY_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Filename, filename_);
            DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
            DARABONBA_PTR_TO_JSON(Raw, raw_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Parts& obj) { 
            DARABONBA_ANY_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Filename, filename_);
            DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
            DARABONBA_PTR_FROM_JSON(Raw, raw_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Parts() = default ;
          Parts(const Parts &) = default ;
          Parts(Parts &&) = default ;
          Parts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parts() = default ;
          Parts& operator=(const Parts &) = default ;
          Parts& operator=(Parts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->data_ == nullptr
        && this->filename_ == nullptr && this->mediaType_ == nullptr && this->raw_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline           const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
          Darabonba::Json & getData() { DARABONBA_GET(data_) };
          inline Parts& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
          inline Parts& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


          // filename Field Functions 
          bool hasFilename() const { return this->filename_ != nullptr;};
          void deleteFilename() { this->filename_ = nullptr;};
          inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
          inline Parts& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


          // mediaType Field Functions 
          bool hasMediaType() const { return this->mediaType_ != nullptr;};
          void deleteMediaType() { this->mediaType_ = nullptr;};
          inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
          inline Parts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


          // raw Field Functions 
          bool hasRaw() const { return this->raw_ != nullptr;};
          void deleteRaw() { this->raw_ = nullptr;};
          inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
          inline Parts& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Parts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Parts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // Reserved field. This parameter is not returned by the current operation.
          Darabonba::Json data_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> filename_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> mediaType_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> raw_ {};
          // The report text fragment.
          shared_ptr<string> text_ {};
          // Reserved field. This parameter is not returned by the current operation.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->description_ == nullptr && this->extensions_ == nullptr && this->metadata_ == nullptr && this->name_ == nullptr && this->parts_ == nullptr; };
        // artifactId Field Functions 
        bool hasArtifactId() const { return this->artifactId_ != nullptr;};
        void deleteArtifactId() { this->artifactId_ = nullptr;};
        inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
        inline Artifacts& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Artifacts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // extensions Field Functions 
        bool hasExtensions() const { return this->extensions_ != nullptr;};
        void deleteExtensions() { this->extensions_ = nullptr;};
        inline const vector<string> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<string>) };
        inline vector<string> getExtensions() { DARABONBA_PTR_GET(extensions_, vector<string>) };
        inline Artifacts& setExtensions(const vector<string> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
        inline Artifacts& setExtensions(vector<string> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Artifacts& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Artifacts& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Artifacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parts Field Functions 
        bool hasParts() const { return this->parts_ != nullptr;};
        void deleteParts() { this->parts_ = nullptr;};
        inline const vector<Artifacts::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Artifacts::Parts>) };
        inline vector<Artifacts::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<Artifacts::Parts>) };
        inline Artifacts& setParts(const vector<Artifacts::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
        inline Artifacts& setParts(vector<Artifacts::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


      protected:
        // The unique identifier of the artifact.
        shared_ptr<string> artifactId_ {};
        // The description of the artifact.
        shared_ptr<string> description_ {};
        // Reserved field. This parameter is not returned by the current operation.
        shared_ptr<vector<string>> extensions_ {};
        // Reserved field. This parameter is not returned by the current operation.
        Darabonba::Json metadata_ {};
        // The name of the artifact.
        shared_ptr<string> name_ {};
        // The list of content parts.
        shared_ptr<vector<Artifacts::Parts>> parts_ {};
      };

      virtual bool empty() const override { return this->artifacts_ == nullptr
        && this->contextId_ == nullptr && this->history_ == nullptr && this->id_ == nullptr && this->metadata_ == nullptr && this->status_ == nullptr; };
      // artifacts Field Functions 
      bool hasArtifacts() const { return this->artifacts_ != nullptr;};
      void deleteArtifacts() { this->artifacts_ = nullptr;};
      inline const vector<Task::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<Task::Artifacts>) };
      inline vector<Task::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<Task::Artifacts>) };
      inline Task& setArtifacts(const vector<Task::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
      inline Task& setArtifacts(vector<Task::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


      // contextId Field Functions 
      bool hasContextId() const { return this->contextId_ != nullptr;};
      void deleteContextId() { this->contextId_ = nullptr;};
      inline string getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, "") };
      inline Task& setContextId(string contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


      // history Field Functions 
      bool hasHistory() const { return this->history_ != nullptr;};
      void deleteHistory() { this->history_ = nullptr;};
      inline const vector<Task::History> & getHistory() const { DARABONBA_PTR_GET_CONST(history_, vector<Task::History>) };
      inline vector<Task::History> getHistory() { DARABONBA_PTR_GET(history_, vector<Task::History>) };
      inline Task& setHistory(const vector<Task::History> & history) { DARABONBA_PTR_SET_VALUE(history_, history) };
      inline Task& setHistory(vector<Task::History> && history) { DARABONBA_PTR_SET_RVALUE(history_, history) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Task& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Task& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Task& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const Task::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, Task::Status) };
      inline Task::Status getStatus() { DARABONBA_PTR_GET(status_, Task::Status) };
      inline Task& setStatus(const Task::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Task& setStatus(Task::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    protected:
      // The list of task artifacts.
      shared_ptr<vector<Task::Artifacts>> artifacts_ {};
      // The session context ID. Used to maintain context continuity in multi-turn conversations.
      shared_ptr<string> contextId_ {};
      // The list of historical messages.
      shared_ptr<vector<Task::History>> history_ {};
      // The task ID.
      shared_ptr<string> id_ {};
      // The extended metadata, used to pass additional context information.
      Darabonba::Json metadata_ {};
      // The task status object.
      shared_ptr<Task::Status> status_ {};
    };

    class Message : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Message& obj) { 
        DARABONBA_PTR_TO_JSON(ContextId, contextId_);
        DARABONBA_PTR_TO_JSON(Extensions, extensions_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(Parts, parts_);
        DARABONBA_PTR_TO_JSON(ReferenceTaskIds, referenceTaskIds_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Message& obj) { 
        DARABONBA_PTR_FROM_JSON(ContextId, contextId_);
        DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(Parts, parts_);
        DARABONBA_PTR_FROM_JSON(ReferenceTaskIds, referenceTaskIds_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Message() = default ;
      Message(const Message &) = default ;
      Message(Message &&) = default ;
      Message(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Message() = default ;
      Message& operator=(const Message &) = default ;
      Message& operator=(Message &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Parts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parts& obj) { 
          DARABONBA_ANY_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Filename, filename_);
          DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
          DARABONBA_PTR_TO_JSON(Raw, raw_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Parts& obj) { 
          DARABONBA_ANY_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Filename, filename_);
          DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
          DARABONBA_PTR_FROM_JSON(Raw, raw_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Parts() = default ;
        Parts(const Parts &) = default ;
        Parts(Parts &&) = default ;
        Parts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parts() = default ;
        Parts& operator=(const Parts &) = default ;
        Parts& operator=(Parts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->filename_ == nullptr && this->mediaType_ == nullptr && this->raw_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline         const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
        Darabonba::Json & getData() { DARABONBA_GET(data_) };
        inline Parts& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
        inline Parts& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


        // filename Field Functions 
        bool hasFilename() const { return this->filename_ != nullptr;};
        void deleteFilename() { this->filename_ = nullptr;};
        inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
        inline Parts& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


        // mediaType Field Functions 
        bool hasMediaType() const { return this->mediaType_ != nullptr;};
        void deleteMediaType() { this->mediaType_ = nullptr;};
        inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
        inline Parts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


        // raw Field Functions 
        bool hasRaw() const { return this->raw_ != nullptr;};
        void deleteRaw() { this->raw_ = nullptr;};
        inline string getRaw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
        inline Parts& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Parts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Parts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // Reserved field. This parameter is not returned by the current operation.
        Darabonba::Json data_ {};
        // Reserved field. This parameter is not returned by the current operation.
        shared_ptr<string> filename_ {};
        // Reserved field. This parameter is not returned by the current operation.
        shared_ptr<string> mediaType_ {};
        // Reserved field. This parameter is not returned by the current operation.
        shared_ptr<string> raw_ {};
        // The text content.
        shared_ptr<string> text_ {};
        // Reserved field. This parameter is not returned by the current operation.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->contextId_ == nullptr
        && this->extensions_ == nullptr && this->messageId_ == nullptr && this->metadata_ == nullptr && this->parts_ == nullptr && this->referenceTaskIds_ == nullptr
        && this->role_ == nullptr && this->taskId_ == nullptr; };
      // contextId Field Functions 
      bool hasContextId() const { return this->contextId_ != nullptr;};
      void deleteContextId() { this->contextId_ = nullptr;};
      inline string getContextId() const { DARABONBA_PTR_GET_DEFAULT(contextId_, "") };
      inline Message& setContextId(string contextId) { DARABONBA_PTR_SET_VALUE(contextId_, contextId) };


      // extensions Field Functions 
      bool hasExtensions() const { return this->extensions_ != nullptr;};
      void deleteExtensions() { this->extensions_ = nullptr;};
      inline const vector<string> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<string>) };
      inline vector<string> getExtensions() { DARABONBA_PTR_GET(extensions_, vector<string>) };
      inline Message& setExtensions(const vector<string> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
      inline Message& setExtensions(vector<string> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Message& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Message& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Message& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // parts Field Functions 
      bool hasParts() const { return this->parts_ != nullptr;};
      void deleteParts() { this->parts_ = nullptr;};
      inline const vector<Message::Parts> & getParts() const { DARABONBA_PTR_GET_CONST(parts_, vector<Message::Parts>) };
      inline vector<Message::Parts> getParts() { DARABONBA_PTR_GET(parts_, vector<Message::Parts>) };
      inline Message& setParts(const vector<Message::Parts> & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
      inline Message& setParts(vector<Message::Parts> && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


      // referenceTaskIds Field Functions 
      bool hasReferenceTaskIds() const { return this->referenceTaskIds_ != nullptr;};
      void deleteReferenceTaskIds() { this->referenceTaskIds_ = nullptr;};
      inline const vector<string> & getReferenceTaskIds() const { DARABONBA_PTR_GET_CONST(referenceTaskIds_, vector<string>) };
      inline vector<string> getReferenceTaskIds() { DARABONBA_PTR_GET(referenceTaskIds_, vector<string>) };
      inline Message& setReferenceTaskIds(const vector<string> & referenceTaskIds) { DARABONBA_PTR_SET_VALUE(referenceTaskIds_, referenceTaskIds) };
      inline Message& setReferenceTaskIds(vector<string> && referenceTaskIds) { DARABONBA_PTR_SET_RVALUE(referenceTaskIds_, referenceTaskIds) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Message& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The session context ID.
      shared_ptr<string> contextId_ {};
      // Reserved field. This parameter is not returned by the current operation.
      shared_ptr<vector<string>> extensions_ {};
      // The message ID.
      shared_ptr<string> messageId_ {};
      // Reserved field. This parameter is not returned by the current operation.
      Darabonba::Json metadata_ {};
      // The list of message content parts.
      shared_ptr<vector<Message::Parts>> parts_ {};
      // Reserved field. This parameter is not returned by the current operation.
      shared_ptr<vector<string>> referenceTaskIds_ {};
      // The message role.
      shared_ptr<string> role_ {};
      // Reserved field. A directly returned Message does not create a task, so this field is empty. This API does not currently return a top-level Message.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->task_ == nullptr && this->taskArtifactUpdate_ == nullptr && this->taskStatusUpdate_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const SendNapalStreamMessageResponseBody::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, SendNapalStreamMessageResponseBody::Message) };
    inline SendNapalStreamMessageResponseBody::Message getMessage() { DARABONBA_PTR_GET(message_, SendNapalStreamMessageResponseBody::Message) };
    inline SendNapalStreamMessageResponseBody& setMessage(const SendNapalStreamMessageResponseBody::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline SendNapalStreamMessageResponseBody& setMessage(SendNapalStreamMessageResponseBody::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendNapalStreamMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const SendNapalStreamMessageResponseBody::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, SendNapalStreamMessageResponseBody::Task) };
    inline SendNapalStreamMessageResponseBody::Task getTask() { DARABONBA_PTR_GET(task_, SendNapalStreamMessageResponseBody::Task) };
    inline SendNapalStreamMessageResponseBody& setTask(const SendNapalStreamMessageResponseBody::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline SendNapalStreamMessageResponseBody& setTask(SendNapalStreamMessageResponseBody::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


    // taskArtifactUpdate Field Functions 
    bool hasTaskArtifactUpdate() const { return this->taskArtifactUpdate_ != nullptr;};
    void deleteTaskArtifactUpdate() { this->taskArtifactUpdate_ = nullptr;};
    inline const SendNapalStreamMessageResponseBody::TaskArtifactUpdate & getTaskArtifactUpdate() const { DARABONBA_PTR_GET_CONST(taskArtifactUpdate_, SendNapalStreamMessageResponseBody::TaskArtifactUpdate) };
    inline SendNapalStreamMessageResponseBody::TaskArtifactUpdate getTaskArtifactUpdate() { DARABONBA_PTR_GET(taskArtifactUpdate_, SendNapalStreamMessageResponseBody::TaskArtifactUpdate) };
    inline SendNapalStreamMessageResponseBody& setTaskArtifactUpdate(const SendNapalStreamMessageResponseBody::TaskArtifactUpdate & taskArtifactUpdate) { DARABONBA_PTR_SET_VALUE(taskArtifactUpdate_, taskArtifactUpdate) };
    inline SendNapalStreamMessageResponseBody& setTaskArtifactUpdate(SendNapalStreamMessageResponseBody::TaskArtifactUpdate && taskArtifactUpdate) { DARABONBA_PTR_SET_RVALUE(taskArtifactUpdate_, taskArtifactUpdate) };


    // taskStatusUpdate Field Functions 
    bool hasTaskStatusUpdate() const { return this->taskStatusUpdate_ != nullptr;};
    void deleteTaskStatusUpdate() { this->taskStatusUpdate_ = nullptr;};
    inline const SendNapalStreamMessageResponseBody::TaskStatusUpdate & getTaskStatusUpdate() const { DARABONBA_PTR_GET_CONST(taskStatusUpdate_, SendNapalStreamMessageResponseBody::TaskStatusUpdate) };
    inline SendNapalStreamMessageResponseBody::TaskStatusUpdate getTaskStatusUpdate() { DARABONBA_PTR_GET(taskStatusUpdate_, SendNapalStreamMessageResponseBody::TaskStatusUpdate) };
    inline SendNapalStreamMessageResponseBody& setTaskStatusUpdate(const SendNapalStreamMessageResponseBody::TaskStatusUpdate & taskStatusUpdate) { DARABONBA_PTR_SET_VALUE(taskStatusUpdate_, taskStatusUpdate) };
    inline SendNapalStreamMessageResponseBody& setTaskStatusUpdate(SendNapalStreamMessageResponseBody::TaskStatusUpdate && taskStatusUpdate) { DARABONBA_PTR_SET_RVALUE(taskStatusUpdate_, taskStatusUpdate) };


  protected:
    // This field is mutually exclusive with Task, TaskStatusUpdate, and TaskArtifactUpdate. When this field is returned, no task is created, and the stream closes after sending one Message. This API does not currently return this type. This field is reserved for protocol compatibility only.
    shared_ptr<SendNapalStreamMessageResponseBody::Message> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The task information.
    shared_ptr<SendNapalStreamMessageResponseBody::Task> task_ {};
    // The task artifact update object.
    shared_ptr<SendNapalStreamMessageResponseBody::TaskArtifactUpdate> taskArtifactUpdate_ {};
    // The task status update object.
    shared_ptr<SendNapalStreamMessageResponseBody::TaskStatusUpdate> taskStatusUpdate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
