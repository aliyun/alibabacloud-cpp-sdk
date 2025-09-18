// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADVISESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_ADVISESUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DoubleMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AdviseSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdviseSummary& obj) { 
      DARABONBA_PTR_TO_JSON(MemoryUtilizationRate, memoryUtilizationRate_);
      DARABONBA_PTR_TO_JSON(VcoreUtilizationRate, vcoreUtilizationRate_);
    };
    friend void from_json(const Darabonba::Json& j, AdviseSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(MemoryUtilizationRate, memoryUtilizationRate_);
      DARABONBA_PTR_FROM_JSON(VcoreUtilizationRate, vcoreUtilizationRate_);
    };
    AdviseSummary() = default ;
    AdviseSummary(const AdviseSummary &) = default ;
    AdviseSummary(AdviseSummary &&) = default ;
    AdviseSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdviseSummary() = default ;
    AdviseSummary& operator=(const AdviseSummary &) = default ;
    AdviseSummary& operator=(AdviseSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memoryUtilizationRate_ != nullptr
        && this->vcoreUtilizationRate_ != nullptr; };
    // memoryUtilizationRate Field Functions 
    bool hasMemoryUtilizationRate() const { return this->memoryUtilizationRate_ != nullptr;};
    void deleteMemoryUtilizationRate() { this->memoryUtilizationRate_ = nullptr;};
    inline const DoubleMetric & memoryUtilizationRate() const { DARABONBA_PTR_GET_CONST(memoryUtilizationRate_, DoubleMetric) };
    inline DoubleMetric memoryUtilizationRate() { DARABONBA_PTR_GET(memoryUtilizationRate_, DoubleMetric) };
    inline AdviseSummary& setMemoryUtilizationRate(const DoubleMetric & memoryUtilizationRate) { DARABONBA_PTR_SET_VALUE(memoryUtilizationRate_, memoryUtilizationRate) };
    inline AdviseSummary& setMemoryUtilizationRate(DoubleMetric && memoryUtilizationRate) { DARABONBA_PTR_SET_RVALUE(memoryUtilizationRate_, memoryUtilizationRate) };


    // vcoreUtilizationRate Field Functions 
    bool hasVcoreUtilizationRate() const { return this->vcoreUtilizationRate_ != nullptr;};
    void deleteVcoreUtilizationRate() { this->vcoreUtilizationRate_ = nullptr;};
    inline const DoubleMetric & vcoreUtilizationRate() const { DARABONBA_PTR_GET_CONST(vcoreUtilizationRate_, DoubleMetric) };
    inline DoubleMetric vcoreUtilizationRate() { DARABONBA_PTR_GET(vcoreUtilizationRate_, DoubleMetric) };
    inline AdviseSummary& setVcoreUtilizationRate(const DoubleMetric & vcoreUtilizationRate) { DARABONBA_PTR_SET_VALUE(vcoreUtilizationRate_, vcoreUtilizationRate) };
    inline AdviseSummary& setVcoreUtilizationRate(DoubleMetric && vcoreUtilizationRate) { DARABONBA_PTR_SET_RVALUE(vcoreUtilizationRate_, vcoreUtilizationRate) };


  protected:
    std::shared_ptr<DoubleMetric> memoryUtilizationRate_ = nullptr;
    std::shared_ptr<DoubleMetric> vcoreUtilizationRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
