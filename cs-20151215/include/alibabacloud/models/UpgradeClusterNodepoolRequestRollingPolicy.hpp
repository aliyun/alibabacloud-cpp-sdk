// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADECLUSTERNODEPOOLREQUESTROLLINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADECLUSTERNODEPOOLREQUESTROLLINGPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpgradeClusterNodepoolRequestRollingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeClusterNodepoolRequestRollingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(batch_interval, batchInterval_);
      DARABONBA_PTR_TO_JSON(max_parallelism, maxParallelism_);
      DARABONBA_PTR_TO_JSON(pause_policy, pausePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeClusterNodepoolRequestRollingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(batch_interval, batchInterval_);
      DARABONBA_PTR_FROM_JSON(max_parallelism, maxParallelism_);
      DARABONBA_PTR_FROM_JSON(pause_policy, pausePolicy_);
    };
    UpgradeClusterNodepoolRequestRollingPolicy() = default ;
    UpgradeClusterNodepoolRequestRollingPolicy(const UpgradeClusterNodepoolRequestRollingPolicy &) = default ;
    UpgradeClusterNodepoolRequestRollingPolicy(UpgradeClusterNodepoolRequestRollingPolicy &&) = default ;
    UpgradeClusterNodepoolRequestRollingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeClusterNodepoolRequestRollingPolicy() = default ;
    UpgradeClusterNodepoolRequestRollingPolicy& operator=(const UpgradeClusterNodepoolRequestRollingPolicy &) = default ;
    UpgradeClusterNodepoolRequestRollingPolicy& operator=(UpgradeClusterNodepoolRequestRollingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchInterval_ == nullptr
        && return this->maxParallelism_ == nullptr && return this->pausePolicy_ == nullptr; };
    // batchInterval Field Functions 
    bool hasBatchInterval() const { return this->batchInterval_ != nullptr;};
    void deleteBatchInterval() { this->batchInterval_ = nullptr;};
    inline int32_t batchInterval() const { DARABONBA_PTR_GET_DEFAULT(batchInterval_, 0) };
    inline UpgradeClusterNodepoolRequestRollingPolicy& setBatchInterval(int32_t batchInterval) { DARABONBA_PTR_SET_VALUE(batchInterval_, batchInterval) };


    // maxParallelism Field Functions 
    bool hasMaxParallelism() const { return this->maxParallelism_ != nullptr;};
    void deleteMaxParallelism() { this->maxParallelism_ = nullptr;};
    inline int32_t maxParallelism() const { DARABONBA_PTR_GET_DEFAULT(maxParallelism_, 0) };
    inline UpgradeClusterNodepoolRequestRollingPolicy& setMaxParallelism(int32_t maxParallelism) { DARABONBA_PTR_SET_VALUE(maxParallelism_, maxParallelism) };


    // pausePolicy Field Functions 
    bool hasPausePolicy() const { return this->pausePolicy_ != nullptr;};
    void deletePausePolicy() { this->pausePolicy_ = nullptr;};
    inline string pausePolicy() const { DARABONBA_PTR_GET_DEFAULT(pausePolicy_, "") };
    inline UpgradeClusterNodepoolRequestRollingPolicy& setPausePolicy(string pausePolicy) { DARABONBA_PTR_SET_VALUE(pausePolicy_, pausePolicy) };


  protected:
    // The update interval between batches takes effect only when the pause policy is set to NotPause. Unit: minutes. Valid values: 5 to 120.
    std::shared_ptr<int32_t> batchInterval_ = nullptr;
    // The maximum number of nodes per batch.
    std::shared_ptr<int32_t> maxParallelism_ = nullptr;
    // The policy used to pause the update. Valid values:
    // 
    // *   FirstBatch: pauses after the first batch is updated.
    // *   EveryBatch: pauses after each batch is updated.
    // *   NotPause: does not pause.
    std::shared_ptr<string> pausePolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
