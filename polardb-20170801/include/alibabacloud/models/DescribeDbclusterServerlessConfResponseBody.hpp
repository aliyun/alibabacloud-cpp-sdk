// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSERVERLESSCONFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSERVERLESSCONFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterServerlessConfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterServerlessConfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgileScaleMax, agileScaleMax_);
      DARABONBA_PTR_TO_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScaleApRoNumMax, scaleApRoNumMax_);
      DARABONBA_PTR_TO_JSON(ScaleApRoNumMin, scaleApRoNumMin_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(ScaleRoNumMax, scaleRoNumMax_);
      DARABONBA_PTR_TO_JSON(ScaleRoNumMin, scaleRoNumMin_);
      DARABONBA_PTR_TO_JSON(SecondsUntilAutoPause, secondsUntilAutoPause_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleCpuEnlargeThreshold, serverlessRuleCpuEnlargeThreshold_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleCpuShrinkThreshold, serverlessRuleCpuShrinkThreshold_);
      DARABONBA_PTR_TO_JSON(ServerlessRuleMode, serverlessRuleMode_);
      DARABONBA_PTR_TO_JSON(Switchs, switchs_);
      DARABONBA_PTR_TO_JSON(TraditionalScaleMaxThreshold, traditionalScaleMaxThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterServerlessConfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgileScaleMax, agileScaleMax_);
      DARABONBA_PTR_FROM_JSON(AllowShutDown, allowShutDown_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScaleApRoNumMax, scaleApRoNumMax_);
      DARABONBA_PTR_FROM_JSON(ScaleApRoNumMin, scaleApRoNumMin_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(ScaleRoNumMax, scaleRoNumMax_);
      DARABONBA_PTR_FROM_JSON(ScaleRoNumMin, scaleRoNumMin_);
      DARABONBA_PTR_FROM_JSON(SecondsUntilAutoPause, secondsUntilAutoPause_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleCpuEnlargeThreshold, serverlessRuleCpuEnlargeThreshold_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleCpuShrinkThreshold, serverlessRuleCpuShrinkThreshold_);
      DARABONBA_PTR_FROM_JSON(ServerlessRuleMode, serverlessRuleMode_);
      DARABONBA_PTR_FROM_JSON(Switchs, switchs_);
      DARABONBA_PTR_FROM_JSON(TraditionalScaleMaxThreshold, traditionalScaleMaxThreshold_);
    };
    DescribeDBClusterServerlessConfResponseBody() = default ;
    DescribeDBClusterServerlessConfResponseBody(const DescribeDBClusterServerlessConfResponseBody &) = default ;
    DescribeDBClusterServerlessConfResponseBody(DescribeDBClusterServerlessConfResponseBody &&) = default ;
    DescribeDBClusterServerlessConfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterServerlessConfResponseBody() = default ;
    DescribeDBClusterServerlessConfResponseBody& operator=(const DescribeDBClusterServerlessConfResponseBody &) = default ;
    DescribeDBClusterServerlessConfResponseBody& operator=(DescribeDBClusterServerlessConfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agileScaleMax_ != nullptr
        && this->allowShutDown_ != nullptr && this->DBClusterId_ != nullptr && this->requestId_ != nullptr && this->scaleApRoNumMax_ != nullptr && this->scaleApRoNumMin_ != nullptr
        && this->scaleMax_ != nullptr && this->scaleMin_ != nullptr && this->scaleRoNumMax_ != nullptr && this->scaleRoNumMin_ != nullptr && this->secondsUntilAutoPause_ != nullptr
        && this->serverlessRuleCpuEnlargeThreshold_ != nullptr && this->serverlessRuleCpuShrinkThreshold_ != nullptr && this->serverlessRuleMode_ != nullptr && this->switchs_ != nullptr && this->traditionalScaleMaxThreshold_ != nullptr; };
    // agileScaleMax Field Functions 
    bool hasAgileScaleMax() const { return this->agileScaleMax_ != nullptr;};
    void deleteAgileScaleMax() { this->agileScaleMax_ = nullptr;};
    inline string agileScaleMax() const { DARABONBA_PTR_GET_DEFAULT(agileScaleMax_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setAgileScaleMax(string agileScaleMax) { DARABONBA_PTR_SET_VALUE(agileScaleMax_, agileScaleMax) };


    // allowShutDown Field Functions 
    bool hasAllowShutDown() const { return this->allowShutDown_ != nullptr;};
    void deleteAllowShutDown() { this->allowShutDown_ = nullptr;};
    inline string allowShutDown() const { DARABONBA_PTR_GET_DEFAULT(allowShutDown_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setAllowShutDown(string allowShutDown) { DARABONBA_PTR_SET_VALUE(allowShutDown_, allowShutDown) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scaleApRoNumMax Field Functions 
    bool hasScaleApRoNumMax() const { return this->scaleApRoNumMax_ != nullptr;};
    void deleteScaleApRoNumMax() { this->scaleApRoNumMax_ = nullptr;};
    inline string scaleApRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMax_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setScaleApRoNumMax(string scaleApRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMax_, scaleApRoNumMax) };


    // scaleApRoNumMin Field Functions 
    bool hasScaleApRoNumMin() const { return this->scaleApRoNumMin_ != nullptr;};
    void deleteScaleApRoNumMin() { this->scaleApRoNumMin_ = nullptr;};
    inline string scaleApRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleApRoNumMin_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setScaleApRoNumMin(string scaleApRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleApRoNumMin_, scaleApRoNumMin) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline string scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline string scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // scaleRoNumMax Field Functions 
    bool hasScaleRoNumMax() const { return this->scaleRoNumMax_ != nullptr;};
    void deleteScaleRoNumMax() { this->scaleRoNumMax_ = nullptr;};
    inline string scaleRoNumMax() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMax_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setScaleRoNumMax(string scaleRoNumMax) { DARABONBA_PTR_SET_VALUE(scaleRoNumMax_, scaleRoNumMax) };


    // scaleRoNumMin Field Functions 
    bool hasScaleRoNumMin() const { return this->scaleRoNumMin_ != nullptr;};
    void deleteScaleRoNumMin() { this->scaleRoNumMin_ = nullptr;};
    inline string scaleRoNumMin() const { DARABONBA_PTR_GET_DEFAULT(scaleRoNumMin_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setScaleRoNumMin(string scaleRoNumMin) { DARABONBA_PTR_SET_VALUE(scaleRoNumMin_, scaleRoNumMin) };


    // secondsUntilAutoPause Field Functions 
    bool hasSecondsUntilAutoPause() const { return this->secondsUntilAutoPause_ != nullptr;};
    void deleteSecondsUntilAutoPause() { this->secondsUntilAutoPause_ = nullptr;};
    inline string secondsUntilAutoPause() const { DARABONBA_PTR_GET_DEFAULT(secondsUntilAutoPause_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setSecondsUntilAutoPause(string secondsUntilAutoPause) { DARABONBA_PTR_SET_VALUE(secondsUntilAutoPause_, secondsUntilAutoPause) };


    // serverlessRuleCpuEnlargeThreshold Field Functions 
    bool hasServerlessRuleCpuEnlargeThreshold() const { return this->serverlessRuleCpuEnlargeThreshold_ != nullptr;};
    void deleteServerlessRuleCpuEnlargeThreshold() { this->serverlessRuleCpuEnlargeThreshold_ = nullptr;};
    inline string serverlessRuleCpuEnlargeThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuEnlargeThreshold_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setServerlessRuleCpuEnlargeThreshold(string serverlessRuleCpuEnlargeThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuEnlargeThreshold_, serverlessRuleCpuEnlargeThreshold) };


    // serverlessRuleCpuShrinkThreshold Field Functions 
    bool hasServerlessRuleCpuShrinkThreshold() const { return this->serverlessRuleCpuShrinkThreshold_ != nullptr;};
    void deleteServerlessRuleCpuShrinkThreshold() { this->serverlessRuleCpuShrinkThreshold_ = nullptr;};
    inline string serverlessRuleCpuShrinkThreshold() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleCpuShrinkThreshold_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setServerlessRuleCpuShrinkThreshold(string serverlessRuleCpuShrinkThreshold) { DARABONBA_PTR_SET_VALUE(serverlessRuleCpuShrinkThreshold_, serverlessRuleCpuShrinkThreshold) };


    // serverlessRuleMode Field Functions 
    bool hasServerlessRuleMode() const { return this->serverlessRuleMode_ != nullptr;};
    void deleteServerlessRuleMode() { this->serverlessRuleMode_ = nullptr;};
    inline string serverlessRuleMode() const { DARABONBA_PTR_GET_DEFAULT(serverlessRuleMode_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setServerlessRuleMode(string serverlessRuleMode) { DARABONBA_PTR_SET_VALUE(serverlessRuleMode_, serverlessRuleMode) };


    // switchs Field Functions 
    bool hasSwitchs() const { return this->switchs_ != nullptr;};
    void deleteSwitchs() { this->switchs_ = nullptr;};
    inline string switchs() const { DARABONBA_PTR_GET_DEFAULT(switchs_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setSwitchs(string switchs) { DARABONBA_PTR_SET_VALUE(switchs_, switchs) };


    // traditionalScaleMaxThreshold Field Functions 
    bool hasTraditionalScaleMaxThreshold() const { return this->traditionalScaleMaxThreshold_ != nullptr;};
    void deleteTraditionalScaleMaxThreshold() { this->traditionalScaleMaxThreshold_ = nullptr;};
    inline string traditionalScaleMaxThreshold() const { DARABONBA_PTR_GET_DEFAULT(traditionalScaleMaxThreshold_, "") };
    inline DescribeDBClusterServerlessConfResponseBody& setTraditionalScaleMaxThreshold(string traditionalScaleMaxThreshold) { DARABONBA_PTR_SET_VALUE(traditionalScaleMaxThreshold_, traditionalScaleMaxThreshold) };


  protected:
    std::shared_ptr<string> agileScaleMax_ = nullptr;
    // Whether to enable idle shutdown. Values:
    // 
    // - **true**: Enable
    // 
    // - **false**: Disable (default)
    std::shared_ptr<string> allowShutDown_ = nullptr;
    // Serverless cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The maximum number of read-only column store nodes. Valid values: 0 to 15.
    std::shared_ptr<string> scaleApRoNumMax_ = nullptr;
    // The minimum number of read-only column store nodes. Valid values: 0 to 15.
    std::shared_ptr<string> scaleApRoNumMin_ = nullptr;
    // Maximum scaling limit for a single node. Range: 1 PCU~32 PCU.
    std::shared_ptr<string> scaleMax_ = nullptr;
    // Minimum scaling limit for a single node. Range: 1 PCU~31 PCU.
    std::shared_ptr<string> scaleMin_ = nullptr;
    // Maximum scaling limit for the number of read-only nodes. Range: 0~15.
    std::shared_ptr<string> scaleRoNumMax_ = nullptr;
    // Minimum scaling limit for the number of read-only nodes. Range: 0~15.
    std::shared_ptr<string> scaleRoNumMin_ = nullptr;
    // Detection duration for idle shutdown. Range: 300~86,400. Unit: seconds. The detection duration must be a multiple of 300 seconds.
    std::shared_ptr<string> secondsUntilAutoPause_ = nullptr;
    // CPU upscale threshold.
    std::shared_ptr<string> serverlessRuleCpuEnlargeThreshold_ = nullptr;
    // CPU downscale threshold.
    std::shared_ptr<string> serverlessRuleCpuShrinkThreshold_ = nullptr;
    // Elasticity sensitivity. Values:
    // 
    // - normal: Standard
    // 
    // - flexible: Sensitive
    std::shared_ptr<string> serverlessRuleMode_ = nullptr;
    // Whether steady state is enabled. Values:
    // 
    // 1: Enabled
    // 
    // 0: Disabled
    std::shared_ptr<string> switchs_ = nullptr;
    std::shared_ptr<string> traditionalScaleMaxThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
