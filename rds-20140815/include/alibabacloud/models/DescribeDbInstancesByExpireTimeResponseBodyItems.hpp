// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYEXPIRETIMERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYEXPIRETIMERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesByExpireTimeResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesByExpireTimeResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceExpireTime, DBInstanceExpireTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesByExpireTimeResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceExpireTime, DBInstanceExpireTime_);
    };
    DescribeDBInstancesByExpireTimeResponseBodyItems() = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItems(const DescribeDBInstancesByExpireTimeResponseBodyItems &) = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItems(DescribeDBInstancesByExpireTimeResponseBodyItems &&) = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesByExpireTimeResponseBodyItems() = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItems& operator=(const DescribeDBInstancesByExpireTimeResponseBodyItems &) = default ;
    DescribeDBInstancesByExpireTimeResponseBodyItems& operator=(DescribeDBInstancesByExpireTimeResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceExpireTime_ == nullptr; };
    // DBInstanceExpireTime Field Functions 
    bool hasDBInstanceExpireTime() const { return this->DBInstanceExpireTime_ != nullptr;};
    void deleteDBInstanceExpireTime() { this->DBInstanceExpireTime_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime> & DBInstanceExpireTime() const { DARABONBA_PTR_GET_CONST(DBInstanceExpireTime_, vector<Models::DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime>) };
    inline vector<Models::DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime> DBInstanceExpireTime() { DARABONBA_PTR_GET(DBInstanceExpireTime_, vector<Models::DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime>) };
    inline DescribeDBInstancesByExpireTimeResponseBodyItems& setDBInstanceExpireTime(const vector<Models::DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime> & DBInstanceExpireTime) { DARABONBA_PTR_SET_VALUE(DBInstanceExpireTime_, DBInstanceExpireTime) };
    inline DescribeDBInstancesByExpireTimeResponseBodyItems& setDBInstanceExpireTime(vector<Models::DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime> && DBInstanceExpireTime) { DARABONBA_PTR_SET_RVALUE(DBInstanceExpireTime_, DBInstanceExpireTime) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancesByExpireTimeResponseBodyItemsDBInstanceExpireTime>> DBInstanceExpireTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
