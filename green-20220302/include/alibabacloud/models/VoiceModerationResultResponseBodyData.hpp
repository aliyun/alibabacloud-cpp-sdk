// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VOICEMODERATIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VOICEMODERATIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VoiceModerationResultResponseBodyDataSliceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VoiceModerationResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SliceDetails, sliceDetails_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, VoiceModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SliceDetails, sliceDetails_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    VoiceModerationResultResponseBodyData() = default ;
    VoiceModerationResultResponseBodyData(const VoiceModerationResultResponseBodyData &) = default ;
    VoiceModerationResultResponseBodyData(VoiceModerationResultResponseBodyData &&) = default ;
    VoiceModerationResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceModerationResultResponseBodyData() = default ;
    VoiceModerationResultResponseBodyData& operator=(const VoiceModerationResultResponseBodyData &) = default ;
    VoiceModerationResultResponseBodyData& operator=(VoiceModerationResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->liveId_ != nullptr && this->manualTaskId_ != nullptr && this->riskLevel_ != nullptr && this->sliceDetails_ != nullptr && this->taskId_ != nullptr
        && this->url_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline VoiceModerationResultResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline VoiceModerationResultResponseBodyData& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline VoiceModerationResultResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline VoiceModerationResultResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sliceDetails Field Functions 
    bool hasSliceDetails() const { return this->sliceDetails_ != nullptr;};
    void deleteSliceDetails() { this->sliceDetails_ = nullptr;};
    inline const vector<Models::VoiceModerationResultResponseBodyDataSliceDetails> & sliceDetails() const { DARABONBA_PTR_GET_CONST(sliceDetails_, vector<Models::VoiceModerationResultResponseBodyDataSliceDetails>) };
    inline vector<Models::VoiceModerationResultResponseBodyDataSliceDetails> sliceDetails() { DARABONBA_PTR_GET(sliceDetails_, vector<Models::VoiceModerationResultResponseBodyDataSliceDetails>) };
    inline VoiceModerationResultResponseBodyData& setSliceDetails(const vector<Models::VoiceModerationResultResponseBodyDataSliceDetails> & sliceDetails) { DARABONBA_PTR_SET_VALUE(sliceDetails_, sliceDetails) };
    inline VoiceModerationResultResponseBodyData& setSliceDetails(vector<Models::VoiceModerationResultResponseBodyDataSliceDetails> && sliceDetails) { DARABONBA_PTR_SET_RVALUE(sliceDetails_, sliceDetails) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline VoiceModerationResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline VoiceModerationResultResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The ID of the moderated object.
    std::shared_ptr<string> dataId_ = nullptr;
    // The unique ID of the live stream.
    std::shared_ptr<string> liveId_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    // Risk Level.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The moderation results of audio segments.
    std::shared_ptr<vector<Models::VoiceModerationResultResponseBodyDataSliceDetails>> sliceDetails_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The URL of the moderated content.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
