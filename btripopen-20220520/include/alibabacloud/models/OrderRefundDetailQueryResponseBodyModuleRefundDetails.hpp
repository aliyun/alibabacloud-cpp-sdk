// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYRESPONSEBODYMODULEREFUNDDETAILS_HPP_
#define ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYRESPONSEBODYMODULEREFUNDDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class OrderRefundDetailQueryResponseBodyModuleRefundDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderRefundDetailQueryResponseBodyModuleRefundDetails& obj) { 
      DARABONBA_PTR_TO_JSON(person_pay_channel, personPayChannel_);
      DARABONBA_PTR_TO_JSON(person_refund_id, personRefundId_);
      DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_TO_JSON(refund_amount_corp, refundAmountCorp_);
      DARABONBA_PTR_TO_JSON(refund_amount_person, refundAmountPerson_);
      DARABONBA_PTR_TO_JSON(supplier_refund_id, supplierRefundId_);
    };
    friend void from_json(const Darabonba::Json& j, OrderRefundDetailQueryResponseBodyModuleRefundDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(person_pay_channel, personPayChannel_);
      DARABONBA_PTR_FROM_JSON(person_refund_id, personRefundId_);
      DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_amount_corp, refundAmountCorp_);
      DARABONBA_PTR_FROM_JSON(refund_amount_person, refundAmountPerson_);
      DARABONBA_PTR_FROM_JSON(supplier_refund_id, supplierRefundId_);
    };
    OrderRefundDetailQueryResponseBodyModuleRefundDetails() = default ;
    OrderRefundDetailQueryResponseBodyModuleRefundDetails(const OrderRefundDetailQueryResponseBodyModuleRefundDetails &) = default ;
    OrderRefundDetailQueryResponseBodyModuleRefundDetails(OrderRefundDetailQueryResponseBodyModuleRefundDetails &&) = default ;
    OrderRefundDetailQueryResponseBodyModuleRefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderRefundDetailQueryResponseBodyModuleRefundDetails() = default ;
    OrderRefundDetailQueryResponseBodyModuleRefundDetails& operator=(const OrderRefundDetailQueryResponseBodyModuleRefundDetails &) = default ;
    OrderRefundDetailQueryResponseBodyModuleRefundDetails& operator=(OrderRefundDetailQueryResponseBodyModuleRefundDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->personPayChannel_ != nullptr
        && this->personRefundId_ != nullptr && this->refundAmount_ != nullptr && this->refundAmountCorp_ != nullptr && this->refundAmountPerson_ != nullptr && this->supplierRefundId_ != nullptr; };
    // personPayChannel Field Functions 
    bool hasPersonPayChannel() const { return this->personPayChannel_ != nullptr;};
    void deletePersonPayChannel() { this->personPayChannel_ = nullptr;};
    inline string personPayChannel() const { DARABONBA_PTR_GET_DEFAULT(personPayChannel_, "") };
    inline OrderRefundDetailQueryResponseBodyModuleRefundDetails& setPersonPayChannel(string personPayChannel) { DARABONBA_PTR_SET_VALUE(personPayChannel_, personPayChannel) };


    // personRefundId Field Functions 
    bool hasPersonRefundId() const { return this->personRefundId_ != nullptr;};
    void deletePersonRefundId() { this->personRefundId_ = nullptr;};
    inline string personRefundId() const { DARABONBA_PTR_GET_DEFAULT(personRefundId_, "") };
    inline OrderRefundDetailQueryResponseBodyModuleRefundDetails& setPersonRefundId(string personRefundId) { DARABONBA_PTR_SET_VALUE(personRefundId_, personRefundId) };


    // refundAmount Field Functions 
    bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
    void deleteRefundAmount() { this->refundAmount_ = nullptr;};
    inline int64_t refundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0L) };
    inline OrderRefundDetailQueryResponseBodyModuleRefundDetails& setRefundAmount(int64_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


    // refundAmountCorp Field Functions 
    bool hasRefundAmountCorp() const { return this->refundAmountCorp_ != nullptr;};
    void deleteRefundAmountCorp() { this->refundAmountCorp_ = nullptr;};
    inline int64_t refundAmountCorp() const { DARABONBA_PTR_GET_DEFAULT(refundAmountCorp_, 0L) };
    inline OrderRefundDetailQueryResponseBodyModuleRefundDetails& setRefundAmountCorp(int64_t refundAmountCorp) { DARABONBA_PTR_SET_VALUE(refundAmountCorp_, refundAmountCorp) };


    // refundAmountPerson Field Functions 
    bool hasRefundAmountPerson() const { return this->refundAmountPerson_ != nullptr;};
    void deleteRefundAmountPerson() { this->refundAmountPerson_ = nullptr;};
    inline int64_t refundAmountPerson() const { DARABONBA_PTR_GET_DEFAULT(refundAmountPerson_, 0L) };
    inline OrderRefundDetailQueryResponseBodyModuleRefundDetails& setRefundAmountPerson(int64_t refundAmountPerson) { DARABONBA_PTR_SET_VALUE(refundAmountPerson_, refundAmountPerson) };


    // supplierRefundId Field Functions 
    bool hasSupplierRefundId() const { return this->supplierRefundId_ != nullptr;};
    void deleteSupplierRefundId() { this->supplierRefundId_ = nullptr;};
    inline string supplierRefundId() const { DARABONBA_PTR_GET_DEFAULT(supplierRefundId_, "") };
    inline OrderRefundDetailQueryResponseBodyModuleRefundDetails& setSupplierRefundId(string supplierRefundId) { DARABONBA_PTR_SET_VALUE(supplierRefundId_, supplierRefundId) };


  protected:
    std::shared_ptr<string> personPayChannel_ = nullptr;
    std::shared_ptr<string> personRefundId_ = nullptr;
    std::shared_ptr<int64_t> refundAmount_ = nullptr;
    std::shared_ptr<int64_t> refundAmountCorp_ = nullptr;
    std::shared_ptr<int64_t> refundAmountPerson_ = nullptr;
    std::shared_ptr<string> supplierRefundId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
