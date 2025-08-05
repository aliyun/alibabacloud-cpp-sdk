// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceAttribute, DBInstanceAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceAttribute, DBInstanceAttribute_);
    };
    DescribeDBInstanceAttributeResponseBodyItems() = default ;
    DescribeDBInstanceAttributeResponseBodyItems(const DescribeDBInstanceAttributeResponseBodyItems &) = default ;
    DescribeDBInstanceAttributeResponseBodyItems(DescribeDBInstanceAttributeResponseBodyItems &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItems() = default ;
    DescribeDBInstanceAttributeResponseBodyItems& operator=(const DescribeDBInstanceAttributeResponseBodyItems &) = default ;
    DescribeDBInstanceAttributeResponseBodyItems& operator=(DescribeDBInstanceAttributeResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceAttribute_ != nullptr; };
    // DBInstanceAttribute Field Functions 
    bool hasDBInstanceAttribute() const { return this->DBInstanceAttribute_ != nullptr;};
    void deleteDBInstanceAttribute() { this->DBInstanceAttribute_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute> & DBInstanceAttribute() const { DARABONBA_PTR_GET_CONST(DBInstanceAttribute_, vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute> DBInstanceAttribute() { DARABONBA_PTR_GET(DBInstanceAttribute_, vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute>) };
    inline DescribeDBInstanceAttributeResponseBodyItems& setDBInstanceAttribute(const vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute> & DBInstanceAttribute) { DARABONBA_PTR_SET_VALUE(DBInstanceAttribute_, DBInstanceAttribute) };
    inline DescribeDBInstanceAttributeResponseBodyItems& setDBInstanceAttribute(vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute> && DBInstanceAttribute) { DARABONBA_PTR_SET_RVALUE(DBInstanceAttribute_, DBInstanceAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute>> DBInstanceAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
