// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetMemoryHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    GetMemoryHistoryResponseBody() = default ;
    GetMemoryHistoryResponseBody(const GetMemoryHistoryResponseBody &) = default ;
    GetMemoryHistoryResponseBody(GetMemoryHistoryResponseBody &&) = default ;
    GetMemoryHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryHistoryResponseBody() = default ;
    GetMemoryHistoryResponseBody& operator=(const GetMemoryHistoryResponseBody &) = default ;
    GetMemoryHistoryResponseBody& operator=(GetMemoryHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(event, event_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(input, input_);
        DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
        DARABONBA_ANY_TO_JSON(metadata, metadata_);
        DARABONBA_PTR_TO_JSON(newMemory, newMemory_);
        DARABONBA_PTR_TO_JSON(oldMemory, oldMemory_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(event, event_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(input, input_);
        DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
        DARABONBA_ANY_FROM_JSON(metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(newMemory, newMemory_);
        DARABONBA_PTR_FROM_JSON(oldMemory, oldMemory_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(role, role_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(role, role_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
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
        inline Input& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Input& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // Message content.
        shared_ptr<string> content_ {};
        // Message sender role.
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->event_ == nullptr && this->id_ == nullptr && this->input_ == nullptr && this->memoryId_ == nullptr && this->metadata_ == nullptr
        && this->newMemory_ == nullptr && this->oldMemory_ == nullptr && this->updatedAt_ == nullptr && this->userId_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Results& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline Results& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Results& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const vector<Results::Input> & getInput() const { DARABONBA_PTR_GET_CONST(input_, vector<Results::Input>) };
      inline vector<Results::Input> getInput() { DARABONBA_PTR_GET(input_, vector<Results::Input>) };
      inline Results& setInput(const vector<Results::Input> & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline Results& setInput(vector<Results::Input> && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // memoryId Field Functions 
      bool hasMemoryId() const { return this->memoryId_ != nullptr;};
      void deleteMemoryId() { this->memoryId_ = nullptr;};
      inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
      inline Results& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline Results& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline Results& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


      // newMemory Field Functions 
      bool hasNewMemory() const { return this->newMemory_ != nullptr;};
      void deleteNewMemory() { this->newMemory_ = nullptr;};
      inline string getNewMemory() const { DARABONBA_PTR_GET_DEFAULT(newMemory_, "") };
      inline Results& setNewMemory(string newMemory) { DARABONBA_PTR_SET_VALUE(newMemory_, newMemory) };


      // oldMemory Field Functions 
      bool hasOldMemory() const { return this->oldMemory_ != nullptr;};
      void deleteOldMemory() { this->oldMemory_ = nullptr;};
      inline string getOldMemory() const { DARABONBA_PTR_GET_DEFAULT(oldMemory_, "") };
      inline Results& setOldMemory(string oldMemory) { DARABONBA_PTR_SET_VALUE(oldMemory_, oldMemory) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Results& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Results& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // Creation time.
      shared_ptr<string> createdAt_ {};
      // Event type.
      shared_ptr<string> event_ {};
      // Memory ID.
      shared_ptr<string> id_ {};
      // Original message.
      shared_ptr<vector<Results::Input>> input_ {};
      // Memory ID.
      shared_ptr<string> memoryId_ {};
      // Metadata.
      Darabonba::Json metadata_ {};
      // New memory.
      shared_ptr<string> newMemory_ {};
      // Old memory.
      shared_ptr<string> oldMemory_ {};
      // Update time.
      shared_ptr<string> updatedAt_ {};
      // User ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMemoryHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<GetMemoryHistoryResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<GetMemoryHistoryResponseBody::Results>) };
    inline vector<GetMemoryHistoryResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<GetMemoryHistoryResponseBody::Results>) };
    inline GetMemoryHistoryResponseBody& setResults(const vector<GetMemoryHistoryResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetMemoryHistoryResponseBody& setResults(vector<GetMemoryHistoryResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return value.
    shared_ptr<vector<GetMemoryHistoryResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
