// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGSTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGSTAG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTagsResponseBodyTagsTagResourceTypeCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTagsResponseBodyTagsTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyTagsTag& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceTypeCount, resourceTypeCount_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyTagsTag& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceTypeCount, resourceTypeCount_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeTagsResponseBodyTagsTag() = default ;
    DescribeTagsResponseBodyTagsTag(const DescribeTagsResponseBodyTagsTag &) = default ;
    DescribeTagsResponseBodyTagsTag(DescribeTagsResponseBodyTagsTag &&) = default ;
    DescribeTagsResponseBodyTagsTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyTagsTag() = default ;
    DescribeTagsResponseBodyTagsTag& operator=(const DescribeTagsResponseBodyTagsTag &) = default ;
    DescribeTagsResponseBodyTagsTag& operator=(DescribeTagsResponseBodyTagsTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceTypeCount_ != nullptr
        && this->tagKey_ != nullptr && this->tagValue_ != nullptr; };
    // resourceTypeCount Field Functions 
    bool hasResourceTypeCount() const { return this->resourceTypeCount_ != nullptr;};
    void deleteResourceTypeCount() { this->resourceTypeCount_ = nullptr;};
    inline const Models::DescribeTagsResponseBodyTagsTagResourceTypeCount & resourceTypeCount() const { DARABONBA_PTR_GET_CONST(resourceTypeCount_, Models::DescribeTagsResponseBodyTagsTagResourceTypeCount) };
    inline Models::DescribeTagsResponseBodyTagsTagResourceTypeCount resourceTypeCount() { DARABONBA_PTR_GET(resourceTypeCount_, Models::DescribeTagsResponseBodyTagsTagResourceTypeCount) };
    inline DescribeTagsResponseBodyTagsTag& setResourceTypeCount(const Models::DescribeTagsResponseBodyTagsTagResourceTypeCount & resourceTypeCount) { DARABONBA_PTR_SET_VALUE(resourceTypeCount_, resourceTypeCount) };
    inline DescribeTagsResponseBodyTagsTag& setResourceTypeCount(Models::DescribeTagsResponseBodyTagsTagResourceTypeCount && resourceTypeCount) { DARABONBA_PTR_SET_RVALUE(resourceTypeCount_, resourceTypeCount) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeTagsResponseBodyTagsTag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeTagsResponseBodyTagsTag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The number of resource types.
    std::shared_ptr<Models::DescribeTagsResponseBodyTagsTagResourceTypeCount> resourceTypeCount_ = nullptr;
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
