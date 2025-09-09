// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDbInstancesResponseBodyItemsDBInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDbInstancesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
    };
    DescribeDbInstancesResponseBodyItems() = default ;
    DescribeDbInstancesResponseBodyItems(const DescribeDbInstancesResponseBodyItems &) = default ;
    DescribeDbInstancesResponseBodyItems(DescribeDbInstancesResponseBodyItems &&) = default ;
    DescribeDbInstancesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbInstancesResponseBodyItems() = default ;
    DescribeDbInstancesResponseBodyItems& operator=(const DescribeDbInstancesResponseBodyItems &) = default ;
    DescribeDbInstancesResponseBodyItems& operator=(DescribeDbInstancesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstance_ != nullptr; };
    // DBInstance Field Functions 
    bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
    void deleteDBInstance() { this->DBInstance_ = nullptr;};
    inline const vector<Models::DescribeDbInstancesResponseBodyItemsDBInstance> & DBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, vector<Models::DescribeDbInstancesResponseBodyItemsDBInstance>) };
    inline vector<Models::DescribeDbInstancesResponseBodyItemsDBInstance> DBInstance() { DARABONBA_PTR_GET(DBInstance_, vector<Models::DescribeDbInstancesResponseBodyItemsDBInstance>) };
    inline DescribeDbInstancesResponseBodyItems& setDBInstance(const vector<Models::DescribeDbInstancesResponseBodyItemsDBInstance> & DBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, DBInstance) };
    inline DescribeDbInstancesResponseBodyItems& setDBInstance(vector<Models::DescribeDbInstancesResponseBodyItemsDBInstance> && DBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, DBInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDbInstancesResponseBodyItemsDBInstance>> DBInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
