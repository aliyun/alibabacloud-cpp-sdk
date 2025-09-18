// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLICATIONCONFIGURATIONFILE_HPP_
#define ALIBABACLOUD_MODELS_APPLICATIONCONFIGURATIONFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ApplicationConfigurationFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplicationConfigurationFile& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigFileFormat, configFileFormat_);
      DARABONBA_PTR_TO_JSON(ConfigFileGroup, configFileGroup_);
      DARABONBA_PTR_TO_JSON(ConfigFileLink, configFileLink_);
      DARABONBA_PTR_TO_JSON(ConfigFileMode, configFileMode_);
      DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_TO_JSON(ConfigFileOwner, configFileOwner_);
      DARABONBA_PTR_TO_JSON(ConfigFilePath, configFilePath_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplicationConfigurationFile& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigFileFormat, configFileFormat_);
      DARABONBA_PTR_FROM_JSON(ConfigFileGroup, configFileGroup_);
      DARABONBA_PTR_FROM_JSON(ConfigFileLink, configFileLink_);
      DARABONBA_PTR_FROM_JSON(ConfigFileMode, configFileMode_);
      DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_FROM_JSON(ConfigFileOwner, configFileOwner_);
      DARABONBA_PTR_FROM_JSON(ConfigFilePath, configFilePath_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ApplicationConfigurationFile() = default ;
    ApplicationConfigurationFile(const ApplicationConfigurationFile &) = default ;
    ApplicationConfigurationFile(ApplicationConfigurationFile &&) = default ;
    ApplicationConfigurationFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplicationConfigurationFile() = default ;
    ApplicationConfigurationFile& operator=(const ApplicationConfigurationFile &) = default ;
    ApplicationConfigurationFile& operator=(ApplicationConfigurationFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->clusterId_ != nullptr && this->configFileFormat_ != nullptr && this->configFileGroup_ != nullptr && this->configFileLink_ != nullptr && this->configFileMode_ != nullptr
        && this->configFileName_ != nullptr && this->configFileOwner_ != nullptr && this->configFilePath_ != nullptr && this->description_ != nullptr && this->nodeGroupId_ != nullptr
        && this->nodeId_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ApplicationConfigurationFile& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ApplicationConfigurationFile& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configFileFormat Field Functions 
    bool hasConfigFileFormat() const { return this->configFileFormat_ != nullptr;};
    void deleteConfigFileFormat() { this->configFileFormat_ = nullptr;};
    inline string configFileFormat() const { DARABONBA_PTR_GET_DEFAULT(configFileFormat_, "") };
    inline ApplicationConfigurationFile& setConfigFileFormat(string configFileFormat) { DARABONBA_PTR_SET_VALUE(configFileFormat_, configFileFormat) };


    // configFileGroup Field Functions 
    bool hasConfigFileGroup() const { return this->configFileGroup_ != nullptr;};
    void deleteConfigFileGroup() { this->configFileGroup_ = nullptr;};
    inline string configFileGroup() const { DARABONBA_PTR_GET_DEFAULT(configFileGroup_, "") };
    inline ApplicationConfigurationFile& setConfigFileGroup(string configFileGroup) { DARABONBA_PTR_SET_VALUE(configFileGroup_, configFileGroup) };


    // configFileLink Field Functions 
    bool hasConfigFileLink() const { return this->configFileLink_ != nullptr;};
    void deleteConfigFileLink() { this->configFileLink_ = nullptr;};
    inline string configFileLink() const { DARABONBA_PTR_GET_DEFAULT(configFileLink_, "") };
    inline ApplicationConfigurationFile& setConfigFileLink(string configFileLink) { DARABONBA_PTR_SET_VALUE(configFileLink_, configFileLink) };


    // configFileMode Field Functions 
    bool hasConfigFileMode() const { return this->configFileMode_ != nullptr;};
    void deleteConfigFileMode() { this->configFileMode_ = nullptr;};
    inline string configFileMode() const { DARABONBA_PTR_GET_DEFAULT(configFileMode_, "") };
    inline ApplicationConfigurationFile& setConfigFileMode(string configFileMode) { DARABONBA_PTR_SET_VALUE(configFileMode_, configFileMode) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline ApplicationConfigurationFile& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // configFileOwner Field Functions 
    bool hasConfigFileOwner() const { return this->configFileOwner_ != nullptr;};
    void deleteConfigFileOwner() { this->configFileOwner_ = nullptr;};
    inline string configFileOwner() const { DARABONBA_PTR_GET_DEFAULT(configFileOwner_, "") };
    inline ApplicationConfigurationFile& setConfigFileOwner(string configFileOwner) { DARABONBA_PTR_SET_VALUE(configFileOwner_, configFileOwner) };


    // configFilePath Field Functions 
    bool hasConfigFilePath() const { return this->configFilePath_ != nullptr;};
    void deleteConfigFilePath() { this->configFilePath_ = nullptr;};
    inline string configFilePath() const { DARABONBA_PTR_GET_DEFAULT(configFilePath_, "") };
    inline ApplicationConfigurationFile& setConfigFilePath(string configFilePath) { DARABONBA_PTR_SET_VALUE(configFilePath_, configFilePath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ApplicationConfigurationFile& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ApplicationConfigurationFile& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ApplicationConfigurationFile& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    std::shared_ptr<string> applicationName_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> configFileFormat_ = nullptr;
    std::shared_ptr<string> configFileGroup_ = nullptr;
    std::shared_ptr<string> configFileLink_ = nullptr;
    std::shared_ptr<string> configFileMode_ = nullptr;
    std::shared_ptr<string> configFileName_ = nullptr;
    std::shared_ptr<string> configFileOwner_ = nullptr;
    std::shared_ptr<string> configFilePath_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
