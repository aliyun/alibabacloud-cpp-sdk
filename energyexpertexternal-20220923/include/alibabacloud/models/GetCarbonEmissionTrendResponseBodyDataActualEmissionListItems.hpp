// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODYDATAACTUALEMISSIONLISTITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODYDATAACTUALEMISSIONLISTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(month, month_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(month, month_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems() = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems(const GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems &) = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems(GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems &&) = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems() = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems& operator=(const GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems &) = default ;
    GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems& operator=(GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->carbonEmissionData_ != nullptr
        && this->month_ != nullptr && this->year_ != nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline int32_t month() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
    inline GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline string year() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
    inline GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // Carbon emissions.
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    // The month.
    std::shared_ptr<int32_t> month_ = nullptr;
    // The year.
    std::shared_ptr<string> year_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
