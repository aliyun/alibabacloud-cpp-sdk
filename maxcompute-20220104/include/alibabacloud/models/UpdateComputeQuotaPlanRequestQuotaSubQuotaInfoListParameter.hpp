// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUESTQUOTASUBQUOTAINFOLISTPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUESTQUOTASUBQUOTAINFOLISTPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter& obj) { 
      DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
      DARABONBA_PTR_TO_JSON(maxCU, maxCU_);
      DARABONBA_PTR_TO_JSON(minCU, minCU_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
      DARABONBA_PTR_FROM_JSON(maxCU, maxCU_);
      DARABONBA_PTR_FROM_JSON(minCU, minCU_);
    };
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter() = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter(const UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter &) = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter(UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter &&) = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter() = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter& operator=(const UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter &) = default ;
    UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter& operator=(UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter &&) = default ;
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
    inline UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


    // maxCU Field Functions 
    bool hasMaxCU() const { return this->maxCU_ != nullptr;};
    void deleteMaxCU() { this->maxCU_ = nullptr;};
    inline int64_t maxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, 0L) };
    inline UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter& setMaxCU(int64_t maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


    // minCU Field Functions 
    bool hasMinCU() const { return this->minCU_ != nullptr;};
    void deleteMinCU() { this->minCU_ = nullptr;};
    inline int64_t minCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, 0L) };
    inline UpdateComputeQuotaPlanRequestQuotaSubQuotaInfoListParameter& setMinCU(int64_t minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


  protected:
    // The value of elastic Reserved CUs.
    // > The total number of elastically reserved CUs in all the level-2 quotas is equal to the number of elastically reserved CUs in the level-1 quota.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> elasticReservedCU_ = nullptr;
    // The value of maxCU in Reserved CUs.
    // > The value of maxCU must be less than or equal to the value of maxCU in the level-1 quota that you purchased.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> maxCU_ = nullptr;
    // The value of minCU in Reserved CUs.
    // > 
    // >- The total value of minCU in all the level-2 quotas is equal to the value of minCU in the level-1 quota.
    // >- The value of minCU must be less than or equal to the value of maxCU in the level-2 quota and less than or equal to the value of minCU in the level-1 quota that you purchased.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> minCU_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
