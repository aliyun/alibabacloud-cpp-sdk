// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETTESTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNetTestTaskRequestCommTest.hpp>
#include <alibabacloud/models/CreateNetTestTaskRequestDelayTest.hpp>
#include <alibabacloud/models/CreateNetTestTaskRequestTrafficTest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNetTestTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetTestTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CommTest, commTest_);
      DARABONBA_PTR_TO_JSON(DelayTest, delayTest_);
      DARABONBA_PTR_TO_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(TrafficTest, trafficTest_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetTestTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CommTest, commTest_);
      DARABONBA_PTR_FROM_JSON(DelayTest, delayTest_);
      DARABONBA_PTR_FROM_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(TrafficTest, trafficTest_);
    };
    CreateNetTestTaskRequest() = default ;
    CreateNetTestTaskRequest(const CreateNetTestTaskRequest &) = default ;
    CreateNetTestTaskRequest(CreateNetTestTaskRequest &&) = default ;
    CreateNetTestTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetTestTaskRequest() = default ;
    CreateNetTestTaskRequest& operator=(const CreateNetTestTaskRequest &) = default ;
    CreateNetTestTaskRequest& operator=(CreateNetTestTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->commTest_ != nullptr && this->delayTest_ != nullptr && this->netTestType_ != nullptr && this->networkMode_ != nullptr
        && this->port_ != nullptr && this->trafficTest_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNetTestTaskRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateNetTestTaskRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // commTest Field Functions 
    bool hasCommTest() const { return this->commTest_ != nullptr;};
    void deleteCommTest() { this->commTest_ = nullptr;};
    inline const CreateNetTestTaskRequestCommTest & commTest() const { DARABONBA_PTR_GET_CONST(commTest_, CreateNetTestTaskRequestCommTest) };
    inline CreateNetTestTaskRequestCommTest commTest() { DARABONBA_PTR_GET(commTest_, CreateNetTestTaskRequestCommTest) };
    inline CreateNetTestTaskRequest& setCommTest(const CreateNetTestTaskRequestCommTest & commTest) { DARABONBA_PTR_SET_VALUE(commTest_, commTest) };
    inline CreateNetTestTaskRequest& setCommTest(CreateNetTestTaskRequestCommTest && commTest) { DARABONBA_PTR_SET_RVALUE(commTest_, commTest) };


    // delayTest Field Functions 
    bool hasDelayTest() const { return this->delayTest_ != nullptr;};
    void deleteDelayTest() { this->delayTest_ = nullptr;};
    inline const CreateNetTestTaskRequestDelayTest & delayTest() const { DARABONBA_PTR_GET_CONST(delayTest_, CreateNetTestTaskRequestDelayTest) };
    inline CreateNetTestTaskRequestDelayTest delayTest() { DARABONBA_PTR_GET(delayTest_, CreateNetTestTaskRequestDelayTest) };
    inline CreateNetTestTaskRequest& setDelayTest(const CreateNetTestTaskRequestDelayTest & delayTest) { DARABONBA_PTR_SET_VALUE(delayTest_, delayTest) };
    inline CreateNetTestTaskRequest& setDelayTest(CreateNetTestTaskRequestDelayTest && delayTest) { DARABONBA_PTR_SET_RVALUE(delayTest_, delayTest) };


    // netTestType Field Functions 
    bool hasNetTestType() const { return this->netTestType_ != nullptr;};
    void deleteNetTestType() { this->netTestType_ = nullptr;};
    inline string netTestType() const { DARABONBA_PTR_GET_DEFAULT(netTestType_, "") };
    inline CreateNetTestTaskRequest& setNetTestType(string netTestType) { DARABONBA_PTR_SET_VALUE(netTestType_, netTestType) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline CreateNetTestTaskRequest& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateNetTestTaskRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // trafficTest Field Functions 
    bool hasTrafficTest() const { return this->trafficTest_ != nullptr;};
    void deleteTrafficTest() { this->trafficTest_ = nullptr;};
    inline const CreateNetTestTaskRequestTrafficTest & trafficTest() const { DARABONBA_PTR_GET_CONST(trafficTest_, CreateNetTestTaskRequestTrafficTest) };
    inline CreateNetTestTaskRequestTrafficTest trafficTest() { DARABONBA_PTR_GET(trafficTest_, CreateNetTestTaskRequestTrafficTest) };
    inline CreateNetTestTaskRequest& setTrafficTest(const CreateNetTestTaskRequestTrafficTest & trafficTest) { DARABONBA_PTR_SET_VALUE(trafficTest_, trafficTest) };
    inline CreateNetTestTaskRequest& setTrafficTest(CreateNetTestTaskRequestTrafficTest && trafficTest) { DARABONBA_PTR_SET_RVALUE(trafficTest_, trafficTest) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // Specify when NetTestType is CommTest.
    std::shared_ptr<CreateNetTestTaskRequestCommTest> commTest_ = nullptr;
    // Specify when NetTestType is DelayTest.
    std::shared_ptr<CreateNetTestTaskRequestDelayTest> delayTest_ = nullptr;
    // The type of the network test. Valid values: DelayTest, TrafficTest, and CommTest.
    std::shared_ptr<string> netTestType_ = nullptr;
    // The network mode.
    std::shared_ptr<string> networkMode_ = nullptr;
    // The port number.
    std::shared_ptr<string> port_ = nullptr;
    // If the TrafficModel is Fullmesh, leave this parameter empty.
    std::shared_ptr<CreateNetTestTaskRequestTrafficTest> trafficTest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
