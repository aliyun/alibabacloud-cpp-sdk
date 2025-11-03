// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELISTROUTERTABLELISTTYPETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODYROUTERTABLELISTROUTERTABLELISTTYPETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags() = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags(const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags &) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags(DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags &&) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags() = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags& operator=(const DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags &) = default ;
    DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags& operator=(DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTagsTag>) };
    inline vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTagsTag>) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags& setTag(const vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTags& setTag(vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeRouteTableListResponseBodyRouterTableListRouterTableListTypeTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
