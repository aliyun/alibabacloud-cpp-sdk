// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAREAELECCONSTITUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAREAELECCONSTITUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarbonEmissionElecSummaryItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetAreaElecConstituteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAreaElecConstituteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(light, light_);
      DARABONBA_PTR_TO_JSON(nuclear, nuclear_);
      DARABONBA_PTR_TO_JSON(renewing, renewing_);
      DARABONBA_PTR_TO_JSON(urban, urban_);
      DARABONBA_PTR_TO_JSON(water, water_);
      DARABONBA_PTR_TO_JSON(wind, wind_);
      DARABONBA_PTR_TO_JSON(zero, zero_);
    };
    friend void from_json(const Darabonba::Json& j, GetAreaElecConstituteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(light, light_);
      DARABONBA_PTR_FROM_JSON(nuclear, nuclear_);
      DARABONBA_PTR_FROM_JSON(renewing, renewing_);
      DARABONBA_PTR_FROM_JSON(urban, urban_);
      DARABONBA_PTR_FROM_JSON(water, water_);
      DARABONBA_PTR_FROM_JSON(wind, wind_);
      DARABONBA_PTR_FROM_JSON(zero, zero_);
    };
    GetAreaElecConstituteResponseBodyData() = default ;
    GetAreaElecConstituteResponseBodyData(const GetAreaElecConstituteResponseBodyData &) = default ;
    GetAreaElecConstituteResponseBodyData(GetAreaElecConstituteResponseBodyData &&) = default ;
    GetAreaElecConstituteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAreaElecConstituteResponseBodyData() = default ;
    GetAreaElecConstituteResponseBodyData& operator=(const GetAreaElecConstituteResponseBodyData &) = default ;
    GetAreaElecConstituteResponseBodyData& operator=(GetAreaElecConstituteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->light_ != nullptr
        && this->nuclear_ != nullptr && this->renewing_ != nullptr && this->urban_ != nullptr && this->water_ != nullptr && this->wind_ != nullptr
        && this->zero_ != nullptr; };
    // light Field Functions 
    bool hasLight() const { return this->light_ != nullptr;};
    void deleteLight() { this->light_ = nullptr;};
    inline const vector<Models::CarbonEmissionElecSummaryItem> & light() const { DARABONBA_PTR_GET_CONST(light_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline vector<Models::CarbonEmissionElecSummaryItem> light() { DARABONBA_PTR_GET(light_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline GetAreaElecConstituteResponseBodyData& setLight(const vector<Models::CarbonEmissionElecSummaryItem> & light) { DARABONBA_PTR_SET_VALUE(light_, light) };
    inline GetAreaElecConstituteResponseBodyData& setLight(vector<Models::CarbonEmissionElecSummaryItem> && light) { DARABONBA_PTR_SET_RVALUE(light_, light) };


    // nuclear Field Functions 
    bool hasNuclear() const { return this->nuclear_ != nullptr;};
    void deleteNuclear() { this->nuclear_ = nullptr;};
    inline const vector<Models::CarbonEmissionElecSummaryItem> & nuclear() const { DARABONBA_PTR_GET_CONST(nuclear_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline vector<Models::CarbonEmissionElecSummaryItem> nuclear() { DARABONBA_PTR_GET(nuclear_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline GetAreaElecConstituteResponseBodyData& setNuclear(const vector<Models::CarbonEmissionElecSummaryItem> & nuclear) { DARABONBA_PTR_SET_VALUE(nuclear_, nuclear) };
    inline GetAreaElecConstituteResponseBodyData& setNuclear(vector<Models::CarbonEmissionElecSummaryItem> && nuclear) { DARABONBA_PTR_SET_RVALUE(nuclear_, nuclear) };


    // renewing Field Functions 
    bool hasRenewing() const { return this->renewing_ != nullptr;};
    void deleteRenewing() { this->renewing_ = nullptr;};
    inline const vector<Models::CarbonEmissionElecSummaryItem> & renewing() const { DARABONBA_PTR_GET_CONST(renewing_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline vector<Models::CarbonEmissionElecSummaryItem> renewing() { DARABONBA_PTR_GET(renewing_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline GetAreaElecConstituteResponseBodyData& setRenewing(const vector<Models::CarbonEmissionElecSummaryItem> & renewing) { DARABONBA_PTR_SET_VALUE(renewing_, renewing) };
    inline GetAreaElecConstituteResponseBodyData& setRenewing(vector<Models::CarbonEmissionElecSummaryItem> && renewing) { DARABONBA_PTR_SET_RVALUE(renewing_, renewing) };


    // urban Field Functions 
    bool hasUrban() const { return this->urban_ != nullptr;};
    void deleteUrban() { this->urban_ = nullptr;};
    inline const vector<Models::CarbonEmissionElecSummaryItem> & urban() const { DARABONBA_PTR_GET_CONST(urban_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline vector<Models::CarbonEmissionElecSummaryItem> urban() { DARABONBA_PTR_GET(urban_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline GetAreaElecConstituteResponseBodyData& setUrban(const vector<Models::CarbonEmissionElecSummaryItem> & urban) { DARABONBA_PTR_SET_VALUE(urban_, urban) };
    inline GetAreaElecConstituteResponseBodyData& setUrban(vector<Models::CarbonEmissionElecSummaryItem> && urban) { DARABONBA_PTR_SET_RVALUE(urban_, urban) };


    // water Field Functions 
    bool hasWater() const { return this->water_ != nullptr;};
    void deleteWater() { this->water_ = nullptr;};
    inline const vector<Models::CarbonEmissionElecSummaryItem> & water() const { DARABONBA_PTR_GET_CONST(water_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline vector<Models::CarbonEmissionElecSummaryItem> water() { DARABONBA_PTR_GET(water_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline GetAreaElecConstituteResponseBodyData& setWater(const vector<Models::CarbonEmissionElecSummaryItem> & water) { DARABONBA_PTR_SET_VALUE(water_, water) };
    inline GetAreaElecConstituteResponseBodyData& setWater(vector<Models::CarbonEmissionElecSummaryItem> && water) { DARABONBA_PTR_SET_RVALUE(water_, water) };


    // wind Field Functions 
    bool hasWind() const { return this->wind_ != nullptr;};
    void deleteWind() { this->wind_ = nullptr;};
    inline const vector<Models::CarbonEmissionElecSummaryItem> & wind() const { DARABONBA_PTR_GET_CONST(wind_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline vector<Models::CarbonEmissionElecSummaryItem> wind() { DARABONBA_PTR_GET(wind_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline GetAreaElecConstituteResponseBodyData& setWind(const vector<Models::CarbonEmissionElecSummaryItem> & wind) { DARABONBA_PTR_SET_VALUE(wind_, wind) };
    inline GetAreaElecConstituteResponseBodyData& setWind(vector<Models::CarbonEmissionElecSummaryItem> && wind) { DARABONBA_PTR_SET_RVALUE(wind_, wind) };


    // zero Field Functions 
    bool hasZero() const { return this->zero_ != nullptr;};
    void deleteZero() { this->zero_ = nullptr;};
    inline const vector<Models::CarbonEmissionElecSummaryItem> & zero() const { DARABONBA_PTR_GET_CONST(zero_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline vector<Models::CarbonEmissionElecSummaryItem> zero() { DARABONBA_PTR_GET(zero_, vector<Models::CarbonEmissionElecSummaryItem>) };
    inline GetAreaElecConstituteResponseBodyData& setZero(const vector<Models::CarbonEmissionElecSummaryItem> & zero) { DARABONBA_PTR_SET_VALUE(zero_, zero) };
    inline GetAreaElecConstituteResponseBodyData& setZero(vector<Models::CarbonEmissionElecSummaryItem> && zero) { DARABONBA_PTR_SET_RVALUE(zero_, zero) };


  protected:
    // Photoelectric power consumption and carbon emission data of each enterprise.
    std::shared_ptr<vector<Models::CarbonEmissionElecSummaryItem>> light_ = nullptr;
    // Data on nuclear power consumption and carbon emissions at each enterprise.
    std::shared_ptr<vector<Models::CarbonEmissionElecSummaryItem>> nuclear_ = nullptr;
    // Data on renewable electricity consumption and carbon emissions at each enterprise.
    std::shared_ptr<vector<Models::CarbonEmissionElecSummaryItem>> renewing_ = nullptr;
    // Data on mains electricity consumption and carbon emission of each enterprise.
    std::shared_ptr<vector<Models::CarbonEmissionElecSummaryItem>> urban_ = nullptr;
    // Hydropower consumption and carbon emission data of each enterprise.
    std::shared_ptr<vector<Models::CarbonEmissionElecSummaryItem>> water_ = nullptr;
    // Wind power consumption and carbon emission data of each enterprise.
    std::shared_ptr<vector<Models::CarbonEmissionElecSummaryItem>> wind_ = nullptr;
    // Data of zero electricity consumption and carbon emission of each enterprise.
    std::shared_ptr<vector<Models::CarbonEmissionElecSummaryItem>> zero_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
