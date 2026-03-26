// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateMemoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateMemoryResponseBody() = default ;
    CreateMemoryResponseBody(const CreateMemoryResponseBody &) = default ;
    CreateMemoryResponseBody(CreateMemoryResponseBody &&) = default ;
    CreateMemoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryResponseBody() = default ;
    CreateMemoryResponseBody& operator=(const CreateMemoryResponseBody &) = default ;
    CreateMemoryResponseBody& operator=(CreateMemoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MemoryNodes, memoryNodes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MemoryNodes, memoryNodes_);
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
      class MemoryNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemoryNodes& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Event, event_);
          DARABONBA_PTR_TO_JSON(MemoryNodeId, memoryNodeId_);
          DARABONBA_PTR_TO_JSON(OldContent, oldContent_);
        };
        friend void from_json(const Darabonba::Json& j, MemoryNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Event, event_);
          DARABONBA_PTR_FROM_JSON(MemoryNodeId, memoryNodeId_);
          DARABONBA_PTR_FROM_JSON(OldContent, oldContent_);
        };
        MemoryNodes() = default ;
        MemoryNodes(const MemoryNodes &) = default ;
        MemoryNodes(MemoryNodes &&) = default ;
        MemoryNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemoryNodes() = default ;
        MemoryNodes& operator=(const MemoryNodes &) = default ;
        MemoryNodes& operator=(MemoryNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->event_ == nullptr && this->memoryNodeId_ == nullptr && this->oldContent_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline MemoryNodes& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // event Field Functions 
        bool hasEvent() const { return this->event_ != nullptr;};
        void deleteEvent() { this->event_ = nullptr;};
        inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
        inline MemoryNodes& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


        // memoryNodeId Field Functions 
        bool hasMemoryNodeId() const { return this->memoryNodeId_ != nullptr;};
        void deleteMemoryNodeId() { this->memoryNodeId_ = nullptr;};
        inline string getMemoryNodeId() const { DARABONBA_PTR_GET_DEFAULT(memoryNodeId_, "") };
        inline MemoryNodes& setMemoryNodeId(string memoryNodeId) { DARABONBA_PTR_SET_VALUE(memoryNodeId_, memoryNodeId) };


        // oldContent Field Functions 
        bool hasOldContent() const { return this->oldContent_ != nullptr;};
        void deleteOldContent() { this->oldContent_ = nullptr;};
        inline string getOldContent() const { DARABONBA_PTR_GET_DEFAULT(oldContent_, "") };
        inline MemoryNodes& setOldContent(string oldContent) { DARABONBA_PTR_SET_VALUE(oldContent_, oldContent) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> event_ {};
        shared_ptr<string> memoryNodeId_ {};
        shared_ptr<string> oldContent_ {};
      };

      virtual bool empty() const override { return this->memoryNodes_ == nullptr; };
      // memoryNodes Field Functions 
      bool hasMemoryNodes() const { return this->memoryNodes_ != nullptr;};
      void deleteMemoryNodes() { this->memoryNodes_ = nullptr;};
      inline const vector<Data::MemoryNodes> & getMemoryNodes() const { DARABONBA_PTR_GET_CONST(memoryNodes_, vector<Data::MemoryNodes>) };
      inline vector<Data::MemoryNodes> getMemoryNodes() { DARABONBA_PTR_GET(memoryNodes_, vector<Data::MemoryNodes>) };
      inline Data& setMemoryNodes(const vector<Data::MemoryNodes> & memoryNodes) { DARABONBA_PTR_SET_VALUE(memoryNodes_, memoryNodes) };
      inline Data& setMemoryNodes(vector<Data::MemoryNodes> && memoryNodes) { DARABONBA_PTR_SET_RVALUE(memoryNodes_, memoryNodes) };


    protected:
      shared_ptr<vector<Data::MemoryNodes>> memoryNodes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateMemoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateMemoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateMemoryResponseBody::Data) };
    inline CreateMemoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateMemoryResponseBody::Data) };
    inline CreateMemoryResponseBody& setData(const CreateMemoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMemoryResponseBody& setData(CreateMemoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateMemoryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateMemoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMemoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateMemoryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateMemoryResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
