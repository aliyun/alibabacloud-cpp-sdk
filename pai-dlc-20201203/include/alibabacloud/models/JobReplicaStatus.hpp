// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBREPLICASTATUS_HPP_
#define ALIBABACLOUD_MODELS_JOBREPLICASTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AutoScalingSpec.hpp>
#include <alibabacloud/models/ResourceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobReplicaStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobReplicaStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Dequeued, dequeued_);
      DARABONBA_PTR_TO_JSON(EstimatedAutoScalingSpec, estimatedAutoScalingSpec_);
      DARABONBA_PTR_TO_JSON(EstimatedPodCount, estimatedPodCount_);
      DARABONBA_PTR_TO_JSON(EstimatedResourceConfig, estimatedResourceConfig_);
      DARABONBA_PTR_TO_JSON(Queuing, queuing_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, JobReplicaStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Dequeued, dequeued_);
      DARABONBA_PTR_FROM_JSON(EstimatedAutoScalingSpec, estimatedAutoScalingSpec_);
      DARABONBA_PTR_FROM_JSON(EstimatedPodCount, estimatedPodCount_);
      DARABONBA_PTR_FROM_JSON(EstimatedResourceConfig, estimatedResourceConfig_);
      DARABONBA_PTR_FROM_JSON(Queuing, queuing_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    JobReplicaStatus() = default ;
    JobReplicaStatus(const JobReplicaStatus &) = default ;
    JobReplicaStatus(JobReplicaStatus &&) = default ;
    JobReplicaStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobReplicaStatus() = default ;
    JobReplicaStatus& operator=(const JobReplicaStatus &) = default ;
    JobReplicaStatus& operator=(JobReplicaStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->dequeued_ == nullptr && this->estimatedAutoScalingSpec_ == nullptr && this->estimatedPodCount_ == nullptr && this->estimatedResourceConfig_ == nullptr && this->queuing_ == nullptr
        && this->type_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int32_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0) };
    inline JobReplicaStatus& setActive(int32_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // dequeued Field Functions 
    bool hasDequeued() const { return this->dequeued_ != nullptr;};
    void deleteDequeued() { this->dequeued_ = nullptr;};
    inline int32_t getDequeued() const { DARABONBA_PTR_GET_DEFAULT(dequeued_, 0) };
    inline JobReplicaStatus& setDequeued(int32_t dequeued) { DARABONBA_PTR_SET_VALUE(dequeued_, dequeued) };


    // estimatedAutoScalingSpec Field Functions 
    bool hasEstimatedAutoScalingSpec() const { return this->estimatedAutoScalingSpec_ != nullptr;};
    void deleteEstimatedAutoScalingSpec() { this->estimatedAutoScalingSpec_ = nullptr;};
    inline const AutoScalingSpec & getEstimatedAutoScalingSpec() const { DARABONBA_PTR_GET_CONST(estimatedAutoScalingSpec_, AutoScalingSpec) };
    inline AutoScalingSpec getEstimatedAutoScalingSpec() { DARABONBA_PTR_GET(estimatedAutoScalingSpec_, AutoScalingSpec) };
    inline JobReplicaStatus& setEstimatedAutoScalingSpec(const AutoScalingSpec & estimatedAutoScalingSpec) { DARABONBA_PTR_SET_VALUE(estimatedAutoScalingSpec_, estimatedAutoScalingSpec) };
    inline JobReplicaStatus& setEstimatedAutoScalingSpec(AutoScalingSpec && estimatedAutoScalingSpec) { DARABONBA_PTR_SET_RVALUE(estimatedAutoScalingSpec_, estimatedAutoScalingSpec) };


    // estimatedPodCount Field Functions 
    bool hasEstimatedPodCount() const { return this->estimatedPodCount_ != nullptr;};
    void deleteEstimatedPodCount() { this->estimatedPodCount_ = nullptr;};
    inline int64_t getEstimatedPodCount() const { DARABONBA_PTR_GET_DEFAULT(estimatedPodCount_, 0L) };
    inline JobReplicaStatus& setEstimatedPodCount(int64_t estimatedPodCount) { DARABONBA_PTR_SET_VALUE(estimatedPodCount_, estimatedPodCount) };


    // estimatedResourceConfig Field Functions 
    bool hasEstimatedResourceConfig() const { return this->estimatedResourceConfig_ != nullptr;};
    void deleteEstimatedResourceConfig() { this->estimatedResourceConfig_ = nullptr;};
    inline const ResourceConfig & getEstimatedResourceConfig() const { DARABONBA_PTR_GET_CONST(estimatedResourceConfig_, ResourceConfig) };
    inline ResourceConfig getEstimatedResourceConfig() { DARABONBA_PTR_GET(estimatedResourceConfig_, ResourceConfig) };
    inline JobReplicaStatus& setEstimatedResourceConfig(const ResourceConfig & estimatedResourceConfig) { DARABONBA_PTR_SET_VALUE(estimatedResourceConfig_, estimatedResourceConfig) };
    inline JobReplicaStatus& setEstimatedResourceConfig(ResourceConfig && estimatedResourceConfig) { DARABONBA_PTR_SET_RVALUE(estimatedResourceConfig_, estimatedResourceConfig) };


    // queuing Field Functions 
    bool hasQueuing() const { return this->queuing_ != nullptr;};
    void deleteQueuing() { this->queuing_ = nullptr;};
    inline int32_t getQueuing() const { DARABONBA_PTR_GET_DEFAULT(queuing_, 0) };
    inline JobReplicaStatus& setQueuing(int32_t queuing) { DARABONBA_PTR_SET_VALUE(queuing_, queuing) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline JobReplicaStatus& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int32_t> active_ {};
    shared_ptr<int32_t> dequeued_ {};
    shared_ptr<AutoScalingSpec> estimatedAutoScalingSpec_ {};
    shared_ptr<int64_t> estimatedPodCount_ {};
    shared_ptr<ResourceConfig> estimatedResourceConfig_ {};
    shared_ptr<int32_t> queuing_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
