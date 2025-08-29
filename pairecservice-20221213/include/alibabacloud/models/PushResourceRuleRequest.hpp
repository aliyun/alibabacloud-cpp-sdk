// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHRESOURCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHRESOURCERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class PushResourceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushResourceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_TO_JSON(MetricInfo, metricInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PushResourceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_FROM_JSON(MetricInfo, metricInfo_);
    };
    PushResourceRuleRequest() = default ;
    PushResourceRuleRequest(const PushResourceRuleRequest &) = default ;
    PushResourceRuleRequest(PushResourceRuleRequest &&) = default ;
    PushResourceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushResourceRuleRequest() = default ;
    PushResourceRuleRequest& operator=(const PushResourceRuleRequest &) = default ;
    PushResourceRuleRequest& operator=(PushResourceRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->metricInfo_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PushResourceRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // metricInfo Field Functions 
    bool hasMetricInfo() const { return this->metricInfo_ != nullptr;};
    void deleteMetricInfo() { this->metricInfo_ = nullptr;};
    inline     const Darabonba::Json & metricInfo() const { DARABONBA_GET(metricInfo_) };
    Darabonba::Json & metricInfo() { DARABONBA_GET(metricInfo_) };
    inline PushResourceRuleRequest& setMetricInfo(const Darabonba::Json & metricInfo) { DARABONBA_SET_VALUE(metricInfo_, metricInfo) };
    inline PushResourceRuleRequest& setMetricInfo(Darabonba::Json & metricInfo) { DARABONBA_SET_RVALUE(metricInfo_, metricInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    Darabonba::Json metricInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
