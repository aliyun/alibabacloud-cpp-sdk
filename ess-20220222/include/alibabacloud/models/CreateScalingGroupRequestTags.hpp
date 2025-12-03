// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingGroupRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingGroupRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Propagate, propagate_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingGroupRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Propagate, propagate_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateScalingGroupRequestTags() = default ;
    CreateScalingGroupRequestTags(const CreateScalingGroupRequestTags &) = default ;
    CreateScalingGroupRequestTags(CreateScalingGroupRequestTags &&) = default ;
    CreateScalingGroupRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingGroupRequestTags() = default ;
    CreateScalingGroupRequestTags& operator=(const CreateScalingGroupRequestTags &) = default ;
    CreateScalingGroupRequestTags& operator=(CreateScalingGroupRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->propagate_ == nullptr && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateScalingGroupRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // propagate Field Functions 
    bool hasPropagate() const { return this->propagate_ != nullptr;};
    void deletePropagate() { this->propagate_ = nullptr;};
    inline bool propagate() const { DARABONBA_PTR_GET_DEFAULT(propagate_, false) };
    inline CreateScalingGroupRequestTags& setPropagate(bool propagate) { DARABONBA_PTR_SET_VALUE(propagate_, propagate) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateScalingGroupRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the scaling group.
    std::shared_ptr<string> key_ = nullptr;
    // Identifies whether the tag is a propagatable tag. Valid values:
    // 
    // *   true: propagates the tag to only instances that are newly created.
    // *   false: does not propagate the tag to any instances.
    // 
    // Default value: false.
    std::shared_ptr<bool> propagate_ = nullptr;
    // The tag value of the scaling group.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
