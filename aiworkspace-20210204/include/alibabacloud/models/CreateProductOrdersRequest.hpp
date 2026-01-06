// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateProductOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Products, products_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Products, products_);
    };
    CreateProductOrdersRequest() = default ;
    CreateProductOrdersRequest(const CreateProductOrdersRequest &) = default ;
    CreateProductOrdersRequest(CreateProductOrdersRequest &&) = default ;
    CreateProductOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductOrdersRequest() = default ;
    CreateProductOrdersRequest& operator=(const CreateProductOrdersRequest &) = default ;
    CreateProductOrdersRequest& operator=(CreateProductOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Products : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Products& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(InstanceProperties, instanceProperties_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(InstanceProperties, instanceProperties_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      };
      Products() = default ;
      Products(const Products &) = default ;
      Products(Products &&) = default ;
      Products(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Products() = default ;
      Products& operator=(const Products &) = default ;
      Products& operator=(Products &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceProperties& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        InstanceProperties() = default ;
        InstanceProperties(const InstanceProperties &) = default ;
        InstanceProperties(InstanceProperties &&) = default ;
        InstanceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceProperties() = default ;
        InstanceProperties& operator=(const InstanceProperties &) = default ;
        InstanceProperties& operator=(InstanceProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline InstanceProperties& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InstanceProperties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline InstanceProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The property code.
        shared_ptr<string> code_ {};
        // The property name.
        shared_ptr<string> name_ {};
        // The property value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->chargeType_ == nullptr && this->duration_ == nullptr && this->instanceProperties_ == nullptr && this->orderType_ == nullptr && this->pricingCycle_ == nullptr
        && this->productCode_ == nullptr; };
      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline Products& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Products& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Products& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // instanceProperties Field Functions 
      bool hasInstanceProperties() const { return this->instanceProperties_ != nullptr;};
      void deleteInstanceProperties() { this->instanceProperties_ = nullptr;};
      inline const vector<Products::InstanceProperties> & getInstanceProperties() const { DARABONBA_PTR_GET_CONST(instanceProperties_, vector<Products::InstanceProperties>) };
      inline vector<Products::InstanceProperties> getInstanceProperties() { DARABONBA_PTR_GET(instanceProperties_, vector<Products::InstanceProperties>) };
      inline Products& setInstanceProperties(const vector<Products::InstanceProperties> & instanceProperties) { DARABONBA_PTR_SET_VALUE(instanceProperties_, instanceProperties) };
      inline Products& setInstanceProperties(vector<Products::InstanceProperties> && instanceProperties) { DARABONBA_PTR_SET_RVALUE(instanceProperties_, instanceProperties) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline Products& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline Products& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Products& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    protected:
      // Specifies whether to automatically renew the product.
      // 
      // *   true
      // *   false
      shared_ptr<bool> autoRenew_ {};
      // The billing method. Only POSTPAY is supported.
      shared_ptr<string> chargeType_ {};
      // The purchase duration. You can use this parameter together with pricingCycle. Only 1 is supported.
      shared_ptr<int64_t> duration_ {};
      // The properties of the instance.
      // 
      // *   DataWorks_share: [ { "Code": "region", "Value": "cn-shanghai" } ]
      // *   OSS_share: [ { "Code": "commodity_type", "Value": "oss", "Name": "Object Storage Service" }, { "Code": "ord_time", "Value": "1:Hour", "Name": "1 Hour" } ]
      // *   PAI_share: None
      // *   China bid MaxCompute_share: [ { "Code": "region", "Value": "cn-hangzhou" }, { "Code": "odps_specification_type", "Value": "OdpsStandard" }, { "Code": "ord_time", "Value": "1:Hour" } ]
      // *   International bid MaxCompute_share: [ { "Code": "region", "Value": "cn-hangzhou" }, { "Code": "ord_time", "Value": "1:Hour" } ]
      shared_ptr<vector<Products::InstanceProperties>> instanceProperties_ {};
      // The type of the order. Only BUY is supported.
      shared_ptr<string> orderType_ {};
      // The billing cycle. Valid values:
      // 
      // *   Month: The price is calculated every month. DataWorks_share only supports Month.
      // *   Hour: The price is calculated every hour. OSS_share and MaxCompute_share only support Hour.
      shared_ptr<string> pricingCycle_ {};
      // The product code. Valid values:
      // 
      // *   DataWorks_share: pay-as-you-go DataWorks
      // *   MaxCompute_share: pay-as-you-go MaxCompute
      // *   PAI_share: pay-as-you-go PAI.
      // *   OSS_share: pay-as-you-go OSS
      shared_ptr<string> productCode_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->products_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateProductOrdersRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<CreateProductOrdersRequest::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<CreateProductOrdersRequest::Products>) };
    inline vector<CreateProductOrdersRequest::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<CreateProductOrdersRequest::Products>) };
    inline CreateProductOrdersRequest& setProducts(const vector<CreateProductOrdersRequest::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline CreateProductOrdersRequest& setProducts(vector<CreateProductOrdersRequest::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


  protected:
    // Specifies whether to automatically pay for the provided products.
    // 
    // *   true
    // *   false
    shared_ptr<bool> autoPay_ {};
    // The list of products to be purchased. Separate them with commas (,).
    shared_ptr<vector<CreateProductOrdersRequest::Products>> products_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
