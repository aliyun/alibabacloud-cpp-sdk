// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancesResponseBodyItemsDBInstanceTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancesResponseBodyItemsDBInstanceTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancesResponseBodyItemsDBInstanceTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBInstancesResponseBodyItemsDBInstanceTags() = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceTags(const DescribeDBInstancesResponseBodyItemsDBInstanceTags &) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceTags(DescribeDBInstancesResponseBodyItemsDBInstanceTags &&) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancesResponseBodyItemsDBInstanceTags() = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceTags& operator=(const DescribeDBInstancesResponseBodyItemsDBInstanceTags &) = default ;
    DescribeDBInstancesResponseBodyItemsDBInstanceTags& operator=(DescribeDBInstancesResponseBodyItemsDBInstanceTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag>) };
    inline vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag>) };
    inline DescribeDBInstancesResponseBodyItemsDBInstanceTags& setTag(const vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBInstancesResponseBodyItemsDBInstanceTags& setTag(vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
