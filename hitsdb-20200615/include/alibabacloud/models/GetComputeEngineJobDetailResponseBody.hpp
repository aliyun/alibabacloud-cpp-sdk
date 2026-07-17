// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEENGINEJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEENGINEJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetComputeEngineJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeEngineJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_ANY_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(LastErrorCode, lastErrorCode_);
      DARABONBA_PTR_TO_JSON(LastErrorInfo, lastErrorInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeEngineJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_ANY_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(LastErrorCode, lastErrorCode_);
      DARABONBA_PTR_FROM_JSON(LastErrorInfo, lastErrorInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetComputeEngineJobDetailResponseBody() = default ;
    GetComputeEngineJobDetailResponseBody(const GetComputeEngineJobDetailResponseBody &) = default ;
    GetComputeEngineJobDetailResponseBody(GetComputeEngineJobDetailResponseBody &&) = default ;
    GetComputeEngineJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeEngineJobDetailResponseBody() = default ;
    GetComputeEngineJobDetailResponseBody& operator=(const GetComputeEngineJobDetailResponseBody &) = default ;
    GetComputeEngineJobDetailResponseBody& operator=(GetComputeEngineJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->configs_ == nullptr && this->createTime_ == nullptr && this->endpoint_ == nullptr && this->extraInfo_ == nullptr && this->finishTime_ == nullptr
        && this->jobId_ == nullptr && this->jobName_ == nullptr && this->jobType_ == nullptr && this->lastErrorCode_ == nullptr && this->lastErrorInfo_ == nullptr
        && this->requestId_ == nullptr && this->state_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetComputeEngineJobDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline     const Darabonba::Json & getConfigs() const { DARABONBA_GET(configs_) };
    Darabonba::Json & getConfigs() { DARABONBA_GET(configs_) };
    inline GetComputeEngineJobDetailResponseBody& setConfigs(const Darabonba::Json & configs) { DARABONBA_SET_VALUE(configs_, configs) };
    inline GetComputeEngineJobDetailResponseBody& setConfigs(Darabonba::Json && configs) { DARABONBA_SET_RVALUE(configs_, configs) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetComputeEngineJobDetailResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetComputeEngineJobDetailResponseBody& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
    inline GetComputeEngineJobDetailResponseBody& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline GetComputeEngineJobDetailResponseBody& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetComputeEngineJobDetailResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetComputeEngineJobDetailResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetComputeEngineJobDetailResponseBody& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetComputeEngineJobDetailResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // lastErrorCode Field Functions 
    bool hasLastErrorCode() const { return this->lastErrorCode_ != nullptr;};
    void deleteLastErrorCode() { this->lastErrorCode_ = nullptr;};
    inline string getLastErrorCode() const { DARABONBA_PTR_GET_DEFAULT(lastErrorCode_, "") };
    inline GetComputeEngineJobDetailResponseBody& setLastErrorCode(string lastErrorCode) { DARABONBA_PTR_SET_VALUE(lastErrorCode_, lastErrorCode) };


    // lastErrorInfo Field Functions 
    bool hasLastErrorInfo() const { return this->lastErrorInfo_ != nullptr;};
    void deleteLastErrorInfo() { this->lastErrorInfo_ = nullptr;};
    inline string getLastErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(lastErrorInfo_, "") };
    inline GetComputeEngineJobDetailResponseBody& setLastErrorInfo(string lastErrorInfo) { DARABONBA_PTR_SET_VALUE(lastErrorInfo_, lastErrorInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeEngineJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetComputeEngineJobDetailResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    Darabonba::Json configs_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> endpoint_ {};
    Darabonba::Json extraInfo_ {};
    shared_ptr<string> finishTime_ {};
    shared_ptr<string> jobId_ {};
    shared_ptr<string> jobName_ {};
    shared_ptr<string> jobType_ {};
    shared_ptr<string> lastErrorCode_ {};
    shared_ptr<string> lastErrorInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
