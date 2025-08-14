// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VODPACKAGINGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_VODPACKAGINGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VodPackagingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class VodPackagingConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VodPackagingConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigurationName, configurationName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, VodPackagingConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigurationName, configurationName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PackageConfig, packageConfig_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    VodPackagingConfiguration() = default ;
    VodPackagingConfiguration(const VodPackagingConfiguration &) = default ;
    VodPackagingConfiguration(VodPackagingConfiguration &&) = default ;
    VodPackagingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VodPackagingConfiguration() = default ;
    VodPackagingConfiguration& operator=(const VodPackagingConfiguration &) = default ;
    VodPackagingConfiguration& operator=(VodPackagingConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configurationName_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->groupName_ != nullptr && this->packageConfig_ != nullptr && this->protocol_ != nullptr; };
    // configurationName Field Functions 
    bool hasConfigurationName() const { return this->configurationName_ != nullptr;};
    void deleteConfigurationName() { this->configurationName_ = nullptr;};
    inline string configurationName() const { DARABONBA_PTR_GET_DEFAULT(configurationName_, "") };
    inline VodPackagingConfiguration& setConfigurationName(string configurationName) { DARABONBA_PTR_SET_VALUE(configurationName_, configurationName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline VodPackagingConfiguration& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline VodPackagingConfiguration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline VodPackagingConfiguration& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // packageConfig Field Functions 
    bool hasPackageConfig() const { return this->packageConfig_ != nullptr;};
    void deletePackageConfig() { this->packageConfig_ = nullptr;};
    inline const VodPackagingConfig & packageConfig() const { DARABONBA_PTR_GET_CONST(packageConfig_, VodPackagingConfig) };
    inline VodPackagingConfig packageConfig() { DARABONBA_PTR_GET(packageConfig_, VodPackagingConfig) };
    inline VodPackagingConfiguration& setPackageConfig(const VodPackagingConfig & packageConfig) { DARABONBA_PTR_SET_VALUE(packageConfig_, packageConfig) };
    inline VodPackagingConfiguration& setPackageConfig(VodPackagingConfig && packageConfig) { DARABONBA_PTR_SET_RVALUE(packageConfig_, packageConfig) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline VodPackagingConfiguration& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<string> configurationName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<VodPackagingConfig> packageConfig_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
