// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODY_HPP_
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
  class DescribeResourcePackageProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackageProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackageProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeResourcePackageProductResponseBody() = default ;
    DescribeResourcePackageProductResponseBody(const DescribeResourcePackageProductResponseBody &) = default ;
    DescribeResourcePackageProductResponseBody(DescribeResourcePackageProductResponseBody &&) = default ;
    DescribeResourcePackageProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackageProductResponseBody() = default ;
    DescribeResourcePackageProductResponseBody& operator=(const DescribeResourcePackageProductResponseBody &) = default ;
    DescribeResourcePackageProductResponseBody& operator=(DescribeResourcePackageProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ResourcePackages, resourcePackages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourcePackages, resourcePackages_);
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
      class ResourcePackages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePackages& obj) { 
          DARABONBA_PTR_TO_JSON(ResourcePackage, resourcePackage_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePackages& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourcePackage, resourcePackage_);
        };
        ResourcePackages() = default ;
        ResourcePackages(const ResourcePackages &) = default ;
        ResourcePackages(ResourcePackages &&) = default ;
        ResourcePackages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePackages() = default ;
        ResourcePackages& operator=(const ResourcePackages &) = default ;
        ResourcePackages& operator=(ResourcePackages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourcePackage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourcePackage& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(PackageTypes, packageTypes_);
            DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
            DARABONBA_PTR_TO_JSON(ProductType, productType_);
          };
          friend void from_json(const Darabonba::Json& j, ResourcePackage& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(PackageTypes, packageTypes_);
            DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
            DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          };
          ResourcePackage() = default ;
          ResourcePackage(const ResourcePackage &) = default ;
          ResourcePackage(ResourcePackage &&) = default ;
          ResourcePackage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourcePackage() = default ;
          ResourcePackage& operator=(const ResourcePackage &) = default ;
          ResourcePackage& operator=(ResourcePackage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PackageTypes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PackageTypes& obj) { 
              DARABONBA_PTR_TO_JSON(PackageType, packageType_);
            };
            friend void from_json(const Darabonba::Json& j, PackageTypes& obj) { 
              DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
            };
            PackageTypes() = default ;
            PackageTypes(const PackageTypes &) = default ;
            PackageTypes(PackageTypes &&) = default ;
            PackageTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PackageTypes() = default ;
            PackageTypes& operator=(const PackageTypes &) = default ;
            PackageTypes& operator=(PackageTypes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class PackageType : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PackageType& obj) { 
                DARABONBA_PTR_TO_JSON(Code, code_);
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Properties, properties_);
                DARABONBA_PTR_TO_JSON(Specifications, specifications_);
              };
              friend void from_json(const Darabonba::Json& j, PackageType& obj) { 
                DARABONBA_PTR_FROM_JSON(Code, code_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Properties, properties_);
                DARABONBA_PTR_FROM_JSON(Specifications, specifications_);
              };
              PackageType() = default ;
              PackageType(const PackageType &) = default ;
              PackageType(PackageType &&) = default ;
              PackageType(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PackageType() = default ;
              PackageType& operator=(const PackageType &) = default ;
              PackageType& operator=(PackageType &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Specifications : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Specifications& obj) { 
                  DARABONBA_PTR_TO_JSON(Specification, specification_);
                };
                friend void from_json(const Darabonba::Json& j, Specifications& obj) { 
                  DARABONBA_PTR_FROM_JSON(Specification, specification_);
                };
                Specifications() = default ;
                Specifications(const Specifications &) = default ;
                Specifications(Specifications &&) = default ;
                Specifications(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Specifications() = default ;
                Specifications& operator=(const Specifications &) = default ;
                Specifications& operator=(Specifications &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Specification : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Specification& obj) { 
                    DARABONBA_PTR_TO_JSON(AvailableDurations, availableDurations_);
                    DARABONBA_PTR_TO_JSON(Name, name_);
                    DARABONBA_PTR_TO_JSON(Value, value_);
                  };
                  friend void from_json(const Darabonba::Json& j, Specification& obj) { 
                    DARABONBA_PTR_FROM_JSON(AvailableDurations, availableDurations_);
                    DARABONBA_PTR_FROM_JSON(Name, name_);
                    DARABONBA_PTR_FROM_JSON(Value, value_);
                  };
                  Specification() = default ;
                  Specification(const Specification &) = default ;
                  Specification(Specification &&) = default ;
                  Specification(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Specification() = default ;
                  Specification& operator=(const Specification &) = default ;
                  Specification& operator=(Specification &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class AvailableDurations : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const AvailableDurations& obj) { 
                      DARABONBA_PTR_TO_JSON(AvailableDuration, availableDuration_);
                    };
                    friend void from_json(const Darabonba::Json& j, AvailableDurations& obj) { 
                      DARABONBA_PTR_FROM_JSON(AvailableDuration, availableDuration_);
                    };
                    AvailableDurations() = default ;
                    AvailableDurations(const AvailableDurations &) = default ;
                    AvailableDurations(AvailableDurations &&) = default ;
                    AvailableDurations(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~AvailableDurations() = default ;
                    AvailableDurations& operator=(const AvailableDurations &) = default ;
                    AvailableDurations& operator=(AvailableDurations &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class AvailableDuration : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const AvailableDuration& obj) { 
                        DARABONBA_PTR_TO_JSON(Name, name_);
                        DARABONBA_PTR_TO_JSON(Unit, unit_);
                        DARABONBA_PTR_TO_JSON(Value, value_);
                      };
                      friend void from_json(const Darabonba::Json& j, AvailableDuration& obj) { 
                        DARABONBA_PTR_FROM_JSON(Name, name_);
                        DARABONBA_PTR_FROM_JSON(Unit, unit_);
                        DARABONBA_PTR_FROM_JSON(Value, value_);
                      };
                      AvailableDuration() = default ;
                      AvailableDuration(const AvailableDuration &) = default ;
                      AvailableDuration(AvailableDuration &&) = default ;
                      AvailableDuration(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~AvailableDuration() = default ;
                      AvailableDuration& operator=(const AvailableDuration &) = default ;
                      AvailableDuration& operator=(AvailableDuration &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      virtual bool empty() const override { return this->name_ == nullptr
        && this->unit_ == nullptr && this->value_ == nullptr; };
                      // name Field Functions 
                      bool hasName() const { return this->name_ != nullptr;};
                      void deleteName() { this->name_ = nullptr;};
                      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                      inline AvailableDuration& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                      // unit Field Functions 
                      bool hasUnit() const { return this->unit_ != nullptr;};
                      void deleteUnit() { this->unit_ = nullptr;};
                      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
                      inline AvailableDuration& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


                      // value Field Functions 
                      bool hasValue() const { return this->value_ != nullptr;};
                      void deleteValue() { this->value_ = nullptr;};
                      inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
                      inline AvailableDuration& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


                    protected:
                      // The name of the validity period.
                      shared_ptr<string> name_ {};
                      // The unit of the validity period for the resource plan. Valid values:
                      // 
                      // *   Month
                      // *   Year
                      // 
                      // Default value: Month.
                      shared_ptr<string> unit_ {};
                      // The value of the validity period.
                      shared_ptr<int32_t> value_ {};
                    };

                    virtual bool empty() const override { return this->availableDuration_ == nullptr; };
                    // availableDuration Field Functions 
                    bool hasAvailableDuration() const { return this->availableDuration_ != nullptr;};
                    void deleteAvailableDuration() { this->availableDuration_ = nullptr;};
                    inline const vector<AvailableDurations::AvailableDuration> & getAvailableDuration() const { DARABONBA_PTR_GET_CONST(availableDuration_, vector<AvailableDurations::AvailableDuration>) };
                    inline vector<AvailableDurations::AvailableDuration> getAvailableDuration() { DARABONBA_PTR_GET(availableDuration_, vector<AvailableDurations::AvailableDuration>) };
                    inline AvailableDurations& setAvailableDuration(const vector<AvailableDurations::AvailableDuration> & availableDuration) { DARABONBA_PTR_SET_VALUE(availableDuration_, availableDuration) };
                    inline AvailableDurations& setAvailableDuration(vector<AvailableDurations::AvailableDuration> && availableDuration) { DARABONBA_PTR_SET_RVALUE(availableDuration_, availableDuration) };


                  protected:
                    shared_ptr<vector<AvailableDurations::AvailableDuration>> availableDuration_ {};
                  };

                  virtual bool empty() const override { return this->availableDurations_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
                  // availableDurations Field Functions 
                  bool hasAvailableDurations() const { return this->availableDurations_ != nullptr;};
                  void deleteAvailableDurations() { this->availableDurations_ = nullptr;};
                  inline const Specification::AvailableDurations & getAvailableDurations() const { DARABONBA_PTR_GET_CONST(availableDurations_, Specification::AvailableDurations) };
                  inline Specification::AvailableDurations getAvailableDurations() { DARABONBA_PTR_GET(availableDurations_, Specification::AvailableDurations) };
                  inline Specification& setAvailableDurations(const Specification::AvailableDurations & availableDurations) { DARABONBA_PTR_SET_VALUE(availableDurations_, availableDurations) };
                  inline Specification& setAvailableDurations(Specification::AvailableDurations && availableDurations) { DARABONBA_PTR_SET_RVALUE(availableDurations_, availableDurations) };


                  // name Field Functions 
                  bool hasName() const { return this->name_ != nullptr;};
                  void deleteName() { this->name_ = nullptr;};
                  inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                  inline Specification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                  // value Field Functions 
                  bool hasValue() const { return this->value_ != nullptr;};
                  void deleteValue() { this->value_ = nullptr;};
                  inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                  inline Specification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


                protected:
                  // The validity periods available for the resource plan.
                  shared_ptr<Specification::AvailableDurations> availableDurations_ {};
                  // The name of the specification.
                  shared_ptr<string> name_ {};
                  // The value of the specification.
                  shared_ptr<string> value_ {};
                };

                virtual bool empty() const override { return this->specification_ == nullptr; };
                // specification Field Functions 
                bool hasSpecification() const { return this->specification_ != nullptr;};
                void deleteSpecification() { this->specification_ = nullptr;};
                inline const vector<Specifications::Specification> & getSpecification() const { DARABONBA_PTR_GET_CONST(specification_, vector<Specifications::Specification>) };
                inline vector<Specifications::Specification> getSpecification() { DARABONBA_PTR_GET(specification_, vector<Specifications::Specification>) };
                inline Specifications& setSpecification(const vector<Specifications::Specification> & specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };
                inline Specifications& setSpecification(vector<Specifications::Specification> && specification) { DARABONBA_PTR_SET_RVALUE(specification_, specification) };


              protected:
                shared_ptr<vector<Specifications::Specification>> specification_ {};
              };

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
                    DARABONBA_PTR_TO_JSON(Name, name_);
                    DARABONBA_PTR_TO_JSON(Value, value_);
                  };
                  friend void from_json(const Darabonba::Json& j, Property& obj) { 
                    DARABONBA_PTR_FROM_JSON(Name, name_);
                    DARABONBA_PTR_FROM_JSON(Value, value_);
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
                  virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
                  // name Field Functions 
                  bool hasName() const { return this->name_ != nullptr;};
                  void deleteName() { this->name_ = nullptr;};
                  inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                  inline Property& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                  // value Field Functions 
                  bool hasValue() const { return this->value_ != nullptr;};
                  void deleteValue() { this->value_ = nullptr;};
                  inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                  inline Property& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


                protected:
                  // The name of the property.
                  shared_ptr<string> name_ {};
                  // The value of the property.
                  shared_ptr<string> value_ {};
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
        && this->name_ == nullptr && this->properties_ == nullptr && this->specifications_ == nullptr; };
              // code Field Functions 
              bool hasCode() const { return this->code_ != nullptr;};
              void deleteCode() { this->code_ = nullptr;};
              inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
              inline PackageType& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline PackageType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // properties Field Functions 
              bool hasProperties() const { return this->properties_ != nullptr;};
              void deleteProperties() { this->properties_ = nullptr;};
              inline const PackageType::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, PackageType::Properties) };
              inline PackageType::Properties getProperties() { DARABONBA_PTR_GET(properties_, PackageType::Properties) };
              inline PackageType& setProperties(const PackageType::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
              inline PackageType& setProperties(PackageType::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


              // specifications Field Functions 
              bool hasSpecifications() const { return this->specifications_ != nullptr;};
              void deleteSpecifications() { this->specifications_ = nullptr;};
              inline const PackageType::Specifications & getSpecifications() const { DARABONBA_PTR_GET_CONST(specifications_, PackageType::Specifications) };
              inline PackageType::Specifications getSpecifications() { DARABONBA_PTR_GET(specifications_, PackageType::Specifications) };
              inline PackageType& setSpecifications(const PackageType::Specifications & specifications) { DARABONBA_PTR_SET_VALUE(specifications_, specifications) };
              inline PackageType& setSpecifications(PackageType::Specifications && specifications) { DARABONBA_PTR_SET_RVALUE(specifications_, specifications) };


            protected:
              // The code of the resource plan.
              shared_ptr<string> code_ {};
              // The name of the resource plan type.
              shared_ptr<string> name_ {};
              // The properties of the resource plan.
              shared_ptr<PackageType::Properties> properties_ {};
              // The specifications of the resource plan.
              shared_ptr<PackageType::Specifications> specifications_ {};
            };

            virtual bool empty() const override { return this->packageType_ == nullptr; };
            // packageType Field Functions 
            bool hasPackageType() const { return this->packageType_ != nullptr;};
            void deletePackageType() { this->packageType_ = nullptr;};
            inline const vector<PackageTypes::PackageType> & getPackageType() const { DARABONBA_PTR_GET_CONST(packageType_, vector<PackageTypes::PackageType>) };
            inline vector<PackageTypes::PackageType> getPackageType() { DARABONBA_PTR_GET(packageType_, vector<PackageTypes::PackageType>) };
            inline PackageTypes& setPackageType(const vector<PackageTypes::PackageType> & packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };
            inline PackageTypes& setPackageType(vector<PackageTypes::PackageType> && packageType) { DARABONBA_PTR_SET_RVALUE(packageType_, packageType) };


          protected:
            shared_ptr<vector<PackageTypes::PackageType>> packageType_ {};
          };

          virtual bool empty() const override { return this->name_ == nullptr
        && this->packageTypes_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ResourcePackage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // packageTypes Field Functions 
          bool hasPackageTypes() const { return this->packageTypes_ != nullptr;};
          void deletePackageTypes() { this->packageTypes_ = nullptr;};
          inline const ResourcePackage::PackageTypes & getPackageTypes() const { DARABONBA_PTR_GET_CONST(packageTypes_, ResourcePackage::PackageTypes) };
          inline ResourcePackage::PackageTypes getPackageTypes() { DARABONBA_PTR_GET(packageTypes_, ResourcePackage::PackageTypes) };
          inline ResourcePackage& setPackageTypes(const ResourcePackage::PackageTypes & packageTypes) { DARABONBA_PTR_SET_VALUE(packageTypes_, packageTypes) };
          inline ResourcePackage& setPackageTypes(ResourcePackage::PackageTypes && packageTypes) { DARABONBA_PTR_SET_RVALUE(packageTypes_, packageTypes) };


          // productCode Field Functions 
          bool hasProductCode() const { return this->productCode_ != nullptr;};
          void deleteProductCode() { this->productCode_ = nullptr;};
          inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
          inline ResourcePackage& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


          // productType Field Functions 
          bool hasProductType() const { return this->productType_ != nullptr;};
          void deleteProductType() { this->productType_ = nullptr;};
          inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
          inline ResourcePackage& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        protected:
          // The name of the resource plan.
          shared_ptr<string> name_ {};
          // The types of the resource plans.
          shared_ptr<ResourcePackage::PackageTypes> packageTypes_ {};
          // The code of the service.
          shared_ptr<string> productCode_ {};
          // The type of the service.
          shared_ptr<string> productType_ {};
        };

        virtual bool empty() const override { return this->resourcePackage_ == nullptr; };
        // resourcePackage Field Functions 
        bool hasResourcePackage() const { return this->resourcePackage_ != nullptr;};
        void deleteResourcePackage() { this->resourcePackage_ = nullptr;};
        inline const vector<ResourcePackages::ResourcePackage> & getResourcePackage() const { DARABONBA_PTR_GET_CONST(resourcePackage_, vector<ResourcePackages::ResourcePackage>) };
        inline vector<ResourcePackages::ResourcePackage> getResourcePackage() { DARABONBA_PTR_GET(resourcePackage_, vector<ResourcePackages::ResourcePackage>) };
        inline ResourcePackages& setResourcePackage(const vector<ResourcePackages::ResourcePackage> & resourcePackage) { DARABONBA_PTR_SET_VALUE(resourcePackage_, resourcePackage) };
        inline ResourcePackages& setResourcePackage(vector<ResourcePackages::ResourcePackage> && resourcePackage) { DARABONBA_PTR_SET_RVALUE(resourcePackage_, resourcePackage) };


      protected:
        shared_ptr<vector<ResourcePackages::ResourcePackage>> resourcePackage_ {};
      };

      virtual bool empty() const override { return this->resourcePackages_ == nullptr; };
      // resourcePackages Field Functions 
      bool hasResourcePackages() const { return this->resourcePackages_ != nullptr;};
      void deleteResourcePackages() { this->resourcePackages_ = nullptr;};
      inline const Data::ResourcePackages & getResourcePackages() const { DARABONBA_PTR_GET_CONST(resourcePackages_, Data::ResourcePackages) };
      inline Data::ResourcePackages getResourcePackages() { DARABONBA_PTR_GET(resourcePackages_, Data::ResourcePackages) };
      inline Data& setResourcePackages(const Data::ResourcePackages & resourcePackages) { DARABONBA_PTR_SET_VALUE(resourcePackages_, resourcePackages) };
      inline Data& setResourcePackages(Data::ResourcePackages && resourcePackages) { DARABONBA_PTR_SET_RVALUE(resourcePackages_, resourcePackages) };


    protected:
      // The details about the resource plans.
      shared_ptr<Data::ResourcePackages> resourcePackages_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeResourcePackageProductResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeResourcePackageProductResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeResourcePackageProductResponseBody::Data) };
    inline DescribeResourcePackageProductResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeResourcePackageProductResponseBody::Data) };
    inline DescribeResourcePackageProductResponseBody& setData(const DescribeResourcePackageProductResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeResourcePackageProductResponseBody& setData(DescribeResourcePackageProductResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeResourcePackageProductResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeResourcePackageProductResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourcePackageProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeResourcePackageProductResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeResourcePackageProductResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the order.
    shared_ptr<int64_t> orderId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
