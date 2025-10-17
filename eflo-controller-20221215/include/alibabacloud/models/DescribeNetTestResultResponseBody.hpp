// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetTestResultResponseBodyCommTest.hpp>
#include <alibabacloud/models/DescribeNetTestResultResponseBodyDelayTest.hpp>
#include <alibabacloud/models/DescribeNetTestResultResponseBodyTrafficTest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNetTestResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetTestResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CommTest, commTest_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DelayTest, delayTest_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultDetial, resultDetial_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TestId, testId_);
      DARABONBA_PTR_TO_JSON(TrafficTest, trafficTest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetTestResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CommTest, commTest_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DelayTest, delayTest_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(NetTestType, netTestType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultDetial, resultDetial_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TestId, testId_);
      DARABONBA_PTR_FROM_JSON(TrafficTest, trafficTest_);
    };
    DescribeNetTestResultResponseBody() = default ;
    DescribeNetTestResultResponseBody(const DescribeNetTestResultResponseBody &) = default ;
    DescribeNetTestResultResponseBody(DescribeNetTestResultResponseBody &&) = default ;
    DescribeNetTestResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetTestResultResponseBody() = default ;
    DescribeNetTestResultResponseBody& operator=(const DescribeNetTestResultResponseBody &) = default ;
    DescribeNetTestResultResponseBody& operator=(DescribeNetTestResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->commTest_ == nullptr && return this->creationTime_ == nullptr && return this->delayTest_ == nullptr && return this->finishedTime_ == nullptr
        && return this->netTestType_ == nullptr && return this->port_ == nullptr && return this->requestId_ == nullptr && return this->resultDetial_ == nullptr && return this->status_ == nullptr
        && return this->testId_ == nullptr && return this->trafficTest_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeNetTestResultResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeNetTestResultResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // commTest Field Functions 
    bool hasCommTest() const { return this->commTest_ != nullptr;};
    void deleteCommTest() { this->commTest_ = nullptr;};
    inline const DescribeNetTestResultResponseBodyCommTest & commTest() const { DARABONBA_PTR_GET_CONST(commTest_, DescribeNetTestResultResponseBodyCommTest) };
    inline DescribeNetTestResultResponseBodyCommTest commTest() { DARABONBA_PTR_GET(commTest_, DescribeNetTestResultResponseBodyCommTest) };
    inline DescribeNetTestResultResponseBody& setCommTest(const DescribeNetTestResultResponseBodyCommTest & commTest) { DARABONBA_PTR_SET_VALUE(commTest_, commTest) };
    inline DescribeNetTestResultResponseBody& setCommTest(DescribeNetTestResultResponseBodyCommTest && commTest) { DARABONBA_PTR_SET_RVALUE(commTest_, commTest) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNetTestResultResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // delayTest Field Functions 
    bool hasDelayTest() const { return this->delayTest_ != nullptr;};
    void deleteDelayTest() { this->delayTest_ = nullptr;};
    inline const DescribeNetTestResultResponseBodyDelayTest & delayTest() const { DARABONBA_PTR_GET_CONST(delayTest_, DescribeNetTestResultResponseBodyDelayTest) };
    inline DescribeNetTestResultResponseBodyDelayTest delayTest() { DARABONBA_PTR_GET(delayTest_, DescribeNetTestResultResponseBodyDelayTest) };
    inline DescribeNetTestResultResponseBody& setDelayTest(const DescribeNetTestResultResponseBodyDelayTest & delayTest) { DARABONBA_PTR_SET_VALUE(delayTest_, delayTest) };
    inline DescribeNetTestResultResponseBody& setDelayTest(DescribeNetTestResultResponseBodyDelayTest && delayTest) { DARABONBA_PTR_SET_RVALUE(delayTest_, delayTest) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeNetTestResultResponseBody& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // netTestType Field Functions 
    bool hasNetTestType() const { return this->netTestType_ != nullptr;};
    void deleteNetTestType() { this->netTestType_ = nullptr;};
    inline string netTestType() const { DARABONBA_PTR_GET_DEFAULT(netTestType_, "") };
    inline DescribeNetTestResultResponseBody& setNetTestType(string netTestType) { DARABONBA_PTR_SET_VALUE(netTestType_, netTestType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeNetTestResultResponseBody& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetTestResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultDetial Field Functions 
    bool hasResultDetial() const { return this->resultDetial_ != nullptr;};
    void deleteResultDetial() { this->resultDetial_ = nullptr;};
    inline string resultDetial() const { DARABONBA_PTR_GET_DEFAULT(resultDetial_, "") };
    inline DescribeNetTestResultResponseBody& setResultDetial(string resultDetial) { DARABONBA_PTR_SET_VALUE(resultDetial_, resultDetial) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetTestResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // testId Field Functions 
    bool hasTestId() const { return this->testId_ != nullptr;};
    void deleteTestId() { this->testId_ = nullptr;};
    inline string testId() const { DARABONBA_PTR_GET_DEFAULT(testId_, "") };
    inline DescribeNetTestResultResponseBody& setTestId(string testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


    // trafficTest Field Functions 
    bool hasTrafficTest() const { return this->trafficTest_ != nullptr;};
    void deleteTrafficTest() { this->trafficTest_ = nullptr;};
    inline const DescribeNetTestResultResponseBodyTrafficTest & trafficTest() const { DARABONBA_PTR_GET_CONST(trafficTest_, DescribeNetTestResultResponseBodyTrafficTest) };
    inline DescribeNetTestResultResponseBodyTrafficTest trafficTest() { DARABONBA_PTR_GET(trafficTest_, DescribeNetTestResultResponseBodyTrafficTest) };
    inline DescribeNetTestResultResponseBody& setTrafficTest(const DescribeNetTestResultResponseBodyTrafficTest & trafficTest) { DARABONBA_PTR_SET_VALUE(trafficTest_, trafficTest) };
    inline DescribeNetTestResultResponseBody& setTrafficTest(DescribeNetTestResultResponseBodyTrafficTest && trafficTest) { DARABONBA_PTR_SET_RVALUE(trafficTest_, trafficTest) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // Specify when NetTestType is CommTest.
    std::shared_ptr<DescribeNetTestResultResponseBodyCommTest> commTest_ = nullptr;
    // create time
    std::shared_ptr<string> creationTime_ = nullptr;
    // Fill in when the network test type is a delay test.
    std::shared_ptr<DescribeNetTestResultResponseBodyDelayTest> delayTest_ = nullptr;
    // finish time
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The type of the network test.
    std::shared_ptr<string> netTestType_ = nullptr;
    // Test port number.
    std::shared_ptr<string> port_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // result detail
    std::shared_ptr<string> resultDetial_ = nullptr;
    // status of session
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the test task. The unique identifier of a network test task.
    std::shared_ptr<string> testId_ = nullptr;
    // Fill in when the network test type is a traffic test.
    std::shared_ptr<DescribeNetTestResultResponseBodyTrafficTest> trafficTest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
