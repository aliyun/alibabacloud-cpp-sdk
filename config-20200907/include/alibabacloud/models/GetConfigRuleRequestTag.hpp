// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULEREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULEREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetConfigRuleRequestTag() = default ;
    GetConfigRuleRequestTag(const GetConfigRuleRequestTag &) = default ;
    GetConfigRuleRequestTag(GetConfigRuleRequestTag &&) = default ;
    GetConfigRuleRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleRequestTag() = default ;
    GetConfigRuleRequestTag& operator=(const GetConfigRuleRequestTag &) = default ;
    GetConfigRuleRequestTag& operator=(GetConfigRuleRequestTag &&) = default ;
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
    inline GetConfigRuleRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetConfigRuleRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key.
    // 
    // The tag key cannot be an empty string. The tag key can be up to 64 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
    // 
    // You can specify at most 20 tag keys.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. The tag value can be up to 256 characters in length and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
