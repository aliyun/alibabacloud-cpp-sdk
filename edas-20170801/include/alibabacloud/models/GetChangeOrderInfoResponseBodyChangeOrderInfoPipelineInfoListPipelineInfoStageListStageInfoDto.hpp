// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOPIPELINEINFOLISTPIPELINEINFOSTAGELISTSTAGEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOPIPELINEINFOLISTPIPELINEINFOSTAGELISTSTAGEINFODTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTOStageResultDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(StageResultDTO, stageResultDTO_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(StageResultDTO, stageResultDTO_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO(const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO(GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO &&) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& operator=(const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& operator=(GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stageId_ == nullptr
        && return this->stageName_ == nullptr && return this->stageResultDTO_ == nullptr && return this->status_ == nullptr; };
    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // stageResultDTO Field Functions 
    bool hasStageResultDTO() const { return this->stageResultDTO_ != nullptr;};
    void deleteStageResultDTO() { this->stageResultDTO_ = nullptr;};
    inline const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTOStageResultDTO & stageResultDTO() const { DARABONBA_PTR_GET_CONST(stageResultDTO_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTOStageResultDTO) };
    inline Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTOStageResultDTO stageResultDTO() { DARABONBA_PTR_GET(stageResultDTO_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTOStageResultDTO) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& setStageResultDTO(const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTOStageResultDTO & stageResultDTO) { DARABONBA_PTR_SET_VALUE(stageResultDTO_, stageResultDTO) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& setStageResultDTO(Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTOStageResultDTO && stageResultDTO) { DARABONBA_PTR_SET_RVALUE(stageResultDTO_, stageResultDTO) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the stage.
    std::shared_ptr<string> stageId_ = nullptr;
    // The name of the stage.
    std::shared_ptr<string> stageName_ = nullptr;
    // The results of the task executed in the stage.
    std::shared_ptr<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfoStageListStageInfoDTOStageResultDTO> stageResultDTO_ = nullptr;
    // The state of the stage. Valid values:
    // 
    // *   0: ready
    // *   1: in progress
    // *   2: successful
    // *   3: failed
    // *   6: terminated
    // *   8: wait for manual confirmation to trigger the next batch during a manual phased release
    // *   9: wait to trigger the next batch during an automatic phased release
    // *   10: failed due to a system exception
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
