// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKECOMMANDSHRINKREQUESTRESOURCETAG_HPP_
#define ALIBABACLOUD_MODELS_INVOKECOMMANDSHRINKREQUESTRESOURCETAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class InvokeCommandShrinkRequestResourceTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeCommandShrinkRequestResourceTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeCommandShrinkRequestResourceTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    InvokeCommandShrinkRequestResourceTag() = default ;
    InvokeCommandShrinkRequestResourceTag(const InvokeCommandShrinkRequestResourceTag &) = default ;
    InvokeCommandShrinkRequestResourceTag(InvokeCommandShrinkRequestResourceTag &&) = default ;
    InvokeCommandShrinkRequestResourceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeCommandShrinkRequestResourceTag() = default ;
    InvokeCommandShrinkRequestResourceTag& operator=(const InvokeCommandShrinkRequestResourceTag &) = default ;
    InvokeCommandShrinkRequestResourceTag& operator=(InvokeCommandShrinkRequestResourceTag &&) = default ;
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
    inline InvokeCommandShrinkRequestResourceTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline InvokeCommandShrinkRequestResourceTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of tag N of the instance.
    // 
    // Take note of the following items:
    // 
    // *   This parameter and InstanceId.N are mutually exclusive.
    // *   Valid values of N: 1 to 10. The tag key cannot be an empty string.
    // *   The number of instances that have the specified tags cannot exceed 100. If more than 100 instances have the specified tags, we recommend that you use batch tags such as batch: b1 to group the instances into batches of up to 100 instances.
    // *   The tag key can be up to 64 characters in length and cannot contain http:// or https://. The tag key cannot start with acs: or aliyun.
    std::shared_ptr<string> key_ = nullptr;
    // The value of tag N of the instance.
    // 
    // Take note of the following items:
    // 
    // *   Valid values of N: 1 to 10.
    // *   The tag value can be an empty string.
    // *   The tag value can be up to 128 characters in length and cannot contain http:// or https://.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
