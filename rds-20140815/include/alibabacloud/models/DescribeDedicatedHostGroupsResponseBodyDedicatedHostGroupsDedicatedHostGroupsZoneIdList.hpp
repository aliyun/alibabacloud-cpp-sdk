// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODYDEDICATEDHOSTGROUPSDEDICATEDHOSTGROUPSZONEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTGROUPSRESPONSEBODYDEDICATEDHOSTGROUPSDEDICATEDHOSTGROUPSZONEIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneIDList, zoneIDList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneIDList, zoneIDList_);
    };
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList() = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList(const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList &) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList(DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList &&) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList() = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList& operator=(const DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList &) = default ;
    DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList& operator=(DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneIDList_ == nullptr; };
    // zoneIDList Field Functions 
    bool hasZoneIDList() const { return this->zoneIDList_ != nullptr;};
    void deleteZoneIDList() { this->zoneIDList_ = nullptr;};
    inline const vector<string> & zoneIDList() const { DARABONBA_PTR_GET_CONST(zoneIDList_, vector<string>) };
    inline vector<string> zoneIDList() { DARABONBA_PTR_GET(zoneIDList_, vector<string>) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList& setZoneIDList(const vector<string> & zoneIDList) { DARABONBA_PTR_SET_VALUE(zoneIDList_, zoneIDList) };
    inline DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList& setZoneIDList(vector<string> && zoneIDList) { DARABONBA_PTR_SET_RVALUE(zoneIDList_, zoneIDList) };


  protected:
    std::shared_ptr<vector<string>> zoneIDList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
