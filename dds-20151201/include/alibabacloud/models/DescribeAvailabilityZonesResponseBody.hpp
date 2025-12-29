// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABILITYZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABILITYZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeAvailabilityZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailabilityZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailabilityZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailabilityZonesResponseBody() = default ;
    DescribeAvailabilityZonesResponseBody(const DescribeAvailabilityZonesResponseBody &) = default ;
    DescribeAvailabilityZonesResponseBody(DescribeAvailabilityZonesResponseBody &&) = default ;
    DescribeAvailabilityZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailabilityZonesResponseBody() = default ;
    DescribeAvailabilityZonesResponseBody& operator=(const DescribeAvailabilityZonesResponseBody &) = default ;
    DescribeAvailabilityZonesResponseBody& operator=(DescribeAvailabilityZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZones& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZones& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
      };
      AvailableZones() = default ;
      AvailableZones(const AvailableZones &) = default ;
      AvailableZones(AvailableZones &&) = default ;
      AvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableZones() = default ;
      AvailableZones& operator=(const AvailableZones &) = default ;
      AvailableZones& operator=(AvailableZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->zoneId_ == nullptr && this->zoneName_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AvailableZones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline AvailableZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // zoneName Field Functions 
      bool hasZoneName() const { return this->zoneName_ != nullptr;};
      void deleteZoneName() { this->zoneName_ = nullptr;};
      inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
      inline AvailableZones& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


    protected:
      // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the latest available regions.
      shared_ptr<string> regionId_ {};
      // The ID of the zone.
      shared_ptr<string> zoneId_ {};
      // The name of the zone.
      // 
      // The return value of the ZoneName parameter is in the language that is specified by the **AcceptLanguage** parameter. For example, if the value of the ZoneId parameter in the response is **cn-hangzhou-h**, the following values are returned for the ZoneName parameter:
      // 
      // *   If the value of the **AcceptLanguage** parameter is **zh**, **H** is returned for the ZoneName parameter.
      // *   If the value of the **AcceptLanguage** parameter is **en**, **Hangzhou Zone H** is returned for the ZoneName parameter.
      shared_ptr<string> zoneName_ {};
    };

    virtual bool empty() const override { return this->availableZones_ == nullptr
        && this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const vector<DescribeAvailabilityZonesResponseBody::AvailableZones> & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, vector<DescribeAvailabilityZonesResponseBody::AvailableZones>) };
    inline vector<DescribeAvailabilityZonesResponseBody::AvailableZones> getAvailableZones() { DARABONBA_PTR_GET(availableZones_, vector<DescribeAvailabilityZonesResponseBody::AvailableZones>) };
    inline DescribeAvailabilityZonesResponseBody& setAvailableZones(const vector<DescribeAvailabilityZonesResponseBody::AvailableZones> & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeAvailabilityZonesResponseBody& setAvailableZones(vector<DescribeAvailabilityZonesResponseBody::AvailableZones> && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailabilityZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the zones in which you can create ApsaraDB for MongoDB instances.
    shared_ptr<vector<DescribeAvailabilityZonesResponseBody::AvailableZones>> availableZones_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
