// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYTAGRESOURCESTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODYTAGRESOURCESTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagResourcesResponseBodyTagResourcesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBodyTagResourcesTags& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBodyTagResourcesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTagResourcesResponseBodyTagResourcesTags() = default ;
    ListTagResourcesResponseBodyTagResourcesTags(const ListTagResourcesResponseBodyTagResourcesTags &) = default ;
    ListTagResourcesResponseBodyTagResourcesTags(ListTagResourcesResponseBodyTagResourcesTags &&) = default ;
    ListTagResourcesResponseBodyTagResourcesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBodyTagResourcesTags() = default ;
    ListTagResourcesResponseBodyTagResourcesTags& operator=(const ListTagResourcesResponseBodyTagResourcesTags &) = default ;
    ListTagResourcesResponseBodyTagResourcesTags& operator=(ListTagResourcesResponseBodyTagResourcesTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTagResourcesResponseBodyTagResourcesTags& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListTagResourcesResponseBodyTagResourcesTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTagResourcesResponseBodyTagResourcesTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The type of the tag. Valid values:
    // 
    // *   Custom
    // *   System
    std::shared_ptr<string> category_ = nullptr;
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
