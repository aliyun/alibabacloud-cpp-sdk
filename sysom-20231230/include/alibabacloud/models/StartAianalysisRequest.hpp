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
    };
    friend void from_json(const Darabonba::Json& j, StartAIAnalysisRequest& obj) { 
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
    virtual bool empty() const override { this->analysisTool_ != nullptr
        && this->analysisParams_ != nullptr && this->channel_ != nullptr && this->comms_ != nullptr && this->createdBy_ != nullptr && this->instance_ != nullptr
        && this->instanceType_ != nullptr && this->iterationFunc_ != nullptr && this->iterationMod_ != nullptr && this->iterationRange_ != nullptr && this->pids_ != nullptr
        && this->region_ != nullptr && this->timeout_ != nullptr && this->uid_ != nullptr; };
    // analysisTool Field Functions 
    bool hasAnalysisTool() const { return this->analysisTool_ != nullptr;};
    void deleteAnalysisTool() { this->analysisTool_ = nullptr;};
    inline string analysisTool() const { DARABONBA_PTR_GET_DEFAULT(analysisTool_, "") };
    inline StartAIAnalysisRequest& setAnalysisTool(string analysisTool) { DARABONBA_PTR_SET_VALUE(analysisTool_, analysisTool) };


    // analysisParams Field Functions 
    bool hasAnalysisParams() const { return this->analysisParams_ != nullptr;};
    void deleteAnalysisParams() { this->analysisParams_ = nullptr;};
    inline const vector<string> & analysisParams() const { DARABONBA_PTR_GET_CONST(analysisParams_, vector<string>) };
    inline vector<string> analysisParams() { DARABONBA_PTR_GET(analysisParams_, vector<string>) };
    inline StartAIAnalysisRequest& setAnalysisParams(const vector<string> & analysisParams) { DARABONBA_PTR_SET_VALUE(analysisParams_, analysisParams) };
    inline StartAIAnalysisRequest& setAnalysisParams(vector<string> && analysisParams) { DARABONBA_PTR_SET_RVALUE(analysisParams_, analysisParams) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline StartAIAnalysisRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // comms Field Functions 
    bool hasComms() const { return this->comms_ != nullptr;};
    void deleteComms() { this->comms_ = nullptr;};
    inline string comms() const { DARABONBA_PTR_GET_DEFAULT(comms_, "") };
    inline StartAIAnalysisRequest& setComms(string comms) { DARABONBA_PTR_SET_VALUE(comms_, comms) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline StartAIAnalysisRequest& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline StartAIAnalysisRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline StartAIAnalysisRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // iterationFunc Field Functions 
    bool hasIterationFunc() const { return this->iterationFunc_ != nullptr;};
    void deleteIterationFunc() { this->iterationFunc_ = nullptr;};
    inline string iterationFunc() const { DARABONBA_PTR_GET_DEFAULT(iterationFunc_, "") };
    inline StartAIAnalysisRequest& setIterationFunc(string iterationFunc) { DARABONBA_PTR_SET_VALUE(iterationFunc_, iterationFunc) };


    // iterationMod Field Functions 
    bool hasIterationMod() const { return this->iterationMod_ != nullptr;};
    void deleteIterationMod() { this->iterationMod_ = nullptr;};
    inline string iterationMod() const { DARABONBA_PTR_GET_DEFAULT(iterationMod_, "") };
    inline StartAIAnalysisRequest& setIterationMod(string iterationMod) { DARABONBA_PTR_SET_VALUE(iterationMod_, iterationMod) };


    // iterationRange Field Functions 
    bool hasIterationRange() const { return this->iterationRange_ != nullptr;};
    void deleteIterationRange() { this->iterationRange_ = nullptr;};
    inline const vector<int32_t> & iterationRange() const { DARABONBA_PTR_GET_CONST(iterationRange_, vector<int32_t>) };
    inline vector<int32_t> iterationRange() { DARABONBA_PTR_GET(iterationRange_, vector<int32_t>) };
    inline StartAIAnalysisRequest& setIterationRange(const vector<int32_t> & iterationRange) { DARABONBA_PTR_SET_VALUE(iterationRange_, iterationRange) };
    inline StartAIAnalysisRequest& setIterationRange(vector<int32_t> && iterationRange) { DARABONBA_PTR_SET_RVALUE(iterationRange_, iterationRange) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline string pids() const { DARABONBA_PTR_GET_DEFAULT(pids_, "") };
    inline StartAIAnalysisRequest& setPids(string pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline StartAIAnalysisRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline StartAIAnalysisRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline StartAIAnalysisRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> analysisTool_ = nullptr;
    std::shared_ptr<vector<string>> analysisParams_ = nullptr;
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> comms_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> iterationFunc_ = nullptr;
    std::shared_ptr<string> iterationMod_ = nullptr;
    std::shared_ptr<vector<int32_t>> iterationRange_ = nullptr;
    std::shared_ptr<string> pids_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
