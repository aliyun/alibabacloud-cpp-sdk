// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLICATIONCONFIGPARAM_HPP_
#define ALIBABACLOUD_MODELS_APPLICATIONCONFIGPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ApplicationConfigParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplicationConfigParam& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigAction, configAction_);
      DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_TO_JSON(ConfigItemDescription, configItemDescription_);
      DARABONBA_PTR_TO_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_TO_JSON(ConfigItemValue, configItemValue_);
      DARABONBA_PTR_TO_JSON(ConfigScope, configScope_);
      DARABONBA_PTR_TO_JSON(EffectiveActions, effectiveActions_);
      DARABONBA_PTR_TO_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplicationConfigParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigAction, configAction_);
      DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_FROM_JSON(ConfigItemDescription, configItemDescription_);
      DARABONBA_PTR_FROM_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_FROM_JSON(ConfigItemValue, configItemValue_);
      DARABONBA_PTR_FROM_JSON(ConfigScope, configScope_);
      DARABONBA_PTR_FROM_JSON(EffectiveActions, effectiveActions_);
      DARABONBA_PTR_FROM_JSON(EffectiveType, effectiveType_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ApplicationConfigParam() = default ;
    ApplicationConfigParam(const ApplicationConfigParam &) = default ;
    ApplicationConfigParam(ApplicationConfigParam &&) = default ;
    ApplicationConfigParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplicationConfigParam() = default ;
    ApplicationConfigParam& operator=(const ApplicationConfigParam &) = default ;
    ApplicationConfigParam& operator=(ApplicationConfigParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configAction_ != nullptr
        && this->configFileName_ != nullptr && this->configItemDescription_ != nullptr && this->configItemKey_ != nullptr && this->configItemValue_ != nullptr && this->configScope_ != nullptr
        && this->effectiveActions_ != nullptr && this->effectiveType_ != nullptr && this->nodeGroupId_ != nullptr && this->nodeId_ != nullptr; };
    // configAction Field Functions 
    bool hasConfigAction() const { return this->configAction_ != nullptr;};
    void deleteConfigAction() { this->configAction_ = nullptr;};
    inline string configAction() const { DARABONBA_PTR_GET_DEFAULT(configAction_, "") };
    inline ApplicationConfigParam& setConfigAction(string configAction) { DARABONBA_PTR_SET_VALUE(configAction_, configAction) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline ApplicationConfigParam& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // configItemDescription Field Functions 
    bool hasConfigItemDescription() const { return this->configItemDescription_ != nullptr;};
    void deleteConfigItemDescription() { this->configItemDescription_ = nullptr;};
    inline string configItemDescription() const { DARABONBA_PTR_GET_DEFAULT(configItemDescription_, "") };
    inline ApplicationConfigParam& setConfigItemDescription(string configItemDescription) { DARABONBA_PTR_SET_VALUE(configItemDescription_, configItemDescription) };


    // configItemKey Field Functions 
    bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
    void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
    inline string configItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
    inline ApplicationConfigParam& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


    // configItemValue Field Functions 
    bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
    void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
    inline string configItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
    inline ApplicationConfigParam& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


    // configScope Field Functions 
    bool hasConfigScope() const { return this->configScope_ != nullptr;};
    void deleteConfigScope() { this->configScope_ = nullptr;};
    inline string configScope() const { DARABONBA_PTR_GET_DEFAULT(configScope_, "") };
    inline ApplicationConfigParam& setConfigScope(string configScope) { DARABONBA_PTR_SET_VALUE(configScope_, configScope) };


    // effectiveActions Field Functions 
    bool hasEffectiveActions() const { return this->effectiveActions_ != nullptr;};
    void deleteEffectiveActions() { this->effectiveActions_ = nullptr;};
    inline string effectiveActions() const { DARABONBA_PTR_GET_DEFAULT(effectiveActions_, "") };
    inline ApplicationConfigParam& setEffectiveActions(string effectiveActions) { DARABONBA_PTR_SET_VALUE(effectiveActions_, effectiveActions) };


    // effectiveType Field Functions 
    bool hasEffectiveType() const { return this->effectiveType_ != nullptr;};
    void deleteEffectiveType() { this->effectiveType_ = nullptr;};
    inline string effectiveType() const { DARABONBA_PTR_GET_DEFAULT(effectiveType_, "") };
    inline ApplicationConfigParam& setEffectiveType(string effectiveType) { DARABONBA_PTR_SET_VALUE(effectiveType_, effectiveType) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ApplicationConfigParam& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ApplicationConfigParam& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    std::shared_ptr<string> configAction_ = nullptr;
    std::shared_ptr<string> configFileName_ = nullptr;
    std::shared_ptr<string> configItemDescription_ = nullptr;
    std::shared_ptr<string> configItemKey_ = nullptr;
    std::shared_ptr<string> configItemValue_ = nullptr;
    std::shared_ptr<string> configScope_ = nullptr;
    std::shared_ptr<string> effectiveActions_ = nullptr;
    std::shared_ptr<string> effectiveType_ = nullptr;
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
