// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODYSCALINGGROUPTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPDETAILRESPONSEBODYSCALINGGROUPTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupDetailResponseBodyScalingGroupTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupDetailResponseBodyScalingGroupTags& obj) { 
      DARABONBA_PTR_TO_JSON(Propagate, propagate_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupDetailResponseBodyScalingGroupTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Propagate, propagate_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeScalingGroupDetailResponseBodyScalingGroupTags() = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupTags(const DescribeScalingGroupDetailResponseBodyScalingGroupTags &) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupTags(DescribeScalingGroupDetailResponseBodyScalingGroupTags &&) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupDetailResponseBodyScalingGroupTags() = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupTags& operator=(const DescribeScalingGroupDetailResponseBodyScalingGroupTags &) = default ;
    DescribeScalingGroupDetailResponseBodyScalingGroupTags& operator=(DescribeScalingGroupDetailResponseBodyScalingGroupTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propagate_ != nullptr
        && this->tagKey_ != nullptr && this->tagValue_ != nullptr; };
    // propagate Field Functions 
    bool hasPropagate() const { return this->propagate_ != nullptr;};
    void deletePropagate() { this->propagate_ = nullptr;};
    inline bool propagate() const { DARABONBA_PTR_GET_DEFAULT(propagate_, false) };
    inline DescribeScalingGroupDetailResponseBodyScalingGroupTags& setPropagate(bool propagate) { DARABONBA_PTR_SET_VALUE(propagate_, propagate) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeScalingGroupDetailResponseBodyScalingGroupTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeScalingGroupDetailResponseBodyScalingGroupTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // Indicates whether the tags of the scaling group can be propagated to instances. Valid values:
    // 
    // *   true: The tags of the scaling group can be propagated to only instances that are newly created.
    // *   false: The tags of the scaling group cannot be propagated to any instances.
    // 
    // Default value: false.
    std::shared_ptr<bool> propagate_ = nullptr;
    // The tag key of the scaling group.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value of the scaling group.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
