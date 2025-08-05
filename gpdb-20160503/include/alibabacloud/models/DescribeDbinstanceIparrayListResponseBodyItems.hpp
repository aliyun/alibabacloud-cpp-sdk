// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEIPARRAYLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceIPArrayListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIPArrayListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceIPArray, DBInstanceIPArray_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIPArrayListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceIPArray, DBInstanceIPArray_);
    };
    DescribeDBInstanceIPArrayListResponseBodyItems() = default ;
    DescribeDBInstanceIPArrayListResponseBodyItems(const DescribeDBInstanceIPArrayListResponseBodyItems &) = default ;
    DescribeDBInstanceIPArrayListResponseBodyItems(DescribeDBInstanceIPArrayListResponseBodyItems &&) = default ;
    DescribeDBInstanceIPArrayListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIPArrayListResponseBodyItems() = default ;
    DescribeDBInstanceIPArrayListResponseBodyItems& operator=(const DescribeDBInstanceIPArrayListResponseBodyItems &) = default ;
    DescribeDBInstanceIPArrayListResponseBodyItems& operator=(DescribeDBInstanceIPArrayListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceIPArray_ != nullptr; };
    // DBInstanceIPArray Field Functions 
    bool hasDBInstanceIPArray() const { return this->DBInstanceIPArray_ != nullptr;};
    void deleteDBInstanceIPArray() { this->DBInstanceIPArray_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray> & DBInstanceIPArray() const { DARABONBA_PTR_GET_CONST(DBInstanceIPArray_, vector<Models::DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray>) };
    inline vector<Models::DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray> DBInstanceIPArray() { DARABONBA_PTR_GET(DBInstanceIPArray_, vector<Models::DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray>) };
    inline DescribeDBInstanceIPArrayListResponseBodyItems& setDBInstanceIPArray(const vector<Models::DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray> & DBInstanceIPArray) { DARABONBA_PTR_SET_VALUE(DBInstanceIPArray_, DBInstanceIPArray) };
    inline DescribeDBInstanceIPArrayListResponseBodyItems& setDBInstanceIPArray(vector<Models::DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray> && DBInstanceIPArray) { DARABONBA_PTR_SET_RVALUE(DBInstanceIPArray_, DBInstanceIPArray) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray>> DBInstanceIPArray_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
