// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYADDREQUESTTRAVELERSTANDARD_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYADDREQUESTTRAVELERSTANDARD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarApplyAddRequestTravelerStandardCarCitySet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarApplyAddRequestTravelerStandard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyAddRequestTravelerStandard& obj) { 
      DARABONBA_PTR_TO_JSON(car_city_set, carCitySet_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyAddRequestTravelerStandard& obj) { 
      DARABONBA_PTR_FROM_JSON(car_city_set, carCitySet_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CarApplyAddRequestTravelerStandard() = default ;
    CarApplyAddRequestTravelerStandard(const CarApplyAddRequestTravelerStandard &) = default ;
    CarApplyAddRequestTravelerStandard(CarApplyAddRequestTravelerStandard &&) = default ;
    CarApplyAddRequestTravelerStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyAddRequestTravelerStandard() = default ;
    CarApplyAddRequestTravelerStandard& operator=(const CarApplyAddRequestTravelerStandard &) = default ;
    CarApplyAddRequestTravelerStandard& operator=(CarApplyAddRequestTravelerStandard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->carCitySet_ != nullptr
        && this->userId_ != nullptr; };
    // carCitySet Field Functions 
    bool hasCarCitySet() const { return this->carCitySet_ != nullptr;};
    void deleteCarCitySet() { this->carCitySet_ = nullptr;};
    inline const vector<Models::CarApplyAddRequestTravelerStandardCarCitySet> & carCitySet() const { DARABONBA_PTR_GET_CONST(carCitySet_, vector<Models::CarApplyAddRequestTravelerStandardCarCitySet>) };
    inline vector<Models::CarApplyAddRequestTravelerStandardCarCitySet> carCitySet() { DARABONBA_PTR_GET(carCitySet_, vector<Models::CarApplyAddRequestTravelerStandardCarCitySet>) };
    inline CarApplyAddRequestTravelerStandard& setCarCitySet(const vector<Models::CarApplyAddRequestTravelerStandardCarCitySet> & carCitySet) { DARABONBA_PTR_SET_VALUE(carCitySet_, carCitySet) };
    inline CarApplyAddRequestTravelerStandard& setCarCitySet(vector<Models::CarApplyAddRequestTravelerStandardCarCitySet> && carCitySet) { DARABONBA_PTR_SET_RVALUE(carCitySet_, carCitySet) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CarApplyAddRequestTravelerStandard& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::CarApplyAddRequestTravelerStandardCarCitySet>> carCitySet_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
