// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHRESOURCERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHRESOURCERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class PushResourceRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushResourceRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MetricInfo, metricInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PushResourceRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MetricInfo, metricInfoShrink_);
    };
    PushResourceRuleShrinkRequest() = default ;
    PushResourceRuleShrinkRequest(const PushResourceRuleShrinkRequest &) = default ;
    PushResourceRuleShrinkRequest(PushResourceRuleShrinkRequest &&) = default ;
    PushResourceRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushResourceRuleShrinkRequest() = default ;
    PushResourceRuleShrinkRequest& operator=(const PushResourceRuleShrinkRequest &) = default ;
    PushResourceRuleShrinkRequest& operator=(PushResourceRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->metricInfoShrink_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PushResourceRuleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metricInfoShrink Field Functions 
    bool hasMetricInfoShrink() const { return this->metricInfoShrink_ != nullptr;};
    void deleteMetricInfoShrink() { this->metricInfoShrink_ = nullptr;};
    inline string metricInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(metricInfoShrink_, "") };
    inline PushResourceRuleShrinkRequest& setMetricInfoShrink(string metricInfoShrink) { DARABONBA_PTR_SET_VALUE(metricInfoShrink_, metricInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metricInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
