// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYKEYSKEY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSRESPONSEBODYKEYSKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagKeysResponseBodyKeysKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysResponseBodyKeysKey& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysResponseBodyKeysKey& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    ListTagKeysResponseBodyKeysKey() = default ;
    ListTagKeysResponseBodyKeysKey(const ListTagKeysResponseBodyKeysKey &) = default ;
    ListTagKeysResponseBodyKeysKey(ListTagKeysResponseBodyKeysKey &&) = default ;
    ListTagKeysResponseBodyKeysKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysResponseBodyKeysKey() = default ;
    ListTagKeysResponseBodyKeysKey& operator=(const ListTagKeysResponseBodyKeysKey &) = default ;
    ListTagKeysResponseBodyKeysKey& operator=(ListTagKeysResponseBodyKeysKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->description_ != nullptr && this->key_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTagKeysResponseBodyKeysKey& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTagKeysResponseBodyKeysKey& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListTagKeysResponseBodyKeysKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The type of the resource tag. Valid values:
    // 
    // *   custom
    // *   system
    std::shared_ptr<string> category_ = nullptr;
    // The description of the tag key.
    std::shared_ptr<string> description_ = nullptr;
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
