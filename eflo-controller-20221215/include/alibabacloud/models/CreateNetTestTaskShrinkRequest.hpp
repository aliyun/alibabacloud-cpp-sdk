// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETTESTTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETTESTTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNetTestTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetTestTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CommTest, commTestShrink_);
      DARABONBA_PTR_TO_JSON(DelayTest, delayTestShrink_);
      DARABONBA_PTR_TO_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(TrafficTest, trafficTestShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetTestTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CommTest, commTestShrink_);
      DARABONBA_PTR_FROM_JSON(DelayTest, delayTestShrink_);
      DARABONBA_PTR_FROM_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(TrafficTest, trafficTestShrink_);
    };
    CreateNetTestTaskShrinkRequest() = default ;
    CreateNetTestTaskShrinkRequest(const CreateNetTestTaskShrinkRequest &) = default ;
    CreateNetTestTaskShrinkRequest(CreateNetTestTaskShrinkRequest &&) = default ;
    CreateNetTestTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetTestTaskShrinkRequest() = default ;
    CreateNetTestTaskShrinkRequest& operator=(const CreateNetTestTaskShrinkRequest &) = default ;
    CreateNetTestTaskShrinkRequest& operator=(CreateNetTestTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->commTestShrink_ != nullptr && this->delayTestShrink_ != nullptr && this->netTestType_ != nullptr && this->networkMode_ != nullptr
        && this->port_ != nullptr && this->trafficTestShrink_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNetTestTaskShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateNetTestTaskShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // commTestShrink Field Functions 
    bool hasCommTestShrink() const { return this->commTestShrink_ != nullptr;};
    void deleteCommTestShrink() { this->commTestShrink_ = nullptr;};
    inline string commTestShrink() const { DARABONBA_PTR_GET_DEFAULT(commTestShrink_, "") };
    inline CreateNetTestTaskShrinkRequest& setCommTestShrink(string commTestShrink) { DARABONBA_PTR_SET_VALUE(commTestShrink_, commTestShrink) };


    // delayTestShrink Field Functions 
    bool hasDelayTestShrink() const { return this->delayTestShrink_ != nullptr;};
    void deleteDelayTestShrink() { this->delayTestShrink_ = nullptr;};
    inline string delayTestShrink() const { DARABONBA_PTR_GET_DEFAULT(delayTestShrink_, "") };
    inline CreateNetTestTaskShrinkRequest& setDelayTestShrink(string delayTestShrink) { DARABONBA_PTR_SET_VALUE(delayTestShrink_, delayTestShrink) };


    // netTestType Field Functions 
    bool hasNetTestType() const { return this->netTestType_ != nullptr;};
    void deleteNetTestType() { this->netTestType_ = nullptr;};
    inline string netTestType() const { DARABONBA_PTR_GET_DEFAULT(netTestType_, "") };
    inline CreateNetTestTaskShrinkRequest& setNetTestType(string netTestType) { DARABONBA_PTR_SET_VALUE(netTestType_, netTestType) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline CreateNetTestTaskShrinkRequest& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateNetTestTaskShrinkRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // trafficTestShrink Field Functions 
    bool hasTrafficTestShrink() const { return this->trafficTestShrink_ != nullptr;};
    void deleteTrafficTestShrink() { this->trafficTestShrink_ = nullptr;};
    inline string trafficTestShrink() const { DARABONBA_PTR_GET_DEFAULT(trafficTestShrink_, "") };
    inline CreateNetTestTaskShrinkRequest& setTrafficTestShrink(string trafficTestShrink) { DARABONBA_PTR_SET_VALUE(trafficTestShrink_, trafficTestShrink) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // Specify when NetTestType is CommTest.
    std::shared_ptr<string> commTestShrink_ = nullptr;
    // Specify when NetTestType is DelayTest.
    std::shared_ptr<string> delayTestShrink_ = nullptr;
    // The type of the network test. Valid values: DelayTest, TrafficTest, and CommTest.
    std::shared_ptr<string> netTestType_ = nullptr;
    // The network mode.
    std::shared_ptr<string> networkMode_ = nullptr;
    // The port number.
    std::shared_ptr<string> port_ = nullptr;
    // If the TrafficModel is Fullmesh, leave this parameter empty.
    std::shared_ptr<string> trafficTestShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
