// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELECTRENDRESPONSEBODYDATAWIND_HPP_
#define ALIBABACLOUD_MODELS_GETELECTRENDRESPONSEBODYDATAWIND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetElecTrendResponseBodyDataWind : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElecTrendResponseBodyDataWind& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_TO_JSON(month, month_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(rawData, rawData_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, GetElecTrendResponseBodyDataWind& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_FROM_JSON(month, month_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(rawData, rawData_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    GetElecTrendResponseBodyDataWind() = default ;
    GetElecTrendResponseBodyDataWind(const GetElecTrendResponseBodyDataWind &) = default ;
    GetElecTrendResponseBodyDataWind(GetElecTrendResponseBodyDataWind &&) = default ;
    GetElecTrendResponseBodyDataWind(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElecTrendResponseBodyDataWind() = default ;
    GetElecTrendResponseBodyDataWind& operator=(const GetElecTrendResponseBodyDataWind &) = default ;
    GetElecTrendResponseBodyDataWind& operator=(GetElecTrendResponseBodyDataWind &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && return this->dataUnit_ == nullptr && return this->month_ == nullptr && return this->name_ == nullptr && return this->nameKey_ == nullptr && return this->ratio_ == nullptr
        && return this->rawData_ == nullptr && return this->year_ == nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline GetElecTrendResponseBodyDataWind& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // dataUnit Field Functions 
    bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
    void deleteDataUnit() { this->dataUnit_ = nullptr;};
    inline string dataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
    inline GetElecTrendResponseBodyDataWind& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline int32_t month() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
    inline GetElecTrendResponseBodyDataWind& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetElecTrendResponseBodyDataWind& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline GetElecTrendResponseBodyDataWind& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline GetElecTrendResponseBodyDataWind& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // rawData Field Functions 
    bool hasRawData() const { return this->rawData_ != nullptr;};
    void deleteRawData() { this->rawData_ = nullptr;};
    inline double rawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
    inline GetElecTrendResponseBodyDataWind& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline string year() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
    inline GetElecTrendResponseBodyDataWind& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // Carbon emissions
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    // The price unit.
    std::shared_ptr<string> dataUnit_ = nullptr;
    // Month
    std::shared_ptr<int32_t> month_ = nullptr;
    // Power Type Name
    std::shared_ptr<string> name_ = nullptr;
    // Power Type Code
    std::shared_ptr<string> nameKey_ = nullptr;
    // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
    std::shared_ptr<double> ratio_ = nullptr;
    // Electricity consumption
    std::shared_ptr<double> rawData_ = nullptr;
    // Year
    std::shared_ptr<string> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
