// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTLAUNCHCONFIGURATIONTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPREQUESTLAUNCHCONFIGURATIONTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateAutoProvisioningGroupRequestLaunchConfigurationTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupRequestLaunchConfigurationTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupRequestLaunchConfigurationTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateAutoProvisioningGroupRequestLaunchConfigurationTag() = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationTag(const CreateAutoProvisioningGroupRequestLaunchConfigurationTag &) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationTag(CreateAutoProvisioningGroupRequestLaunchConfigurationTag &&) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupRequestLaunchConfigurationTag() = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationTag& operator=(const CreateAutoProvisioningGroupRequestLaunchConfigurationTag &) = default ;
    CreateAutoProvisioningGroupRequestLaunchConfigurationTag& operator=(CreateAutoProvisioningGroupRequestLaunchConfigurationTag &&) = default ;
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
    inline CreateAutoProvisioningGroupRequestLaunchConfigurationTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateAutoProvisioningGroupRequestLaunchConfigurationTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. Valid values of N: 1 to 20. The tag key cannot be an empty string. It can be up to 128 characters in length and cannot start with acs: or aliyun. It cannot contain `http://` or `https://`. If both the LaunchTemplateId and LaunchConfiguration.* parameters are specified, the LaunchTemplateId parameter takes precedence.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag. Valid values of N: 1 to 20. The tag value can be an empty string. It can be up to 128 characters in length. It cannot start with acs: or contain `http://` or `https://`. If both the LaunchTemplateId and LaunchConfiguration.* parameters are specified, the LaunchTemplateId parameter takes precedence.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
