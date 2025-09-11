// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSMULTIZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSMULTIZONE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstancesResponseBodyItemsMultiZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyItemsMultiZone& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyItemsMultiZone& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstancesResponseBodyItemsMultiZone() = default ;
    DescribeDBInstancesResponseBodyItemsMultiZone(const DescribeDBInstancesResponseBodyItemsMultiZone &) = default ;
    DescribeDBInstancesResponseBodyItemsMultiZone(DescribeDBInstancesResponseBodyItemsMultiZone &&) = default ;
    DescribeDBInstancesResponseBodyItemsMultiZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyItemsMultiZone() = default ;
    DescribeDBInstancesResponseBodyItemsMultiZone& operator=(const DescribeDBInstancesResponseBodyItemsMultiZone &) = default ;
    DescribeDBInstancesResponseBodyItemsMultiZone& operator=(DescribeDBInstancesResponseBodyItemsMultiZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vSwitchIds_ != nullptr
        && this->zoneId_ != nullptr; };
    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeDBInstancesResponseBodyItemsMultiZone& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeDBInstancesResponseBodyItemsMultiZone& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstancesResponseBodyItemsMultiZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
