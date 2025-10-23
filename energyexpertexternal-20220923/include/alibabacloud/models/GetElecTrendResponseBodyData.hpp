// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELECTRENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETELECTRENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetElecTrendResponseBodyDataLight.hpp>
#include <alibabacloud/models/GetElecTrendResponseBodyDataNuclear.hpp>
#include <alibabacloud/models/GetElecTrendResponseBodyDataRenewing.hpp>
#include <alibabacloud/models/GetElecTrendResponseBodyDataUrban.hpp>
#include <alibabacloud/models/GetElecTrendResponseBodyDataWater.hpp>
#include <alibabacloud/models/GetElecTrendResponseBodyDataWind.hpp>
#include <alibabacloud/models/GetElecTrendResponseBodyDataZero.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetElecTrendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElecTrendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(light, light_);
      DARABONBA_PTR_TO_JSON(nuclear, nuclear_);
      DARABONBA_PTR_TO_JSON(renewing, renewing_);
      DARABONBA_PTR_TO_JSON(urban, urban_);
      DARABONBA_PTR_TO_JSON(water, water_);
      DARABONBA_PTR_TO_JSON(wind, wind_);
      DARABONBA_PTR_TO_JSON(zero, zero_);
    };
    friend void from_json(const Darabonba::Json& j, GetElecTrendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(light, light_);
      DARABONBA_PTR_FROM_JSON(nuclear, nuclear_);
      DARABONBA_PTR_FROM_JSON(renewing, renewing_);
      DARABONBA_PTR_FROM_JSON(urban, urban_);
      DARABONBA_PTR_FROM_JSON(water, water_);
      DARABONBA_PTR_FROM_JSON(wind, wind_);
      DARABONBA_PTR_FROM_JSON(zero, zero_);
    };
    GetElecTrendResponseBodyData() = default ;
    GetElecTrendResponseBodyData(const GetElecTrendResponseBodyData &) = default ;
    GetElecTrendResponseBodyData(GetElecTrendResponseBodyData &&) = default ;
    GetElecTrendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElecTrendResponseBodyData() = default ;
    GetElecTrendResponseBodyData& operator=(const GetElecTrendResponseBodyData &) = default ;
    GetElecTrendResponseBodyData& operator=(GetElecTrendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->light_ == nullptr
        && return this->nuclear_ == nullptr && return this->renewing_ == nullptr && return this->urban_ == nullptr && return this->water_ == nullptr && return this->wind_ == nullptr
        && return this->zero_ == nullptr; };
    // light Field Functions 
    bool hasLight() const { return this->light_ != nullptr;};
    void deleteLight() { this->light_ = nullptr;};
    inline const vector<Models::GetElecTrendResponseBodyDataLight> & light() const { DARABONBA_PTR_GET_CONST(light_, vector<Models::GetElecTrendResponseBodyDataLight>) };
    inline vector<Models::GetElecTrendResponseBodyDataLight> light() { DARABONBA_PTR_GET(light_, vector<Models::GetElecTrendResponseBodyDataLight>) };
    inline GetElecTrendResponseBodyData& setLight(const vector<Models::GetElecTrendResponseBodyDataLight> & light) { DARABONBA_PTR_SET_VALUE(light_, light) };
    inline GetElecTrendResponseBodyData& setLight(vector<Models::GetElecTrendResponseBodyDataLight> && light) { DARABONBA_PTR_SET_RVALUE(light_, light) };


    // nuclear Field Functions 
    bool hasNuclear() const { return this->nuclear_ != nullptr;};
    void deleteNuclear() { this->nuclear_ = nullptr;};
    inline const vector<Models::GetElecTrendResponseBodyDataNuclear> & nuclear() const { DARABONBA_PTR_GET_CONST(nuclear_, vector<Models::GetElecTrendResponseBodyDataNuclear>) };
    inline vector<Models::GetElecTrendResponseBodyDataNuclear> nuclear() { DARABONBA_PTR_GET(nuclear_, vector<Models::GetElecTrendResponseBodyDataNuclear>) };
    inline GetElecTrendResponseBodyData& setNuclear(const vector<Models::GetElecTrendResponseBodyDataNuclear> & nuclear) { DARABONBA_PTR_SET_VALUE(nuclear_, nuclear) };
    inline GetElecTrendResponseBodyData& setNuclear(vector<Models::GetElecTrendResponseBodyDataNuclear> && nuclear) { DARABONBA_PTR_SET_RVALUE(nuclear_, nuclear) };


    // renewing Field Functions 
    bool hasRenewing() const { return this->renewing_ != nullptr;};
    void deleteRenewing() { this->renewing_ = nullptr;};
    inline const vector<Models::GetElecTrendResponseBodyDataRenewing> & renewing() const { DARABONBA_PTR_GET_CONST(renewing_, vector<Models::GetElecTrendResponseBodyDataRenewing>) };
    inline vector<Models::GetElecTrendResponseBodyDataRenewing> renewing() { DARABONBA_PTR_GET(renewing_, vector<Models::GetElecTrendResponseBodyDataRenewing>) };
    inline GetElecTrendResponseBodyData& setRenewing(const vector<Models::GetElecTrendResponseBodyDataRenewing> & renewing) { DARABONBA_PTR_SET_VALUE(renewing_, renewing) };
    inline GetElecTrendResponseBodyData& setRenewing(vector<Models::GetElecTrendResponseBodyDataRenewing> && renewing) { DARABONBA_PTR_SET_RVALUE(renewing_, renewing) };


    // urban Field Functions 
    bool hasUrban() const { return this->urban_ != nullptr;};
    void deleteUrban() { this->urban_ = nullptr;};
    inline const vector<Models::GetElecTrendResponseBodyDataUrban> & urban() const { DARABONBA_PTR_GET_CONST(urban_, vector<Models::GetElecTrendResponseBodyDataUrban>) };
    inline vector<Models::GetElecTrendResponseBodyDataUrban> urban() { DARABONBA_PTR_GET(urban_, vector<Models::GetElecTrendResponseBodyDataUrban>) };
    inline GetElecTrendResponseBodyData& setUrban(const vector<Models::GetElecTrendResponseBodyDataUrban> & urban) { DARABONBA_PTR_SET_VALUE(urban_, urban) };
    inline GetElecTrendResponseBodyData& setUrban(vector<Models::GetElecTrendResponseBodyDataUrban> && urban) { DARABONBA_PTR_SET_RVALUE(urban_, urban) };


    // water Field Functions 
    bool hasWater() const { return this->water_ != nullptr;};
    void deleteWater() { this->water_ = nullptr;};
    inline const vector<Models::GetElecTrendResponseBodyDataWater> & water() const { DARABONBA_PTR_GET_CONST(water_, vector<Models::GetElecTrendResponseBodyDataWater>) };
    inline vector<Models::GetElecTrendResponseBodyDataWater> water() { DARABONBA_PTR_GET(water_, vector<Models::GetElecTrendResponseBodyDataWater>) };
    inline GetElecTrendResponseBodyData& setWater(const vector<Models::GetElecTrendResponseBodyDataWater> & water) { DARABONBA_PTR_SET_VALUE(water_, water) };
    inline GetElecTrendResponseBodyData& setWater(vector<Models::GetElecTrendResponseBodyDataWater> && water) { DARABONBA_PTR_SET_RVALUE(water_, water) };


    // wind Field Functions 
    bool hasWind() const { return this->wind_ != nullptr;};
    void deleteWind() { this->wind_ = nullptr;};
    inline const vector<Models::GetElecTrendResponseBodyDataWind> & wind() const { DARABONBA_PTR_GET_CONST(wind_, vector<Models::GetElecTrendResponseBodyDataWind>) };
    inline vector<Models::GetElecTrendResponseBodyDataWind> wind() { DARABONBA_PTR_GET(wind_, vector<Models::GetElecTrendResponseBodyDataWind>) };
    inline GetElecTrendResponseBodyData& setWind(const vector<Models::GetElecTrendResponseBodyDataWind> & wind) { DARABONBA_PTR_SET_VALUE(wind_, wind) };
    inline GetElecTrendResponseBodyData& setWind(vector<Models::GetElecTrendResponseBodyDataWind> && wind) { DARABONBA_PTR_SET_RVALUE(wind_, wind) };


    // zero Field Functions 
    bool hasZero() const { return this->zero_ != nullptr;};
    void deleteZero() { this->zero_ = nullptr;};
    inline const vector<Models::GetElecTrendResponseBodyDataZero> & zero() const { DARABONBA_PTR_GET_CONST(zero_, vector<Models::GetElecTrendResponseBodyDataZero>) };
    inline vector<Models::GetElecTrendResponseBodyDataZero> zero() { DARABONBA_PTR_GET(zero_, vector<Models::GetElecTrendResponseBodyDataZero>) };
    inline GetElecTrendResponseBodyData& setZero(const vector<Models::GetElecTrendResponseBodyDataZero> & zero) { DARABONBA_PTR_SET_VALUE(zero_, zero) };
    inline GetElecTrendResponseBodyData& setZero(vector<Models::GetElecTrendResponseBodyDataZero> && zero) { DARABONBA_PTR_SET_RVALUE(zero_, zero) };


  protected:
    // Photoelectricity monthly electricity consumption and carbon emissions and other data.
    std::shared_ptr<vector<Models::GetElecTrendResponseBodyDataLight>> light_ = nullptr;
    // Monthly electricity consumption and carbon emissions data for nuclear power
    std::shared_ptr<vector<Models::GetElecTrendResponseBodyDataNuclear>> nuclear_ = nullptr;
    // Monthly data on renewable electricity consumption and carbon emissions
    std::shared_ptr<vector<Models::GetElecTrendResponseBodyDataRenewing>> renewing_ = nullptr;
    // Data such as monthly electricity consumption and carbon emissions from the mains.
    std::shared_ptr<vector<Models::GetElecTrendResponseBodyDataUrban>> urban_ = nullptr;
    // Monthly data on electricity consumption and carbon emissions for hydropower.
    std::shared_ptr<vector<Models::GetElecTrendResponseBodyDataWater>> water_ = nullptr;
    // Monthly wind power consumption and carbon emission data
    std::shared_ptr<vector<Models::GetElecTrendResponseBodyDataWind>> wind_ = nullptr;
    // Zero electricity monthly electricity consumption and carbon emissions and other data.
    std::shared_ptr<vector<Models::GetElecTrendResponseBodyDataZero>> zero_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
