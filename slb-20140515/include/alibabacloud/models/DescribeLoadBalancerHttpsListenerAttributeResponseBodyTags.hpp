// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags &&) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags& operator=(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags& operator=(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTagsTag>) };
    inline vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTagsTag>) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags& setTag(const vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags& setTag(vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
