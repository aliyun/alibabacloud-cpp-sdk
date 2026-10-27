// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEMORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDMEMORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class AddMemoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMemoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddMemoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    AddMemoriesResponseBody() = default ;
    AddMemoriesResponseBody(const AddMemoriesResponseBody &) = default ;
    AddMemoriesResponseBody(AddMemoriesResponseBody &&) = default ;
    AddMemoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMemoriesResponseBody() = default ;
    AddMemoriesResponseBody& operator=(const AddMemoriesResponseBody &) = default ;
    AddMemoriesResponseBody& operator=(AddMemoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(memories, memories_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(memories, memories_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
          DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
        };
        friend void from_json(const Darabonba::Json& j, Memories& obj) { 
          DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
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
        virtual bool empty() const override { return this->memoryId_ == nullptr; };
        // memoryId Field Functions 
        bool hasMemoryId() const { return this->memoryId_ != nullptr;};
        void deleteMemoryId() { this->memoryId_ = nullptr;};
        inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
        inline Memories& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


      protected:
        // The ID of the long-term memory.
        shared_ptr<string> memoryId_ {};
      };

      virtual bool empty() const override { return this->memories_ == nullptr
        && this->taskId_ == nullptr; };
      // memories Field Functions 
      bool hasMemories() const { return this->memories_ != nullptr;};
      void deleteMemories() { this->memories_ = nullptr;};
      inline const vector<Data::Memories> & getMemories() const { DARABONBA_PTR_GET_CONST(memories_, vector<Data::Memories>) };
      inline vector<Data::Memories> getMemories() { DARABONBA_PTR_GET(memories_, vector<Data::Memories>) };
      inline Data& setMemories(const vector<Data::Memories> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
      inline Data& setMemories(vector<Data::Memories> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The memory references returned only when sync is set to true. An empty array is allowed. This parameter is not returned together with taskId.
      shared_ptr<vector<Data::Memories>> memories_ {};
      // The ID of the task returned only when sync is set to false. This parameter is not returned together with memories.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddMemoriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddMemoriesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddMemoriesResponseBody::Data) };
    inline AddMemoriesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddMemoriesResponseBody::Data) };
    inline AddMemoriesResponseBody& setData(const AddMemoriesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddMemoriesResponseBody& setData(AddMemoriesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddMemoriesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddMemoriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMemoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddMemoriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The result of the write operation.
    shared_ptr<AddMemoriesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
