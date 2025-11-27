// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEBYTAGSRESPONSEBODYITEMSDBINSTANCETAGTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEBYTAGSRESPONSEBODYITEMSDBINSTANCETAGTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags() = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags(const DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags &) = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags(DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags &&) = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags() = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags& operator=(const DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags &) = default ;
    DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags& operator=(DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTagsTag>) };
    inline vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTagsTag>) };
    inline DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags& setTag(const vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTags& setTag(vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceByTagsResponseBodyItemsDBInstanceTagTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
