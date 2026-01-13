// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGRESOURCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEBUGRESOURCERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class DebugResourceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugResourceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_TO_JSON(MetricInfo, metricInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DebugResourceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_FROM_JSON(MetricInfo, metricInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DebugResourceRuleRequest() = default ;
    DebugResourceRuleRequest(const DebugResourceRuleRequest &) = default ;
    DebugResourceRuleRequest(DebugResourceRuleRequest &&) = default ;
    DebugResourceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugResourceRuleRequest() = default ;
    DebugResourceRuleRequest& operator=(const DebugResourceRuleRequest &) = default ;
    DebugResourceRuleRequest& operator=(DebugResourceRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->metricInfo_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DebugResourceRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metricInfo Field Functions 
    bool hasMetricInfo() const { return this->metricInfo_ != nullptr;};
    void deleteMetricInfo() { this->metricInfo_ = nullptr;};
    inline     const Darabonba::Json & getMetricInfo() const { DARABONBA_GET(metricInfo_) };
    Darabonba::Json & getMetricInfo() { DARABONBA_GET(metricInfo_) };
    inline DebugResourceRuleRequest& setMetricInfo(const Darabonba::Json & metricInfo) { DARABONBA_SET_VALUE(metricInfo_, metricInfo) };
    inline DebugResourceRuleRequest& setMetricInfo(Darabonba::Json && metricInfo) { DARABONBA_SET_RVALUE(metricInfo_, metricInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DebugResourceRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    Darabonba::Json metricInfo_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
