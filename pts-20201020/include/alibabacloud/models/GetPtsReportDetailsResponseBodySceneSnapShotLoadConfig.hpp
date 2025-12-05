// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTLOADCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODYSCENESNAPSHOTLOADCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_TO_JSON(ApiLoadConfigList, apiLoadConfigList_);
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(MaxRunningTime, maxRunningTime_);
      DARABONBA_PTR_TO_JSON(RelationLoadConfigList, relationLoadConfigList_);
      DARABONBA_PTR_TO_JSON(TestMode, testMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_FROM_JSON(ApiLoadConfigList, apiLoadConfigList_);
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTime, maxRunningTime_);
      DARABONBA_PTR_FROM_JSON(RelationLoadConfigList, relationLoadConfigList_);
      DARABONBA_PTR_FROM_JSON(TestMode, testMode_);
    };
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig(const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig(GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig &&) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig() = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& operator=(const GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig &) = default ;
    GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& operator=(GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentCount_ == nullptr
        && return this->apiLoadConfigList_ == nullptr && return this->configuration_ == nullptr && return this->maxRunningTime_ == nullptr && return this->relationLoadConfigList_ == nullptr && return this->testMode_ == nullptr; };
    // agentCount Field Functions 
    bool hasAgentCount() const { return this->agentCount_ != nullptr;};
    void deleteAgentCount() { this->agentCount_ = nullptr;};
    inline int32_t agentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setAgentCount(int32_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


    // apiLoadConfigList Field Functions 
    bool hasApiLoadConfigList() const { return this->apiLoadConfigList_ != nullptr;};
    void deleteApiLoadConfigList() { this->apiLoadConfigList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList> & apiLoadConfigList() const { DARABONBA_PTR_GET_CONST(apiLoadConfigList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList> apiLoadConfigList() { DARABONBA_PTR_GET(apiLoadConfigList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setApiLoadConfigList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList> & apiLoadConfigList) { DARABONBA_PTR_SET_VALUE(apiLoadConfigList_, apiLoadConfigList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setApiLoadConfigList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList> && apiLoadConfigList) { DARABONBA_PTR_SET_RVALUE(apiLoadConfigList_, apiLoadConfigList) };


    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration) };
    inline Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration configuration() { DARABONBA_PTR_GET(configuration_, Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setConfiguration(const Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setConfiguration(Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // maxRunningTime Field Functions 
    bool hasMaxRunningTime() const { return this->maxRunningTime_ != nullptr;};
    void deleteMaxRunningTime() { this->maxRunningTime_ = nullptr;};
    inline int32_t maxRunningTime() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTime_, 0) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setMaxRunningTime(int32_t maxRunningTime) { DARABONBA_PTR_SET_VALUE(maxRunningTime_, maxRunningTime) };


    // relationLoadConfigList Field Functions 
    bool hasRelationLoadConfigList() const { return this->relationLoadConfigList_ != nullptr;};
    void deleteRelationLoadConfigList() { this->relationLoadConfigList_ = nullptr;};
    inline const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList> & relationLoadConfigList() const { DARABONBA_PTR_GET_CONST(relationLoadConfigList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList>) };
    inline vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList> relationLoadConfigList() { DARABONBA_PTR_GET(relationLoadConfigList_, vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList>) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setRelationLoadConfigList(const vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList> & relationLoadConfigList) { DARABONBA_PTR_SET_VALUE(relationLoadConfigList_, relationLoadConfigList) };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setRelationLoadConfigList(vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList> && relationLoadConfigList) { DARABONBA_PTR_SET_RVALUE(relationLoadConfigList_, relationLoadConfigList) };


    // testMode Field Functions 
    bool hasTestMode() const { return this->testMode_ != nullptr;};
    void deleteTestMode() { this->testMode_ = nullptr;};
    inline string testMode() const { DARABONBA_PTR_GET_DEFAULT(testMode_, "") };
    inline GetPtsReportDetailsResponseBodySceneSnapShotLoadConfig& setTestMode(string testMode) { DARABONBA_PTR_SET_VALUE(testMode_, testMode) };


  protected:
    // The number of load generators.
    std::shared_ptr<int32_t> agentCount_ = nullptr;
    // The API request load settings.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigApiLoadConfigList>> apiLoadConfigList_ = nullptr;
    // The concurrency and RPS limits in the scenario.
    std::shared_ptr<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigConfiguration> configuration_ = nullptr;
    // The maximum running time. Unit: minutes.
    std::shared_ptr<int32_t> maxRunningTime_ = nullptr;
    // The settings of the session.
    std::shared_ptr<vector<Models::GetPtsReportDetailsResponseBodySceneSnapShotLoadConfigRelationLoadConfigList>> relationLoadConfigList_ = nullptr;
    // The load application mode.
    std::shared_ptr<string> testMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
