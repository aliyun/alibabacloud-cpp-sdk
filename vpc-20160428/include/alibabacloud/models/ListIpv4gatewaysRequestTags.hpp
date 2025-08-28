// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListIpv4GatewaysRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpv4GatewaysRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpv4GatewaysRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListIpv4GatewaysRequestTags() = default ;
    ListIpv4GatewaysRequestTags(const ListIpv4GatewaysRequestTags &) = default ;
    ListIpv4GatewaysRequestTags(ListIpv4GatewaysRequestTags &&) = default ;
    ListIpv4GatewaysRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpv4GatewaysRequestTags() = default ;
    ListIpv4GatewaysRequestTags& operator=(const ListIpv4GatewaysRequestTags &) = default ;
    ListIpv4GatewaysRequestTags& operator=(ListIpv4GatewaysRequestTags &&) = default ;
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
    inline ListIpv4GatewaysRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListIpv4GatewaysRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. You can specify at most 20 tag keys. The tag key cannot be an empty string.
    // 
    // The key cannot exceed 64 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). The key must start with a letter but cannot start with `aliyun` or `acs:`. The key cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. You can specify at most 20 tag values. It can be an empty string.
    // 
    // The tag value cannot exceed 128 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). It must start with a letter but cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
