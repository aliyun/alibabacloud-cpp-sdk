// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLINGBILLSUMMARYPOINTDTO_HPP_
#define ALIBABACLOUD_MODELS_BILLINGBILLSUMMARYPOINTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BillingBillSummaryPointDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BillingBillSummaryPointDTO& obj) { 
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(totalAmount, totalAmount_);
    };
    friend void from_json(const Darabonba::Json& j, BillingBillSummaryPointDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(totalAmount, totalAmount_);
    };
    BillingBillSummaryPointDTO() = default ;
    BillingBillSummaryPointDTO(const BillingBillSummaryPointDTO &) = default ;
    BillingBillSummaryPointDTO(BillingBillSummaryPointDTO &&) = default ;
    BillingBillSummaryPointDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BillingBillSummaryPointDTO() = default ;
    BillingBillSummaryPointDTO& operator=(const BillingBillSummaryPointDTO &) = default ;
    BillingBillSummaryPointDTO& operator=(BillingBillSummaryPointDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->totalAmount_ == nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline BillingBillSummaryPointDTO& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline float getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0.0) };
    inline BillingBillSummaryPointDTO& setTotalAmount(float totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


  protected:
    shared_ptr<int64_t> timestamp_ {};
    shared_ptr<float> totalAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
