// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIRPORTSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_AIRPORTSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AirportSearchResponseBodyModuleCities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AirportSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AirportSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(cities, cities_);
      DARABONBA_PTR_TO_JSON(nearby, nearby_);
    };
    friend void from_json(const Darabonba::Json& j, AirportSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(cities, cities_);
      DARABONBA_PTR_FROM_JSON(nearby, nearby_);
    };
    AirportSearchResponseBodyModule() = default ;
    AirportSearchResponseBodyModule(const AirportSearchResponseBodyModule &) = default ;
    AirportSearchResponseBodyModule(AirportSearchResponseBodyModule &&) = default ;
    AirportSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AirportSearchResponseBodyModule() = default ;
    AirportSearchResponseBodyModule& operator=(const AirportSearchResponseBodyModule &) = default ;
    AirportSearchResponseBodyModule& operator=(AirportSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cities_ != nullptr
        && this->nearby_ != nullptr; };
    // cities Field Functions 
    bool hasCities() const { return this->cities_ != nullptr;};
    void deleteCities() { this->cities_ = nullptr;};
    inline const vector<Models::AirportSearchResponseBodyModuleCities> & cities() const { DARABONBA_PTR_GET_CONST(cities_, vector<Models::AirportSearchResponseBodyModuleCities>) };
    inline vector<Models::AirportSearchResponseBodyModuleCities> cities() { DARABONBA_PTR_GET(cities_, vector<Models::AirportSearchResponseBodyModuleCities>) };
    inline AirportSearchResponseBodyModule& setCities(const vector<Models::AirportSearchResponseBodyModuleCities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
    inline AirportSearchResponseBodyModule& setCities(vector<Models::AirportSearchResponseBodyModuleCities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


    // nearby Field Functions 
    bool hasNearby() const { return this->nearby_ != nullptr;};
    void deleteNearby() { this->nearby_ = nullptr;};
    inline bool nearby() const { DARABONBA_PTR_GET_DEFAULT(nearby_, false) };
    inline AirportSearchResponseBodyModule& setNearby(bool nearby) { DARABONBA_PTR_SET_VALUE(nearby_, nearby) };


  protected:
    std::shared_ptr<vector<Models::AirportSearchResponseBodyModuleCities>> cities_ = nullptr;
    std::shared_ptr<bool> nearby_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
