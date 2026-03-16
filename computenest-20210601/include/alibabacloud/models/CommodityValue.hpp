// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUE_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValue& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CommodityValue() = default ;
    CommodityValue(const CommodityValue &) = default ;
    CommodityValue(CommodityValue &&) = default ;
    CommodityValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValue() = default ;
    CommodityValue& operator=(const CommodityValue &) = default ;
    CommodityValue& operator=(CommodityValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(InquiryType, inquiryType_);
        DARABONBA_PTR_TO_JSON(SubOrders, subOrders_);
        DARABONBA_PTR_TO_JSON(Coupons, coupons_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(InquiryType, inquiryType_);
        DARABONBA_PTR_FROM_JSON(SubOrders, subOrders_);
        DARABONBA_PTR_FROM_JSON(Coupons, coupons_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Coupons : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Coupons& obj) { 
          DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
          DARABONBA_PTR_TO_JSON(CouponDesc, couponDesc_);
          DARABONBA_PTR_TO_JSON(CouponName, couponName_);
          DARABONBA_PTR_TO_JSON(CouponOptionNo, couponOptionNo_);
          DARABONBA_PTR_TO_JSON(Selected, selected_);
        };
        friend void from_json(const Darabonba::Json& j, Coupons& obj) { 
          DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
          DARABONBA_PTR_FROM_JSON(CouponDesc, couponDesc_);
          DARABONBA_PTR_FROM_JSON(CouponName, couponName_);
          DARABONBA_PTR_FROM_JSON(CouponOptionNo, couponOptionNo_);
          DARABONBA_PTR_FROM_JSON(Selected, selected_);
        };
        Coupons() = default ;
        Coupons(const Coupons &) = default ;
        Coupons(Coupons &&) = default ;
        Coupons(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Coupons() = default ;
        Coupons& operator=(const Coupons &) = default ;
        Coupons& operator=(Coupons &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canPromFee_ == nullptr
        && this->couponDesc_ == nullptr && this->couponName_ == nullptr && this->couponOptionNo_ == nullptr && this->selected_ == nullptr; };
        // canPromFee Field Functions 
        bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
        void deleteCanPromFee() { this->canPromFee_ = nullptr;};
        inline double getCanPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, 0.0) };
        inline Coupons& setCanPromFee(double canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


        // couponDesc Field Functions 
        bool hasCouponDesc() const { return this->couponDesc_ != nullptr;};
        void deleteCouponDesc() { this->couponDesc_ = nullptr;};
        inline string getCouponDesc() const { DARABONBA_PTR_GET_DEFAULT(couponDesc_, "") };
        inline Coupons& setCouponDesc(string couponDesc) { DARABONBA_PTR_SET_VALUE(couponDesc_, couponDesc) };


        // couponName Field Functions 
        bool hasCouponName() const { return this->couponName_ != nullptr;};
        void deleteCouponName() { this->couponName_ = nullptr;};
        inline string getCouponName() const { DARABONBA_PTR_GET_DEFAULT(couponName_, "") };
        inline Coupons& setCouponName(string couponName) { DARABONBA_PTR_SET_VALUE(couponName_, couponName) };


        // couponOptionNo Field Functions 
        bool hasCouponOptionNo() const { return this->couponOptionNo_ != nullptr;};
        void deleteCouponOptionNo() { this->couponOptionNo_ = nullptr;};
        inline string getCouponOptionNo() const { DARABONBA_PTR_GET_DEFAULT(couponOptionNo_, "") };
        inline Coupons& setCouponOptionNo(string couponOptionNo) { DARABONBA_PTR_SET_VALUE(couponOptionNo_, couponOptionNo) };


        // selected Field Functions 
        bool hasSelected() const { return this->selected_ != nullptr;};
        void deleteSelected() { this->selected_ = nullptr;};
        inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
        inline Coupons& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


      protected:
        // The payable amount.
        shared_ptr<double> canPromFee_ {};
        // The description of the coupon.
        shared_ptr<string> couponDesc_ {};
        // The name of the coupon.
        shared_ptr<string> couponName_ {};
        // The coupon ID.
        shared_ptr<string> couponOptionNo_ {};
        // Indicates whether the coupon is selected.
        shared_ptr<bool> selected_ {};
      };

      class SubOrders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubOrders& obj) { 
          DARABONBA_PTR_TO_JSON(SubOrder, subOrder_);
        };
        friend void from_json(const Darabonba::Json& j, SubOrders& obj) { 
          DARABONBA_PTR_FROM_JSON(SubOrder, subOrder_);
        };
        SubOrders() = default ;
        SubOrders(const SubOrders &) = default ;
        SubOrders(SubOrders &&) = default ;
        SubOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubOrders() = default ;
        SubOrders& operator=(const SubOrders &) = default ;
        SubOrders& operator=(SubOrders &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubOrder : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubOrder& obj) { 
            DARABONBA_PTR_TO_JSON(ModuleInstance, moduleInstance_);
          };
          friend void from_json(const Darabonba::Json& j, SubOrder& obj) { 
            DARABONBA_PTR_FROM_JSON(ModuleInstance, moduleInstance_);
          };
          SubOrder() = default ;
          SubOrder(const SubOrder &) = default ;
          SubOrder(SubOrder &&) = default ;
          SubOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubOrder() = default ;
          SubOrder& operator=(const SubOrder &) = default ;
          SubOrder& operator=(SubOrder &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ModuleInstance : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ModuleInstance& obj) { 
              DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
              DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
              DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
              DARABONBA_PTR_TO_JSON(TotalProductFee, totalProductFee_);
              DARABONBA_PTR_TO_JSON(DiscountFee, discountFee_);
              DARABONBA_PTR_TO_JSON(PayFee, payFee_);
              DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
              DARABONBA_PTR_TO_JSON(IsPricingModule, isPricingModule_);
              DARABONBA_PTR_TO_JSON(NeedOrderPay, needOrderPay_);
              DARABONBA_PTR_TO_JSON(PriceType, priceType_);
              DARABONBA_PTR_TO_JSON(ModuleAttrs, moduleAttrs_);
              DARABONBA_PTR_TO_JSON(ModuleNameEn, moduleNameEn_);
              DARABONBA_PTR_TO_JSON(PriceUnitEn, priceUnitEn_);
            };
            friend void from_json(const Darabonba::Json& j, ModuleInstance& obj) { 
              DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
              DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
              DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
              DARABONBA_PTR_FROM_JSON(TotalProductFee, totalProductFee_);
              DARABONBA_PTR_FROM_JSON(DiscountFee, discountFee_);
              DARABONBA_PTR_FROM_JSON(PayFee, payFee_);
              DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
              DARABONBA_PTR_FROM_JSON(IsPricingModule, isPricingModule_);
              DARABONBA_PTR_FROM_JSON(NeedOrderPay, needOrderPay_);
              DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
              DARABONBA_PTR_FROM_JSON(ModuleAttrs, moduleAttrs_);
              DARABONBA_PTR_FROM_JSON(ModuleNameEn, moduleNameEn_);
              DARABONBA_PTR_FROM_JSON(PriceUnitEn, priceUnitEn_);
            };
            ModuleInstance() = default ;
            ModuleInstance(const ModuleInstance &) = default ;
            ModuleInstance(ModuleInstance &&) = default ;
            ModuleInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ModuleInstance() = default ;
            ModuleInstance& operator=(const ModuleInstance &) = default ;
            ModuleInstance& operator=(ModuleInstance &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ModuleAttrs : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ModuleAttrs& obj) { 
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Code, code_);
                DARABONBA_PTR_TO_JSON(Value, value_);
                DARABONBA_PTR_TO_JSON(Unit, unit_);
              };
              friend void from_json(const Darabonba::Json& j, ModuleAttrs& obj) { 
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Code, code_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
                DARABONBA_PTR_FROM_JSON(Unit, unit_);
              };
              ModuleAttrs() = default ;
              ModuleAttrs(const ModuleAttrs &) = default ;
              ModuleAttrs(ModuleAttrs &&) = default ;
              ModuleAttrs(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ModuleAttrs() = default ;
              ModuleAttrs& operator=(const ModuleAttrs &) = default ;
              ModuleAttrs& operator=(ModuleAttrs &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->type_ == nullptr
        && this->name_ == nullptr && this->code_ == nullptr && this->value_ == nullptr && this->unit_ == nullptr; };
              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
              inline ModuleAttrs& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline ModuleAttrs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // code Field Functions 
              bool hasCode() const { return this->code_ != nullptr;};
              void deleteCode() { this->code_ = nullptr;};
              inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
              inline ModuleAttrs& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline ModuleAttrs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              // unit Field Functions 
              bool hasUnit() const { return this->unit_ != nullptr;};
              void deleteUnit() { this->unit_ = nullptr;};
              inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
              inline ModuleAttrs& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


            protected:
              // The type of the attribute. Valid values:
              // 
              // 1.  1: product
              // 2.  2\\. specifications
              // 3.  3: module
              // 4.  4: external parameters (backup)
              shared_ptr<int64_t> type_ {};
              // The attribute name.
              shared_ptr<string> name_ {};
              // The attribute code.
              shared_ptr<string> code_ {};
              // The attribute value.
              shared_ptr<string> value_ {};
              // The unit of the value.
              shared_ptr<string> unit_ {};
            };

            virtual bool empty() const override { return this->moduleId_ == nullptr
        && this->moduleName_ == nullptr && this->moduleCode_ == nullptr && this->totalProductFee_ == nullptr && this->discountFee_ == nullptr && this->payFee_ == nullptr
        && this->priceUnit_ == nullptr && this->isPricingModule_ == nullptr && this->needOrderPay_ == nullptr && this->priceType_ == nullptr && this->moduleAttrs_ == nullptr
        && this->moduleNameEn_ == nullptr && this->priceUnitEn_ == nullptr; };
            // moduleId Field Functions 
            bool hasModuleId() const { return this->moduleId_ != nullptr;};
            void deleteModuleId() { this->moduleId_ = nullptr;};
            inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
            inline ModuleInstance& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


            // moduleName Field Functions 
            bool hasModuleName() const { return this->moduleName_ != nullptr;};
            void deleteModuleName() { this->moduleName_ = nullptr;};
            inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
            inline ModuleInstance& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


            // moduleCode Field Functions 
            bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
            void deleteModuleCode() { this->moduleCode_ = nullptr;};
            inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
            inline ModuleInstance& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


            // totalProductFee Field Functions 
            bool hasTotalProductFee() const { return this->totalProductFee_ != nullptr;};
            void deleteTotalProductFee() { this->totalProductFee_ = nullptr;};
            inline double getTotalProductFee() const { DARABONBA_PTR_GET_DEFAULT(totalProductFee_, 0.0) };
            inline ModuleInstance& setTotalProductFee(double totalProductFee) { DARABONBA_PTR_SET_VALUE(totalProductFee_, totalProductFee) };


            // discountFee Field Functions 
            bool hasDiscountFee() const { return this->discountFee_ != nullptr;};
            void deleteDiscountFee() { this->discountFee_ = nullptr;};
            inline double getDiscountFee() const { DARABONBA_PTR_GET_DEFAULT(discountFee_, 0.0) };
            inline ModuleInstance& setDiscountFee(double discountFee) { DARABONBA_PTR_SET_VALUE(discountFee_, discountFee) };


            // payFee Field Functions 
            bool hasPayFee() const { return this->payFee_ != nullptr;};
            void deletePayFee() { this->payFee_ = nullptr;};
            inline double getPayFee() const { DARABONBA_PTR_GET_DEFAULT(payFee_, 0.0) };
            inline ModuleInstance& setPayFee(double payFee) { DARABONBA_PTR_SET_VALUE(payFee_, payFee) };


            // priceUnit Field Functions 
            bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
            void deletePriceUnit() { this->priceUnit_ = nullptr;};
            inline string getPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
            inline ModuleInstance& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


            // isPricingModule Field Functions 
            bool hasIsPricingModule() const { return this->isPricingModule_ != nullptr;};
            void deleteIsPricingModule() { this->isPricingModule_ = nullptr;};
            inline bool getIsPricingModule() const { DARABONBA_PTR_GET_DEFAULT(isPricingModule_, false) };
            inline ModuleInstance& setIsPricingModule(bool isPricingModule) { DARABONBA_PTR_SET_VALUE(isPricingModule_, isPricingModule) };


            // needOrderPay Field Functions 
            bool hasNeedOrderPay() const { return this->needOrderPay_ != nullptr;};
            void deleteNeedOrderPay() { this->needOrderPay_ = nullptr;};
            inline bool getNeedOrderPay() const { DARABONBA_PTR_GET_DEFAULT(needOrderPay_, false) };
            inline ModuleInstance& setNeedOrderPay(bool needOrderPay) { DARABONBA_PTR_SET_VALUE(needOrderPay_, needOrderPay) };


            // priceType Field Functions 
            bool hasPriceType() const { return this->priceType_ != nullptr;};
            void deletePriceType() { this->priceType_ = nullptr;};
            inline string getPriceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
            inline ModuleInstance& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


            // moduleAttrs Field Functions 
            bool hasModuleAttrs() const { return this->moduleAttrs_ != nullptr;};
            void deleteModuleAttrs() { this->moduleAttrs_ = nullptr;};
            inline const vector<ModuleInstance::ModuleAttrs> & getModuleAttrs() const { DARABONBA_PTR_GET_CONST(moduleAttrs_, vector<ModuleInstance::ModuleAttrs>) };
            inline vector<ModuleInstance::ModuleAttrs> getModuleAttrs() { DARABONBA_PTR_GET(moduleAttrs_, vector<ModuleInstance::ModuleAttrs>) };
            inline ModuleInstance& setModuleAttrs(const vector<ModuleInstance::ModuleAttrs> & moduleAttrs) { DARABONBA_PTR_SET_VALUE(moduleAttrs_, moduleAttrs) };
            inline ModuleInstance& setModuleAttrs(vector<ModuleInstance::ModuleAttrs> && moduleAttrs) { DARABONBA_PTR_SET_RVALUE(moduleAttrs_, moduleAttrs) };


            // moduleNameEn Field Functions 
            bool hasModuleNameEn() const { return this->moduleNameEn_ != nullptr;};
            void deleteModuleNameEn() { this->moduleNameEn_ = nullptr;};
            inline string getModuleNameEn() const { DARABONBA_PTR_GET_DEFAULT(moduleNameEn_, "") };
            inline ModuleInstance& setModuleNameEn(string moduleNameEn) { DARABONBA_PTR_SET_VALUE(moduleNameEn_, moduleNameEn) };


            // priceUnitEn Field Functions 
            bool hasPriceUnitEn() const { return this->priceUnitEn_ != nullptr;};
            void deletePriceUnitEn() { this->priceUnitEn_ = nullptr;};
            inline string getPriceUnitEn() const { DARABONBA_PTR_GET_DEFAULT(priceUnitEn_, "") };
            inline ModuleInstance& setPriceUnitEn(string priceUnitEn) { DARABONBA_PTR_SET_VALUE(priceUnitEn_, priceUnitEn) };


          protected:
            // The module ID.
            shared_ptr<int64_t> moduleId_ {};
            // The module name.
            shared_ptr<string> moduleName_ {};
            // The module code.
            shared_ptr<string> moduleCode_ {};
            // The original price (RMB).
            shared_ptr<double> totalProductFee_ {};
            // The discount amount (RMB).
            shared_ptr<double> discountFee_ {};
            // The amount actually paid (RMB).
            shared_ptr<double> payFee_ {};
            // The unit of the price.
            shared_ptr<string> priceUnit_ {};
            // Indicates whether the item is billed.
            shared_ptr<bool> isPricingModule_ {};
            // Indicates whether the order is paid.
            shared_ptr<bool> needOrderPay_ {};
            // The pricing type.
            shared_ptr<string> priceType_ {};
            // The module attributes.
            shared_ptr<vector<ModuleInstance::ModuleAttrs>> moduleAttrs_ {};
            // Module English name.
            shared_ptr<string> moduleNameEn_ {};
            // Price Unit English Name
            shared_ptr<string> priceUnitEn_ {};
          };

          virtual bool empty() const override { return this->moduleInstance_ == nullptr; };
          // moduleInstance Field Functions 
          bool hasModuleInstance() const { return this->moduleInstance_ != nullptr;};
          void deleteModuleInstance() { this->moduleInstance_ = nullptr;};
          inline const vector<SubOrder::ModuleInstance> & getModuleInstance() const { DARABONBA_PTR_GET_CONST(moduleInstance_, vector<SubOrder::ModuleInstance>) };
          inline vector<SubOrder::ModuleInstance> getModuleInstance() { DARABONBA_PTR_GET(moduleInstance_, vector<SubOrder::ModuleInstance>) };
          inline SubOrder& setModuleInstance(const vector<SubOrder::ModuleInstance> & moduleInstance) { DARABONBA_PTR_SET_VALUE(moduleInstance_, moduleInstance) };
          inline SubOrder& setModuleInstance(vector<SubOrder::ModuleInstance> && moduleInstance) { DARABONBA_PTR_SET_RVALUE(moduleInstance_, moduleInstance) };


        protected:
          // The information about the module (instance).
          shared_ptr<vector<SubOrder::ModuleInstance>> moduleInstance_ {};
        };

        virtual bool empty() const override { return this->subOrder_ == nullptr; };
        // subOrder Field Functions 
        bool hasSubOrder() const { return this->subOrder_ != nullptr;};
        void deleteSubOrder() { this->subOrder_ = nullptr;};
        inline const vector<SubOrders::SubOrder> & getSubOrder() const { DARABONBA_PTR_GET_CONST(subOrder_, vector<SubOrders::SubOrder>) };
        inline vector<SubOrders::SubOrder> getSubOrder() { DARABONBA_PTR_GET(subOrder_, vector<SubOrders::SubOrder>) };
        inline SubOrders& setSubOrder(const vector<SubOrders::SubOrder> & subOrder) { DARABONBA_PTR_SET_VALUE(subOrder_, subOrder) };
        inline SubOrders& setSubOrder(vector<SubOrders::SubOrder> && subOrder) { DARABONBA_PTR_SET_RVALUE(subOrder_, subOrder) };


      protected:
        // The order sub-item.
        shared_ptr<vector<SubOrders::SubOrder>> subOrder_ {};
      };

      class Order : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Order& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
          DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
        };
        friend void from_json(const Darabonba::Json& j, Order& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
          DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
          DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
        };
        Order() = default ;
        Order(const Order &) = default ;
        Order(Order &&) = default ;
        Order(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Order() = default ;
        Order& operator=(const Order &) = default ;
        Order& operator=(Order &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currency_ == nullptr
        && this->tradeAmount_ == nullptr && this->discountAmount_ == nullptr && this->originalAmount_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Order& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // tradeAmount Field Functions 
        bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
        void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
        inline string getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, "") };
        inline Order& setTradeAmount(string tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


        // discountAmount Field Functions 
        bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
        void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
        inline string getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, "") };
        inline Order& setDiscountAmount(string discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


        // originalAmount Field Functions 
        bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
        void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
        inline string getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
        inline Order& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


      protected:
        // The code of the native currency.
        shared_ptr<string> currency_ {};
        // Amount after the discount.
        shared_ptr<string> tradeAmount_ {};
        // The discount amount.
        shared_ptr<string> discountAmount_ {};
        // Amount before the discount.
        shared_ptr<string> originalAmount_ {};
      };

      virtual bool empty() const override { return this->order_ == nullptr
        && this->inquiryType_ == nullptr && this->subOrders_ == nullptr && this->coupons_ == nullptr; };
      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline const Result::Order & getOrder() const { DARABONBA_PTR_GET_CONST(order_, Result::Order) };
      inline Result::Order getOrder() { DARABONBA_PTR_GET(order_, Result::Order) };
      inline Result& setOrder(const Result::Order & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
      inline Result& setOrder(Result::Order && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


      // inquiryType Field Functions 
      bool hasInquiryType() const { return this->inquiryType_ != nullptr;};
      void deleteInquiryType() { this->inquiryType_ = nullptr;};
      inline string getInquiryType() const { DARABONBA_PTR_GET_DEFAULT(inquiryType_, "") };
      inline Result& setInquiryType(string inquiryType) { DARABONBA_PTR_SET_VALUE(inquiryType_, inquiryType) };


      // subOrders Field Functions 
      bool hasSubOrders() const { return this->subOrders_ != nullptr;};
      void deleteSubOrders() { this->subOrders_ = nullptr;};
      inline const Result::SubOrders & getSubOrders() const { DARABONBA_PTR_GET_CONST(subOrders_, Result::SubOrders) };
      inline Result::SubOrders getSubOrders() { DARABONBA_PTR_GET(subOrders_, Result::SubOrders) };
      inline Result& setSubOrders(const Result::SubOrders & subOrders) { DARABONBA_PTR_SET_VALUE(subOrders_, subOrders) };
      inline Result& setSubOrders(Result::SubOrders && subOrders) { DARABONBA_PTR_SET_RVALUE(subOrders_, subOrders) };


      // coupons Field Functions 
      bool hasCoupons() const { return this->coupons_ != nullptr;};
      void deleteCoupons() { this->coupons_ = nullptr;};
      inline const vector<Result::Coupons> & getCoupons() const { DARABONBA_PTR_GET_CONST(coupons_, vector<Result::Coupons>) };
      inline vector<Result::Coupons> getCoupons() { DARABONBA_PTR_GET(coupons_, vector<Result::Coupons>) };
      inline Result& setCoupons(const vector<Result::Coupons> & coupons) { DARABONBA_PTR_SET_VALUE(coupons_, coupons) };
      inline Result& setCoupons(vector<Result::Coupons> && coupons) { DARABONBA_PTR_SET_RVALUE(coupons_, coupons) };


    protected:
      // The information about the order.
      shared_ptr<Result::Order> order_ {};
      // The RFQ type. Valid values:
      // 
      // 1.  Buy: price inquiry for new resources.
      // 2.  ModificationBuy: price inquiry for resource configuration changes.
      shared_ptr<string> inquiryType_ {};
      // The order sub-items.
      shared_ptr<Result::SubOrders> subOrders_ {};
      // The coupons.
      shared_ptr<vector<Result::Coupons>> coupons_ {};
    };

    virtual bool empty() const override { return this->result_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CommodityValue::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CommodityValue::Result) };
    inline CommodityValue::Result getResult() { DARABONBA_PTR_GET(result_, CommodityValue::Result) };
    inline CommodityValue& setResult(const CommodityValue::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CommodityValue& setResult(CommodityValue::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The result model.
    shared_ptr<CommodityValue::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
