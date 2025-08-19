// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICATTRIBUTESRESPONSEBODYDATATAGS_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICATTRIBUTESRESPONSEBODYDATATAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetTopicAttributesResponseBodyDataTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicAttributesResponseBodyDataTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicAttributesResponseBodyDataTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    GetTopicAttributesResponseBodyDataTags() = default ;
    GetTopicAttributesResponseBodyDataTags(const GetTopicAttributesResponseBodyDataTags &) = default ;
    GetTopicAttributesResponseBodyDataTags(GetTopicAttributesResponseBodyDataTags &&) = default ;
    GetTopicAttributesResponseBodyDataTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicAttributesResponseBodyDataTags() = default ;
    GetTopicAttributesResponseBodyDataTags& operator=(const GetTopicAttributesResponseBodyDataTags &) = default ;
    GetTopicAttributesResponseBodyDataTags& operator=(GetTopicAttributesResponseBodyDataTags &&) = default ;
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
    inline GetTopicAttributesResponseBodyDataTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline GetTopicAttributesResponseBodyDataTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The tag value.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
