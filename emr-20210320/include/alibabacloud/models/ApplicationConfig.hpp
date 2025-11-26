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
        && return this->configFileName_ == nullptr && return this->configItemKey_ == nullptr && return this->configItemValue_ == nullptr && return this->configScope_ == nullptr && return this->nodeGroupId_ == nullptr
        && return this->nodeGroupName_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ApplicationConfig& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline ApplicationConfig& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // configItemKey Field Functions 
    bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
    void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
    inline string configItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
    inline ApplicationConfig& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


    // configItemValue Field Functions 
    bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
    void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
    inline string configItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
    inline ApplicationConfig& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


    // configScope Field Functions 
    bool hasConfigScope() const { return this->configScope_ != nullptr;};
    void deleteConfigScope() { this->configScope_ = nullptr;};
    inline string configScope() const { DARABONBA_PTR_GET_DEFAULT(configScope_, "") };
    inline ApplicationConfig& setConfigScope(string configScope) { DARABONBA_PTR_SET_VALUE(configScope_, configScope) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ApplicationConfig& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline ApplicationConfig& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


  protected:
    // 应用名称。从EMR控制台集群创建页面可查看到指定发行版的应用名称列表。
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    // 应用配置文件名。
    // 
    // This parameter is required.
    std::shared_ptr<string> configFileName_ = nullptr;
    // 配置项键。
    // 
    // This parameter is required.
    std::shared_ptr<string> configItemKey_ = nullptr;
    // 配置项值。
    std::shared_ptr<string> configItemValue_ = nullptr;
    // 配置范围。取值范围：
    // - CLUSTER：集群级别。
    // - NODE_GROUP：节点组级别。
    // 
    // 默认值：CLUSTER。
    std::shared_ptr<string> configScope_ = nullptr;
    // 节点组ID。ConfigScope取值NODE_GROUP时，该参数生效。NodeGroupId参数优先级高于NodeGroupName。
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // 节点组名称。ConfigScope取值NODE_GROUP时，且参数NodeGroupId为空时生效，该参数生效。
    std::shared_ptr<string> nodeGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
