// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEQUOTAPLANRESPONSEBODYDATAPLANLISTQUOTASUBQUOTAINFOLISTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEQUOTAPLANRESPONSEBODYDATAPLANLISTQUOTASUBQUOTAINFOLISTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter& obj) { 
      DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
      DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
      DARABONBA_PTR_TO_JSON(minCU, minCU_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
      DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
      DARABONBA_PTR_FROM_JSON(minCU, minCU_);
    };
    ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter() = default ;
    ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter(const ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter &) = default ;
    ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter(ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter &&) = default ;
    ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter() = default ;
    ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter& operator=(const ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter &) = default ;
    ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter& operator=(ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticReservedCU_ != nullptr
        && this->maxCU_ != nullptr && this->minCU_ != nullptr; };
    // elasticReservedCU Field Functions 
    bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
    void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
    inline int64_t elasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
    inline ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


    // maxCU Field Functions 
    bool hasMaxCU() const { return this->maxCU_ != nullptr;};
    void deleteMaxCU() { this->maxCU_ = nullptr;};
    inline int64_t maxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
    inline ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


    // minCU Field Functions 
    bool hasMinCU() const { return this->minCU_ != nullptr;};
    void deleteMinCU() { this->minCU_ = nullptr;};
    inline int64_t minCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
    inline ListComputeQuotaPlanResponseBodyDataPlanListQuotaSubQuotaInfoListParameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


  protected:
    std::shared_ptr<int64_t> elasticReservedCU_ = nullptr;
    std::shared_ptr<int64_t> maxCU_ = nullptr;
    std::shared_ptr<int64_t> minCU_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
