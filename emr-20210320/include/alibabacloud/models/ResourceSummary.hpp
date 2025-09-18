// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_RESOURCESUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DoubleMetric.hpp>
#include <alibabacloud/models/IntegerMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ResourceSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceSummary& obj) { 
      DARABONBA_PTR_TO_JSON(InefficientTaskRate, inefficientTaskRate_);
      DARABONBA_PTR_TO_JSON(MemoryUtilizationRate, memoryUtilizationRate_);
      DARABONBA_PTR_TO_JSON(OriginalTotalVcore, originalTotalVcore_);
      DARABONBA_PTR_TO_JSON(VcoreUtilizationRate, vcoreUtilizationRate_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(InefficientTaskRate, inefficientTaskRate_);
      DARABONBA_PTR_FROM_JSON(MemoryUtilizationRate, memoryUtilizationRate_);
      DARABONBA_PTR_FROM_JSON(OriginalTotalVcore, originalTotalVcore_);
      DARABONBA_PTR_FROM_JSON(VcoreUtilizationRate, vcoreUtilizationRate_);
    };
    ResourceSummary() = default ;
    ResourceSummary(const ResourceSummary &) = default ;
    ResourceSummary(ResourceSummary &&) = default ;
    ResourceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceSummary() = default ;
    ResourceSummary& operator=(const ResourceSummary &) = default ;
    ResourceSummary& operator=(ResourceSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inefficientTaskRate_ != nullptr
        && this->memoryUtilizationRate_ != nullptr && this->originalTotalVcore_ != nullptr && this->vcoreUtilizationRate_ != nullptr; };
    // inefficientTaskRate Field Functions 
    bool hasInefficientTaskRate() const { return this->inefficientTaskRate_ != nullptr;};
    void deleteInefficientTaskRate() { this->inefficientTaskRate_ = nullptr;};
    inline const DoubleMetric & inefficientTaskRate() const { DARABONBA_PTR_GET_CONST(inefficientTaskRate_, DoubleMetric) };
    inline DoubleMetric inefficientTaskRate() { DARABONBA_PTR_GET(inefficientTaskRate_, DoubleMetric) };
    inline ResourceSummary& setInefficientTaskRate(const DoubleMetric & inefficientTaskRate) { DARABONBA_PTR_SET_VALUE(inefficientTaskRate_, inefficientTaskRate) };
    inline ResourceSummary& setInefficientTaskRate(DoubleMetric && inefficientTaskRate) { DARABONBA_PTR_SET_RVALUE(inefficientTaskRate_, inefficientTaskRate) };


    // memoryUtilizationRate Field Functions 
    bool hasMemoryUtilizationRate() const { return this->memoryUtilizationRate_ != nullptr;};
    void deleteMemoryUtilizationRate() { this->memoryUtilizationRate_ = nullptr;};
    inline const DoubleMetric & memoryUtilizationRate() const { DARABONBA_PTR_GET_CONST(memoryUtilizationRate_, DoubleMetric) };
    inline DoubleMetric memoryUtilizationRate() { DARABONBA_PTR_GET(memoryUtilizationRate_, DoubleMetric) };
    inline ResourceSummary& setMemoryUtilizationRate(const DoubleMetric & memoryUtilizationRate) { DARABONBA_PTR_SET_VALUE(memoryUtilizationRate_, memoryUtilizationRate) };
    inline ResourceSummary& setMemoryUtilizationRate(DoubleMetric && memoryUtilizationRate) { DARABONBA_PTR_SET_RVALUE(memoryUtilizationRate_, memoryUtilizationRate) };


    // originalTotalVcore Field Functions 
    bool hasOriginalTotalVcore() const { return this->originalTotalVcore_ != nullptr;};
    void deleteOriginalTotalVcore() { this->originalTotalVcore_ = nullptr;};
    inline const IntegerMetric & originalTotalVcore() const { DARABONBA_PTR_GET_CONST(originalTotalVcore_, IntegerMetric) };
    inline IntegerMetric originalTotalVcore() { DARABONBA_PTR_GET(originalTotalVcore_, IntegerMetric) };
    inline ResourceSummary& setOriginalTotalVcore(const IntegerMetric & originalTotalVcore) { DARABONBA_PTR_SET_VALUE(originalTotalVcore_, originalTotalVcore) };
    inline ResourceSummary& setOriginalTotalVcore(IntegerMetric && originalTotalVcore) { DARABONBA_PTR_SET_RVALUE(originalTotalVcore_, originalTotalVcore) };


    // vcoreUtilizationRate Field Functions 
    bool hasVcoreUtilizationRate() const { return this->vcoreUtilizationRate_ != nullptr;};
    void deleteVcoreUtilizationRate() { this->vcoreUtilizationRate_ = nullptr;};
    inline const DoubleMetric & vcoreUtilizationRate() const { DARABONBA_PTR_GET_CONST(vcoreUtilizationRate_, DoubleMetric) };
    inline DoubleMetric vcoreUtilizationRate() { DARABONBA_PTR_GET(vcoreUtilizationRate_, DoubleMetric) };
    inline ResourceSummary& setVcoreUtilizationRate(const DoubleMetric & vcoreUtilizationRate) { DARABONBA_PTR_SET_VALUE(vcoreUtilizationRate_, vcoreUtilizationRate) };
    inline ResourceSummary& setVcoreUtilizationRate(DoubleMetric && vcoreUtilizationRate) { DARABONBA_PTR_SET_RVALUE(vcoreUtilizationRate_, vcoreUtilizationRate) };


  protected:
    std::shared_ptr<DoubleMetric> inefficientTaskRate_ = nullptr;
    std::shared_ptr<DoubleMetric> memoryUtilizationRate_ = nullptr;
    std::shared_ptr<IntegerMetric> originalTotalVcore_ = nullptr;
    std::shared_ptr<DoubleMetric> vcoreUtilizationRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
