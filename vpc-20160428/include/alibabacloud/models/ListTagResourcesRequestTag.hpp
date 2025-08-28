// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTagResourcesRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTagResourcesRequestTag() = default ;
    ListTagResourcesRequestTag(const ListTagResourcesRequestTag &) = default ;
    ListTagResourcesRequestTag(ListTagResourcesRequestTag &&) = default ;
    ListTagResourcesRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesRequestTag() = default ;
    ListTagResourcesRequestTag& operator=(const ListTagResourcesRequestTag &) = default ;
    ListTagResourcesRequestTag& operator=(ListTagResourcesRequestTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListTagResourcesRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTagResourcesRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag that is added to the resource. You can specify up to 20 tag keys. The tag key cannot be an empty string.
    // 
    // The key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The key must start with a letter but cannot start with `aliyun` or `acs:`. The key cannot contain `http://` or `https://`.
    // 
    // >  Specify at least one of the **ResourceId.N** and **Tag.N** parameters (**Tag.N.Key** and **Tag.N.Value**).
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag that is added to the resource. You can specify up to 20 tag values. The tag value can be an empty string.
    // 
    // The value can be up to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The value must start with a letter but cannot start with `aliyun` or `acs:`. The value cannot contain `http://` or `https://`.
    // 
    // >  Specify at least one of the **ResourceId.N** and **Tag.N** parameters (**Tag.N.Key** and **Tag.N.Value**).
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
