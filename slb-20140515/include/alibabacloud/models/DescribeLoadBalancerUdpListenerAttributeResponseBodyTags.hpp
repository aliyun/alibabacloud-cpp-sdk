// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerUDPListenerAttributeResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerUDPListenerAttributeResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerUDPListenerAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerUDPListenerAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeLoadBalancerUDPListenerAttributeResponseBodyTags() = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBodyTags(const DescribeLoadBalancerUDPListenerAttributeResponseBodyTags &) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBodyTags(DescribeLoadBalancerUDPListenerAttributeResponseBodyTags &&) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerUDPListenerAttributeResponseBodyTags() = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBodyTags& operator=(const DescribeLoadBalancerUDPListenerAttributeResponseBodyTags &) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBodyTags& operator=(DescribeLoadBalancerUDPListenerAttributeResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeLoadBalancerUDPListenerAttributeResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeLoadBalancerUDPListenerAttributeResponseBodyTagsTag>) };
    inline vector<Models::DescribeLoadBalancerUDPListenerAttributeResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeLoadBalancerUDPListenerAttributeResponseBodyTagsTag>) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBodyTags& setTag(const vector<Models::DescribeLoadBalancerUDPListenerAttributeResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBodyTags& setTag(vector<Models::DescribeLoadBalancerUDPListenerAttributeResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeLoadBalancerUDPListenerAttributeResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
