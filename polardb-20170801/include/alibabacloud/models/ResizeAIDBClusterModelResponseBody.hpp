// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEAIDBCLUSTERMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESIZEAIDBCLUSTERMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ResizeAIDBClusterModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeAIDBClusterModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentCapacity, currentCapacity_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(PoolHitCapacity, poolHitCapacity_);
      DARABONBA_PTR_TO_JSON(PoolHitRatio, poolHitRatio_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequiredDelta, requiredDelta_);
      DARABONBA_PTR_TO_JSON(TargetCapacity, targetCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeAIDBClusterModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentCapacity, currentCapacity_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(PoolHitCapacity, poolHitCapacity_);
      DARABONBA_PTR_FROM_JSON(PoolHitRatio, poolHitRatio_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequiredDelta, requiredDelta_);
      DARABONBA_PTR_FROM_JSON(TargetCapacity, targetCapacity_);
    };
    ResizeAIDBClusterModelResponseBody() = default ;
    ResizeAIDBClusterModelResponseBody(const ResizeAIDBClusterModelResponseBody &) = default ;
    ResizeAIDBClusterModelResponseBody(ResizeAIDBClusterModelResponseBody &&) = default ;
    ResizeAIDBClusterModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeAIDBClusterModelResponseBody() = default ;
    ResizeAIDBClusterModelResponseBody& operator=(const ResizeAIDBClusterModelResponseBody &) = default ;
    ResizeAIDBClusterModelResponseBody& operator=(ResizeAIDBClusterModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentCapacity_ == nullptr
        && this->DBClusterId_ == nullptr && this->dryRun_ == nullptr && this->poolHitCapacity_ == nullptr && this->poolHitRatio_ == nullptr && this->requestId_ == nullptr
        && this->requiredDelta_ == nullptr && this->targetCapacity_ == nullptr; };
    // currentCapacity Field Functions 
    bool hasCurrentCapacity() const { return this->currentCapacity_ != nullptr;};
    void deleteCurrentCapacity() { this->currentCapacity_ = nullptr;};
    inline int64_t getCurrentCapacity() const { DARABONBA_PTR_GET_DEFAULT(currentCapacity_, 0L) };
    inline ResizeAIDBClusterModelResponseBody& setCurrentCapacity(int64_t currentCapacity) { DARABONBA_PTR_SET_VALUE(currentCapacity_, currentCapacity) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ResizeAIDBClusterModelResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ResizeAIDBClusterModelResponseBody& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // poolHitCapacity Field Functions 
    bool hasPoolHitCapacity() const { return this->poolHitCapacity_ != nullptr;};
    void deletePoolHitCapacity() { this->poolHitCapacity_ = nullptr;};
    inline int64_t getPoolHitCapacity() const { DARABONBA_PTR_GET_DEFAULT(poolHitCapacity_, 0L) };
    inline ResizeAIDBClusterModelResponseBody& setPoolHitCapacity(int64_t poolHitCapacity) { DARABONBA_PTR_SET_VALUE(poolHitCapacity_, poolHitCapacity) };


    // poolHitRatio Field Functions 
    bool hasPoolHitRatio() const { return this->poolHitRatio_ != nullptr;};
    void deletePoolHitRatio() { this->poolHitRatio_ = nullptr;};
    inline double getPoolHitRatio() const { DARABONBA_PTR_GET_DEFAULT(poolHitRatio_, 0.0) };
    inline ResizeAIDBClusterModelResponseBody& setPoolHitRatio(double poolHitRatio) { DARABONBA_PTR_SET_VALUE(poolHitRatio_, poolHitRatio) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResizeAIDBClusterModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requiredDelta Field Functions 
    bool hasRequiredDelta() const { return this->requiredDelta_ != nullptr;};
    void deleteRequiredDelta() { this->requiredDelta_ = nullptr;};
    inline int64_t getRequiredDelta() const { DARABONBA_PTR_GET_DEFAULT(requiredDelta_, 0L) };
    inline ResizeAIDBClusterModelResponseBody& setRequiredDelta(int64_t requiredDelta) { DARABONBA_PTR_SET_VALUE(requiredDelta_, requiredDelta) };


    // targetCapacity Field Functions 
    bool hasTargetCapacity() const { return this->targetCapacity_ != nullptr;};
    void deleteTargetCapacity() { this->targetCapacity_ = nullptr;};
    inline int64_t getTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(targetCapacity_, 0L) };
    inline ResizeAIDBClusterModelResponseBody& setTargetCapacity(int64_t targetCapacity) { DARABONBA_PTR_SET_VALUE(targetCapacity_, targetCapacity) };


  protected:
    // The current measured capacity of the instance. This parameter is returned only when DryRun is set to true.
    shared_ptr<int64_t> currentCapacity_ {};
    // The ID of the PolarDB AI 3.0 logical instance.
    shared_ptr<string> DBClusterId_ {};
    // Indicates whether the current request performs a capacity dry run only.
    shared_ptr<bool> dryRun_ {};
    // The capacity that can be directly borrowed from the large pool without reshaping. This parameter is returned only when DryRun is set to true.
    shared_ptr<int64_t> poolHitCapacity_ {};
    // The direct hit ratio of the large pool. Valid values: 0 to 1. This parameter is returned only when DryRun is set to true.
    shared_ptr<double> poolHitRatio_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The positive difference between the target capacity and the current capacity. This parameter is returned only when DryRun is set to true.
    shared_ptr<int64_t> requiredDelta_ {};
    // The target total capacity.
    shared_ptr<int64_t> targetCapacity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
