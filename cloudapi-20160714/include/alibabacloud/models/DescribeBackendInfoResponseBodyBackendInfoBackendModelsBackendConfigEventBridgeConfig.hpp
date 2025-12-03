// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGEVENTBRIDGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGEVENTBRIDGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EventBridgeRegionId, eventBridgeRegionId_);
      DARABONBA_PTR_TO_JSON(EventBus, eventBus_);
      DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBridgeRegionId, eventBridgeRegionId_);
      DARABONBA_PTR_FROM_JSON(EventBus, eventBus_);
      DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventBridgeRegionId_ == nullptr
        && return this->eventBus_ == nullptr && return this->eventSource_ == nullptr && return this->roleArn_ == nullptr; };
    // eventBridgeRegionId Field Functions 
    bool hasEventBridgeRegionId() const { return this->eventBridgeRegionId_ != nullptr;};
    void deleteEventBridgeRegionId() { this->eventBridgeRegionId_ = nullptr;};
    inline string eventBridgeRegionId() const { DARABONBA_PTR_GET_DEFAULT(eventBridgeRegionId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig& setEventBridgeRegionId(string eventBridgeRegionId) { DARABONBA_PTR_SET_VALUE(eventBridgeRegionId_, eventBridgeRegionId) };


    // eventBus Field Functions 
    bool hasEventBus() const { return this->eventBus_ != nullptr;};
    void deleteEventBus() { this->eventBus_ = nullptr;};
    inline string eventBus() const { DARABONBA_PTR_GET_DEFAULT(eventBus_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig& setEventBus(string eventBus) { DARABONBA_PTR_SET_VALUE(eventBus_, eventBus) };


    // eventSource Field Functions 
    bool hasEventSource() const { return this->eventSource_ != nullptr;};
    void deleteEventSource() { this->eventSource_ = nullptr;};
    inline string eventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEventBridgeConfig& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


  protected:
    // The region ID of the event bus in EventBridge.
    std::shared_ptr<string> eventBridgeRegionId_ = nullptr;
    // The event bus.
    std::shared_ptr<string> eventBus_ = nullptr;
    // The event source.
    std::shared_ptr<string> eventSource_ = nullptr;
    // The ARN of the RAM role to be assumed by API Gateway to access EventBridge.
    std::shared_ptr<string> roleArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
