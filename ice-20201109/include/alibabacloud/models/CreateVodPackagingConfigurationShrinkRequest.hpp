// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGCONFIGURATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateVodPackagingConfigurationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationName, configurationName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PackageConfig, packageConfigShrink_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationName, configurationName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PackageConfig, packageConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    CreateVodPackagingConfigurationShrinkRequest() = default ;
    CreateVodPackagingConfigurationShrinkRequest(const CreateVodPackagingConfigurationShrinkRequest &) = default ;
    CreateVodPackagingConfigurationShrinkRequest(CreateVodPackagingConfigurationShrinkRequest &&) = default ;
    CreateVodPackagingConfigurationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingConfigurationShrinkRequest() = default ;
    CreateVodPackagingConfigurationShrinkRequest& operator=(const CreateVodPackagingConfigurationShrinkRequest &) = default ;
    CreateVodPackagingConfigurationShrinkRequest& operator=(CreateVodPackagingConfigurationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configurationName_ == nullptr
        && return this->description_ == nullptr && return this->groupName_ == nullptr && return this->packageConfigShrink_ == nullptr && return this->protocol_ == nullptr; };
    // configurationName Field Functions 
    bool hasConfigurationName() const { return this->configurationName_ != nullptr;};
    void deleteConfigurationName() { this->configurationName_ = nullptr;};
    inline string configurationName() const { DARABONBA_PTR_GET_DEFAULT(configurationName_, "") };
    inline CreateVodPackagingConfigurationShrinkRequest& setConfigurationName(string configurationName) { DARABONBA_PTR_SET_VALUE(configurationName_, configurationName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVodPackagingConfigurationShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateVodPackagingConfigurationShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // packageConfigShrink Field Functions 
    bool hasPackageConfigShrink() const { return this->packageConfigShrink_ != nullptr;};
    void deletePackageConfigShrink() { this->packageConfigShrink_ = nullptr;};
    inline string packageConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(packageConfigShrink_, "") };
    inline CreateVodPackagingConfigurationShrinkRequest& setPackageConfigShrink(string packageConfigShrink) { DARABONBA_PTR_SET_VALUE(packageConfigShrink_, packageConfigShrink) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateVodPackagingConfigurationShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The name of the packaging configuration. The name must be unique in an account and can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> configurationName_ = nullptr;
    // The description of the packaging configuration.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the packaging group. The name can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> groupName_ = nullptr;
    // The packaging configuration.
    std::shared_ptr<string> packageConfigShrink_ = nullptr;
    // The package type.
    // 
    // *   HLS: packages content into TS segments for delivery over the HLS protocol.
    // *   HLS_CMAF: packages content into CMAF segments for delivery over the HLS protocol.
    // *   DASH: packages content for delivery over the DASH protocol.
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
