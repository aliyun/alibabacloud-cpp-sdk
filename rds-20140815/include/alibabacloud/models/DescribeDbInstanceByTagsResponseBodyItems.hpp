// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEBYTAGSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEBYTAGSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceByTagsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceByTagsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceTag, DBInstanceTag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceByTagsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceTag, DBInstanceTag_);
    };
    DescribeDBInstanceByTagsResponseBodyItems() = default ;
    DescribeDBInstanceByTagsResponseBodyItems(const DescribeDBInstanceByTagsResponseBodyItems &) = default ;
    DescribeDBInstanceByTagsResponseBodyItems(DescribeDBInstanceByTagsResponseBodyItems &&) = default ;
    DescribeDBInstanceByTagsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceByTagsResponseBodyItems() = default ;
    DescribeDBInstanceByTagsResponseBodyItems& operator=(const DescribeDBInstanceByTagsResponseBodyItems &) = default ;
    DescribeDBInstanceByTagsResponseBodyItems& operator=(DescribeDBInstanceByTagsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceTag_ == nullptr; };
    // DBInstanceTag Field Functions 
    bool hasDBInstanceTag() const { return this->DBInstanceTag_ != nullptr;};
    void deleteDBInstanceTag() { this->DBInstanceTag_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag> & DBInstanceTag() const { DARABONBA_PTR_GET_CONST(DBInstanceTag_, vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag>) };
    inline vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag> DBInstanceTag() { DARABONBA_PTR_GET(DBInstanceTag_, vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag>) };
    inline DescribeDBInstanceByTagsResponseBodyItems& setDBInstanceTag(const vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag> & DBInstanceTag) { DARABONBA_PTR_SET_VALUE(DBInstanceTag_, DBInstanceTag) };
    inline DescribeDBInstanceByTagsResponseBodyItems& setDBInstanceTag(vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag> && DBInstanceTag) { DARABONBA_PTR_SET_RVALUE(DBInstanceTag_, DBInstanceTag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTag>> DBInstanceTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
