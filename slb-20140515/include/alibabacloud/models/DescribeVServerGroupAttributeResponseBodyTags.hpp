// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPATTRIBUTERESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPATTRIBUTERESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVServerGroupAttributeResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupAttributeResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeVServerGroupAttributeResponseBodyTags() = default ;
    DescribeVServerGroupAttributeResponseBodyTags(const DescribeVServerGroupAttributeResponseBodyTags &) = default ;
    DescribeVServerGroupAttributeResponseBodyTags(DescribeVServerGroupAttributeResponseBodyTags &&) = default ;
    DescribeVServerGroupAttributeResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupAttributeResponseBodyTags() = default ;
    DescribeVServerGroupAttributeResponseBodyTags& operator=(const DescribeVServerGroupAttributeResponseBodyTags &) = default ;
    DescribeVServerGroupAttributeResponseBodyTags& operator=(DescribeVServerGroupAttributeResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeVServerGroupAttributeResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeVServerGroupAttributeResponseBodyTagsTag>) };
    inline vector<Models::DescribeVServerGroupAttributeResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeVServerGroupAttributeResponseBodyTagsTag>) };
    inline DescribeVServerGroupAttributeResponseBodyTags& setTag(const vector<Models::DescribeVServerGroupAttributeResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVServerGroupAttributeResponseBodyTags& setTag(vector<Models::DescribeVServerGroupAttributeResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeVServerGroupAttributeResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
