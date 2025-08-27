// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINSTATIONSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINSTATIONSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainStationSearchResponseBodyModuleCities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainStationSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainStationSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(cities, cities_);
    };
    friend void from_json(const Darabonba::Json& j, TrainStationSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(cities, cities_);
    };
    TrainStationSearchResponseBodyModule() = default ;
    TrainStationSearchResponseBodyModule(const TrainStationSearchResponseBodyModule &) = default ;
    TrainStationSearchResponseBodyModule(TrainStationSearchResponseBodyModule &&) = default ;
    TrainStationSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainStationSearchResponseBodyModule() = default ;
    TrainStationSearchResponseBodyModule& operator=(const TrainStationSearchResponseBodyModule &) = default ;
    TrainStationSearchResponseBodyModule& operator=(TrainStationSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cities_ != nullptr; };
    // cities Field Functions 
    bool hasCities() const { return this->cities_ != nullptr;};
    void deleteCities() { this->cities_ = nullptr;};
    inline const vector<Models::TrainStationSearchResponseBodyModuleCities> & cities() const { DARABONBA_PTR_GET_CONST(cities_, vector<Models::TrainStationSearchResponseBodyModuleCities>) };
    inline vector<Models::TrainStationSearchResponseBodyModuleCities> cities() { DARABONBA_PTR_GET(cities_, vector<Models::TrainStationSearchResponseBodyModuleCities>) };
    inline TrainStationSearchResponseBodyModule& setCities(const vector<Models::TrainStationSearchResponseBodyModuleCities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
    inline TrainStationSearchResponseBodyModule& setCities(vector<Models::TrainStationSearchResponseBodyModuleCities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


  protected:
    std::shared_ptr<vector<Models::TrainStationSearchResponseBodyModuleCities>> cities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
