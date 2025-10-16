// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEZONELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEZONELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessInstanceZoneListResponseBodyZones.hpp>
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
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->zoneList_ == nullptr && return this->zones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessInstanceZoneListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneList Field Functions 
    bool hasZoneList() const { return this->zoneList_ != nullptr;};
    void deleteZoneList() { this->zoneList_ = nullptr;};
    inline const vector<string> & zoneList() const { DARABONBA_PTR_GET_CONST(zoneList_, vector<string>) };
    inline vector<string> zoneList() { DARABONBA_PTR_GET(zoneList_, vector<string>) };
    inline DescribeAccessInstanceZoneListResponseBody& setZoneList(const vector<string> & zoneList) { DARABONBA_PTR_SET_VALUE(zoneList_, zoneList) };
    inline DescribeAccessInstanceZoneListResponseBody& setZoneList(vector<string> && zoneList) { DARABONBA_PTR_SET_RVALUE(zoneList_, zoneList) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<DescribeAccessInstanceZoneListResponseBodyZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<DescribeAccessInstanceZoneListResponseBodyZones>) };
    inline vector<DescribeAccessInstanceZoneListResponseBodyZones> zones() { DARABONBA_PTR_GET(zones_, vector<DescribeAccessInstanceZoneListResponseBodyZones>) };
    inline DescribeAccessInstanceZoneListResponseBody& setZones(const vector<DescribeAccessInstanceZoneListResponseBodyZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeAccessInstanceZoneListResponseBody& setZones(vector<DescribeAccessInstanceZoneListResponseBodyZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> zoneList_ = nullptr;
    std::shared_ptr<vector<DescribeAccessInstanceZoneListResponseBodyZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
