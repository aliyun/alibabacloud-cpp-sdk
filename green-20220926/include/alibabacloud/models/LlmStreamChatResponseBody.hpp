// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class LlmStreamChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmStreamChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Choices, choices_);
      DARABONBA_PTR_TO_JSON(Created, created_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemFingerprint, systemFingerprint_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, LlmStreamChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Choices, choices_);
      DARABONBA_PTR_FROM_JSON(Created, created_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemFingerprint, systemFingerprint_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    LlmStreamChatResponseBody() = default ;
    LlmStreamChatResponseBody(const LlmStreamChatResponseBody &) = default ;
    LlmStreamChatResponseBody(LlmStreamChatResponseBody &&) = default ;
    LlmStreamChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmStreamChatResponseBody() = default ;
    LlmStreamChatResponseBody& operator=(const LlmStreamChatResponseBody &) = default ;
    LlmStreamChatResponseBody& operator=(LlmStreamChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Error : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Error& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Param, param_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Error& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Param, param_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Error() = default ;
      Error(const Error &) = default ;
      Error(Error &&) = default ;
      Error(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Error() = default ;
      Error& operator=(const Error &) = default ;
      Error& operator=(Error &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->param_ == nullptr && this->type_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Error& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
      inline Error& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Error& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Error code
      shared_ptr<string> code_ {};
      // Error message
      shared_ptr<string> message_ {};
      // Parameter that caused the error
      shared_ptr<string> param_ {};
      // Error type
      shared_ptr<string> type_ {};
    };

    class Choices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Choices& obj) { 
        DARABONBA_PTR_TO_JSON(Delta, delta_);
        DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Logprobs, logprobs_);
      };
      friend void from_json(const Darabonba::Json& j, Choices& obj) { 
        DARABONBA_PTR_FROM_JSON(Delta, delta_);
        DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Logprobs, logprobs_);
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
      class Delta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Delta& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, Delta& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        Delta() = default ;
        Delta(const Delta &) = default ;
        Delta(Delta &&) = default ;
        Delta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Delta() = default ;
        Delta& operator=(const Delta &) = default ;
        Delta& operator=(Delta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Delta& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Delta& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // Real-time generated text content
        shared_ptr<string> content_ {};
        // Role identifier
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->delta_ == nullptr
        && this->finishReason_ == nullptr && this->index_ == nullptr && this->logprobs_ == nullptr; };
      // delta Field Functions 
      bool hasDelta() const { return this->delta_ != nullptr;};
      void deleteDelta() { this->delta_ = nullptr;};
      inline const Choices::Delta & getDelta() const { DARABONBA_PTR_GET_CONST(delta_, Choices::Delta) };
      inline Choices::Delta getDelta() { DARABONBA_PTR_GET(delta_, Choices::Delta) };
      inline Choices& setDelta(const Choices::Delta & delta) { DARABONBA_PTR_SET_VALUE(delta_, delta) };
      inline Choices& setDelta(Choices::Delta && delta) { DARABONBA_PTR_SET_RVALUE(delta_, delta) };


      // finishReason Field Functions 
      bool hasFinishReason() const { return this->finishReason_ != nullptr;};
      void deleteFinishReason() { this->finishReason_ = nullptr;};
      inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
      inline Choices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline Choices& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // logprobs Field Functions 
      bool hasLogprobs() const { return this->logprobs_ != nullptr;};
      void deleteLogprobs() { this->logprobs_ = nullptr;};
      inline string getLogprobs() const { DARABONBA_PTR_GET_DEFAULT(logprobs_, "") };
      inline Choices& setLogprobs(string logprobs) { DARABONBA_PTR_SET_VALUE(logprobs_, logprobs) };


    protected:
      // Incremental content object
      shared_ptr<Choices::Delta> delta_ {};
      // For streaming output, it is null while generating and becomes \\"stop\\" if the generation ends due to a stop token.
      shared_ptr<string> finishReason_ {};
      // Stream sequence number
      shared_ptr<int64_t> index_ {};
      // Token probability information
      shared_ptr<string> logprobs_ {};
    };

    virtual bool empty() const override { return this->choices_ == nullptr
        && this->created_ == nullptr && this->error_ == nullptr && this->id_ == nullptr && this->model_ == nullptr && this->object_ == nullptr
        && this->requestId_ == nullptr && this->systemFingerprint_ == nullptr && this->usage_ == nullptr; };
    // choices Field Functions 
    bool hasChoices() const { return this->choices_ != nullptr;};
    void deleteChoices() { this->choices_ = nullptr;};
    inline const vector<LlmStreamChatResponseBody::Choices> & getChoices() const { DARABONBA_PTR_GET_CONST(choices_, vector<LlmStreamChatResponseBody::Choices>) };
    inline vector<LlmStreamChatResponseBody::Choices> getChoices() { DARABONBA_PTR_GET(choices_, vector<LlmStreamChatResponseBody::Choices>) };
    inline LlmStreamChatResponseBody& setChoices(const vector<LlmStreamChatResponseBody::Choices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
    inline LlmStreamChatResponseBody& setChoices(vector<LlmStreamChatResponseBody::Choices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
    inline LlmStreamChatResponseBody& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const LlmStreamChatResponseBody::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, LlmStreamChatResponseBody::Error) };
    inline LlmStreamChatResponseBody::Error getError() { DARABONBA_PTR_GET(error_, LlmStreamChatResponseBody::Error) };
    inline LlmStreamChatResponseBody& setError(const LlmStreamChatResponseBody::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline LlmStreamChatResponseBody& setError(LlmStreamChatResponseBody::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline LlmStreamChatResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline LlmStreamChatResponseBody& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline LlmStreamChatResponseBody& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LlmStreamChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemFingerprint Field Functions 
    bool hasSystemFingerprint() const { return this->systemFingerprint_ != nullptr;};
    void deleteSystemFingerprint() { this->systemFingerprint_ = nullptr;};
    inline string getSystemFingerprint() const { DARABONBA_PTR_GET_DEFAULT(systemFingerprint_, "") };
    inline LlmStreamChatResponseBody& setSystemFingerprint(string systemFingerprint) { DARABONBA_PTR_SET_VALUE(systemFingerprint_, systemFingerprint) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline LlmStreamChatResponseBody& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // List of model generation results
    shared_ptr<vector<LlmStreamChatResponseBody::Choices>> choices_ {};
    // Timestamp of session creation
    shared_ptr<int64_t> created_ {};
    // Streaming response error information content
    shared_ptr<LlmStreamChatResponseBody::Error> error_ {};
    // Unique ID for this session
    shared_ptr<string> id_ {};
    // Model identifier
    shared_ptr<string> model_ {};
    // Response type
    shared_ptr<string> object_ {};
    // Unique request ID
    shared_ptr<string> requestId_ {};
    // System fingerprint
    shared_ptr<string> systemFingerprint_ {};
    // Token usage
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
