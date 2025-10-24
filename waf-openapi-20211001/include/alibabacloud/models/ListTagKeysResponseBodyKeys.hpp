// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ListTagKeysResponseBodyKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBodyKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBodyKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    ListTagKeysResponseBodyKeys() = default ;
    ListTagKeysResponseBodyKeys(const ListTagKeysResponseBodyKeys &) = default ;
    ListTagKeysResponseBodyKeys(ListTagKeysResponseBodyKeys &&) = default ;
    ListTagKeysResponseBodyKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysResponseBodyKeys() = default ;
    ListTagKeysResponseBodyKeys& operator=(const ListTagKeysResponseBodyKeys &) = default ;
    ListTagKeysResponseBodyKeys& operator=(ListTagKeysResponseBodyKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->key_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTagKeysResponseBodyKeys& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListTagKeysResponseBodyKeys& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The type of the tag. Valid values:
    // 
    // *   custom
    // *   system
    std::shared_ptr<string> category_ = nullptr;
    // The key of the tag.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
