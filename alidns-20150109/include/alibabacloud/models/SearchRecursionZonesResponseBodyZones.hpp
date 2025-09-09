// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchRecursionZonesResponseBodyZonesZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchRecursionZonesResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    SearchRecursionZonesResponseBodyZones() = default ;
    SearchRecursionZonesResponseBodyZones(const SearchRecursionZonesResponseBodyZones &) = default ;
    SearchRecursionZonesResponseBodyZones(SearchRecursionZonesResponseBodyZones &&) = default ;
    SearchRecursionZonesResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionZonesResponseBodyZones() = default ;
    SearchRecursionZonesResponseBodyZones& operator=(const SearchRecursionZonesResponseBodyZones &) = default ;
    SearchRecursionZonesResponseBodyZones& operator=(SearchRecursionZonesResponseBodyZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->zone_ != nullptr; };
    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline const vector<Models::SearchRecursionZonesResponseBodyZonesZone> & zone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Models::SearchRecursionZonesResponseBodyZonesZone>) };
    inline vector<Models::SearchRecursionZonesResponseBodyZonesZone> zone() { DARABONBA_PTR_GET(zone_, vector<Models::SearchRecursionZonesResponseBodyZonesZone>) };
    inline SearchRecursionZonesResponseBodyZones& setZone(const vector<Models::SearchRecursionZonesResponseBodyZonesZone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
    inline SearchRecursionZonesResponseBodyZones& setZone(vector<Models::SearchRecursionZonesResponseBodyZonesZone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


  protected:
    std::shared_ptr<vector<Models::SearchRecursionZonesResponseBodyZonesZone>> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
