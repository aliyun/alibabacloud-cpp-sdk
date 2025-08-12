// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRESPONSEBODYSECURITYPOLICIESTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRESPONSEBODYSECURITYPOLICIESTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSecurityPolicyResponseBodySecurityPoliciesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyResponseBodySecurityPoliciesTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyResponseBodySecurityPoliciesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListSecurityPolicyResponseBodySecurityPoliciesTags() = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesTags(const ListSecurityPolicyResponseBodySecurityPoliciesTags &) = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesTags(ListSecurityPolicyResponseBodySecurityPoliciesTags &&) = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyResponseBodySecurityPoliciesTags() = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesTags& operator=(const ListSecurityPolicyResponseBodySecurityPoliciesTags &) = default ;
    ListSecurityPolicyResponseBodySecurityPoliciesTags& operator=(ListSecurityPolicyResponseBodySecurityPoliciesTags &&) = default ;
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
    inline ListSecurityPolicyResponseBodySecurityPoliciesTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListSecurityPolicyResponseBodySecurityPoliciesTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. You can specify up to 10 tag keys.
    // 
    // The tag key can be up to 64 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. You can specify up to 10 tag values.
    // 
    // The tag value can be up to 128 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
