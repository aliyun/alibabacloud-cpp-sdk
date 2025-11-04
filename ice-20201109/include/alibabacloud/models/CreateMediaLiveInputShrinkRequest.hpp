// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVEINPUTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveInputShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveInputShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputSettings, inputSettingsShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveInputShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputSettings, inputSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateMediaLiveInputShrinkRequest() = default ;
    CreateMediaLiveInputShrinkRequest(const CreateMediaLiveInputShrinkRequest &) = default ;
    CreateMediaLiveInputShrinkRequest(CreateMediaLiveInputShrinkRequest &&) = default ;
    CreateMediaLiveInputShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveInputShrinkRequest() = default ;
    CreateMediaLiveInputShrinkRequest& operator=(const CreateMediaLiveInputShrinkRequest &) = default ;
    CreateMediaLiveInputShrinkRequest& operator=(CreateMediaLiveInputShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputSettingsShrink_ == nullptr
        && return this->name_ == nullptr && return this->securityGroupIdsShrink_ == nullptr && return this->type_ == nullptr; };
    // inputSettingsShrink Field Functions 
    bool hasInputSettingsShrink() const { return this->inputSettingsShrink_ != nullptr;};
    void deleteInputSettingsShrink() { this->inputSettingsShrink_ = nullptr;};
    inline string inputSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(inputSettingsShrink_, "") };
    inline CreateMediaLiveInputShrinkRequest& setInputSettingsShrink(string inputSettingsShrink) { DARABONBA_PTR_SET_VALUE(inputSettingsShrink_, inputSettingsShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMediaLiveInputShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupIdsShrink Field Functions 
    bool hasSecurityGroupIdsShrink() const { return this->securityGroupIdsShrink_ != nullptr;};
    void deleteSecurityGroupIdsShrink() { this->securityGroupIdsShrink_ = nullptr;};
    inline string securityGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(securityGroupIdsShrink_, "") };
    inline CreateMediaLiveInputShrinkRequest& setSecurityGroupIdsShrink(string securityGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(securityGroupIdsShrink_, securityGroupIdsShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMediaLiveInputShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The input settings. An input can have up to two sources: primary and backup sources.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputSettingsShrink_ = nullptr;
    // The name of the input. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of the security groups to be associated with the input. This parameter is required for PUSH inputs.
    std::shared_ptr<string> securityGroupIdsShrink_ = nullptr;
    // The input type. Valid values: RTMP_PUSH, RTMP_PULL, SRT_PUSH, SRT_PULL, and MEDIA_CONNECT.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
