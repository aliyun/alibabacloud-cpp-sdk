// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTJOBRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTJOBRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/JobDriver.hpp>
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
    class ConfigurationOverrides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigurationOverrides& obj) { 
        DARABONBA_PTR_TO_JSON(configurations, configurations_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigurationOverrides& obj) { 
        DARABONBA_PTR_FROM_JSON(configurations, configurations_);
      };
      ConfigurationOverrides() = default ;
      ConfigurationOverrides(const ConfigurationOverrides &) = default ;
      ConfigurationOverrides(ConfigurationOverrides &&) = default ;
      ConfigurationOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigurationOverrides() = default ;
      ConfigurationOverrides& operator=(const ConfigurationOverrides &) = default ;
      ConfigurationOverrides& operator=(ConfigurationOverrides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Configurations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configurations& obj) { 
          DARABONBA_PTR_TO_JSON(configFileName, configFileName_);
          DARABONBA_PTR_TO_JSON(configItemKey, configItemKey_);
          DARABONBA_PTR_TO_JSON(configItemValue, configItemValue_);
        };
        friend void from_json(const Darabonba::Json& j, Configurations& obj) { 
          DARABONBA_PTR_FROM_JSON(configFileName, configFileName_);
          DARABONBA_PTR_FROM_JSON(configItemKey, configItemKey_);
          DARABONBA_PTR_FROM_JSON(configItemValue, configItemValue_);
        };
        Configurations() = default ;
        Configurations(const Configurations &) = default ;
        Configurations(Configurations &&) = default ;
        Configurations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configurations() = default ;
        Configurations& operator=(const Configurations &) = default ;
        Configurations& operator=(Configurations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configFileName_ == nullptr
        && this->configItemKey_ == nullptr && this->configItemValue_ == nullptr; };
        // configFileName Field Functions 
        bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
        void deleteConfigFileName() { this->configFileName_ = nullptr;};
        inline string getConfigFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
        inline Configurations& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


        // configItemKey Field Functions 
        bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
        void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
        inline string getConfigItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
        inline Configurations& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


        // configItemValue Field Functions 
        bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
        void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
        inline string getConfigItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
        inline Configurations& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


      protected:
        // The configuration file of SparkConf.
        shared_ptr<string> configFileName_ {};
        // The key of SparkConf.
        shared_ptr<string> configItemKey_ {};
        // The value of SparkConf.
        shared_ptr<string> configItemValue_ {};
      };

      virtual bool empty() const override { return this->configurations_ == nullptr; };
      // configurations Field Functions 
      bool hasConfigurations() const { return this->configurations_ != nullptr;};
      void deleteConfigurations() { this->configurations_ = nullptr;};
      inline const vector<ConfigurationOverrides::Configurations> & getConfigurations() const { DARABONBA_PTR_GET_CONST(configurations_, vector<ConfigurationOverrides::Configurations>) };
      inline vector<ConfigurationOverrides::Configurations> getConfigurations() { DARABONBA_PTR_GET(configurations_, vector<ConfigurationOverrides::Configurations>) };
      inline ConfigurationOverrides& setConfigurations(const vector<ConfigurationOverrides::Configurations> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
      inline ConfigurationOverrides& setConfigurations(vector<ConfigurationOverrides::Configurations> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


    protected:
      // The SparkConf objects.
      shared_ptr<vector<ConfigurationOverrides::Configurations>> configurations_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->codeType_ == nullptr && this->configurationOverrides_ == nullptr && this->displayReleaseVersion_ == nullptr && this->executionTimeoutSeconds_ == nullptr && this->fusion_ == nullptr
        && this->jobDriver_ == nullptr && this->jobId_ == nullptr && this->name_ == nullptr && this->releaseVersion_ == nullptr && this->resourceQueueId_ == nullptr
        && this->tags_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartJobRunRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline StartJobRunRequest& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // configurationOverrides Field Functions 
    bool hasConfigurationOverrides() const { return this->configurationOverrides_ != nullptr;};
    void deleteConfigurationOverrides() { this->configurationOverrides_ = nullptr;};
    inline const StartJobRunRequest::ConfigurationOverrides & getConfigurationOverrides() const { DARABONBA_PTR_GET_CONST(configurationOverrides_, StartJobRunRequest::ConfigurationOverrides) };
    inline StartJobRunRequest::ConfigurationOverrides getConfigurationOverrides() { DARABONBA_PTR_GET(configurationOverrides_, StartJobRunRequest::ConfigurationOverrides) };
    inline StartJobRunRequest& setConfigurationOverrides(const StartJobRunRequest::ConfigurationOverrides & configurationOverrides) { DARABONBA_PTR_SET_VALUE(configurationOverrides_, configurationOverrides) };
    inline StartJobRunRequest& setConfigurationOverrides(StartJobRunRequest::ConfigurationOverrides && configurationOverrides) { DARABONBA_PTR_SET_RVALUE(configurationOverrides_, configurationOverrides) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline StartJobRunRequest& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // executionTimeoutSeconds Field Functions 
    bool hasExecutionTimeoutSeconds() const { return this->executionTimeoutSeconds_ != nullptr;};
    void deleteExecutionTimeoutSeconds() { this->executionTimeoutSeconds_ = nullptr;};
    inline int32_t getExecutionTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(executionTimeoutSeconds_, 0) };
    inline StartJobRunRequest& setExecutionTimeoutSeconds(int32_t executionTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(executionTimeoutSeconds_, executionTimeoutSeconds) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline StartJobRunRequest& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // jobDriver Field Functions 
    bool hasJobDriver() const { return this->jobDriver_ != nullptr;};
    void deleteJobDriver() { this->jobDriver_ = nullptr;};
    inline const JobDriver & getJobDriver() const { DARABONBA_PTR_GET_CONST(jobDriver_, JobDriver) };
    inline JobDriver getJobDriver() { DARABONBA_PTR_GET(jobDriver_, JobDriver) };
    inline StartJobRunRequest& setJobDriver(const JobDriver & jobDriver) { DARABONBA_PTR_SET_VALUE(jobDriver_, jobDriver) };
    inline StartJobRunRequest& setJobDriver(JobDriver && jobDriver) { DARABONBA_PTR_SET_RVALUE(jobDriver_, jobDriver) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline StartJobRunRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StartJobRunRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline StartJobRunRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string getResourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline StartJobRunRequest& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline StartJobRunRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline StartJobRunRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartJobRunRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The code type of the job. Valid values:
    // 
    // *   SQL
    // *   JAR
    // *   PYTHON
    shared_ptr<string> codeType_ {};
    // The advanced configurations of Spark.
    shared_ptr<StartJobRunRequest::ConfigurationOverrides> configurationOverrides_ {};
    // The version of the Spark engine.
    shared_ptr<string> displayReleaseVersion_ {};
    // The timeout period of the job.
    shared_ptr<int32_t> executionTimeoutSeconds_ {};
    // Specifies whether to enable Fusion engine for acceleration.
    shared_ptr<bool> fusion_ {};
    // The information about Spark Driver.
    shared_ptr<JobDriver> jobDriver_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The name of the job.
    shared_ptr<string> name_ {};
    // The version number of Spark.
    shared_ptr<string> releaseVersion_ {};
    // The name of the resource queue on which the Spark job runs.
    shared_ptr<string> resourceQueueId_ {};
    // The tags of the job.
    shared_ptr<vector<Tag>> tags_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
