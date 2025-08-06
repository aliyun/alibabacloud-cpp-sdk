// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class ListAnycastEipAddressesRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnycastEipAddressesRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnycastEipAddressesRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListAnycastEipAddressesRequestTags() = default ;
    ListAnycastEipAddressesRequestTags(const ListAnycastEipAddressesRequestTags &) = default ;
    ListAnycastEipAddressesRequestTags(ListAnycastEipAddressesRequestTags &&) = default ;
    ListAnycastEipAddressesRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnycastEipAddressesRequestTags() = default ;
    ListAnycastEipAddressesRequestTags& operator=(const ListAnycastEipAddressesRequestTags &) = default ;
    ListAnycastEipAddressesRequestTags& operator=(ListAnycastEipAddressesRequestTags &&) = default ;
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
    inline ListAnycastEipAddressesRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListAnycastEipAddressesRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the resource. You can specify up to 20 tag keys. You cannot specify empty strings as tag keys.
    // 
    // The key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The key must start with a letter but cannot start with `aliyun` or `acs:`. The key cannot contain `http://` or `https://`.
    // 
    // >  You must specify at least one of **Tag.N** (**Tag.N.Key** and **Tag.N.Value**).
    std::shared_ptr<string> key_ = nullptr;
    // The tag value of the resource. You can specify up to 20 tag values. It can be an empty string.
    // 
    // The value cannot exceed 128 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). The value must start with a letter but cannot start with `aliyun` or `acs:`. The value cannot contain `http://` or `https://`.
    // 
    // >  You must specify at least one of **Tag.N** (**Tag.N.Key** and **Tag.N.Value**).
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
