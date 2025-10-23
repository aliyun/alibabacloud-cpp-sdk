// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELECCONSTITUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETELECCONSTITUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetElecConstituteResponseBodyDataLight.hpp>
#include <alibabacloud/models/GetElecConstituteResponseBodyDataNuclear.hpp>
#include <alibabacloud/models/GetElecConstituteResponseBodyDataRenewing.hpp>
#include <alibabacloud/models/GetElecConstituteResponseBodyDataUrban.hpp>
#include <alibabacloud/models/GetElecConstituteResponseBodyDataWater.hpp>
#include <alibabacloud/models/GetElecConstituteResponseBodyDataWind.hpp>
#include <alibabacloud/models/GetElecConstituteResponseBodyDataZero.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetElecConstituteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElecConstituteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(light, light_);
      DARABONBA_PTR_TO_JSON(nuclear, nuclear_);
      DARABONBA_PTR_TO_JSON(renewing, renewing_);
      DARABONBA_PTR_TO_JSON(urban, urban_);
      DARABONBA_PTR_TO_JSON(water, water_);
      DARABONBA_PTR_TO_JSON(wind, wind_);
      DARABONBA_PTR_TO_JSON(zero, zero_);
    };
    friend void from_json(const Darabonba::Json& j, GetElecConstituteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(light, light_);
      DARABONBA_PTR_FROM_JSON(nuclear, nuclear_);
      DARABONBA_PTR_FROM_JSON(renewing, renewing_);
      DARABONBA_PTR_FROM_JSON(urban, urban_);
      DARABONBA_PTR_FROM_JSON(water, water_);
      DARABONBA_PTR_FROM_JSON(wind, wind_);
      DARABONBA_PTR_FROM_JSON(zero, zero_);
    };
    GetElecConstituteResponseBodyData() = default ;
    GetElecConstituteResponseBodyData(const GetElecConstituteResponseBodyData &) = default ;
    GetElecConstituteResponseBodyData(GetElecConstituteResponseBodyData &&) = default ;
    GetElecConstituteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElecConstituteResponseBodyData() = default ;
    GetElecConstituteResponseBodyData& operator=(const GetElecConstituteResponseBodyData &) = default ;
    GetElecConstituteResponseBodyData& operator=(GetElecConstituteResponseBodyData &&) = default ;
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
    inline const Models::GetElecConstituteResponseBodyDataLight & light() const { DARABONBA_PTR_GET_CONST(light_, Models::GetElecConstituteResponseBodyDataLight) };
    inline Models::GetElecConstituteResponseBodyDataLight light() { DARABONBA_PTR_GET(light_, Models::GetElecConstituteResponseBodyDataLight) };
    inline GetElecConstituteResponseBodyData& setLight(const Models::GetElecConstituteResponseBodyDataLight & light) { DARABONBA_PTR_SET_VALUE(light_, light) };
    inline GetElecConstituteResponseBodyData& setLight(Models::GetElecConstituteResponseBodyDataLight && light) { DARABONBA_PTR_SET_RVALUE(light_, light) };


    // nuclear Field Functions 
    bool hasNuclear() const { return this->nuclear_ != nullptr;};
    void deleteNuclear() { this->nuclear_ = nullptr;};
    inline const Models::GetElecConstituteResponseBodyDataNuclear & nuclear() const { DARABONBA_PTR_GET_CONST(nuclear_, Models::GetElecConstituteResponseBodyDataNuclear) };
    inline Models::GetElecConstituteResponseBodyDataNuclear nuclear() { DARABONBA_PTR_GET(nuclear_, Models::GetElecConstituteResponseBodyDataNuclear) };
    inline GetElecConstituteResponseBodyData& setNuclear(const Models::GetElecConstituteResponseBodyDataNuclear & nuclear) { DARABONBA_PTR_SET_VALUE(nuclear_, nuclear) };
    inline GetElecConstituteResponseBodyData& setNuclear(Models::GetElecConstituteResponseBodyDataNuclear && nuclear) { DARABONBA_PTR_SET_RVALUE(nuclear_, nuclear) };


    // renewing Field Functions 
    bool hasRenewing() const { return this->renewing_ != nullptr;};
    void deleteRenewing() { this->renewing_ = nullptr;};
    inline const Models::GetElecConstituteResponseBodyDataRenewing & renewing() const { DARABONBA_PTR_GET_CONST(renewing_, Models::GetElecConstituteResponseBodyDataRenewing) };
    inline Models::GetElecConstituteResponseBodyDataRenewing renewing() { DARABONBA_PTR_GET(renewing_, Models::GetElecConstituteResponseBodyDataRenewing) };
    inline GetElecConstituteResponseBodyData& setRenewing(const Models::GetElecConstituteResponseBodyDataRenewing & renewing) { DARABONBA_PTR_SET_VALUE(renewing_, renewing) };
    inline GetElecConstituteResponseBodyData& setRenewing(Models::GetElecConstituteResponseBodyDataRenewing && renewing) { DARABONBA_PTR_SET_RVALUE(renewing_, renewing) };


    // urban Field Functions 
    bool hasUrban() const { return this->urban_ != nullptr;};
    void deleteUrban() { this->urban_ = nullptr;};
    inline const Models::GetElecConstituteResponseBodyDataUrban & urban() const { DARABONBA_PTR_GET_CONST(urban_, Models::GetElecConstituteResponseBodyDataUrban) };
    inline Models::GetElecConstituteResponseBodyDataUrban urban() { DARABONBA_PTR_GET(urban_, Models::GetElecConstituteResponseBodyDataUrban) };
    inline GetElecConstituteResponseBodyData& setUrban(const Models::GetElecConstituteResponseBodyDataUrban & urban) { DARABONBA_PTR_SET_VALUE(urban_, urban) };
    inline GetElecConstituteResponseBodyData& setUrban(Models::GetElecConstituteResponseBodyDataUrban && urban) { DARABONBA_PTR_SET_RVALUE(urban_, urban) };


    // water Field Functions 
    bool hasWater() const { return this->water_ != nullptr;};
    void deleteWater() { this->water_ = nullptr;};
    inline const Models::GetElecConstituteResponseBodyDataWater & water() const { DARABONBA_PTR_GET_CONST(water_, Models::GetElecConstituteResponseBodyDataWater) };
    inline Models::GetElecConstituteResponseBodyDataWater water() { DARABONBA_PTR_GET(water_, Models::GetElecConstituteResponseBodyDataWater) };
    inline GetElecConstituteResponseBodyData& setWater(const Models::GetElecConstituteResponseBodyDataWater & water) { DARABONBA_PTR_SET_VALUE(water_, water) };
    inline GetElecConstituteResponseBodyData& setWater(Models::GetElecConstituteResponseBodyDataWater && water) { DARABONBA_PTR_SET_RVALUE(water_, water) };


    // wind Field Functions 
    bool hasWind() const { return this->wind_ != nullptr;};
    void deleteWind() { this->wind_ = nullptr;};
    inline const Models::GetElecConstituteResponseBodyDataWind & wind() const { DARABONBA_PTR_GET_CONST(wind_, Models::GetElecConstituteResponseBodyDataWind) };
    inline Models::GetElecConstituteResponseBodyDataWind wind() { DARABONBA_PTR_GET(wind_, Models::GetElecConstituteResponseBodyDataWind) };
    inline GetElecConstituteResponseBodyData& setWind(const Models::GetElecConstituteResponseBodyDataWind & wind) { DARABONBA_PTR_SET_VALUE(wind_, wind) };
    inline GetElecConstituteResponseBodyData& setWind(Models::GetElecConstituteResponseBodyDataWind && wind) { DARABONBA_PTR_SET_RVALUE(wind_, wind) };


    // zero Field Functions 
    bool hasZero() const { return this->zero_ != nullptr;};
    void deleteZero() { this->zero_ = nullptr;};
    inline const Models::GetElecConstituteResponseBodyDataZero & zero() const { DARABONBA_PTR_GET_CONST(zero_, Models::GetElecConstituteResponseBodyDataZero) };
    inline Models::GetElecConstituteResponseBodyDataZero zero() { DARABONBA_PTR_GET(zero_, Models::GetElecConstituteResponseBodyDataZero) };
    inline GetElecConstituteResponseBodyData& setZero(const Models::GetElecConstituteResponseBodyDataZero & zero) { DARABONBA_PTR_SET_VALUE(zero_, zero) };
    inline GetElecConstituteResponseBodyData& setZero(Models::GetElecConstituteResponseBodyDataZero && zero) { DARABONBA_PTR_SET_RVALUE(zero_, zero) };


  protected:
    // Photoelectric power consumption and carbon emission data of each enterprise.
    std::shared_ptr<Models::GetElecConstituteResponseBodyDataLight> light_ = nullptr;
    // Data on nuclear power consumption and carbon emissions at each enterprise.
    std::shared_ptr<Models::GetElecConstituteResponseBodyDataNuclear> nuclear_ = nullptr;
    // Data on renewable electricity consumption and carbon emissions at each enterprise.
    std::shared_ptr<Models::GetElecConstituteResponseBodyDataRenewing> renewing_ = nullptr;
    // Data on mains power electricity consumption and carbon emission of each enterprise.
    std::shared_ptr<Models::GetElecConstituteResponseBodyDataUrban> urban_ = nullptr;
    // Hydropower consumption and carbon emission data of each enterprise.
    std::shared_ptr<Models::GetElecConstituteResponseBodyDataWater> water_ = nullptr;
    // Wind power consumption and carbon emission data of each enterprise.
    std::shared_ptr<Models::GetElecConstituteResponseBodyDataWind> wind_ = nullptr;
    // Data of zero electricity consumption and carbon emission of each enterprise.
    std::shared_ptr<Models::GetElecConstituteResponseBodyDataZero> zero_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
