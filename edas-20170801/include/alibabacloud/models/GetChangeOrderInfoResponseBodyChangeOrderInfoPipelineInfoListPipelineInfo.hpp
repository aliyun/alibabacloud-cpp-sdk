// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOPIPELINEINFOLISTPIPELINEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOPIPELINEINFOLISTPIPELINEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailList.hpp>
#include <alibabacloud/models/GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(PipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(PipelineStatus, pipelineStatus_);
      DARABONBA_PTR_TO_JSON(StageDetailList, stageDetailList_);
      DARABONBA_PTR_TO_JSON(StageList, stageList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(PipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(PipelineStatus, pipelineStatus_);
      DARABONBA_PTR_FROM_JSON(StageDetailList, stageDetailList_);
      DARABONBA_PTR_FROM_JSON(StageList, stageList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo(const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo(GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo &&) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& operator=(const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& operator=(GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineId_ == nullptr
        && return this->pipelineName_ == nullptr && return this->pipelineStatus_ == nullptr && return this->stageDetailList_ == nullptr && return this->stageList_ == nullptr && return this->startTime_ == nullptr
        && return this->updateTime_ == nullptr; };
    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // pipelineStatus Field Functions 
    bool hasPipelineStatus() const { return this->pipelineStatus_ != nullptr;};
    void deletePipelineStatus() { this->pipelineStatus_ = nullptr;};
    inline int32_t pipelineStatus() const { DARABONBA_PTR_GET_DEFAULT(pipelineStatus_, 0) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setPipelineStatus(int32_t pipelineStatus) { DARABONBA_PTR_SET_VALUE(pipelineStatus_, pipelineStatus) };


    // stageDetailList Field Functions 
    bool hasStageDetailList() const { return this->stageDetailList_ != nullptr;};
    void deleteStageDetailList() { this->stageDetailList_ = nullptr;};
    inline const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailList & stageDetailList() const { DARABONBA_PTR_GET_CONST(stageDetailList_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailList) };
    inline Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailList stageDetailList() { DARABONBA_PTR_GET(stageDetailList_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailList) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setStageDetailList(const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailList & stageDetailList) { DARABONBA_PTR_SET_VALUE(stageDetailList_, stageDetailList) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setStageDetailList(Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailList && stageDetailList) { DARABONBA_PTR_SET_RVALUE(stageDetailList_, stageDetailList) };


    // stageList Field Functions 
    bool hasStageList() const { return this->stageList_ != nullptr;};
    void deleteStageList() { this->stageList_ = nullptr;};
    inline const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageList & stageList() const { DARABONBA_PTR_GET_CONST(stageList_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageList) };
    inline Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageList stageList() { DARABONBA_PTR_GET(stageList_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageList) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setStageList(const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageList & stageList) { DARABONBA_PTR_SET_VALUE(stageList_, stageList) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setStageList(Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageList && stageList) { DARABONBA_PTR_SET_RVALUE(stageList_, stageList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of each batch for the change during the phased release.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The name of the batch.
    std::shared_ptr<string> pipelineName_ = nullptr;
    // The state of the change task. Valid values:
    // 
    // *   0: ready
    // *   1: in progress
    // *   2: successful
    // *   3: failed
    // *   6: terminated
    // *   8: wait for manual confirmation to trigger the next batch during a manual phased release
    // *   9: wait to trigger the next batch during an automatic phased release
    // *   10: failed due to a system exception
    std::shared_ptr<int32_t> pipelineStatus_ = nullptr;
    // The execution results in each stage.
    std::shared_ptr<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageDetailList> stageDetailList_ = nullptr;
    // The stages of the change process.
    std::shared_ptr<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageList> stageList_ = nullptr;
    // The time when the change task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time when the change task was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
