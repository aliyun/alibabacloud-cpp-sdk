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
    virtual bool empty() const override { return this->describe_ == nullptr
        && this->dstNames_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr && this->regionId_ == nullptr && this->ruleName_ == nullptr
        && this->targetWindows_ == nullptr; };
    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string getDescribe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline PutExporterRuleRequest& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // dstNames Field Functions 
    bool hasDstNames() const { return this->dstNames_ != nullptr;};
    void deleteDstNames() { this->dstNames_ = nullptr;};
    inline const vector<string> & getDstNames() const { DARABONBA_PTR_GET_CONST(dstNames_, vector<string>) };
    inline vector<string> getDstNames() { DARABONBA_PTR_GET(dstNames_, vector<string>) };
    inline PutExporterRuleRequest& setDstNames(const vector<string> & dstNames) { DARABONBA_PTR_SET_VALUE(dstNames_, dstNames) };
    inline PutExporterRuleRequest& setDstNames(vector<string> && dstNames) { DARABONBA_PTR_SET_RVALUE(dstNames_, dstNames) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline PutExporterRuleRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline PutExporterRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutExporterRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutExporterRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // targetWindows Field Functions 
    bool hasTargetWindows() const { return this->targetWindows_ != nullptr;};
    void deleteTargetWindows() { this->targetWindows_ = nullptr;};
    inline string getTargetWindows() const { DARABONBA_PTR_GET_DEFAULT(targetWindows_, "") };
    inline PutExporterRuleRequest& setTargetWindows(string targetWindows) { DARABONBA_PTR_SET_VALUE(targetWindows_, targetWindows) };


  protected:
    // The description of the data export rule.
    shared_ptr<string> describe_ {};
    // The destination to which the data is exported. Valid values of N: 1 to 20.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> dstNames_ {};
    // The name of the metric.
    // 
    // > 
    // 
    // For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> metricName_ {};
    // The namespace of the cloud service.
    // 
    // > For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> namespace_ {};
    shared_ptr<string> regionId_ {};
    // The name of the rule.
    // 
    // > If the specified rule exists, the existing rule is modified. Otherwise, a rule is created.
    shared_ptr<string> ruleName_ {};
    // The time window of the exported data. Unit: seconds.
    // 
    // > 
    // 
    // *   Separate multiple time windows with commas (,).
    // 
    // *   Data in a time window of less than 60 seconds cannot be exported.
    shared_ptr<string> targetWindows_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
