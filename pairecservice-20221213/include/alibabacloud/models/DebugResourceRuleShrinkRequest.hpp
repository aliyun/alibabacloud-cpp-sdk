// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGRESOURCERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEBUGRESOURCERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class DebugResourceRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugResourceRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MetricInfo, metricInfoShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DebugResourceRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MetricInfo, metricInfoShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DebugResourceRuleShrinkRequest() = default ;
    DebugResourceRuleShrinkRequest(const DebugResourceRuleShrinkRequest &) = default ;
    DebugResourceRuleShrinkRequest(DebugResourceRuleShrinkRequest &&) = default ;
    DebugResourceRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugResourceRuleShrinkRequest() = default ;
    DebugResourceRuleShrinkRequest& operator=(const DebugResourceRuleShrinkRequest &) = default ;
    DebugResourceRuleShrinkRequest& operator=(DebugResourceRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->metricInfoShrink_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DebugResourceRuleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metricInfoShrink Field Functions 
    bool hasMetricInfoShrink() const { return this->metricInfoShrink_ != nullptr;};
    void deleteMetricInfoShrink() { this->metricInfoShrink_ = nullptr;};
    inline string getMetricInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(metricInfoShrink_, "") };
    inline DebugResourceRuleShrinkRequest& setMetricInfoShrink(string metricInfoShrink) { DARABONBA_PTR_SET_VALUE(metricInfoShrink_, metricInfoShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DebugResourceRuleShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> metricInfoShrink_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
