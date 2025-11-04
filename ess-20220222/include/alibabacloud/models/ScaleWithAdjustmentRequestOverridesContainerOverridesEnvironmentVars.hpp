// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTREQUESTOVERRIDESCONTAINEROVERRIDESENVIRONMENTVARS_HPP_
#define ALIBABACLOUD_MODELS_SCALEWITHADJUSTMENTREQUESTOVERRIDESCONTAINEROVERRIDESENVIRONMENTVARS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars() = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars(const ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars &) = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars(ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars &&) = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars() = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars& operator=(const ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars &) = default ;
    ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars& operator=(ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars &&) = default ;
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
    inline ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ScaleWithAdjustmentRequestOverridesContainerOverridesEnvironmentVars& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the environment variable. The name must be 1 to 128 characters in length. Format requirement: `[0-9a-zA-Z]` and underscores (_). It cannot start with a digit.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the environment variable. The value can be up to 256 characters in length.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
