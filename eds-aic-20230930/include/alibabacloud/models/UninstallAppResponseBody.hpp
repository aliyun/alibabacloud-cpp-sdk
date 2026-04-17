// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLAPPRESPONSEBODY_HPP_
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
  class UninstallAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChildTaskInfo, childTaskInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildTaskInfo, childTaskInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UninstallAppResponseBody() = default ;
    UninstallAppResponseBody(const UninstallAppResponseBody &) = default ;
    UninstallAppResponseBody(UninstallAppResponseBody &&) = default ;
    UninstallAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallAppResponseBody() = default ;
    UninstallAppResponseBody& operator=(const UninstallAppResponseBody &) = default ;
    UninstallAppResponseBody& operator=(UninstallAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChildTaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChildTaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ChildTaskId, childTaskId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, ChildTaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ChildTaskId, childTaskId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      ChildTaskInfo() = default ;
      ChildTaskInfo(const ChildTaskInfo &) = default ;
      ChildTaskInfo(ChildTaskInfo &&) = default ;
      ChildTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChildTaskInfo() = default ;
      ChildTaskInfo& operator=(const ChildTaskInfo &) = default ;
      ChildTaskInfo& operator=(ChildTaskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->childTaskId_ == nullptr && this->instanceId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline ChildTaskInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // childTaskId Field Functions 
      bool hasChildTaskId() const { return this->childTaskId_ != nullptr;};
      void deleteChildTaskId() { this->childTaskId_ = nullptr;};
      inline string getChildTaskId() const { DARABONBA_PTR_GET_DEFAULT(childTaskId_, "") };
      inline ChildTaskInfo& setChildTaskId(string childTaskId) { DARABONBA_PTR_SET_VALUE(childTaskId_, childTaskId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ChildTaskInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> childTaskId_ {};
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->childTaskInfo_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // childTaskInfo Field Functions 
    bool hasChildTaskInfo() const { return this->childTaskInfo_ != nullptr;};
    void deleteChildTaskInfo() { this->childTaskInfo_ = nullptr;};
    inline const vector<UninstallAppResponseBody::ChildTaskInfo> & getChildTaskInfo() const { DARABONBA_PTR_GET_CONST(childTaskInfo_, vector<UninstallAppResponseBody::ChildTaskInfo>) };
    inline vector<UninstallAppResponseBody::ChildTaskInfo> getChildTaskInfo() { DARABONBA_PTR_GET(childTaskInfo_, vector<UninstallAppResponseBody::ChildTaskInfo>) };
    inline UninstallAppResponseBody& setChildTaskInfo(const vector<UninstallAppResponseBody::ChildTaskInfo> & childTaskInfo) { DARABONBA_PTR_SET_VALUE(childTaskInfo_, childTaskInfo) };
    inline UninstallAppResponseBody& setChildTaskInfo(vector<UninstallAppResponseBody::ChildTaskInfo> && childTaskInfo) { DARABONBA_PTR_SET_RVALUE(childTaskInfo_, childTaskInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UninstallAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UninstallAppResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<vector<UninstallAppResponseBody::ChildTaskInfo>> childTaskInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
