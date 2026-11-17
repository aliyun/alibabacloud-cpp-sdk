// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKNOWLEDGEOBJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEKNOWLEDGEOBJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteKnowledgeObjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKnowledgeObjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKnowledgeObjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteKnowledgeObjectResponseBody() = default ;
    DeleteKnowledgeObjectResponseBody(const DeleteKnowledgeObjectResponseBody &) = default ;
    DeleteKnowledgeObjectResponseBody(DeleteKnowledgeObjectResponseBody &&) = default ;
    DeleteKnowledgeObjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKnowledgeObjectResponseBody() = default ;
    DeleteKnowledgeObjectResponseBody& operator=(const DeleteKnowledgeObjectResponseBody &) = default ;
    DeleteKnowledgeObjectResponseBody& operator=(DeleteKnowledgeObjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(KnowledgeObjectId, knowledgeObjectId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(KnowledgeObjectId, knowledgeObjectId_);
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
      virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->knowledgeObjectId_ == nullptr; };
      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Data& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // knowledgeObjectId Field Functions 
      bool hasKnowledgeObjectId() const { return this->knowledgeObjectId_ != nullptr;};
      void deleteKnowledgeObjectId() { this->knowledgeObjectId_ = nullptr;};
      inline string getKnowledgeObjectId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeObjectId_, "") };
      inline Data& setKnowledgeObjectId(string knowledgeObjectId) { DARABONBA_PTR_SET_VALUE(knowledgeObjectId_, knowledgeObjectId) };


    protected:
      // The ID of the knowledge base to which the object belongs.
      shared_ptr<string> knowledgeBaseId_ {};
      // The ID of the knowledge object. For semantic models, use the model ID from the semantic layer. For documents, use the stable ID from the local document table. Callers must treat the ID as opaque and must not use a retrieval ID in its place.
      shared_ptr<string> knowledgeObjectId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteKnowledgeObjectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteKnowledgeObjectResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteKnowledgeObjectResponseBody::Data) };
    inline DeleteKnowledgeObjectResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteKnowledgeObjectResponseBody::Data) };
    inline DeleteKnowledgeObjectResponseBody& setData(const DeleteKnowledgeObjectResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteKnowledgeObjectResponseBody& setData(DeleteKnowledgeObjectResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteKnowledgeObjectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteKnowledgeObjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteKnowledgeObjectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code, which is used to determine the error type when the request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<DeleteKnowledgeObjectResponseBody::Data> data_ {};
    // The security error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique ID of the request, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
