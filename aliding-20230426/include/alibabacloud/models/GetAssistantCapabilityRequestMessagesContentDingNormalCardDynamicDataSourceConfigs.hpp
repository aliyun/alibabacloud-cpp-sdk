// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTDINGNORMALCARDDYNAMICDATASOURCECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTDINGNORMALCARDDYNAMICDATASOURCECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& obj) { 
      DARABONBA_ANY_TO_JSON(constParams, constParams_);
      DARABONBA_PTR_TO_JSON(dynamicDataSourceId, dynamicDataSourceId_);
      DARABONBA_PTR_TO_JSON(pullConfig, pullConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& obj) { 
      DARABONBA_ANY_FROM_JSON(constParams, constParams_);
      DARABONBA_PTR_FROM_JSON(dynamicDataSourceId, dynamicDataSourceId_);
      DARABONBA_PTR_FROM_JSON(pullConfig, pullConfig_);
    };
    GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs() = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs(const GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs &) = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs(GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs &&) = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs() = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& operator=(const GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs &) = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& operator=(GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constParams_ == nullptr
        && return this->dynamicDataSourceId_ == nullptr && return this->pullConfig_ == nullptr; };
    // constParams Field Functions 
    bool hasConstParams() const { return this->constParams_ != nullptr;};
    void deleteConstParams() { this->constParams_ = nullptr;};
    inline     const Darabonba::Json & constParams() const { DARABONBA_GET(constParams_) };
    Darabonba::Json & constParams() { DARABONBA_GET(constParams_) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& setConstParams(const Darabonba::Json & constParams) { DARABONBA_SET_VALUE(constParams_, constParams) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& setConstParams(Darabonba::Json & constParams) { DARABONBA_SET_RVALUE(constParams_, constParams) };


    // dynamicDataSourceId Field Functions 
    bool hasDynamicDataSourceId() const { return this->dynamicDataSourceId_ != nullptr;};
    void deleteDynamicDataSourceId() { this->dynamicDataSourceId_ = nullptr;};
    inline string dynamicDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dynamicDataSourceId_, "") };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& setDynamicDataSourceId(string dynamicDataSourceId) { DARABONBA_PTR_SET_VALUE(dynamicDataSourceId_, dynamicDataSourceId) };


    // pullConfig Field Functions 
    bool hasPullConfig() const { return this->pullConfig_ != nullptr;};
    void deletePullConfig() { this->pullConfig_ = nullptr;};
    inline const Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig & pullConfig() const { DARABONBA_PTR_GET_CONST(pullConfig_, Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig) };
    inline Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig pullConfig() { DARABONBA_PTR_GET(pullConfig_, Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& setPullConfig(const Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig & pullConfig) { DARABONBA_PTR_SET_VALUE(pullConfig_, pullConfig) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs& setPullConfig(Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig && pullConfig) { DARABONBA_PTR_SET_RVALUE(pullConfig_, pullConfig) };


  protected:
    Darabonba::Json constParams_ = nullptr;
    std::shared_ptr<string> dynamicDataSourceId_ = nullptr;
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigsPullConfig> pullConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
