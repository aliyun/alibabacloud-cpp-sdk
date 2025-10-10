// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYTAGKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYTAGKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListTagKeysResponseBodyTagKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBodyTagKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
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
    virtual bool empty() const override { this->category_ != nullptr
        && this->tagKey_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTagKeysResponseBodyTagKeys& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListTagKeysResponseBodyTagKeys& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


  protected:
    // The type of the tag.
    // 
    // Valid values: **Custom**, **System**, and **All**.
    // 
    // Default value: **All**.
    std::shared_ptr<string> category_ = nullptr;
    // The tag that matches all filter conditions.
    std::shared_ptr<string> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
