// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class StartJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallIds, callIds_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallIds, callIds_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    StartJobResponseBody() = default ;
    StartJobResponseBody(const StartJobResponseBody &) = default ;
    StartJobResponseBody(StartJobResponseBody &&) = default ;
    StartJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobResponseBody() = default ;
    StartJobResponseBody& operator=(const StartJobResponseBody &) = default ;
    StartJobResponseBody& operator=(StartJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskIds& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TaskIds& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TaskIds() = default ;
      TaskIds(const TaskIds &) = default ;
      TaskIds(TaskIds &&) = default ;
      TaskIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskIds() = default ;
      TaskIds& operator=(const TaskIds &) = default ;
      TaskIds& operator=(TaskIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TaskIds& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TaskIds& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class CallIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CallIds& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CallIds& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      CallIds() = default ;
      CallIds(const CallIds &) = default ;
      CallIds(CallIds &&) = default ;
      CallIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CallIds() = default ;
      CallIds& operator=(const CallIds &) = default ;
      CallIds& operator=(CallIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline CallIds& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CallIds& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->callIds_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->taskIds_ == nullptr; };
    // callIds Field Functions 
    bool hasCallIds() const { return this->callIds_ != nullptr;};
    void deleteCallIds() { this->callIds_ = nullptr;};
    inline const vector<StartJobResponseBody::CallIds> & getCallIds() const { DARABONBA_PTR_GET_CONST(callIds_, vector<StartJobResponseBody::CallIds>) };
    inline vector<StartJobResponseBody::CallIds> getCallIds() { DARABONBA_PTR_GET(callIds_, vector<StartJobResponseBody::CallIds>) };
    inline StartJobResponseBody& setCallIds(const vector<StartJobResponseBody::CallIds> & callIds) { DARABONBA_PTR_SET_VALUE(callIds_, callIds) };
    inline StartJobResponseBody& setCallIds(vector<StartJobResponseBody::CallIds> && callIds) { DARABONBA_PTR_SET_RVALUE(callIds_, callIds) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StartJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline StartJobResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StartJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StartJobResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<StartJobResponseBody::TaskIds> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<StartJobResponseBody::TaskIds>) };
    inline vector<StartJobResponseBody::TaskIds> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<StartJobResponseBody::TaskIds>) };
    inline StartJobResponseBody& setTaskIds(const vector<StartJobResponseBody::TaskIds> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline StartJobResponseBody& setTaskIds(vector<StartJobResponseBody::TaskIds> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    shared_ptr<vector<StartJobResponseBody::CallIds>> callIds_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<StartJobResponseBody::TaskIds>> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
