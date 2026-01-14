// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELECCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETELECCONSTITUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetElecConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElecConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetElecConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetElecConstituteResponseBody() = default ;
    GetElecConstituteResponseBody(const GetElecConstituteResponseBody &) = default ;
    GetElecConstituteResponseBody(GetElecConstituteResponseBody &&) = default ;
    GetElecConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElecConstituteResponseBody() = default ;
    GetElecConstituteResponseBody& operator=(const GetElecConstituteResponseBody &) = default ;
    GetElecConstituteResponseBody& operator=(GetElecConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(light, light_);
        DARABONBA_PTR_TO_JSON(nuclear, nuclear_);
        DARABONBA_PTR_TO_JSON(renewing, renewing_);
        DARABONBA_PTR_TO_JSON(urban, urban_);
        DARABONBA_PTR_TO_JSON(water, water_);
        DARABONBA_PTR_TO_JSON(wind, wind_);
        DARABONBA_PTR_TO_JSON(zero, zero_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(light, light_);
        DARABONBA_PTR_FROM_JSON(nuclear, nuclear_);
        DARABONBA_PTR_FROM_JSON(renewing, renewing_);
        DARABONBA_PTR_FROM_JSON(urban, urban_);
        DARABONBA_PTR_FROM_JSON(water, water_);
        DARABONBA_PTR_FROM_JSON(wind, wind_);
        DARABONBA_PTR_FROM_JSON(zero, zero_);
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
      class Zero : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zero& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
        };
        friend void from_json(const Darabonba::Json& j, Zero& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
        };
        Zero() = default ;
        Zero(const Zero &) = default ;
        Zero(Zero &&) = default ;
        Zero(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zero() = default ;
        Zero& operator=(const Zero &) = default ;
        Zero& operator=(Zero &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->dataUnit_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->rawData_ == nullptr; };
        // carbonEmissionData Field Functions 
        bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
        void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
        inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
        inline Zero& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


        // dataUnit Field Functions 
        bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
        void deleteDataUnit() { this->dataUnit_ = nullptr;};
        inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
        inline Zero& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Zero& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline Zero& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
        inline Zero& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        // rawData Field Functions 
        bool hasRawData() const { return this->rawData_ != nullptr;};
        void deleteRawData() { this->rawData_ = nullptr;};
        inline double getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
        inline Zero& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


      protected:
        // Carbon emission.
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The unique identifier of name.
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
      };

      class Wind : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Wind& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
        };
        friend void from_json(const Darabonba::Json& j, Wind& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
        };
        Wind() = default ;
        Wind(const Wind &) = default ;
        Wind(Wind &&) = default ;
        Wind(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Wind() = default ;
        Wind& operator=(const Wind &) = default ;
        Wind& operator=(Wind &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->dataUnit_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->rawData_ == nullptr; };
        // carbonEmissionData Field Functions 
        bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
        void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
        inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
        inline Wind& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


        // dataUnit Field Functions 
        bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
        void deleteDataUnit() { this->dataUnit_ = nullptr;};
        inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
        inline Wind& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Wind& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline Wind& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
        inline Wind& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        // rawData Field Functions 
        bool hasRawData() const { return this->rawData_ != nullptr;};
        void deleteRawData() { this->rawData_ = nullptr;};
        inline double getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
        inline Wind& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


      protected:
        // Carbon emission.
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The unique identifier of name.
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
      };

      class Water : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Water& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
        };
        friend void from_json(const Darabonba::Json& j, Water& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
        };
        Water() = default ;
        Water(const Water &) = default ;
        Water(Water &&) = default ;
        Water(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Water() = default ;
        Water& operator=(const Water &) = default ;
        Water& operator=(Water &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->dataUnit_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->rawData_ == nullptr; };
        // carbonEmissionData Field Functions 
        bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
        void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
        inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
        inline Water& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


        // dataUnit Field Functions 
        bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
        void deleteDataUnit() { this->dataUnit_ = nullptr;};
        inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
        inline Water& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Water& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline Water& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
        inline Water& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        // rawData Field Functions 
        bool hasRawData() const { return this->rawData_ != nullptr;};
        void deleteRawData() { this->rawData_ = nullptr;};
        inline double getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
        inline Water& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


      protected:
        // Carbon emission.
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The unique identifier of name.
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
      };

      class Urban : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Urban& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
        };
        friend void from_json(const Darabonba::Json& j, Urban& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
        };
        Urban() = default ;
        Urban(const Urban &) = default ;
        Urban(Urban &&) = default ;
        Urban(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Urban() = default ;
        Urban& operator=(const Urban &) = default ;
        Urban& operator=(Urban &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->dataUnit_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->rawData_ == nullptr; };
        // carbonEmissionData Field Functions 
        bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
        void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
        inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
        inline Urban& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


        // dataUnit Field Functions 
        bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
        void deleteDataUnit() { this->dataUnit_ = nullptr;};
        inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
        inline Urban& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Urban& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline Urban& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
        inline Urban& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        // rawData Field Functions 
        bool hasRawData() const { return this->rawData_ != nullptr;};
        void deleteRawData() { this->rawData_ = nullptr;};
        inline double getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
        inline Urban& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


      protected:
        // Carbon emission.
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The unique identifier of name.
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
      };

      class Renewing : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Renewing& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
        };
        friend void from_json(const Darabonba::Json& j, Renewing& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
        };
        Renewing() = default ;
        Renewing(const Renewing &) = default ;
        Renewing(Renewing &&) = default ;
        Renewing(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Renewing() = default ;
        Renewing& operator=(const Renewing &) = default ;
        Renewing& operator=(Renewing &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->dataUnit_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->rawData_ == nullptr; };
        // carbonEmissionData Field Functions 
        bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
        void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
        inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
        inline Renewing& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


        // dataUnit Field Functions 
        bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
        void deleteDataUnit() { this->dataUnit_ = nullptr;};
        inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
        inline Renewing& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Renewing& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline Renewing& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
        inline Renewing& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        // rawData Field Functions 
        bool hasRawData() const { return this->rawData_ != nullptr;};
        void deleteRawData() { this->rawData_ = nullptr;};
        inline double getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
        inline Renewing& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


      protected:
        // Carbon emission.
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The unique identifier of name.
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
      };

      class Nuclear : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nuclear& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
        };
        friend void from_json(const Darabonba::Json& j, Nuclear& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
        };
        Nuclear() = default ;
        Nuclear(const Nuclear &) = default ;
        Nuclear(Nuclear &&) = default ;
        Nuclear(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nuclear() = default ;
        Nuclear& operator=(const Nuclear &) = default ;
        Nuclear& operator=(Nuclear &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->dataUnit_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->rawData_ == nullptr; };
        // carbonEmissionData Field Functions 
        bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
        void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
        inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
        inline Nuclear& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


        // dataUnit Field Functions 
        bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
        void deleteDataUnit() { this->dataUnit_ = nullptr;};
        inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
        inline Nuclear& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Nuclear& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline Nuclear& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
        inline Nuclear& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        // rawData Field Functions 
        bool hasRawData() const { return this->rawData_ != nullptr;};
        void deleteRawData() { this->rawData_ = nullptr;};
        inline double getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
        inline Nuclear& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


      protected:
        // Carbon emission.
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The unique identifier of name.
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
      };

      class Light : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Light& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
        };
        friend void from_json(const Darabonba::Json& j, Light& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
        };
        Light() = default ;
        Light(const Light &) = default ;
        Light(Light &&) = default ;
        Light(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Light() = default ;
        Light& operator=(const Light &) = default ;
        Light& operator=(Light &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->dataUnit_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->rawData_ == nullptr; };
        // carbonEmissionData Field Functions 
        bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
        void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
        inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
        inline Light& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


        // dataUnit Field Functions 
        bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
        void deleteDataUnit() { this->dataUnit_ = nullptr;};
        inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
        inline Light& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Light& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline Light& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


        // ratio Field Functions 
        bool hasRatio() const { return this->ratio_ != nullptr;};
        void deleteRatio() { this->ratio_ = nullptr;};
        inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
        inline Light& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


        // rawData Field Functions 
        bool hasRawData() const { return this->rawData_ != nullptr;};
        void deleteRawData() { this->rawData_ = nullptr;};
        inline double getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
        inline Light& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


      protected:
        // Carbon emission.
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The unique identifier of name.
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
      };

      virtual bool empty() const override { return this->light_ == nullptr
        && this->nuclear_ == nullptr && this->renewing_ == nullptr && this->urban_ == nullptr && this->water_ == nullptr && this->wind_ == nullptr
        && this->zero_ == nullptr; };
      // light Field Functions 
      bool hasLight() const { return this->light_ != nullptr;};
      void deleteLight() { this->light_ = nullptr;};
      inline const Data::Light & getLight() const { DARABONBA_PTR_GET_CONST(light_, Data::Light) };
      inline Data::Light getLight() { DARABONBA_PTR_GET(light_, Data::Light) };
      inline Data& setLight(const Data::Light & light) { DARABONBA_PTR_SET_VALUE(light_, light) };
      inline Data& setLight(Data::Light && light) { DARABONBA_PTR_SET_RVALUE(light_, light) };


      // nuclear Field Functions 
      bool hasNuclear() const { return this->nuclear_ != nullptr;};
      void deleteNuclear() { this->nuclear_ = nullptr;};
      inline const Data::Nuclear & getNuclear() const { DARABONBA_PTR_GET_CONST(nuclear_, Data::Nuclear) };
      inline Data::Nuclear getNuclear() { DARABONBA_PTR_GET(nuclear_, Data::Nuclear) };
      inline Data& setNuclear(const Data::Nuclear & nuclear) { DARABONBA_PTR_SET_VALUE(nuclear_, nuclear) };
      inline Data& setNuclear(Data::Nuclear && nuclear) { DARABONBA_PTR_SET_RVALUE(nuclear_, nuclear) };


      // renewing Field Functions 
      bool hasRenewing() const { return this->renewing_ != nullptr;};
      void deleteRenewing() { this->renewing_ = nullptr;};
      inline const Data::Renewing & getRenewing() const { DARABONBA_PTR_GET_CONST(renewing_, Data::Renewing) };
      inline Data::Renewing getRenewing() { DARABONBA_PTR_GET(renewing_, Data::Renewing) };
      inline Data& setRenewing(const Data::Renewing & renewing) { DARABONBA_PTR_SET_VALUE(renewing_, renewing) };
      inline Data& setRenewing(Data::Renewing && renewing) { DARABONBA_PTR_SET_RVALUE(renewing_, renewing) };


      // urban Field Functions 
      bool hasUrban() const { return this->urban_ != nullptr;};
      void deleteUrban() { this->urban_ = nullptr;};
      inline const Data::Urban & getUrban() const { DARABONBA_PTR_GET_CONST(urban_, Data::Urban) };
      inline Data::Urban getUrban() { DARABONBA_PTR_GET(urban_, Data::Urban) };
      inline Data& setUrban(const Data::Urban & urban) { DARABONBA_PTR_SET_VALUE(urban_, urban) };
      inline Data& setUrban(Data::Urban && urban) { DARABONBA_PTR_SET_RVALUE(urban_, urban) };


      // water Field Functions 
      bool hasWater() const { return this->water_ != nullptr;};
      void deleteWater() { this->water_ = nullptr;};
      inline const Data::Water & getWater() const { DARABONBA_PTR_GET_CONST(water_, Data::Water) };
      inline Data::Water getWater() { DARABONBA_PTR_GET(water_, Data::Water) };
      inline Data& setWater(const Data::Water & water) { DARABONBA_PTR_SET_VALUE(water_, water) };
      inline Data& setWater(Data::Water && water) { DARABONBA_PTR_SET_RVALUE(water_, water) };


      // wind Field Functions 
      bool hasWind() const { return this->wind_ != nullptr;};
      void deleteWind() { this->wind_ = nullptr;};
      inline const Data::Wind & getWind() const { DARABONBA_PTR_GET_CONST(wind_, Data::Wind) };
      inline Data::Wind getWind() { DARABONBA_PTR_GET(wind_, Data::Wind) };
      inline Data& setWind(const Data::Wind & wind) { DARABONBA_PTR_SET_VALUE(wind_, wind) };
      inline Data& setWind(Data::Wind && wind) { DARABONBA_PTR_SET_RVALUE(wind_, wind) };


      // zero Field Functions 
      bool hasZero() const { return this->zero_ != nullptr;};
      void deleteZero() { this->zero_ = nullptr;};
      inline const Data::Zero & getZero() const { DARABONBA_PTR_GET_CONST(zero_, Data::Zero) };
      inline Data::Zero getZero() { DARABONBA_PTR_GET(zero_, Data::Zero) };
      inline Data& setZero(const Data::Zero & zero) { DARABONBA_PTR_SET_VALUE(zero_, zero) };
      inline Data& setZero(Data::Zero && zero) { DARABONBA_PTR_SET_RVALUE(zero_, zero) };


    protected:
      // Photoelectric power consumption and carbon emission data of each enterprise.
      shared_ptr<Data::Light> light_ {};
      // Data on nuclear power consumption and carbon emissions at each enterprise.
      shared_ptr<Data::Nuclear> nuclear_ {};
      // Data on renewable electricity consumption and carbon emissions at each enterprise.
      shared_ptr<Data::Renewing> renewing_ {};
      // Data on mains power electricity consumption and carbon emission of each enterprise.
      shared_ptr<Data::Urban> urban_ {};
      // Hydropower consumption and carbon emission data of each enterprise.
      shared_ptr<Data::Water> water_ {};
      // Wind power consumption and carbon emission data of each enterprise.
      shared_ptr<Data::Wind> wind_ {};
      // Data of zero electricity consumption and carbon emission of each enterprise.
      shared_ptr<Data::Zero> zero_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetElecConstituteResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetElecConstituteResponseBody::Data) };
    inline GetElecConstituteResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetElecConstituteResponseBody::Data) };
    inline GetElecConstituteResponseBody& setData(const GetElecConstituteResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetElecConstituteResponseBody& setData(GetElecConstituteResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetElecConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetElecConstituteResponseBody::Data> data_ {};
    // Id of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
