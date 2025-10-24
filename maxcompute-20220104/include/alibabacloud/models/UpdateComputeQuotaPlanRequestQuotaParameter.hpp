// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUESTQUOTAPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTAPLANREQUESTQUOTAPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaPlanRequestQuotaParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaPlanRequestQuotaParameter& obj) { 
      DARABONBA_PTR_TO_JSON(elasticReservedCU, elasticReservedCU_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaPlanRequestQuotaParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticReservedCU, elasticReservedCU_);
    };
    UpdateComputeQuotaPlanRequestQuotaParameter() = default ;
    UpdateComputeQuotaPlanRequestQuotaParameter(const UpdateComputeQuotaPlanRequestQuotaParameter &) = default ;
    UpdateComputeQuotaPlanRequestQuotaParameter(UpdateComputeQuotaPlanRequestQuotaParameter &&) = default ;
    UpdateComputeQuotaPlanRequestQuotaParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaPlanRequestQuotaParameter() = default ;
    UpdateComputeQuotaPlanRequestQuotaParameter& operator=(const UpdateComputeQuotaPlanRequestQuotaParameter &) = default ;
    UpdateComputeQuotaPlanRequestQuotaParameter& operator=(UpdateComputeQuotaPlanRequestQuotaParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticReservedCU_ == nullptr; };
    // elasticReservedCU Field Functions 
    bool hasElasticReservedCU() const { return this->elasticReservedCU_ != nullptr;};
    void deleteElasticReservedCU() { this->elasticReservedCU_ = nullptr;};
    inline int64_t elasticReservedCU() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedCU_, 0L) };
    inline UpdateComputeQuotaPlanRequestQuotaParameter& setElasticReservedCU(int64_t elasticReservedCU) { DARABONBA_PTR_SET_VALUE(elasticReservedCU_, elasticReservedCU) };


  protected:
    // The value of elastic Reserved CUs in the level-1 quota.
    // > The default value is 0. The maximum value of this parameter must be equal to the number of subscription-based reserved CUs and cannot exceed 10,000 CUs.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> elasticReservedCU_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
