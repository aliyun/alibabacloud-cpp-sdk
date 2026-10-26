// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROJECTNOTIFYRECEIVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROJECTNOTIFYRECEIVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteProjectNotifyReceiversResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProjectNotifyReceiversResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProjectNotifyReceiversResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DeleteProjectNotifyReceiversResponseBody() = default ;
    DeleteProjectNotifyReceiversResponseBody(const DeleteProjectNotifyReceiversResponseBody &) = default ;
    DeleteProjectNotifyReceiversResponseBody(DeleteProjectNotifyReceiversResponseBody &&) = default ;
    DeleteProjectNotifyReceiversResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProjectNotifyReceiversResponseBody() = default ;
    DeleteProjectNotifyReceiversResponseBody& operator=(const DeleteProjectNotifyReceiversResponseBody &) = default ;
    DeleteProjectNotifyReceiversResponseBody& operator=(DeleteProjectNotifyReceiversResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->receiverId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // receiverId Field Functions 
      bool hasReceiverId() const { return this->receiverId_ != nullptr;};
      void deleteReceiverId() { this->receiverId_ = nullptr;};
      inline string getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
      inline Results& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    protected:
      // The error code.
      shared_ptr<string> code_ {};
      // The result message.
      shared_ptr<string> message_ {};
      // The ID of the notification recipient.
      shared_ptr<string> receiverId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteProjectNotifyReceiversResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DeleteProjectNotifyReceiversResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DeleteProjectNotifyReceiversResponseBody::Results>) };
    inline vector<DeleteProjectNotifyReceiversResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DeleteProjectNotifyReceiversResponseBody::Results>) };
    inline DeleteProjectNotifyReceiversResponseBody& setResults(const vector<DeleteProjectNotifyReceiversResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DeleteProjectNotifyReceiversResponseBody& setResults(vector<DeleteProjectNotifyReceiversResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // The results of the API call.
    shared_ptr<vector<DeleteProjectNotifyReceiversResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
