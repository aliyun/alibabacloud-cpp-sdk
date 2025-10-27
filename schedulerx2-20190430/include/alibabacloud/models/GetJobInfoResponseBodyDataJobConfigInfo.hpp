// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBCONFIGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBCONFIGINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo.hpp>
#include <alibabacloud/models/GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs.hpp>
#include <alibabacloud/models/GetJobInfoResponseBodyDataJobConfigInfoTimeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInfoResponseBodyDataJobConfigInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBodyDataJobConfigInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_TO_JSON(JarUrl, jarUrl_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobMonitorInfo, jobMonitorInfo_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MapTaskXAttrs, mapTaskXAttrs_);
      DARABONBA_PTR_TO_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeConfig, timeConfig_);
      DARABONBA_PTR_TO_JSON(XAttrs, XAttrs_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBodyDataJobConfigInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AttemptInterval, attemptInterval_);
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecuteMode, executeMode_);
      DARABONBA_PTR_FROM_JSON(JarUrl, jarUrl_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobMonitorInfo, jobMonitorInfo_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MapTaskXAttrs, mapTaskXAttrs_);
      DARABONBA_PTR_FROM_JSON(MaxAttempt, maxAttempt_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeConfig, timeConfig_);
      DARABONBA_PTR_FROM_JSON(XAttrs, XAttrs_);
    };
    GetJobInfoResponseBodyDataJobConfigInfo() = default ;
    GetJobInfoResponseBodyDataJobConfigInfo(const GetJobInfoResponseBodyDataJobConfigInfo &) = default ;
    GetJobInfoResponseBodyDataJobConfigInfo(GetJobInfoResponseBodyDataJobConfigInfo &&) = default ;
    GetJobInfoResponseBodyDataJobConfigInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBodyDataJobConfigInfo() = default ;
    GetJobInfoResponseBodyDataJobConfigInfo& operator=(const GetJobInfoResponseBodyDataJobConfigInfo &) = default ;
    GetJobInfoResponseBodyDataJobConfigInfo& operator=(GetJobInfoResponseBodyDataJobConfigInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attemptInterval_ == nullptr
        && return this->className_ == nullptr && return this->content_ == nullptr && return this->description_ == nullptr && return this->executeMode_ == nullptr && return this->jarUrl_ == nullptr
        && return this->jobId_ == nullptr && return this->jobMonitorInfo_ == nullptr && return this->jobType_ == nullptr && return this->mapTaskXAttrs_ == nullptr && return this->maxAttempt_ == nullptr
        && return this->maxConcurrency_ == nullptr && return this->name_ == nullptr && return this->parameters_ == nullptr && return this->status_ == nullptr && return this->timeConfig_ == nullptr
        && return this->XAttrs_ == nullptr; };
    // attemptInterval Field Functions 
    bool hasAttemptInterval() const { return this->attemptInterval_ != nullptr;};
    void deleteAttemptInterval() { this->attemptInterval_ = nullptr;};
    inline int32_t attemptInterval() const { DARABONBA_PTR_GET_DEFAULT(attemptInterval_, 0) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setAttemptInterval(int32_t attemptInterval) { DARABONBA_PTR_SET_VALUE(attemptInterval_, attemptInterval) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executeMode Field Functions 
    bool hasExecuteMode() const { return this->executeMode_ != nullptr;};
    void deleteExecuteMode() { this->executeMode_ = nullptr;};
    inline string executeMode() const { DARABONBA_PTR_GET_DEFAULT(executeMode_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setExecuteMode(string executeMode) { DARABONBA_PTR_SET_VALUE(executeMode_, executeMode) };


    // jarUrl Field Functions 
    bool hasJarUrl() const { return this->jarUrl_ != nullptr;};
    void deleteJarUrl() { this->jarUrl_ = nullptr;};
    inline string jarUrl() const { DARABONBA_PTR_GET_DEFAULT(jarUrl_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setJarUrl(string jarUrl) { DARABONBA_PTR_SET_VALUE(jarUrl_, jarUrl) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobMonitorInfo Field Functions 
    bool hasJobMonitorInfo() const { return this->jobMonitorInfo_ != nullptr;};
    void deleteJobMonitorInfo() { this->jobMonitorInfo_ = nullptr;};
    inline const Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo & jobMonitorInfo() const { DARABONBA_PTR_GET_CONST(jobMonitorInfo_, Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo) };
    inline Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo jobMonitorInfo() { DARABONBA_PTR_GET(jobMonitorInfo_, Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setJobMonitorInfo(const Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo & jobMonitorInfo) { DARABONBA_PTR_SET_VALUE(jobMonitorInfo_, jobMonitorInfo) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setJobMonitorInfo(Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo && jobMonitorInfo) { DARABONBA_PTR_SET_RVALUE(jobMonitorInfo_, jobMonitorInfo) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // mapTaskXAttrs Field Functions 
    bool hasMapTaskXAttrs() const { return this->mapTaskXAttrs_ != nullptr;};
    void deleteMapTaskXAttrs() { this->mapTaskXAttrs_ = nullptr;};
    inline const Models::GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs & mapTaskXAttrs() const { DARABONBA_PTR_GET_CONST(mapTaskXAttrs_, Models::GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs) };
    inline Models::GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs mapTaskXAttrs() { DARABONBA_PTR_GET(mapTaskXAttrs_, Models::GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setMapTaskXAttrs(const Models::GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs & mapTaskXAttrs) { DARABONBA_PTR_SET_VALUE(mapTaskXAttrs_, mapTaskXAttrs) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setMapTaskXAttrs(Models::GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs && mapTaskXAttrs) { DARABONBA_PTR_SET_RVALUE(mapTaskXAttrs_, mapTaskXAttrs) };


    // maxAttempt Field Functions 
    bool hasMaxAttempt() const { return this->maxAttempt_ != nullptr;};
    void deleteMaxAttempt() { this->maxAttempt_ = nullptr;};
    inline int32_t maxAttempt() const { DARABONBA_PTR_GET_DEFAULT(maxAttempt_, 0) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setMaxAttempt(int32_t maxAttempt) { DARABONBA_PTR_SET_VALUE(maxAttempt_, maxAttempt) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline string maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setMaxConcurrency(string maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeConfig Field Functions 
    bool hasTimeConfig() const { return this->timeConfig_ != nullptr;};
    void deleteTimeConfig() { this->timeConfig_ = nullptr;};
    inline const Models::GetJobInfoResponseBodyDataJobConfigInfoTimeConfig & timeConfig() const { DARABONBA_PTR_GET_CONST(timeConfig_, Models::GetJobInfoResponseBodyDataJobConfigInfoTimeConfig) };
    inline Models::GetJobInfoResponseBodyDataJobConfigInfoTimeConfig timeConfig() { DARABONBA_PTR_GET(timeConfig_, Models::GetJobInfoResponseBodyDataJobConfigInfoTimeConfig) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setTimeConfig(const Models::GetJobInfoResponseBodyDataJobConfigInfoTimeConfig & timeConfig) { DARABONBA_PTR_SET_VALUE(timeConfig_, timeConfig) };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setTimeConfig(Models::GetJobInfoResponseBodyDataJobConfigInfoTimeConfig && timeConfig) { DARABONBA_PTR_SET_RVALUE(timeConfig_, timeConfig) };


    // XAttrs Field Functions 
    bool hasXAttrs() const { return this->XAttrs_ != nullptr;};
    void deleteXAttrs() { this->XAttrs_ = nullptr;};
    inline string XAttrs() const { DARABONBA_PTR_GET_DEFAULT(XAttrs_, "") };
    inline GetJobInfoResponseBodyDataJobConfigInfo& setXAttrs(string XAttrs) { DARABONBA_PTR_SET_VALUE(XAttrs_, XAttrs) };


  protected:
    // The interval at which the system retried to run the job after a job failure. Default value: 30. Unit: seconds.
    std::shared_ptr<int32_t> attemptInterval_ = nullptr;
    // The full path of the job interface class. This parameter is returned only for jobs whose job type is Java.
    std::shared_ptr<string> className_ = nullptr;
    // The script of a script job.
    std::shared_ptr<string> content_ = nullptr;
    // The description of the job.
    std::shared_ptr<string> description_ = nullptr;
    // The execution mode of the job. Valid values:
    // 
    // *   **Stand-alone operation**: standalone
    // *   **Broadcast run**: broadcast
    // *   **Visual MapReduce**: parallel
    // *   **MapReduce**: batch
    // *   **Shard run**: sharding
    std::shared_ptr<string> executeMode_ = nullptr;
    // The full path used to upload files to Object Storage Service (OSS).
    // 
    // If you use a JAR package, you can upload the JAR package to this OSS path.
    std::shared_ptr<string> jarUrl_ = nullptr;
    // The job ID.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The monitoring information of the job.
    std::shared_ptr<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo> jobMonitorInfo_ = nullptr;
    // The job type.
    std::shared_ptr<string> jobType_ = nullptr;
    // The advanced configurations of the job.
    std::shared_ptr<Models::GetJobInfoResponseBodyDataJobConfigInfoMapTaskXAttrs> mapTaskXAttrs_ = nullptr;
    // The maximum number of retries after a job failure. This parameter was specified based on your business requirements. Default value: 0.
    std::shared_ptr<int32_t> maxAttempt_ = nullptr;
    // The maximum number of concurrent instances. Default value: 1. The default value indicates that if the last triggered instance is running, the next instance is not triggered even if the scheduled point in time for running the next instance is reached.
    std::shared_ptr<string> maxConcurrency_ = nullptr;
    // The job name.
    std::shared_ptr<string> name_ = nullptr;
    // The user-defined parameters that you can obtain when the job is running.
    std::shared_ptr<string> parameters_ = nullptr;
    // Indicates whether the job was enabled. Valid values:
    // 
    // *   **1**: The job was enabled and could be triggered.
    // *   **0**: The job was disabled and could not be triggered.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The time configurations.
    std::shared_ptr<Models::GetJobInfoResponseBodyDataJobConfigInfoTimeConfig> timeConfig_ = nullptr;
    // The extended fields.
    std::shared_ptr<string> XAttrs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
