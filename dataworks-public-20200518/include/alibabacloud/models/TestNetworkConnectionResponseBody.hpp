// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTNETWORKCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTNETWORKCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TestNetworkConnectionResponseBodyTaskList.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->success_ != nullptr && this->taskList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestNetworkConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TestNetworkConnectionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const TestNetworkConnectionResponseBodyTaskList & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, TestNetworkConnectionResponseBodyTaskList) };
    inline TestNetworkConnectionResponseBodyTaskList taskList() { DARABONBA_PTR_GET(taskList_, TestNetworkConnectionResponseBodyTaskList) };
    inline TestNetworkConnectionResponseBody& setTaskList(const TestNetworkConnectionResponseBodyTaskList & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline TestNetworkConnectionResponseBody& setTaskList(TestNetworkConnectionResponseBodyTaskList && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The information about the connectivity test.
    std::shared_ptr<TestNetworkConnectionResponseBodyTaskList> taskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
