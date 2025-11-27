// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESFORCLONERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESFORCLONERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesForCloneResponseBodyItemsDBInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesForCloneResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesForCloneResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesForCloneResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
    };
    DescribeDBInstancesForCloneResponseBodyItems() = default ;
    DescribeDBInstancesForCloneResponseBodyItems(const DescribeDBInstancesForCloneResponseBodyItems &) = default ;
    DescribeDBInstancesForCloneResponseBodyItems(DescribeDBInstancesForCloneResponseBodyItems &&) = default ;
    DescribeDBInstancesForCloneResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesForCloneResponseBodyItems() = default ;
    DescribeDBInstancesForCloneResponseBodyItems& operator=(const DescribeDBInstancesForCloneResponseBodyItems &) = default ;
    DescribeDBInstancesForCloneResponseBodyItems& operator=(DescribeDBInstancesForCloneResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstance_ == nullptr; };
    // DBInstance Field Functions 
    bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
    void deleteDBInstance() { this->DBInstance_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstance> & DBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstance>) };
    inline vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstance> DBInstance() { DARABONBA_PTR_GET(DBInstance_, vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstance>) };
    inline DescribeDBInstancesForCloneResponseBodyItems& setDBInstance(const vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstance> & DBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, DBInstance) };
    inline DescribeDBInstancesForCloneResponseBodyItems& setDBInstance(vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstance> && DBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, DBInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancesForCloneResponseBodyItemsDBInstance>> DBInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
