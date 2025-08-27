// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CITYSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CITYSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CitySearchResponseBodyModuleCities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CitySearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CitySearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(cities, cities_);
    };
    friend void from_json(const Darabonba::Json& j, CitySearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(cities, cities_);
    };
    CitySearchResponseBodyModule() = default ;
    CitySearchResponseBodyModule(const CitySearchResponseBodyModule &) = default ;
    CitySearchResponseBodyModule(CitySearchResponseBodyModule &&) = default ;
    CitySearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CitySearchResponseBodyModule() = default ;
    CitySearchResponseBodyModule& operator=(const CitySearchResponseBodyModule &) = default ;
    CitySearchResponseBodyModule& operator=(CitySearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cities_ != nullptr; };
    // cities Field Functions 
    bool hasCities() const { return this->cities_ != nullptr;};
    void deleteCities() { this->cities_ = nullptr;};
    inline const vector<Models::CitySearchResponseBodyModuleCities> & cities() const { DARABONBA_PTR_GET_CONST(cities_, vector<Models::CitySearchResponseBodyModuleCities>) };
    inline vector<Models::CitySearchResponseBodyModuleCities> cities() { DARABONBA_PTR_GET(cities_, vector<Models::CitySearchResponseBodyModuleCities>) };
    inline CitySearchResponseBodyModule& setCities(const vector<Models::CitySearchResponseBodyModuleCities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
    inline CitySearchResponseBodyModule& setCities(vector<Models::CitySearchResponseBodyModuleCities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


  protected:
    std::shared_ptr<vector<Models::CitySearchResponseBodyModuleCities>> cities_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
