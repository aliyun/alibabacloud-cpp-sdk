// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
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
    virtual bool empty() const override { this->localName_ != nullptr
        && this->zoneId_ != nullptr && this->zoneType_ != nullptr; };
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


    // zoneType Field Functions 
    bool hasZoneType() const { return this->zoneType_ != nullptr;};
    void deleteZoneType() { this->zoneType_ = nullptr;};
    inline string zoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
    inline DescribeZonesResponseBodyZonesZone& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


  protected:
    // The zone name.
    std::shared_ptr<string> localName_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The zone type. Default value: **AvailabilityZone**.
    std::shared_ptr<string> zoneType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
