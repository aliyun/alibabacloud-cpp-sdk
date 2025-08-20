// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOWERFORECASTBYFILEURLJOBREQUESTLOCATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOWERFORECASTBYFILEURLJOBREQUESTLOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreatePowerForecastByFileUrlJobRequestLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePowerForecastByFileUrlJobRequestLocation& obj) { 
      DARABONBA_PTR_TO_JSON(Altitude, altitude_);
      DARABONBA_PTR_TO_JSON(Latitude, latitude_);
      DARABONBA_PTR_TO_JSON(Longitude, longitude_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePowerForecastByFileUrlJobRequestLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(Altitude, altitude_);
      DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
      DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
    };
    CreatePowerForecastByFileUrlJobRequestLocation() = default ;
    CreatePowerForecastByFileUrlJobRequestLocation(const CreatePowerForecastByFileUrlJobRequestLocation &) = default ;
    CreatePowerForecastByFileUrlJobRequestLocation(CreatePowerForecastByFileUrlJobRequestLocation &&) = default ;
    CreatePowerForecastByFileUrlJobRequestLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePowerForecastByFileUrlJobRequestLocation() = default ;
    CreatePowerForecastByFileUrlJobRequestLocation& operator=(const CreatePowerForecastByFileUrlJobRequestLocation &) = default ;
    CreatePowerForecastByFileUrlJobRequestLocation& operator=(CreatePowerForecastByFileUrlJobRequestLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->altitude_ != nullptr
        && this->latitude_ != nullptr && this->longitude_ != nullptr; };
    // altitude Field Functions 
    bool hasAltitude() const { return this->altitude_ != nullptr;};
    void deleteAltitude() { this->altitude_ = nullptr;};
    inline double altitude() const { DARABONBA_PTR_GET_DEFAULT(altitude_, 0.0) };
    inline CreatePowerForecastByFileUrlJobRequestLocation& setAltitude(double altitude) { DARABONBA_PTR_SET_VALUE(altitude_, altitude) };


    // latitude Field Functions 
    bool hasLatitude() const { return this->latitude_ != nullptr;};
    void deleteLatitude() { this->latitude_ = nullptr;};
    inline double latitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, 0.0) };
    inline CreatePowerForecastByFileUrlJobRequestLocation& setLatitude(double latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


    // longitude Field Functions 
    bool hasLongitude() const { return this->longitude_ != nullptr;};
    void deleteLongitude() { this->longitude_ = nullptr;};
    inline double longitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, 0.0) };
    inline CreatePowerForecastByFileUrlJobRequestLocation& setLongitude(double longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


  protected:
    std::shared_ptr<double> altitude_ = nullptr;
    std::shared_ptr<double> latitude_ = nullptr;
    std::shared_ptr<double> longitude_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
