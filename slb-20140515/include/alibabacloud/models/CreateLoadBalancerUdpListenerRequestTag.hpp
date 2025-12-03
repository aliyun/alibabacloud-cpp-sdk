// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERUDPLISTENERREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERUDPLISTENERREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateLoadBalancerUDPListenerRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerUDPListenerRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerUDPListenerRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateLoadBalancerUDPListenerRequestTag() = default ;
    CreateLoadBalancerUDPListenerRequestTag(const CreateLoadBalancerUDPListenerRequestTag &) = default ;
    CreateLoadBalancerUDPListenerRequestTag(CreateLoadBalancerUDPListenerRequestTag &&) = default ;
    CreateLoadBalancerUDPListenerRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerUDPListenerRequestTag() = default ;
    CreateLoadBalancerUDPListenerRequestTag& operator=(const CreateLoadBalancerUDPListenerRequestTag &) = default ;
    CreateLoadBalancerUDPListenerRequestTag& operator=(CreateLoadBalancerUDPListenerRequestTag &&) = default ;
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
    inline CreateLoadBalancerUDPListenerRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateLoadBalancerUDPListenerRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. You can specify up to 20 tag keys. The tag key cannot be an empty string.
    // 
    // The tag key must be 1 to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. Valid values of N: **1 to 20**. The tag value can be an empty string.
    // 
    // The tag value can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag value cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
