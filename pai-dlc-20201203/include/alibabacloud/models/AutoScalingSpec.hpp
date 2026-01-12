// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGSPEC_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AutoscalingMetricSpec.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class AutoScalingSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoScalingSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AutoscalingMetricSpec, autoscalingMetricSpec_);
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(PodsToDelete, podsToDelete_);
      DARABONBA_PTR_TO_JSON(ScalingStrategy, scalingStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, AutoScalingSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoscalingMetricSpec, autoscalingMetricSpec_);
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(PodsToDelete, podsToDelete_);
      DARABONBA_PTR_FROM_JSON(ScalingStrategy, scalingStrategy_);
    };
    AutoScalingSpec() = default ;
    AutoScalingSpec(const AutoScalingSpec &) = default ;
    AutoScalingSpec(AutoScalingSpec &&) = default ;
    AutoScalingSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoScalingSpec() = default ;
    AutoScalingSpec& operator=(const AutoScalingSpec &) = default ;
    AutoScalingSpec& operator=(AutoScalingSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoscalingMetricSpec_ == nullptr
        && this->maxReplicas_ == nullptr && this->minReplicas_ == nullptr && this->podsToDelete_ == nullptr && this->scalingStrategy_ == nullptr; };
    // autoscalingMetricSpec Field Functions 
    bool hasAutoscalingMetricSpec() const { return this->autoscalingMetricSpec_ != nullptr;};
    void deleteAutoscalingMetricSpec() { this->autoscalingMetricSpec_ = nullptr;};
    inline const AutoscalingMetricSpec & getAutoscalingMetricSpec() const { DARABONBA_PTR_GET_CONST(autoscalingMetricSpec_, AutoscalingMetricSpec) };
    inline AutoscalingMetricSpec getAutoscalingMetricSpec() { DARABONBA_PTR_GET(autoscalingMetricSpec_, AutoscalingMetricSpec) };
    inline AutoScalingSpec& setAutoscalingMetricSpec(const AutoscalingMetricSpec & autoscalingMetricSpec) { DARABONBA_PTR_SET_VALUE(autoscalingMetricSpec_, autoscalingMetricSpec) };
    inline AutoScalingSpec& setAutoscalingMetricSpec(AutoscalingMetricSpec && autoscalingMetricSpec) { DARABONBA_PTR_SET_RVALUE(autoscalingMetricSpec_, autoscalingMetricSpec) };


    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t getMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline AutoScalingSpec& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t getMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline AutoScalingSpec& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // podsToDelete Field Functions 
    bool hasPodsToDelete() const { return this->podsToDelete_ != nullptr;};
    void deletePodsToDelete() { this->podsToDelete_ = nullptr;};
    inline const vector<string> & getPodsToDelete() const { DARABONBA_PTR_GET_CONST(podsToDelete_, vector<string>) };
    inline vector<string> getPodsToDelete() { DARABONBA_PTR_GET(podsToDelete_, vector<string>) };
    inline AutoScalingSpec& setPodsToDelete(const vector<string> & podsToDelete) { DARABONBA_PTR_SET_VALUE(podsToDelete_, podsToDelete) };
    inline AutoScalingSpec& setPodsToDelete(vector<string> && podsToDelete) { DARABONBA_PTR_SET_RVALUE(podsToDelete_, podsToDelete) };


    // scalingStrategy Field Functions 
    bool hasScalingStrategy() const { return this->scalingStrategy_ != nullptr;};
    void deleteScalingStrategy() { this->scalingStrategy_ = nullptr;};
    inline string getScalingStrategy() const { DARABONBA_PTR_GET_DEFAULT(scalingStrategy_, "") };
    inline AutoScalingSpec& setScalingStrategy(string scalingStrategy) { DARABONBA_PTR_SET_VALUE(scalingStrategy_, scalingStrategy) };


  protected:
    shared_ptr<AutoscalingMetricSpec> autoscalingMetricSpec_ {};
    shared_ptr<int32_t> maxReplicas_ {};
    shared_ptr<int32_t> minReplicas_ {};
    shared_ptr<vector<string>> podsToDelete_ {};
    shared_ptr<string> scalingStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
