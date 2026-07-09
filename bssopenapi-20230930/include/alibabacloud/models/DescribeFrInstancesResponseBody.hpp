// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFRINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFRINSTANCESRESPONSEBODY_HPP_
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
  class DescribeFrInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFrInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFrInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFrInstancesResponseBody() = default ;
    DescribeFrInstancesResponseBody(const DescribeFrInstancesResponseBody &) = default ;
    DescribeFrInstancesResponseBody(DescribeFrInstancesResponseBody &&) = default ;
    DescribeFrInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFrInstancesResponseBody() = default ;
    DescribeFrInstancesResponseBody& operator=(const DescribeFrInstancesResponseBody &) = default ;
    DescribeFrInstancesResponseBody& operator=(DescribeFrInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(CapacitiyTypeName, capacitiyTypeName_);
        DARABONBA_PTR_TO_JSON(CapacityType, capacityType_);
        DARABONBA_PTR_TO_JSON(CapacityTypeCode, capacityTypeCode_);
        DARABONBA_PTR_TO_JSON(Commodity, commodity_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(CurrCapacityBaseUnit, currCapacityBaseUnit_);
        DARABONBA_PTR_TO_JSON(CurrCapacityBaseValue, currCapacityBaseValue_);
        DARABONBA_PTR_TO_JSON(CurrCapacityViewUnit, currCapacityViewUnit_);
        DARABONBA_PTR_TO_JSON(CurrCapacityViewValue, currCapacityViewValue_);
        DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
        DARABONBA_PTR_TO_JSON(CycleTypeCode, cycleTypeCode_);
        DARABONBA_PTR_TO_JSON(CycleTypeName, cycleTypeName_);
        DARABONBA_PTR_TO_JSON(DeductRegions, deductRegions_);
        DARABONBA_PTR_TO_JSON(EnableExchange, enableExchange_);
        DARABONBA_PTR_TO_JSON(EnableRenew, enableRenew_);
        DARABONBA_PTR_TO_JSON(EnableUpgrade, enableUpgrade_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExchangeCommodityCode, exchangeCommodityCode_);
        DARABONBA_PTR_TO_JSON(InitCapacityBaseUnit, initCapacityBaseUnit_);
        DARABONBA_PTR_TO_JSON(InitCapacityBaseValue, initCapacityBaseValue_);
        DARABONBA_PTR_TO_JSON(InitCapacityViewUnit, initCapacityViewUnit_);
        DARABONBA_PTR_TO_JSON(InitCapacityViewValue, initCapacityViewValue_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PeriodCapacityViewUnit, periodCapacityViewUnit_);
        DARABONBA_PTR_TO_JSON(PeriodCapacityViewValue, periodCapacityViewValue_);
        DARABONBA_PTR_TO_JSON(PeriodTime, periodTime_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(PurchaseTime, purchaseTime_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(StatusName, statusName_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(periodCapacityBaseUnit, periodCapacityBaseUnit_);
        DARABONBA_PTR_TO_JSON(periodCapacityBaseValue, periodCapacityBaseValue_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(CapacitiyTypeName, capacitiyTypeName_);
        DARABONBA_PTR_FROM_JSON(CapacityType, capacityType_);
        DARABONBA_PTR_FROM_JSON(CapacityTypeCode, capacityTypeCode_);
        DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(CurrCapacityBaseUnit, currCapacityBaseUnit_);
        DARABONBA_PTR_FROM_JSON(CurrCapacityBaseValue, currCapacityBaseValue_);
        DARABONBA_PTR_FROM_JSON(CurrCapacityViewUnit, currCapacityViewUnit_);
        DARABONBA_PTR_FROM_JSON(CurrCapacityViewValue, currCapacityViewValue_);
        DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
        DARABONBA_PTR_FROM_JSON(CycleTypeCode, cycleTypeCode_);
        DARABONBA_PTR_FROM_JSON(CycleTypeName, cycleTypeName_);
        DARABONBA_PTR_FROM_JSON(DeductRegions, deductRegions_);
        DARABONBA_PTR_FROM_JSON(EnableExchange, enableExchange_);
        DARABONBA_PTR_FROM_JSON(EnableRenew, enableRenew_);
        DARABONBA_PTR_FROM_JSON(EnableUpgrade, enableUpgrade_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExchangeCommodityCode, exchangeCommodityCode_);
        DARABONBA_PTR_FROM_JSON(InitCapacityBaseUnit, initCapacityBaseUnit_);
        DARABONBA_PTR_FROM_JSON(InitCapacityBaseValue, initCapacityBaseValue_);
        DARABONBA_PTR_FROM_JSON(InitCapacityViewUnit, initCapacityViewUnit_);
        DARABONBA_PTR_FROM_JSON(InitCapacityViewValue, initCapacityViewValue_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PeriodCapacityViewUnit, periodCapacityViewUnit_);
        DARABONBA_PTR_FROM_JSON(PeriodCapacityViewValue, periodCapacityViewValue_);
        DARABONBA_PTR_FROM_JSON(PeriodTime, periodTime_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(PurchaseTime, purchaseTime_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(periodCapacityBaseUnit, periodCapacityBaseUnit_);
        DARABONBA_PTR_FROM_JSON(periodCapacityBaseValue, periodCapacityBaseValue_);
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

      class Status : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Status& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Status& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Status() = default ;
        Status(const Status &) = default ;
        Status(Status &&) = default ;
        Status(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Status() = default ;
        Status& operator=(const Status &) = default ;
        Status& operator=(Status &&) = default ;
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
        inline Status& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Status& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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

      class DeductRegions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeductRegions& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DeductRegions& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        DeductRegions() = default ;
        DeductRegions(const DeductRegions &) = default ;
        DeductRegions(DeductRegions &&) = default ;
        DeductRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeductRegions() = default ;
        DeductRegions& operator=(const DeductRegions &) = default ;
        DeductRegions& operator=(DeductRegions &&) = default ;
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
        inline DeductRegions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DeductRegions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The deductible region code.
        shared_ptr<string> code_ {};
        // The deductible region.
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

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->capacitiyTypeName_ == nullptr && this->capacityType_ == nullptr && this->capacityTypeCode_ == nullptr && this->commodity_ == nullptr
        && this->commodityCode_ == nullptr && this->commodityName_ == nullptr && this->currCapacityBaseUnit_ == nullptr && this->currCapacityBaseValue_ == nullptr && this->currCapacityViewUnit_ == nullptr
        && this->currCapacityViewValue_ == nullptr && this->cycleType_ == nullptr && this->cycleTypeCode_ == nullptr && this->cycleTypeName_ == nullptr && this->deductRegions_ == nullptr
        && this->enableExchange_ == nullptr && this->enableRenew_ == nullptr && this->enableUpgrade_ == nullptr && this->endTime_ == nullptr && this->exchangeCommodityCode_ == nullptr
        && this->initCapacityBaseUnit_ == nullptr && this->initCapacityBaseValue_ == nullptr && this->initCapacityViewUnit_ == nullptr && this->initCapacityViewValue_ == nullptr && this->instanceId_ == nullptr
        && this->periodCapacityViewUnit_ == nullptr && this->periodCapacityViewValue_ == nullptr && this->periodTime_ == nullptr && this->product_ == nullptr && this->productCode_ == nullptr
        && this->productName_ == nullptr && this->purchaseTime_ == nullptr && this->region_ == nullptr && this->regionName_ == nullptr && this->spec_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr && this->statusName_ == nullptr && this->template_ == nullptr
        && this->templateCode_ == nullptr && this->templateName_ == nullptr && this->periodCapacityBaseUnit_ == nullptr && this->periodCapacityBaseValue_ == nullptr; };
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


      // capacitiyTypeName Field Functions 
      bool hasCapacitiyTypeName() const { return this->capacitiyTypeName_ != nullptr;};
      void deleteCapacitiyTypeName() { this->capacitiyTypeName_ = nullptr;};
      inline string getCapacitiyTypeName() const { DARABONBA_PTR_GET_DEFAULT(capacitiyTypeName_, "") };
      inline Data& setCapacitiyTypeName(string capacitiyTypeName) { DARABONBA_PTR_SET_VALUE(capacitiyTypeName_, capacitiyTypeName) };


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


      // currCapacityBaseUnit Field Functions 
      bool hasCurrCapacityBaseUnit() const { return this->currCapacityBaseUnit_ != nullptr;};
      void deleteCurrCapacityBaseUnit() { this->currCapacityBaseUnit_ = nullptr;};
      inline string getCurrCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(currCapacityBaseUnit_, "") };
      inline Data& setCurrCapacityBaseUnit(string currCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(currCapacityBaseUnit_, currCapacityBaseUnit) };


      // currCapacityBaseValue Field Functions 
      bool hasCurrCapacityBaseValue() const { return this->currCapacityBaseValue_ != nullptr;};
      void deleteCurrCapacityBaseValue() { this->currCapacityBaseValue_ = nullptr;};
      inline string getCurrCapacityBaseValue() const { DARABONBA_PTR_GET_DEFAULT(currCapacityBaseValue_, "") };
      inline Data& setCurrCapacityBaseValue(string currCapacityBaseValue) { DARABONBA_PTR_SET_VALUE(currCapacityBaseValue_, currCapacityBaseValue) };


      // currCapacityViewUnit Field Functions 
      bool hasCurrCapacityViewUnit() const { return this->currCapacityViewUnit_ != nullptr;};
      void deleteCurrCapacityViewUnit() { this->currCapacityViewUnit_ = nullptr;};
      inline string getCurrCapacityViewUnit() const { DARABONBA_PTR_GET_DEFAULT(currCapacityViewUnit_, "") };
      inline Data& setCurrCapacityViewUnit(string currCapacityViewUnit) { DARABONBA_PTR_SET_VALUE(currCapacityViewUnit_, currCapacityViewUnit) };


      // currCapacityViewValue Field Functions 
      bool hasCurrCapacityViewValue() const { return this->currCapacityViewValue_ != nullptr;};
      void deleteCurrCapacityViewValue() { this->currCapacityViewValue_ = nullptr;};
      inline string getCurrCapacityViewValue() const { DARABONBA_PTR_GET_DEFAULT(currCapacityViewValue_, "") };
      inline Data& setCurrCapacityViewValue(string currCapacityViewValue) { DARABONBA_PTR_SET_VALUE(currCapacityViewValue_, currCapacityViewValue) };


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


      // deductRegions Field Functions 
      bool hasDeductRegions() const { return this->deductRegions_ != nullptr;};
      void deleteDeductRegions() { this->deductRegions_ = nullptr;};
      inline const vector<Data::DeductRegions> & getDeductRegions() const { DARABONBA_PTR_GET_CONST(deductRegions_, vector<Data::DeductRegions>) };
      inline vector<Data::DeductRegions> getDeductRegions() { DARABONBA_PTR_GET(deductRegions_, vector<Data::DeductRegions>) };
      inline Data& setDeductRegions(const vector<Data::DeductRegions> & deductRegions) { DARABONBA_PTR_SET_VALUE(deductRegions_, deductRegions) };
      inline Data& setDeductRegions(vector<Data::DeductRegions> && deductRegions) { DARABONBA_PTR_SET_RVALUE(deductRegions_, deductRegions) };


      // enableExchange Field Functions 
      bool hasEnableExchange() const { return this->enableExchange_ != nullptr;};
      void deleteEnableExchange() { this->enableExchange_ = nullptr;};
      inline bool getEnableExchange() const { DARABONBA_PTR_GET_DEFAULT(enableExchange_, false) };
      inline Data& setEnableExchange(bool enableExchange) { DARABONBA_PTR_SET_VALUE(enableExchange_, enableExchange) };


      // enableRenew Field Functions 
      bool hasEnableRenew() const { return this->enableRenew_ != nullptr;};
      void deleteEnableRenew() { this->enableRenew_ = nullptr;};
      inline bool getEnableRenew() const { DARABONBA_PTR_GET_DEFAULT(enableRenew_, false) };
      inline Data& setEnableRenew(bool enableRenew) { DARABONBA_PTR_SET_VALUE(enableRenew_, enableRenew) };


      // enableUpgrade Field Functions 
      bool hasEnableUpgrade() const { return this->enableUpgrade_ != nullptr;};
      void deleteEnableUpgrade() { this->enableUpgrade_ = nullptr;};
      inline bool getEnableUpgrade() const { DARABONBA_PTR_GET_DEFAULT(enableUpgrade_, false) };
      inline Data& setEnableUpgrade(bool enableUpgrade) { DARABONBA_PTR_SET_VALUE(enableUpgrade_, enableUpgrade) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // exchangeCommodityCode Field Functions 
      bool hasExchangeCommodityCode() const { return this->exchangeCommodityCode_ != nullptr;};
      void deleteExchangeCommodityCode() { this->exchangeCommodityCode_ = nullptr;};
      inline string getExchangeCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(exchangeCommodityCode_, "") };
      inline Data& setExchangeCommodityCode(string exchangeCommodityCode) { DARABONBA_PTR_SET_VALUE(exchangeCommodityCode_, exchangeCommodityCode) };


      // initCapacityBaseUnit Field Functions 
      bool hasInitCapacityBaseUnit() const { return this->initCapacityBaseUnit_ != nullptr;};
      void deleteInitCapacityBaseUnit() { this->initCapacityBaseUnit_ = nullptr;};
      inline string getInitCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapacityBaseUnit_, "") };
      inline Data& setInitCapacityBaseUnit(string initCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(initCapacityBaseUnit_, initCapacityBaseUnit) };


      // initCapacityBaseValue Field Functions 
      bool hasInitCapacityBaseValue() const { return this->initCapacityBaseValue_ != nullptr;};
      void deleteInitCapacityBaseValue() { this->initCapacityBaseValue_ = nullptr;};
      inline string getInitCapacityBaseValue() const { DARABONBA_PTR_GET_DEFAULT(initCapacityBaseValue_, "") };
      inline Data& setInitCapacityBaseValue(string initCapacityBaseValue) { DARABONBA_PTR_SET_VALUE(initCapacityBaseValue_, initCapacityBaseValue) };


      // initCapacityViewUnit Field Functions 
      bool hasInitCapacityViewUnit() const { return this->initCapacityViewUnit_ != nullptr;};
      void deleteInitCapacityViewUnit() { this->initCapacityViewUnit_ = nullptr;};
      inline string getInitCapacityViewUnit() const { DARABONBA_PTR_GET_DEFAULT(initCapacityViewUnit_, "") };
      inline Data& setInitCapacityViewUnit(string initCapacityViewUnit) { DARABONBA_PTR_SET_VALUE(initCapacityViewUnit_, initCapacityViewUnit) };


      // initCapacityViewValue Field Functions 
      bool hasInitCapacityViewValue() const { return this->initCapacityViewValue_ != nullptr;};
      void deleteInitCapacityViewValue() { this->initCapacityViewValue_ = nullptr;};
      inline string getInitCapacityViewValue() const { DARABONBA_PTR_GET_DEFAULT(initCapacityViewValue_, "") };
      inline Data& setInitCapacityViewValue(string initCapacityViewValue) { DARABONBA_PTR_SET_VALUE(initCapacityViewValue_, initCapacityViewValue) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // periodCapacityViewUnit Field Functions 
      bool hasPeriodCapacityViewUnit() const { return this->periodCapacityViewUnit_ != nullptr;};
      void deletePeriodCapacityViewUnit() { this->periodCapacityViewUnit_ = nullptr;};
      inline string getPeriodCapacityViewUnit() const { DARABONBA_PTR_GET_DEFAULT(periodCapacityViewUnit_, "") };
      inline Data& setPeriodCapacityViewUnit(string periodCapacityViewUnit) { DARABONBA_PTR_SET_VALUE(periodCapacityViewUnit_, periodCapacityViewUnit) };


      // periodCapacityViewValue Field Functions 
      bool hasPeriodCapacityViewValue() const { return this->periodCapacityViewValue_ != nullptr;};
      void deletePeriodCapacityViewValue() { this->periodCapacityViewValue_ = nullptr;};
      inline string getPeriodCapacityViewValue() const { DARABONBA_PTR_GET_DEFAULT(periodCapacityViewValue_, "") };
      inline Data& setPeriodCapacityViewValue(string periodCapacityViewValue) { DARABONBA_PTR_SET_VALUE(periodCapacityViewValue_, periodCapacityViewValue) };


      // periodTime Field Functions 
      bool hasPeriodTime() const { return this->periodTime_ != nullptr;};
      void deletePeriodTime() { this->periodTime_ = nullptr;};
      inline string getPeriodTime() const { DARABONBA_PTR_GET_DEFAULT(periodTime_, "") };
      inline Data& setPeriodTime(string periodTime) { DARABONBA_PTR_SET_VALUE(periodTime_, periodTime) };


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


      // purchaseTime Field Functions 
      bool hasPurchaseTime() const { return this->purchaseTime_ != nullptr;};
      void deletePurchaseTime() { this->purchaseTime_ = nullptr;};
      inline int64_t getPurchaseTime() const { DARABONBA_PTR_GET_DEFAULT(purchaseTime_, 0L) };
      inline Data& setPurchaseTime(int64_t purchaseTime) { DARABONBA_PTR_SET_VALUE(purchaseTime_, purchaseTime) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline Data& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Data& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const Data::Status & getStatus() const { DARABONBA_PTR_GET_CONST(status_, Data::Status) };
      inline Data::Status getStatus() { DARABONBA_PTR_GET(status_, Data::Status) };
      inline Data& setStatus(const Data::Status & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Data& setStatus(Data::Status && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline Data& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // statusName Field Functions 
      bool hasStatusName() const { return this->statusName_ != nullptr;};
      void deleteStatusName() { this->statusName_ = nullptr;};
      inline string getStatusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
      inline Data& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


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


      // periodCapacityBaseUnit Field Functions 
      bool hasPeriodCapacityBaseUnit() const { return this->periodCapacityBaseUnit_ != nullptr;};
      void deletePeriodCapacityBaseUnit() { this->periodCapacityBaseUnit_ = nullptr;};
      inline string getPeriodCapacityBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(periodCapacityBaseUnit_, "") };
      inline Data& setPeriodCapacityBaseUnit(string periodCapacityBaseUnit) { DARABONBA_PTR_SET_VALUE(periodCapacityBaseUnit_, periodCapacityBaseUnit) };


      // periodCapacityBaseValue Field Functions 
      bool hasPeriodCapacityBaseValue() const { return this->periodCapacityBaseValue_ != nullptr;};
      void deletePeriodCapacityBaseValue() { this->periodCapacityBaseValue_ = nullptr;};
      inline string getPeriodCapacityBaseValue() const { DARABONBA_PTR_GET_DEFAULT(periodCapacityBaseValue_, "") };
      inline Data& setPeriodCapacityBaseValue(string periodCapacityBaseValue) { DARABONBA_PTR_SET_VALUE(periodCapacityBaseValue_, periodCapacityBaseValue) };


    protected:
      // The account ID.
      shared_ptr<int64_t> accountId_ {};
      // The account name.
      shared_ptr<string> accountName_ {};
      // The capacity type name.
      shared_ptr<string> capacitiyTypeName_ {};
      // The capacity type.
      shared_ptr<Data::CapacityType> capacityType_ {};
      // The capacity type code.
      shared_ptr<string> capacityTypeCode_ {};
      // The commodity.
      shared_ptr<Data::Commodity> commodity_ {};
      // The commodity code.
      shared_ptr<string> commodityCode_ {};
      // The commodity name.
      shared_ptr<string> commodityName_ {};
      // The current capacity baseline unit.
      shared_ptr<string> currCapacityBaseUnit_ {};
      // The current capacity baseline value.
      shared_ptr<string> currCapacityBaseValue_ {};
      // The current capacity display unit.
      shared_ptr<string> currCapacityViewUnit_ {};
      // The current capacity display value.
      shared_ptr<string> currCapacityViewValue_ {};
      // The commitment cycle.
      shared_ptr<Data::CycleType> cycleType_ {};
      // The commitment cycle code.
      shared_ptr<string> cycleTypeCode_ {};
      // The commitment cycle name.
      shared_ptr<string> cycleTypeName_ {};
      // The list of deductible regions.
      shared_ptr<vector<Data::DeductRegions>> deductRegions_ {};
      // Indicates whether the resource plan can be exchanged.
      shared_ptr<bool> enableExchange_ {};
      // Indicates whether the resource plan can be renewed.
      shared_ptr<bool> enableRenew_ {};
      // Indicates whether the resource plan can be upgraded.
      shared_ptr<bool> enableUpgrade_ {};
      // The expiration time.
      shared_ptr<int64_t> endTime_ {};
      // The commodity code for exchange.
      shared_ptr<string> exchangeCommodityCode_ {};
      // The initial capacity baseline unit.
      shared_ptr<string> initCapacityBaseUnit_ {};
      // The initial capacity baseline value.
      shared_ptr<string> initCapacityBaseValue_ {};
      // The initial capacity display unit.
      shared_ptr<string> initCapacityViewUnit_ {};
      // The initial capacity display value.
      shared_ptr<string> initCapacityViewValue_ {};
      // The instance name.
      shared_ptr<string> instanceId_ {};
      // The period capacity display unit.
      shared_ptr<string> periodCapacityViewUnit_ {};
      // The period capacity display value.
      shared_ptr<string> periodCapacityViewValue_ {};
      // The period time.
      shared_ptr<string> periodTime_ {};
      // The product.
      shared_ptr<Data::Product> product_ {};
      // The product code.
      shared_ptr<string> productCode_ {};
      // The product name.
      shared_ptr<string> productName_ {};
      // The purchase time.
      shared_ptr<int64_t> purchaseTime_ {};
      // The region.
      shared_ptr<string> region_ {};
      // The region name.
      shared_ptr<string> regionName_ {};
      // The specification.
      shared_ptr<string> spec_ {};
      // The effective period.
      shared_ptr<int64_t> startTime_ {};
      // The resource status.
      shared_ptr<Data::Status> status_ {};
      // The resource status code.
      shared_ptr<string> statusCode_ {};
      // The resource status name.
      shared_ptr<string> statusName_ {};
      // The template.
      shared_ptr<Data::Template> template_ {};
      // The template code.
      shared_ptr<string> templateCode_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The period capacity baseline unit.
      shared_ptr<string> periodCapacityBaseUnit_ {};
      // The period capacity baseline value.
      shared_ptr<string> periodCapacityBaseValue_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeFrInstancesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeFrInstancesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeFrInstancesResponseBody::Data>) };
    inline vector<DescribeFrInstancesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeFrInstancesResponseBody::Data>) };
    inline DescribeFrInstancesResponseBody& setData(const vector<DescribeFrInstancesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeFrInstancesResponseBody& setData(vector<DescribeFrInstancesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFrInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFrInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFrInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The data list.
    shared_ptr<vector<DescribeFrInstancesResponseBody::Data>> data_ {};
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
