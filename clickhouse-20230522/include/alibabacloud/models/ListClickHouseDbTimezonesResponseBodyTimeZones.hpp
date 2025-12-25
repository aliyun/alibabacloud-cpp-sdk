// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLICKHOUSEDBTIMEZONESRESPONSEBODYTIMEZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLICKHOUSEDBTIMEZONESRESPONSEBODYTIMEZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ListClickHouseDBTimezonesResponseBodyTimeZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClickHouseDBTimezonesResponseBodyTimeZones& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClickHouseDBTimezonesResponseBodyTimeZones& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListClickHouseDBTimezonesResponseBodyTimeZones() = default ;
    ListClickHouseDBTimezonesResponseBodyTimeZones(const ListClickHouseDBTimezonesResponseBodyTimeZones &) = default ;
    ListClickHouseDBTimezonesResponseBodyTimeZones(ListClickHouseDBTimezonesResponseBodyTimeZones &&) = default ;
    ListClickHouseDBTimezonesResponseBodyTimeZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClickHouseDBTimezonesResponseBodyTimeZones() = default ;
    ListClickHouseDBTimezonesResponseBodyTimeZones& operator=(const ListClickHouseDBTimezonesResponseBodyTimeZones &) = default ;
    ListClickHouseDBTimezonesResponseBodyTimeZones& operator=(ListClickHouseDBTimezonesResponseBodyTimeZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneId_ == nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListClickHouseDBTimezonesResponseBodyTimeZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
