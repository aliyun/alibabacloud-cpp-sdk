// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartJobRunRequestConfigurationOverrides.hpp>
#include <alibabacloud/models/JobDriver.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class StartJobRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartJobRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(codeType, codeType_);
      DARABONBA_PTR_TO_JSON(configurationOverrides, configurationOverrides_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(executionTimeoutSeconds, executionTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(jobDriver, jobDriver_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartJobRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(codeType, codeType_);
      DARABONBA_PTR_FROM_JSON(configurationOverrides, configurationOverrides_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(executionTimeoutSeconds, executionTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(jobDriver, jobDriver_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    StartJobRunRequest() = default ;
    StartJobRunRequest(const StartJobRunRequest &) = default ;
    StartJobRunRequest(StartJobRunRequest &&) = default ;
    StartJobRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartJobRunRequest() = default ;
    StartJobRunRequest& operator=(const StartJobRunRequest &) = default ;
    StartJobRunRequest& operator=(StartJobRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->codeType_ != nullptr && this->configurationOverrides_ != nullptr && this->displayReleaseVersion_ != nullptr && this->executionTimeoutSeconds_ != nullptr && this->fusion_ != nullptr
        && this->jobDriver_ != nullptr && this->jobId_ != nullptr && this->name_ != nullptr && this->releaseVersion_ != nullptr && this->resourceQueueId_ != nullptr
        && this->tags_ != nullptr && this->regionId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartJobRunRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string codeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline StartJobRunRequest& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // configurationOverrides Field Functions 
    bool hasConfigurationOverrides() const { return this->configurationOverrides_ != nullptr;};
    void deleteConfigurationOverrides() { this->configurationOverrides_ = nullptr;};
    inline const StartJobRunRequestConfigurationOverrides & configurationOverrides() const { DARABONBA_PTR_GET_CONST(configurationOverrides_, StartJobRunRequestConfigurationOverrides) };
    inline StartJobRunRequestConfigurationOverrides configurationOverrides() { DARABONBA_PTR_GET(configurationOverrides_, StartJobRunRequestConfigurationOverrides) };
    inline StartJobRunRequest& setConfigurationOverrides(const StartJobRunRequestConfigurationOverrides & configurationOverrides) { DARABONBA_PTR_SET_VALUE(configurationOverrides_, configurationOverrides) };
    inline StartJobRunRequest& setConfigurationOverrides(StartJobRunRequestConfigurationOverrides && configurationOverrides) { DARABONBA_PTR_SET_RVALUE(configurationOverrides_, configurationOverrides) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string displayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline StartJobRunRequest& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // executionTimeoutSeconds Field Functions 
    bool hasExecutionTimeoutSeconds() const { return this->executionTimeoutSeconds_ != nullptr;};
    void deleteExecutionTimeoutSeconds() { this->executionTimeoutSeconds_ = nullptr;};
    inline int32_t executionTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(executionTimeoutSeconds_, 0) };
    inline StartJobRunRequest& setExecutionTimeoutSeconds(int32_t executionTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(executionTimeoutSeconds_, executionTimeoutSeconds) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline StartJobRunRequest& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // jobDriver Field Functions 
    bool hasJobDriver() const { return this->jobDriver_ != nullptr;};
    void deleteJobDriver() { this->jobDriver_ = nullptr;};
    inline const JobDriver & jobDriver() const { DARABONBA_PTR_GET_CONST(jobDriver_, JobDriver) };
    inline JobDriver jobDriver() { DARABONBA_PTR_GET(jobDriver_, JobDriver) };
    inline StartJobRunRequest& setJobDriver(const JobDriver & jobDriver) { DARABONBA_PTR_SET_VALUE(jobDriver_, jobDriver) };
    inline StartJobRunRequest& setJobDriver(JobDriver && jobDriver) { DARABONBA_PTR_SET_RVALUE(jobDriver_, jobDriver) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline StartJobRunRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StartJobRunRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline StartJobRunRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string resourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline StartJobRunRequest& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> tags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline StartJobRunRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline StartJobRunRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartJobRunRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The code type of the job. Valid values:
    // 
    // *   SQL
    // *   JAR
    // *   PYTHON
    std::shared_ptr<string> codeType_ = nullptr;
    // The advanced configurations of Spark.
    std::shared_ptr<StartJobRunRequestConfigurationOverrides> configurationOverrides_ = nullptr;
    // The version of the Spark engine.
    std::shared_ptr<string> displayReleaseVersion_ = nullptr;
    // The timeout period of the job.
    std::shared_ptr<int32_t> executionTimeoutSeconds_ = nullptr;
    // Specifies whether to enable Fusion engine for acceleration.
    std::shared_ptr<bool> fusion_ = nullptr;
    // The information about Spark Driver.
    std::shared_ptr<JobDriver> jobDriver_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    // The version number of Spark.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The name of the resource queue on which the Spark job runs.
    std::shared_ptr<string> resourceQueueId_ = nullptr;
    // The tags of the job.
    std::shared_ptr<vector<Tag>> tags_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
