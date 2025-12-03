// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerTCPListenerAttributeResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerTCPListenerAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerTCPListenerAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTags() = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTags(const DescribeLoadBalancerTCPListenerAttributeResponseBodyTags &) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTags(DescribeLoadBalancerTCPListenerAttributeResponseBodyTags &&) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerTCPListenerAttributeResponseBodyTags() = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTags& operator=(const DescribeLoadBalancerTCPListenerAttributeResponseBodyTags &) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTags& operator=(DescribeLoadBalancerTCPListenerAttributeResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag>) };
    inline vector<Models::DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag>) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBodyTags& setTag(const vector<Models::DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBodyTags& setTag(vector<Models::DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
