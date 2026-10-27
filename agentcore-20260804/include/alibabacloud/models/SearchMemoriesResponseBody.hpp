// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEMORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEMORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class SearchMemoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMemoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMemoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    SearchMemoriesResponseBody() = default ;
    SearchMemoriesResponseBody(const SearchMemoriesResponseBody &) = default ;
    SearchMemoriesResponseBody(SearchMemoriesResponseBody &&) = default ;
    SearchMemoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMemoriesResponseBody() = default ;
    SearchMemoriesResponseBody& operator=(const SearchMemoriesResponseBody &) = default ;
    SearchMemoriesResponseBody& operator=(SearchMemoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(memories, memories_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(memories, memories_);
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
      class Memories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Memories& obj) { 
          DARABONBA_PTR_TO_JSON(memory, memory_);
          DARABONBA_PTR_TO_JSON(score, score_);
          DARABONBA_PTR_TO_JSON(similarity, similarity_);
        };
        friend void from_json(const Darabonba::Json& j, Memories& obj) { 
          DARABONBA_PTR_FROM_JSON(memory, memory_);
          DARABONBA_PTR_FROM_JSON(score, score_);
          DARABONBA_PTR_FROM_JSON(similarity, similarity_);
        };
        Memories() = default ;
        Memories(const Memories &) = default ;
        Memories(Memories &&) = default ;
        Memories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Memories() = default ;
        Memories& operator=(const Memories &) = default ;
        Memories& operator=(Memories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Memory : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Memory& obj) { 
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
            DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
            DARABONBA_PTR_TO_JSON(metadata, metadata_);
            DARABONBA_PTR_TO_JSON(scope, scope_);
            DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
          };
          friend void from_json(const Darabonba::Json& j, Memory& obj) { 
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
            DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
            DARABONBA_PTR_FROM_JSON(metadata, metadata_);
            DARABONBA_PTR_FROM_JSON(scope, scope_);
            DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
          };
          Memory() = default ;
          Memory(const Memory &) = default ;
          Memory(Memory &&) = default ;
          Memory(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Memory() = default ;
          Memory& operator=(const Memory &) = default ;
          Memory& operator=(Memory &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Scope : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Scope& obj) { 
              DARABONBA_PTR_TO_JSON(agentId, agentId_);
              DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
              DARABONBA_PTR_TO_JSON(userId, userId_);
            };
            friend void from_json(const Darabonba::Json& j, Scope& obj) { 
              DARABONBA_PTR_FROM_JSON(agentId, agentId_);
              DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
              DARABONBA_PTR_FROM_JSON(userId, userId_);
            };
            Scope() = default ;
            Scope(const Scope &) = default ;
            Scope(Scope &&) = default ;
            Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Scope() = default ;
            Scope& operator=(const Scope &) = default ;
            Scope& operator=(Scope &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->agentId_ == nullptr
        && this->sessionId_ == nullptr && this->userId_ == nullptr; };
            // agentId Field Functions 
            bool hasAgentId() const { return this->agentId_ != nullptr;};
            void deleteAgentId() { this->agentId_ = nullptr;};
            inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
            inline Scope& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


            // sessionId Field Functions 
            bool hasSessionId() const { return this->sessionId_ != nullptr;};
            void deleteSessionId() { this->sessionId_ = nullptr;};
            inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
            inline Scope& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


            // userId Field Functions 
            bool hasUserId() const { return this->userId_ != nullptr;};
            void deleteUserId() { this->userId_ = nullptr;};
            inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
            inline Scope& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          protected:
            // The agent ID. The ID must be 1 to 128 bytes in length and encoded in UTF-8. The ID cannot contain a forward slash (/) or an asterisk (*). If the memory is not associated with an agent ID, this field is not returned.
            shared_ptr<string> agentId_ {};
            // The session ID. The ID must be 1 to 128 bytes in length and encoded in UTF-8. The ID cannot contain a forward slash (/) or an asterisk (*). If the memory is not associated with a session ID, this field is not returned.
            shared_ptr<string> sessionId_ {};
            // The user ID. The ID must be 1 to 128 bytes in length and encoded in UTF-8. The ID cannot contain a forward slash (/) or an asterisk (*). If the memory is not associated with a user ID, this field is not returned.
            shared_ptr<string> userId_ {};
          };

          class Content : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Content& obj) { 
              DARABONBA_PTR_TO_JSON(text, text_);
            };
            friend void from_json(const Darabonba::Json& j, Content& obj) { 
              DARABONBA_PTR_FROM_JSON(text, text_);
            };
            Content() = default ;
            Content(const Content &) = default ;
            Content(Content &&) = default ;
            Content(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Content() = default ;
            Content& operator=(const Content &) = default ;
            Content& operator=(Content &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->text_ == nullptr; };
            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          protected:
            // The memory text.
            shared_ptr<string> text_ {};
          };

          virtual bool empty() const override { return this->content_ == nullptr
        && this->createdAt_ == nullptr && this->memoryId_ == nullptr && this->metadata_ == nullptr && this->scope_ == nullptr && this->updatedAt_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline const Memory::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Memory::Content) };
          inline Memory::Content getContent() { DARABONBA_PTR_GET(content_, Memory::Content) };
          inline Memory& setContent(const Memory::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
          inline Memory& setContent(Memory::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


          // createdAt Field Functions 
          bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
          void deleteCreatedAt() { this->createdAt_ = nullptr;};
          inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
          inline Memory& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


          // memoryId Field Functions 
          bool hasMemoryId() const { return this->memoryId_ != nullptr;};
          void deleteMemoryId() { this->memoryId_ = nullptr;};
          inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
          inline Memory& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


          // metadata Field Functions 
          bool hasMetadata() const { return this->metadata_ != nullptr;};
          void deleteMetadata() { this->metadata_ = nullptr;};
          inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
          inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
          inline Memory& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
          inline Memory& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


          // scope Field Functions 
          bool hasScope() const { return this->scope_ != nullptr;};
          void deleteScope() { this->scope_ = nullptr;};
          inline const Memory::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, Memory::Scope) };
          inline Memory::Scope getScope() { DARABONBA_PTR_GET(scope_, Memory::Scope) };
          inline Memory& setScope(const Memory::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
          inline Memory& setScope(Memory::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


          // updatedAt Field Functions 
          bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
          void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
          inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
          inline Memory& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


        protected:
          // The memory content.
          shared_ptr<Memory::Content> content_ {};
          // The time when the memory was created.
          shared_ptr<string> createdAt_ {};
          // The long-term memory ID.
          shared_ptr<string> memoryId_ {};
          // The memory metadata.
          shared_ptr<map<string, string>> metadata_ {};
          // The memory scope.
          shared_ptr<Memory::Scope> scope_ {};
          // The time when the memory was last updated.
          shared_ptr<string> updatedAt_ {};
        };

        virtual bool empty() const override { return this->memory_ == nullptr
        && this->score_ == nullptr && this->similarity_ == nullptr; };
        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline const Memories::Memory & getMemory() const { DARABONBA_PTR_GET_CONST(memory_, Memories::Memory) };
        inline Memories::Memory getMemory() { DARABONBA_PTR_GET(memory_, Memories::Memory) };
        inline Memories& setMemory(const Memories::Memory & memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };
        inline Memories& setMemory(Memories::Memory && memory) { DARABONBA_PTR_SET_RVALUE(memory_, memory) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Memories& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // similarity Field Functions 
        bool hasSimilarity() const { return this->similarity_ != nullptr;};
        void deleteSimilarity() { this->similarity_ = nullptr;};
        inline float getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, 0.0) };
        inline Memories& setSimilarity(float similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


      protected:
        // The matched memory.
        shared_ptr<Memories::Memory> memory_ {};
        // The relevance score.
        shared_ptr<float> score_ {};
        // The vector similarity.
        shared_ptr<float> similarity_ {};
      };

      virtual bool empty() const override { return this->memories_ == nullptr; };
      // memories Field Functions 
      bool hasMemories() const { return this->memories_ != nullptr;};
      void deleteMemories() { this->memories_ = nullptr;};
      inline const vector<Data::Memories> & getMemories() const { DARABONBA_PTR_GET_CONST(memories_, vector<Data::Memories>) };
      inline vector<Data::Memories> getMemories() { DARABONBA_PTR_GET(memories_, vector<Data::Memories>) };
      inline Data& setMemories(const vector<Data::Memories> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
      inline Data& setMemories(vector<Data::Memories> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


    protected:
      // The list of retrieval results.
      shared_ptr<vector<Data::Memories>> memories_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMemoriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SearchMemoriesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SearchMemoriesResponseBody::Data) };
    inline SearchMemoriesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SearchMemoriesResponseBody::Data) };
    inline SearchMemoriesResponseBody& setData(const SearchMemoriesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SearchMemoriesResponseBody& setData(SearchMemoriesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SearchMemoriesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchMemoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMemoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchMemoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The retrieval results.
    shared_ptr<SearchMemoriesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
