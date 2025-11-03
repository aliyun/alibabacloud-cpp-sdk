// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSESIPV6ADDRESSTAGSTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSESIPV6ADDRESSTAGSTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag() = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag(const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag(DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag &&) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag() = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag& operator=(const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag& operator=(DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. You can specify up to 20 tag keys. The tag key cannot be an empty string.
    // 
    // The tag key can be up to 128 characters in length. The tag key cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    // 
    // The tag value can be up to 128 characters in length. It can be an empty string. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
    // 
    // Each tag key corresponds to one tag value. You can specify at most 20 tag values at a time.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
