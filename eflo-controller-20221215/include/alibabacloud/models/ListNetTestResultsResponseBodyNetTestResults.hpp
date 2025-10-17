// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETTESTRESULTSRESPONSEBODYNETTESTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTNETTESTRESULTSRESPONSEBODYNETTESTRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNetTestResultsResponseBodyNetTestResultsCommTest.hpp>
#include <alibabacloud/models/ListNetTestResultsResponseBodyNetTestResultsDelayTest.hpp>
#include <alibabacloud/models/ListNetTestResultsResponseBodyNetTestResultsTrafficTest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListNetTestResultsResponseBodyNetTestResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetTestResultsResponseBodyNetTestResults& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CommTest, commTest_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DelayTest, delayTest_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_TO_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TestId, testId_);
      DARABONBA_PTR_TO_JSON(TrafficTest, trafficTest_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetTestResultsResponseBodyNetTestResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CommTest, commTest_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DelayTest, delayTest_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_FROM_JSON(NetworkMode, networkMode_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TestId, testId_);
      DARABONBA_PTR_FROM_JSON(TrafficTest, trafficTest_);
    };
    ListNetTestResultsResponseBodyNetTestResults() = default ;
    ListNetTestResultsResponseBodyNetTestResults(const ListNetTestResultsResponseBodyNetTestResults &) = default ;
    ListNetTestResultsResponseBodyNetTestResults(ListNetTestResultsResponseBodyNetTestResults &&) = default ;
    ListNetTestResultsResponseBodyNetTestResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetTestResultsResponseBodyNetTestResults() = default ;
    ListNetTestResultsResponseBodyNetTestResults& operator=(const ListNetTestResultsResponseBodyNetTestResults &) = default ;
    ListNetTestResultsResponseBodyNetTestResults& operator=(ListNetTestResultsResponseBodyNetTestResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->commTest_ == nullptr && return this->creationTime_ == nullptr && return this->delayTest_ == nullptr && return this->finishedTime_ == nullptr
        && return this->netTestType_ == nullptr && return this->networkMode_ == nullptr && return this->port_ == nullptr && return this->status_ == nullptr && return this->testId_ == nullptr
        && return this->trafficTest_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // commTest Field Functions 
    bool hasCommTest() const { return this->commTest_ != nullptr;};
    void deleteCommTest() { this->commTest_ = nullptr;};
    inline const Models::ListNetTestResultsResponseBodyNetTestResultsCommTest & commTest() const { DARABONBA_PTR_GET_CONST(commTest_, Models::ListNetTestResultsResponseBodyNetTestResultsCommTest) };
    inline Models::ListNetTestResultsResponseBodyNetTestResultsCommTest commTest() { DARABONBA_PTR_GET(commTest_, Models::ListNetTestResultsResponseBodyNetTestResultsCommTest) };
    inline ListNetTestResultsResponseBodyNetTestResults& setCommTest(const Models::ListNetTestResultsResponseBodyNetTestResultsCommTest & commTest) { DARABONBA_PTR_SET_VALUE(commTest_, commTest) };
    inline ListNetTestResultsResponseBodyNetTestResults& setCommTest(Models::ListNetTestResultsResponseBodyNetTestResultsCommTest && commTest) { DARABONBA_PTR_SET_RVALUE(commTest_, commTest) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // delayTest Field Functions 
    bool hasDelayTest() const { return this->delayTest_ != nullptr;};
    void deleteDelayTest() { this->delayTest_ = nullptr;};
    inline const Models::ListNetTestResultsResponseBodyNetTestResultsDelayTest & delayTest() const { DARABONBA_PTR_GET_CONST(delayTest_, Models::ListNetTestResultsResponseBodyNetTestResultsDelayTest) };
    inline Models::ListNetTestResultsResponseBodyNetTestResultsDelayTest delayTest() { DARABONBA_PTR_GET(delayTest_, Models::ListNetTestResultsResponseBodyNetTestResultsDelayTest) };
    inline ListNetTestResultsResponseBodyNetTestResults& setDelayTest(const Models::ListNetTestResultsResponseBodyNetTestResultsDelayTest & delayTest) { DARABONBA_PTR_SET_VALUE(delayTest_, delayTest) };
    inline ListNetTestResultsResponseBodyNetTestResults& setDelayTest(Models::ListNetTestResultsResponseBodyNetTestResultsDelayTest && delayTest) { DARABONBA_PTR_SET_RVALUE(delayTest_, delayTest) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // netTestType Field Functions 
    bool hasNetTestType() const { return this->netTestType_ != nullptr;};
    void deleteNetTestType() { this->netTestType_ = nullptr;};
    inline string netTestType() const { DARABONBA_PTR_GET_DEFAULT(netTestType_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setNetTestType(string netTestType) { DARABONBA_PTR_SET_VALUE(netTestType_, netTestType) };


    // networkMode Field Functions 
    bool hasNetworkMode() const { return this->networkMode_ != nullptr;};
    void deleteNetworkMode() { this->networkMode_ = nullptr;};
    inline string networkMode() const { DARABONBA_PTR_GET_DEFAULT(networkMode_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setNetworkMode(string networkMode) { DARABONBA_PTR_SET_VALUE(networkMode_, networkMode) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // testId Field Functions 
    bool hasTestId() const { return this->testId_ != nullptr;};
    void deleteTestId() { this->testId_ = nullptr;};
    inline string testId() const { DARABONBA_PTR_GET_DEFAULT(testId_, "") };
    inline ListNetTestResultsResponseBodyNetTestResults& setTestId(string testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


    // trafficTest Field Functions 
    bool hasTrafficTest() const { return this->trafficTest_ != nullptr;};
    void deleteTrafficTest() { this->trafficTest_ = nullptr;};
    inline const Models::ListNetTestResultsResponseBodyNetTestResultsTrafficTest & trafficTest() const { DARABONBA_PTR_GET_CONST(trafficTest_, Models::ListNetTestResultsResponseBodyNetTestResultsTrafficTest) };
    inline Models::ListNetTestResultsResponseBodyNetTestResultsTrafficTest trafficTest() { DARABONBA_PTR_GET(trafficTest_, Models::ListNetTestResultsResponseBodyNetTestResultsTrafficTest) };
    inline ListNetTestResultsResponseBodyNetTestResults& setTrafficTest(const Models::ListNetTestResultsResponseBodyNetTestResultsTrafficTest & trafficTest) { DARABONBA_PTR_SET_VALUE(trafficTest_, trafficTest) };
    inline ListNetTestResultsResponseBodyNetTestResults& setTrafficTest(Models::ListNetTestResultsResponseBodyNetTestResultsTrafficTest && trafficTest) { DARABONBA_PTR_SET_RVALUE(trafficTest_, trafficTest) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // Returned when NetTestType is CommTest.
    std::shared_ptr<Models::ListNetTestResultsResponseBodyNetTestResultsCommTest> commTest_ = nullptr;
    // The creation time.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Returned when NetTestType is DelayTest.
    std::shared_ptr<Models::ListNetTestResultsResponseBodyNetTestResultsDelayTest> delayTest_ = nullptr;
    // The finish time.
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The type of the network test.
    std::shared_ptr<string> netTestType_ = nullptr;
    // The network mode.
    std::shared_ptr<string> networkMode_ = nullptr;
    // The port number.
    std::shared_ptr<string> port_ = nullptr;
    // The status of the network test task. Valid values:\\
    // ● InProgress\\
    // ● Finished\\
    // ● Failed
    std::shared_ptr<string> status_ = nullptr;
    // The test ID. The unique identifier of the resource test task.
    std::shared_ptr<string> testId_ = nullptr;
    // Returned when NetTestType is TrafficTest.
    std::shared_ptr<Models::ListNetTestResultsResponseBodyNetTestResultsTrafficTest> trafficTest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
