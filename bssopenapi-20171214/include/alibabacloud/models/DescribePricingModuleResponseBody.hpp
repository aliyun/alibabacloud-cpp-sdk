// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICINGMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribePricingModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePricingModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePricingModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribePricingModuleResponseBody() = default ;
    DescribePricingModuleResponseBody(const DescribePricingModuleResponseBody &) = default ;
    DescribePricingModuleResponseBody(DescribePricingModuleResponseBody &&) = default ;
    DescribePricingModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePricingModuleResponseBody() = default ;
    DescribePricingModuleResponseBody& operator=(const DescribePricingModuleResponseBody &) = default ;
    DescribePricingModuleResponseBody& operator=(DescribePricingModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeList, attributeList_);
        DARABONBA_PTR_TO_JSON(ModuleList, moduleList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeList, attributeList_);
        DARABONBA_PTR_FROM_JSON(ModuleList, moduleList_);
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
      class ModuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleList& obj) { 
          DARABONBA_PTR_TO_JSON(Module, module_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(Module, module_);
        };
        ModuleList() = default ;
        ModuleList(const ModuleList &) = default ;
        ModuleList(ModuleList &&) = default ;
        ModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModuleList() = default ;
        ModuleList& operator=(const ModuleList &) = default ;
        ModuleList& operator=(ModuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Module : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Module& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigList, configList_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
            DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
            DARABONBA_PTR_TO_JSON(PriceType, priceType_);
          };
          friend void from_json(const Darabonba::Json& j, Module& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
            DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
            DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
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
          class ConfigList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
              DARABONBA_PTR_TO_JSON(ConfigList, configList_);
            };
            friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
              DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
            };
            ConfigList() = default ;
            ConfigList(const ConfigList &) = default ;
            ConfigList(ConfigList &&) = default ;
            ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConfigList() = default ;
            ConfigList& operator=(const ConfigList &) = default ;
            ConfigList& operator=(ConfigList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->configList_ == nullptr; };
            // configList Field Functions 
            bool hasConfigList() const { return this->configList_ != nullptr;};
            void deleteConfigList() { this->configList_ = nullptr;};
            inline const vector<string> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<string>) };
            inline vector<string> getConfigList() { DARABONBA_PTR_GET(configList_, vector<string>) };
            inline ConfigList& setConfigList(const vector<string> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
            inline ConfigList& setConfigList(vector<string> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


          protected:
            shared_ptr<vector<string>> configList_ {};
          };

          virtual bool empty() const override { return this->configList_ == nullptr
        && this->currency_ == nullptr && this->moduleCode_ == nullptr && this->moduleName_ == nullptr && this->priceType_ == nullptr; };
          // configList Field Functions 
          bool hasConfigList() const { return this->configList_ != nullptr;};
          void deleteConfigList() { this->configList_ = nullptr;};
          inline const Module::ConfigList & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, Module::ConfigList) };
          inline Module::ConfigList getConfigList() { DARABONBA_PTR_GET(configList_, Module::ConfigList) };
          inline Module& setConfigList(const Module::ConfigList & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
          inline Module& setConfigList(Module::ConfigList && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Module& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // moduleCode Field Functions 
          bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
          void deleteModuleCode() { this->moduleCode_ = nullptr;};
          inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
          inline Module& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


          // moduleName Field Functions 
          bool hasModuleName() const { return this->moduleName_ != nullptr;};
          void deleteModuleName() { this->moduleName_ = nullptr;};
          inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
          inline Module& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


          // priceType Field Functions 
          bool hasPriceType() const { return this->priceType_ != nullptr;};
          void deletePriceType() { this->priceType_ = nullptr;};
          inline string getPriceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
          inline Module& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


        protected:
          shared_ptr<Module::ConfigList> configList_ {};
          // The currency. Default value: CNY.
          shared_ptr<string> currency_ {};
          // The code of the pricing module.
          shared_ptr<string> moduleCode_ {};
          // The name of the pricing module.
          shared_ptr<string> moduleName_ {};
          // The price type. Valid values:
          // 
          // *   Usage: usage price
          // *   Hour: hourly price
          // *   Day: daily price
          // *   Week: weekly price
          // *   Month: monthly price
          // *   Year: annual price
          shared_ptr<string> priceType_ {};
        };

        virtual bool empty() const override { return this->module_ == nullptr; };
        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline const vector<ModuleList::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<ModuleList::Module>) };
        inline vector<ModuleList::Module> getModule() { DARABONBA_PTR_GET(module_, vector<ModuleList::Module>) };
        inline ModuleList& setModule(const vector<ModuleList::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
        inline ModuleList& setModule(vector<ModuleList::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


      protected:
        shared_ptr<vector<ModuleList::Module>> module_ {};
      };

      class AttributeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttributeList& obj) { 
          DARABONBA_PTR_TO_JSON(Attribute, attribute_);
        };
        friend void from_json(const Darabonba::Json& j, AttributeList& obj) { 
          DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
        };
        AttributeList() = default ;
        AttributeList(const AttributeList &) = default ;
        AttributeList(AttributeList &&) = default ;
        AttributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttributeList() = default ;
        AttributeList& operator=(const AttributeList &) = default ;
        AttributeList& operator=(AttributeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attribute : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attribute& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, Attribute& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          Attribute() = default ;
          Attribute(const Attribute &) = default ;
          Attribute(Attribute &&) = default ;
          Attribute(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attribute() = default ;
          Attribute& operator=(const Attribute &) = default ;
          Attribute& operator=(Attribute &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Values : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Values& obj) { 
              DARABONBA_PTR_TO_JSON(AttributeValue, attributeValue_);
            };
            friend void from_json(const Darabonba::Json& j, Values& obj) { 
              DARABONBA_PTR_FROM_JSON(AttributeValue, attributeValue_);
            };
            Values() = default ;
            Values(const Values &) = default ;
            Values(Values &&) = default ;
            Values(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Values() = default ;
            Values& operator=(const Values &) = default ;
            Values& operator=(Values &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AttributeValue : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AttributeValue& obj) { 
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Remark, remark_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, AttributeValue& obj) { 
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Remark, remark_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              AttributeValue() = default ;
              AttributeValue(const AttributeValue &) = default ;
              AttributeValue(AttributeValue &&) = default ;
              AttributeValue(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AttributeValue() = default ;
              AttributeValue& operator=(const AttributeValue &) = default ;
              AttributeValue& operator=(AttributeValue &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->name_ == nullptr
        && this->remark_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline AttributeValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // remark Field Functions 
              bool hasRemark() const { return this->remark_ != nullptr;};
              void deleteRemark() { this->remark_ = nullptr;};
              inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
              inline AttributeValue& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline AttributeValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline AttributeValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // The attribute value that corresponds to the module code.
              shared_ptr<string> name_ {};
              // The description of the module values.
              shared_ptr<string> remark_ {};
              // The type of the attribute value that corresponds to the module code. Valid values:
              // 
              // *   single_float: single value
              // *   range_float: range value
              shared_ptr<string> type_ {};
              // The attribute value that corresponds to the module code.
              // 
              // >  If the Type parameter is set to range_float, the valid values of this parameter range from 1024 to 1024000. A value of 1024 indicates that the step size is 1024.
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->attributeValue_ == nullptr; };
            // attributeValue Field Functions 
            bool hasAttributeValue() const { return this->attributeValue_ != nullptr;};
            void deleteAttributeValue() { this->attributeValue_ = nullptr;};
            inline const vector<Values::AttributeValue> & getAttributeValue() const { DARABONBA_PTR_GET_CONST(attributeValue_, vector<Values::AttributeValue>) };
            inline vector<Values::AttributeValue> getAttributeValue() { DARABONBA_PTR_GET(attributeValue_, vector<Values::AttributeValue>) };
            inline Values& setAttributeValue(const vector<Values::AttributeValue> & attributeValue) { DARABONBA_PTR_SET_VALUE(attributeValue_, attributeValue) };
            inline Values& setAttributeValue(vector<Values::AttributeValue> && attributeValue) { DARABONBA_PTR_SET_RVALUE(attributeValue_, attributeValue) };


          protected:
            shared_ptr<vector<Values::AttributeValue>> attributeValue_ {};
          };

          virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->values_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Attribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Attribute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline Attribute& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const Attribute::Values & getValues() const { DARABONBA_PTR_GET_CONST(values_, Attribute::Values) };
          inline Attribute::Values getValues() { DARABONBA_PTR_GET(values_, Attribute::Values) };
          inline Attribute& setValues(const Attribute::Values & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline Attribute& setValues(Attribute::Values && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // The code of the attribute.
          shared_ptr<string> code_ {};
          // The name of the attribute.
          shared_ptr<string> name_ {};
          // The unit of the attribute.
          shared_ptr<string> unit_ {};
          // The attribute values.
          shared_ptr<Attribute::Values> values_ {};
        };

        virtual bool empty() const override { return this->attribute_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline const vector<AttributeList::Attribute> & getAttribute() const { DARABONBA_PTR_GET_CONST(attribute_, vector<AttributeList::Attribute>) };
        inline vector<AttributeList::Attribute> getAttribute() { DARABONBA_PTR_GET(attribute_, vector<AttributeList::Attribute>) };
        inline AttributeList& setAttribute(const vector<AttributeList::Attribute> & attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };
        inline AttributeList& setAttribute(vector<AttributeList::Attribute> && attribute) { DARABONBA_PTR_SET_RVALUE(attribute_, attribute) };


      protected:
        shared_ptr<vector<AttributeList::Attribute>> attribute_ {};
      };

      virtual bool empty() const override { return this->attributeList_ == nullptr
        && this->moduleList_ == nullptr; };
      // attributeList Field Functions 
      bool hasAttributeList() const { return this->attributeList_ != nullptr;};
      void deleteAttributeList() { this->attributeList_ = nullptr;};
      inline const Data::AttributeList & getAttributeList() const { DARABONBA_PTR_GET_CONST(attributeList_, Data::AttributeList) };
      inline Data::AttributeList getAttributeList() { DARABONBA_PTR_GET(attributeList_, Data::AttributeList) };
      inline Data& setAttributeList(const Data::AttributeList & attributeList) { DARABONBA_PTR_SET_VALUE(attributeList_, attributeList) };
      inline Data& setAttributeList(Data::AttributeList && attributeList) { DARABONBA_PTR_SET_RVALUE(attributeList_, attributeList) };


      // moduleList Field Functions 
      bool hasModuleList() const { return this->moduleList_ != nullptr;};
      void deleteModuleList() { this->moduleList_ = nullptr;};
      inline const Data::ModuleList & getModuleList() const { DARABONBA_PTR_GET_CONST(moduleList_, Data::ModuleList) };
      inline Data::ModuleList getModuleList() { DARABONBA_PTR_GET(moduleList_, Data::ModuleList) };
      inline Data& setModuleList(const Data::ModuleList & moduleList) { DARABONBA_PTR_SET_VALUE(moduleList_, moduleList) };
      inline Data& setModuleList(Data::ModuleList && moduleList) { DARABONBA_PTR_SET_RVALUE(moduleList_, moduleList) };


    protected:
      // The module attributes.
      shared_ptr<Data::AttributeList> attributeList_ {};
      // The pricing information of modules.
      shared_ptr<Data::ModuleList> moduleList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePricingModuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePricingModuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePricingModuleResponseBody::Data) };
    inline DescribePricingModuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePricingModuleResponseBody::Data) };
    inline DescribePricingModuleResponseBody& setData(const DescribePricingModuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePricingModuleResponseBody& setData(DescribePricingModuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePricingModuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePricingModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePricingModuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribePricingModuleResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
