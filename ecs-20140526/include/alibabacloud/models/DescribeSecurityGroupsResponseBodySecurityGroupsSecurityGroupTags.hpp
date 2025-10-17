// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPSSECURITYGROUPTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPSSECURITYGROUPTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags(const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags(DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags &&) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags& operator=(const DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags& operator=(DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTagsTag>) };
    inline vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTagsTag>) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags& setTag(const vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTags& setTag(vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroupTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
