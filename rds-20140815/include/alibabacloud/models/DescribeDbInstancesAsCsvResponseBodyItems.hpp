// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESASCSVRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesAsCsvResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesAsCsvResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceAttribute, DBInstanceAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesAsCsvResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceAttribute, DBInstanceAttribute_);
    };
    DescribeDBInstancesAsCsvResponseBodyItems() = default ;
    DescribeDBInstancesAsCsvResponseBodyItems(const DescribeDBInstancesAsCsvResponseBodyItems &) = default ;
    DescribeDBInstancesAsCsvResponseBodyItems(DescribeDBInstancesAsCsvResponseBodyItems &&) = default ;
    DescribeDBInstancesAsCsvResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesAsCsvResponseBodyItems() = default ;
    DescribeDBInstancesAsCsvResponseBodyItems& operator=(const DescribeDBInstancesAsCsvResponseBodyItems &) = default ;
    DescribeDBInstancesAsCsvResponseBodyItems& operator=(DescribeDBInstancesAsCsvResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceAttribute_ == nullptr; };
    // DBInstanceAttribute Field Functions 
    bool hasDBInstanceAttribute() const { return this->DBInstanceAttribute_ != nullptr;};
    void deleteDBInstanceAttribute() { this->DBInstanceAttribute_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute> & DBInstanceAttribute() const { DARABONBA_PTR_GET_CONST(DBInstanceAttribute_, vector<Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute>) };
    inline vector<Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute> DBInstanceAttribute() { DARABONBA_PTR_GET(DBInstanceAttribute_, vector<Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute>) };
    inline DescribeDBInstancesAsCsvResponseBodyItems& setDBInstanceAttribute(const vector<Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute> & DBInstanceAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceAttribute_, DBInstanceAttribute) };
    inline DescribeDBInstancesAsCsvResponseBodyItems& setDBInstanceAttribute(vector<Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute> && DBInstanceAttribute) { DARABONBA_PTR_SET_RVALUE(DBInstanceAttribute_, DBInstanceAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancesAsCsvResponseBodyItemsDBInstanceAttribute>> DBInstanceAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
