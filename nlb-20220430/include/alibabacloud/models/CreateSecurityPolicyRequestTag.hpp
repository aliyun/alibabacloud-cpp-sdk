// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYPOLICYREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYPOLICYREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class CreateSecurityPolicyRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityPolicyRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityPolicyRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateSecurityPolicyRequestTag() = default ;
    CreateSecurityPolicyRequestTag(const CreateSecurityPolicyRequestTag &) = default ;
    CreateSecurityPolicyRequestTag(CreateSecurityPolicyRequestTag &&) = default ;
    CreateSecurityPolicyRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityPolicyRequestTag() = default ;
    CreateSecurityPolicyRequestTag& operator=(const CreateSecurityPolicyRequestTag &) = default ;
    CreateSecurityPolicyRequestTag& operator=(CreateSecurityPolicyRequestTag &&) = default ;
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
    inline CreateSecurityPolicyRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateSecurityPolicyRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. It must be 1 to 64 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. It can contain letters, digits, underscores (_), periods (.), colons (:), forward slashes (/), equal signs (=), plus signs (+), minus signs (-), and at signs (@).
    // 
    // You can add up to 20 tags for the security policy in each call.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag. It must be 1 to 128 characters in length, cannot start with `acs:` or `aliyun`, and cannot contain `http://` or `https://`. It can contain letters, digits, underscores (_), periods (.), colons (:), forward slashes (/), equal signs (=), plus signs (+), minus signs (-), and at signs (@).
    // 
    // You can add up to 20 tags for the security policy in each call.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
