// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHRCINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHRCINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AttachRCInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachRCInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Responses, responses_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachRCInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Responses, responses_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    AttachRCInstancesResponseBody() = default ;
    AttachRCInstancesResponseBody(const AttachRCInstancesResponseBody &) = default ;
    AttachRCInstancesResponseBody(AttachRCInstancesResponseBody &&) = default ;
    AttachRCInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachRCInstancesResponseBody() = default ;
    AttachRCInstancesResponseBody& operator=(const AttachRCInstancesResponseBody &) = default ;
    AttachRCInstancesResponseBody& operator=(AttachRCInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Responses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Responses& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Responses& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Responses() = default ;
      Responses(const Responses &) = default ;
      Responses(Responses &&) = default ;
      Responses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Responses() = default ;
      Responses& operator=(const Responses &) = default ;
      Responses& operator=(Responses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Responses& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Responses& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Responses& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The HTTP status code returned.
      shared_ptr<string> code_ {};
      // The node ID.
      shared_ptr<string> instanceId_ {};
      // The message returned.
      // 
      // >  If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->responses_ == nullptr && this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachRCInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responses Field Functions 
    bool hasResponses() const { return this->responses_ != nullptr;};
    void deleteResponses() { this->responses_ = nullptr;};
    inline const vector<AttachRCInstancesResponseBody::Responses> & getResponses() const { DARABONBA_PTR_GET_CONST(responses_, vector<AttachRCInstancesResponseBody::Responses>) };
    inline vector<AttachRCInstancesResponseBody::Responses> getResponses() { DARABONBA_PTR_GET(responses_, vector<AttachRCInstancesResponseBody::Responses>) };
    inline AttachRCInstancesResponseBody& setResponses(const vector<AttachRCInstancesResponseBody::Responses> & responses) { DARABONBA_PTR_SET_VALUE(responses_, responses) };
    inline AttachRCInstancesResponseBody& setResponses(vector<AttachRCInstancesResponseBody::Responses> && responses) { DARABONBA_PTR_SET_RVALUE(responses_, responses) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AttachRCInstancesResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The response parameters.
    shared_ptr<vector<AttachRCInstancesResponseBody::Responses>> responses_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
