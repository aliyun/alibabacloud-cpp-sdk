// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerHTTPListenerAttributeResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags() = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags &) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags(DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags &&) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags() = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags& operator=(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags &) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags& operator=(DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyTagsTag>) };
    inline vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyTagsTag>) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags& setTag(const vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags& setTag(vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerHTTPListenerAttributeResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
