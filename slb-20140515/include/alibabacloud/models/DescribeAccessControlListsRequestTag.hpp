// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessControlListsRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListsRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListsRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeAccessControlListsRequestTag() = default ;
    DescribeAccessControlListsRequestTag(const DescribeAccessControlListsRequestTag &) = default ;
    DescribeAccessControlListsRequestTag(DescribeAccessControlListsRequestTag &&) = default ;
    DescribeAccessControlListsRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListsRequestTag() = default ;
    DescribeAccessControlListsRequestTag& operator=(const DescribeAccessControlListsRequestTag &) = default ;
    DescribeAccessControlListsRequestTag& operator=(DescribeAccessControlListsRequestTag &&) = default ;
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
    inline DescribeAccessControlListsRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAccessControlListsRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. You can specify up to 20 tag keys. The tag key cannot be an empty string.
    // 
    // The tag key must be 1 to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. You can specify at most 20 tag values. The tag value cannot be an empty string.
    // 
    // The tag value must be 1 to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
