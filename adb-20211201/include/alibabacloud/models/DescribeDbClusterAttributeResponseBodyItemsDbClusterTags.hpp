// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTERESPONSEBODYITEMSDBCLUSTERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterAttributeResponseBodyItemsDBClusterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAttributeResponseBodyItemsDBClusterTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAttributeResponseBodyItemsDBClusterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTags() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTags(const DescribeDBClusterAttributeResponseBodyItemsDBClusterTags &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTags(DescribeDBClusterAttributeResponseBodyItemsDBClusterTags &&) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAttributeResponseBodyItemsDBClusterTags() = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTags& operator=(const DescribeDBClusterAttributeResponseBodyItemsDBClusterTags &) = default ;
    DescribeDBClusterAttributeResponseBodyItemsDBClusterTags& operator=(DescribeDBClusterAttributeResponseBodyItemsDBClusterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag>) };
    inline vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag>) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTags& setTag(const vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDBClusterAttributeResponseBodyItemsDBClusterTags& setTag(vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
