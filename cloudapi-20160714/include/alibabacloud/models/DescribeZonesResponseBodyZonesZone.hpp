// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeZonesResponseBodyZonesZone() = default ;
    DescribeZonesResponseBodyZonesZone(const DescribeZonesResponseBodyZonesZone &) = default ;
    DescribeZonesResponseBodyZonesZone(DescribeZonesResponseBodyZonesZone &&) = default ;
    DescribeZonesResponseBodyZonesZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZone() = default ;
    DescribeZonesResponseBodyZonesZone& operator=(const DescribeZonesResponseBodyZonesZone &) = default ;
    DescribeZonesResponseBodyZonesZone& operator=(DescribeZonesResponseBodyZonesZone &&) = default ;
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
    inline DescribeZonesResponseBodyZonesZone& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeZonesResponseBodyZonesZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The name of the zone.
    std::shared_ptr<string> localName_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
