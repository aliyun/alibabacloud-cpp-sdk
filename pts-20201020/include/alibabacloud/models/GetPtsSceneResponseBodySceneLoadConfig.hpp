// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENELOADCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENELOADCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneLoadConfigConfiguration.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList.hpp>
#include <alibabacloud/models/GetPtsSceneResponseBodySceneLoadConfigVpcLoadConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneLoadConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneLoadConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneLoadConfig& obj) { 
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
    GetPtsSceneResponseBodySceneLoadConfig() = default ;
    GetPtsSceneResponseBodySceneLoadConfig(const GetPtsSceneResponseBodySceneLoadConfig &) = default ;
    GetPtsSceneResponseBodySceneLoadConfig(GetPtsSceneResponseBodySceneLoadConfig &&) = default ;
    GetPtsSceneResponseBodySceneLoadConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneLoadConfig() = default ;
    GetPtsSceneResponseBodySceneLoadConfig& operator=(const GetPtsSceneResponseBodySceneLoadConfig &) = default ;
    GetPtsSceneResponseBodySceneLoadConfig& operator=(GetPtsSceneResponseBodySceneLoadConfig &&) = default ;
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
    inline GetPtsSceneResponseBodySceneLoadConfig& setAgentCount(int32_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


    // apiLoadConfigList Field Functions 
    bool hasApiLoadConfigList() const { return this->apiLoadConfigList_ != nullptr;};
    void deleteApiLoadConfigList() { this->apiLoadConfigList_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList> & apiLoadConfigList() const { DARABONBA_PTR_GET_CONST(apiLoadConfigList_, vector<Models::GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList>) };
    inline vector<Models::GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList> apiLoadConfigList() { DARABONBA_PTR_GET(apiLoadConfigList_, vector<Models::GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList>) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setApiLoadConfigList(const vector<Models::GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList> & apiLoadConfigList) { DARABONBA_PTR_SET_VALUE(apiLoadConfigList_, apiLoadConfigList) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setApiLoadConfigList(vector<Models::GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList> && apiLoadConfigList) { DARABONBA_PTR_SET_RVALUE(apiLoadConfigList_, apiLoadConfigList) };


    // autoStep Field Functions 
    bool hasAutoStep() const { return this->autoStep_ != nullptr;};
    void deleteAutoStep() { this->autoStep_ = nullptr;};
    inline bool autoStep() const { DARABONBA_PTR_GET_DEFAULT(autoStep_, false) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setAutoStep(bool autoStep) { DARABONBA_PTR_SET_VALUE(autoStep_, autoStep) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const Models::GetPtsSceneResponseBodySceneLoadConfigConfiguration & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, Models::GetPtsSceneResponseBodySceneLoadConfigConfiguration) };
    inline Models::GetPtsSceneResponseBodySceneLoadConfigConfiguration configuration() { DARABONBA_PTR_GET(configuration_, Models::GetPtsSceneResponseBodySceneLoadConfigConfiguration) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setConfiguration(const Models::GetPtsSceneResponseBodySceneLoadConfigConfiguration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setConfiguration(Models::GetPtsSceneResponseBodySceneLoadConfigConfiguration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // increment Field Functions 
    bool hasIncrement() const { return this->increment_ != nullptr;};
    void deleteIncrement() { this->increment_ = nullptr;};
    inline int32_t increment() const { DARABONBA_PTR_GET_DEFAULT(increment_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setIncrement(int32_t increment) { DARABONBA_PTR_SET_VALUE(increment_, increment) };


    // keepTime Field Functions 
    bool hasKeepTime() const { return this->keepTime_ != nullptr;};
    void deleteKeepTime() { this->keepTime_ = nullptr;};
    inline int32_t keepTime() const { DARABONBA_PTR_GET_DEFAULT(keepTime_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setKeepTime(int32_t keepTime) { DARABONBA_PTR_SET_VALUE(keepTime_, keepTime) };


    // maxRunningTime Field Functions 
    bool hasMaxRunningTime() const { return this->maxRunningTime_ != nullptr;};
    void deleteMaxRunningTime() { this->maxRunningTime_ = nullptr;};
    inline int32_t maxRunningTime() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTime_, 0) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setMaxRunningTime(int32_t maxRunningTime) { DARABONBA_PTR_SET_VALUE(maxRunningTime_, maxRunningTime) };


    // relationLoadConfigList Field Functions 
    bool hasRelationLoadConfigList() const { return this->relationLoadConfigList_ != nullptr;};
    void deleteRelationLoadConfigList() { this->relationLoadConfigList_ = nullptr;};
    inline const vector<Models::GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList> & relationLoadConfigList() const { DARABONBA_PTR_GET_CONST(relationLoadConfigList_, vector<Models::GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList>) };
    inline vector<Models::GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList> relationLoadConfigList() { DARABONBA_PTR_GET(relationLoadConfigList_, vector<Models::GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList>) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setRelationLoadConfigList(const vector<Models::GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList> & relationLoadConfigList) { DARABONBA_PTR_SET_VALUE(relationLoadConfigList_, relationLoadConfigList) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setRelationLoadConfigList(vector<Models::GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList> && relationLoadConfigList) { DARABONBA_PTR_SET_RVALUE(relationLoadConfigList_, relationLoadConfigList) };


    // testMode Field Functions 
    bool hasTestMode() const { return this->testMode_ != nullptr;};
    void deleteTestMode() { this->testMode_ = nullptr;};
    inline string testMode() const { DARABONBA_PTR_GET_DEFAULT(testMode_, "") };
    inline GetPtsSceneResponseBodySceneLoadConfig& setTestMode(string testMode) { DARABONBA_PTR_SET_VALUE(testMode_, testMode) };


    // vpcLoadConfig Field Functions 
    bool hasVpcLoadConfig() const { return this->vpcLoadConfig_ != nullptr;};
    void deleteVpcLoadConfig() { this->vpcLoadConfig_ = nullptr;};
    inline const Models::GetPtsSceneResponseBodySceneLoadConfigVpcLoadConfig & vpcLoadConfig() const { DARABONBA_PTR_GET_CONST(vpcLoadConfig_, Models::GetPtsSceneResponseBodySceneLoadConfigVpcLoadConfig) };
    inline Models::GetPtsSceneResponseBodySceneLoadConfigVpcLoadConfig vpcLoadConfig() { DARABONBA_PTR_GET(vpcLoadConfig_, Models::GetPtsSceneResponseBodySceneLoadConfigVpcLoadConfig) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setVpcLoadConfig(const Models::GetPtsSceneResponseBodySceneLoadConfigVpcLoadConfig & vpcLoadConfig) { DARABONBA_PTR_SET_VALUE(vpcLoadConfig_, vpcLoadConfig) };
    inline GetPtsSceneResponseBodySceneLoadConfig& setVpcLoadConfig(Models::GetPtsSceneResponseBodySceneLoadConfigVpcLoadConfig && vpcLoadConfig) { DARABONBA_PTR_SET_RVALUE(vpcLoadConfig_, vpcLoadConfig) };


  protected:
    // The number of load generators.
    std::shared_ptr<int32_t> agentCount_ = nullptr;
    // The API request load settings.
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneLoadConfigApiLoadConfigList>> apiLoadConfigList_ = nullptr;
    // Indicates whether the load is automatically incremented.
    std::shared_ptr<bool> autoStep_ = nullptr;
    // The concurrency and RPS settings of the scenario.
    std::shared_ptr<Models::GetPtsSceneResponseBodySceneLoadConfigConfiguration> configuration_ = nullptr;
    // The increment percentage. The valid values are 10 to 100, in increments of 10. This parameter is returned only if you set testMode to concurrency_mode and set autoStep to true.
    std::shared_ptr<int32_t> increment_ = nullptr;
    // The duration during which a specific load level is applied. The duration is less than the value of maxRunningTime. Unit: minutes.
    std::shared_ptr<int32_t> keepTime_ = nullptr;
    // The maximum duration of load application. Unit: minutes.
    std::shared_ptr<int32_t> maxRunningTime_ = nullptr;
    // The session load settings.
    std::shared_ptr<vector<Models::GetPtsSceneResponseBodySceneLoadConfigRelationLoadConfigList>> relationLoadConfigList_ = nullptr;
    // The load application mode. Transactions per second (TPS) indicates the RPS mode.
    // 
    // >  The load application mode is CONCURRENCY/TPS.
    std::shared_ptr<string> testMode_ = nullptr;
    // The virtual private cloud (VPC) settings. This information is returned only if you set the testing mode to VPC.
    std::shared_ptr<Models::GetPtsSceneResponseBodySceneLoadConfigVpcLoadConfig> vpcLoadConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
