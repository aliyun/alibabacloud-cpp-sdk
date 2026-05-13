// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLINGBILLTIERDTO_HPP_
#define ALIBABACLOUD_MODELS_BILLINGBILLTIERDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BillingBillTierDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BillingBillTierDTO& obj) { 
      DARABONBA_PTR_TO_JSON(dimValues, dimValues_);
      DARABONBA_PTR_TO_JSON(payableAmount, payableAmount_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, BillingBillTierDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(dimValues, dimValues_);
      DARABONBA_PTR_FROM_JSON(payableAmount, payableAmount_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    BillingBillTierDTO() = default ;
    BillingBillTierDTO(const BillingBillTierDTO &) = default ;
    BillingBillTierDTO(BillingBillTierDTO &&) = default ;
    BillingBillTierDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BillingBillTierDTO() = default ;
    BillingBillTierDTO& operator=(const BillingBillTierDTO &) = default ;
    BillingBillTierDTO& operator=(BillingBillTierDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimValues_ == nullptr
        && this->payableAmount_ == nullptr && this->values_ == nullptr; };
    // dimValues Field Functions 
    bool hasDimValues() const { return this->dimValues_ != nullptr;};
    void deleteDimValues() { this->dimValues_ = nullptr;};
    inline string getDimValues() const { DARABONBA_PTR_GET_DEFAULT(dimValues_, "") };
    inline BillingBillTierDTO& setDimValues(string dimValues) { DARABONBA_PTR_SET_VALUE(dimValues_, dimValues) };


    // payableAmount Field Functions 
    bool hasPayableAmount() const { return this->payableAmount_ != nullptr;};
    void deletePayableAmount() { this->payableAmount_ = nullptr;};
    inline float getPayableAmount() const { DARABONBA_PTR_GET_DEFAULT(payableAmount_, 0.0) };
    inline BillingBillTierDTO& setPayableAmount(float payableAmount) { DARABONBA_PTR_SET_VALUE(payableAmount_, payableAmount) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline BillingBillTierDTO& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    shared_ptr<string> dimValues_ {};
    shared_ptr<float> payableAmount_ {};
    shared_ptr<string> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
