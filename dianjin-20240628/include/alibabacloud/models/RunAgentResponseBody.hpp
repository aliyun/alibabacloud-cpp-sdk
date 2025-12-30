// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, RunAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    RunAgentResponseBody() = default ;
    RunAgentResponseBody(const RunAgentResponseBody &) = default ;
    RunAgentResponseBody(RunAgentResponseBody &&) = default ;
    RunAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAgentResponseBody() = default ;
    RunAgentResponseBody& operator=(const RunAgentResponseBody &) = default ;
    RunAgentResponseBody& operator=(RunAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(functionCallResponses, functionCallResponses_);
        DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(response, response_);
        DARABONBA_PTR_TO_JSON(threadId, threadId_);
        DARABONBA_PTR_TO_JSON(traceId, traceId_);
        DARABONBA_PTR_TO_JSON(versionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(functionCallResponses, functionCallResponses_);
        DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(response, response_);
        DARABONBA_PTR_FROM_JSON(threadId, threadId_);
        DARABONBA_PTR_FROM_JSON(traceId, traceId_);
        DARABONBA_PTR_FROM_JSON(versionId, versionId_);
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
      class Response : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Response& obj) { 
          DARABONBA_PTR_TO_JSON(choices, choices_);
          DARABONBA_PTR_TO_JSON(created, created_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(modelId, modelId_);
          DARABONBA_PTR_TO_JSON(time, time_);
        };
        friend void from_json(const Darabonba::Json& j, Response& obj) { 
          DARABONBA_PTR_FROM_JSON(choices, choices_);
          DARABONBA_PTR_FROM_JSON(created, created_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(modelId, modelId_);
          DARABONBA_PTR_FROM_JSON(time, time_);
        };
        Response() = default ;
        Response(const Response &) = default ;
        Response(Response &&) = default ;
        Response(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Response() = default ;
        Response& operator=(const Response &) = default ;
        Response& operator=(Response &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Choices : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Choices& obj) { 
            DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
            DARABONBA_PTR_TO_JSON(index, index_);
            DARABONBA_PTR_TO_JSON(message, message_);
          };
          friend void from_json(const Darabonba::Json& j, Choices& obj) { 
            DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
            DARABONBA_PTR_FROM_JSON(index, index_);
            DARABONBA_PTR_FROM_JSON(message, message_);
          };
          Choices() = default ;
          Choices(const Choices &) = default ;
          Choices(Choices &&) = default ;
          Choices(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Choices() = default ;
          Choices& operator=(const Choices &) = default ;
          Choices& operator=(Choices &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Message : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Message& obj) { 
              DARABONBA_PTR_TO_JSON(content, content_);
              DARABONBA_PTR_TO_JSON(role, role_);
              DARABONBA_PTR_TO_JSON(roleDisplayName, roleDisplayName_);
            };
            friend void from_json(const Darabonba::Json& j, Message& obj) { 
              DARABONBA_PTR_FROM_JSON(content, content_);
              DARABONBA_PTR_FROM_JSON(role, role_);
              DARABONBA_PTR_FROM_JSON(roleDisplayName, roleDisplayName_);
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
            virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr && this->roleDisplayName_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline Message& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


            // roleDisplayName Field Functions 
            bool hasRoleDisplayName() const { return this->roleDisplayName_ != nullptr;};
            void deleteRoleDisplayName() { this->roleDisplayName_ = nullptr;};
            inline string getRoleDisplayName() const { DARABONBA_PTR_GET_DEFAULT(roleDisplayName_, "") };
            inline Message& setRoleDisplayName(string roleDisplayName) { DARABONBA_PTR_SET_VALUE(roleDisplayName_, roleDisplayName) };


          protected:
            shared_ptr<string> content_ {};
            shared_ptr<string> role_ {};
            shared_ptr<string> roleDisplayName_ {};
          };

          virtual bool empty() const override { return this->finishReason_ == nullptr
        && this->index_ == nullptr && this->message_ == nullptr; };
          // finishReason Field Functions 
          bool hasFinishReason() const { return this->finishReason_ != nullptr;};
          void deleteFinishReason() { this->finishReason_ = nullptr;};
          inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
          inline Choices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
          inline Choices& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline const Choices::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, Choices::Message) };
          inline Choices::Message getMessage() { DARABONBA_PTR_GET(message_, Choices::Message) };
          inline Choices& setMessage(const Choices::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
          inline Choices& setMessage(Choices::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


        protected:
          shared_ptr<string> finishReason_ {};
          shared_ptr<int32_t> index_ {};
          shared_ptr<Choices::Message> message_ {};
        };

        virtual bool empty() const override { return this->choices_ == nullptr
        && this->created_ == nullptr && this->id_ == nullptr && this->modelId_ == nullptr && this->time_ == nullptr; };
        // choices Field Functions 
        bool hasChoices() const { return this->choices_ != nullptr;};
        void deleteChoices() { this->choices_ = nullptr;};
        inline const vector<Response::Choices> & getChoices() const { DARABONBA_PTR_GET_CONST(choices_, vector<Response::Choices>) };
        inline vector<Response::Choices> getChoices() { DARABONBA_PTR_GET(choices_, vector<Response::Choices>) };
        inline Response& setChoices(const vector<Response::Choices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
        inline Response& setChoices(vector<Response::Choices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


        // created Field Functions 
        bool hasCreated() const { return this->created_ != nullptr;};
        void deleteCreated() { this->created_ = nullptr;};
        inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
        inline Response& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Response& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
        inline Response& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Response& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<vector<Response::Choices>> choices_ {};
        shared_ptr<int64_t> created_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> modelId_ {};
        shared_ptr<string> time_ {};
      };

      class FunctionCallResponses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionCallResponses& obj) { 
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(functionArgs, functionArgs_);
          DARABONBA_PTR_TO_JSON(functionName, functionName_);
          DARABONBA_PTR_TO_JSON(result, result_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionCallResponses& obj) { 
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(functionArgs, functionArgs_);
          DARABONBA_PTR_FROM_JSON(functionName, functionName_);
          DARABONBA_PTR_FROM_JSON(result, result_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        FunctionCallResponses() = default ;
        FunctionCallResponses(const FunctionCallResponses &) = default ;
        FunctionCallResponses(FunctionCallResponses &&) = default ;
        FunctionCallResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionCallResponses() = default ;
        FunctionCallResponses& operator=(const FunctionCallResponses &) = default ;
        FunctionCallResponses& operator=(FunctionCallResponses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->endTime_ == nullptr && this->functionArgs_ == nullptr && this->functionName_ == nullptr && this->result_ == nullptr && this->startTime_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline FunctionCallResponses& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline FunctionCallResponses& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // functionArgs Field Functions 
        bool hasFunctionArgs() const { return this->functionArgs_ != nullptr;};
        void deleteFunctionArgs() { this->functionArgs_ = nullptr;};
        inline string getFunctionArgs() const { DARABONBA_PTR_GET_DEFAULT(functionArgs_, "") };
        inline FunctionCallResponses& setFunctionArgs(string functionArgs) { DARABONBA_PTR_SET_VALUE(functionArgs_, functionArgs) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline FunctionCallResponses& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline FunctionCallResponses& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline FunctionCallResponses& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> functionArgs_ {};
        shared_ptr<string> functionName_ {};
        shared_ptr<string> result_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->functionCallResponses_ == nullptr
        && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->response_ == nullptr && this->threadId_ == nullptr && this->traceId_ == nullptr
        && this->versionId_ == nullptr; };
      // functionCallResponses Field Functions 
      bool hasFunctionCallResponses() const { return this->functionCallResponses_ != nullptr;};
      void deleteFunctionCallResponses() { this->functionCallResponses_ = nullptr;};
      inline const vector<Data::FunctionCallResponses> & getFunctionCallResponses() const { DARABONBA_PTR_GET_CONST(functionCallResponses_, vector<Data::FunctionCallResponses>) };
      inline vector<Data::FunctionCallResponses> getFunctionCallResponses() { DARABONBA_PTR_GET(functionCallResponses_, vector<Data::FunctionCallResponses>) };
      inline Data& setFunctionCallResponses(const vector<Data::FunctionCallResponses> & functionCallResponses) { DARABONBA_PTR_SET_VALUE(functionCallResponses_, functionCallResponses) };
      inline Data& setFunctionCallResponses(vector<Data::FunctionCallResponses> && functionCallResponses) { DARABONBA_PTR_SET_RVALUE(functionCallResponses_, functionCallResponses) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
      inline Data& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
      inline Data& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline const Data::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Data::Response) };
      inline Data::Response getResponse() { DARABONBA_PTR_GET(response_, Data::Response) };
      inline Data& setResponse(const Data::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
      inline Data& setResponse(Data::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


      // threadId Field Functions 
      bool hasThreadId() const { return this->threadId_ != nullptr;};
      void deleteThreadId() { this->threadId_ = nullptr;};
      inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
      inline Data& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Data& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline Data& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      shared_ptr<vector<Data::FunctionCallResponses>> functionCallResponses_ {};
      shared_ptr<int32_t> inputTokens_ {};
      shared_ptr<int32_t> outputTokens_ {};
      shared_ptr<Data::Response> response_ {};
      shared_ptr<string> threadId_ {};
      shared_ptr<string> traceId_ {};
      shared_ptr<string> versionId_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline RunAgentResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RunAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RunAgentResponseBody::Data) };
    inline RunAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RunAgentResponseBody::Data) };
    inline RunAgentResponseBody& setData(const RunAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RunAgentResponseBody& setData(RunAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline RunAgentResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline RunAgentResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline RunAgentResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<RunAgentResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
