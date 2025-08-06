// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODYPREFIXLISTSPREFIXLISTTAGSTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODYPREFIXLISTSPREFIXLISTTAGSTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag() = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag(const DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag &) = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag(DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag &&) = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag() = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag& operator=(const DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag &) = default ;
    DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag& operator=(DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagKey_ != nullptr
        && this->tagValue_ != nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribePrefixListsResponseBodyPrefixListsPrefixListTagsTag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The tag value. A prefix list can have 1 to 20 tags. The tag value can be an empty string.
    // 
    // The tag value can be up to 128 characters in length and cannot contain `http:// or https://`.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag key. A prefix list can have 1 to 20 tags. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
