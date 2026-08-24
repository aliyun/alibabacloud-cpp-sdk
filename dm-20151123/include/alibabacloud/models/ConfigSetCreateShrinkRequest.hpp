// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETCREATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETCREATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetCreateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetCreateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(IsPublicChannelBackoff, isPublicChannelBackoff_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ValidationOption, validationOptionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetCreateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(IsPublicChannelBackoff, isPublicChannelBackoff_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ValidationOption, validationOptionShrink_);
    };
    ConfigSetCreateShrinkRequest() = default ;
    ConfigSetCreateShrinkRequest(const ConfigSetCreateShrinkRequest &) = default ;
    ConfigSetCreateShrinkRequest(ConfigSetCreateShrinkRequest &&) = default ;
    ConfigSetCreateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetCreateShrinkRequest() = default ;
    ConfigSetCreateShrinkRequest& operator=(const ConfigSetCreateShrinkRequest &) = default ;
    ConfigSetCreateShrinkRequest& operator=(ConfigSetCreateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->ipPoolId_ == nullptr && this->isPublicChannelBackoff_ == nullptr && this->name_ == nullptr && this->validationOptionShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ConfigSetCreateShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline ConfigSetCreateShrinkRequest& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // isPublicChannelBackoff Field Functions 
    bool hasIsPublicChannelBackoff() const { return this->isPublicChannelBackoff_ != nullptr;};
    void deleteIsPublicChannelBackoff() { this->isPublicChannelBackoff_ = nullptr;};
    inline bool getIsPublicChannelBackoff() const { DARABONBA_PTR_GET_DEFAULT(isPublicChannelBackoff_, false) };
    inline ConfigSetCreateShrinkRequest& setIsPublicChannelBackoff(bool isPublicChannelBackoff) { DARABONBA_PTR_SET_VALUE(isPublicChannelBackoff_, isPublicChannelBackoff) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConfigSetCreateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // validationOptionShrink Field Functions 
    bool hasValidationOptionShrink() const { return this->validationOptionShrink_ != nullptr;};
    void deleteValidationOptionShrink() { this->validationOptionShrink_ = nullptr;};
    inline string getValidationOptionShrink() const { DARABONBA_PTR_GET_DEFAULT(validationOptionShrink_, "") };
    inline ConfigSetCreateShrinkRequest& setValidationOptionShrink(string validationOptionShrink) { DARABONBA_PTR_SET_VALUE(validationOptionShrink_, validationOptionShrink) };


  protected:
    // The description. The description can be up to 50 characters in length.
    shared_ptr<string> description_ {};
    // The ID of the associated IP pool. This parameter is optional.
    shared_ptr<string> ipPoolId_ {};
    shared_ptr<bool> isPublicChannelBackoff_ {};
    // The configuration name. This parameter is required. The name can be up to 50 characters in length and must be unique.
    shared_ptr<string> name_ {};
    shared_ptr<string> validationOptionShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
