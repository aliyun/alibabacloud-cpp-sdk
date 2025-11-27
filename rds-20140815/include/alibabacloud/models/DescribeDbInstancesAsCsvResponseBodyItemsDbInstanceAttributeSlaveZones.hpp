// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODYITEMSDBINSTANCEATTRIBUTESLAVEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODYITEMSDBINSTANCEATTRIBUTESLAVEZONES_HPP_
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
  class DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones& obj) { 
      DARABONBA_PTR_TO_JSON(slaveRegion, slaveRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones& obj) { 
      DARABONBA_PTR_FROM_JSON(slaveRegion, slaveRegion_);
    };
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones() = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones(const DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones &) = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones(DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones &&) = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones() = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones& operator=(const DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones &) = default ;
    DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones& operator=(DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slaveRegion_ == nullptr; };
    // slaveRegion Field Functions 
    bool hasSlaveRegion() const { return this->slaveRegion_ != nullptr;};
    void deleteSlaveRegion() { this->slaveRegion_ = nullptr;};
    inline const vector<string> & slaveRegion() const { DARABONBA_PTR_GET_CONST(slaveRegion_, vector<string>) };
    inline vector<string> slaveRegion() { DARABONBA_PTR_GET(slaveRegion_, vector<string>) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones& setSlaveRegion(const vector<string> & slaveRegion) { DARABONBA_PTR_SET_VALUE(slaveRegion_, slaveRegion) };
    inline DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttributeSlaveZones& setSlaveRegion(vector<string> && slaveRegion) { DARABONBA_PTR_SET_RVALUE(slaveRegion_, slaveRegion) };


  protected:
    std::shared_ptr<vector<string>> slaveRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
