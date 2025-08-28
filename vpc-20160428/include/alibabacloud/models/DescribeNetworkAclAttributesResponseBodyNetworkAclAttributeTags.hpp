// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags(DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags &&) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags& operator=(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags& operator=(DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTagsTag>) };
    inline vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTagsTag>) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags& setTag(const vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTags& setTag(vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
