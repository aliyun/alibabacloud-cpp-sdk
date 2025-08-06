// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTDINGNORMALCARDDYNAMICDATASOURCECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTDINGNORMALCARDDYNAMICDATASOURCECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& obj) { 
      DARABONBA_ANY_TO_JSON(constParams, constParams_);
      DARABONBA_PTR_TO_JSON(dynamicDataSourceId, dynamicDataSourceId_);
      DARABONBA_PTR_TO_JSON(pullConfig, pullConfig_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& obj) { 
      DARABONBA_ANY_FROM_JSON(constParams, constParams_);
      DARABONBA_PTR_FROM_JSON(dynamicDataSourceId, dynamicDataSourceId_);
      DARABONBA_PTR_FROM_JSON(pullConfig, pullConfig_);
    };
    InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs() = default ;
    InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs(const InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs &) = default ;
    InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs(InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs &&) = default ;
    InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs() = default ;
    InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& operator=(const InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs &) = default ;
    InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& operator=(InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->constParams_ != nullptr
        && this->dynamicDataSourceId_ != nullptr && this->pullConfig_ != nullptr; };
    // constParams Field Functions 
    bool hasConstParams() const { return this->constParams_ != nullptr;};
    void deleteConstParams() { this->constParams_ = nullptr;};
    inline     const Darabonba::Json & constParams() const { DARABONBA_GET(constParams_) };
    Darabonba::Json & constParams() { DARABONBA_GET(constParams_) };
    inline InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& setConstParams(const Darabonba::Json & constParams) { DARABONBA_SET_VALUE(constParams_, constParams) };
    inline InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& setConstParams(Darabonba::Json & constParams) { DARABONBA_SET_RVALUE(constParams_, constParams) };


    // dynamicDataSourceId Field Functions 
    bool hasDynamicDataSourceId() const { return this->dynamicDataSourceId_ != nullptr;};
    void deleteDynamicDataSourceId() { this->dynamicDataSourceId_ = nullptr;};
    inline string dynamicDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dynamicDataSourceId_, "") };
    inline InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& setDynamicDataSourceId(string dynamicDataSourceId) { DARABONBA_PTR_SET_VALUE(dynamicDataSourceId_, dynamicDataSourceId) };


    // pullConfig Field Functions 
    bool hasPullConfig() const { return this->pullConfig_ != nullptr;};
    void deletePullConfig() { this->pullConfig_ = nullptr;};
    inline const Models::InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig & pullConfig() const { DARABONBA_PTR_GET_CONST(pullConfig_, Models::InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig) };
    inline Models::InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig pullConfig() { DARABONBA_PTR_GET(pullConfig_, Models::InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig) };
    inline InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& setPullConfig(const Models::InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig & pullConfig) { DARABONBA_PTR_SET_VALUE(pullConfig_, pullConfig) };
    inline InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs& setPullConfig(Models::InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig && pullConfig) { DARABONBA_PTR_SET_RVALUE(pullConfig_, pullConfig) };


  protected:
    Darabonba::Json constParams_ = nullptr;
    std::shared_ptr<string> dynamicDataSourceId_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig> pullConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
