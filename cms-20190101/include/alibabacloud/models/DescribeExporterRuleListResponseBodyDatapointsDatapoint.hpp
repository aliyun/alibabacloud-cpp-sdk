// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODYDATAPOINTSDATAPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODYDATAPOINTSDATAPOINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeExporterRuleListResponseBodyDatapointsDatapointDstName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterRuleListResponseBodyDatapointsDatapoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterRuleListResponseBodyDatapointsDatapoint& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(DstName, dstName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TargetWindows, targetWindows_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterRuleListResponseBodyDatapointsDatapoint& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(DstName, dstName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TargetWindows, targetWindows_);
    };
    DescribeExporterRuleListResponseBodyDatapointsDatapoint() = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapoint(const DescribeExporterRuleListResponseBodyDatapointsDatapoint &) = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapoint(DescribeExporterRuleListResponseBodyDatapointsDatapoint &&) = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterRuleListResponseBodyDatapointsDatapoint() = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapoint& operator=(const DescribeExporterRuleListResponseBodyDatapointsDatapoint &) = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapoint& operator=(DescribeExporterRuleListResponseBodyDatapointsDatapoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->describe_ != nullptr && this->dimension_ != nullptr && this->dstName_ != nullptr && this->enabled_ != nullptr && this->metricName_ != nullptr
        && this->namespace_ != nullptr && this->ruleName_ != nullptr && this->targetWindows_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline const Models::DescribeExporterRuleListResponseBodyDatapointsDatapointDstName & dstName() const { DARABONBA_PTR_GET_CONST(dstName_, Models::DescribeExporterRuleListResponseBodyDatapointsDatapointDstName) };
    inline Models::DescribeExporterRuleListResponseBodyDatapointsDatapointDstName dstName() { DARABONBA_PTR_GET(dstName_, Models::DescribeExporterRuleListResponseBodyDatapointsDatapointDstName) };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setDstName(const Models::DescribeExporterRuleListResponseBodyDatapointsDatapointDstName & dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setDstName(Models::DescribeExporterRuleListResponseBodyDatapointsDatapointDstName && dstName) { DARABONBA_PTR_SET_RVALUE(dstName_, dstName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // targetWindows Field Functions 
    bool hasTargetWindows() const { return this->targetWindows_ != nullptr;};
    void deleteTargetWindows() { this->targetWindows_ = nullptr;};
    inline string targetWindows() const { DARABONBA_PTR_GET_DEFAULT(targetWindows_, "") };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapoint& setTargetWindows(string targetWindows) { DARABONBA_PTR_SET_VALUE(targetWindows_, targetWindows) };


  protected:
    // The time when the rule was created. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> describe_ = nullptr;
    // The associated dimensions.
    std::shared_ptr<string> dimension_ = nullptr;
    std::shared_ptr<Models::DescribeExporterRuleListResponseBodyDatapointsDatapointDstName> dstName_ = nullptr;
    // Indicates whether the rule is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The name of the metric.
    // 
    // > For more information, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/28619.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the service.
    // 
    // > For more information, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/28619.html).
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the data export rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The time window of the exported data.\\
    // Multiple windows are separated with commas (,).
    // 
    // > Data in a time window of less than 60 seconds cannot be exported.
    std::shared_ptr<string> targetWindows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
