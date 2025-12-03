// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVServerGroupsRequestTag() = default ;
    DescribeVServerGroupsRequestTag(const DescribeVServerGroupsRequestTag &) = default ;
    DescribeVServerGroupsRequestTag(DescribeVServerGroupsRequestTag &&) = default ;
    DescribeVServerGroupsRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsRequestTag() = default ;
    DescribeVServerGroupsRequestTag& operator=(const DescribeVServerGroupsRequestTag &) = default ;
    DescribeVServerGroupsRequestTag& operator=(DescribeVServerGroupsRequestTag &&) = default ;
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
    inline DescribeVServerGroupsRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVServerGroupsRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N. Valid values of N: 1 to 20. The tag key cannot be an empty string.
    // 
    // The tag key can be up to 64 characters in length, and cannot contain `http://` or `https://`. The tag key cannot start with `aliyun` or `acs`:.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. Valid values of N: 1 to 20. The tag value can be an empty string.
    // 
    // The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag value cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
