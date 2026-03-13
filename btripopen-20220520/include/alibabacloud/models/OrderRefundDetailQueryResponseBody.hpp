// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ORDERREFUNDDETAILQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class OrderRefundDetailQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderRefundDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, OrderRefundDetailQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    OrderRefundDetailQueryResponseBody() = default ;
    OrderRefundDetailQueryResponseBody(const OrderRefundDetailQueryResponseBody &) = default ;
    OrderRefundDetailQueryResponseBody(OrderRefundDetailQueryResponseBody &&) = default ;
    OrderRefundDetailQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderRefundDetailQueryResponseBody() = default ;
    OrderRefundDetailQueryResponseBody& operator=(const OrderRefundDetailQueryResponseBody &) = default ;
    OrderRefundDetailQueryResponseBody& operator=(OrderRefundDetailQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(refund_details, refundDetails_);
        DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(refund_details, refundDetails_);
        DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RefundDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundDetails& obj) { 
          DARABONBA_PTR_TO_JSON(person_pay_channel, personPayChannel_);
          DARABONBA_PTR_TO_JSON(person_refund_id, personRefundId_);
          DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
          DARABONBA_PTR_TO_JSON(refund_amount_corp, refundAmountCorp_);
          DARABONBA_PTR_TO_JSON(refund_amount_person, refundAmountPerson_);
          DARABONBA_PTR_TO_JSON(supplier_refund_id, supplierRefundId_);
        };
        friend void from_json(const Darabonba::Json& j, RefundDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(person_pay_channel, personPayChannel_);
          DARABONBA_PTR_FROM_JSON(person_refund_id, personRefundId_);
          DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
          DARABONBA_PTR_FROM_JSON(refund_amount_corp, refundAmountCorp_);
          DARABONBA_PTR_FROM_JSON(refund_amount_person, refundAmountPerson_);
          DARABONBA_PTR_FROM_JSON(supplier_refund_id, supplierRefundId_);
        };
        RefundDetails() = default ;
        RefundDetails(const RefundDetails &) = default ;
        RefundDetails(RefundDetails &&) = default ;
        RefundDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundDetails() = default ;
        RefundDetails& operator=(const RefundDetails &) = default ;
        RefundDetails& operator=(RefundDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->personPayChannel_ == nullptr
        && this->personRefundId_ == nullptr && this->refundAmount_ == nullptr && this->refundAmountCorp_ == nullptr && this->refundAmountPerson_ == nullptr && this->supplierRefundId_ == nullptr; };
        // personPayChannel Field Functions 
        bool hasPersonPayChannel() const { return this->personPayChannel_ != nullptr;};
        void deletePersonPayChannel() { this->personPayChannel_ = nullptr;};
        inline string getPersonPayChannel() const { DARABONBA_PTR_GET_DEFAULT(personPayChannel_, "") };
        inline RefundDetails& setPersonPayChannel(string personPayChannel) { DARABONBA_PTR_SET_VALUE(personPayChannel_, personPayChannel) };


        // personRefundId Field Functions 
        bool hasPersonRefundId() const { return this->personRefundId_ != nullptr;};
        void deletePersonRefundId() { this->personRefundId_ = nullptr;};
        inline string getPersonRefundId() const { DARABONBA_PTR_GET_DEFAULT(personRefundId_, "") };
        inline RefundDetails& setPersonRefundId(string personRefundId) { DARABONBA_PTR_SET_VALUE(personRefundId_, personRefundId) };


        // refundAmount Field Functions 
        bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
        void deleteRefundAmount() { this->refundAmount_ = nullptr;};
        inline int64_t getRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0L) };
        inline RefundDetails& setRefundAmount(int64_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


        // refundAmountCorp Field Functions 
        bool hasRefundAmountCorp() const { return this->refundAmountCorp_ != nullptr;};
        void deleteRefundAmountCorp() { this->refundAmountCorp_ = nullptr;};
        inline int64_t getRefundAmountCorp() const { DARABONBA_PTR_GET_DEFAULT(refundAmountCorp_, 0L) };
        inline RefundDetails& setRefundAmountCorp(int64_t refundAmountCorp) { DARABONBA_PTR_SET_VALUE(refundAmountCorp_, refundAmountCorp) };


        // refundAmountPerson Field Functions 
        bool hasRefundAmountPerson() const { return this->refundAmountPerson_ != nullptr;};
        void deleteRefundAmountPerson() { this->refundAmountPerson_ = nullptr;};
        inline int64_t getRefundAmountPerson() const { DARABONBA_PTR_GET_DEFAULT(refundAmountPerson_, 0L) };
        inline RefundDetails& setRefundAmountPerson(int64_t refundAmountPerson) { DARABONBA_PTR_SET_VALUE(refundAmountPerson_, refundAmountPerson) };


        // supplierRefundId Field Functions 
        bool hasSupplierRefundId() const { return this->supplierRefundId_ != nullptr;};
        void deleteSupplierRefundId() { this->supplierRefundId_ = nullptr;};
        inline string getSupplierRefundId() const { DARABONBA_PTR_GET_DEFAULT(supplierRefundId_, "") };
        inline RefundDetails& setSupplierRefundId(string supplierRefundId) { DARABONBA_PTR_SET_VALUE(supplierRefundId_, supplierRefundId) };


      protected:
        shared_ptr<string> personPayChannel_ {};
        shared_ptr<string> personRefundId_ {};
        shared_ptr<int64_t> refundAmount_ {};
        shared_ptr<int64_t> refundAmountCorp_ {};
        shared_ptr<int64_t> refundAmountPerson_ {};
        shared_ptr<string> supplierRefundId_ {};
      };

      virtual bool empty() const override { return this->orderId_ == nullptr
        && this->refundDetails_ == nullptr && this->totalAmount_ == nullptr; };
      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // refundDetails Field Functions 
      bool hasRefundDetails() const { return this->refundDetails_ != nullptr;};
      void deleteRefundDetails() { this->refundDetails_ = nullptr;};
      inline const vector<Module::RefundDetails> & getRefundDetails() const { DARABONBA_PTR_GET_CONST(refundDetails_, vector<Module::RefundDetails>) };
      inline vector<Module::RefundDetails> getRefundDetails() { DARABONBA_PTR_GET(refundDetails_, vector<Module::RefundDetails>) };
      inline Module& setRefundDetails(const vector<Module::RefundDetails> & refundDetails) { DARABONBA_PTR_SET_VALUE(refundDetails_, refundDetails) };
      inline Module& setRefundDetails(vector<Module::RefundDetails> && refundDetails) { DARABONBA_PTR_SET_RVALUE(refundDetails_, refundDetails) };


      // totalAmount Field Functions 
      bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
      void deleteTotalAmount() { this->totalAmount_ = nullptr;};
      inline int64_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0L) };
      inline Module& setTotalAmount(int64_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    protected:
      shared_ptr<string> orderId_ {};
      shared_ptr<vector<Module::RefundDetails>> refundDetails_ {};
      shared_ptr<int64_t> totalAmount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->module_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OrderRefundDetailQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline OrderRefundDetailQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline OrderRefundDetailQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const OrderRefundDetailQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, OrderRefundDetailQueryResponseBody::Module) };
    inline OrderRefundDetailQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, OrderRefundDetailQueryResponseBody::Module) };
    inline OrderRefundDetailQueryResponseBody& setModule(const OrderRefundDetailQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline OrderRefundDetailQueryResponseBody& setModule(OrderRefundDetailQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline OrderRefundDetailQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<OrderRefundDetailQueryResponseBody::Module> module_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
