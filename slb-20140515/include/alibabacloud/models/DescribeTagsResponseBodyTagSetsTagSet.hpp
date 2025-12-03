// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGSETSTAGSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGSETSTAGSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeTagsResponseBodyTagSetsTagSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyTagSetsTagSet& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyTagSetsTagSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeTagsResponseBodyTagSetsTagSet() = default ;
    DescribeTagsResponseBodyTagSetsTagSet(const DescribeTagsResponseBodyTagSetsTagSet &) = default ;
    DescribeTagsResponseBodyTagSetsTagSet(DescribeTagsResponseBodyTagSetsTagSet &&) = default ;
    DescribeTagsResponseBodyTagSetsTagSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyTagSetsTagSet() = default ;
    DescribeTagsResponseBodyTagSetsTagSet& operator=(const DescribeTagsResponseBodyTagSetsTagSet &) = default ;
    DescribeTagsResponseBodyTagSetsTagSet& operator=(DescribeTagsResponseBodyTagSetsTagSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCount_ == nullptr
        && return this->tagKey_ == nullptr && return this->tagValue_ == nullptr; };
    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline DescribeTagsResponseBodyTagSetsTagSet& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeTagsResponseBodyTagSetsTagSet& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeTagsResponseBodyTagSetsTagSet& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The number of instances to which the tag is added.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
