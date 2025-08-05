// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyItemsDBInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
    };
    DescribeDBInstancesResponseBodyItems() = default ;
    DescribeDBInstancesResponseBodyItems(const DescribeDBInstancesResponseBodyItems &) = default ;
    DescribeDBInstancesResponseBodyItems(DescribeDBInstancesResponseBodyItems &&) = default ;
    DescribeDBInstancesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyItems() = default ;
    DescribeDBInstancesResponseBodyItems& operator=(const DescribeDBInstancesResponseBodyItems &) = default ;
    DescribeDBInstancesResponseBodyItems& operator=(DescribeDBInstancesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstance_ != nullptr; };
    // DBInstance Field Functions 
    bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
    void deleteDBInstance() { this->DBInstance_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesResponseBodyItemsDBInstance> & DBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, vector<Models::DescribeDBInstancesResponseBodyItemsDBInstance>) };
    inline vector<Models::DescribeDBInstancesResponseBodyItemsDBInstance> DBInstance() { DARABONBA_PTR_GET(DBInstance_, vector<Models::DescribeDBInstancesResponseBodyItemsDBInstance>) };
    inline DescribeDBInstancesResponseBodyItems& setDBInstance(const vector<Models::DescribeDBInstancesResponseBodyItemsDBInstance> & DBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, DBInstance) };
    inline DescribeDBInstancesResponseBodyItems& setDBInstance(vector<Models::DescribeDBInstancesResponseBodyItemsDBInstance> && DBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, DBInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancesResponseBodyItemsDBInstance>> DBInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
