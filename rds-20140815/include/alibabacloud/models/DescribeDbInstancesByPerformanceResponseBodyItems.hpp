// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYPERFORMANCERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESBYPERFORMANCERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstancesByPerformanceResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesByPerformanceResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstancePerformance, DBInstancePerformance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesByPerformanceResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstancePerformance, DBInstancePerformance_);
    };
    DescribeDBInstancesByPerformanceResponseBodyItems() = default ;
    DescribeDBInstancesByPerformanceResponseBodyItems(const DescribeDBInstancesByPerformanceResponseBodyItems &) = default ;
    DescribeDBInstancesByPerformanceResponseBodyItems(DescribeDBInstancesByPerformanceResponseBodyItems &&) = default ;
    DescribeDBInstancesByPerformanceResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesByPerformanceResponseBodyItems() = default ;
    DescribeDBInstancesByPerformanceResponseBodyItems& operator=(const DescribeDBInstancesByPerformanceResponseBodyItems &) = default ;
    DescribeDBInstancesByPerformanceResponseBodyItems& operator=(DescribeDBInstancesByPerformanceResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstancePerformance_ == nullptr; };
    // DBInstancePerformance Field Functions 
    bool hasDBInstancePerformance() const { return this->DBInstancePerformance_ != nullptr;};
    void deleteDBInstancePerformance() { this->DBInstancePerformance_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance> & DBInstancePerformance() const { DARABONBA_PTR_GET_CONST(DBInstancePerformance_, vector<Models::DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance>) };
    inline vector<Models::DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance> DBInstancePerformance() { DARABONBA_PTR_GET(DBInstancePerformance_, vector<Models::DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance>) };
    inline DescribeDBInstancesByPerformanceResponseBodyItems& setDBInstancePerformance(const vector<Models::DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance> & DBInstancePerformance) { DARABONBA_PTR_SET_VALUE(DBInstancePerformance_, DBInstancePerformance) };
    inline DescribeDBInstancesByPerformanceResponseBodyItems& setDBInstancePerformance(vector<Models::DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance> && DBInstancePerformance) { DARABONBA_PTR_SET_RVALUE(DBInstancePerformance_, DBInstancePerformance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancesByPerformanceResponseBodyItemsDBInstancePerformance>> DBInstancePerformance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
