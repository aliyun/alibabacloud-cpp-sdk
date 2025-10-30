// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPLANSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPLANSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancePlansResponseBodyItemsPlanList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancePlansResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePlansResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(PlanList, planList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePlansResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanList, planList_);
    };
    DescribeDBInstancePlansResponseBodyItems() = default ;
    DescribeDBInstancePlansResponseBodyItems(const DescribeDBInstancePlansResponseBodyItems &) = default ;
    DescribeDBInstancePlansResponseBodyItems(DescribeDBInstancePlansResponseBodyItems &&) = default ;
    DescribeDBInstancePlansResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePlansResponseBodyItems() = default ;
    DescribeDBInstancePlansResponseBodyItems& operator=(const DescribeDBInstancePlansResponseBodyItems &) = default ;
    DescribeDBInstancePlansResponseBodyItems& operator=(DescribeDBInstancePlansResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planList_ == nullptr; };
    // planList Field Functions 
    bool hasPlanList() const { return this->planList_ != nullptr;};
    void deletePlanList() { this->planList_ = nullptr;};
    inline const vector<Models::DescribeDBInstancePlansResponseBodyItemsPlanList> & planList() const { DARABONBA_PTR_GET_CONST(planList_, vector<Models::DescribeDBInstancePlansResponseBodyItemsPlanList>) };
    inline vector<Models::DescribeDBInstancePlansResponseBodyItemsPlanList> planList() { DARABONBA_PTR_GET(planList_, vector<Models::DescribeDBInstancePlansResponseBodyItemsPlanList>) };
    inline DescribeDBInstancePlansResponseBodyItems& setPlanList(const vector<Models::DescribeDBInstancePlansResponseBodyItemsPlanList> & planList) { DARABONBA_PTR_SET_VALUE(planList_, planList) };
    inline DescribeDBInstancePlansResponseBodyItems& setPlanList(vector<Models::DescribeDBInstancePlansResponseBodyItemsPlanList> && planList) { DARABONBA_PTR_SET_RVALUE(planList_, planList) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancePlansResponseBodyItemsPlanList>> planList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
