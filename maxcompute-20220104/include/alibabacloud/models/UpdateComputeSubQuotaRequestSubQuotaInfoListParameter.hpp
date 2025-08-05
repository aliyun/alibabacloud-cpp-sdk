// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTESUBQUOTAREQUESTSUBQUOTAINFOLISTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTESUBQUOTAREQUESTSUBQUOTAINFOLISTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeSubQuotaRequestSubQuotaInfoListParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& obj) { 
      DARABONBA_PTR_TO_JSON(enablePriority, enablePriority_);
      DARABONBA_PTR_TO_JSON(forceReservedMin, forceReservedMin_);
      DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
      DARABONBA_PTR_TO_JSON(minCU, minCU_);
      DARABONBA_PTR_TO_JSON(schedulerType, schedulerType_);
      DARABONBA_PTR_TO_JSON(singleJobCULimit, singleJobCULimit_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(enablePriority, enablePriority_);
      DARABONBA_PTR_FROM_JSON(forceReservedMin, forceReservedMin_);
      DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
      DARABONBA_PTR_FROM_JSON(minCU, minCU_);
      DARABONBA_PTR_FROM_JSON(schedulerType, schedulerType_);
      DARABONBA_PTR_FROM_JSON(singleJobCULimit, singleJobCULimit_);
    };
    UpdateComputeSubQuotaRequestSubQuotaInfoListParameter() = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoListParameter(const UpdateComputeSubQuotaRequestSubQuotaInfoListParameter &) = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoListParameter(UpdateComputeSubQuotaRequestSubQuotaInfoListParameter &&) = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoListParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeSubQuotaRequestSubQuotaInfoListParameter() = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& operator=(const UpdateComputeSubQuotaRequestSubQuotaInfoListParameter &) = default ;
    UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& operator=(UpdateComputeSubQuotaRequestSubQuotaInfoListParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enablePriority_ != nullptr
        && this->forceReservedMin_ != nullptr && this->maxCU_ != nullptr && this->minCU_ != nullptr && this->schedulerType_ != nullptr && this->singleJobCULimit_ != nullptr; };
    // enablePriority Field Functions 
    bool hasEnablePriority() const { return this->enablePriority_ != nullptr;};
    void deleteEnablePriority() { this->enablePriority_ = nullptr;};
    inline bool enablePriority() const { DARABONBA_PTR_GET_DEFAULT(enablePriority_, false) };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& setEnablePriority(bool enablePriority) { DARABONBA_PTR_SET_VALUE(enablePriority_, enablePriority) };


    // forceReservedMin Field Functions 
    bool hasForceReservedMin() const { return this->forceReservedMin_ != nullptr;};
    void deleteForceReservedMin() { this->forceReservedMin_ = nullptr;};
    inline bool forceReservedMin() const { DARABONBA_PTR_GET_DEFAULT(forceReservedMin_, false) };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& setForceReservedMin(bool forceReservedMin) { DARABONBA_PTR_SET_VALUE(forceReservedMin_, forceReservedMin) };


    // maxCU Field Functions 
    bool hasMaxCU() const { return this->maxCU_ != nullptr;};
    void deleteMaxCU() { this->maxCU_ = nullptr;};
    inline int64_t maxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


    // minCU Field Functions 
    bool hasMinCU() const { return this->minCU_ != nullptr;};
    void deleteMinCU() { this->minCU_ = nullptr;};
    inline int64_t minCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


    // singleJobCULimit Field Functions 
    bool hasSingleJobCULimit() const { return this->singleJobCULimit_ != nullptr;};
    void deleteSingleJobCULimit() { this->singleJobCULimit_ = nullptr;};
    inline int64_t singleJobCULimit() const { DARABONBA_PTR_GET_DEFAULT(singleJobCULimit_, 0L) };
    inline UpdateComputeSubQuotaRequestSubQuotaInfoListParameter& setSingleJobCULimit(int64_t singleJobCULimit) { DARABONBA_PTR_SET_VALUE(singleJobCULimit_, singleJobCULimit) };


  protected:
    // Specifies whether to enable the priority feature.
    std::shared_ptr<bool> enablePriority_ = nullptr;
    // Specifies whether the quota is strongly exclusive.
    std::shared_ptr<bool> forceReservedMin_ = nullptr;
    // The value of minCU in Reserved CUs.
    // > The value of maxCU must be less than or equal to the value of maxCU in the level-1 quota that you purchased.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> maxCU_ = nullptr;
    // The value of maxCU in Reserved CUs.
    // > 
    // >- The total value of minCU in all the level-2 quotas is equal to the value of minCU in the level-1 quota.
    // >- The value of minCU must be less than or equal to the value of maxCU in the level-2 quota and less than or equal to the value of minCU in the level-1 quota that you purchased.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> minCU_ = nullptr;
    // Scheduling policy of the quota.
    std::shared_ptr<string> schedulerType_ = nullptr;
    // The upper limit for CUs that can be concurrently used by a job scheduled to the quota.
    std::shared_ptr<int64_t> singleJobCULimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
