// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTNETWORKCONNECTIONRESPONSEBODYTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_TESTNETWORKCONNECTIONRESPONSEBODYTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TestNetworkConnectionResponseBodyTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestNetworkConnectionResponseBodyTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectMessage, connectMessage_);
      DARABONBA_PTR_TO_JSON(ConnectStatus, connectStatus_);
    };
    friend void from_json(const Darabonba::Json& j, TestNetworkConnectionResponseBodyTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectMessage, connectMessage_);
      DARABONBA_PTR_FROM_JSON(ConnectStatus, connectStatus_);
    };
    TestNetworkConnectionResponseBodyTaskList() = default ;
    TestNetworkConnectionResponseBodyTaskList(const TestNetworkConnectionResponseBodyTaskList &) = default ;
    TestNetworkConnectionResponseBodyTaskList(TestNetworkConnectionResponseBodyTaskList &&) = default ;
    TestNetworkConnectionResponseBodyTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestNetworkConnectionResponseBodyTaskList() = default ;
    TestNetworkConnectionResponseBodyTaskList& operator=(const TestNetworkConnectionResponseBodyTaskList &) = default ;
    TestNetworkConnectionResponseBodyTaskList& operator=(TestNetworkConnectionResponseBodyTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectMessage_ != nullptr
        && this->connectStatus_ != nullptr; };
    // connectMessage Field Functions 
    bool hasConnectMessage() const { return this->connectMessage_ != nullptr;};
    void deleteConnectMessage() { this->connectMessage_ = nullptr;};
    inline string connectMessage() const { DARABONBA_PTR_GET_DEFAULT(connectMessage_, "") };
    inline TestNetworkConnectionResponseBodyTaskList& setConnectMessage(string connectMessage) { DARABONBA_PTR_SET_VALUE(connectMessage_, connectMessage) };


    // connectStatus Field Functions 
    bool hasConnectStatus() const { return this->connectStatus_ != nullptr;};
    void deleteConnectStatus() { this->connectStatus_ = nullptr;};
    inline bool connectStatus() const { DARABONBA_PTR_GET_DEFAULT(connectStatus_, false) };
    inline TestNetworkConnectionResponseBodyTaskList& setConnectStatus(bool connectStatus) { DARABONBA_PTR_SET_VALUE(connectStatus_, connectStatus) };


  protected:
    // The reason why the data source and resource group failed the connectivity test. If data source and the resource group passed the connectivity test, this parameter is left empty.
    std::shared_ptr<string> connectMessage_ = nullptr;
    // The result of the connectivity test. Valid values:
    // 
    // *   true: The data source and the resource group passed the connectivity test.
    // *   false: The data source and the resource group failed the connectivity test. You can troubleshoot issues based on the ConnectMessage parameter.
    std::shared_ptr<bool> connectStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
