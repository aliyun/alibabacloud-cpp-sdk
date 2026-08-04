// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPOTBIDPREVIEWITEM_HPP_
#define ALIBABACLOUD_MODELS_SPOTBIDPREVIEWITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class SpotBidPreviewItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SpotBidPreviewItem& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(allowCrossHpnZone, allowCrossHpnZone_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(gcLevel, gcLevel_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(jobName, jobName_);
      DARABONBA_PTR_TO_JSON(maxDiscount, maxDiscount_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(replicas, replicas_);
    };
    friend void from_json(const Darabonba::Json& j, SpotBidPreviewItem& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(allowCrossHpnZone, allowCrossHpnZone_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(gcLevel, gcLevel_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(jobName, jobName_);
      DARABONBA_PTR_FROM_JSON(maxDiscount, maxDiscount_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(replicas, replicas_);
    };
    SpotBidPreviewItem() = default ;
    SpotBidPreviewItem(const SpotBidPreviewItem &) = default ;
    SpotBidPreviewItem(SpotBidPreviewItem &&) = default ;
    SpotBidPreviewItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SpotBidPreviewItem() = default ;
    SpotBidPreviewItem& operator=(const SpotBidPreviewItem &) = default ;
    SpotBidPreviewItem& operator=(SpotBidPreviewItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->allowCrossHpnZone_ == nullptr && this->clusterId_ == nullptr && this->gcLevel_ == nullptr && this->instanceType_ == nullptr && this->jobName_ == nullptr
        && this->maxDiscount_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->phase_ == nullptr && this->replicas_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline SpotBidPreviewItem& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // allowCrossHpnZone Field Functions 
    bool hasAllowCrossHpnZone() const { return this->allowCrossHpnZone_ != nullptr;};
    void deleteAllowCrossHpnZone() { this->allowCrossHpnZone_ = nullptr;};
    inline bool getAllowCrossHpnZone() const { DARABONBA_PTR_GET_DEFAULT(allowCrossHpnZone_, false) };
    inline SpotBidPreviewItem& setAllowCrossHpnZone(bool allowCrossHpnZone) { DARABONBA_PTR_SET_VALUE(allowCrossHpnZone_, allowCrossHpnZone) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline SpotBidPreviewItem& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // gcLevel Field Functions 
    bool hasGcLevel() const { return this->gcLevel_ != nullptr;};
    void deleteGcLevel() { this->gcLevel_ = nullptr;};
    inline string getGcLevel() const { DARABONBA_PTR_GET_DEFAULT(gcLevel_, "") };
    inline SpotBidPreviewItem& setGcLevel(string gcLevel) { DARABONBA_PTR_SET_VALUE(gcLevel_, gcLevel) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SpotBidPreviewItem& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline SpotBidPreviewItem& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // maxDiscount Field Functions 
    bool hasMaxDiscount() const { return this->maxDiscount_ != nullptr;};
    void deleteMaxDiscount() { this->maxDiscount_ = nullptr;};
    inline double getMaxDiscount() const { DARABONBA_PTR_GET_DEFAULT(maxDiscount_, 0.0) };
    inline SpotBidPreviewItem& setMaxDiscount(double maxDiscount) { DARABONBA_PTR_SET_VALUE(maxDiscount_, maxDiscount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SpotBidPreviewItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SpotBidPreviewItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline SpotBidPreviewItem& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline SpotBidPreviewItem& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


  protected:
    // Indicates whether the spot bid is active. If set to `false`, the bid is paused.
    shared_ptr<bool> active_ {};
    // Determines whether instances can be deployed across different High-Performance Network (HPN) zones. Defaults to `false`.
    shared_ptr<bool> allowCrossHpnZone_ {};
    // The ID of the cluster where resources are provisioned.
    shared_ptr<string> clusterId_ {};
    // The GC level for the spot instance.
    shared_ptr<string> gcLevel_ {};
    // The type of compute instance.
    shared_ptr<string> instanceType_ {};
    // The name of the associated job.
    shared_ptr<string> jobName_ {};
    // The maximum discount percentage from the on-demand price.
    shared_ptr<double> maxDiscount_ {};
    // A message that provides additional details about the current phase.
    shared_ptr<string> message_ {};
    // The name of the spot bid preview.
    shared_ptr<string> name_ {};
    // The current phase of the spot bid preview. Valid values are `Pending`, `Active`, and `Failed`.
    shared_ptr<string> phase_ {};
    // The number of instance replicas.
    shared_ptr<int32_t> replicas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
