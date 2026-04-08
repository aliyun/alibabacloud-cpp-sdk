// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTNETWORKCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTNETWORKCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TestNetworkConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestNetworkConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, TestNetworkConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    TestNetworkConnectionResponseBody() = default ;
    TestNetworkConnectionResponseBody(const TestNetworkConnectionResponseBody &) = default ;
    TestNetworkConnectionResponseBody(TestNetworkConnectionResponseBody &&) = default ;
    TestNetworkConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestNetworkConnectionResponseBody() = default ;
    TestNetworkConnectionResponseBody& operator=(const TestNetworkConnectionResponseBody &) = default ;
    TestNetworkConnectionResponseBody& operator=(TestNetworkConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectMessage, connectMessage_);
        DARABONBA_PTR_TO_JSON(ConnectStatus, connectStatus_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectMessage, connectMessage_);
        DARABONBA_PTR_FROM_JSON(ConnectStatus, connectStatus_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectMessage_ == nullptr
        && this->connectStatus_ == nullptr; };
      // connectMessage Field Functions 
      bool hasConnectMessage() const { return this->connectMessage_ != nullptr;};
      void deleteConnectMessage() { this->connectMessage_ = nullptr;};
      inline string getConnectMessage() const { DARABONBA_PTR_GET_DEFAULT(connectMessage_, "") };
      inline TaskList& setConnectMessage(string connectMessage) { DARABONBA_PTR_SET_VALUE(connectMessage_, connectMessage) };


      // connectStatus Field Functions 
      bool hasConnectStatus() const { return this->connectStatus_ != nullptr;};
      void deleteConnectStatus() { this->connectStatus_ = nullptr;};
      inline bool getConnectStatus() const { DARABONBA_PTR_GET_DEFAULT(connectStatus_, false) };
      inline TaskList& setConnectStatus(bool connectStatus) { DARABONBA_PTR_SET_VALUE(connectStatus_, connectStatus) };


    protected:
      // The reason why the data source and resource group failed the connectivity test. If data source and the resource group passed the connectivity test, this parameter is left empty.
      shared_ptr<string> connectMessage_ {};
      // The result of the connectivity test. Valid values:
      // 
      // *   true: The data source and the resource group passed the connectivity test.
      // *   false: The data source and the resource group failed the connectivity test. You can troubleshoot issues based on the ConnectMessage parameter.
      shared_ptr<bool> connectStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr && this->taskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestNetworkConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TestNetworkConnectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const TestNetworkConnectionResponseBody::TaskList & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, TestNetworkConnectionResponseBody::TaskList) };
    inline TestNetworkConnectionResponseBody::TaskList getTaskList() { DARABONBA_PTR_GET(taskList_, TestNetworkConnectionResponseBody::TaskList) };
    inline TestNetworkConnectionResponseBody& setTaskList(const TestNetworkConnectionResponseBody::TaskList & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline TestNetworkConnectionResponseBody& setTaskList(TestNetworkConnectionResponseBody::TaskList && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The information about the connectivity test.
    shared_ptr<TestNetworkConnectionResponseBody::TaskList> taskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
