// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuditFailMsg, auditFailMsg_);
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FrontCategoryId, frontCategoryId_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
      DARABONBA_PTR_TO_JSON(ProductExtras, productExtras_);
      DARABONBA_PTR_TO_JSON(ProductSkus, productSkus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ShopInfo, shopInfo_);
      DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierPk, supplierPk_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UseCount, useCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditFailMsg, auditFailMsg_);
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FrontCategoryId, frontCategoryId_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
      DARABONBA_PTR_FROM_JSON(ProductExtras, productExtras_);
      DARABONBA_PTR_FROM_JSON(ProductSkus, productSkus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ShopInfo, shopInfo_);
      DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierPk, supplierPk_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UseCount, useCount_);
    };
    DescribeProductResponseBody() = default ;
    DescribeProductResponseBody(const DescribeProductResponseBody &) = default ;
    DescribeProductResponseBody(DescribeProductResponseBody &&) = default ;
    DescribeProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBody() = default ;
    DescribeProductResponseBody& operator=(const DescribeProductResponseBody &) = default ;
    DescribeProductResponseBody& operator=(DescribeProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ShopInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ShopInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Emails, emails_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Telephones, telephones_);
        DARABONBA_PTR_TO_JSON(WangWangs, wangWangs_);
      };
      friend void from_json(const Darabonba::Json& j, ShopInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Emails, emails_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Telephones, telephones_);
        DARABONBA_PTR_FROM_JSON(WangWangs, wangWangs_);
      };
      ShopInfo() = default ;
      ShopInfo(const ShopInfo &) = default ;
      ShopInfo(ShopInfo &&) = default ;
      ShopInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ShopInfo() = default ;
      ShopInfo& operator=(const ShopInfo &) = default ;
      ShopInfo& operator=(ShopInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WangWangs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WangWangs& obj) { 
          DARABONBA_PTR_TO_JSON(WangWang, wangWang_);
        };
        friend void from_json(const Darabonba::Json& j, WangWangs& obj) { 
          DARABONBA_PTR_FROM_JSON(WangWang, wangWang_);
        };
        WangWangs() = default ;
        WangWangs(const WangWangs &) = default ;
        WangWangs(WangWangs &&) = default ;
        WangWangs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WangWangs() = default ;
        WangWangs& operator=(const WangWangs &) = default ;
        WangWangs& operator=(WangWangs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WangWang : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WangWang& obj) { 
            DARABONBA_PTR_TO_JSON(Remark, remark_);
            DARABONBA_PTR_TO_JSON(UserName, userName_);
          };
          friend void from_json(const Darabonba::Json& j, WangWang& obj) { 
            DARABONBA_PTR_FROM_JSON(Remark, remark_);
            DARABONBA_PTR_FROM_JSON(UserName, userName_);
          };
          WangWang() = default ;
          WangWang(const WangWang &) = default ;
          WangWang(WangWang &&) = default ;
          WangWang(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WangWang() = default ;
          WangWang& operator=(const WangWang &) = default ;
          WangWang& operator=(WangWang &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->remark_ == nullptr
        && this->userName_ == nullptr; };
          // remark Field Functions 
          bool hasRemark() const { return this->remark_ != nullptr;};
          void deleteRemark() { this->remark_ = nullptr;};
          inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
          inline WangWang& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


          // userName Field Functions 
          bool hasUserName() const { return this->userName_ != nullptr;};
          void deleteUserName() { this->userName_ = nullptr;};
          inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
          inline WangWang& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        protected:
          shared_ptr<string> remark_ {};
          shared_ptr<string> userName_ {};
        };

        virtual bool empty() const override { return this->wangWang_ == nullptr; };
        // wangWang Field Functions 
        bool hasWangWang() const { return this->wangWang_ != nullptr;};
        void deleteWangWang() { this->wangWang_ = nullptr;};
        inline const vector<WangWangs::WangWang> & getWangWang() const { DARABONBA_PTR_GET_CONST(wangWang_, vector<WangWangs::WangWang>) };
        inline vector<WangWangs::WangWang> getWangWang() { DARABONBA_PTR_GET(wangWang_, vector<WangWangs::WangWang>) };
        inline WangWangs& setWangWang(const vector<WangWangs::WangWang> & wangWang) { DARABONBA_PTR_SET_VALUE(wangWang_, wangWang) };
        inline WangWangs& setWangWang(vector<WangWangs::WangWang> && wangWang) { DARABONBA_PTR_SET_RVALUE(wangWang_, wangWang) };


      protected:
        shared_ptr<vector<WangWangs::WangWang>> wangWang_ {};
      };

      class Telephones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Telephones& obj) { 
          DARABONBA_PTR_TO_JSON(Telephone, telephone_);
        };
        friend void from_json(const Darabonba::Json& j, Telephones& obj) { 
          DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
        };
        Telephones() = default ;
        Telephones(const Telephones &) = default ;
        Telephones(Telephones &&) = default ;
        Telephones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Telephones() = default ;
        Telephones& operator=(const Telephones &) = default ;
        Telephones& operator=(Telephones &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->telephone_ == nullptr; };
        // telephone Field Functions 
        bool hasTelephone() const { return this->telephone_ != nullptr;};
        void deleteTelephone() { this->telephone_ = nullptr;};
        inline const vector<string> & getTelephone() const { DARABONBA_PTR_GET_CONST(telephone_, vector<string>) };
        inline vector<string> getTelephone() { DARABONBA_PTR_GET(telephone_, vector<string>) };
        inline Telephones& setTelephone(const vector<string> & telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };
        inline Telephones& setTelephone(vector<string> && telephone) { DARABONBA_PTR_SET_RVALUE(telephone_, telephone) };


      protected:
        shared_ptr<vector<string>> telephone_ {};
      };

      virtual bool empty() const override { return this->emails_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->telephones_ == nullptr && this->wangWangs_ == nullptr; };
      // emails Field Functions 
      bool hasEmails() const { return this->emails_ != nullptr;};
      void deleteEmails() { this->emails_ = nullptr;};
      inline string getEmails() const { DARABONBA_PTR_GET_DEFAULT(emails_, "") };
      inline ShopInfo& setEmails(string emails) { DARABONBA_PTR_SET_VALUE(emails_, emails) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ShopInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ShopInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // telephones Field Functions 
      bool hasTelephones() const { return this->telephones_ != nullptr;};
      void deleteTelephones() { this->telephones_ = nullptr;};
      inline const ShopInfo::Telephones & getTelephones() const { DARABONBA_PTR_GET_CONST(telephones_, ShopInfo::Telephones) };
      inline ShopInfo::Telephones getTelephones() { DARABONBA_PTR_GET(telephones_, ShopInfo::Telephones) };
      inline ShopInfo& setTelephones(const ShopInfo::Telephones & telephones) { DARABONBA_PTR_SET_VALUE(telephones_, telephones) };
      inline ShopInfo& setTelephones(ShopInfo::Telephones && telephones) { DARABONBA_PTR_SET_RVALUE(telephones_, telephones) };


      // wangWangs Field Functions 
      bool hasWangWangs() const { return this->wangWangs_ != nullptr;};
      void deleteWangWangs() { this->wangWangs_ = nullptr;};
      inline const ShopInfo::WangWangs & getWangWangs() const { DARABONBA_PTR_GET_CONST(wangWangs_, ShopInfo::WangWangs) };
      inline ShopInfo::WangWangs getWangWangs() { DARABONBA_PTR_GET(wangWangs_, ShopInfo::WangWangs) };
      inline ShopInfo& setWangWangs(const ShopInfo::WangWangs & wangWangs) { DARABONBA_PTR_SET_VALUE(wangWangs_, wangWangs) };
      inline ShopInfo& setWangWangs(ShopInfo::WangWangs && wangWangs) { DARABONBA_PTR_SET_RVALUE(wangWangs_, wangWangs) };


    protected:
      shared_ptr<string> emails_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<ShopInfo::Telephones> telephones_ {};
      shared_ptr<ShopInfo::WangWangs> wangWangs_ {};
    };

    class ProductSkus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductSkus& obj) { 
        DARABONBA_PTR_TO_JSON(ProductSku, productSku_);
      };
      friend void from_json(const Darabonba::Json& j, ProductSkus& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductSku, productSku_);
      };
      ProductSkus() = default ;
      ProductSkus(const ProductSkus &) = default ;
      ProductSkus(ProductSkus &&) = default ;
      ProductSkus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductSkus() = default ;
      ProductSkus& operator=(const ProductSkus &) = default ;
      ProductSkus& operator=(ProductSkus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProductSku : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProductSku& obj) { 
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Constraints, constraints_);
          DARABONBA_PTR_TO_JSON(Hidden, hidden_);
          DARABONBA_PTR_TO_JSON(Modules, modules_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OrderPeriods, orderPeriods_);
        };
        friend void from_json(const Darabonba::Json& j, ProductSku& obj) { 
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
          DARABONBA_PTR_FROM_JSON(Hidden, hidden_);
          DARABONBA_PTR_FROM_JSON(Modules, modules_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OrderPeriods, orderPeriods_);
        };
        ProductSku() = default ;
        ProductSku(const ProductSku &) = default ;
        ProductSku(ProductSku &&) = default ;
        ProductSku(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProductSku() = default ;
        ProductSku& operator=(const ProductSku &) = default ;
        ProductSku& operator=(ProductSku &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OrderPeriods : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OrderPeriods& obj) { 
            DARABONBA_PTR_TO_JSON(OrderPeriod, orderPeriod_);
          };
          friend void from_json(const Darabonba::Json& j, OrderPeriods& obj) { 
            DARABONBA_PTR_FROM_JSON(OrderPeriod, orderPeriod_);
          };
          OrderPeriods() = default ;
          OrderPeriods(const OrderPeriods &) = default ;
          OrderPeriods(OrderPeriods &&) = default ;
          OrderPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OrderPeriods() = default ;
          OrderPeriods& operator=(const OrderPeriods &) = default ;
          OrderPeriods& operator=(OrderPeriods &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OrderPeriod : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OrderPeriod& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
            };
            friend void from_json(const Darabonba::Json& j, OrderPeriod& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
            };
            OrderPeriod() = default ;
            OrderPeriod(const OrderPeriod &) = default ;
            OrderPeriod(OrderPeriod &&) = default ;
            OrderPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OrderPeriod() = default ;
            OrderPeriod& operator=(const OrderPeriod &) = default ;
            OrderPeriod& operator=(OrderPeriod &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->periodType_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline OrderPeriod& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // periodType Field Functions 
            bool hasPeriodType() const { return this->periodType_ != nullptr;};
            void deletePeriodType() { this->periodType_ = nullptr;};
            inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
            inline OrderPeriod& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<string> periodType_ {};
          };

          virtual bool empty() const override { return this->orderPeriod_ == nullptr; };
          // orderPeriod Field Functions 
          bool hasOrderPeriod() const { return this->orderPeriod_ != nullptr;};
          void deleteOrderPeriod() { this->orderPeriod_ = nullptr;};
          inline const vector<OrderPeriods::OrderPeriod> & getOrderPeriod() const { DARABONBA_PTR_GET_CONST(orderPeriod_, vector<OrderPeriods::OrderPeriod>) };
          inline vector<OrderPeriods::OrderPeriod> getOrderPeriod() { DARABONBA_PTR_GET(orderPeriod_, vector<OrderPeriods::OrderPeriod>) };
          inline OrderPeriods& setOrderPeriod(const vector<OrderPeriods::OrderPeriod> & orderPeriod) { DARABONBA_PTR_SET_VALUE(orderPeriod_, orderPeriod) };
          inline OrderPeriods& setOrderPeriod(vector<OrderPeriods::OrderPeriod> && orderPeriod) { DARABONBA_PTR_SET_RVALUE(orderPeriod_, orderPeriod) };


        protected:
          shared_ptr<vector<OrderPeriods::OrderPeriod>> orderPeriod_ {};
        };

        class Modules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Modules& obj) { 
            DARABONBA_PTR_TO_JSON(Module, module_);
          };
          friend void from_json(const Darabonba::Json& j, Modules& obj) { 
            DARABONBA_PTR_FROM_JSON(Module, module_);
          };
          Modules() = default ;
          Modules(const Modules &) = default ;
          Modules(Modules &&) = default ;
          Modules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Modules() = default ;
          Modules& operator=(const Modules &) = default ;
          Modules& operator=(Modules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Module : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Module& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Properties, properties_);
            };
            friend void from_json(const Darabonba::Json& j, Module& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Properties, properties_);
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
            class Properties : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Properties& obj) { 
                DARABONBA_PTR_TO_JSON(Property, property_);
              };
              friend void from_json(const Darabonba::Json& j, Properties& obj) { 
                DARABONBA_PTR_FROM_JSON(Property, property_);
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
              class Property : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Property& obj) { 
                  DARABONBA_PTR_TO_JSON(DisplayUnit, displayUnit_);
                  DARABONBA_PTR_TO_JSON(Key, key_);
                  DARABONBA_PTR_TO_JSON(Name, name_);
                  DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
                  DARABONBA_PTR_TO_JSON(ShowType, showType_);
                };
                friend void from_json(const Darabonba::Json& j, Property& obj) { 
                  DARABONBA_PTR_FROM_JSON(DisplayUnit, displayUnit_);
                  DARABONBA_PTR_FROM_JSON(Key, key_);
                  DARABONBA_PTR_FROM_JSON(Name, name_);
                  DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
                  DARABONBA_PTR_FROM_JSON(ShowType, showType_);
                };
                Property() = default ;
                Property(const Property &) = default ;
                Property(Property &&) = default ;
                Property(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Property() = default ;
                Property& operator=(const Property &) = default ;
                Property& operator=(Property &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class PropertyValues : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const PropertyValues& obj) { 
                    DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
                  };
                  friend void from_json(const Darabonba::Json& j, PropertyValues& obj) { 
                    DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
                  };
                  PropertyValues() = default ;
                  PropertyValues(const PropertyValues &) = default ;
                  PropertyValues(PropertyValues &&) = default ;
                  PropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~PropertyValues() = default ;
                  PropertyValues& operator=(const PropertyValues &) = default ;
                  PropertyValues& operator=(PropertyValues &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class PropertyValue : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const PropertyValue& obj) { 
                      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
                      DARABONBA_PTR_TO_JSON(Max, max_);
                      DARABONBA_PTR_TO_JSON(Min, min_);
                      DARABONBA_PTR_TO_JSON(Remark, remark_);
                      DARABONBA_PTR_TO_JSON(Step, step_);
                      DARABONBA_PTR_TO_JSON(Type, type_);
                      DARABONBA_PTR_TO_JSON(Value, value_);
                    };
                    friend void from_json(const Darabonba::Json& j, PropertyValue& obj) { 
                      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
                      DARABONBA_PTR_FROM_JSON(Max, max_);
                      DARABONBA_PTR_FROM_JSON(Min, min_);
                      DARABONBA_PTR_FROM_JSON(Remark, remark_);
                      DARABONBA_PTR_FROM_JSON(Step, step_);
                      DARABONBA_PTR_FROM_JSON(Type, type_);
                      DARABONBA_PTR_FROM_JSON(Value, value_);
                    };
                    PropertyValue() = default ;
                    PropertyValue(const PropertyValue &) = default ;
                    PropertyValue(PropertyValue &&) = default ;
                    PropertyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~PropertyValue() = default ;
                    PropertyValue& operator=(const PropertyValue &) = default ;
                    PropertyValue& operator=(PropertyValue &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->remark_ == nullptr && this->step_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
                    // displayName Field Functions 
                    bool hasDisplayName() const { return this->displayName_ != nullptr;};
                    void deleteDisplayName() { this->displayName_ = nullptr;};
                    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
                    inline PropertyValue& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


                    // max Field Functions 
                    bool hasMax() const { return this->max_ != nullptr;};
                    void deleteMax() { this->max_ = nullptr;};
                    inline string getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
                    inline PropertyValue& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


                    // min Field Functions 
                    bool hasMin() const { return this->min_ != nullptr;};
                    void deleteMin() { this->min_ = nullptr;};
                    inline string getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
                    inline PropertyValue& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


                    // remark Field Functions 
                    bool hasRemark() const { return this->remark_ != nullptr;};
                    void deleteRemark() { this->remark_ = nullptr;};
                    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
                    inline PropertyValue& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


                    // step Field Functions 
                    bool hasStep() const { return this->step_ != nullptr;};
                    void deleteStep() { this->step_ = nullptr;};
                    inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
                    inline PropertyValue& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


                    // type Field Functions 
                    bool hasType() const { return this->type_ != nullptr;};
                    void deleteType() { this->type_ = nullptr;};
                    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                    inline PropertyValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                    // value Field Functions 
                    bool hasValue() const { return this->value_ != nullptr;};
                    void deleteValue() { this->value_ = nullptr;};
                    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                    inline PropertyValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


                  protected:
                    shared_ptr<string> displayName_ {};
                    shared_ptr<string> max_ {};
                    shared_ptr<string> min_ {};
                    shared_ptr<string> remark_ {};
                    shared_ptr<string> step_ {};
                    shared_ptr<string> type_ {};
                    shared_ptr<string> value_ {};
                  };

                  virtual bool empty() const override { return this->propertyValue_ == nullptr; };
                  // propertyValue Field Functions 
                  bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
                  void deletePropertyValue() { this->propertyValue_ = nullptr;};
                  inline const vector<PropertyValues::PropertyValue> & getPropertyValue() const { DARABONBA_PTR_GET_CONST(propertyValue_, vector<PropertyValues::PropertyValue>) };
                  inline vector<PropertyValues::PropertyValue> getPropertyValue() { DARABONBA_PTR_GET(propertyValue_, vector<PropertyValues::PropertyValue>) };
                  inline PropertyValues& setPropertyValue(const vector<PropertyValues::PropertyValue> & propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };
                  inline PropertyValues& setPropertyValue(vector<PropertyValues::PropertyValue> && propertyValue) { DARABONBA_PTR_SET_RVALUE(propertyValue_, propertyValue) };


                protected:
                  shared_ptr<vector<PropertyValues::PropertyValue>> propertyValue_ {};
                };

                virtual bool empty() const override { return this->displayUnit_ == nullptr
        && this->key_ == nullptr && this->name_ == nullptr && this->propertyValues_ == nullptr && this->showType_ == nullptr; };
                // displayUnit Field Functions 
                bool hasDisplayUnit() const { return this->displayUnit_ != nullptr;};
                void deleteDisplayUnit() { this->displayUnit_ = nullptr;};
                inline string getDisplayUnit() const { DARABONBA_PTR_GET_DEFAULT(displayUnit_, "") };
                inline Property& setDisplayUnit(string displayUnit) { DARABONBA_PTR_SET_VALUE(displayUnit_, displayUnit) };


                // key Field Functions 
                bool hasKey() const { return this->key_ != nullptr;};
                void deleteKey() { this->key_ = nullptr;};
                inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
                inline Property& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline Property& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                // propertyValues Field Functions 
                bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
                void deletePropertyValues() { this->propertyValues_ = nullptr;};
                inline const Property::PropertyValues & getPropertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, Property::PropertyValues) };
                inline Property::PropertyValues getPropertyValues() { DARABONBA_PTR_GET(propertyValues_, Property::PropertyValues) };
                inline Property& setPropertyValues(const Property::PropertyValues & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
                inline Property& setPropertyValues(Property::PropertyValues && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


                // showType Field Functions 
                bool hasShowType() const { return this->showType_ != nullptr;};
                void deleteShowType() { this->showType_ = nullptr;};
                inline string getShowType() const { DARABONBA_PTR_GET_DEFAULT(showType_, "") };
                inline Property& setShowType(string showType) { DARABONBA_PTR_SET_VALUE(showType_, showType) };


              protected:
                shared_ptr<string> displayUnit_ {};
                shared_ptr<string> key_ {};
                shared_ptr<string> name_ {};
                shared_ptr<Property::PropertyValues> propertyValues_ {};
                shared_ptr<string> showType_ {};
              };

              virtual bool empty() const override { return this->property_ == nullptr; };
              // property Field Functions 
              bool hasProperty() const { return this->property_ != nullptr;};
              void deleteProperty() { this->property_ = nullptr;};
              inline const vector<Properties::Property> & getProperty() const { DARABONBA_PTR_GET_CONST(property_, vector<Properties::Property>) };
              inline vector<Properties::Property> getProperty() { DARABONBA_PTR_GET(property_, vector<Properties::Property>) };
              inline Properties& setProperty(const vector<Properties::Property> & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
              inline Properties& setProperty(vector<Properties::Property> && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


            protected:
              shared_ptr<vector<Properties::Property>> property_ {};
            };

            virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->properties_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline Module& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Module& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Module& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // properties Field Functions 
            bool hasProperties() const { return this->properties_ != nullptr;};
            void deleteProperties() { this->properties_ = nullptr;};
            inline const Module::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, Module::Properties) };
            inline Module::Properties getProperties() { DARABONBA_PTR_GET(properties_, Module::Properties) };
            inline Module& setProperties(const Module::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
            inline Module& setProperties(Module::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<string> id_ {};
            shared_ptr<string> name_ {};
            shared_ptr<Module::Properties> properties_ {};
          };

          virtual bool empty() const override { return this->module_ == nullptr; };
          // module Field Functions 
          bool hasModule() const { return this->module_ != nullptr;};
          void deleteModule() { this->module_ = nullptr;};
          inline const vector<Modules::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<Modules::Module>) };
          inline vector<Modules::Module> getModule() { DARABONBA_PTR_GET(module_, vector<Modules::Module>) };
          inline Modules& setModule(const vector<Modules::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
          inline Modules& setModule(vector<Modules::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


        protected:
          shared_ptr<vector<Modules::Module>> module_ {};
        };

        virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->code_ == nullptr && this->constraints_ == nullptr && this->hidden_ == nullptr && this->modules_ == nullptr && this->name_ == nullptr
        && this->orderPeriods_ == nullptr; };
        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline ProductSku& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ProductSku& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // constraints Field Functions 
        bool hasConstraints() const { return this->constraints_ != nullptr;};
        void deleteConstraints() { this->constraints_ = nullptr;};
        inline string getConstraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
        inline ProductSku& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


        // hidden Field Functions 
        bool hasHidden() const { return this->hidden_ != nullptr;};
        void deleteHidden() { this->hidden_ = nullptr;};
        inline bool getHidden() const { DARABONBA_PTR_GET_DEFAULT(hidden_, false) };
        inline ProductSku& setHidden(bool hidden) { DARABONBA_PTR_SET_VALUE(hidden_, hidden) };


        // modules Field Functions 
        bool hasModules() const { return this->modules_ != nullptr;};
        void deleteModules() { this->modules_ = nullptr;};
        inline const ProductSku::Modules & getModules() const { DARABONBA_PTR_GET_CONST(modules_, ProductSku::Modules) };
        inline ProductSku::Modules getModules() { DARABONBA_PTR_GET(modules_, ProductSku::Modules) };
        inline ProductSku& setModules(const ProductSku::Modules & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
        inline ProductSku& setModules(ProductSku::Modules && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ProductSku& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // orderPeriods Field Functions 
        bool hasOrderPeriods() const { return this->orderPeriods_ != nullptr;};
        void deleteOrderPeriods() { this->orderPeriods_ = nullptr;};
        inline const ProductSku::OrderPeriods & getOrderPeriods() const { DARABONBA_PTR_GET_CONST(orderPeriods_, ProductSku::OrderPeriods) };
        inline ProductSku::OrderPeriods getOrderPeriods() { DARABONBA_PTR_GET(orderPeriods_, ProductSku::OrderPeriods) };
        inline ProductSku& setOrderPeriods(const ProductSku::OrderPeriods & orderPeriods) { DARABONBA_PTR_SET_VALUE(orderPeriods_, orderPeriods) };
        inline ProductSku& setOrderPeriods(ProductSku::OrderPeriods && orderPeriods) { DARABONBA_PTR_SET_RVALUE(orderPeriods_, orderPeriods) };


      protected:
        shared_ptr<string> chargeType_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> constraints_ {};
        shared_ptr<bool> hidden_ {};
        shared_ptr<ProductSku::Modules> modules_ {};
        shared_ptr<string> name_ {};
        shared_ptr<ProductSku::OrderPeriods> orderPeriods_ {};
      };

      virtual bool empty() const override { return this->productSku_ == nullptr; };
      // productSku Field Functions 
      bool hasProductSku() const { return this->productSku_ != nullptr;};
      void deleteProductSku() { this->productSku_ = nullptr;};
      inline const vector<ProductSkus::ProductSku> & getProductSku() const { DARABONBA_PTR_GET_CONST(productSku_, vector<ProductSkus::ProductSku>) };
      inline vector<ProductSkus::ProductSku> getProductSku() { DARABONBA_PTR_GET(productSku_, vector<ProductSkus::ProductSku>) };
      inline ProductSkus& setProductSku(const vector<ProductSkus::ProductSku> & productSku) { DARABONBA_PTR_SET_VALUE(productSku_, productSku) };
      inline ProductSkus& setProductSku(vector<ProductSkus::ProductSku> && productSku) { DARABONBA_PTR_SET_RVALUE(productSku_, productSku) };


    protected:
      shared_ptr<vector<ProductSkus::ProductSku>> productSku_ {};
    };

    class ProductExtras : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductExtras& obj) { 
        DARABONBA_PTR_TO_JSON(ProductExtra, productExtra_);
      };
      friend void from_json(const Darabonba::Json& j, ProductExtras& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductExtra, productExtra_);
      };
      ProductExtras() = default ;
      ProductExtras(const ProductExtras &) = default ;
      ProductExtras(ProductExtras &&) = default ;
      ProductExtras(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductExtras() = default ;
      ProductExtras& operator=(const ProductExtras &) = default ;
      ProductExtras& operator=(ProductExtras &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProductExtra : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProductExtra& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Order, order_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, ProductExtra& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Order, order_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        ProductExtra() = default ;
        ProductExtra(const ProductExtra &) = default ;
        ProductExtra(ProductExtra &&) = default ;
        ProductExtra(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProductExtra() = default ;
        ProductExtra& operator=(const ProductExtra &) = default ;
        ProductExtra& operator=(ProductExtra &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->label_ == nullptr && this->order_ == nullptr && this->type_ == nullptr && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ProductExtra& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline ProductExtra& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
        inline ProductExtra& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ProductExtra& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
        inline ProductExtra& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> label_ {};
        shared_ptr<int32_t> order_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> values_ {};
      };

      virtual bool empty() const override { return this->productExtra_ == nullptr; };
      // productExtra Field Functions 
      bool hasProductExtra() const { return this->productExtra_ != nullptr;};
      void deleteProductExtra() { this->productExtra_ = nullptr;};
      inline const vector<ProductExtras::ProductExtra> & getProductExtra() const { DARABONBA_PTR_GET_CONST(productExtra_, vector<ProductExtras::ProductExtra>) };
      inline vector<ProductExtras::ProductExtra> getProductExtra() { DARABONBA_PTR_GET(productExtra_, vector<ProductExtras::ProductExtra>) };
      inline ProductExtras& setProductExtra(const vector<ProductExtras::ProductExtra> & productExtra) { DARABONBA_PTR_SET_VALUE(productExtra_, productExtra) };
      inline ProductExtras& setProductExtra(vector<ProductExtras::ProductExtra> && productExtra) { DARABONBA_PTR_SET_RVALUE(productExtra_, productExtra) };


    protected:
      shared_ptr<vector<ProductExtras::ProductExtra>> productExtra_ {};
    };

    virtual bool empty() const override { return this->auditFailMsg_ == nullptr
        && this->auditStatus_ == nullptr && this->auditTime_ == nullptr && this->code_ == nullptr && this->description_ == nullptr && this->frontCategoryId_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr && this->picUrl_ == nullptr && this->productExtras_ == nullptr
        && this->productSkus_ == nullptr && this->requestId_ == nullptr && this->score_ == nullptr && this->shopInfo_ == nullptr && this->shortDescription_ == nullptr
        && this->status_ == nullptr && this->supplierPk_ == nullptr && this->type_ == nullptr && this->useCount_ == nullptr; };
    // auditFailMsg Field Functions 
    bool hasAuditFailMsg() const { return this->auditFailMsg_ != nullptr;};
    void deleteAuditFailMsg() { this->auditFailMsg_ = nullptr;};
    inline string getAuditFailMsg() const { DARABONBA_PTR_GET_DEFAULT(auditFailMsg_, "") };
    inline DescribeProductResponseBody& setAuditFailMsg(string auditFailMsg) { DARABONBA_PTR_SET_VALUE(auditFailMsg_, auditFailMsg) };


    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline DescribeProductResponseBody& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // auditTime Field Functions 
    bool hasAuditTime() const { return this->auditTime_ != nullptr;};
    void deleteAuditTime() { this->auditTime_ = nullptr;};
    inline int64_t getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, 0L) };
    inline DescribeProductResponseBody& setAuditTime(int64_t auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeProductResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeProductResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frontCategoryId Field Functions 
    bool hasFrontCategoryId() const { return this->frontCategoryId_ != nullptr;};
    void deleteFrontCategoryId() { this->frontCategoryId_ = nullptr;};
    inline int64_t getFrontCategoryId() const { DARABONBA_PTR_GET_DEFAULT(frontCategoryId_, 0L) };
    inline DescribeProductResponseBody& setFrontCategoryId(int64_t frontCategoryId) { DARABONBA_PTR_SET_VALUE(frontCategoryId_, frontCategoryId) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline DescribeProductResponseBody& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeProductResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeProductResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // picUrl Field Functions 
    bool hasPicUrl() const { return this->picUrl_ != nullptr;};
    void deletePicUrl() { this->picUrl_ = nullptr;};
    inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
    inline DescribeProductResponseBody& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


    // productExtras Field Functions 
    bool hasProductExtras() const { return this->productExtras_ != nullptr;};
    void deleteProductExtras() { this->productExtras_ = nullptr;};
    inline const DescribeProductResponseBody::ProductExtras & getProductExtras() const { DARABONBA_PTR_GET_CONST(productExtras_, DescribeProductResponseBody::ProductExtras) };
    inline DescribeProductResponseBody::ProductExtras getProductExtras() { DARABONBA_PTR_GET(productExtras_, DescribeProductResponseBody::ProductExtras) };
    inline DescribeProductResponseBody& setProductExtras(const DescribeProductResponseBody::ProductExtras & productExtras) { DARABONBA_PTR_SET_VALUE(productExtras_, productExtras) };
    inline DescribeProductResponseBody& setProductExtras(DescribeProductResponseBody::ProductExtras && productExtras) { DARABONBA_PTR_SET_RVALUE(productExtras_, productExtras) };


    // productSkus Field Functions 
    bool hasProductSkus() const { return this->productSkus_ != nullptr;};
    void deleteProductSkus() { this->productSkus_ = nullptr;};
    inline const DescribeProductResponseBody::ProductSkus & getProductSkus() const { DARABONBA_PTR_GET_CONST(productSkus_, DescribeProductResponseBody::ProductSkus) };
    inline DescribeProductResponseBody::ProductSkus getProductSkus() { DARABONBA_PTR_GET(productSkus_, DescribeProductResponseBody::ProductSkus) };
    inline DescribeProductResponseBody& setProductSkus(const DescribeProductResponseBody::ProductSkus & productSkus) { DARABONBA_PTR_SET_VALUE(productSkus_, productSkus) };
    inline DescribeProductResponseBody& setProductSkus(DescribeProductResponseBody::ProductSkus && productSkus) { DARABONBA_PTR_SET_RVALUE(productSkus_, productSkus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DescribeProductResponseBody& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // shopInfo Field Functions 
    bool hasShopInfo() const { return this->shopInfo_ != nullptr;};
    void deleteShopInfo() { this->shopInfo_ = nullptr;};
    inline const DescribeProductResponseBody::ShopInfo & getShopInfo() const { DARABONBA_PTR_GET_CONST(shopInfo_, DescribeProductResponseBody::ShopInfo) };
    inline DescribeProductResponseBody::ShopInfo getShopInfo() { DARABONBA_PTR_GET(shopInfo_, DescribeProductResponseBody::ShopInfo) };
    inline DescribeProductResponseBody& setShopInfo(const DescribeProductResponseBody::ShopInfo & shopInfo) { DARABONBA_PTR_SET_VALUE(shopInfo_, shopInfo) };
    inline DescribeProductResponseBody& setShopInfo(DescribeProductResponseBody::ShopInfo && shopInfo) { DARABONBA_PTR_SET_RVALUE(shopInfo_, shopInfo) };


    // shortDescription Field Functions 
    bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
    void deleteShortDescription() { this->shortDescription_ = nullptr;};
    inline string getShortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
    inline DescribeProductResponseBody& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeProductResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierPk Field Functions 
    bool hasSupplierPk() const { return this->supplierPk_ != nullptr;};
    void deleteSupplierPk() { this->supplierPk_ = nullptr;};
    inline int64_t getSupplierPk() const { DARABONBA_PTR_GET_DEFAULT(supplierPk_, 0L) };
    inline DescribeProductResponseBody& setSupplierPk(int64_t supplierPk) { DARABONBA_PTR_SET_VALUE(supplierPk_, supplierPk) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeProductResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useCount Field Functions 
    bool hasUseCount() const { return this->useCount_ != nullptr;};
    void deleteUseCount() { this->useCount_ = nullptr;};
    inline int64_t getUseCount() const { DARABONBA_PTR_GET_DEFAULT(useCount_, 0L) };
    inline DescribeProductResponseBody& setUseCount(int64_t useCount) { DARABONBA_PTR_SET_VALUE(useCount_, useCount) };


  protected:
    shared_ptr<string> auditFailMsg_ {};
    shared_ptr<string> auditStatus_ {};
    shared_ptr<int64_t> auditTime_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> frontCategoryId_ {};
    shared_ptr<int64_t> gmtCreated_ {};
    shared_ptr<int64_t> gmtModified_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> picUrl_ {};
    shared_ptr<DescribeProductResponseBody::ProductExtras> productExtras_ {};
    shared_ptr<DescribeProductResponseBody::ProductSkus> productSkus_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<float> score_ {};
    shared_ptr<DescribeProductResponseBody::ShopInfo> shopInfo_ {};
    shared_ptr<string> shortDescription_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> supplierPk_ {};
    shared_ptr<string> type_ {};
    shared_ptr<int64_t> useCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
