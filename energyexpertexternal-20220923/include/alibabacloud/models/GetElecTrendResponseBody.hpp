// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELECTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETELECTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetElecTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElecTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetElecTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetElecTrendResponseBody() = default ;
    GetElecTrendResponseBody(const GetElecTrendResponseBody &) = default ;
    GetElecTrendResponseBody(GetElecTrendResponseBody &&) = default ;
    GetElecTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElecTrendResponseBody() = default ;
    GetElecTrendResponseBody& operator=(const GetElecTrendResponseBody &) = default ;
    GetElecTrendResponseBody& operator=(GetElecTrendResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(month, month_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, Zero& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(month, month_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
          DARABONBA_PTR_FROM_JSON(year, year_);
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
        && this->dataUnit_ == nullptr && this->month_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr
        && this->rawData_ == nullptr && this->year_ == nullptr; };
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


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline Zero& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


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


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline Zero& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Carbon emissions
        shared_ptr<double> carbonEmissionData_ {};
        // The price unit.
        shared_ptr<string> dataUnit_ {};
        // Month
        shared_ptr<int32_t> month_ {};
        // Power Type Name
        shared_ptr<string> name_ {};
        // Power Type Code
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
        // Year
        shared_ptr<string> year_ {};
      };

      class Wind : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Wind& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(month, month_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, Wind& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(month, month_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
          DARABONBA_PTR_FROM_JSON(year, year_);
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
        && this->dataUnit_ == nullptr && this->month_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr
        && this->rawData_ == nullptr && this->year_ == nullptr; };
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


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline Wind& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


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


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline Wind& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Carbon emissions
        shared_ptr<double> carbonEmissionData_ {};
        // The price unit.
        shared_ptr<string> dataUnit_ {};
        // Month
        shared_ptr<int32_t> month_ {};
        // Power Type Name
        shared_ptr<string> name_ {};
        // Power Type Code
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
        // Year
        shared_ptr<string> year_ {};
      };

      class Water : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Water& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(month, month_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, Water& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(month, month_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
          DARABONBA_PTR_FROM_JSON(year, year_);
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
        && this->dataUnit_ == nullptr && this->month_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr
        && this->rawData_ == nullptr && this->year_ == nullptr; };
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


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline Water& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


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


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline Water& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Carbon emissions
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // Month
        shared_ptr<int32_t> month_ {};
        // Power Type Name
        shared_ptr<string> name_ {};
        // Power Type Code
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e. 50%).
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
        // Year
        shared_ptr<string> year_ {};
      };

      class Urban : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Urban& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(month, month_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, Urban& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(month, month_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
          DARABONBA_PTR_FROM_JSON(year, year_);
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
        && this->dataUnit_ == nullptr && this->month_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr
        && this->rawData_ == nullptr && this->year_ == nullptr; };
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


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline Urban& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


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


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline Urban& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Carbon emissions
        shared_ptr<double> carbonEmissionData_ {};
        // The price unit.
        shared_ptr<string> dataUnit_ {};
        // Month
        shared_ptr<int32_t> month_ {};
        // Power Type Name
        shared_ptr<string> name_ {};
        // Power Type Code
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e. 50%).
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
        // Year
        shared_ptr<string> year_ {};
      };

      class Renewing : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Renewing& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(month, month_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, Renewing& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(month, month_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
          DARABONBA_PTR_FROM_JSON(year, year_);
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
        && this->dataUnit_ == nullptr && this->month_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr
        && this->rawData_ == nullptr && this->year_ == nullptr; };
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


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline Renewing& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


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


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline Renewing& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Carbon emissions
        shared_ptr<double> carbonEmissionData_ {};
        // The price unit.
        shared_ptr<string> dataUnit_ {};
        // Month
        shared_ptr<int32_t> month_ {};
        // Power Type Name
        shared_ptr<string> name_ {};
        // Power Type Code
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
        // Year
        shared_ptr<string> year_ {};
      };

      class Nuclear : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nuclear& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(month, month_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, Nuclear& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(month, month_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
          DARABONBA_PTR_FROM_JSON(year, year_);
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
        && this->dataUnit_ == nullptr && this->month_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr
        && this->rawData_ == nullptr && this->year_ == nullptr; };
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


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline Nuclear& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


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


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline Nuclear& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Carbon emissions
        shared_ptr<double> carbonEmissionData_ {};
        // The price unit.
        shared_ptr<string> dataUnit_ {};
        // Month
        shared_ptr<int32_t> month_ {};
        // Power Type Name
        shared_ptr<string> name_ {};
        // Power Type Code
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
        // Year
        shared_ptr<string> year_ {};
      };

      class Light : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Light& obj) { 
          DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(month, month_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
          DARABONBA_PTR_TO_JSON(ratio, ratio_);
          DARABONBA_PTR_TO_JSON(rawData, rawData_);
          DARABONBA_PTR_TO_JSON(year, year_);
        };
        friend void from_json(const Darabonba::Json& j, Light& obj) { 
          DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
          DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(month, month_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
          DARABONBA_PTR_FROM_JSON(ratio, ratio_);
          DARABONBA_PTR_FROM_JSON(rawData, rawData_);
          DARABONBA_PTR_FROM_JSON(year, year_);
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
        && this->dataUnit_ == nullptr && this->month_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr
        && this->rawData_ == nullptr && this->year_ == nullptr; };
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


        // month Field Functions 
        bool hasMonth() const { return this->month_ != nullptr;};
        void deleteMonth() { this->month_ = nullptr;};
        inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
        inline Light& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


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


        // year Field Functions 
        bool hasYear() const { return this->year_ != nullptr;};
        void deleteYear() { this->year_ = nullptr;};
        inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
        inline Light& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


      protected:
        // Carbon emissions
        shared_ptr<double> carbonEmissionData_ {};
        // The unit.
        shared_ptr<string> dataUnit_ {};
        // Month
        shared_ptr<int32_t> month_ {};
        // Power type name.
        shared_ptr<string> name_ {};
        // Power Type Code
        shared_ptr<string> nameKey_ {};
        // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e. 50%).
        shared_ptr<double> ratio_ {};
        // Electricity consumption
        shared_ptr<double> rawData_ {};
        // Year
        shared_ptr<string> year_ {};
      };

      virtual bool empty() const override { return this->light_ == nullptr
        && this->nuclear_ == nullptr && this->renewing_ == nullptr && this->urban_ == nullptr && this->water_ == nullptr && this->wind_ == nullptr
        && this->zero_ == nullptr; };
      // light Field Functions 
      bool hasLight() const { return this->light_ != nullptr;};
      void deleteLight() { this->light_ = nullptr;};
      inline const vector<Data::Light> & getLight() const { DARABONBA_PTR_GET_CONST(light_, vector<Data::Light>) };
      inline vector<Data::Light> getLight() { DARABONBA_PTR_GET(light_, vector<Data::Light>) };
      inline Data& setLight(const vector<Data::Light> & light) { DARABONBA_PTR_SET_VALUE(light_, light) };
      inline Data& setLight(vector<Data::Light> && light) { DARABONBA_PTR_SET_RVALUE(light_, light) };


      // nuclear Field Functions 
      bool hasNuclear() const { return this->nuclear_ != nullptr;};
      void deleteNuclear() { this->nuclear_ = nullptr;};
      inline const vector<Data::Nuclear> & getNuclear() const { DARABONBA_PTR_GET_CONST(nuclear_, vector<Data::Nuclear>) };
      inline vector<Data::Nuclear> getNuclear() { DARABONBA_PTR_GET(nuclear_, vector<Data::Nuclear>) };
      inline Data& setNuclear(const vector<Data::Nuclear> & nuclear) { DARABONBA_PTR_SET_VALUE(nuclear_, nuclear) };
      inline Data& setNuclear(vector<Data::Nuclear> && nuclear) { DARABONBA_PTR_SET_RVALUE(nuclear_, nuclear) };


      // renewing Field Functions 
      bool hasRenewing() const { return this->renewing_ != nullptr;};
      void deleteRenewing() { this->renewing_ = nullptr;};
      inline const vector<Data::Renewing> & getRenewing() const { DARABONBA_PTR_GET_CONST(renewing_, vector<Data::Renewing>) };
      inline vector<Data::Renewing> getRenewing() { DARABONBA_PTR_GET(renewing_, vector<Data::Renewing>) };
      inline Data& setRenewing(const vector<Data::Renewing> & renewing) { DARABONBA_PTR_SET_VALUE(renewing_, renewing) };
      inline Data& setRenewing(vector<Data::Renewing> && renewing) { DARABONBA_PTR_SET_RVALUE(renewing_, renewing) };


      // urban Field Functions 
      bool hasUrban() const { return this->urban_ != nullptr;};
      void deleteUrban() { this->urban_ = nullptr;};
      inline const vector<Data::Urban> & getUrban() const { DARABONBA_PTR_GET_CONST(urban_, vector<Data::Urban>) };
      inline vector<Data::Urban> getUrban() { DARABONBA_PTR_GET(urban_, vector<Data::Urban>) };
      inline Data& setUrban(const vector<Data::Urban> & urban) { DARABONBA_PTR_SET_VALUE(urban_, urban) };
      inline Data& setUrban(vector<Data::Urban> && urban) { DARABONBA_PTR_SET_RVALUE(urban_, urban) };


      // water Field Functions 
      bool hasWater() const { return this->water_ != nullptr;};
      void deleteWater() { this->water_ = nullptr;};
      inline const vector<Data::Water> & getWater() const { DARABONBA_PTR_GET_CONST(water_, vector<Data::Water>) };
      inline vector<Data::Water> getWater() { DARABONBA_PTR_GET(water_, vector<Data::Water>) };
      inline Data& setWater(const vector<Data::Water> & water) { DARABONBA_PTR_SET_VALUE(water_, water) };
      inline Data& setWater(vector<Data::Water> && water) { DARABONBA_PTR_SET_RVALUE(water_, water) };


      // wind Field Functions 
      bool hasWind() const { return this->wind_ != nullptr;};
      void deleteWind() { this->wind_ = nullptr;};
      inline const vector<Data::Wind> & getWind() const { DARABONBA_PTR_GET_CONST(wind_, vector<Data::Wind>) };
      inline vector<Data::Wind> getWind() { DARABONBA_PTR_GET(wind_, vector<Data::Wind>) };
      inline Data& setWind(const vector<Data::Wind> & wind) { DARABONBA_PTR_SET_VALUE(wind_, wind) };
      inline Data& setWind(vector<Data::Wind> && wind) { DARABONBA_PTR_SET_RVALUE(wind_, wind) };


      // zero Field Functions 
      bool hasZero() const { return this->zero_ != nullptr;};
      void deleteZero() { this->zero_ = nullptr;};
      inline const vector<Data::Zero> & getZero() const { DARABONBA_PTR_GET_CONST(zero_, vector<Data::Zero>) };
      inline vector<Data::Zero> getZero() { DARABONBA_PTR_GET(zero_, vector<Data::Zero>) };
      inline Data& setZero(const vector<Data::Zero> & zero) { DARABONBA_PTR_SET_VALUE(zero_, zero) };
      inline Data& setZero(vector<Data::Zero> && zero) { DARABONBA_PTR_SET_RVALUE(zero_, zero) };


    protected:
      // Photoelectricity monthly electricity consumption and carbon emissions and other data.
      shared_ptr<vector<Data::Light>> light_ {};
      // Monthly electricity consumption and carbon emissions data for nuclear power
      shared_ptr<vector<Data::Nuclear>> nuclear_ {};
      // Monthly data on renewable electricity consumption and carbon emissions
      shared_ptr<vector<Data::Renewing>> renewing_ {};
      // Data such as monthly electricity consumption and carbon emissions from the mains.
      shared_ptr<vector<Data::Urban>> urban_ {};
      // Monthly data on electricity consumption and carbon emissions for hydropower.
      shared_ptr<vector<Data::Water>> water_ {};
      // Monthly wind power consumption and carbon emission data
      shared_ptr<vector<Data::Wind>> wind_ {};
      // Zero electricity monthly electricity consumption and carbon emissions and other data.
      shared_ptr<vector<Data::Zero>> zero_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetElecTrendResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetElecTrendResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetElecTrendResponseBody::Data) };
    inline GetElecTrendResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetElecTrendResponseBody::Data) };
    inline GetElecTrendResponseBody& setData(const GetElecTrendResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetElecTrendResponseBody& setData(GetElecTrendResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetElecTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The code returned for the request. A value of Success indicates that the request was successful. Other values indicate that the request failed. You can troubleshoot the error by viewing the error message returned.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetElecTrendResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
