// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIRPORTSEARCHRESPONSEBODYMODULECITIES_HPP_
#define ALIBABACLOUD_MODELS_AIRPORTSEARCHRESPONSEBODYMODULECITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AirportSearchResponseBodyModuleCities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AirportSearchResponseBodyModuleCities& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(distance, distance_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(travel_name, travelName_);
    };
    friend void from_json(const Darabonba::Json& j, AirportSearchResponseBodyModuleCities& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(distance, distance_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(travel_name, travelName_);
    };
    AirportSearchResponseBodyModuleCities() = default ;
    AirportSearchResponseBodyModuleCities(const AirportSearchResponseBodyModuleCities &) = default ;
    AirportSearchResponseBodyModuleCities(AirportSearchResponseBodyModuleCities &&) = default ;
    AirportSearchResponseBodyModuleCities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AirportSearchResponseBodyModuleCities() = default ;
    AirportSearchResponseBodyModuleCities& operator=(const AirportSearchResponseBodyModuleCities &) = default ;
    AirportSearchResponseBodyModuleCities& operator=(AirportSearchResponseBodyModuleCities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->distance_ != nullptr && this->name_ != nullptr && this->travelName_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AirportSearchResponseBodyModuleCities& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // distance Field Functions 
    bool hasDistance() const { return this->distance_ != nullptr;};
    void deleteDistance() { this->distance_ = nullptr;};
    inline int32_t distance() const { DARABONBA_PTR_GET_DEFAULT(distance_, 0) };
    inline AirportSearchResponseBodyModuleCities& setDistance(int32_t distance) { DARABONBA_PTR_SET_VALUE(distance_, distance) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AirportSearchResponseBodyModuleCities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // travelName Field Functions 
    bool hasTravelName() const { return this->travelName_ != nullptr;};
    void deleteTravelName() { this->travelName_ = nullptr;};
    inline string travelName() const { DARABONBA_PTR_GET_DEFAULT(travelName_, "") };
    inline AirportSearchResponseBodyModuleCities& setTravelName(string travelName) { DARABONBA_PTR_SET_VALUE(travelName_, travelName) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> distance_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> travelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
