// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTRECURSIONZONESRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecursionZonesResponseBodyZonesZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListRecursionZonesResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecursionZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecursionZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    ListRecursionZonesResponseBodyZones() = default ;
    ListRecursionZonesResponseBodyZones(const ListRecursionZonesResponseBodyZones &) = default ;
    ListRecursionZonesResponseBodyZones(ListRecursionZonesResponseBodyZones &&) = default ;
    ListRecursionZonesResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecursionZonesResponseBodyZones() = default ;
    ListRecursionZonesResponseBodyZones& operator=(const ListRecursionZonesResponseBodyZones &) = default ;
    ListRecursionZonesResponseBodyZones& operator=(ListRecursionZonesResponseBodyZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zone_ == nullptr; };
    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline const vector<Models::ListRecursionZonesResponseBodyZonesZone> & zone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Models::ListRecursionZonesResponseBodyZonesZone>) };
    inline vector<Models::ListRecursionZonesResponseBodyZonesZone> zone() { DARABONBA_PTR_GET(zone_, vector<Models::ListRecursionZonesResponseBodyZonesZone>) };
    inline ListRecursionZonesResponseBodyZones& setZone(const vector<Models::ListRecursionZonesResponseBodyZonesZone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
    inline ListRecursionZonesResponseBodyZones& setZone(vector<Models::ListRecursionZonesResponseBodyZonesZone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


  protected:
    std::shared_ptr<vector<Models::ListRecursionZonesResponseBodyZonesZone>> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
