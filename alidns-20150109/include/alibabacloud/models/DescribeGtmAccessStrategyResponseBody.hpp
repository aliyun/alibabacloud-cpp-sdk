// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGtmAccessStrategyResponseBodyLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolMonitorStatus, defaultAddrPoolMonitorStatus_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolName, defaultAddrPoolName_);
      DARABONBA_PTR_TO_JSON(DefaultAddrPoolStatus, defaultAddrPoolStatus_);
      DARABONBA_PTR_TO_JSON(DefultAddrPoolId, defultAddrPoolId_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolMonitorStatus, failoverAddrPoolMonitorStatus_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolName, failoverAddrPoolName_);
      DARABONBA_PTR_TO_JSON(FailoverAddrPoolStatus, failoverAddrPoolStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(AccessStatus, accessStatus_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolMonitorStatus, defaultAddrPoolMonitorStatus_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolName, defaultAddrPoolName_);
      DARABONBA_PTR_FROM_JSON(DefaultAddrPoolStatus, defaultAddrPoolStatus_);
      DARABONBA_PTR_FROM_JSON(DefultAddrPoolId, defultAddrPoolId_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolId, failoverAddrPoolId_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolMonitorStatus, failoverAddrPoolMonitorStatus_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolName, failoverAddrPoolName_);
      DARABONBA_PTR_FROM_JSON(FailoverAddrPoolStatus, failoverAddrPoolStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
    };
    DescribeGtmAccessStrategyResponseBody() = default ;
    DescribeGtmAccessStrategyResponseBody(const DescribeGtmAccessStrategyResponseBody &) = default ;
    DescribeGtmAccessStrategyResponseBody(DescribeGtmAccessStrategyResponseBody &&) = default ;
    DescribeGtmAccessStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategyResponseBody() = default ;
    DescribeGtmAccessStrategyResponseBody& operator=(const DescribeGtmAccessStrategyResponseBody &) = default ;
    DescribeGtmAccessStrategyResponseBody& operator=(DescribeGtmAccessStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessMode_ != nullptr
        && this->accessStatus_ != nullptr && this->defaultAddrPoolMonitorStatus_ != nullptr && this->defaultAddrPoolName_ != nullptr && this->defaultAddrPoolStatus_ != nullptr && this->defultAddrPoolId_ != nullptr
        && this->failoverAddrPoolId_ != nullptr && this->failoverAddrPoolMonitorStatus_ != nullptr && this->failoverAddrPoolName_ != nullptr && this->failoverAddrPoolStatus_ != nullptr && this->instanceId_ != nullptr
        && this->lines_ != nullptr && this->requestId_ != nullptr && this->strategyId_ != nullptr && this->strategyMode_ != nullptr && this->strategyName_ != nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline string accessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // accessStatus Field Functions 
    bool hasAccessStatus() const { return this->accessStatus_ != nullptr;};
    void deleteAccessStatus() { this->accessStatus_ = nullptr;};
    inline string accessStatus() const { DARABONBA_PTR_GET_DEFAULT(accessStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setAccessStatus(string accessStatus) { DARABONBA_PTR_SET_VALUE(accessStatus_, accessStatus) };


    // defaultAddrPoolMonitorStatus Field Functions 
    bool hasDefaultAddrPoolMonitorStatus() const { return this->defaultAddrPoolMonitorStatus_ != nullptr;};
    void deleteDefaultAddrPoolMonitorStatus() { this->defaultAddrPoolMonitorStatus_ = nullptr;};
    inline string defaultAddrPoolMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolMonitorStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setDefaultAddrPoolMonitorStatus(string defaultAddrPoolMonitorStatus) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolMonitorStatus_, defaultAddrPoolMonitorStatus) };


    // defaultAddrPoolName Field Functions 
    bool hasDefaultAddrPoolName() const { return this->defaultAddrPoolName_ != nullptr;};
    void deleteDefaultAddrPoolName() { this->defaultAddrPoolName_ = nullptr;};
    inline string defaultAddrPoolName() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolName_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setDefaultAddrPoolName(string defaultAddrPoolName) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolName_, defaultAddrPoolName) };


    // defaultAddrPoolStatus Field Functions 
    bool hasDefaultAddrPoolStatus() const { return this->defaultAddrPoolStatus_ != nullptr;};
    void deleteDefaultAddrPoolStatus() { this->defaultAddrPoolStatus_ = nullptr;};
    inline string defaultAddrPoolStatus() const { DARABONBA_PTR_GET_DEFAULT(defaultAddrPoolStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setDefaultAddrPoolStatus(string defaultAddrPoolStatus) { DARABONBA_PTR_SET_VALUE(defaultAddrPoolStatus_, defaultAddrPoolStatus) };


    // defultAddrPoolId Field Functions 
    bool hasDefultAddrPoolId() const { return this->defultAddrPoolId_ != nullptr;};
    void deleteDefultAddrPoolId() { this->defultAddrPoolId_ = nullptr;};
    inline string defultAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(defultAddrPoolId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setDefultAddrPoolId(string defultAddrPoolId) { DARABONBA_PTR_SET_VALUE(defultAddrPoolId_, defultAddrPoolId) };


    // failoverAddrPoolId Field Functions 
    bool hasFailoverAddrPoolId() const { return this->failoverAddrPoolId_ != nullptr;};
    void deleteFailoverAddrPoolId() { this->failoverAddrPoolId_ = nullptr;};
    inline string failoverAddrPoolId() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setFailoverAddrPoolId(string failoverAddrPoolId) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolId_, failoverAddrPoolId) };


    // failoverAddrPoolMonitorStatus Field Functions 
    bool hasFailoverAddrPoolMonitorStatus() const { return this->failoverAddrPoolMonitorStatus_ != nullptr;};
    void deleteFailoverAddrPoolMonitorStatus() { this->failoverAddrPoolMonitorStatus_ = nullptr;};
    inline string failoverAddrPoolMonitorStatus() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolMonitorStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setFailoverAddrPoolMonitorStatus(string failoverAddrPoolMonitorStatus) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolMonitorStatus_, failoverAddrPoolMonitorStatus) };


    // failoverAddrPoolName Field Functions 
    bool hasFailoverAddrPoolName() const { return this->failoverAddrPoolName_ != nullptr;};
    void deleteFailoverAddrPoolName() { this->failoverAddrPoolName_ = nullptr;};
    inline string failoverAddrPoolName() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolName_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setFailoverAddrPoolName(string failoverAddrPoolName) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolName_, failoverAddrPoolName) };


    // failoverAddrPoolStatus Field Functions 
    bool hasFailoverAddrPoolStatus() const { return this->failoverAddrPoolStatus_ != nullptr;};
    void deleteFailoverAddrPoolStatus() { this->failoverAddrPoolStatus_ = nullptr;};
    inline string failoverAddrPoolStatus() const { DARABONBA_PTR_GET_DEFAULT(failoverAddrPoolStatus_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setFailoverAddrPoolStatus(string failoverAddrPoolStatus) { DARABONBA_PTR_SET_VALUE(failoverAddrPoolStatus_, failoverAddrPoolStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const DescribeGtmAccessStrategyResponseBodyLines & lines() const { DARABONBA_PTR_GET_CONST(lines_, DescribeGtmAccessStrategyResponseBodyLines) };
    inline DescribeGtmAccessStrategyResponseBodyLines lines() { DARABONBA_PTR_GET(lines_, DescribeGtmAccessStrategyResponseBodyLines) };
    inline DescribeGtmAccessStrategyResponseBody& setLines(const DescribeGtmAccessStrategyResponseBodyLines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeGtmAccessStrategyResponseBody& setLines(DescribeGtmAccessStrategyResponseBodyLines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyMode Field Functions 
    bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
    void deleteStrategyMode() { this->strategyMode_ = nullptr;};
    inline string strategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeGtmAccessStrategyResponseBody& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


  protected:
    // The access policy.
    std::shared_ptr<string> accessMode_ = nullptr;
    // The access status. Valid values:
    // 
    // *   **DEFAULT**: Indicates normal when the default address pool is accessed.
    // *   **FAILOVER**: Indicates an exception when a failover address pool is accessed.
    std::shared_ptr<string> accessStatus_ = nullptr;
    // Indicates whether health check is enabled for the default address pool.
    std::shared_ptr<string> defaultAddrPoolMonitorStatus_ = nullptr;
    // The name of the default address pool.
    std::shared_ptr<string> defaultAddrPoolName_ = nullptr;
    // The availability status of the default address pool.
    std::shared_ptr<string> defaultAddrPoolStatus_ = nullptr;
    // The ID of the default address pool.
    std::shared_ptr<string> defultAddrPoolId_ = nullptr;
    // The ID of the failover address pool.
    std::shared_ptr<string> failoverAddrPoolId_ = nullptr;
    // Indicates whether health check is enabled for the failover address pool.
    std::shared_ptr<string> failoverAddrPoolMonitorStatus_ = nullptr;
    // The name of the failover address pool.
    std::shared_ptr<string> failoverAddrPoolName_ = nullptr;
    // The availability status of the failover address pool.
    std::shared_ptr<string> failoverAddrPoolStatus_ = nullptr;
    // The ID of the GTM instance whose access policy details you want to query.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The returned lines of access regions.
    std::shared_ptr<DescribeGtmAccessStrategyResponseBodyLines> lines_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the access policy queried.
    std::shared_ptr<string> strategyId_ = nullptr;
    // The mode of traffic scheduling.
    std::shared_ptr<string> strategyMode_ = nullptr;
    // The name of the access policy queried.
    std::shared_ptr<string> strategyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
