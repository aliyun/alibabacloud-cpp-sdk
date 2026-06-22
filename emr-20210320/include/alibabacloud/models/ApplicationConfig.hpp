// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLICATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_APPLICATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ApplicationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplicationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_TO_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_TO_JSON(ConfigItemValue, configItemValue_);
      DARABONBA_PTR_TO_JSON(ConfigScope, configScope_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ApplicationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_FROM_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_FROM_JSON(ConfigItemValue, configItemValue_);
      DARABONBA_PTR_FROM_JSON(ConfigScope, configScope_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
    };
    ApplicationConfig() = default ;
    ApplicationConfig(const ApplicationConfig &) = default ;
    ApplicationConfig(ApplicationConfig &&) = default ;
    ApplicationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplicationConfig() = default ;
    ApplicationConfig& operator=(const ApplicationConfig &) = default ;
    ApplicationConfig& operator=(ApplicationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->configFileName_ == nullptr && this->configItemKey_ == nullptr && this->configItemValue_ == nullptr && this->configScope_ == nullptr && this->nodeGroupId_ == nullptr
        && this->nodeGroupName_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ApplicationConfig& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string getConfigFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline ApplicationConfig& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // configItemKey Field Functions 
    bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
    void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
    inline string getConfigItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
    inline ApplicationConfig& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


    // configItemValue Field Functions 
    bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
    void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
    inline string getConfigItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
    inline ApplicationConfig& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


    // configScope Field Functions 
    bool hasConfigScope() const { return this->configScope_ != nullptr;};
    void deleteConfigScope() { this->configScope_ = nullptr;};
    inline string getConfigScope() const { DARABONBA_PTR_GET_DEFAULT(configScope_, "") };
    inline ApplicationConfig& setConfigScope(string configScope) { DARABONBA_PTR_SET_VALUE(configScope_, configScope) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ApplicationConfig& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline ApplicationConfig& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


  protected:
    // The name of the application. You can view the application names of each EMR version on the cluster creation page in the EMR console.
    // 
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    // The name of the configuration file.
    // 
    // This parameter is required.
    shared_ptr<string> configFileName_ {};
    // The key of the configuration item.
    // 
    // This parameter is required.
    shared_ptr<string> configItemKey_ {};
    // The value of the configuration item.
    shared_ptr<string> configItemValue_ {};
    // The level at which you want to apply the configurations. Valid values:
    // 
    // *   CLUSTER
    // *   NODE_GROUP
    // 
    // Default value: CLUSTER.
    shared_ptr<string> configScope_ {};
    // The node group ID. This parameter takes effect only when the ConfigScope parameter is set to NODE_GROUP. The NodeGroupId parameter has a higher priority than the NodeGroupName parameter.
    shared_ptr<string> nodeGroupId_ {};
    // The name of the node group. This parameter takes effect only when the ConfigScope parameter is set to NODE_GROUP and the NodeGroupId parameter is not configured.
    shared_ptr<string> nodeGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
