// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaleControl, saleControl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaleControl, saleControl_);
    };
    DescribeEnsSaleControlResponseBody() = default ;
    DescribeEnsSaleControlResponseBody(const DescribeEnsSaleControlResponseBody &) = default ;
    DescribeEnsSaleControlResponseBody(DescribeEnsSaleControlResponseBody &&) = default ;
    DescribeEnsSaleControlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlResponseBody() = default ;
    DescribeEnsSaleControlResponseBody& operator=(const DescribeEnsSaleControlResponseBody &) = default ;
    DescribeEnsSaleControlResponseBody& operator=(DescribeEnsSaleControlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SaleControl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SaleControl& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(SaleControlItems, saleControlItems_);
      };
      friend void from_json(const Darabonba::Json& j, SaleControl& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(SaleControlItems, saleControlItems_);
      };
      SaleControl() = default ;
      SaleControl(const SaleControl &) = default ;
      SaleControl(SaleControl &&) = default ;
      SaleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SaleControl() = default ;
      SaleControl& operator=(const SaleControl &) = default ;
      SaleControl& operator=(SaleControl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SaleControlItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SaleControlItems& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_TO_JSON(SaleControlItem, saleControlItem_);
        };
        friend void from_json(const Darabonba::Json& j, SaleControlItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_FROM_JSON(SaleControlItem, saleControlItem_);
        };
        SaleControlItems() = default ;
        SaleControlItems(const SaleControlItems &) = default ;
        SaleControlItems(SaleControlItems &&) = default ;
        SaleControlItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SaleControlItems() = default ;
        SaleControlItems& operator=(const SaleControlItems &) = default ;
        SaleControlItems& operator=(SaleControlItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SaleControlItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SaleControlItem& obj) { 
            DARABONBA_PTR_TO_JSON(BasicSaleControl, basicSaleControl_);
            DARABONBA_PTR_TO_JSON(ConditionSaleControl, conditionSaleControl_);
          };
          friend void from_json(const Darabonba::Json& j, SaleControlItem& obj) { 
            DARABONBA_PTR_FROM_JSON(BasicSaleControl, basicSaleControl_);
            DARABONBA_PTR_FROM_JSON(ConditionSaleControl, conditionSaleControl_);
          };
          SaleControlItem() = default ;
          SaleControlItem(const SaleControlItem &) = default ;
          SaleControlItem(SaleControlItem &&) = default ;
          SaleControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SaleControlItem() = default ;
          SaleControlItem& operator=(const SaleControlItem &) = default ;
          SaleControlItem& operator=(SaleControlItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConditionSaleControl : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConditionSaleControl& obj) { 
              DARABONBA_PTR_TO_JSON(ConditionControl, conditionControl_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
            };
            friend void from_json(const Darabonba::Json& j, ConditionSaleControl& obj) { 
              DARABONBA_PTR_FROM_JSON(ConditionControl, conditionControl_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
            };
            ConditionSaleControl() = default ;
            ConditionSaleControl(const ConditionSaleControl &) = default ;
            ConditionSaleControl(ConditionSaleControl &&) = default ;
            ConditionSaleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConditionSaleControl() = default ;
            ConditionSaleControl& operator=(const ConditionSaleControl &) = default ;
            ConditionSaleControl& operator=(ConditionSaleControl &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ModuleValue : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ModuleValue& obj) { 
                DARABONBA_PTR_TO_JSON(ModuleMaxValue, moduleMaxValue_);
                DARABONBA_PTR_TO_JSON(ModuleMinValue, moduleMinValue_);
                DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
              };
              friend void from_json(const Darabonba::Json& j, ModuleValue& obj) { 
                DARABONBA_PTR_FROM_JSON(ModuleMaxValue, moduleMaxValue_);
                DARABONBA_PTR_FROM_JSON(ModuleMinValue, moduleMinValue_);
                DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
              };
              ModuleValue() = default ;
              ModuleValue(const ModuleValue &) = default ;
              ModuleValue(ModuleValue &&) = default ;
              ModuleValue(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ModuleValue() = default ;
              ModuleValue& operator=(const ModuleValue &) = default ;
              ModuleValue& operator=(ModuleValue &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->moduleMaxValue_ == nullptr
        && this->moduleMinValue_ == nullptr && this->moduleValue_ == nullptr; };
              // moduleMaxValue Field Functions 
              bool hasModuleMaxValue() const { return this->moduleMaxValue_ != nullptr;};
              void deleteModuleMaxValue() { this->moduleMaxValue_ = nullptr;};
              inline string getModuleMaxValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMaxValue_, "") };
              inline ModuleValue& setModuleMaxValue(string moduleMaxValue) { DARABONBA_PTR_SET_VALUE(moduleMaxValue_, moduleMaxValue) };


              // moduleMinValue Field Functions 
              bool hasModuleMinValue() const { return this->moduleMinValue_ != nullptr;};
              void deleteModuleMinValue() { this->moduleMinValue_ = nullptr;};
              inline string getModuleMinValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMinValue_, "") };
              inline ModuleValue& setModuleMinValue(string moduleMinValue) { DARABONBA_PTR_SET_VALUE(moduleMinValue_, moduleMinValue) };


              // moduleValue Field Functions 
              bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
              void deleteModuleValue() { this->moduleValue_ = nullptr;};
              inline const vector<string> & getModuleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, vector<string>) };
              inline vector<string> getModuleValue() { DARABONBA_PTR_GET(moduleValue_, vector<string>) };
              inline ModuleValue& setModuleValue(const vector<string> & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
              inline ModuleValue& setModuleValue(vector<string> && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


            protected:
              shared_ptr<string> moduleMaxValue_ {};
              shared_ptr<string> moduleMinValue_ {};
              shared_ptr<vector<string>> moduleValue_ {};
            };

            class ConditionControl : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ConditionControl& obj) { 
                DARABONBA_PTR_TO_JSON(ConditionControlModuleCode, conditionControlModuleCode_);
                DARABONBA_PTR_TO_JSON(ConditionControlModuleValue, conditionControlModuleValue_);
              };
              friend void from_json(const Darabonba::Json& j, ConditionControl& obj) { 
                DARABONBA_PTR_FROM_JSON(ConditionControlModuleCode, conditionControlModuleCode_);
                DARABONBA_PTR_FROM_JSON(ConditionControlModuleValue, conditionControlModuleValue_);
              };
              ConditionControl() = default ;
              ConditionControl(const ConditionControl &) = default ;
              ConditionControl(ConditionControl &&) = default ;
              ConditionControl(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ConditionControl() = default ;
              ConditionControl& operator=(const ConditionControl &) = default ;
              ConditionControl& operator=(ConditionControl &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->conditionControlModuleCode_ == nullptr
        && this->conditionControlModuleValue_ == nullptr; };
              // conditionControlModuleCode Field Functions 
              bool hasConditionControlModuleCode() const { return this->conditionControlModuleCode_ != nullptr;};
              void deleteConditionControlModuleCode() { this->conditionControlModuleCode_ = nullptr;};
              inline string getConditionControlModuleCode() const { DARABONBA_PTR_GET_DEFAULT(conditionControlModuleCode_, "") };
              inline ConditionControl& setConditionControlModuleCode(string conditionControlModuleCode) { DARABONBA_PTR_SET_VALUE(conditionControlModuleCode_, conditionControlModuleCode) };


              // conditionControlModuleValue Field Functions 
              bool hasConditionControlModuleValue() const { return this->conditionControlModuleValue_ != nullptr;};
              void deleteConditionControlModuleValue() { this->conditionControlModuleValue_ = nullptr;};
              inline string getConditionControlModuleValue() const { DARABONBA_PTR_GET_DEFAULT(conditionControlModuleValue_, "") };
              inline ConditionControl& setConditionControlModuleValue(string conditionControlModuleValue) { DARABONBA_PTR_SET_VALUE(conditionControlModuleValue_, conditionControlModuleValue) };


            protected:
              shared_ptr<string> conditionControlModuleCode_ {};
              shared_ptr<string> conditionControlModuleValue_ {};
            };

            virtual bool empty() const override { return this->conditionControl_ == nullptr
        && this->description_ == nullptr && this->moduleValue_ == nullptr && this->operator_ == nullptr; };
            // conditionControl Field Functions 
            bool hasConditionControl() const { return this->conditionControl_ != nullptr;};
            void deleteConditionControl() { this->conditionControl_ = nullptr;};
            inline const ConditionSaleControl::ConditionControl & getConditionControl() const { DARABONBA_PTR_GET_CONST(conditionControl_, ConditionSaleControl::ConditionControl) };
            inline ConditionSaleControl::ConditionControl getConditionControl() { DARABONBA_PTR_GET(conditionControl_, ConditionSaleControl::ConditionControl) };
            inline ConditionSaleControl& setConditionControl(const ConditionSaleControl::ConditionControl & conditionControl) { DARABONBA_PTR_SET_VALUE(conditionControl_, conditionControl) };
            inline ConditionSaleControl& setConditionControl(ConditionSaleControl::ConditionControl && conditionControl) { DARABONBA_PTR_SET_RVALUE(conditionControl_, conditionControl) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline ConditionSaleControl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // moduleValue Field Functions 
            bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
            void deleteModuleValue() { this->moduleValue_ = nullptr;};
            inline const ConditionSaleControl::ModuleValue & getModuleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, ConditionSaleControl::ModuleValue) };
            inline ConditionSaleControl::ModuleValue getModuleValue() { DARABONBA_PTR_GET(moduleValue_, ConditionSaleControl::ModuleValue) };
            inline ConditionSaleControl& setModuleValue(const ConditionSaleControl::ModuleValue & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
            inline ConditionSaleControl& setModuleValue(ConditionSaleControl::ModuleValue && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline ConditionSaleControl& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          protected:
            shared_ptr<ConditionSaleControl::ConditionControl> conditionControl_ {};
            shared_ptr<string> description_ {};
            shared_ptr<ConditionSaleControl::ModuleValue> moduleValue_ {};
            shared_ptr<string> operator_ {};
          };

          class BasicSaleControl : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BasicSaleControl& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
            };
            friend void from_json(const Darabonba::Json& j, BasicSaleControl& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
            };
            BasicSaleControl() = default ;
            BasicSaleControl(const BasicSaleControl &) = default ;
            BasicSaleControl(BasicSaleControl &&) = default ;
            BasicSaleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BasicSaleControl() = default ;
            BasicSaleControl& operator=(const BasicSaleControl &) = default ;
            BasicSaleControl& operator=(BasicSaleControl &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ModuleValue : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ModuleValue& obj) { 
                DARABONBA_PTR_TO_JSON(ModuleMaxValue, moduleMaxValue_);
                DARABONBA_PTR_TO_JSON(ModuleMinValue, moduleMinValue_);
                DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
              };
              friend void from_json(const Darabonba::Json& j, ModuleValue& obj) { 
                DARABONBA_PTR_FROM_JSON(ModuleMaxValue, moduleMaxValue_);
                DARABONBA_PTR_FROM_JSON(ModuleMinValue, moduleMinValue_);
                DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
              };
              ModuleValue() = default ;
              ModuleValue(const ModuleValue &) = default ;
              ModuleValue(ModuleValue &&) = default ;
              ModuleValue(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ModuleValue() = default ;
              ModuleValue& operator=(const ModuleValue &) = default ;
              ModuleValue& operator=(ModuleValue &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->moduleMaxValue_ == nullptr
        && this->moduleMinValue_ == nullptr && this->moduleValue_ == nullptr; };
              // moduleMaxValue Field Functions 
              bool hasModuleMaxValue() const { return this->moduleMaxValue_ != nullptr;};
              void deleteModuleMaxValue() { this->moduleMaxValue_ = nullptr;};
              inline string getModuleMaxValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMaxValue_, "") };
              inline ModuleValue& setModuleMaxValue(string moduleMaxValue) { DARABONBA_PTR_SET_VALUE(moduleMaxValue_, moduleMaxValue) };


              // moduleMinValue Field Functions 
              bool hasModuleMinValue() const { return this->moduleMinValue_ != nullptr;};
              void deleteModuleMinValue() { this->moduleMinValue_ = nullptr;};
              inline string getModuleMinValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMinValue_, "") };
              inline ModuleValue& setModuleMinValue(string moduleMinValue) { DARABONBA_PTR_SET_VALUE(moduleMinValue_, moduleMinValue) };


              // moduleValue Field Functions 
              bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
              void deleteModuleValue() { this->moduleValue_ = nullptr;};
              inline const vector<string> & getModuleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, vector<string>) };
              inline vector<string> getModuleValue() { DARABONBA_PTR_GET(moduleValue_, vector<string>) };
              inline ModuleValue& setModuleValue(const vector<string> & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
              inline ModuleValue& setModuleValue(vector<string> && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


            protected:
              shared_ptr<string> moduleMaxValue_ {};
              shared_ptr<string> moduleMinValue_ {};
              shared_ptr<vector<string>> moduleValue_ {};
            };

            virtual bool empty() const override { return this->description_ == nullptr
        && this->moduleValue_ == nullptr && this->operator_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline BasicSaleControl& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // moduleValue Field Functions 
            bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
            void deleteModuleValue() { this->moduleValue_ = nullptr;};
            inline const BasicSaleControl::ModuleValue & getModuleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, BasicSaleControl::ModuleValue) };
            inline BasicSaleControl::ModuleValue getModuleValue() { DARABONBA_PTR_GET(moduleValue_, BasicSaleControl::ModuleValue) };
            inline BasicSaleControl& setModuleValue(const BasicSaleControl::ModuleValue & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
            inline BasicSaleControl& setModuleValue(BasicSaleControl::ModuleValue && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline BasicSaleControl& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          protected:
            shared_ptr<string> description_ {};
            shared_ptr<BasicSaleControl::ModuleValue> moduleValue_ {};
            shared_ptr<string> operator_ {};
          };

          virtual bool empty() const override { return this->basicSaleControl_ == nullptr
        && this->conditionSaleControl_ == nullptr; };
          // basicSaleControl Field Functions 
          bool hasBasicSaleControl() const { return this->basicSaleControl_ != nullptr;};
          void deleteBasicSaleControl() { this->basicSaleControl_ = nullptr;};
          inline const SaleControlItem::BasicSaleControl & getBasicSaleControl() const { DARABONBA_PTR_GET_CONST(basicSaleControl_, SaleControlItem::BasicSaleControl) };
          inline SaleControlItem::BasicSaleControl getBasicSaleControl() { DARABONBA_PTR_GET(basicSaleControl_, SaleControlItem::BasicSaleControl) };
          inline SaleControlItem& setBasicSaleControl(const SaleControlItem::BasicSaleControl & basicSaleControl) { DARABONBA_PTR_SET_VALUE(basicSaleControl_, basicSaleControl) };
          inline SaleControlItem& setBasicSaleControl(SaleControlItem::BasicSaleControl && basicSaleControl) { DARABONBA_PTR_SET_RVALUE(basicSaleControl_, basicSaleControl) };


          // conditionSaleControl Field Functions 
          bool hasConditionSaleControl() const { return this->conditionSaleControl_ != nullptr;};
          void deleteConditionSaleControl() { this->conditionSaleControl_ = nullptr;};
          inline const vector<SaleControlItem::ConditionSaleControl> & getConditionSaleControl() const { DARABONBA_PTR_GET_CONST(conditionSaleControl_, vector<SaleControlItem::ConditionSaleControl>) };
          inline vector<SaleControlItem::ConditionSaleControl> getConditionSaleControl() { DARABONBA_PTR_GET(conditionSaleControl_, vector<SaleControlItem::ConditionSaleControl>) };
          inline SaleControlItem& setConditionSaleControl(const vector<SaleControlItem::ConditionSaleControl> & conditionSaleControl) { DARABONBA_PTR_SET_VALUE(conditionSaleControl_, conditionSaleControl) };
          inline SaleControlItem& setConditionSaleControl(vector<SaleControlItem::ConditionSaleControl> && conditionSaleControl) { DARABONBA_PTR_SET_RVALUE(conditionSaleControl_, conditionSaleControl) };


        protected:
          shared_ptr<SaleControlItem::BasicSaleControl> basicSaleControl_ {};
          shared_ptr<vector<SaleControlItem::ConditionSaleControl>> conditionSaleControl_ {};
        };

        virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->saleControlItem_ == nullptr; };
        // moduleCode Field Functions 
        bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
        void deleteModuleCode() { this->moduleCode_ = nullptr;};
        inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
        inline SaleControlItems& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


        // saleControlItem Field Functions 
        bool hasSaleControlItem() const { return this->saleControlItem_ != nullptr;};
        void deleteSaleControlItem() { this->saleControlItem_ = nullptr;};
        inline const SaleControlItems::SaleControlItem & getSaleControlItem() const { DARABONBA_PTR_GET_CONST(saleControlItem_, SaleControlItems::SaleControlItem) };
        inline SaleControlItems::SaleControlItem getSaleControlItem() { DARABONBA_PTR_GET(saleControlItem_, SaleControlItems::SaleControlItem) };
        inline SaleControlItems& setSaleControlItem(const SaleControlItems::SaleControlItem & saleControlItem) { DARABONBA_PTR_SET_VALUE(saleControlItem_, saleControlItem) };
        inline SaleControlItems& setSaleControlItem(SaleControlItems::SaleControlItem && saleControlItem) { DARABONBA_PTR_SET_RVALUE(saleControlItem_, saleControlItem) };


      protected:
        shared_ptr<string> moduleCode_ {};
        shared_ptr<SaleControlItems::SaleControlItem> saleControlItem_ {};
      };

      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->orderType_ == nullptr && this->saleControlItems_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline SaleControl& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline SaleControl& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // saleControlItems Field Functions 
      bool hasSaleControlItems() const { return this->saleControlItems_ != nullptr;};
      void deleteSaleControlItems() { this->saleControlItems_ = nullptr;};
      inline const vector<SaleControl::SaleControlItems> & getSaleControlItems() const { DARABONBA_PTR_GET_CONST(saleControlItems_, vector<SaleControl::SaleControlItems>) };
      inline vector<SaleControl::SaleControlItems> getSaleControlItems() { DARABONBA_PTR_GET(saleControlItems_, vector<SaleControl::SaleControlItems>) };
      inline SaleControl& setSaleControlItems(const vector<SaleControl::SaleControlItems> & saleControlItems) { DARABONBA_PTR_SET_VALUE(saleControlItems_, saleControlItems) };
      inline SaleControl& setSaleControlItems(vector<SaleControl::SaleControlItems> && saleControlItems) { DARABONBA_PTR_SET_RVALUE(saleControlItems_, saleControlItems) };


    protected:
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> orderType_ {};
      shared_ptr<vector<SaleControl::SaleControlItems>> saleControlItems_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->saleControl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsSaleControlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleControl Field Functions 
    bool hasSaleControl() const { return this->saleControl_ != nullptr;};
    void deleteSaleControl() { this->saleControl_ = nullptr;};
    inline const vector<DescribeEnsSaleControlResponseBody::SaleControl> & getSaleControl() const { DARABONBA_PTR_GET_CONST(saleControl_, vector<DescribeEnsSaleControlResponseBody::SaleControl>) };
    inline vector<DescribeEnsSaleControlResponseBody::SaleControl> getSaleControl() { DARABONBA_PTR_GET(saleControl_, vector<DescribeEnsSaleControlResponseBody::SaleControl>) };
    inline DescribeEnsSaleControlResponseBody& setSaleControl(const vector<DescribeEnsSaleControlResponseBody::SaleControl> & saleControl) { DARABONBA_PTR_SET_VALUE(saleControl_, saleControl) };
    inline DescribeEnsSaleControlResponseBody& setSaleControl(vector<DescribeEnsSaleControlResponseBody::SaleControl> && saleControl) { DARABONBA_PTR_SET_RVALUE(saleControl_, saleControl) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeEnsSaleControlResponseBody::SaleControl>> saleControl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
