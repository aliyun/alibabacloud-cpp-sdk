// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESPONSEBODYTAGSTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESPONSEBODYTAGSTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag() = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag(const DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag &) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag(DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag &&) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag() = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag& operator=(const DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag &) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag& operator=(DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagKey_ == nullptr
        && return this->tagValue_ == nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBodyTagsTag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The key of tag N. Valid values of N: **1** to **20**. The tag value cannot be an empty string. The tag key can be up to 128 characters in length, and cannot contain `http://` or `https://`. It cannot start with `acs:` or `aliyun`.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The value of tag N. Valid values of N: **1** to **20**. The tag value can be an empty string. The tag value can be up to 128 characters in length, and cannot start with `acs:`. It cannot contain `http://` or `https://`.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
