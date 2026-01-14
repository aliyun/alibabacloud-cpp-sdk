// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMODITYPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMODITYPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeCommodityPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommodityPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Orders, orders_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommodityPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Orders, orders_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCommodityPriceRequest() = default ;
    DescribeCommodityPriceRequest(const DescribeCommodityPriceRequest &) = default ;
    DescribeCommodityPriceRequest(DescribeCommodityPriceRequest &&) = default ;
    DescribeCommodityPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommodityPriceRequest() = default ;
    DescribeCommodityPriceRequest& operator=(const DescribeCommodityPriceRequest &) = default ;
    DescribeCommodityPriceRequest& operator=(DescribeCommodityPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Orders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Orders& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(Components, components_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      };
      friend void from_json(const Darabonba::Json& j, Orders& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(Components, components_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      };
      Orders() = default ;
      Orders(const Orders &) = default ;
      Orders(Orders &&) = default ;
      Orders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Orders() = default ;
      Orders& operator=(const Orders &) = default ;
      Orders& operator=(Orders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Components : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Components& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentCode, componentCode_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
        };
        friend void from_json(const Darabonba::Json& j, Components& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentCode, componentCode_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
        };
        Components() = default ;
        Components(const Components &) = default ;
        Components(Components &&) = default ;
        Components(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Components() = default ;
        Components& operator=(const Components &) = default ;
        Components& operator=(Components &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Properties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Properties& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Properties& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Properties() = default ;
          Properties(const Properties &) = default ;
          Properties(Properties &&) = default ;
          Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Properties() = default ;
          Properties& operator=(const Properties &) = default ;
          Properties& operator=(Properties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Properties& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The code of the attribute of the commodity module.
          // 
          // The information varies based on the commodity module. Examples: **instance** (GA instance) and **ord_time** (subscription duration).
          shared_ptr<string> code_ {};
          // The value of the attribute.
          // 
          // The information varies based on the commodity module. Examples: **instance_fee** (GA instance fee) and **1:Month** (one-month subscription).
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->componentCode_ == nullptr
        && this->properties_ == nullptr; };
        // componentCode Field Functions 
        bool hasComponentCode() const { return this->componentCode_ != nullptr;};
        void deleteComponentCode() { this->componentCode_ = nullptr;};
        inline string getComponentCode() const { DARABONBA_PTR_GET_DEFAULT(componentCode_, "") };
        inline Components& setComponentCode(string componentCode) { DARABONBA_PTR_SET_VALUE(componentCode_, componentCode) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const vector<Components::Properties> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<Components::Properties>) };
        inline vector<Components::Properties> getProperties() { DARABONBA_PTR_GET(properties_, vector<Components::Properties>) };
        inline Components& setProperties(const vector<Components::Properties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline Components& setProperties(vector<Components::Properties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      protected:
        // The code of the commodity module.
        // 
        // The information varies based on the commodity module. Examples: **instance** (GA instance) and **ord_time** (subscription duration).
        shared_ptr<string> componentCode_ {};
        // The attributes of commodity modules.
        // 
        // The information varies based on the commodity module.
        shared_ptr<vector<Components::Properties>> properties_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->commodityCode_ == nullptr && this->components_ == nullptr && this->duration_ == nullptr && this->orderType_ == nullptr && this->pricingCycle_ == nullptr
        && this->quantity_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Orders& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Orders& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // components Field Functions 
      bool hasComponents() const { return this->components_ != nullptr;};
      void deleteComponents() { this->components_ = nullptr;};
      inline const vector<Orders::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<Orders::Components>) };
      inline vector<Orders::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<Orders::Components>) };
      inline Orders& setComponents(const vector<Orders::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
      inline Orders& setComponents(vector<Orders::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Orders& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline Orders& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline Orders& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
      inline Orders& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    protected:
      // The billing method. Set the value to **PREPAY**, which specifies the subscription billing method.
      shared_ptr<string> chargeType_ {};
      // The commodity code.
      // 
      // Valid values on the China site (aliyun.com):
      // 
      // *   **ga_gapluspre_public_cn**: GA instance.
      // *   **ga_plusbwppre_public_cn**: basic bandwidth plan.
      // 
      // Valid values on the international site (alibabacloud.com):
      // 
      // *   **ga_pluspre_public_intl**: GA instance.
      // *   **ga_bwppreintl_public_intl:** basic bandwidth plan.
      shared_ptr<string> commodityCode_ {};
      // The information about commodity modules.
      // 
      // The information varies based on the commodity module.
      shared_ptr<vector<Orders::Components>> components_ {};
      // The subscription duration.
      // 
      // *   Valid values if you set **PricingCycle** to **Month**: **1** to **9**.
      // *   Valid values if you set **PricingCycle** to **Year**: **1** to **3**.
      shared_ptr<int64_t> duration_ {};
      // The type of the order. Valid values:
      // 
      // *   **BUY**: purchase order.
      // *   **RENEW**: renewal order.
      // *   **UPGRADE**: upgrade order.
      shared_ptr<string> orderType_ {};
      // The billing cycle. Valid values:
      // 
      // *   **Month**
      // *   **Year**
      shared_ptr<string> pricingCycle_ {};
      // The number of instances that you want to purchase.
      shared_ptr<int64_t> quantity_ {};
    };

    virtual bool empty() const override { return this->orders_ == nullptr
        && this->promotionOptionNo_ == nullptr && this->regionId_ == nullptr; };
    // orders Field Functions 
    bool hasOrders() const { return this->orders_ != nullptr;};
    void deleteOrders() { this->orders_ = nullptr;};
    inline const vector<DescribeCommodityPriceRequest::Orders> & getOrders() const { DARABONBA_PTR_GET_CONST(orders_, vector<DescribeCommodityPriceRequest::Orders>) };
    inline vector<DescribeCommodityPriceRequest::Orders> getOrders() { DARABONBA_PTR_GET(orders_, vector<DescribeCommodityPriceRequest::Orders>) };
    inline DescribeCommodityPriceRequest& setOrders(const vector<DescribeCommodityPriceRequest::Orders> & orders) { DARABONBA_PTR_SET_VALUE(orders_, orders) };
    inline DescribeCommodityPriceRequest& setOrders(vector<DescribeCommodityPriceRequest::Orders> && orders) { DARABONBA_PTR_SET_RVALUE(orders_, orders) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline DescribeCommodityPriceRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCommodityPriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The commodity orders.
    // 
    // This parameter is required.
    shared_ptr<vector<DescribeCommodityPriceRequest::Orders>> orders_ {};
    // The coupon code.
    // 
    // >  This parameter is unavailable on the China site (aliyun.com).
    shared_ptr<string> promotionOptionNo_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
