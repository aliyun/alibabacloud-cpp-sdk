// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDUCTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDUCTLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeDeductLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeductLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeductLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeductLogsResponseBody() = default ;
    DescribeDeductLogsResponseBody(const DescribeDeductLogsResponseBody &) = default ;
    DescribeDeductLogsResponseBody(DescribeDeductLogsResponseBody &&) = default ;
    DescribeDeductLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeductLogsResponseBody() = default ;
    DescribeDeductLogsResponseBody& operator=(const DescribeDeductLogsResponseBody &) = default ;
    DescribeDeductLogsResponseBody& operator=(DescribeDeductLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(BillingCommodity, billingCommodity_);
        DARABONBA_PTR_TO_JSON(BillingCommodityCode, billingCommodityCode_);
        DARABONBA_PTR_TO_JSON(BillingCommodityName, billingCommodityName_);
        DARABONBA_PTR_TO_JSON(BillingEndTime, billingEndTime_);
        DARABONBA_PTR_TO_JSON(BillingInstanceId, billingInstanceId_);
        DARABONBA_PTR_TO_JSON(BillingPriceField, billingPriceField_);
        DARABONBA_PTR_TO_JSON(BillingPriceFieldCode, billingPriceFieldCode_);
        DARABONBA_PTR_TO_JSON(BillingPriceFieldName, billingPriceFieldName_);
        DARABONBA_PTR_TO_JSON(BillingStartTime, billingStartTime_);
        DARABONBA_PTR_TO_JSON(CapacityAfterDeductViewUnit, capacityAfterDeductViewUnit_);
        DARABONBA_PTR_TO_JSON(CapacityAfterDeductViewValue, capacityAfterDeductViewValue_);
        DARABONBA_PTR_TO_JSON(CapacityBeforeDeductViewUnit, capacityBeforeDeductViewUnit_);
        DARABONBA_PTR_TO_JSON(CapacityBeforeDeductViewValue, capacityBeforeDeductViewValue_);
        DARABONBA_PTR_TO_JSON(CapacityDeductedViewUnit, capacityDeductedViewUnit_);
        DARABONBA_PTR_TO_JSON(CapacityDeductedViewValue, capacityDeductedViewValue_);
        DARABONBA_PTR_TO_JSON(CapacityType, capacityType_);
        DARABONBA_PTR_TO_JSON(CapacityTypeCode, capacityTypeCode_);
        DARABONBA_PTR_TO_JSON(CapacityTypeName, capacityTypeName_);
        DARABONBA_PTR_TO_JSON(Commodity, commodity_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
        DARABONBA_PTR_TO_JSON(CycleTypeCode, cycleTypeCode_);
        DARABONBA_PTR_TO_JSON(CycleTypeName, cycleTypeName_);
        DARABONBA_PTR_TO_JSON(DeductTime, deductTime_);
        DARABONBA_PTR_TO_JSON(Factor, factor_);
        DARABONBA_PTR_TO_JSON(InstanceBelongAccountId, instanceBelongAccountId_);
        DARABONBA_PTR_TO_JSON(InstanceBelongAccountName, instanceBelongAccountName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MeasureAfterDeductViewUnit, measureAfterDeductViewUnit_);
        DARABONBA_PTR_TO_JSON(MeasureAfterDeductViewValue, measureAfterDeductViewValue_);
        DARABONBA_PTR_TO_JSON(MeasureBeforeDeductViewUnit, measureBeforeDeductViewUnit_);
        DARABONBA_PTR_TO_JSON(MeasureBeforeDeductViewValue, measureBeforeDeductViewValue_);
        DARABONBA_PTR_TO_JSON(MeasureDeductedViewUnit, measureDeductedViewUnit_);
        DARABONBA_PTR_TO_JSON(MeasureDeductedViewValue, measureDeductedViewValue_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(RelationAccountId, relationAccountId_);
        DARABONBA_PTR_TO_JSON(RelationAccountName, relationAccountName_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(BillingCommodity, billingCommodity_);
        DARABONBA_PTR_FROM_JSON(BillingCommodityCode, billingCommodityCode_);
        DARABONBA_PTR_FROM_JSON(BillingCommodityName, billingCommodityName_);
        DARABONBA_PTR_FROM_JSON(BillingEndTime, billingEndTime_);
        DARABONBA_PTR_FROM_JSON(BillingInstanceId, billingInstanceId_);
        DARABONBA_PTR_FROM_JSON(BillingPriceField, billingPriceField_);
        DARABONBA_PTR_FROM_JSON(BillingPriceFieldCode, billingPriceFieldCode_);
        DARABONBA_PTR_FROM_JSON(BillingPriceFieldName, billingPriceFieldName_);
        DARABONBA_PTR_FROM_JSON(BillingStartTime, billingStartTime_);
        DARABONBA_PTR_FROM_JSON(CapacityAfterDeductViewUnit, capacityAfterDeductViewUnit_);
        DARABONBA_PTR_FROM_JSON(CapacityAfterDeductViewValue, capacityAfterDeductViewValue_);
        DARABONBA_PTR_FROM_JSON(CapacityBeforeDeductViewUnit, capacityBeforeDeductViewUnit_);
        DARABONBA_PTR_FROM_JSON(CapacityBeforeDeductViewValue, capacityBeforeDeductViewValue_);
        DARABONBA_PTR_FROM_JSON(CapacityDeductedViewUnit, capacityDeductedViewUnit_);
        DARABONBA_PTR_FROM_JSON(CapacityDeductedViewValue, capacityDeductedViewValue_);
        DARABONBA_PTR_FROM_JSON(CapacityType, capacityType_);
        DARABONBA_PTR_FROM_JSON(CapacityTypeCode, capacityTypeCode_);
        DARABONBA_PTR_FROM_JSON(CapacityTypeName, capacityTypeName_);
        DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
        DARABONBA_PTR_FROM_JSON(CycleTypeCode, cycleTypeCode_);
        DARABONBA_PTR_FROM_JSON(CycleTypeName, cycleTypeName_);
        DARABONBA_PTR_FROM_JSON(DeductTime, deductTime_);
        DARABONBA_PTR_FROM_JSON(Factor, factor_);
        DARABONBA_PTR_FROM_JSON(InstanceBelongAccountId, instanceBelongAccountId_);
        DARABONBA_PTR_FROM_JSON(InstanceBelongAccountName, instanceBelongAccountName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MeasureAfterDeductViewUnit, measureAfterDeductViewUnit_);
        DARABONBA_PTR_FROM_JSON(MeasureAfterDeductViewValue, measureAfterDeductViewValue_);
        DARABONBA_PTR_FROM_JSON(MeasureBeforeDeductViewUnit, measureBeforeDeductViewUnit_);
        DARABONBA_PTR_FROM_JSON(MeasureBeforeDeductViewValue, measureBeforeDeductViewValue_);
        DARABONBA_PTR_FROM_JSON(MeasureDeductedViewUnit, measureDeductedViewUnit_);
        DARABONBA_PTR_FROM_JSON(MeasureDeductedViewValue, measureDeductedViewValue_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(RelationAccountId, relationAccountId_);
        DARABONBA_PTR_FROM_JSON(RelationAccountName, relationAccountName_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
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
      class Template : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Template& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Template& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Template() = default ;
        Template(const Template &) = default ;
        Template(Template &&) = default ;
        Template(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Template() = default ;
        Template& operator=(const Template &) = default ;
        Template& operator=(Template &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Template& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The property code.
        shared_ptr<string> code_ {};
        // The property name.
        shared_ptr<string> name_ {};
      };

      class Product : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Product& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Product& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Product() = default ;
        Product(const Product &) = default ;
        Product(Product &&) = default ;
        Product(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Product() = default ;
        Product& operator=(const Product &) = default ;
        Product& operator=(Product &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Product& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Product& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The property code.
        shared_ptr<string> code_ {};
        // The property name.
        shared_ptr<string> name_ {};
      };

      class CycleType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CycleType& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, CycleType& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        CycleType() = default ;
        CycleType(const CycleType &) = default ;
        CycleType(CycleType &&) = default ;
        CycleType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CycleType() = default ;
        CycleType& operator=(const CycleType &) = default ;
        CycleType& operator=(CycleType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline CycleType& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CycleType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The commitment cycle code.
        shared_ptr<string> code_ {};
        // The commitment cycle name.
        shared_ptr<string> name_ {};
      };

      class Commodity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Commodity& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Commodity& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Commodity() = default ;
        Commodity(const Commodity &) = default ;
        Commodity(Commodity &&) = default ;
        Commodity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Commodity() = default ;
        Commodity& operator=(const Commodity &) = default ;
        Commodity& operator=(Commodity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Commodity& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Commodity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The property code.
        shared_ptr<string> code_ {};
        // The property name.
        shared_ptr<string> name_ {};
      };

      class CapacityType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CapacityType& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, CapacityType& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        CapacityType() = default ;
        CapacityType(const CapacityType &) = default ;
        CapacityType(CapacityType &&) = default ;
        CapacityType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CapacityType() = default ;
        CapacityType& operator=(const CapacityType &) = default ;
        CapacityType& operator=(CapacityType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline CapacityType& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CapacityType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The property code.
        shared_ptr<string> code_ {};
        // The property name.
        shared_ptr<string> name_ {};
      };

      class BillingPriceField : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BillingPriceField& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, BillingPriceField& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        BillingPriceField() = default ;
        BillingPriceField(const BillingPriceField &) = default ;
        BillingPriceField(BillingPriceField &&) = default ;
        BillingPriceField(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BillingPriceField() = default ;
        BillingPriceField& operator=(const BillingPriceField &) = default ;
        BillingPriceField& operator=(BillingPriceField &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline BillingPriceField& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BillingPriceField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The property code.
        shared_ptr<string> code_ {};
        // The property name.
        shared_ptr<string> name_ {};
      };

      class BillingCommodity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BillingCommodity& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, BillingCommodity& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        BillingCommodity() = default ;
        BillingCommodity(const BillingCommodity &) = default ;
        BillingCommodity(BillingCommodity &&) = default ;
        BillingCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BillingCommodity() = default ;
        BillingCommodity& operator=(const BillingCommodity &) = default ;
        BillingCommodity& operator=(BillingCommodity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline BillingCommodity& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BillingCommodity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The property code.
        shared_ptr<string> code_ {};
        // The property name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->billingCommodity_ == nullptr && this->billingCommodityCode_ == nullptr && this->billingCommodityName_ == nullptr && this->billingEndTime_ == nullptr
        && this->billingInstanceId_ == nullptr && this->billingPriceField_ == nullptr && this->billingPriceFieldCode_ == nullptr && this->billingPriceFieldName_ == nullptr && this->billingStartTime_ == nullptr
        && this->capacityAfterDeductViewUnit_ == nullptr && this->capacityAfterDeductViewValue_ == nullptr && this->capacityBeforeDeductViewUnit_ == nullptr && this->capacityBeforeDeductViewValue_ == nullptr && this->capacityDeductedViewUnit_ == nullptr
        && this->capacityDeductedViewValue_ == nullptr && this->capacityType_ == nullptr && this->capacityTypeCode_ == nullptr && this->capacityTypeName_ == nullptr && this->commodity_ == nullptr
        && this->commodityCode_ == nullptr && this->commodityName_ == nullptr && this->cycleType_ == nullptr && this->cycleTypeCode_ == nullptr && this->cycleTypeName_ == nullptr
        && this->deductTime_ == nullptr && this->factor_ == nullptr && this->instanceBelongAccountId_ == nullptr && this->instanceBelongAccountName_ == nullptr && this->instanceId_ == nullptr
        && this->measureAfterDeductViewUnit_ == nullptr && this->measureAfterDeductViewValue_ == nullptr && this->measureBeforeDeductViewUnit_ == nullptr && this->measureBeforeDeductViewValue_ == nullptr && this->measureDeductedViewUnit_ == nullptr
        && this->measureDeductedViewValue_ == nullptr && this->product_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->relationAccountId_ == nullptr
        && this->relationAccountName_ == nullptr && this->template_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline Data& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // billingCommodity Field Functions 
      bool hasBillingCommodity() const { return this->billingCommodity_ != nullptr;};
      void deleteBillingCommodity() { this->billingCommodity_ = nullptr;};
      inline const Data::BillingCommodity & getBillingCommodity() const { DARABONBA_PTR_GET_CONST(billingCommodity_, Data::BillingCommodity) };
      inline Data::BillingCommodity getBillingCommodity() { DARABONBA_PTR_GET(billingCommodity_, Data::BillingCommodity) };
      inline Data& setBillingCommodity(const Data::BillingCommodity & billingCommodity) { DARABONBA_PTR_SET_VALUE(billingCommodity_, billingCommodity) };
      inline Data& setBillingCommodity(Data::BillingCommodity && billingCommodity) { DARABONBA_PTR_SET_RVALUE(billingCommodity_, billingCommodity) };


      // billingCommodityCode Field Functions 
      bool hasBillingCommodityCode() const { return this->billingCommodityCode_ != nullptr;};
      void deleteBillingCommodityCode() { this->billingCommodityCode_ = nullptr;};
      inline string getBillingCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(billingCommodityCode_, "") };
      inline Data& setBillingCommodityCode(string billingCommodityCode) { DARABONBA_PTR_SET_VALUE(billingCommodityCode_, billingCommodityCode) };


      // billingCommodityName Field Functions 
      bool hasBillingCommodityName() const { return this->billingCommodityName_ != nullptr;};
      void deleteBillingCommodityName() { this->billingCommodityName_ = nullptr;};
      inline string getBillingCommodityName() const { DARABONBA_PTR_GET_DEFAULT(billingCommodityName_, "") };
      inline Data& setBillingCommodityName(string billingCommodityName) { DARABONBA_PTR_SET_VALUE(billingCommodityName_, billingCommodityName) };


      // billingEndTime Field Functions 
      bool hasBillingEndTime() const { return this->billingEndTime_ != nullptr;};
      void deleteBillingEndTime() { this->billingEndTime_ = nullptr;};
      inline int64_t getBillingEndTime() const { DARABONBA_PTR_GET_DEFAULT(billingEndTime_, 0L) };
      inline Data& setBillingEndTime(int64_t billingEndTime) { DARABONBA_PTR_SET_VALUE(billingEndTime_, billingEndTime) };


      // billingInstanceId Field Functions 
      bool hasBillingInstanceId() const { return this->billingInstanceId_ != nullptr;};
      void deleteBillingInstanceId() { this->billingInstanceId_ = nullptr;};
      inline string getBillingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(billingInstanceId_, "") };
      inline Data& setBillingInstanceId(string billingInstanceId) { DARABONBA_PTR_SET_VALUE(billingInstanceId_, billingInstanceId) };


      // billingPriceField Field Functions 
      bool hasBillingPriceField() const { return this->billingPriceField_ != nullptr;};
      void deleteBillingPriceField() { this->billingPriceField_ = nullptr;};
      inline const Data::BillingPriceField & getBillingPriceField() const { DARABONBA_PTR_GET_CONST(billingPriceField_, Data::BillingPriceField) };
      inline Data::BillingPriceField getBillingPriceField() { DARABONBA_PTR_GET(billingPriceField_, Data::BillingPriceField) };
      inline Data& setBillingPriceField(const Data::BillingPriceField & billingPriceField) { DARABONBA_PTR_SET_VALUE(billingPriceField_, billingPriceField) };
      inline Data& setBillingPriceField(Data::BillingPriceField && billingPriceField) { DARABONBA_PTR_SET_RVALUE(billingPriceField_, billingPriceField) };


      // billingPriceFieldCode Field Functions 
      bool hasBillingPriceFieldCode() const { return this->billingPriceFieldCode_ != nullptr;};
      void deleteBillingPriceFieldCode() { this->billingPriceFieldCode_ = nullptr;};
      inline string getBillingPriceFieldCode() const { DARABONBA_PTR_GET_DEFAULT(billingPriceFieldCode_, "") };
      inline Data& setBillingPriceFieldCode(string billingPriceFieldCode) { DARABONBA_PTR_SET_VALUE(billingPriceFieldCode_, billingPriceFieldCode) };


      // billingPriceFieldName Field Functions 
      bool hasBillingPriceFieldName() const { return this->billingPriceFieldName_ != nullptr;};
      void deleteBillingPriceFieldName() { this->billingPriceFieldName_ = nullptr;};
      inline string getBillingPriceFieldName() const { DARABONBA_PTR_GET_DEFAULT(billingPriceFieldName_, "") };
      inline Data& setBillingPriceFieldName(string billingPriceFieldName) { DARABONBA_PTR_SET_VALUE(billingPriceFieldName_, billingPriceFieldName) };


      // billingStartTime Field Functions 
      bool hasBillingStartTime() const { return this->billingStartTime_ != nullptr;};
      void deleteBillingStartTime() { this->billingStartTime_ = nullptr;};
      inline int64_t getBillingStartTime() const { DARABONBA_PTR_GET_DEFAULT(billingStartTime_, 0L) };
      inline Data& setBillingStartTime(int64_t billingStartTime) { DARABONBA_PTR_SET_VALUE(billingStartTime_, billingStartTime) };


      // capacityAfterDeductViewUnit Field Functions 
      bool hasCapacityAfterDeductViewUnit() const { return this->capacityAfterDeductViewUnit_ != nullptr;};
      void deleteCapacityAfterDeductViewUnit() { this->capacityAfterDeductViewUnit_ = nullptr;};
      inline string getCapacityAfterDeductViewUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityAfterDeductViewUnit_, "") };
      inline Data& setCapacityAfterDeductViewUnit(string capacityAfterDeductViewUnit) { DARABONBA_PTR_SET_VALUE(capacityAfterDeductViewUnit_, capacityAfterDeductViewUnit) };


      // capacityAfterDeductViewValue Field Functions 
      bool hasCapacityAfterDeductViewValue() const { return this->capacityAfterDeductViewValue_ != nullptr;};
      void deleteCapacityAfterDeductViewValue() { this->capacityAfterDeductViewValue_ = nullptr;};
      inline string getCapacityAfterDeductViewValue() const { DARABONBA_PTR_GET_DEFAULT(capacityAfterDeductViewValue_, "") };
      inline Data& setCapacityAfterDeductViewValue(string capacityAfterDeductViewValue) { DARABONBA_PTR_SET_VALUE(capacityAfterDeductViewValue_, capacityAfterDeductViewValue) };


      // capacityBeforeDeductViewUnit Field Functions 
      bool hasCapacityBeforeDeductViewUnit() const { return this->capacityBeforeDeductViewUnit_ != nullptr;};
      void deleteCapacityBeforeDeductViewUnit() { this->capacityBeforeDeductViewUnit_ = nullptr;};
      inline string getCapacityBeforeDeductViewUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityBeforeDeductViewUnit_, "") };
      inline Data& setCapacityBeforeDeductViewUnit(string capacityBeforeDeductViewUnit) { DARABONBA_PTR_SET_VALUE(capacityBeforeDeductViewUnit_, capacityBeforeDeductViewUnit) };


      // capacityBeforeDeductViewValue Field Functions 
      bool hasCapacityBeforeDeductViewValue() const { return this->capacityBeforeDeductViewValue_ != nullptr;};
      void deleteCapacityBeforeDeductViewValue() { this->capacityBeforeDeductViewValue_ = nullptr;};
      inline string getCapacityBeforeDeductViewValue() const { DARABONBA_PTR_GET_DEFAULT(capacityBeforeDeductViewValue_, "") };
      inline Data& setCapacityBeforeDeductViewValue(string capacityBeforeDeductViewValue) { DARABONBA_PTR_SET_VALUE(capacityBeforeDeductViewValue_, capacityBeforeDeductViewValue) };


      // capacityDeductedViewUnit Field Functions 
      bool hasCapacityDeductedViewUnit() const { return this->capacityDeductedViewUnit_ != nullptr;};
      void deleteCapacityDeductedViewUnit() { this->capacityDeductedViewUnit_ = nullptr;};
      inline string getCapacityDeductedViewUnit() const { DARABONBA_PTR_GET_DEFAULT(capacityDeductedViewUnit_, "") };
      inline Data& setCapacityDeductedViewUnit(string capacityDeductedViewUnit) { DARABONBA_PTR_SET_VALUE(capacityDeductedViewUnit_, capacityDeductedViewUnit) };


      // capacityDeductedViewValue Field Functions 
      bool hasCapacityDeductedViewValue() const { return this->capacityDeductedViewValue_ != nullptr;};
      void deleteCapacityDeductedViewValue() { this->capacityDeductedViewValue_ = nullptr;};
      inline string getCapacityDeductedViewValue() const { DARABONBA_PTR_GET_DEFAULT(capacityDeductedViewValue_, "") };
      inline Data& setCapacityDeductedViewValue(string capacityDeductedViewValue) { DARABONBA_PTR_SET_VALUE(capacityDeductedViewValue_, capacityDeductedViewValue) };


      // capacityType Field Functions 
      bool hasCapacityType() const { return this->capacityType_ != nullptr;};
      void deleteCapacityType() { this->capacityType_ = nullptr;};
      inline const Data::CapacityType & getCapacityType() const { DARABONBA_PTR_GET_CONST(capacityType_, Data::CapacityType) };
      inline Data::CapacityType getCapacityType() { DARABONBA_PTR_GET(capacityType_, Data::CapacityType) };
      inline Data& setCapacityType(const Data::CapacityType & capacityType) { DARABONBA_PTR_SET_VALUE(capacityType_, capacityType) };
      inline Data& setCapacityType(Data::CapacityType && capacityType) { DARABONBA_PTR_SET_RVALUE(capacityType_, capacityType) };


      // capacityTypeCode Field Functions 
      bool hasCapacityTypeCode() const { return this->capacityTypeCode_ != nullptr;};
      void deleteCapacityTypeCode() { this->capacityTypeCode_ = nullptr;};
      inline string getCapacityTypeCode() const { DARABONBA_PTR_GET_DEFAULT(capacityTypeCode_, "") };
      inline Data& setCapacityTypeCode(string capacityTypeCode) { DARABONBA_PTR_SET_VALUE(capacityTypeCode_, capacityTypeCode) };


      // capacityTypeName Field Functions 
      bool hasCapacityTypeName() const { return this->capacityTypeName_ != nullptr;};
      void deleteCapacityTypeName() { this->capacityTypeName_ = nullptr;};
      inline string getCapacityTypeName() const { DARABONBA_PTR_GET_DEFAULT(capacityTypeName_, "") };
      inline Data& setCapacityTypeName(string capacityTypeName) { DARABONBA_PTR_SET_VALUE(capacityTypeName_, capacityTypeName) };


      // commodity Field Functions 
      bool hasCommodity() const { return this->commodity_ != nullptr;};
      void deleteCommodity() { this->commodity_ = nullptr;};
      inline const Data::Commodity & getCommodity() const { DARABONBA_PTR_GET_CONST(commodity_, Data::Commodity) };
      inline Data::Commodity getCommodity() { DARABONBA_PTR_GET(commodity_, Data::Commodity) };
      inline Data& setCommodity(const Data::Commodity & commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };
      inline Data& setCommodity(Data::Commodity && commodity) { DARABONBA_PTR_SET_RVALUE(commodity_, commodity) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline Data& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // cycleType Field Functions 
      bool hasCycleType() const { return this->cycleType_ != nullptr;};
      void deleteCycleType() { this->cycleType_ = nullptr;};
      inline const Data::CycleType & getCycleType() const { DARABONBA_PTR_GET_CONST(cycleType_, Data::CycleType) };
      inline Data::CycleType getCycleType() { DARABONBA_PTR_GET(cycleType_, Data::CycleType) };
      inline Data& setCycleType(const Data::CycleType & cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };
      inline Data& setCycleType(Data::CycleType && cycleType) { DARABONBA_PTR_SET_RVALUE(cycleType_, cycleType) };


      // cycleTypeCode Field Functions 
      bool hasCycleTypeCode() const { return this->cycleTypeCode_ != nullptr;};
      void deleteCycleTypeCode() { this->cycleTypeCode_ = nullptr;};
      inline string getCycleTypeCode() const { DARABONBA_PTR_GET_DEFAULT(cycleTypeCode_, "") };
      inline Data& setCycleTypeCode(string cycleTypeCode) { DARABONBA_PTR_SET_VALUE(cycleTypeCode_, cycleTypeCode) };


      // cycleTypeName Field Functions 
      bool hasCycleTypeName() const { return this->cycleTypeName_ != nullptr;};
      void deleteCycleTypeName() { this->cycleTypeName_ = nullptr;};
      inline string getCycleTypeName() const { DARABONBA_PTR_GET_DEFAULT(cycleTypeName_, "") };
      inline Data& setCycleTypeName(string cycleTypeName) { DARABONBA_PTR_SET_VALUE(cycleTypeName_, cycleTypeName) };


      // deductTime Field Functions 
      bool hasDeductTime() const { return this->deductTime_ != nullptr;};
      void deleteDeductTime() { this->deductTime_ = nullptr;};
      inline int64_t getDeductTime() const { DARABONBA_PTR_GET_DEFAULT(deductTime_, 0L) };
      inline Data& setDeductTime(int64_t deductTime) { DARABONBA_PTR_SET_VALUE(deductTime_, deductTime) };


      // factor Field Functions 
      bool hasFactor() const { return this->factor_ != nullptr;};
      void deleteFactor() { this->factor_ = nullptr;};
      inline string getFactor() const { DARABONBA_PTR_GET_DEFAULT(factor_, "") };
      inline Data& setFactor(string factor) { DARABONBA_PTR_SET_VALUE(factor_, factor) };


      // instanceBelongAccountId Field Functions 
      bool hasInstanceBelongAccountId() const { return this->instanceBelongAccountId_ != nullptr;};
      void deleteInstanceBelongAccountId() { this->instanceBelongAccountId_ = nullptr;};
      inline int64_t getInstanceBelongAccountId() const { DARABONBA_PTR_GET_DEFAULT(instanceBelongAccountId_, 0L) };
      inline Data& setInstanceBelongAccountId(int64_t instanceBelongAccountId) { DARABONBA_PTR_SET_VALUE(instanceBelongAccountId_, instanceBelongAccountId) };


      // instanceBelongAccountName Field Functions 
      bool hasInstanceBelongAccountName() const { return this->instanceBelongAccountName_ != nullptr;};
      void deleteInstanceBelongAccountName() { this->instanceBelongAccountName_ = nullptr;};
      inline string getInstanceBelongAccountName() const { DARABONBA_PTR_GET_DEFAULT(instanceBelongAccountName_, "") };
      inline Data& setInstanceBelongAccountName(string instanceBelongAccountName) { DARABONBA_PTR_SET_VALUE(instanceBelongAccountName_, instanceBelongAccountName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // measureAfterDeductViewUnit Field Functions 
      bool hasMeasureAfterDeductViewUnit() const { return this->measureAfterDeductViewUnit_ != nullptr;};
      void deleteMeasureAfterDeductViewUnit() { this->measureAfterDeductViewUnit_ = nullptr;};
      inline string getMeasureAfterDeductViewUnit() const { DARABONBA_PTR_GET_DEFAULT(measureAfterDeductViewUnit_, "") };
      inline Data& setMeasureAfterDeductViewUnit(string measureAfterDeductViewUnit) { DARABONBA_PTR_SET_VALUE(measureAfterDeductViewUnit_, measureAfterDeductViewUnit) };


      // measureAfterDeductViewValue Field Functions 
      bool hasMeasureAfterDeductViewValue() const { return this->measureAfterDeductViewValue_ != nullptr;};
      void deleteMeasureAfterDeductViewValue() { this->measureAfterDeductViewValue_ = nullptr;};
      inline string getMeasureAfterDeductViewValue() const { DARABONBA_PTR_GET_DEFAULT(measureAfterDeductViewValue_, "") };
      inline Data& setMeasureAfterDeductViewValue(string measureAfterDeductViewValue) { DARABONBA_PTR_SET_VALUE(measureAfterDeductViewValue_, measureAfterDeductViewValue) };


      // measureBeforeDeductViewUnit Field Functions 
      bool hasMeasureBeforeDeductViewUnit() const { return this->measureBeforeDeductViewUnit_ != nullptr;};
      void deleteMeasureBeforeDeductViewUnit() { this->measureBeforeDeductViewUnit_ = nullptr;};
      inline string getMeasureBeforeDeductViewUnit() const { DARABONBA_PTR_GET_DEFAULT(measureBeforeDeductViewUnit_, "") };
      inline Data& setMeasureBeforeDeductViewUnit(string measureBeforeDeductViewUnit) { DARABONBA_PTR_SET_VALUE(measureBeforeDeductViewUnit_, measureBeforeDeductViewUnit) };


      // measureBeforeDeductViewValue Field Functions 
      bool hasMeasureBeforeDeductViewValue() const { return this->measureBeforeDeductViewValue_ != nullptr;};
      void deleteMeasureBeforeDeductViewValue() { this->measureBeforeDeductViewValue_ = nullptr;};
      inline string getMeasureBeforeDeductViewValue() const { DARABONBA_PTR_GET_DEFAULT(measureBeforeDeductViewValue_, "") };
      inline Data& setMeasureBeforeDeductViewValue(string measureBeforeDeductViewValue) { DARABONBA_PTR_SET_VALUE(measureBeforeDeductViewValue_, measureBeforeDeductViewValue) };


      // measureDeductedViewUnit Field Functions 
      bool hasMeasureDeductedViewUnit() const { return this->measureDeductedViewUnit_ != nullptr;};
      void deleteMeasureDeductedViewUnit() { this->measureDeductedViewUnit_ = nullptr;};
      inline string getMeasureDeductedViewUnit() const { DARABONBA_PTR_GET_DEFAULT(measureDeductedViewUnit_, "") };
      inline Data& setMeasureDeductedViewUnit(string measureDeductedViewUnit) { DARABONBA_PTR_SET_VALUE(measureDeductedViewUnit_, measureDeductedViewUnit) };


      // measureDeductedViewValue Field Functions 
      bool hasMeasureDeductedViewValue() const { return this->measureDeductedViewValue_ != nullptr;};
      void deleteMeasureDeductedViewValue() { this->measureDeductedViewValue_ = nullptr;};
      inline string getMeasureDeductedViewValue() const { DARABONBA_PTR_GET_DEFAULT(measureDeductedViewValue_, "") };
      inline Data& setMeasureDeductedViewValue(string measureDeductedViewValue) { DARABONBA_PTR_SET_VALUE(measureDeductedViewValue_, measureDeductedViewValue) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline const Data::Product & getProduct() const { DARABONBA_PTR_GET_CONST(product_, Data::Product) };
      inline Data::Product getProduct() { DARABONBA_PTR_GET(product_, Data::Product) };
      inline Data& setProduct(const Data::Product & product) { DARABONBA_PTR_SET_VALUE(product_, product) };
      inline Data& setProduct(Data::Product && product) { DARABONBA_PTR_SET_RVALUE(product_, product) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Data& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // relationAccountId Field Functions 
      bool hasRelationAccountId() const { return this->relationAccountId_ != nullptr;};
      void deleteRelationAccountId() { this->relationAccountId_ = nullptr;};
      inline int64_t getRelationAccountId() const { DARABONBA_PTR_GET_DEFAULT(relationAccountId_, 0L) };
      inline Data& setRelationAccountId(int64_t relationAccountId) { DARABONBA_PTR_SET_VALUE(relationAccountId_, relationAccountId) };


      // relationAccountName Field Functions 
      bool hasRelationAccountName() const { return this->relationAccountName_ != nullptr;};
      void deleteRelationAccountName() { this->relationAccountName_ = nullptr;};
      inline string getRelationAccountName() const { DARABONBA_PTR_GET_DEFAULT(relationAccountName_, "") };
      inline Data& setRelationAccountName(string relationAccountName) { DARABONBA_PTR_SET_VALUE(relationAccountName_, relationAccountName) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const Data::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, Data::Template) };
      inline Data::Template getTemplate() { DARABONBA_PTR_GET(template_, Data::Template) };
      inline Data& setTemplate(const Data::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Data& setTemplate(Data::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Data& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The account ID.
      shared_ptr<int64_t> accountId_ {};
      // The account name.
      shared_ptr<string> accountName_ {};
      // The deducted commodity.
      shared_ptr<Data::BillingCommodity> billingCommodity_ {};
      // The deducted commodity code.
      shared_ptr<string> billingCommodityCode_ {};
      // The deducted commodity name.
      shared_ptr<string> billingCommodityName_ {};
      // The expiration time.
      shared_ptr<int64_t> billingEndTime_ {};
      // The deduction instance.
      shared_ptr<string> billingInstanceId_ {};
      // The deduction billable item.
      shared_ptr<Data::BillingPriceField> billingPriceField_ {};
      // The deduction billable item code.
      shared_ptr<string> billingPriceFieldCode_ {};
      // The deduction billable item name.
      shared_ptr<string> billingPriceFieldName_ {};
      // The effective period.
      shared_ptr<int64_t> billingStartTime_ {};
      // The display unit of the capacity after deduction.
      shared_ptr<string> capacityAfterDeductViewUnit_ {};
      // The display value of the capacity after deduction.
      shared_ptr<string> capacityAfterDeductViewValue_ {};
      // The display unit of the capacity before deduction.
      shared_ptr<string> capacityBeforeDeductViewUnit_ {};
      // The display value of the capacity before deduction.
      shared_ptr<string> capacityBeforeDeductViewValue_ {};
      // The display unit of the deducted capacity.
      shared_ptr<string> capacityDeductedViewUnit_ {};
      // The display value of the deducted capacity.
      shared_ptr<string> capacityDeductedViewValue_ {};
      // The capacity type.
      shared_ptr<Data::CapacityType> capacityType_ {};
      // The capacity type code.
      shared_ptr<string> capacityTypeCode_ {};
      // The capacity type name.
      shared_ptr<string> capacityTypeName_ {};
      // The commodity.
      shared_ptr<Data::Commodity> commodity_ {};
      // The commodity code.
      shared_ptr<string> commodityCode_ {};
      // The commodity name.
      shared_ptr<string> commodityName_ {};
      // The commitment cycle.
      shared_ptr<Data::CycleType> cycleType_ {};
      // The commitment cycle code.
      shared_ptr<string> cycleTypeCode_ {};
      // The commitment cycle name.
      shared_ptr<string> cycleTypeName_ {};
      // The deduction time.
      shared_ptr<int64_t> deductTime_ {};
      // The deduction factor.
      shared_ptr<string> factor_ {};
      // The ID of the account to which the instance belongs.
      shared_ptr<int64_t> instanceBelongAccountId_ {};
      // The name of the account to which the instance belongs.
      shared_ptr<string> instanceBelongAccountName_ {};
      // The instance name.
      shared_ptr<string> instanceId_ {};
      // The display unit of the metering amount after deduction.
      shared_ptr<string> measureAfterDeductViewUnit_ {};
      // The display value of the metering amount after deduction.
      shared_ptr<string> measureAfterDeductViewValue_ {};
      // The display unit of the metering amount before deduction.
      shared_ptr<string> measureBeforeDeductViewUnit_ {};
      // The display value of the metering amount before deduction.
      shared_ptr<string> measureBeforeDeductViewValue_ {};
      // The display unit of the deducted metering amount.
      shared_ptr<string> measureDeductedViewUnit_ {};
      // The display value of the deducted metering amount.
      shared_ptr<string> measureDeductedViewValue_ {};
      // The product.
      shared_ptr<Data::Product> product_ {};
      // The product code.
      shared_ptr<string> productCode_ {};
      // The product name.
      shared_ptr<string> productName_ {};
      // The deduction account ID.
      shared_ptr<int64_t> relationAccountId_ {};
      // The deduction account name.
      shared_ptr<string> relationAccountName_ {};
      // The template.
      shared_ptr<Data::Template> template_ {};
      // The template code.
      shared_ptr<string> templateCode_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDeductLogsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeDeductLogsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeDeductLogsResponseBody::Data>) };
    inline vector<DescribeDeductLogsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeDeductLogsResponseBody::Data>) };
    inline DescribeDeductLogsResponseBody& setData(const vector<DescribeDeductLogsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDeductLogsResponseBody& setData(vector<DescribeDeductLogsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeductLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeductLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDeductLogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The data list.
    shared_ptr<vector<DescribeDeductLogsResponseBody::Data>> data_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
