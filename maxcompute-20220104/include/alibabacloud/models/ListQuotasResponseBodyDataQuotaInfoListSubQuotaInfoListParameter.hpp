// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYDATAQUOTAINFOLISTSUBQUOTAINFOLISTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASRESPONSEBODYDATAQUOTAINFOLISTSUBQUOTAINFOLISTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& obj) { 
      DARABONBA_PTR_TO_JSON(adhocSlot, adhocSlot_);
      DARABONBA_PTR_TO_JSON(autoScaleCPULimit, autoScaleCPULimit_);
      DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
      DARABONBA_PTR_TO_JSON(enablePriority, enablePriority_);
      DARABONBA_PTR_TO_JSON(forceReservedMin, forceReservedMin_);
      DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
      DARABONBA_PTR_TO_JSON(maxGu, maxGu_);
      DARABONBA_PTR_TO_JSON(minCU, minCU_);
      DARABONBA_PTR_TO_JSON(minGu, minGu_);
      DARABONBA_PTR_TO_JSON(schedulerType, schedulerType_);
      DARABONBA_PTR_TO_JSON(singleJobCULimit, singleJobCULimit_);
      DARABONBA_PTR_TO_JSON(slotNum, slotNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(adhocSlot, adhocSlot_);
      DARABONBA_PTR_FROM_JSON(autoScaleCPULimit, autoScaleCPULimit_);
      DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
      DARABONBA_PTR_FROM_JSON(enablePriority, enablePriority_);
      DARABONBA_PTR_FROM_JSON(forceReservedMin, forceReservedMin_);
      DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
      DARABONBA_PTR_FROM_JSON(maxGu, maxGu_);
      DARABONBA_PTR_FROM_JSON(minCU, minCU_);
      DARABONBA_PTR_FROM_JSON(minGu, minGu_);
      DARABONBA_PTR_FROM_JSON(schedulerType, schedulerType_);
      DARABONBA_PTR_FROM_JSON(singleJobCULimit, singleJobCULimit_);
      DARABONBA_PTR_FROM_JSON(slotNum, slotNum_);
    };
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter() = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter(const ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter &) = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter(ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter &&) = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter() = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& operator=(const ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter &) = default ;
    ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& operator=(ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adhocSlot_ == nullptr
        && return this->autoScaleCPULimit_ == nullptr && return this->elasticReservedCU_ == nullptr && return this->enablePriority_ == nullptr && return this->forceReservedMin_ == nullptr && return this->maxCU_ == nullptr
        && return this->maxGu_ == nullptr && return this->minCU_ == nullptr && return this->minGu_ == nullptr && return this->schedulerType_ == nullptr && return this->singleJobCULimit_ == nullptr
        && return this->slotNum_ == nullptr; };
    // adhocSlot Field Functions 
    bool hasAdhocSlot() const { return this->adhocSlot_ != nullptr;};
    void deleteAdhocSlot() { this->adhocSlot_ = nullptr;};
    inline int64_t adhocSlot() const { DARABONBA_PTR_GET_DEFAULT(adhocSlot_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setAdhocSlot(int64_t adhocSlot) { DARABONBA_PTR_SET_VALUE(adhocSlot_, adhocSlot) };


    // autoScaleCPULimit Field Functions 
    bool hasAutoScaleCPULimit() const { return this->autoScaleCPULimit_ != nullptr;};
    void deleteAutoScaleCPULimit() { this->autoScaleCPULimit_ = nullptr;};
    inline int64_t autoScaleCPULimit() const { DARABONBA_PTR_GET_DEFAULT(autoScaleCPULimit_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setAutoScaleCPULimit(int64_t autoScaleCPULimit) { DARABONBA_PTR_SET_VALUE(autoScaleCPULimit_, autoScaleCPULimit) };


    // elasticReservedCU Field Functions 
    bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
    void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
    inline int64_t elasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


    // enablePriority Field Functions 
    bool hasEnablePriority() const { return this->enablePriority_ != nullptr;};
    void deleteEnablePriority() { this->enablePriority_ = nullptr;};
    inline bool enablePriority() const { DARABONBA_PTR_GET_DEFAULT(enablePriority_, false) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setEnablePriority(bool enablePriority) { DARABONBA_PTR_SET_VALUE(enablePriority_, enablePriority) };


    // forceReservedMin Field Functions 
    bool hasForceReservedMin() const { return this->forceReservedMin_ != nullptr;};
    void deleteForceReservedMin() { this->forceReservedMin_ = nullptr;};
    inline bool forceReservedMin() const { DARABONBA_PTR_GET_DEFAULT(forceReservedMin_, false) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setForceReservedMin(bool forceReservedMin) { DARABONBA_PTR_SET_VALUE(forceReservedMin_, forceReservedMin) };


    // maxCU Field Functions 
    bool hasMaxCU() const { return this->maxCU_ != nullptr;};
    void deleteMaxCU() { this->maxCU_ = nullptr;};
    inline int64_t maxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


    // maxGu Field Functions 
    bool hasMaxGu() const { return this->maxGu_ != nullptr;};
    void deleteMaxGu() { this->maxGu_ = nullptr;};
    inline int64_t maxGu() const { DARABONBA_PTR_GET_DEFAULT(maxGu_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setMaxGu(int64_t maxGu) { DARABONBA_PTR_SET_VALUE(maxGu_, maxGu) };


    // minCU Field Functions 
    bool hasMinCU() const { return this->minCU_ != nullptr;};
    void deleteMinCU() { this->minCU_ = nullptr;};
    inline int64_t minCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


    // minGu Field Functions 
    bool hasMinGu() const { return this->minGu_ != nullptr;};
    void deleteMinGu() { this->minGu_ = nullptr;};
    inline int64_t minGu() const { DARABONBA_PTR_GET_DEFAULT(minGu_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setMinGu(int64_t minGu) { DARABONBA_PTR_SET_VALUE(minGu_, minGu) };


    // schedulerType Field Functions 
    bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
    void deleteSchedulerType() { this->schedulerType_ = nullptr;};
    inline string schedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


    // singleJobCULimit Field Functions 
    bool hasSingleJobCULimit() const { return this->singleJobCULimit_ != nullptr;};
    void deleteSingleJobCULimit() { this->singleJobCULimit_ = nullptr;};
    inline int64_t singleJobCULimit() const { DARABONBA_PTR_GET_DEFAULT(singleJobCULimit_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setSingleJobCULimit(int64_t singleJobCULimit) { DARABONBA_PTR_SET_VALUE(singleJobCULimit_, singleJobCULimit) };


    // slotNum Field Functions 
    bool hasSlotNum() const { return this->slotNum_ != nullptr;};
    void deleteSlotNum() { this->slotNum_ = nullptr;};
    inline int64_t slotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, 0L) };
    inline ListQuotasResponseBodyDataQuotaInfoListSubQuotaInfoListParameter& setSlotNum(int64_t slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


  protected:
    std::shared_ptr<int64_t> adhocSlot_ = nullptr;
    std::shared_ptr<int64_t> autoScaleCPULimit_ = nullptr;
    std::shared_ptr<int64_t> elasticReservedCU_ = nullptr;
    std::shared_ptr<bool> enablePriority_ = nullptr;
    std::shared_ptr<bool> forceReservedMin_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> maxCU_ = nullptr;
    std::shared_ptr<int64_t> maxGu_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> minCU_ = nullptr;
    std::shared_ptr<int64_t> minGu_ = nullptr;
    std::shared_ptr<string> schedulerType_ = nullptr;
    std::shared_ptr<int64_t> singleJobCULimit_ = nullptr;
    std::shared_ptr<int64_t> slotNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
