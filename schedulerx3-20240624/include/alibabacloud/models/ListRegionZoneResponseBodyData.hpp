// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONZONERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONZONERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListRegionZoneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionZoneResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionZoneResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListRegionZoneResponseBodyData() = default ;
    ListRegionZoneResponseBodyData(const ListRegionZoneResponseBodyData &) = default ;
    ListRegionZoneResponseBodyData(ListRegionZoneResponseBodyData &&) = default ;
    ListRegionZoneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionZoneResponseBodyData() = default ;
    ListRegionZoneResponseBodyData& operator=(const ListRegionZoneResponseBodyData &) = default ;
    ListRegionZoneResponseBodyData& operator=(ListRegionZoneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->zoneId_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline ListRegionZoneResponseBodyData& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListRegionZoneResponseBodyData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> localName_ = nullptr;
    // zone id
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
