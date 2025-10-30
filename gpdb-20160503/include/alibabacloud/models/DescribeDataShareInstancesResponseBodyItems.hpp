// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASHAREINSTANCESRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASHAREINSTANCESRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataShareInstancesResponseBodyItemsDBInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDataShareInstancesResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataShareInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstance, DBInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataShareInstancesResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstance, DBInstance_);
    };
    DescribeDataShareInstancesResponseBodyItems() = default ;
    DescribeDataShareInstancesResponseBodyItems(const DescribeDataShareInstancesResponseBodyItems &) = default ;
    DescribeDataShareInstancesResponseBodyItems(DescribeDataShareInstancesResponseBodyItems &&) = default ;
    DescribeDataShareInstancesResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataShareInstancesResponseBodyItems() = default ;
    DescribeDataShareInstancesResponseBodyItems& operator=(const DescribeDataShareInstancesResponseBodyItems &) = default ;
    DescribeDataShareInstancesResponseBodyItems& operator=(DescribeDataShareInstancesResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstance_ == nullptr; };
    // DBInstance Field Functions 
    bool hasDBInstance() const { return this->DBInstance_ != nullptr;};
    void deleteDBInstance() { this->DBInstance_ = nullptr;};
    inline const vector<Models::DescribeDataShareInstancesResponseBodyItemsDBInstance> & DBInstance() const { DARABONBA_PTR_GET_CONST(DBInstance_, vector<Models::DescribeDataShareInstancesResponseBodyItemsDBInstance>) };
    inline vector<Models::DescribeDataShareInstancesResponseBodyItemsDBInstance> DBInstance() { DARABONBA_PTR_GET(DBInstance_, vector<Models::DescribeDataShareInstancesResponseBodyItemsDBInstance>) };
    inline DescribeDataShareInstancesResponseBodyItems& setDBInstance(const vector<Models::DescribeDataShareInstancesResponseBodyItemsDBInstance> & DBInstance) { DARABONBA_PTR_SET_VALUE(DBInstance_, DBInstance) };
    inline DescribeDataShareInstancesResponseBodyItems& setDBInstance(vector<Models::DescribeDataShareInstancesResponseBodyItemsDBInstance> && DBInstance) { DARABONBA_PTR_SET_RVALUE(DBInstance_, DBInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataShareInstancesResponseBodyItemsDBInstance>> DBInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
