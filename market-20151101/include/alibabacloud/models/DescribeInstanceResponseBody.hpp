// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
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
  class DescribeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddress, activeAddress_);
      DARABONBA_PTR_TO_JSON(AppJson, appJson_);
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(BeganOn, beganOn_);
      DARABONBA_PTR_TO_JSON(ComponentJson, componentJson_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_TO_JSON(EndOn, endOn_);
      DARABONBA_PTR_TO_JSON(ExtendJson, extendJson_);
      DARABONBA_PTR_TO_JSON(HostJson, hostJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(Modules, modules_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RelationalData, relationalData_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddress, activeAddress_);
      DARABONBA_PTR_FROM_JSON(AppJson, appJson_);
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(BeganOn, beganOn_);
      DARABONBA_PTR_FROM_JSON(ComponentJson, componentJson_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_FROM_JSON(EndOn, endOn_);
      DARABONBA_PTR_FROM_JSON(ExtendJson, extendJson_);
      DARABONBA_PTR_FROM_JSON(HostJson, hostJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(Modules, modules_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductSkuCode, productSkuCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RelationalData, relationalData_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
    };
    DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody(DescribeInstanceResponseBody &&) = default ;
    DescribeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody& operator=(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody& operator=(DescribeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RelationalData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelationalData& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      };
      friend void from_json(const Darabonba::Json& j, RelationalData& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      };
      RelationalData() = default ;
      RelationalData(const RelationalData &) = default ;
      RelationalData(RelationalData &&) = default ;
      RelationalData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelationalData() = default ;
      RelationalData& operator=(const RelationalData &) = default ;
      RelationalData& operator=(RelationalData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serviceStatus_ == nullptr; };
      // serviceStatus Field Functions 
      bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
      void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
      inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
      inline RelationalData& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    protected:
      shared_ptr<string> serviceStatus_ {};
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

    virtual bool empty() const override { return this->activeAddress_ == nullptr
        && this->appJson_ == nullptr && this->autoRenewal_ == nullptr && this->beganOn_ == nullptr && this->componentJson_ == nullptr && this->constraints_ == nullptr
        && this->createdOn_ == nullptr && this->endOn_ == nullptr && this->extendJson_ == nullptr && this->hostJson_ == nullptr && this->instanceId_ == nullptr
        && this->isTrial_ == nullptr && this->licenseCode_ == nullptr && this->modules_ == nullptr && this->orderId_ == nullptr && this->productCode_ == nullptr
        && this->productName_ == nullptr && this->productSkuCode_ == nullptr && this->productType_ == nullptr && this->relationalData_ == nullptr && this->status_ == nullptr
        && this->supplierName_ == nullptr; };
    // activeAddress Field Functions 
    bool hasActiveAddress() const { return this->activeAddress_ != nullptr;};
    void deleteActiveAddress() { this->activeAddress_ = nullptr;};
    inline string getActiveAddress() const { DARABONBA_PTR_GET_DEFAULT(activeAddress_, "") };
    inline DescribeInstanceResponseBody& setActiveAddress(string activeAddress) { DARABONBA_PTR_SET_VALUE(activeAddress_, activeAddress) };


    // appJson Field Functions 
    bool hasAppJson() const { return this->appJson_ != nullptr;};
    void deleteAppJson() { this->appJson_ = nullptr;};
    inline string getAppJson() const { DARABONBA_PTR_GET_DEFAULT(appJson_, "") };
    inline DescribeInstanceResponseBody& setAppJson(string appJson) { DARABONBA_PTR_SET_VALUE(appJson_, appJson) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline string getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, "") };
    inline DescribeInstanceResponseBody& setAutoRenewal(string autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // beganOn Field Functions 
    bool hasBeganOn() const { return this->beganOn_ != nullptr;};
    void deleteBeganOn() { this->beganOn_ = nullptr;};
    inline int64_t getBeganOn() const { DARABONBA_PTR_GET_DEFAULT(beganOn_, 0L) };
    inline DescribeInstanceResponseBody& setBeganOn(int64_t beganOn) { DARABONBA_PTR_SET_VALUE(beganOn_, beganOn) };


    // componentJson Field Functions 
    bool hasComponentJson() const { return this->componentJson_ != nullptr;};
    void deleteComponentJson() { this->componentJson_ = nullptr;};
    inline string getComponentJson() const { DARABONBA_PTR_GET_DEFAULT(componentJson_, "") };
    inline DescribeInstanceResponseBody& setComponentJson(string componentJson) { DARABONBA_PTR_SET_VALUE(componentJson_, componentJson) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline string getConstraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
    inline DescribeInstanceResponseBody& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


    // createdOn Field Functions 
    bool hasCreatedOn() const { return this->createdOn_ != nullptr;};
    void deleteCreatedOn() { this->createdOn_ = nullptr;};
    inline int64_t getCreatedOn() const { DARABONBA_PTR_GET_DEFAULT(createdOn_, 0L) };
    inline DescribeInstanceResponseBody& setCreatedOn(int64_t createdOn) { DARABONBA_PTR_SET_VALUE(createdOn_, createdOn) };


    // endOn Field Functions 
    bool hasEndOn() const { return this->endOn_ != nullptr;};
    void deleteEndOn() { this->endOn_ = nullptr;};
    inline int64_t getEndOn() const { DARABONBA_PTR_GET_DEFAULT(endOn_, 0L) };
    inline DescribeInstanceResponseBody& setEndOn(int64_t endOn) { DARABONBA_PTR_SET_VALUE(endOn_, endOn) };


    // extendJson Field Functions 
    bool hasExtendJson() const { return this->extendJson_ != nullptr;};
    void deleteExtendJson() { this->extendJson_ = nullptr;};
    inline string getExtendJson() const { DARABONBA_PTR_GET_DEFAULT(extendJson_, "") };
    inline DescribeInstanceResponseBody& setExtendJson(string extendJson) { DARABONBA_PTR_SET_VALUE(extendJson_, extendJson) };


    // hostJson Field Functions 
    bool hasHostJson() const { return this->hostJson_ != nullptr;};
    void deleteHostJson() { this->hostJson_ = nullptr;};
    inline string getHostJson() const { DARABONBA_PTR_GET_DEFAULT(hostJson_, "") };
    inline DescribeInstanceResponseBody& setHostJson(string hostJson) { DARABONBA_PTR_SET_VALUE(hostJson_, hostJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeInstanceResponseBody& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool getIsTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline DescribeInstanceResponseBody& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string getLicenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline DescribeInstanceResponseBody& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const DescribeInstanceResponseBody::Modules & getModules() const { DARABONBA_PTR_GET_CONST(modules_, DescribeInstanceResponseBody::Modules) };
    inline DescribeInstanceResponseBody::Modules getModules() { DARABONBA_PTR_GET(modules_, DescribeInstanceResponseBody::Modules) };
    inline DescribeInstanceResponseBody& setModules(const DescribeInstanceResponseBody::Modules & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline DescribeInstanceResponseBody& setModules(DescribeInstanceResponseBody::Modules && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeInstanceResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeInstanceResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeInstanceResponseBody& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productSkuCode Field Functions 
    bool hasProductSkuCode() const { return this->productSkuCode_ != nullptr;};
    void deleteProductSkuCode() { this->productSkuCode_ = nullptr;};
    inline string getProductSkuCode() const { DARABONBA_PTR_GET_DEFAULT(productSkuCode_, "") };
    inline DescribeInstanceResponseBody& setProductSkuCode(string productSkuCode) { DARABONBA_PTR_SET_VALUE(productSkuCode_, productSkuCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeInstanceResponseBody& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // relationalData Field Functions 
    bool hasRelationalData() const { return this->relationalData_ != nullptr;};
    void deleteRelationalData() { this->relationalData_ = nullptr;};
    inline const DescribeInstanceResponseBody::RelationalData & getRelationalData() const { DARABONBA_PTR_GET_CONST(relationalData_, DescribeInstanceResponseBody::RelationalData) };
    inline DescribeInstanceResponseBody::RelationalData getRelationalData() { DARABONBA_PTR_GET(relationalData_, DescribeInstanceResponseBody::RelationalData) };
    inline DescribeInstanceResponseBody& setRelationalData(const DescribeInstanceResponseBody::RelationalData & relationalData) { DARABONBA_PTR_SET_VALUE(relationalData_, relationalData) };
    inline DescribeInstanceResponseBody& setRelationalData(DescribeInstanceResponseBody::RelationalData && relationalData) { DARABONBA_PTR_SET_RVALUE(relationalData_, relationalData) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline DescribeInstanceResponseBody& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


  protected:
    shared_ptr<string> activeAddress_ {};
    shared_ptr<string> appJson_ {};
    shared_ptr<string> autoRenewal_ {};
    shared_ptr<int64_t> beganOn_ {};
    shared_ptr<string> componentJson_ {};
    shared_ptr<string> constraints_ {};
    shared_ptr<int64_t> createdOn_ {};
    shared_ptr<int64_t> endOn_ {};
    shared_ptr<string> extendJson_ {};
    shared_ptr<string> hostJson_ {};
    shared_ptr<int64_t> instanceId_ {};
    shared_ptr<bool> isTrial_ {};
    shared_ptr<string> licenseCode_ {};
    shared_ptr<DescribeInstanceResponseBody::Modules> modules_ {};
    shared_ptr<int64_t> orderId_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<string> productSkuCode_ {};
    shared_ptr<string> productType_ {};
    shared_ptr<DescribeInstanceResponseBody::RelationalData> relationalData_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> supplierName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
