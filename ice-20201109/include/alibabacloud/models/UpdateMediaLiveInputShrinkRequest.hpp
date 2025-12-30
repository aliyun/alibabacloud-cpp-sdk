// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVEINPUTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveInputShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveInputShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(InputSettings, inputSettingsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveInputShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(InputSettings, inputSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIdsShrink_);
    };
    UpdateMediaLiveInputShrinkRequest() = default ;
    UpdateMediaLiveInputShrinkRequest(const UpdateMediaLiveInputShrinkRequest &) = default ;
    UpdateMediaLiveInputShrinkRequest(UpdateMediaLiveInputShrinkRequest &&) = default ;
    UpdateMediaLiveInputShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveInputShrinkRequest() = default ;
    UpdateMediaLiveInputShrinkRequest& operator=(const UpdateMediaLiveInputShrinkRequest &) = default ;
    UpdateMediaLiveInputShrinkRequest& operator=(UpdateMediaLiveInputShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputId_ == nullptr
        && this->inputSettingsShrink_ == nullptr && this->name_ == nullptr && this->securityGroupIdsShrink_ == nullptr; };
    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string getInputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline UpdateMediaLiveInputShrinkRequest& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // inputSettingsShrink Field Functions 
    bool hasInputSettingsShrink() const { return this->inputSettingsShrink_ != nullptr;};
    void deleteInputSettingsShrink() { this->inputSettingsShrink_ = nullptr;};
    inline string getInputSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(inputSettingsShrink_, "") };
    inline UpdateMediaLiveInputShrinkRequest& setInputSettingsShrink(string inputSettingsShrink) { DARABONBA_PTR_SET_VALUE(inputSettingsShrink_, inputSettingsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveInputShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupIdsShrink Field Functions 
    bool hasSecurityGroupIdsShrink() const { return this->securityGroupIdsShrink_ != nullptr;};
    void deleteSecurityGroupIdsShrink() { this->securityGroupIdsShrink_ = nullptr;};
    inline string getSecurityGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(securityGroupIdsShrink_, "") };
    inline UpdateMediaLiveInputShrinkRequest& setSecurityGroupIdsShrink(string securityGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(securityGroupIdsShrink_, securityGroupIdsShrink) };


  protected:
    // The ID of the input.
    // 
    // This parameter is required.
    shared_ptr<string> inputId_ {};
    // The input settings. An input can have up to two sources: primary and backup sources.
    // 
    // This parameter is required.
    shared_ptr<string> inputSettingsShrink_ {};
    // The name of the input. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The IDs of the security groups to be associated with the input. This parameter is required for PUSH inputs.
    shared_ptr<string> securityGroupIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
