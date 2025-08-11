// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOPILOTEMBEDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOPILOTEMBEDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ModifyCopilotEmbedConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCopilotEmbedConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(CopilotId, copilotId_);
      DARABONBA_PTR_TO_JSON(DataRange, dataRange_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCopilotEmbedConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(CopilotId, copilotId_);
      DARABONBA_PTR_FROM_JSON(DataRange, dataRange_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    ModifyCopilotEmbedConfigRequest() = default ;
    ModifyCopilotEmbedConfigRequest(const ModifyCopilotEmbedConfigRequest &) = default ;
    ModifyCopilotEmbedConfigRequest(ModifyCopilotEmbedConfigRequest &&) = default ;
    ModifyCopilotEmbedConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCopilotEmbedConfigRequest() = default ;
    ModifyCopilotEmbedConfigRequest& operator=(const ModifyCopilotEmbedConfigRequest &) = default ;
    ModifyCopilotEmbedConfigRequest& operator=(ModifyCopilotEmbedConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentName_ != nullptr
        && this->copilotId_ != nullptr && this->dataRange_ != nullptr && this->moduleName_ != nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ModifyCopilotEmbedConfigRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // copilotId Field Functions 
    bool hasCopilotId() const { return this->copilotId_ != nullptr;};
    void deleteCopilotId() { this->copilotId_ = nullptr;};
    inline string copilotId() const { DARABONBA_PTR_GET_DEFAULT(copilotId_, "") };
    inline ModifyCopilotEmbedConfigRequest& setCopilotId(string copilotId) { DARABONBA_PTR_SET_VALUE(copilotId_, copilotId) };


    // dataRange Field Functions 
    bool hasDataRange() const { return this->dataRange_ != nullptr;};
    void deleteDataRange() { this->dataRange_ = nullptr;};
    inline string dataRange() const { DARABONBA_PTR_GET_DEFAULT(dataRange_, "") };
    inline ModifyCopilotEmbedConfigRequest& setDataRange(string dataRange) { DARABONBA_PTR_SET_VALUE(dataRange_, dataRange) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ModifyCopilotEmbedConfigRequest& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // Agent nickname.
    std::shared_ptr<string> agentName_ = nullptr;
    // Embedding ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> copilotId_ = nullptr;
    // Data range.
    // >Notice: The parameter type is jsonString, and only one switch between analysis themes and query resources can be effective. When the all-select switch is true, it takes precedence. It is recommended to pass only one parameter, with other notes
    std::shared_ptr<string> dataRange_ = nullptr;
    // Module name.
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
