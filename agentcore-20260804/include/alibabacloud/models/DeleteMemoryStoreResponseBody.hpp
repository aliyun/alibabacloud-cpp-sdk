// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEMORYSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEMORYSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteMemoryStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMemoryStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMemoryStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DeleteMemoryStoreResponseBody() = default ;
    DeleteMemoryStoreResponseBody(const DeleteMemoryStoreResponseBody &) = default ;
    DeleteMemoryStoreResponseBody(DeleteMemoryStoreResponseBody &&) = default ;
    DeleteMemoryStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMemoryStoreResponseBody() = default ;
    DeleteMemoryStoreResponseBody& operator=(const DeleteMemoryStoreResponseBody &) = default ;
    DeleteMemoryStoreResponseBody& operator=(DeleteMemoryStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(extractInstructions, extractInstructions_);
        DARABONBA_PTR_TO_JSON(memoryStoreId, memoryStoreId_);
        DARABONBA_PTR_TO_JSON(memoryStoreName, memoryStoreName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(extractInstructions, extractInstructions_);
        DARABONBA_PTR_FROM_JSON(memoryStoreId, memoryStoreId_);
        DARABONBA_PTR_FROM_JSON(memoryStoreName, memoryStoreName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
        && this->description_ == nullptr && this->extractInstructions_ == nullptr && this->memoryStoreId_ == nullptr && this->memoryStoreName_ == nullptr && this->status_ == nullptr
        && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extractInstructions Field Functions 
      bool hasExtractInstructions() const { return this->extractInstructions_ != nullptr;};
      void deleteExtractInstructions() { this->extractInstructions_ = nullptr;};
      inline string getExtractInstructions() const { DARABONBA_PTR_GET_DEFAULT(extractInstructions_, "") };
      inline Data& setExtractInstructions(string extractInstructions) { DARABONBA_PTR_SET_VALUE(extractInstructions_, extractInstructions) };


      // memoryStoreId Field Functions 
      bool hasMemoryStoreId() const { return this->memoryStoreId_ != nullptr;};
      void deleteMemoryStoreId() { this->memoryStoreId_ = nullptr;};
      inline string getMemoryStoreId() const { DARABONBA_PTR_GET_DEFAULT(memoryStoreId_, "") };
      inline Data& setMemoryStoreId(string memoryStoreId) { DARABONBA_PTR_SET_VALUE(memoryStoreId_, memoryStoreId) };


      // memoryStoreName Field Functions 
      bool hasMemoryStoreName() const { return this->memoryStoreName_ != nullptr;};
      void deleteMemoryStoreName() { this->memoryStoreName_ = nullptr;};
      inline string getMemoryStoreName() const { DARABONBA_PTR_GET_DEFAULT(memoryStoreName_, "") };
      inline Data& setMemoryStoreName(string memoryStoreName) { DARABONBA_PTR_SET_VALUE(memoryStoreName_, memoryStoreName) };


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


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The creation time.
      shared_ptr<string> createdAt_ {};
      // The description of the MemoryStore.
      shared_ptr<string> description_ {};
      // The custom extraction instructions.
      shared_ptr<string> extractInstructions_ {};
      // The MemoryStore ID.
      shared_ptr<string> memoryStoreId_ {};
      // The name of the MemoryStore. It cannot be modified after creation.
      shared_ptr<string> memoryStoreName_ {};
      // The lifecycle state of the MemoryStore.
      shared_ptr<string> status_ {};
      // The last update time.
      shared_ptr<string> updatedAt_ {};
      // The AgentCore workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteMemoryStoreResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteMemoryStoreResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteMemoryStoreResponseBody::Data) };
    inline DeleteMemoryStoreResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteMemoryStoreResponseBody::Data) };
    inline DeleteMemoryStoreResponseBody& setData(const DeleteMemoryStoreResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteMemoryStoreResponseBody& setData(DeleteMemoryStoreResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteMemoryStoreResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteMemoryStoreResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMemoryStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteMemoryStoreResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The MemoryStore details.
    shared_ptr<DeleteMemoryStoreResponseBody::Data> data_ {};
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
