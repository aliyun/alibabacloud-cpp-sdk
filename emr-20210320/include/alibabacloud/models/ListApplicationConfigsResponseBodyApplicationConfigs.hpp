// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCONFIGSRESPONSEBODYAPPLICATIONCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCONFIGSRESPONSEBODYAPPLICATIONCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListApplicationConfigsResponseBodyApplicationConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationConfigsResponseBodyApplicationConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ConfigEffectState, configEffectState_);
      DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_TO_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_TO_JSON(ConfigItemValue, configItemValue_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Custom, custom_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InitValue, initValue_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationConfigsResponseBodyApplicationConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ConfigEffectState, configEffectState_);
      DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_FROM_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_FROM_JSON(ConfigItemValue, configItemValue_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Custom, custom_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InitValue, initValue_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListApplicationConfigsResponseBodyApplicationConfigs() = default ;
    ListApplicationConfigsResponseBodyApplicationConfigs(const ListApplicationConfigsResponseBodyApplicationConfigs &) = default ;
    ListApplicationConfigsResponseBodyApplicationConfigs(ListApplicationConfigsResponseBodyApplicationConfigs &&) = default ;
    ListApplicationConfigsResponseBodyApplicationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationConfigsResponseBodyApplicationConfigs() = default ;
    ListApplicationConfigsResponseBodyApplicationConfigs& operator=(const ListApplicationConfigsResponseBodyApplicationConfigs &) = default ;
    ListApplicationConfigsResponseBodyApplicationConfigs& operator=(ListApplicationConfigsResponseBodyApplicationConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->configEffectState_ != nullptr && this->configFileName_ != nullptr && this->configItemKey_ != nullptr && this->configItemValue_ != nullptr && this->createTime_ != nullptr
        && this->custom_ != nullptr && this->description_ != nullptr && this->initValue_ != nullptr && this->modifier_ != nullptr && this->nodeGroupId_ != nullptr
        && this->nodeId_ != nullptr && this->updateTime_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // configEffectState Field Functions 
    bool hasConfigEffectState() const { return this->configEffectState_ != nullptr;};
    void deleteConfigEffectState() { this->configEffectState_ = nullptr;};
    inline string configEffectState() const { DARABONBA_PTR_GET_DEFAULT(configEffectState_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setConfigEffectState(string configEffectState) { DARABONBA_PTR_SET_VALUE(configEffectState_, configEffectState) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // configItemKey Field Functions 
    bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
    void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
    inline string configItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


    // configItemValue Field Functions 
    bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
    void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
    inline string configItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // custom Field Functions 
    bool hasCustom() const { return this->custom_ != nullptr;};
    void deleteCustom() { this->custom_ = nullptr;};
    inline bool custom() const { DARABONBA_PTR_GET_DEFAULT(custom_, false) };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setCustom(bool custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // initValue Field Functions 
    bool hasInitValue() const { return this->initValue_ != nullptr;};
    void deleteInitValue() { this->initValue_ = nullptr;};
    inline string initValue() const { DARABONBA_PTR_GET_DEFAULT(initValue_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setInitValue(string initValue) { DARABONBA_PTR_SET_VALUE(initValue_, initValue) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListApplicationConfigsResponseBodyApplicationConfigs& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The name of the application.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The status of the configuration value.
    std::shared_ptr<string> configEffectState_ = nullptr;
    // The name of the configuration file.
    std::shared_ptr<string> configFileName_ = nullptr;
    // The key of the configuration item.
    std::shared_ptr<string> configItemKey_ = nullptr;
    // The value of the configuration item.
    std::shared_ptr<string> configItemValue_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether the configurations are custom.
    std::shared_ptr<bool> custom_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The initial value.
    std::shared_ptr<string> initValue_ = nullptr;
    // The person who modified the configurations.
    std::shared_ptr<string> modifier_ = nullptr;
    // The node group ID.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The update time.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
