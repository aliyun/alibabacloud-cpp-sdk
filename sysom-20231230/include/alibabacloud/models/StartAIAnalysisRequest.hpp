// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class StartAIAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(X-Debug-Id, xDebugId_);
      DARABONBA_PTR_TO_JSON(analysisTool, analysisTool_);
      DARABONBA_PTR_TO_JSON(analysis_params, analysisParams_);
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(comms, comms_);
      DARABONBA_PTR_TO_JSON(created_by, createdBy_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(instance_type, instanceType_);
      DARABONBA_PTR_TO_JSON(iteration_func, iterationFunc_);
      DARABONBA_PTR_TO_JSON(iteration_mod, iterationMod_);
      DARABONBA_PTR_TO_JSON(iteration_range, iterationRange_);
      DARABONBA_PTR_TO_JSON(pids, pids_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
      DARABONBA_PTR_TO_JSON(x-sysom-invoke-source, xSysomInvokeSource_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Debug-Id, xDebugId_);
      DARABONBA_PTR_FROM_JSON(analysisTool, analysisTool_);
      DARABONBA_PTR_FROM_JSON(analysis_params, analysisParams_);
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(comms, comms_);
      DARABONBA_PTR_FROM_JSON(created_by, createdBy_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(instance_type, instanceType_);
      DARABONBA_PTR_FROM_JSON(iteration_func, iterationFunc_);
      DARABONBA_PTR_FROM_JSON(iteration_mod, iterationMod_);
      DARABONBA_PTR_FROM_JSON(iteration_range, iterationRange_);
      DARABONBA_PTR_FROM_JSON(pids, pids_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
      DARABONBA_PTR_FROM_JSON(x-sysom-invoke-source, xSysomInvokeSource_);
    };
    StartAIAnalysisRequest() = default ;
    StartAIAnalysisRequest(const StartAIAnalysisRequest &) = default ;
    StartAIAnalysisRequest(StartAIAnalysisRequest &&) = default ;
    StartAIAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIAnalysisRequest() = default ;
    StartAIAnalysisRequest& operator=(const StartAIAnalysisRequest &) = default ;
    StartAIAnalysisRequest& operator=(StartAIAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->xDebugId_ == nullptr
        && this->analysisTool_ == nullptr && this->analysisParams_ == nullptr && this->channel_ == nullptr && this->comms_ == nullptr && this->createdBy_ == nullptr
        && this->instance_ == nullptr && this->instanceType_ == nullptr && this->iterationFunc_ == nullptr && this->iterationMod_ == nullptr && this->iterationRange_ == nullptr
        && this->pids_ == nullptr && this->region_ == nullptr && this->timeout_ == nullptr && this->uid_ == nullptr && this->xSysomInvokeSource_ == nullptr; };
    // xDebugId Field Functions 
    bool hasXDebugId() const { return this->xDebugId_ != nullptr;};
    void deleteXDebugId() { this->xDebugId_ = nullptr;};
    inline string getXDebugId() const { DARABONBA_PTR_GET_DEFAULT(xDebugId_, "") };
    inline StartAIAnalysisRequest& setXDebugId(string xDebugId) { DARABONBA_PTR_SET_VALUE(xDebugId_, xDebugId) };


    // analysisTool Field Functions 
    bool hasAnalysisTool() const { return this->analysisTool_ != nullptr;};
    void deleteAnalysisTool() { this->analysisTool_ = nullptr;};
    inline string getAnalysisTool() const { DARABONBA_PTR_GET_DEFAULT(analysisTool_, "") };
    inline StartAIAnalysisRequest& setAnalysisTool(string analysisTool) { DARABONBA_PTR_SET_VALUE(analysisTool_, analysisTool) };


    // analysisParams Field Functions 
    bool hasAnalysisParams() const { return this->analysisParams_ != nullptr;};
    void deleteAnalysisParams() { this->analysisParams_ = nullptr;};
    inline const vector<string> & getAnalysisParams() const { DARABONBA_PTR_GET_CONST(analysisParams_, vector<string>) };
    inline vector<string> getAnalysisParams() { DARABONBA_PTR_GET(analysisParams_, vector<string>) };
    inline StartAIAnalysisRequest& setAnalysisParams(const vector<string> & analysisParams) { DARABONBA_PTR_SET_VALUE(analysisParams_, analysisParams) };
    inline StartAIAnalysisRequest& setAnalysisParams(vector<string> && analysisParams) { DARABONBA_PTR_SET_RVALUE(analysisParams_, analysisParams) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline StartAIAnalysisRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // comms Field Functions 
    bool hasComms() const { return this->comms_ != nullptr;};
    void deleteComms() { this->comms_ = nullptr;};
    inline string getComms() const { DARABONBA_PTR_GET_DEFAULT(comms_, "") };
    inline StartAIAnalysisRequest& setComms(string comms) { DARABONBA_PTR_SET_VALUE(comms_, comms) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline StartAIAnalysisRequest& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline StartAIAnalysisRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline StartAIAnalysisRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // iterationFunc Field Functions 
    bool hasIterationFunc() const { return this->iterationFunc_ != nullptr;};
    void deleteIterationFunc() { this->iterationFunc_ = nullptr;};
    inline string getIterationFunc() const { DARABONBA_PTR_GET_DEFAULT(iterationFunc_, "") };
    inline StartAIAnalysisRequest& setIterationFunc(string iterationFunc) { DARABONBA_PTR_SET_VALUE(iterationFunc_, iterationFunc) };


    // iterationMod Field Functions 
    bool hasIterationMod() const { return this->iterationMod_ != nullptr;};
    void deleteIterationMod() { this->iterationMod_ = nullptr;};
    inline string getIterationMod() const { DARABONBA_PTR_GET_DEFAULT(iterationMod_, "") };
    inline StartAIAnalysisRequest& setIterationMod(string iterationMod) { DARABONBA_PTR_SET_VALUE(iterationMod_, iterationMod) };


    // iterationRange Field Functions 
    bool hasIterationRange() const { return this->iterationRange_ != nullptr;};
    void deleteIterationRange() { this->iterationRange_ = nullptr;};
    inline const vector<int32_t> & getIterationRange() const { DARABONBA_PTR_GET_CONST(iterationRange_, vector<int32_t>) };
    inline vector<int32_t> getIterationRange() { DARABONBA_PTR_GET(iterationRange_, vector<int32_t>) };
    inline StartAIAnalysisRequest& setIterationRange(const vector<int32_t> & iterationRange) { DARABONBA_PTR_SET_VALUE(iterationRange_, iterationRange) };
    inline StartAIAnalysisRequest& setIterationRange(vector<int32_t> && iterationRange) { DARABONBA_PTR_SET_RVALUE(iterationRange_, iterationRange) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline string getPids() const { DARABONBA_PTR_GET_DEFAULT(pids_, "") };
    inline StartAIAnalysisRequest& setPids(string pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline StartAIAnalysisRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline StartAIAnalysisRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline StartAIAnalysisRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // xSysomInvokeSource Field Functions 
    bool hasXSysomInvokeSource() const { return this->xSysomInvokeSource_ != nullptr;};
    void deleteXSysomInvokeSource() { this->xSysomInvokeSource_ = nullptr;};
    inline string getXSysomInvokeSource() const { DARABONBA_PTR_GET_DEFAULT(xSysomInvokeSource_, "") };
    inline StartAIAnalysisRequest& setXSysomInvokeSource(string xSysomInvokeSource) { DARABONBA_PTR_SET_VALUE(xSysomInvokeSource_, xSysomInvokeSource) };


  protected:
    shared_ptr<string> xDebugId_ {};
    // The analysis tool. This parameter does not need to be specified when you use OpenAPI.
    shared_ptr<string> analysisTool_ {};
    // The data richness level.
    shared_ptr<vector<string>> analysisParams_ {};
    // The channel name.
    shared_ptr<string> channel_ {};
    // The process name. This parameter is optional.
    shared_ptr<string> comms_ {};
    // The creator. This parameter does not need to be specified when you use OpenAPI.
    shared_ptr<string> createdBy_ {};
    // The instance ID.
    shared_ptr<string> instance_ {};
    // The instance type. This parameter does not need to be specified when you use OpenAPI.
    shared_ptr<string> instanceType_ {};
    // The iteration entry function. This parameter is required only in iteration mode and can be left empty.
    shared_ptr<string> iterationFunc_ {};
    // The iteration entry module. This parameter is required only in iteration mode and can be left empty.
    shared_ptr<string> iterationMod_ {};
    // The iteration range. The iteration count refers to the number of iterations when the data collection module is activated, which is independent of the AI job iteration count.
    shared_ptr<vector<int32_t>> iterationRange_ {};
    // The process IDs (PIDs) of the AI job. Multiple PIDs are supported, separated by commas.
    shared_ptr<string> pids_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The AI Infra analysis duration. Unit: milliseconds. Default value: 2000.
    shared_ptr<int32_t> timeout_ {};
    // The Alibaba Cloud user ID. This parameter does not need to be specified when you use OpenAPI.
    shared_ptr<string> uid_ {};
    shared_ptr<string> xSysomInvokeSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
