// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEKNOWLEDGEBASEADMINISTRATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEKNOWLEDGEBASEADMINISTRATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RemoveKnowledgeBaseAdministratorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveKnowledgeBaseAdministratorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveKnowledgeBaseAdministratorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RemoveKnowledgeBaseAdministratorResponseBody() = default ;
    RemoveKnowledgeBaseAdministratorResponseBody(const RemoveKnowledgeBaseAdministratorResponseBody &) = default ;
    RemoveKnowledgeBaseAdministratorResponseBody(RemoveKnowledgeBaseAdministratorResponseBody &&) = default ;
    RemoveKnowledgeBaseAdministratorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveKnowledgeBaseAdministratorResponseBody() = default ;
    RemoveKnowledgeBaseAdministratorResponseBody& operator=(const RemoveKnowledgeBaseAdministratorResponseBody &) = default ;
    RemoveKnowledgeBaseAdministratorResponseBody& operator=(RemoveKnowledgeBaseAdministratorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        && this->userId_ == nullptr; };
      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Data& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The stable ID of the associated knowledge base.
      shared_ptr<string> knowledgeBaseId_ {};
      // The DataWorks user ID of the administrator.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RemoveKnowledgeBaseAdministratorResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RemoveKnowledgeBaseAdministratorResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RemoveKnowledgeBaseAdministratorResponseBody::Data) };
    inline RemoveKnowledgeBaseAdministratorResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RemoveKnowledgeBaseAdministratorResponseBody::Data) };
    inline RemoveKnowledgeBaseAdministratorResponseBody& setData(const RemoveKnowledgeBaseAdministratorResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RemoveKnowledgeBaseAdministratorResponseBody& setData(RemoveKnowledgeBaseAdministratorResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RemoveKnowledgeBaseAdministratorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveKnowledgeBaseAdministratorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RemoveKnowledgeBaseAdministratorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code, which is used to determine the error type when the request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<RemoveKnowledgeBaseAdministratorResponseBody::Data> data_ {};
    // The error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
