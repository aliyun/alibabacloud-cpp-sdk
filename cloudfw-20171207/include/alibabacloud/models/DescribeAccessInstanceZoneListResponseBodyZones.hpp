// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEZONELISTRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEZONELISTRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceZoneListResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceZoneListResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceZoneListResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAccessInstanceZoneListResponseBodyZones() = default ;
    DescribeAccessInstanceZoneListResponseBodyZones(const DescribeAccessInstanceZoneListResponseBodyZones &) = default ;
    DescribeAccessInstanceZoneListResponseBodyZones(DescribeAccessInstanceZoneListResponseBodyZones &&) = default ;
    DescribeAccessInstanceZoneListResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceZoneListResponseBodyZones() = default ;
    DescribeAccessInstanceZoneListResponseBodyZones& operator=(const DescribeAccessInstanceZoneListResponseBodyZones &) = default ;
    DescribeAccessInstanceZoneListResponseBodyZones& operator=(DescribeAccessInstanceZoneListResponseBodyZones &&) = default ;
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
    inline DescribeAccessInstanceZoneListResponseBodyZones& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAccessInstanceZoneListResponseBodyZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> localName_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
