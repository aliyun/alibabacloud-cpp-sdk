// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVSWITCHLISTRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVSWITCHLISTRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceVSwitchListResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceVSwitchListResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchList, vSwitchList_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceVSwitchListResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchList, vSwitchList_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAccessInstanceVSwitchListResponseBodyZones() = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZones(const DescribeAccessInstanceVSwitchListResponseBodyZones &) = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZones(DescribeAccessInstanceVSwitchListResponseBodyZones &&) = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceVSwitchListResponseBodyZones() = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZones& operator=(const DescribeAccessInstanceVSwitchListResponseBodyZones &) = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZones& operator=(DescribeAccessInstanceVSwitchListResponseBodyZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitchList_ == nullptr
        && return this->zoneId_ == nullptr; };
    // vSwitchList Field Functions 
    bool hasVSwitchList() const { return this->vSwitchList_ != nullptr;};
    void deleteVSwitchList() { this->vSwitchList_ = nullptr;};
    inline const vector<Models::DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList> & vSwitchList() const { DARABONBA_PTR_GET_CONST(vSwitchList_, vector<Models::DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList>) };
    inline vector<Models::DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList> vSwitchList() { DARABONBA_PTR_GET(vSwitchList_, vector<Models::DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList>) };
    inline DescribeAccessInstanceVSwitchListResponseBodyZones& setVSwitchList(const vector<Models::DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList> & vSwitchList) { DARABONBA_PTR_SET_VALUE(vSwitchList_, vSwitchList) };
    inline DescribeAccessInstanceVSwitchListResponseBodyZones& setVSwitchList(vector<Models::DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList> && vSwitchList) { DARABONBA_PTR_SET_RVALUE(vSwitchList_, vSwitchList) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAccessInstanceVSwitchListResponseBodyZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList>> vSwitchList_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
