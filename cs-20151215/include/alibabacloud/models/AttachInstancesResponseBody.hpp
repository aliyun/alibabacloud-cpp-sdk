// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class AttachInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    AttachInstancesResponseBody() = default ;
    AttachInstancesResponseBody(const AttachInstancesResponseBody &) = default ;
    AttachInstancesResponseBody(AttachInstancesResponseBody &&) = default ;
    AttachInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstancesResponseBody() = default ;
    AttachInstancesResponseBody& operator=(const AttachInstancesResponseBody &) = default ;
    AttachInstancesResponseBody& operator=(AttachInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(message, message_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(message, message_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
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
      inline List& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline List& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The code that indicates the task result.
      shared_ptr<string> code_ {};
      // The ID of the ECS instance.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the ECS instance is successfully added to the ACK cluster.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->taskId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<AttachInstancesResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<AttachInstancesResponseBody::List>) };
    inline vector<AttachInstancesResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<AttachInstancesResponseBody::List>) };
    inline AttachInstancesResponseBody& setList(const vector<AttachInstancesResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline AttachInstancesResponseBody& setList(vector<AttachInstancesResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AttachInstancesResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The details of the added nodes.
    shared_ptr<vector<AttachInstancesResponseBody::List>> list_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
