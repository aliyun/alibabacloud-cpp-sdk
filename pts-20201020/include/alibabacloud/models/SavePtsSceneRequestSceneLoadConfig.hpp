// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENELOADCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUESTSCENELOADCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SavePtsSceneRequestSceneLoadConfigApiLoadConfigList.hpp>
#include <alibabacloud/models/SavePtsSceneRequestSceneLoadConfigConfiguration.hpp>
#include <alibabacloud/models/SavePtsSceneRequestSceneLoadConfigRelationLoadConfigList.hpp>
#include <alibabacloud/models/SavePtsSceneRequestSceneLoadConfigVpcLoadConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SavePtsSceneRequestSceneLoadConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavePtsSceneRequestSceneLoadConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_TO_JSON(ApiLoadConfigList, apiLoadConfigList_);
      DARABONBA_PTR_TO_JSON(AutoStep, autoStep_);
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(Increment, increment_);
      DARABONBA_PTR_TO_JSON(KeepTime, keepTime_);
      DARABONBA_PTR_TO_JSON(MaxRunningTime, maxRunningTime_);
      DARABONBA_PTR_TO_JSON(RelationLoadConfigList, relationLoadConfigList_);
      DARABONBA_PTR_TO_JSON(TestMode, testMode_);
      DARABONBA_PTR_TO_JSON(VpcLoadConfig, vpcLoadConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SavePtsSceneRequestSceneLoadConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_FROM_JSON(ApiLoadConfigList, apiLoadConfigList_);
      DARABONBA_PTR_FROM_JSON(AutoStep, autoStep_);
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(Increment, increment_);
      DARABONBA_PTR_FROM_JSON(KeepTime, keepTime_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTime, maxRunningTime_);
      DARABONBA_PTR_FROM_JSON(RelationLoadConfigList, relationLoadConfigList_);
      DARABONBA_PTR_FROM_JSON(TestMode, testMode_);
      DARABONBA_PTR_FROM_JSON(VpcLoadConfig, vpcLoadConfig_);
    };
    SavePtsSceneRequestSceneLoadConfig() = default ;
    SavePtsSceneRequestSceneLoadConfig(const SavePtsSceneRequestSceneLoadConfig &) = default ;
    SavePtsSceneRequestSceneLoadConfig(SavePtsSceneRequestSceneLoadConfig &&) = default ;
    SavePtsSceneRequestSceneLoadConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavePtsSceneRequestSceneLoadConfig() = default ;
    SavePtsSceneRequestSceneLoadConfig& operator=(const SavePtsSceneRequestSceneLoadConfig &) = default ;
    SavePtsSceneRequestSceneLoadConfig& operator=(SavePtsSceneRequestSceneLoadConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentCount_ == nullptr
        && return this->apiLoadConfigList_ == nullptr && return this->autoStep_ == nullptr && return this->configuration_ == nullptr && return this->increment_ == nullptr && return this->keepTime_ == nullptr
        && return this->maxRunningTime_ == nullptr && return this->relationLoadConfigList_ == nullptr && return this->testMode_ == nullptr && return this->vpcLoadConfig_ == nullptr; };
    // agentCount Field Functions 
    bool hasAgentCount() const { return this->agentCount_ != nullptr;};
    void deleteAgentCount() { this->agentCount_ = nullptr;};
    inline int32_t agentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0) };
    inline SavePtsSceneRequestSceneLoadConfig& setAgentCount(int32_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


    // apiLoadConfigList Field Functions 
    bool hasApiLoadConfigList() const { return this->apiLoadConfigList_ != nullptr;};
    void deleteApiLoadConfigList() { this->apiLoadConfigList_ = nullptr;};
    inline const vector<Models::SavePtsSceneRequestSceneLoadConfigApiLoadConfigList> & apiLoadConfigList() const { DARABONBA_PTR_GET_CONST(apiLoadConfigList_, vector<Models::SavePtsSceneRequestSceneLoadConfigApiLoadConfigList>) };
    inline vector<Models::SavePtsSceneRequestSceneLoadConfigApiLoadConfigList> apiLoadConfigList() { DARABONBA_PTR_GET(apiLoadConfigList_, vector<Models::SavePtsSceneRequestSceneLoadConfigApiLoadConfigList>) };
    inline SavePtsSceneRequestSceneLoadConfig& setApiLoadConfigList(const vector<Models::SavePtsSceneRequestSceneLoadConfigApiLoadConfigList> & apiLoadConfigList) { DARABONBA_PTR_SET_VALUE(apiLoadConfigList_, apiLoadConfigList) };
    inline SavePtsSceneRequestSceneLoadConfig& setApiLoadConfigList(vector<Models::SavePtsSceneRequestSceneLoadConfigApiLoadConfigList> && apiLoadConfigList) { DARABONBA_PTR_SET_RVALUE(apiLoadConfigList_, apiLoadConfigList) };


    // autoStep Field Functions 
    bool hasAutoStep() const { return this->autoStep_ != nullptr;};
    void deleteAutoStep() { this->autoStep_ = nullptr;};
    inline bool autoStep() const { DARABONBA_PTR_GET_DEFAULT(autoStep_, false) };
    inline SavePtsSceneRequestSceneLoadConfig& setAutoStep(bool autoStep) { DARABONBA_PTR_SET_VALUE(autoStep_, autoStep) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const Models::SavePtsSceneRequestSceneLoadConfigConfiguration & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, Models::SavePtsSceneRequestSceneLoadConfigConfiguration) };
    inline Models::SavePtsSceneRequestSceneLoadConfigConfiguration configuration() { DARABONBA_PTR_GET(configuration_, Models::SavePtsSceneRequestSceneLoadConfigConfiguration) };
    inline SavePtsSceneRequestSceneLoadConfig& setConfiguration(const Models::SavePtsSceneRequestSceneLoadConfigConfiguration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline SavePtsSceneRequestSceneLoadConfig& setConfiguration(Models::SavePtsSceneRequestSceneLoadConfigConfiguration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // increment Field Functions 
    bool hasIncrement() const { return this->increment_ != nullptr;};
    void deleteIncrement() { this->increment_ = nullptr;};
    inline int32_t increment() const { DARABONBA_PTR_GET_DEFAULT(increment_, 0) };
    inline SavePtsSceneRequestSceneLoadConfig& setIncrement(int32_t increment) { DARABONBA_PTR_SET_VALUE(increment_, increment) };


    // keepTime Field Functions 
    bool hasKeepTime() const { return this->keepTime_ != nullptr;};
    void deleteKeepTime() { this->keepTime_ = nullptr;};
    inline int32_t keepTime() const { DARABONBA_PTR_GET_DEFAULT(keepTime_, 0) };
    inline SavePtsSceneRequestSceneLoadConfig& setKeepTime(int32_t keepTime) { DARABONBA_PTR_SET_VALUE(keepTime_, keepTime) };


    // maxRunningTime Field Functions 
    bool hasMaxRunningTime() const { return this->maxRunningTime_ != nullptr;};
    void deleteMaxRunningTime() { this->maxRunningTime_ = nullptr;};
    inline int32_t maxRunningTime() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTime_, 0) };
    inline SavePtsSceneRequestSceneLoadConfig& setMaxRunningTime(int32_t maxRunningTime) { DARABONBA_PTR_SET_VALUE(maxRunningTime_, maxRunningTime) };


    // relationLoadConfigList Field Functions 
    bool hasRelationLoadConfigList() const { return this->relationLoadConfigList_ != nullptr;};
    void deleteRelationLoadConfigList() { this->relationLoadConfigList_ = nullptr;};
    inline const vector<Models::SavePtsSceneRequestSceneLoadConfigRelationLoadConfigList> & relationLoadConfigList() const { DARABONBA_PTR_GET_CONST(relationLoadConfigList_, vector<Models::SavePtsSceneRequestSceneLoadConfigRelationLoadConfigList>) };
    inline vector<Models::SavePtsSceneRequestSceneLoadConfigRelationLoadConfigList> relationLoadConfigList() { DARABONBA_PTR_GET(relationLoadConfigList_, vector<Models::SavePtsSceneRequestSceneLoadConfigRelationLoadConfigList>) };
    inline SavePtsSceneRequestSceneLoadConfig& setRelationLoadConfigList(const vector<Models::SavePtsSceneRequestSceneLoadConfigRelationLoadConfigList> & relationLoadConfigList) { DARABONBA_PTR_SET_VALUE(relationLoadConfigList_, relationLoadConfigList) };
    inline SavePtsSceneRequestSceneLoadConfig& setRelationLoadConfigList(vector<Models::SavePtsSceneRequestSceneLoadConfigRelationLoadConfigList> && relationLoadConfigList) { DARABONBA_PTR_SET_RVALUE(relationLoadConfigList_, relationLoadConfigList) };


    // testMode Field Functions 
    bool hasTestMode() const { return this->testMode_ != nullptr;};
    void deleteTestMode() { this->testMode_ = nullptr;};
    inline string testMode() const { DARABONBA_PTR_GET_DEFAULT(testMode_, "") };
    inline SavePtsSceneRequestSceneLoadConfig& setTestMode(string testMode) { DARABONBA_PTR_SET_VALUE(testMode_, testMode) };


    // vpcLoadConfig Field Functions 
    bool hasVpcLoadConfig() const { return this->vpcLoadConfig_ != nullptr;};
    void deleteVpcLoadConfig() { this->vpcLoadConfig_ = nullptr;};
    inline const Models::SavePtsSceneRequestSceneLoadConfigVpcLoadConfig & vpcLoadConfig() const { DARABONBA_PTR_GET_CONST(vpcLoadConfig_, Models::SavePtsSceneRequestSceneLoadConfigVpcLoadConfig) };
    inline Models::SavePtsSceneRequestSceneLoadConfigVpcLoadConfig vpcLoadConfig() { DARABONBA_PTR_GET(vpcLoadConfig_, Models::SavePtsSceneRequestSceneLoadConfigVpcLoadConfig) };
    inline SavePtsSceneRequestSceneLoadConfig& setVpcLoadConfig(const Models::SavePtsSceneRequestSceneLoadConfigVpcLoadConfig & vpcLoadConfig) { DARABONBA_PTR_SET_VALUE(vpcLoadConfig_, vpcLoadConfig) };
    inline SavePtsSceneRequestSceneLoadConfig& setVpcLoadConfig(Models::SavePtsSceneRequestSceneLoadConfigVpcLoadConfig && vpcLoadConfig) { DARABONBA_PTR_SET_RVALUE(vpcLoadConfig_, vpcLoadConfig) };


  protected:
    // The number of load generators. If the number of concurrent virtual users exceeds 250 or the RPS exceeds 2,000, you can use multiple load generators. The maximum number of load generators is limited to the total number of concurrent virtual users divided by 250 or the total RPS divided by 200.
    std::shared_ptr<int32_t> agentCount_ = nullptr;
    // The API request load settings.
    std::shared_ptr<vector<Models::SavePtsSceneRequestSceneLoadConfigApiLoadConfigList>> apiLoadConfigList_ = nullptr;
    // Specifies whether the load is automatically incremented. This parameter takes effect only if you set `TestMode=concurrency_mode`.
    std::shared_ptr<bool> autoStep_ = nullptr;
    // The load level settings of the scenario.
    // 
    // This parameter is required.
    std::shared_ptr<Models::SavePtsSceneRequestSceneLoadConfigConfiguration> configuration_ = nullptr;
    // The increment percentage. Valid values: 10 to 100, in increments of 10.
    // 
    // This parameter takes effect only if you set `testMode=concurrency_mode`and `autoStep=true`.
    std::shared_ptr<int32_t> increment_ = nullptr;
    // The duration of a specific load level. Unit: minutes. The value must be less than the value of **maxRunningTime**.
    std::shared_ptr<int32_t> keepTime_ = nullptr;
    // The duration of load application. Unit: minutes. Valid values: 1 to 1440.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> maxRunningTime_ = nullptr;
    // The session settings.
    std::shared_ptr<vector<Models::SavePtsSceneRequestSceneLoadConfigRelationLoadConfigList>> relationLoadConfigList_ = nullptr;
    // The load application mode. Valid values:
    // 
    // *   concurrency_mode: concurrency mode
    // *   tps_mode: RPS mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> testMode_ = nullptr;
    // The VPC settings.
    std::shared_ptr<Models::SavePtsSceneRequestSceneLoadConfigVpcLoadConfig> vpcLoadConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
