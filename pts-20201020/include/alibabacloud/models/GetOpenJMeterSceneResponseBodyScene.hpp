// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENJMETERSCENERESPONSEBODYSCENE_HPP_
#define ALIBABACLOUD_MODELS_GETOPENJMETERSCENERESPONSEBODYSCENE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOpenJMeterSceneResponseBodySceneBaseInfo.hpp>
#include <alibabacloud/models/GetOpenJMeterSceneResponseBodySceneDnsCacheConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetOpenJMeterSceneResponseBodySceneFileList.hpp>
#include <alibabacloud/models/GetOpenJMeterSceneResponseBodySceneRegionalCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetOpenJMeterSceneResponseBodyScene : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenJMeterSceneResponseBodyScene& obj) { 
      DARABONBA_PTR_TO_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_TO_JSON(BaseInfo, baseInfo_);
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(ConstantThroughputTimerType, constantThroughputTimerType_);
      DARABONBA_PTR_TO_JSON(DnsCacheConfig, dnsCacheConfig_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(IsVpcTest, isVpcTest_);
      DARABONBA_PTR_TO_JSON(MaxRps, maxRps_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Pool, pool_);
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
    friend void from_json(const Darabonba::Json& j, GetOpenJMeterSceneResponseBodyScene& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_FROM_JSON(BaseInfo, baseInfo_);
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(ConstantThroughputTimerType, constantThroughputTimerType_);
      DARABONBA_PTR_FROM_JSON(DnsCacheConfig, dnsCacheConfig_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(IsVpcTest, isVpcTest_);
      DARABONBA_PTR_FROM_JSON(MaxRps, maxRps_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Pool, pool_);
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
    GetOpenJMeterSceneResponseBodyScene() = default ;
    GetOpenJMeterSceneResponseBodyScene(const GetOpenJMeterSceneResponseBodyScene &) = default ;
    GetOpenJMeterSceneResponseBodyScene(GetOpenJMeterSceneResponseBodyScene &&) = default ;
    GetOpenJMeterSceneResponseBodyScene(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenJMeterSceneResponseBodyScene() = default ;
    GetOpenJMeterSceneResponseBodyScene& operator=(const GetOpenJMeterSceneResponseBodyScene &) = default ;
    GetOpenJMeterSceneResponseBodyScene& operator=(GetOpenJMeterSceneResponseBodyScene &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentCount_ == nullptr
        && return this->baseInfo_ == nullptr && return this->concurrency_ == nullptr && return this->constantThroughputTimerType_ == nullptr && return this->dnsCacheConfig_ == nullptr && return this->duration_ == nullptr
        && return this->environmentId_ == nullptr && return this->fileList_ == nullptr && return this->isVpcTest_ == nullptr && return this->maxRps_ == nullptr && return this->mode_ == nullptr
        && return this->pool_ == nullptr && return this->rampUp_ == nullptr && return this->regionId_ == nullptr && return this->regionalCondition_ == nullptr && return this->sceneId_ == nullptr
        && return this->sceneName_ == nullptr && return this->securityGroupId_ == nullptr && return this->startConcurrency_ == nullptr && return this->startRps_ == nullptr && return this->steps_ == nullptr
        && return this->syncTimerType_ == nullptr && return this->testFile_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // agentCount Field Functions 
    bool hasAgentCount() const { return this->agentCount_ != nullptr;};
    void deleteAgentCount() { this->agentCount_ = nullptr;};
    inline int32_t agentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0) };
    inline GetOpenJMeterSceneResponseBodyScene& setAgentCount(int32_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


    // baseInfo Field Functions 
    bool hasBaseInfo() const { return this->baseInfo_ != nullptr;};
    void deleteBaseInfo() { this->baseInfo_ = nullptr;};
    inline const Models::GetOpenJMeterSceneResponseBodySceneBaseInfo & baseInfo() const { DARABONBA_PTR_GET_CONST(baseInfo_, Models::GetOpenJMeterSceneResponseBodySceneBaseInfo) };
    inline Models::GetOpenJMeterSceneResponseBodySceneBaseInfo baseInfo() { DARABONBA_PTR_GET(baseInfo_, Models::GetOpenJMeterSceneResponseBodySceneBaseInfo) };
    inline GetOpenJMeterSceneResponseBodyScene& setBaseInfo(const Models::GetOpenJMeterSceneResponseBodySceneBaseInfo & baseInfo) { DARABONBA_PTR_SET_VALUE(baseInfo_, baseInfo) };
    inline GetOpenJMeterSceneResponseBodyScene& setBaseInfo(Models::GetOpenJMeterSceneResponseBodySceneBaseInfo && baseInfo) { DARABONBA_PTR_SET_RVALUE(baseInfo_, baseInfo) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int32_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
    inline GetOpenJMeterSceneResponseBodyScene& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


    // constantThroughputTimerType Field Functions 
    bool hasConstantThroughputTimerType() const { return this->constantThroughputTimerType_ != nullptr;};
    void deleteConstantThroughputTimerType() { this->constantThroughputTimerType_ = nullptr;};
    inline string constantThroughputTimerType() const { DARABONBA_PTR_GET_DEFAULT(constantThroughputTimerType_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setConstantThroughputTimerType(string constantThroughputTimerType) { DARABONBA_PTR_SET_VALUE(constantThroughputTimerType_, constantThroughputTimerType) };


    // dnsCacheConfig Field Functions 
    bool hasDnsCacheConfig() const { return this->dnsCacheConfig_ != nullptr;};
    void deleteDnsCacheConfig() { this->dnsCacheConfig_ = nullptr;};
    inline const Models::GetOpenJMeterSceneResponseBodySceneDnsCacheConfig & dnsCacheConfig() const { DARABONBA_PTR_GET_CONST(dnsCacheConfig_, Models::GetOpenJMeterSceneResponseBodySceneDnsCacheConfig) };
    inline Models::GetOpenJMeterSceneResponseBodySceneDnsCacheConfig dnsCacheConfig() { DARABONBA_PTR_GET(dnsCacheConfig_, Models::GetOpenJMeterSceneResponseBodySceneDnsCacheConfig) };
    inline GetOpenJMeterSceneResponseBodyScene& setDnsCacheConfig(const Models::GetOpenJMeterSceneResponseBodySceneDnsCacheConfig & dnsCacheConfig) { DARABONBA_PTR_SET_VALUE(dnsCacheConfig_, dnsCacheConfig) };
    inline GetOpenJMeterSceneResponseBodyScene& setDnsCacheConfig(Models::GetOpenJMeterSceneResponseBodySceneDnsCacheConfig && dnsCacheConfig) { DARABONBA_PTR_SET_RVALUE(dnsCacheConfig_, dnsCacheConfig) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetOpenJMeterSceneResponseBodyScene& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<Models::GetOpenJMeterSceneResponseBodySceneFileList> & fileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<Models::GetOpenJMeterSceneResponseBodySceneFileList>) };
    inline vector<Models::GetOpenJMeterSceneResponseBodySceneFileList> fileList() { DARABONBA_PTR_GET(fileList_, vector<Models::GetOpenJMeterSceneResponseBodySceneFileList>) };
    inline GetOpenJMeterSceneResponseBodyScene& setFileList(const vector<Models::GetOpenJMeterSceneResponseBodySceneFileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline GetOpenJMeterSceneResponseBodyScene& setFileList(vector<Models::GetOpenJMeterSceneResponseBodySceneFileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // isVpcTest Field Functions 
    bool hasIsVpcTest() const { return this->isVpcTest_ != nullptr;};
    void deleteIsVpcTest() { this->isVpcTest_ = nullptr;};
    inline bool isVpcTest() const { DARABONBA_PTR_GET_DEFAULT(isVpcTest_, false) };
    inline GetOpenJMeterSceneResponseBodyScene& setIsVpcTest(bool isVpcTest) { DARABONBA_PTR_SET_VALUE(isVpcTest_, isVpcTest) };


    // maxRps Field Functions 
    bool hasMaxRps() const { return this->maxRps_ != nullptr;};
    void deleteMaxRps() { this->maxRps_ = nullptr;};
    inline int32_t maxRps() const { DARABONBA_PTR_GET_DEFAULT(maxRps_, 0) };
    inline GetOpenJMeterSceneResponseBodyScene& setMaxRps(int32_t maxRps) { DARABONBA_PTR_SET_VALUE(maxRps_, maxRps) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // pool Field Functions 
    bool hasPool() const { return this->pool_ != nullptr;};
    void deletePool() { this->pool_ = nullptr;};
    inline string pool() const { DARABONBA_PTR_GET_DEFAULT(pool_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setPool(string pool) { DARABONBA_PTR_SET_VALUE(pool_, pool) };


    // rampUp Field Functions 
    bool hasRampUp() const { return this->rampUp_ != nullptr;};
    void deleteRampUp() { this->rampUp_ = nullptr;};
    inline int32_t rampUp() const { DARABONBA_PTR_GET_DEFAULT(rampUp_, 0) };
    inline GetOpenJMeterSceneResponseBodyScene& setRampUp(int32_t rampUp) { DARABONBA_PTR_SET_VALUE(rampUp_, rampUp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionalCondition Field Functions 
    bool hasRegionalCondition() const { return this->regionalCondition_ != nullptr;};
    void deleteRegionalCondition() { this->regionalCondition_ = nullptr;};
    inline const vector<Models::GetOpenJMeterSceneResponseBodySceneRegionalCondition> & regionalCondition() const { DARABONBA_PTR_GET_CONST(regionalCondition_, vector<Models::GetOpenJMeterSceneResponseBodySceneRegionalCondition>) };
    inline vector<Models::GetOpenJMeterSceneResponseBodySceneRegionalCondition> regionalCondition() { DARABONBA_PTR_GET(regionalCondition_, vector<Models::GetOpenJMeterSceneResponseBodySceneRegionalCondition>) };
    inline GetOpenJMeterSceneResponseBodyScene& setRegionalCondition(const vector<Models::GetOpenJMeterSceneResponseBodySceneRegionalCondition> & regionalCondition) { DARABONBA_PTR_SET_VALUE(regionalCondition_, regionalCondition) };
    inline GetOpenJMeterSceneResponseBodyScene& setRegionalCondition(vector<Models::GetOpenJMeterSceneResponseBodySceneRegionalCondition> && regionalCondition) { DARABONBA_PTR_SET_RVALUE(regionalCondition_, regionalCondition) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // startConcurrency Field Functions 
    bool hasStartConcurrency() const { return this->startConcurrency_ != nullptr;};
    void deleteStartConcurrency() { this->startConcurrency_ = nullptr;};
    inline int32_t startConcurrency() const { DARABONBA_PTR_GET_DEFAULT(startConcurrency_, 0) };
    inline GetOpenJMeterSceneResponseBodyScene& setStartConcurrency(int32_t startConcurrency) { DARABONBA_PTR_SET_VALUE(startConcurrency_, startConcurrency) };


    // startRps Field Functions 
    bool hasStartRps() const { return this->startRps_ != nullptr;};
    void deleteStartRps() { this->startRps_ = nullptr;};
    inline int32_t startRps() const { DARABONBA_PTR_GET_DEFAULT(startRps_, 0) };
    inline GetOpenJMeterSceneResponseBodyScene& setStartRps(int32_t startRps) { DARABONBA_PTR_SET_VALUE(startRps_, startRps) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline int32_t steps() const { DARABONBA_PTR_GET_DEFAULT(steps_, 0) };
    inline GetOpenJMeterSceneResponseBodyScene& setSteps(int32_t steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };


    // syncTimerType Field Functions 
    bool hasSyncTimerType() const { return this->syncTimerType_ != nullptr;};
    void deleteSyncTimerType() { this->syncTimerType_ = nullptr;};
    inline string syncTimerType() const { DARABONBA_PTR_GET_DEFAULT(syncTimerType_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setSyncTimerType(string syncTimerType) { DARABONBA_PTR_SET_VALUE(syncTimerType_, syncTimerType) };


    // testFile Field Functions 
    bool hasTestFile() const { return this->testFile_ != nullptr;};
    void deleteTestFile() { this->testFile_ = nullptr;};
    inline string testFile() const { DARABONBA_PTR_GET_DEFAULT(testFile_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setTestFile(string testFile) { DARABONBA_PTR_SET_VALUE(testFile_, testFile) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetOpenJMeterSceneResponseBodyScene& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The number of load generators. A load generator supports up to 500 concurrent virtual users.
    std::shared_ptr<int32_t> agentCount_ = nullptr;
    // The basic information.
    std::shared_ptr<Models::GetOpenJMeterSceneResponseBodySceneBaseInfo> baseInfo_ = nullptr;
    // The maximum number of concurrent virtual users.
    std::shared_ptr<int32_t> concurrency_ = nullptr;
    // The type of the constant throughput timer.
    std::shared_ptr<string> constantThroughputTimerType_ = nullptr;
    // The DNS settings.
    std::shared_ptr<Models::GetOpenJMeterSceneResponseBodySceneDnsCacheConfig> dnsCacheConfig_ = nullptr;
    // The duration of the performance testing. Unit: seconds.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The ID of the environment.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The files.
    std::shared_ptr<vector<Models::GetOpenJMeterSceneResponseBodySceneFileList>> fileList_ = nullptr;
    // Indicates whether the load is from a virtual private cloud (VPC).
    std::shared_ptr<bool> isVpcTest_ = nullptr;
    // The maximum RPS. This parameter is returned if you set Mode to tps_mode.
    std::shared_ptr<int32_t> maxRps_ = nullptr;
    // The load application mode. Valid values: concurrency_mode and tps_mode.
    std::shared_ptr<string> mode_ = nullptr;
    // The origin of the load. "" indicates the Internet and intranet-vpc indicates the VPC.
    std::shared_ptr<string> pool_ = nullptr;
    // The period of time during which the load is gradually increased to the desired level. Unit: seconds.
    std::shared_ptr<int32_t> rampUp_ = nullptr;
    // The region ID. This parameter is returned if the load is from a VPC.
    std::shared_ptr<string> regionId_ = nullptr;
    // Customized load generator settings for regions
    std::shared_ptr<vector<Models::GetOpenJMeterSceneResponseBodySceneRegionalCondition>> regionalCondition_ = nullptr;
    // The ID of the scenario.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The name of the scenario.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The ID of the security group. This parameter is returned if the load is from a VPC.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The start number of concurrent virtual users.
    std::shared_ptr<int32_t> startConcurrency_ = nullptr;
    // The start requests per second (RPS). This parameter is returned if you set Mode to tps_mode.
    std::shared_ptr<int32_t> startRps_ = nullptr;
    // The number of incremented users per step. If RampUp or Steps is not specified, the fixed load is used. If RampUp is specified but Steps is not specified, the load increases uniformly based on the value of RampUp. If RampUp and Steps are specified and Steps is less than RampUp, the load increases based on the value of Steps. You cannot specify Steps without specifying RampUp. If you do so, the fixed load is used.
    std::shared_ptr<int32_t> steps_ = nullptr;
    // The type of the synchronization timer.
    std::shared_ptr<string> syncTimerType_ = nullptr;
    // The test file.
    std::shared_ptr<string> testFile_ = nullptr;
    // The ID of the vSwitch. This parameter is returned if the load is from a VPC.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC. This parameter is returned if the load is from a VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
