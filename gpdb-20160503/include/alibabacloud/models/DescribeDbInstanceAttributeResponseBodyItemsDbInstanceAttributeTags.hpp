// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag>) };
    inline vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag>) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags& setTag(const vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags& setTag(vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
