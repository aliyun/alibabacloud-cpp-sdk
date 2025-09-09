// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYTAGKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYTAGKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListTagKeysResponseBodyTagKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_TO_JSON(TagCount, tagCount_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(TagCount, tagCount_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    ListTagKeysResponseBodyTagKeys() = default ;
    ListTagKeysResponseBodyTagKeys(const ListTagKeysResponseBodyTagKeys &) = default ;
    ListTagKeysResponseBodyTagKeys(ListTagKeysResponseBodyTagKeys &&) = default ;
    ListTagKeysResponseBodyTagKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysResponseBodyTagKeys() = default ;
    ListTagKeysResponseBodyTagKeys& operator=(const ListTagKeysResponseBodyTagKeys &) = default ;
    ListTagKeysResponseBodyTagKeys& operator=(ListTagKeysResponseBodyTagKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagCount_ != nullptr
        && this->tagKey_ != nullptr; };
    // tagCount Field Functions 
    bool hasTagCount() const { return this->tagCount_ != nullptr;};
    void deleteTagCount() { this->tagCount_ = nullptr;};
    inline int32_t tagCount() const { DARABONBA_PTR_GET_DEFAULT(tagCount_, 0) };
    inline ListTagKeysResponseBodyTagKeys& setTagCount(int32_t tagCount) { DARABONBA_PTR_SET_VALUE(tagCount_, tagCount) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListTagKeysResponseBodyTagKeys& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


  protected:
    // The total number of tag keys.
    std::shared_ptr<int32_t> tagCount_ = nullptr;
    // The name of the tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
