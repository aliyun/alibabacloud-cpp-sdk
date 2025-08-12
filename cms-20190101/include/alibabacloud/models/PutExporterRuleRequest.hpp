// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEXPORTERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTEXPORTERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutExporterRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutExporterRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(DstNames, dstNames_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TargetWindows, targetWindows_);
    };
    friend void from_json(const Darabonba::Json& j, PutExporterRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(DstNames, dstNames_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TargetWindows, targetWindows_);
    };
    PutExporterRuleRequest() = default ;
    PutExporterRuleRequest(const PutExporterRuleRequest &) = default ;
    PutExporterRuleRequest(PutExporterRuleRequest &&) = default ;
    PutExporterRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutExporterRuleRequest() = default ;
    PutExporterRuleRequest& operator=(const PutExporterRuleRequest &) = default ;
    PutExporterRuleRequest& operator=(PutExporterRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->describe_ != nullptr
        && this->dstNames_ != nullptr && this->metricName_ != nullptr && this->namespace_ != nullptr && this->regionId_ != nullptr && this->ruleName_ != nullptr
        && this->targetWindows_ != nullptr; };
    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline PutExporterRuleRequest& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // dstNames Field Functions 
    bool hasDstNames() const { return this->dstNames_ != nullptr;};
    void deleteDstNames() { this->dstNames_ = nullptr;};
    inline const vector<string> & dstNames() const { DARABONBA_PTR_GET_CONST(dstNames_, vector<string>) };
    inline vector<string> dstNames() { DARABONBA_PTR_GET(dstNames_, vector<string>) };
    inline PutExporterRuleRequest& setDstNames(const vector<string> & dstNames) { DARABONBA_PTR_SET_VALUE(dstNames_, dstNames) };
    inline PutExporterRuleRequest& setDstNames(vector<string> && dstNames) { DARABONBA_PTR_SET_RVALUE(dstNames_, dstNames) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutExporterRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutExporterRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutExporterRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutExporterRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // targetWindows Field Functions 
    bool hasTargetWindows() const { return this->targetWindows_ != nullptr;};
    void deleteTargetWindows() { this->targetWindows_ = nullptr;};
    inline string targetWindows() const { DARABONBA_PTR_GET_DEFAULT(targetWindows_, "") };
    inline PutExporterRuleRequest& setTargetWindows(string targetWindows) { DARABONBA_PTR_SET_VALUE(targetWindows_, targetWindows) };


  protected:
    // The description of the data export rule.
    std::shared_ptr<string> describe_ = nullptr;
    // The destination to which the data is exported. Valid values of N: 1 to 20.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> dstNames_ = nullptr;
    // The name of the metric.
    // 
    // > 
    // 
    // For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // > For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the rule.
    // 
    // > If the specified rule exists, the existing rule is modified. Otherwise, a rule is created.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The time window of the exported data. Unit: seconds.
    // 
    // > 
    // 
    // *   Separate multiple time windows with commas (,).
    // 
    // *   Data in a time window of less than 60 seconds cannot be exported.
    std::shared_ptr<string> targetWindows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
