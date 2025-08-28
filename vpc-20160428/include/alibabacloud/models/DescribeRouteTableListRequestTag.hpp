// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTableListRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeRouteTableListRequestTag() = default ;
    DescribeRouteTableListRequestTag(const DescribeRouteTableListRequestTag &) = default ;
    DescribeRouteTableListRequestTag(DescribeRouteTableListRequestTag &&) = default ;
    DescribeRouteTableListRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTableListRequestTag() = default ;
    DescribeRouteTableListRequestTag& operator=(const DescribeRouteTableListRequestTag &) = default ;
    DescribeRouteTableListRequestTag& operator=(DescribeRouteTableListRequestTag &&) = default ;
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
    inline DescribeRouteTableListRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeRouteTableListRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The value of tag N to add to the resource. You can specify up to 20 tag values. The tag value can be an empty string.
    // 
    // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N to add to the resource. You can specify up to 20 tag values. The tag value can be an empty string.
    // 
    // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
