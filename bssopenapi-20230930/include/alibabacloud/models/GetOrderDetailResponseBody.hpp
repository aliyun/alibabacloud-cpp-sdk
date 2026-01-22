// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOrderDetailResponseBody() = default ;
    GetOrderDetailResponseBody(const GetOrderDetailResponseBody &) = default ;
    GetOrderDetailResponseBody(GetOrderDetailResponseBody &&) = default ;
    GetOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderDetailResponseBody() = default ;
    GetOrderDetailResponseBody& operator=(const GetOrderDetailResponseBody &) = default ;
    GetOrderDetailResponseBody& operator=(GetOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(OrderList, orderList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(OrderList, orderList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderList& obj) { 
          DARABONBA_PTR_TO_JSON(Order, order_);
        };
        friend void from_json(const Darabonba::Json& j, OrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(Order, order_);
        };
        OrderList() = default ;
        OrderList(const OrderList &) = default ;
        OrderList(OrderList &&) = default ;
        OrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderList() = default ;
        OrderList& operator=(const OrderList &) = default ;
        OrderList& operator=(OrderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Order : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Order& obj) { 
            DARABONBA_PTR_TO_JSON(AfterTaxAmount, afterTaxAmount_);
            DARABONBA_PTR_TO_JSON(BillModuleConfig, billModuleConfig_);
            DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_TO_JSON(Config, config_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(ExtendInfos, extendInfos_);
            DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(OrderId, orderId_);
            DARABONBA_PTR_TO_JSON(OrderSubType, orderSubType_);
            DARABONBA_PTR_TO_JSON(OrderType, orderType_);
            DARABONBA_PTR_TO_JSON(OriginalConfig, originalConfig_);
            DARABONBA_PTR_TO_JSON(OriginalModuleConfig, originalModuleConfig_);
            DARABONBA_PTR_TO_JSON(PaymentCurrency, paymentCurrency_);
            DARABONBA_PTR_TO_JSON(PaymentStatus, paymentStatus_);
            DARABONBA_PTR_TO_JSON(PaymentTime, paymentTime_);
            DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
            DARABONBA_PTR_TO_JSON(PretaxAmountLocal, pretaxAmountLocal_);
            DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
            DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
            DARABONBA_PTR_TO_JSON(ProductType, productType_);
            DARABONBA_PTR_TO_JSON(Quantity, quantity_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(RelatedOrderId, relatedOrderId_);
            DARABONBA_PTR_TO_JSON(SubOrderId, subOrderId_);
            DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
            DARABONBA_PTR_TO_JSON(Tax, tax_);
            DARABONBA_PTR_TO_JSON(UsageEndTime, usageEndTime_);
            DARABONBA_PTR_TO_JSON(UsageStartTime, usageStartTime_);
          };
          friend void from_json(const Darabonba::Json& j, Order& obj) { 
            DARABONBA_PTR_FROM_JSON(AfterTaxAmount, afterTaxAmount_);
            DARABONBA_PTR_FROM_JSON(BillModuleConfig, billModuleConfig_);
            DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_FROM_JSON(Config, config_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(ExtendInfos, extendInfos_);
            DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
            DARABONBA_PTR_FROM_JSON(OrderSubType, orderSubType_);
            DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
            DARABONBA_PTR_FROM_JSON(OriginalConfig, originalConfig_);
            DARABONBA_PTR_FROM_JSON(OriginalModuleConfig, originalModuleConfig_);
            DARABONBA_PTR_FROM_JSON(PaymentCurrency, paymentCurrency_);
            DARABONBA_PTR_FROM_JSON(PaymentStatus, paymentStatus_);
            DARABONBA_PTR_FROM_JSON(PaymentTime, paymentTime_);
            DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
            DARABONBA_PTR_FROM_JSON(PretaxAmountLocal, pretaxAmountLocal_);
            DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
            DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
            DARABONBA_PTR_FROM_JSON(ProductType, productType_);
            DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(RelatedOrderId, relatedOrderId_);
            DARABONBA_PTR_FROM_JSON(SubOrderId, subOrderId_);
            DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
            DARABONBA_PTR_FROM_JSON(Tax, tax_);
            DARABONBA_PTR_FROM_JSON(UsageEndTime, usageEndTime_);
            DARABONBA_PTR_FROM_JSON(UsageStartTime, usageStartTime_);
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
          class OriginalModuleConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OriginalModuleConfig& obj) { 
              DARABONBA_PTR_TO_JSON(originalModuleConfig, originalModuleConfig_);
            };
            friend void from_json(const Darabonba::Json& j, OriginalModuleConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(originalModuleConfig, originalModuleConfig_);
            };
            OriginalModuleConfig() = default ;
            OriginalModuleConfig(const OriginalModuleConfig &) = default ;
            OriginalModuleConfig(OriginalModuleConfig &&) = default ;
            OriginalModuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OriginalModuleConfig() = default ;
            OriginalModuleConfig& operator=(const OriginalModuleConfig &) = default ;
            OriginalModuleConfig& operator=(OriginalModuleConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OriginalModuleConfigItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OriginalModuleConfigItem& obj) { 
                DARABONBA_PTR_TO_JSON(Code, code_);
                DARABONBA_PTR_TO_JSON(ModuleProperties, moduleProperties_);
                DARABONBA_PTR_TO_JSON(Name, name_);
              };
              friend void from_json(const Darabonba::Json& j, OriginalModuleConfigItem& obj) { 
                DARABONBA_PTR_FROM_JSON(Code, code_);
                DARABONBA_PTR_FROM_JSON(ModuleProperties, moduleProperties_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
              };
              OriginalModuleConfigItem() = default ;
              OriginalModuleConfigItem(const OriginalModuleConfigItem &) = default ;
              OriginalModuleConfigItem(OriginalModuleConfigItem &&) = default ;
              OriginalModuleConfigItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OriginalModuleConfigItem() = default ;
              OriginalModuleConfigItem& operator=(const OriginalModuleConfigItem &) = default ;
              OriginalModuleConfigItem& operator=(OriginalModuleConfigItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ModuleProperties : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ModuleProperties& obj) { 
                  DARABONBA_PTR_TO_JSON(moduleProperties, moduleProperties_);
                };
                friend void from_json(const Darabonba::Json& j, ModuleProperties& obj) { 
                  DARABONBA_PTR_FROM_JSON(moduleProperties, moduleProperties_);
                };
                ModuleProperties() = default ;
                ModuleProperties(const ModuleProperties &) = default ;
                ModuleProperties(ModuleProperties &&) = default ;
                ModuleProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ModuleProperties() = default ;
                ModuleProperties& operator=(const ModuleProperties &) = default ;
                ModuleProperties& operator=(ModuleProperties &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class ModulePropertiesItem : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const ModulePropertiesItem& obj) { 
                    DARABONBA_PTR_TO_JSON(Code, code_);
                    DARABONBA_PTR_TO_JSON(Name, name_);
                    DARABONBA_PTR_TO_JSON(Value, value_);
                  };
                  friend void from_json(const Darabonba::Json& j, ModulePropertiesItem& obj) { 
                    DARABONBA_PTR_FROM_JSON(Code, code_);
                    DARABONBA_PTR_FROM_JSON(Name, name_);
                    DARABONBA_PTR_FROM_JSON(Value, value_);
                  };
                  ModulePropertiesItem() = default ;
                  ModulePropertiesItem(const ModulePropertiesItem &) = default ;
                  ModulePropertiesItem(ModulePropertiesItem &&) = default ;
                  ModulePropertiesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~ModulePropertiesItem() = default ;
                  ModulePropertiesItem& operator=(const ModulePropertiesItem &) = default ;
                  ModulePropertiesItem& operator=(ModulePropertiesItem &&) = default ;
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
                  inline ModulePropertiesItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


                  // name Field Functions 
                  bool hasName() const { return this->name_ != nullptr;};
                  void deleteName() { this->name_ = nullptr;};
                  inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                  inline ModulePropertiesItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                  // value Field Functions 
                  bool hasValue() const { return this->value_ != nullptr;};
                  void deleteValue() { this->value_ = nullptr;};
                  inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                  inline ModulePropertiesItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


                protected:
                  shared_ptr<string> code_ {};
                  shared_ptr<string> name_ {};
                  shared_ptr<string> value_ {};
                };

                virtual bool empty() const override { return this->moduleProperties_ == nullptr; };
                // moduleProperties Field Functions 
                bool hasModuleProperties() const { return this->moduleProperties_ != nullptr;};
                void deleteModuleProperties() { this->moduleProperties_ = nullptr;};
                inline const vector<ModuleProperties::ModulePropertiesItem> & getModuleProperties() const { DARABONBA_PTR_GET_CONST(moduleProperties_, vector<ModuleProperties::ModulePropertiesItem>) };
                inline vector<ModuleProperties::ModulePropertiesItem> getModuleProperties() { DARABONBA_PTR_GET(moduleProperties_, vector<ModuleProperties::ModulePropertiesItem>) };
                inline ModuleProperties& setModuleProperties(const vector<ModuleProperties::ModulePropertiesItem> & moduleProperties) { DARABONBA_PTR_SET_VALUE(moduleProperties_, moduleProperties) };
                inline ModuleProperties& setModuleProperties(vector<ModuleProperties::ModulePropertiesItem> && moduleProperties) { DARABONBA_PTR_SET_RVALUE(moduleProperties_, moduleProperties) };


              protected:
                shared_ptr<vector<ModuleProperties::ModulePropertiesItem>> moduleProperties_ {};
              };

              virtual bool empty() const override { return this->code_ == nullptr
        && this->moduleProperties_ == nullptr && this->name_ == nullptr; };
              // code Field Functions 
              bool hasCode() const { return this->code_ != nullptr;};
              void deleteCode() { this->code_ = nullptr;};
              inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
              inline OriginalModuleConfigItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


              // moduleProperties Field Functions 
              bool hasModuleProperties() const { return this->moduleProperties_ != nullptr;};
              void deleteModuleProperties() { this->moduleProperties_ = nullptr;};
              inline const OriginalModuleConfigItem::ModuleProperties & getModuleProperties() const { DARABONBA_PTR_GET_CONST(moduleProperties_, OriginalModuleConfigItem::ModuleProperties) };
              inline OriginalModuleConfigItem::ModuleProperties getModuleProperties() { DARABONBA_PTR_GET(moduleProperties_, OriginalModuleConfigItem::ModuleProperties) };
              inline OriginalModuleConfigItem& setModuleProperties(const OriginalModuleConfigItem::ModuleProperties & moduleProperties) { DARABONBA_PTR_SET_VALUE(moduleProperties_, moduleProperties) };
              inline OriginalModuleConfigItem& setModuleProperties(OriginalModuleConfigItem::ModuleProperties && moduleProperties) { DARABONBA_PTR_SET_RVALUE(moduleProperties_, moduleProperties) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline OriginalModuleConfigItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              shared_ptr<string> code_ {};
              shared_ptr<OriginalModuleConfigItem::ModuleProperties> moduleProperties_ {};
              shared_ptr<string> name_ {};
            };

            virtual bool empty() const override { return this->originalModuleConfig_ == nullptr; };
            // originalModuleConfig Field Functions 
            bool hasOriginalModuleConfig() const { return this->originalModuleConfig_ != nullptr;};
            void deleteOriginalModuleConfig() { this->originalModuleConfig_ = nullptr;};
            inline const vector<OriginalModuleConfig::OriginalModuleConfigItem> & getOriginalModuleConfig() const { DARABONBA_PTR_GET_CONST(originalModuleConfig_, vector<OriginalModuleConfig::OriginalModuleConfigItem>) };
            inline vector<OriginalModuleConfig::OriginalModuleConfigItem> getOriginalModuleConfig() { DARABONBA_PTR_GET(originalModuleConfig_, vector<OriginalModuleConfig::OriginalModuleConfigItem>) };
            inline OriginalModuleConfig& setOriginalModuleConfig(const vector<OriginalModuleConfig::OriginalModuleConfigItem> & originalModuleConfig) { DARABONBA_PTR_SET_VALUE(originalModuleConfig_, originalModuleConfig) };
            inline OriginalModuleConfig& setOriginalModuleConfig(vector<OriginalModuleConfig::OriginalModuleConfigItem> && originalModuleConfig) { DARABONBA_PTR_SET_RVALUE(originalModuleConfig_, originalModuleConfig) };


          protected:
            shared_ptr<vector<OriginalModuleConfig::OriginalModuleConfigItem>> originalModuleConfig_ {};
          };

          class BillModuleConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BillModuleConfig& obj) { 
              DARABONBA_PTR_TO_JSON(billModuleConfig, billModuleConfig_);
            };
            friend void from_json(const Darabonba::Json& j, BillModuleConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(billModuleConfig, billModuleConfig_);
            };
            BillModuleConfig() = default ;
            BillModuleConfig(const BillModuleConfig &) = default ;
            BillModuleConfig(BillModuleConfig &&) = default ;
            BillModuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BillModuleConfig() = default ;
            BillModuleConfig& operator=(const BillModuleConfig &) = default ;
            BillModuleConfig& operator=(BillModuleConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class BillModuleConfigItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BillModuleConfigItem& obj) { 
                DARABONBA_PTR_TO_JSON(ApiCode, apiCode_);
                DARABONBA_PTR_TO_JSON(BillModuleProperties, billModuleProperties_);
                DARABONBA_PTR_TO_JSON(Code, code_);
                DARABONBA_PTR_TO_JSON(Name, name_);
              };
              friend void from_json(const Darabonba::Json& j, BillModuleConfigItem& obj) { 
                DARABONBA_PTR_FROM_JSON(ApiCode, apiCode_);
                DARABONBA_PTR_FROM_JSON(BillModuleProperties, billModuleProperties_);
                DARABONBA_PTR_FROM_JSON(Code, code_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
              };
              BillModuleConfigItem() = default ;
              BillModuleConfigItem(const BillModuleConfigItem &) = default ;
              BillModuleConfigItem(BillModuleConfigItem &&) = default ;
              BillModuleConfigItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BillModuleConfigItem() = default ;
              BillModuleConfigItem& operator=(const BillModuleConfigItem &) = default ;
              BillModuleConfigItem& operator=(BillModuleConfigItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class BillModuleProperties : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const BillModuleProperties& obj) { 
                  DARABONBA_PTR_TO_JSON(billModuleProperties, billModuleProperties_);
                };
                friend void from_json(const Darabonba::Json& j, BillModuleProperties& obj) { 
                  DARABONBA_PTR_FROM_JSON(billModuleProperties, billModuleProperties_);
                };
                BillModuleProperties() = default ;
                BillModuleProperties(const BillModuleProperties &) = default ;
                BillModuleProperties(BillModuleProperties &&) = default ;
                BillModuleProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~BillModuleProperties() = default ;
                BillModuleProperties& operator=(const BillModuleProperties &) = default ;
                BillModuleProperties& operator=(BillModuleProperties &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class BillModulePropertiesItem : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const BillModulePropertiesItem& obj) { 
                    DARABONBA_PTR_TO_JSON(AttrApiCode, attrApiCode_);
                    DARABONBA_PTR_TO_JSON(ModuleApiCode, moduleApiCode_);
                    DARABONBA_PTR_TO_JSON(Value, value_);
                  };
                  friend void from_json(const Darabonba::Json& j, BillModulePropertiesItem& obj) { 
                    DARABONBA_PTR_FROM_JSON(AttrApiCode, attrApiCode_);
                    DARABONBA_PTR_FROM_JSON(ModuleApiCode, moduleApiCode_);
                    DARABONBA_PTR_FROM_JSON(Value, value_);
                  };
                  BillModulePropertiesItem() = default ;
                  BillModulePropertiesItem(const BillModulePropertiesItem &) = default ;
                  BillModulePropertiesItem(BillModulePropertiesItem &&) = default ;
                  BillModulePropertiesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~BillModulePropertiesItem() = default ;
                  BillModulePropertiesItem& operator=(const BillModulePropertiesItem &) = default ;
                  BillModulePropertiesItem& operator=(BillModulePropertiesItem &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->attrApiCode_ == nullptr
        && this->moduleApiCode_ == nullptr && this->value_ == nullptr; };
                  // attrApiCode Field Functions 
                  bool hasAttrApiCode() const { return this->attrApiCode_ != nullptr;};
                  void deleteAttrApiCode() { this->attrApiCode_ = nullptr;};
                  inline string getAttrApiCode() const { DARABONBA_PTR_GET_DEFAULT(attrApiCode_, "") };
                  inline BillModulePropertiesItem& setAttrApiCode(string attrApiCode) { DARABONBA_PTR_SET_VALUE(attrApiCode_, attrApiCode) };


                  // moduleApiCode Field Functions 
                  bool hasModuleApiCode() const { return this->moduleApiCode_ != nullptr;};
                  void deleteModuleApiCode() { this->moduleApiCode_ = nullptr;};
                  inline string getModuleApiCode() const { DARABONBA_PTR_GET_DEFAULT(moduleApiCode_, "") };
                  inline BillModulePropertiesItem& setModuleApiCode(string moduleApiCode) { DARABONBA_PTR_SET_VALUE(moduleApiCode_, moduleApiCode) };


                  // value Field Functions 
                  bool hasValue() const { return this->value_ != nullptr;};
                  void deleteValue() { this->value_ = nullptr;};
                  inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                  inline BillModulePropertiesItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


                protected:
                  shared_ptr<string> attrApiCode_ {};
                  shared_ptr<string> moduleApiCode_ {};
                  shared_ptr<string> value_ {};
                };

                virtual bool empty() const override { return this->billModuleProperties_ == nullptr; };
                // billModuleProperties Field Functions 
                bool hasBillModuleProperties() const { return this->billModuleProperties_ != nullptr;};
                void deleteBillModuleProperties() { this->billModuleProperties_ = nullptr;};
                inline const vector<BillModuleProperties::BillModulePropertiesItem> & getBillModuleProperties() const { DARABONBA_PTR_GET_CONST(billModuleProperties_, vector<BillModuleProperties::BillModulePropertiesItem>) };
                inline vector<BillModuleProperties::BillModulePropertiesItem> getBillModuleProperties() { DARABONBA_PTR_GET(billModuleProperties_, vector<BillModuleProperties::BillModulePropertiesItem>) };
                inline BillModuleProperties& setBillModuleProperties(const vector<BillModuleProperties::BillModulePropertiesItem> & billModuleProperties) { DARABONBA_PTR_SET_VALUE(billModuleProperties_, billModuleProperties) };
                inline BillModuleProperties& setBillModuleProperties(vector<BillModuleProperties::BillModulePropertiesItem> && billModuleProperties) { DARABONBA_PTR_SET_RVALUE(billModuleProperties_, billModuleProperties) };


              protected:
                shared_ptr<vector<BillModuleProperties::BillModulePropertiesItem>> billModuleProperties_ {};
              };

              virtual bool empty() const override { return this->apiCode_ == nullptr
        && this->billModuleProperties_ == nullptr && this->code_ == nullptr && this->name_ == nullptr; };
              // apiCode Field Functions 
              bool hasApiCode() const { return this->apiCode_ != nullptr;};
              void deleteApiCode() { this->apiCode_ = nullptr;};
              inline string getApiCode() const { DARABONBA_PTR_GET_DEFAULT(apiCode_, "") };
              inline BillModuleConfigItem& setApiCode(string apiCode) { DARABONBA_PTR_SET_VALUE(apiCode_, apiCode) };


              // billModuleProperties Field Functions 
              bool hasBillModuleProperties() const { return this->billModuleProperties_ != nullptr;};
              void deleteBillModuleProperties() { this->billModuleProperties_ = nullptr;};
              inline const BillModuleConfigItem::BillModuleProperties & getBillModuleProperties() const { DARABONBA_PTR_GET_CONST(billModuleProperties_, BillModuleConfigItem::BillModuleProperties) };
              inline BillModuleConfigItem::BillModuleProperties getBillModuleProperties() { DARABONBA_PTR_GET(billModuleProperties_, BillModuleConfigItem::BillModuleProperties) };
              inline BillModuleConfigItem& setBillModuleProperties(const BillModuleConfigItem::BillModuleProperties & billModuleProperties) { DARABONBA_PTR_SET_VALUE(billModuleProperties_, billModuleProperties) };
              inline BillModuleConfigItem& setBillModuleProperties(BillModuleConfigItem::BillModuleProperties && billModuleProperties) { DARABONBA_PTR_SET_RVALUE(billModuleProperties_, billModuleProperties) };


              // code Field Functions 
              bool hasCode() const { return this->code_ != nullptr;};
              void deleteCode() { this->code_ = nullptr;};
              inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
              inline BillModuleConfigItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline BillModuleConfigItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              // apiCode
              shared_ptr<string> apiCode_ {};
              shared_ptr<BillModuleConfigItem::BillModuleProperties> billModuleProperties_ {};
              shared_ptr<string> code_ {};
              shared_ptr<string> name_ {};
            };

            virtual bool empty() const override { return this->billModuleConfig_ == nullptr; };
            // billModuleConfig Field Functions 
            bool hasBillModuleConfig() const { return this->billModuleConfig_ != nullptr;};
            void deleteBillModuleConfig() { this->billModuleConfig_ = nullptr;};
            inline const vector<BillModuleConfig::BillModuleConfigItem> & getBillModuleConfig() const { DARABONBA_PTR_GET_CONST(billModuleConfig_, vector<BillModuleConfig::BillModuleConfigItem>) };
            inline vector<BillModuleConfig::BillModuleConfigItem> getBillModuleConfig() { DARABONBA_PTR_GET(billModuleConfig_, vector<BillModuleConfig::BillModuleConfigItem>) };
            inline BillModuleConfig& setBillModuleConfig(const vector<BillModuleConfig::BillModuleConfigItem> & billModuleConfig) { DARABONBA_PTR_SET_VALUE(billModuleConfig_, billModuleConfig) };
            inline BillModuleConfig& setBillModuleConfig(vector<BillModuleConfig::BillModuleConfigItem> && billModuleConfig) { DARABONBA_PTR_SET_RVALUE(billModuleConfig_, billModuleConfig) };


          protected:
            shared_ptr<vector<BillModuleConfig::BillModuleConfigItem>> billModuleConfig_ {};
          };

          virtual bool empty() const override { return this->afterTaxAmount_ == nullptr
        && this->billModuleConfig_ == nullptr && this->commodityCode_ == nullptr && this->config_ == nullptr && this->createTime_ == nullptr && this->currency_ == nullptr
        && this->extendInfos_ == nullptr && this->instanceIds_ == nullptr && this->operator_ == nullptr && this->orderId_ == nullptr && this->orderSubType_ == nullptr
        && this->orderType_ == nullptr && this->originalConfig_ == nullptr && this->originalModuleConfig_ == nullptr && this->paymentCurrency_ == nullptr && this->paymentStatus_ == nullptr
        && this->paymentTime_ == nullptr && this->pretaxAmount_ == nullptr && this->pretaxAmountLocal_ == nullptr && this->pretaxGrossAmount_ == nullptr && this->productCode_ == nullptr
        && this->productType_ == nullptr && this->quantity_ == nullptr && this->region_ == nullptr && this->relatedOrderId_ == nullptr && this->subOrderId_ == nullptr
        && this->subscriptionType_ == nullptr && this->tax_ == nullptr && this->usageEndTime_ == nullptr && this->usageStartTime_ == nullptr; };
          // afterTaxAmount Field Functions 
          bool hasAfterTaxAmount() const { return this->afterTaxAmount_ != nullptr;};
          void deleteAfterTaxAmount() { this->afterTaxAmount_ = nullptr;};
          inline string getAfterTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(afterTaxAmount_, "") };
          inline Order& setAfterTaxAmount(string afterTaxAmount) { DARABONBA_PTR_SET_VALUE(afterTaxAmount_, afterTaxAmount) };


          // billModuleConfig Field Functions 
          bool hasBillModuleConfig() const { return this->billModuleConfig_ != nullptr;};
          void deleteBillModuleConfig() { this->billModuleConfig_ = nullptr;};
          inline const Order::BillModuleConfig & getBillModuleConfig() const { DARABONBA_PTR_GET_CONST(billModuleConfig_, Order::BillModuleConfig) };
          inline Order::BillModuleConfig getBillModuleConfig() { DARABONBA_PTR_GET(billModuleConfig_, Order::BillModuleConfig) };
          inline Order& setBillModuleConfig(const Order::BillModuleConfig & billModuleConfig) { DARABONBA_PTR_SET_VALUE(billModuleConfig_, billModuleConfig) };
          inline Order& setBillModuleConfig(Order::BillModuleConfig && billModuleConfig) { DARABONBA_PTR_SET_RVALUE(billModuleConfig_, billModuleConfig) };


          // commodityCode Field Functions 
          bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
          void deleteCommodityCode() { this->commodityCode_ = nullptr;};
          inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
          inline Order& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


          // config Field Functions 
          bool hasConfig() const { return this->config_ != nullptr;};
          void deleteConfig() { this->config_ = nullptr;};
          inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
          inline Order& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline Order& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Order& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // extendInfos Field Functions 
          bool hasExtendInfos() const { return this->extendInfos_ != nullptr;};
          void deleteExtendInfos() { this->extendInfos_ = nullptr;};
          inline const map<string, string> & getExtendInfos() const { DARABONBA_PTR_GET_CONST(extendInfos_, map<string, string>) };
          inline map<string, string> getExtendInfos() { DARABONBA_PTR_GET(extendInfos_, map<string, string>) };
          inline Order& setExtendInfos(const map<string, string> & extendInfos) { DARABONBA_PTR_SET_VALUE(extendInfos_, extendInfos) };
          inline Order& setExtendInfos(map<string, string> && extendInfos) { DARABONBA_PTR_SET_RVALUE(extendInfos_, extendInfos) };


          // instanceIds Field Functions 
          bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
          void deleteInstanceIds() { this->instanceIds_ = nullptr;};
          inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
          inline Order& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline Order& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline Order& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // orderSubType Field Functions 
          bool hasOrderSubType() const { return this->orderSubType_ != nullptr;};
          void deleteOrderSubType() { this->orderSubType_ = nullptr;};
          inline string getOrderSubType() const { DARABONBA_PTR_GET_DEFAULT(orderSubType_, "") };
          inline Order& setOrderSubType(string orderSubType) { DARABONBA_PTR_SET_VALUE(orderSubType_, orderSubType) };


          // orderType Field Functions 
          bool hasOrderType() const { return this->orderType_ != nullptr;};
          void deleteOrderType() { this->orderType_ = nullptr;};
          inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
          inline Order& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


          // originalConfig Field Functions 
          bool hasOriginalConfig() const { return this->originalConfig_ != nullptr;};
          void deleteOriginalConfig() { this->originalConfig_ = nullptr;};
          inline string getOriginalConfig() const { DARABONBA_PTR_GET_DEFAULT(originalConfig_, "") };
          inline Order& setOriginalConfig(string originalConfig) { DARABONBA_PTR_SET_VALUE(originalConfig_, originalConfig) };


          // originalModuleConfig Field Functions 
          bool hasOriginalModuleConfig() const { return this->originalModuleConfig_ != nullptr;};
          void deleteOriginalModuleConfig() { this->originalModuleConfig_ = nullptr;};
          inline const Order::OriginalModuleConfig & getOriginalModuleConfig() const { DARABONBA_PTR_GET_CONST(originalModuleConfig_, Order::OriginalModuleConfig) };
          inline Order::OriginalModuleConfig getOriginalModuleConfig() { DARABONBA_PTR_GET(originalModuleConfig_, Order::OriginalModuleConfig) };
          inline Order& setOriginalModuleConfig(const Order::OriginalModuleConfig & originalModuleConfig) { DARABONBA_PTR_SET_VALUE(originalModuleConfig_, originalModuleConfig) };
          inline Order& setOriginalModuleConfig(Order::OriginalModuleConfig && originalModuleConfig) { DARABONBA_PTR_SET_RVALUE(originalModuleConfig_, originalModuleConfig) };


          // paymentCurrency Field Functions 
          bool hasPaymentCurrency() const { return this->paymentCurrency_ != nullptr;};
          void deletePaymentCurrency() { this->paymentCurrency_ = nullptr;};
          inline string getPaymentCurrency() const { DARABONBA_PTR_GET_DEFAULT(paymentCurrency_, "") };
          inline Order& setPaymentCurrency(string paymentCurrency) { DARABONBA_PTR_SET_VALUE(paymentCurrency_, paymentCurrency) };


          // paymentStatus Field Functions 
          bool hasPaymentStatus() const { return this->paymentStatus_ != nullptr;};
          void deletePaymentStatus() { this->paymentStatus_ = nullptr;};
          inline string getPaymentStatus() const { DARABONBA_PTR_GET_DEFAULT(paymentStatus_, "") };
          inline Order& setPaymentStatus(string paymentStatus) { DARABONBA_PTR_SET_VALUE(paymentStatus_, paymentStatus) };


          // paymentTime Field Functions 
          bool hasPaymentTime() const { return this->paymentTime_ != nullptr;};
          void deletePaymentTime() { this->paymentTime_ = nullptr;};
          inline string getPaymentTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTime_, "") };
          inline Order& setPaymentTime(string paymentTime) { DARABONBA_PTR_SET_VALUE(paymentTime_, paymentTime) };


          // pretaxAmount Field Functions 
          bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
          void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
          inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
          inline Order& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


          // pretaxAmountLocal Field Functions 
          bool hasPretaxAmountLocal() const { return this->pretaxAmountLocal_ != nullptr;};
          void deletePretaxAmountLocal() { this->pretaxAmountLocal_ = nullptr;};
          inline string getPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmountLocal_, "") };
          inline Order& setPretaxAmountLocal(string pretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(pretaxAmountLocal_, pretaxAmountLocal) };


          // pretaxGrossAmount Field Functions 
          bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
          void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
          inline string getPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, "") };
          inline Order& setPretaxGrossAmount(string pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


          // productCode Field Functions 
          bool hasProductCode() const { return this->productCode_ != nullptr;};
          void deleteProductCode() { this->productCode_ = nullptr;};
          inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
          inline Order& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


          // productType Field Functions 
          bool hasProductType() const { return this->productType_ != nullptr;};
          void deleteProductType() { this->productType_ = nullptr;};
          inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
          inline Order& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


          // quantity Field Functions 
          bool hasQuantity() const { return this->quantity_ != nullptr;};
          void deleteQuantity() { this->quantity_ = nullptr;};
          inline string getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
          inline Order& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Order& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // relatedOrderId Field Functions 
          bool hasRelatedOrderId() const { return this->relatedOrderId_ != nullptr;};
          void deleteRelatedOrderId() { this->relatedOrderId_ = nullptr;};
          inline string getRelatedOrderId() const { DARABONBA_PTR_GET_DEFAULT(relatedOrderId_, "") };
          inline Order& setRelatedOrderId(string relatedOrderId) { DARABONBA_PTR_SET_VALUE(relatedOrderId_, relatedOrderId) };


          // subOrderId Field Functions 
          bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
          void deleteSubOrderId() { this->subOrderId_ = nullptr;};
          inline string getSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
          inline Order& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


          // subscriptionType Field Functions 
          bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
          void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
          inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
          inline Order& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


          // tax Field Functions 
          bool hasTax() const { return this->tax_ != nullptr;};
          void deleteTax() { this->tax_ = nullptr;};
          inline string getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
          inline Order& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


          // usageEndTime Field Functions 
          bool hasUsageEndTime() const { return this->usageEndTime_ != nullptr;};
          void deleteUsageEndTime() { this->usageEndTime_ = nullptr;};
          inline string getUsageEndTime() const { DARABONBA_PTR_GET_DEFAULT(usageEndTime_, "") };
          inline Order& setUsageEndTime(string usageEndTime) { DARABONBA_PTR_SET_VALUE(usageEndTime_, usageEndTime) };


          // usageStartTime Field Functions 
          bool hasUsageStartTime() const { return this->usageStartTime_ != nullptr;};
          void deleteUsageStartTime() { this->usageStartTime_ = nullptr;};
          inline string getUsageStartTime() const { DARABONBA_PTR_GET_DEFAULT(usageStartTime_, "") };
          inline Order& setUsageStartTime(string usageStartTime) { DARABONBA_PTR_SET_VALUE(usageStartTime_, usageStartTime) };


        protected:
          shared_ptr<string> afterTaxAmount_ {};
          shared_ptr<Order::BillModuleConfig> billModuleConfig_ {};
          shared_ptr<string> commodityCode_ {};
          shared_ptr<string> config_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<string> currency_ {};
          shared_ptr<map<string, string>> extendInfos_ {};
          shared_ptr<string> instanceIds_ {};
          shared_ptr<string> operator_ {};
          shared_ptr<string> orderId_ {};
          shared_ptr<string> orderSubType_ {};
          shared_ptr<string> orderType_ {};
          shared_ptr<string> originalConfig_ {};
          shared_ptr<Order::OriginalModuleConfig> originalModuleConfig_ {};
          shared_ptr<string> paymentCurrency_ {};
          shared_ptr<string> paymentStatus_ {};
          shared_ptr<string> paymentTime_ {};
          shared_ptr<string> pretaxAmount_ {};
          shared_ptr<string> pretaxAmountLocal_ {};
          shared_ptr<string> pretaxGrossAmount_ {};
          shared_ptr<string> productCode_ {};
          shared_ptr<string> productType_ {};
          shared_ptr<string> quantity_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> relatedOrderId_ {};
          shared_ptr<string> subOrderId_ {};
          shared_ptr<string> subscriptionType_ {};
          shared_ptr<string> tax_ {};
          shared_ptr<string> usageEndTime_ {};
          shared_ptr<string> usageStartTime_ {};
        };

        virtual bool empty() const override { return this->order_ == nullptr; };
        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline const vector<OrderList::Order> & getOrder() const { DARABONBA_PTR_GET_CONST(order_, vector<OrderList::Order>) };
        inline vector<OrderList::Order> getOrder() { DARABONBA_PTR_GET(order_, vector<OrderList::Order>) };
        inline OrderList& setOrder(const vector<OrderList::Order> & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
        inline OrderList& setOrder(vector<OrderList::Order> && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


      protected:
        shared_ptr<vector<OrderList::Order>> order_ {};
      };

      virtual bool empty() const override { return this->hostName_ == nullptr
        && this->orderList_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Data& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // orderList Field Functions 
      bool hasOrderList() const { return this->orderList_ != nullptr;};
      void deleteOrderList() { this->orderList_ = nullptr;};
      inline const Data::OrderList & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, Data::OrderList) };
      inline Data::OrderList getOrderList() { DARABONBA_PTR_GET(orderList_, Data::OrderList) };
      inline Data& setOrderList(const Data::OrderList & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
      inline Data& setOrderList(Data::OrderList && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> hostName_ {};
      shared_ptr<Data::OrderList> orderList_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOrderDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetOrderDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetOrderDetailResponseBody::Data) };
    inline GetOrderDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetOrderDetailResponseBody::Data) };
    inline GetOrderDetailResponseBody& setData(const GetOrderDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOrderDetailResponseBody& setData(GetOrderDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOrderDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetOrderDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
