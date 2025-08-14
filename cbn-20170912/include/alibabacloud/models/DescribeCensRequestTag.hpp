// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENSREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENSREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCensRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCensRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCensRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeCensRequestTag() = default ;
    DescribeCensRequestTag(const DescribeCensRequestTag &) = default ;
    DescribeCensRequestTag(DescribeCensRequestTag &&) = default ;
    DescribeCensRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCensRequestTag() = default ;
    DescribeCensRequestTag& operator=(const DescribeCensRequestTag &) = default ;
    DescribeCensRequestTag& operator=(DescribeCensRequestTag &&) = default ;
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
    inline DescribeCensRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeCensRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag keys.
    // 
    // The tag keys cannot be an empty string. The tag keys can be up to 64 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
    // 
    // You can specify at most 20 tag keys.
    std::shared_ptr<string> key_ = nullptr;
    // The tag values.
    // 
    // The tag values can be 0 to 128 characters in length, and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
    // 
    // Each tag key must have a unique tag value. You can specify at most 20 tag values in each call.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
