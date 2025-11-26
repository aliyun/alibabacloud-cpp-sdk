// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGCONSTRAINTSSUPPORTMETRICTAGS_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGCONSTRAINTSSUPPORTMETRICTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AutoScalingConstraintsSupportMetricTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoScalingConstraintsSupportMetricTags& obj) { 
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, AutoScalingConstraintsSupportMetricTags& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    AutoScalingConstraintsSupportMetricTags() = default ;
    AutoScalingConstraintsSupportMetricTags(const AutoScalingConstraintsSupportMetricTags &) = default ;
    AutoScalingConstraintsSupportMetricTags(AutoScalingConstraintsSupportMetricTags &&) = default ;
    AutoScalingConstraintsSupportMetricTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoScalingConstraintsSupportMetricTags() = default ;
    AutoScalingConstraintsSupportMetricTags& operator=(const AutoScalingConstraintsSupportMetricTags &) = default ;
    AutoScalingConstraintsSupportMetricTags& operator=(AutoScalingConstraintsSupportMetricTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metricName_ == nullptr
        && return this->tags_ == nullptr; };
    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline AutoScalingConstraintsSupportMetricTags& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::Tag>) };
    inline vector<Models::Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Models::Tag>) };
    inline AutoScalingConstraintsSupportMetricTags& setTags(const vector<Models::Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline AutoScalingConstraintsSupportMetricTags& setTags(vector<Models::Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // 指标名称。
    std::shared_ptr<string> metricName_ = nullptr;
    // 指标Tag。
    std::shared_ptr<vector<Models::Tag>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
