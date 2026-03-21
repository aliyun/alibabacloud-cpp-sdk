// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTANDROIDINSTANCESINGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REBOOTANDROIDINSTANCESINGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RebootAndroidInstancesInGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootAndroidInstancesInGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, RebootAndroidInstancesInGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    RebootAndroidInstancesInGroupResponseBody() = default ;
    RebootAndroidInstancesInGroupResponseBody(const RebootAndroidInstancesInGroupResponseBody &) = default ;
    RebootAndroidInstancesInGroupResponseBody(RebootAndroidInstancesInGroupResponseBody &&) = default ;
    RebootAndroidInstancesInGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootAndroidInstancesInGroupResponseBody() = default ;
    RebootAndroidInstancesInGroupResponseBody& operator=(const RebootAndroidInstancesInGroupResponseBody &) = default ;
    RebootAndroidInstancesInGroupResponseBody& operator=(RebootAndroidInstancesInGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(ChildTasks, childTasks_);
        DARABONBA_PTR_TO_JSON(ParentTaskId, parentTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(ChildTasks, childTasks_);
        DARABONBA_PTR_FROM_JSON(ParentTaskId, parentTaskId_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChildTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChildTasks& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, ChildTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        ChildTasks() = default ;
        ChildTasks(const ChildTasks &) = default ;
        ChildTasks(ChildTasks &&) = default ;
        ChildTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChildTasks() = default ;
        ChildTasks& operator=(const ChildTasks &) = default ;
        ChildTasks& operator=(ChildTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->taskId_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ChildTasks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline ChildTasks& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->childTasks_ == nullptr
        && this->parentTaskId_ == nullptr; };
      // childTasks Field Functions 
      bool hasChildTasks() const { return this->childTasks_ != nullptr;};
      void deleteChildTasks() { this->childTasks_ = nullptr;};
      inline const vector<Tasks::ChildTasks> & getChildTasks() const { DARABONBA_PTR_GET_CONST(childTasks_, vector<Tasks::ChildTasks>) };
      inline vector<Tasks::ChildTasks> getChildTasks() { DARABONBA_PTR_GET(childTasks_, vector<Tasks::ChildTasks>) };
      inline Tasks& setChildTasks(const vector<Tasks::ChildTasks> & childTasks) { DARABONBA_PTR_SET_VALUE(childTasks_, childTasks) };
      inline Tasks& setChildTasks(vector<Tasks::ChildTasks> && childTasks) { DARABONBA_PTR_SET_RVALUE(childTasks_, childTasks) };


      // parentTaskId Field Functions 
      bool hasParentTaskId() const { return this->parentTaskId_ != nullptr;};
      void deleteParentTaskId() { this->parentTaskId_ = nullptr;};
      inline string getParentTaskId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskId_, "") };
      inline Tasks& setParentTaskId(string parentTaskId) { DARABONBA_PTR_SET_VALUE(parentTaskId_, parentTaskId) };


    protected:
      shared_ptr<vector<Tasks::ChildTasks>> childTasks_ {};
      shared_ptr<string> parentTaskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tasks_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RebootAndroidInstancesInGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const RebootAndroidInstancesInGroupResponseBody::Tasks & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, RebootAndroidInstancesInGroupResponseBody::Tasks) };
    inline RebootAndroidInstancesInGroupResponseBody::Tasks getTasks() { DARABONBA_PTR_GET(tasks_, RebootAndroidInstancesInGroupResponseBody::Tasks) };
    inline RebootAndroidInstancesInGroupResponseBody& setTasks(const RebootAndroidInstancesInGroupResponseBody::Tasks & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline RebootAndroidInstancesInGroupResponseBody& setTasks(RebootAndroidInstancesInGroupResponseBody::Tasks && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<RebootAndroidInstancesInGroupResponseBody::Tasks> tasks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
