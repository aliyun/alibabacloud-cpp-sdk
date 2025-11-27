// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTESLAVEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTESLAVEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZonesSlaveZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones& obj) { 
      DARABONBA_PTR_TO_JSON(SlaveZone, slaveZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones& obj) { 
      DARABONBA_PTR_FROM_JSON(SlaveZone, slaveZone_);
    };
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slaveZone_ == nullptr; };
    // slaveZone Field Functions 
    bool hasSlaveZone() const { return this->slaveZone_ != nullptr;};
    void deleteSlaveZone() { this->slaveZone_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZonesSlaveZone> & slaveZone() const { DARABONBA_PTR_GET_CONST(slaveZone_, vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZonesSlaveZone>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZonesSlaveZone> slaveZone() { DARABONBA_PTR_GET(slaveZone_, vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZonesSlaveZone>) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones& setSlaveZone(const vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZonesSlaveZone> & slaveZone) { DARABONBA_PTR_SET_VALUE(slaveZone_, slaveZone) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZones& setSlaveZone(vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZonesSlaveZone> && slaveZone) { DARABONBA_PTR_SET_RVALUE(slaveZone_, slaveZone) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeSlaveZonesSlaveZone>> slaveZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
