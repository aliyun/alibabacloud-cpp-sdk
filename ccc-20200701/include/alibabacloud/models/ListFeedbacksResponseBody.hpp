// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEEDBACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEEDBACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFeedbacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeedbacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeedbacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFeedbacksResponseBody() = default ;
    ListFeedbacksResponseBody(const ListFeedbacksResponseBody &) = default ;
    ListFeedbacksResponseBody(ListFeedbacksResponseBody &&) = default ;
    ListFeedbacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeedbacksResponseBody() = default ;
    ListFeedbacksResponseBody& operator=(const ListFeedbacksResponseBody &) = default ;
    ListFeedbacksResponseBody& operator=(ListFeedbacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(UserRating, userRating_);
        DARABONBA_PTR_TO_JSON(UserResponse, userResponse_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(UserRating, userRating_);
        DARABONBA_PTR_FROM_JSON(UserResponse, userResponse_);
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
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->instanceId_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr && this->userRating_ == nullptr && this->userResponse_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Data& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // userRating Field Functions 
      bool hasUserRating() const { return this->userRating_ != nullptr;};
      void deleteUserRating() { this->userRating_ = nullptr;};
      inline int32_t getUserRating() const { DARABONBA_PTR_GET_DEFAULT(userRating_, 0) };
      inline Data& setUserRating(int32_t userRating) { DARABONBA_PTR_SET_VALUE(userRating_, userRating) };


      // userResponse Field Functions 
      bool hasUserResponse() const { return this->userResponse_ != nullptr;};
      void deleteUserResponse() { this->userResponse_ = nullptr;};
      inline string getUserResponse() const { DARABONBA_PTR_GET_DEFAULT(userResponse_, "") };
      inline Data& setUserResponse(string userResponse) { DARABONBA_PTR_SET_VALUE(userResponse_, userResponse) };


    protected:
      shared_ptr<string> contactId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskName_ {};
      shared_ptr<int32_t> userRating_ {};
      shared_ptr<string> userResponse_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFeedbacksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListFeedbacksResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListFeedbacksResponseBody::Data>) };
    inline vector<ListFeedbacksResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListFeedbacksResponseBody::Data>) };
    inline ListFeedbacksResponseBody& setData(const vector<ListFeedbacksResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFeedbacksResponseBody& setData(vector<ListFeedbacksResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListFeedbacksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFeedbacksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeedbacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListFeedbacksResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
