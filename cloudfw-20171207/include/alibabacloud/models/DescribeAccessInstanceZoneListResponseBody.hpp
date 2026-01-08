// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEZONELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEZONELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceZoneListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceZoneListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ZoneList, zoneList_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceZoneListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ZoneList, zoneList_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeAccessInstanceZoneListResponseBody() = default ;
    DescribeAccessInstanceZoneListResponseBody(const DescribeAccessInstanceZoneListResponseBody &) = default ;
    DescribeAccessInstanceZoneListResponseBody(DescribeAccessInstanceZoneListResponseBody &&) = default ;
    DescribeAccessInstanceZoneListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceZoneListResponseBody() = default ;
    DescribeAccessInstanceZoneListResponseBody& operator=(const DescribeAccessInstanceZoneListResponseBody &) = default ;
    DescribeAccessInstanceZoneListResponseBody& operator=(DescribeAccessInstanceZoneListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Zones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zones& obj) { 
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Zones& obj) { 
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Zones() = default ;
      Zones(const Zones &) = default ;
      Zones(Zones &&) = default ;
      Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Zones() = default ;
      Zones& operator=(const Zones &) = default ;
      Zones& operator=(Zones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->localName_ == nullptr
        && this->zoneId_ == nullptr; };
      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Zones& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> localName_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zoneList_ == nullptr && this->zones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessInstanceZoneListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneList Field Functions 
    bool hasZoneList() const { return this->zoneList_ != nullptr;};
    void deleteZoneList() { this->zoneList_ = nullptr;};
    inline const vector<string> & getZoneList() const { DARABONBA_PTR_GET_CONST(zoneList_, vector<string>) };
    inline vector<string> getZoneList() { DARABONBA_PTR_GET(zoneList_, vector<string>) };
    inline DescribeAccessInstanceZoneListResponseBody& setZoneList(const vector<string> & zoneList) { DARABONBA_PTR_SET_VALUE(zoneList_, zoneList) };
    inline DescribeAccessInstanceZoneListResponseBody& setZoneList(vector<string> && zoneList) { DARABONBA_PTR_SET_RVALUE(zoneList_, zoneList) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<DescribeAccessInstanceZoneListResponseBody::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<DescribeAccessInstanceZoneListResponseBody::Zones>) };
    inline vector<DescribeAccessInstanceZoneListResponseBody::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<DescribeAccessInstanceZoneListResponseBody::Zones>) };
    inline DescribeAccessInstanceZoneListResponseBody& setZones(const vector<DescribeAccessInstanceZoneListResponseBody::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeAccessInstanceZoneListResponseBody& setZones(vector<DescribeAccessInstanceZoneListResponseBody::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> zoneList_ {};
    shared_ptr<vector<DescribeAccessInstanceZoneListResponseBody::Zones>> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
