// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeeOfInstances, feeOfInstances_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeeOfInstances, feeOfInstances_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyInstanceChargeTypeResponseBody() = default ;
    ModifyInstanceChargeTypeResponseBody(const ModifyInstanceChargeTypeResponseBody &) = default ;
    ModifyInstanceChargeTypeResponseBody(ModifyInstanceChargeTypeResponseBody &&) = default ;
    ModifyInstanceChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceChargeTypeResponseBody() = default ;
    ModifyInstanceChargeTypeResponseBody& operator=(const ModifyInstanceChargeTypeResponseBody &) = default ;
    ModifyInstanceChargeTypeResponseBody& operator=(ModifyInstanceChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FeeOfInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FeeOfInstances& obj) { 
        DARABONBA_PTR_TO_JSON(FeeOfInstance, feeOfInstance_);
      };
      friend void from_json(const Darabonba::Json& j, FeeOfInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(FeeOfInstance, feeOfInstance_);
      };
      FeeOfInstances() = default ;
      FeeOfInstances(const FeeOfInstances &) = default ;
      FeeOfInstances(FeeOfInstances &&) = default ;
      FeeOfInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FeeOfInstances() = default ;
      FeeOfInstances& operator=(const FeeOfInstances &) = default ;
      FeeOfInstances& operator=(FeeOfInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FeeOfInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FeeOfInstance& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(Fee, fee_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, FeeOfInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(Fee, fee_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        FeeOfInstance() = default ;
        FeeOfInstance(const FeeOfInstance &) = default ;
        FeeOfInstance(FeeOfInstance &&) = default ;
        FeeOfInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FeeOfInstance() = default ;
        FeeOfInstance& operator=(const FeeOfInstance &) = default ;
        FeeOfInstance& operator=(FeeOfInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currency_ == nullptr
        && this->fee_ == nullptr && this->instanceId_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline FeeOfInstance& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // fee Field Functions 
        bool hasFee() const { return this->fee_ != nullptr;};
        void deleteFee() { this->fee_ = nullptr;};
        inline string getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, "") };
        inline FeeOfInstance& setFee(string fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline FeeOfInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The unit of currency for the bill.
        // 
        // Alibaba Cloud China site (aliyun.com): CNY.
        // 
        // Alibaba Cloud International site (alibabacloud.com): USD.
        shared_ptr<string> currency_ {};
        // The cost value.
        shared_ptr<string> fee_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->feeOfInstance_ == nullptr; };
      // feeOfInstance Field Functions 
      bool hasFeeOfInstance() const { return this->feeOfInstance_ != nullptr;};
      void deleteFeeOfInstance() { this->feeOfInstance_ = nullptr;};
      inline const vector<FeeOfInstances::FeeOfInstance> & getFeeOfInstance() const { DARABONBA_PTR_GET_CONST(feeOfInstance_, vector<FeeOfInstances::FeeOfInstance>) };
      inline vector<FeeOfInstances::FeeOfInstance> getFeeOfInstance() { DARABONBA_PTR_GET(feeOfInstance_, vector<FeeOfInstances::FeeOfInstance>) };
      inline FeeOfInstances& setFeeOfInstance(const vector<FeeOfInstances::FeeOfInstance> & feeOfInstance) { DARABONBA_PTR_SET_VALUE(feeOfInstance_, feeOfInstance) };
      inline FeeOfInstances& setFeeOfInstance(vector<FeeOfInstances::FeeOfInstance> && feeOfInstance) { DARABONBA_PTR_SET_RVALUE(feeOfInstance_, feeOfInstance) };


    protected:
      shared_ptr<vector<FeeOfInstances::FeeOfInstance>> feeOfInstance_ {};
    };

    virtual bool empty() const override { return this->feeOfInstances_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // feeOfInstances Field Functions 
    bool hasFeeOfInstances() const { return this->feeOfInstances_ != nullptr;};
    void deleteFeeOfInstances() { this->feeOfInstances_ = nullptr;};
    inline const ModifyInstanceChargeTypeResponseBody::FeeOfInstances & getFeeOfInstances() const { DARABONBA_PTR_GET_CONST(feeOfInstances_, ModifyInstanceChargeTypeResponseBody::FeeOfInstances) };
    inline ModifyInstanceChargeTypeResponseBody::FeeOfInstances getFeeOfInstances() { DARABONBA_PTR_GET(feeOfInstances_, ModifyInstanceChargeTypeResponseBody::FeeOfInstances) };
    inline ModifyInstanceChargeTypeResponseBody& setFeeOfInstances(const ModifyInstanceChargeTypeResponseBody::FeeOfInstances & feeOfInstances) { DARABONBA_PTR_SET_VALUE(feeOfInstances_, feeOfInstances) };
    inline ModifyInstanceChargeTypeResponseBody& setFeeOfInstances(ModifyInstanceChargeTypeResponseBody::FeeOfInstances && feeOfInstances) { DARABONBA_PTR_SET_RVALUE(feeOfInstances_, feeOfInstances) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ModifyInstanceChargeTypeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInstanceChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the charges for the order.
    shared_ptr<ModifyInstanceChargeTypeResponseBody::FeeOfInstances> feeOfInstances_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
