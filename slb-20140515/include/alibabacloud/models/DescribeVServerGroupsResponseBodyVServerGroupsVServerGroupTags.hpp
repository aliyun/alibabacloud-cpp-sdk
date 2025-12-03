// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags &&) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags& operator=(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags& operator=(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTagsTag>) };
    inline vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTagsTag>) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags& setTag(const vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTags& setTag(vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
