// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateEciScalingConfigurationRequestTags() = default ;
    CreateEciScalingConfigurationRequestTags(const CreateEciScalingConfigurationRequestTags &) = default ;
    CreateEciScalingConfigurationRequestTags(CreateEciScalingConfigurationRequestTags &&) = default ;
    CreateEciScalingConfigurationRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestTags() = default ;
    CreateEciScalingConfigurationRequestTags& operator=(const CreateEciScalingConfigurationRequestTags &) = default ;
    CreateEciScalingConfigurationRequestTags& operator=(CreateEciScalingConfigurationRequestTags &&) = default ;
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
    inline CreateEciScalingConfigurationRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateEciScalingConfigurationRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the elastic container instance.
    // 
    // The tag key cannot be an empty string. The tag key can be up to 128 characters in length. It cannot start with `acs:` or `aliyun` or contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value of the elastic container instance.
    // 
    // The tag value can be an empty string. The tag value can be up to 128 characters in length. It cannot start with `acs:` and cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
