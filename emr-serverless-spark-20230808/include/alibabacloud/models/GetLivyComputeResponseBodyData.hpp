// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVYCOMPUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLIVYCOMPUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLivyComputeResponseBodyDataAutoStopConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetLivyComputeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLivyComputeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(autoStopConfiguration, autoStopConfiguration_);
      DARABONBA_PTR_TO_JSON(computeId, computeId_);
      DARABONBA_PTR_TO_JSON(cpuLimit, cpuLimit_);
      DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(enablePublic, enablePublic_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(endpointInner, endpointInner_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(livyServerConf, livyServerConf_);
      DARABONBA_PTR_TO_JSON(livyVersion, livyVersion_);
      DARABONBA_PTR_TO_JSON(memoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkName, networkName_);
      DARABONBA_PTR_TO_JSON(queueName, queueName_);
      DARABONBA_PTR_TO_JSON(ramUserId, ramUserId_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetLivyComputeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(autoStopConfiguration, autoStopConfiguration_);
      DARABONBA_PTR_FROM_JSON(computeId, computeId_);
      DARABONBA_PTR_FROM_JSON(cpuLimit, cpuLimit_);
      DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(enablePublic, enablePublic_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(endpointInner, endpointInner_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(livyServerConf, livyServerConf_);
      DARABONBA_PTR_FROM_JSON(livyVersion, livyVersion_);
      DARABONBA_PTR_FROM_JSON(memoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkName, networkName_);
      DARABONBA_PTR_FROM_JSON(queueName, queueName_);
      DARABONBA_PTR_FROM_JSON(ramUserId, ramUserId_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetLivyComputeResponseBodyData() = default ;
    GetLivyComputeResponseBodyData(const GetLivyComputeResponseBodyData &) = default ;
    GetLivyComputeResponseBodyData(GetLivyComputeResponseBodyData &&) = default ;
    GetLivyComputeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLivyComputeResponseBodyData() = default ;
    GetLivyComputeResponseBodyData& operator=(const GetLivyComputeResponseBodyData &) = default ;
    GetLivyComputeResponseBodyData& operator=(GetLivyComputeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->autoStopConfiguration_ != nullptr && this->computeId_ != nullptr && this->cpuLimit_ != nullptr && this->createdBy_ != nullptr && this->displayReleaseVersion_ != nullptr
        && this->enablePublic_ != nullptr && this->endpoint_ != nullptr && this->endpointInner_ != nullptr && this->environmentId_ != nullptr && this->fusion_ != nullptr
        && this->gmtCreate_ != nullptr && this->livyServerConf_ != nullptr && this->livyVersion_ != nullptr && this->memoryLimit_ != nullptr && this->name_ != nullptr
        && this->networkName_ != nullptr && this->queueName_ != nullptr && this->ramUserId_ != nullptr && this->releaseVersion_ != nullptr && this->startTime_ != nullptr
        && this->status_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline GetLivyComputeResponseBodyData& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // autoStopConfiguration Field Functions 
    bool hasAutoStopConfiguration() const { return this->autoStopConfiguration_ != nullptr;};
    void deleteAutoStopConfiguration() { this->autoStopConfiguration_ = nullptr;};
    inline const Models::GetLivyComputeResponseBodyDataAutoStopConfiguration & autoStopConfiguration() const { DARABONBA_PTR_GET_CONST(autoStopConfiguration_, Models::GetLivyComputeResponseBodyDataAutoStopConfiguration) };
    inline Models::GetLivyComputeResponseBodyDataAutoStopConfiguration autoStopConfiguration() { DARABONBA_PTR_GET(autoStopConfiguration_, Models::GetLivyComputeResponseBodyDataAutoStopConfiguration) };
    inline GetLivyComputeResponseBodyData& setAutoStopConfiguration(const Models::GetLivyComputeResponseBodyDataAutoStopConfiguration & autoStopConfiguration) { DARABONBA_PTR_SET_VALUE(autoStopConfiguration_, autoStopConfiguration) };
    inline GetLivyComputeResponseBodyData& setAutoStopConfiguration(Models::GetLivyComputeResponseBodyDataAutoStopConfiguration && autoStopConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStopConfiguration_, autoStopConfiguration) };


    // computeId Field Functions 
    bool hasComputeId() const { return this->computeId_ != nullptr;};
    void deleteComputeId() { this->computeId_ = nullptr;};
    inline string computeId() const { DARABONBA_PTR_GET_DEFAULT(computeId_, "") };
    inline GetLivyComputeResponseBodyData& setComputeId(string computeId) { DARABONBA_PTR_SET_VALUE(computeId_, computeId) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline string cpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, "") };
    inline GetLivyComputeResponseBodyData& setCpuLimit(string cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline GetLivyComputeResponseBodyData& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string displayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline GetLivyComputeResponseBodyData& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // enablePublic Field Functions 
    bool hasEnablePublic() const { return this->enablePublic_ != nullptr;};
    void deleteEnablePublic() { this->enablePublic_ = nullptr;};
    inline bool enablePublic() const { DARABONBA_PTR_GET_DEFAULT(enablePublic_, false) };
    inline GetLivyComputeResponseBodyData& setEnablePublic(bool enablePublic) { DARABONBA_PTR_SET_VALUE(enablePublic_, enablePublic) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetLivyComputeResponseBodyData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // endpointInner Field Functions 
    bool hasEndpointInner() const { return this->endpointInner_ != nullptr;};
    void deleteEndpointInner() { this->endpointInner_ = nullptr;};
    inline string endpointInner() const { DARABONBA_PTR_GET_DEFAULT(endpointInner_, "") };
    inline GetLivyComputeResponseBodyData& setEndpointInner(string endpointInner) { DARABONBA_PTR_SET_VALUE(endpointInner_, endpointInner) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline GetLivyComputeResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline GetLivyComputeResponseBodyData& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetLivyComputeResponseBodyData& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // livyServerConf Field Functions 
    bool hasLivyServerConf() const { return this->livyServerConf_ != nullptr;};
    void deleteLivyServerConf() { this->livyServerConf_ = nullptr;};
    inline string livyServerConf() const { DARABONBA_PTR_GET_DEFAULT(livyServerConf_, "") };
    inline GetLivyComputeResponseBodyData& setLivyServerConf(string livyServerConf) { DARABONBA_PTR_SET_VALUE(livyServerConf_, livyServerConf) };


    // livyVersion Field Functions 
    bool hasLivyVersion() const { return this->livyVersion_ != nullptr;};
    void deleteLivyVersion() { this->livyVersion_ = nullptr;};
    inline string livyVersion() const { DARABONBA_PTR_GET_DEFAULT(livyVersion_, "") };
    inline GetLivyComputeResponseBodyData& setLivyVersion(string livyVersion) { DARABONBA_PTR_SET_VALUE(livyVersion_, livyVersion) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline string memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, "") };
    inline GetLivyComputeResponseBodyData& setMemoryLimit(string memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetLivyComputeResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkName Field Functions 
    bool hasNetworkName() const { return this->networkName_ != nullptr;};
    void deleteNetworkName() { this->networkName_ = nullptr;};
    inline string networkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
    inline GetLivyComputeResponseBodyData& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline GetLivyComputeResponseBodyData& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // ramUserId Field Functions 
    bool hasRamUserId() const { return this->ramUserId_ != nullptr;};
    void deleteRamUserId() { this->ramUserId_ = nullptr;};
    inline string ramUserId() const { DARABONBA_PTR_GET_DEFAULT(ramUserId_, "") };
    inline GetLivyComputeResponseBodyData& setRamUserId(string ramUserId) { DARABONBA_PTR_SET_VALUE(ramUserId_, ramUserId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline GetLivyComputeResponseBodyData& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetLivyComputeResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLivyComputeResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<Models::GetLivyComputeResponseBodyDataAutoStopConfiguration> autoStopConfiguration_ = nullptr;
    std::shared_ptr<string> computeId_ = nullptr;
    std::shared_ptr<string> cpuLimit_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> displayReleaseVersion_ = nullptr;
    std::shared_ptr<bool> enablePublic_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> endpointInner_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<bool> fusion_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> livyServerConf_ = nullptr;
    std::shared_ptr<string> livyVersion_ = nullptr;
    std::shared_ptr<string> memoryLimit_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> networkName_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<string> ramUserId_ = nullptr;
    std::shared_ptr<string> releaseVersion_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
