// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUESTOPENJMETERSCENE_HPP_
#define ALIBABACLOUD_MODELS_SAVEOPENJMETERSCENEREQUESTOPENJMETERSCENE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig.hpp>
#include <vector>
#include <alibabacloud/models/SaveOpenJMeterSceneRequestOpenJMeterSceneFileList.hpp>
#include <alibabacloud/models/SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties.hpp>
#include <alibabacloud/models/SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SaveOpenJMeterSceneRequestOpenJMeterScene : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveOpenJMeterSceneRequestOpenJMeterScene& obj) { 
      DARABONBA_PTR_TO_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ConstantThroughputTimerType, constantThroughputTimerType_);
      DARABONBA_PTR_TO_JSON(DnsCacheConfig, dnsCacheConfig_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(IsVpcTest, isVpcTest_);
      DARABONBA_PTR_TO_JSON(JMeterProperties, JMeterProperties_);
      DARABONBA_PTR_TO_JSON(JmeterPluginLabel, jmeterPluginLabel_);
      DARABONBA_PTR_TO_JSON(MaxRps, maxRps_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RampUp, rampUp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionalCondition, regionalCondition_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StartConcurrency, startConcurrency_);
      DARABONBA_PTR_TO_JSON(StartRps, startRps_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
      DARABONBA_PTR_TO_JSON(SyncTimerType, syncTimerType_);
      DARABONBA_PTR_TO_JSON(TestFile, testFile_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveOpenJMeterSceneRequestOpenJMeterScene& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ConstantThroughputTimerType, constantThroughputTimerType_);
      DARABONBA_PTR_FROM_JSON(DnsCacheConfig, dnsCacheConfig_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(IsVpcTest, isVpcTest_);
      DARABONBA_PTR_FROM_JSON(JMeterProperties, JMeterProperties_);
      DARABONBA_PTR_FROM_JSON(JmeterPluginLabel, jmeterPluginLabel_);
      DARABONBA_PTR_FROM_JSON(MaxRps, maxRps_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RampUp, rampUp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionalCondition, regionalCondition_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StartConcurrency, startConcurrency_);
      DARABONBA_PTR_FROM_JSON(StartRps, startRps_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
      DARABONBA_PTR_FROM_JSON(SyncTimerType, syncTimerType_);
      DARABONBA_PTR_FROM_JSON(TestFile, testFile_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    SaveOpenJMeterSceneRequestOpenJMeterScene() = default ;
    SaveOpenJMeterSceneRequestOpenJMeterScene(const SaveOpenJMeterSceneRequestOpenJMeterScene &) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterScene(SaveOpenJMeterSceneRequestOpenJMeterScene &&) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterScene(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveOpenJMeterSceneRequestOpenJMeterScene() = default ;
    SaveOpenJMeterSceneRequestOpenJMeterScene& operator=(const SaveOpenJMeterSceneRequestOpenJMeterScene &) = default ;
    SaveOpenJMeterSceneRequestOpenJMeterScene& operator=(SaveOpenJMeterSceneRequestOpenJMeterScene &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentCount_ == nullptr
        && return this->concurrency_ == nullptr && return this->constantThroughputTimerType_ == nullptr && return this->dnsCacheConfig_ == nullptr && return this->duration_ == nullptr && return this->environmentId_ == nullptr
        && return this->fileList_ == nullptr && return this->isVpcTest_ == nullptr && return this->JMeterProperties_ == nullptr && return this->jmeterPluginLabel_ == nullptr && return this->maxRps_ == nullptr
        && return this->mode_ == nullptr && return this->rampUp_ == nullptr && return this->regionId_ == nullptr && return this->regionalCondition_ == nullptr && return this->sceneId_ == nullptr
        && return this->sceneName_ == nullptr && return this->securityGroupId_ == nullptr && return this->startConcurrency_ == nullptr && return this->startRps_ == nullptr && return this->steps_ == nullptr
        && return this->syncTimerType_ == nullptr && return this->testFile_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // agentCount Field Functions 
    bool hasAgentCount() const { return this->agentCount_ != nullptr;};
    void deleteAgentCount() { this->agentCount_ = nullptr;};
    inline int32_t agentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setAgentCount(int32_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // constantThroughputTimerType Field Functions 
    bool hasConstantThroughputTimerType() const { return this->constantThroughputTimerType_ != nullptr;};
    void deleteConstantThroughputTimerType() { this->constantThroughputTimerType_ = nullptr;};
    inline string constantThroughputTimerType() const { DARABONBA_PTR_GET_DEFAULT(constantThroughputTimerType_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setConstantThroughputTimerType(string constantThroughputTimerType) { DARABONBA_PTR_SET_VALUE(constantThroughputTimerType_, constantThroughputTimerType) };


    // dnsCacheConfig Field Functions 
    bool hasDnsCacheConfig() const { return this->dnsCacheConfig_ != nullptr;};
    void deleteDnsCacheConfig() { this->dnsCacheConfig_ = nullptr;};
    inline const Models::SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig & dnsCacheConfig() const { DARABONBA_PTR_GET_CONST(dnsCacheConfig_, Models::SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig) };
    inline Models::SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig dnsCacheConfig() { DARABONBA_PTR_GET(dnsCacheConfig_, Models::SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setDnsCacheConfig(const Models::SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig & dnsCacheConfig) { DARABONBA_PTR_SET_VALUE(dnsCacheConfig_, dnsCacheConfig) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setDnsCacheConfig(Models::SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig && dnsCacheConfig) { DARABONBA_PTR_SET_RVALUE(dnsCacheConfig_, dnsCacheConfig) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneFileList> & fileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneFileList>) };
    inline vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneFileList> fileList() { DARABONBA_PTR_GET(fileList_, vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneFileList>) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setFileList(const vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneFileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setFileList(vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneFileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // isVpcTest Field Functions 
    bool hasIsVpcTest() const { return this->isVpcTest_ != nullptr;};
    void deleteIsVpcTest() { this->isVpcTest_ = nullptr;};
    inline bool isVpcTest() const { DARABONBA_PTR_GET_DEFAULT(isVpcTest_, false) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setIsVpcTest(bool isVpcTest) { DARABONBA_PTR_SET_VALUE(isVpcTest_, isVpcTest) };


    // JMeterProperties Field Functions 
    bool hasJMeterProperties() const { return this->JMeterProperties_ != nullptr;};
    void deleteJMeterProperties() { this->JMeterProperties_ = nullptr;};
    inline const vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties> & JMeterProperties() const { DARABONBA_PTR_GET_CONST(JMeterProperties_, vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties>) };
    inline vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties> JMeterProperties() { DARABONBA_PTR_GET(JMeterProperties_, vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties>) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setJMeterProperties(const vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties> & JMeterProperties) { DARABONBA_PTR_SET_VALUE(JMeterProperties_, JMeterProperties) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setJMeterProperties(vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties> && JMeterProperties) { DARABONBA_PTR_SET_RVALUE(JMeterProperties_, JMeterProperties) };


    // jmeterPluginLabel Field Functions 
    bool hasJmeterPluginLabel() const { return this->jmeterPluginLabel_ != nullptr;};
    void deleteJmeterPluginLabel() { this->jmeterPluginLabel_ = nullptr;};
    inline string jmeterPluginLabel() const { DARABONBA_PTR_GET_DEFAULT(jmeterPluginLabel_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setJmeterPluginLabel(string jmeterPluginLabel) { DARABONBA_PTR_SET_VALUE(jmeterPluginLabel_, jmeterPluginLabel) };


    // maxRps Field Functions 
    bool hasMaxRps() const { return this->maxRps_ != nullptr;};
    void deleteMaxRps() { this->maxRps_ = nullptr;};
    inline int32_t maxRps() const { DARABONBA_PTR_GET_DEFAULT(maxRps_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setMaxRps(int32_t maxRps) { DARABONBA_PTR_SET_VALUE(maxRps_, maxRps) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // rampUp Field Functions 
    bool hasRampUp() const { return this->rampUp_ != nullptr;};
    void deleteRampUp() { this->rampUp_ = nullptr;};
    inline int32_t rampUp() const { DARABONBA_PTR_GET_DEFAULT(rampUp_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setRampUp(int32_t rampUp) { DARABONBA_PTR_SET_VALUE(rampUp_, rampUp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionalCondition Field Functions 
    bool hasRegionalCondition() const { return this->regionalCondition_ != nullptr;};
    void deleteRegionalCondition() { this->regionalCondition_ = nullptr;};
    inline const vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition> & regionalCondition() const { DARABONBA_PTR_GET_CONST(regionalCondition_, vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition>) };
    inline vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition> regionalCondition() { DARABONBA_PTR_GET(regionalCondition_, vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition>) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setRegionalCondition(const vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition> & regionalCondition) { DARABONBA_PTR_SET_VALUE(regionalCondition_, regionalCondition) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setRegionalCondition(vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition> && regionalCondition) { DARABONBA_PTR_SET_RVALUE(regionalCondition_, regionalCondition) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // startConcurrency Field Functions 
    bool hasStartConcurrency() const { return this->startConcurrency_ != nullptr;};
    void deleteStartConcurrency() { this->startConcurrency_ = nullptr;};
    inline int32_t startConcurrency() const { DARABONBA_PTR_GET_DEFAULT(startConcurrency_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setStartConcurrency(int32_t startConcurrency) { DARABONBA_PTR_SET_VALUE(startConcurrency_, startConcurrency) };


    // startRps Field Functions 
    bool hasStartRps() const { return this->startRps_ != nullptr;};
    void deleteStartRps() { this->startRps_ = nullptr;};
    inline int32_t startRps() const { DARABONBA_PTR_GET_DEFAULT(startRps_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setStartRps(int32_t startRps) { DARABONBA_PTR_SET_VALUE(startRps_, startRps) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline int32_t steps() const { DARABONBA_PTR_GET_DEFAULT(steps_, 0) };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setSteps(int32_t steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };


    // syncTimerType Field Functions 
    bool hasSyncTimerType() const { return this->syncTimerType_ != nullptr;};
    void deleteSyncTimerType() { this->syncTimerType_ = nullptr;};
    inline string syncTimerType() const { DARABONBA_PTR_GET_DEFAULT(syncTimerType_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setSyncTimerType(string syncTimerType) { DARABONBA_PTR_SET_VALUE(syncTimerType_, syncTimerType) };


    // testFile Field Functions 
    bool hasTestFile() const { return this->testFile_ != nullptr;};
    void deleteTestFile() { this->testFile_ = nullptr;};
    inline string testFile() const { DARABONBA_PTR_GET_DEFAULT(testFile_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setTestFile(string testFile) { DARABONBA_PTR_SET_VALUE(testFile_, testFile) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SaveOpenJMeterSceneRequestOpenJMeterScene& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of stress testers.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> agentCount_ = nullptr;
    // The maximum concurrency that is determined by the resource plans of users. You must configure this parameter when the mode is set to CONCURRENCY.
    std::shared_ptr<int32_t> concurrency_ = nullptr;
    // The type of the synchronization timer with fixed throughput in JMeter.
    std::shared_ptr<string> constantThroughputTimerType_ = nullptr;
    // The settings of Domain Name System (DNS).
    std::shared_ptr<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneDnsCacheConfig> dnsCacheConfig_ = nullptr;
    // The stress testing duration. The maximum stress testing duration is no more than one day, Unit: seconds. Valid values: 60 to 86400.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The ID of the environment associated with the scenario.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The test files.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneFileList>> fileList_ = nullptr;
    // Specifies whether the test is a virtual private cloud (VPC) test. The default value is false, which indicates a public network test. VPC-related settings take effect only when you set this parameter to true.
    std::shared_ptr<bool> isVpcTest_ = nullptr;
    // The JMeter properties.
    std::shared_ptr<vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneJMeterProperties>> JMeterProperties_ = nullptr;
    // The JMeter plug-in tag.
    std::shared_ptr<string> jmeterPluginLabel_ = nullptr;
    // The maximum RPS that takes effect in RPS mode.
    std::shared_ptr<int32_t> maxRps_ = nullptr;
    // The stress model.
    // 
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // The ramp-up period. Unit: seconds.
    std::shared_ptr<int32_t> rampUp_ = nullptr;
    // The region ID that is specified in the VPC test.
    std::shared_ptr<string> regionId_ = nullptr;
    // The requirements for the regions of the stress testers.
    std::shared_ptr<vector<Models::SaveOpenJMeterSceneRequestOpenJMeterSceneRegionalCondition>> regionalCondition_ = nullptr;
    // The scenario ID. If you do not configure this parameter, the system creates a scenario. If you configure this parameter, the system updates the scenario corresponding to the ID specified by this parameter.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The scenario name.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The security group ID that is specified in the VPC test.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The initial concurrency that takes effect in concurrency mode. You must configure this parameter when the mode is set to CONCURRENCY.
    std::shared_ptr<int32_t> startConcurrency_ = nullptr;
    // The initial RPS that takes effect in RPS mode.
    std::shared_ptr<int32_t> startRps_ = nullptr;
    // The number of ramp-up steps.
    std::shared_ptr<int32_t> steps_ = nullptr;
    // The type of the synchronization timer in JMeter.
    std::shared_ptr<string> syncTimerType_ = nullptr;
    // The test file.
    // 
    // This parameter is required.
    std::shared_ptr<string> testFile_ = nullptr;
    // The vSwitch ID that is specified in the VPC test.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID that is specified in the VPC test.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
