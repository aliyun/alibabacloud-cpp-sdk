// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAAUDIORESULT_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAAUDIORESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataAudioResultAudioSummarys.hpp>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataAudioResultSliceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataAudioResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataAudioResult& obj) { 
      DARABONBA_PTR_TO_JSON(AudioSummarys, audioSummarys_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SliceDetails, sliceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataAudioResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioSummarys, audioSummarys_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SliceDetails, sliceDetails_);
    };
    VideoModerationResultResponseBodyDataAudioResult() = default ;
    VideoModerationResultResponseBodyDataAudioResult(const VideoModerationResultResponseBodyDataAudioResult &) = default ;
    VideoModerationResultResponseBodyDataAudioResult(VideoModerationResultResponseBodyDataAudioResult &&) = default ;
    VideoModerationResultResponseBodyDataAudioResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataAudioResult() = default ;
    VideoModerationResultResponseBodyDataAudioResult& operator=(const VideoModerationResultResponseBodyDataAudioResult &) = default ;
    VideoModerationResultResponseBodyDataAudioResult& operator=(VideoModerationResultResponseBodyDataAudioResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioSummarys_ != nullptr
        && this->riskLevel_ != nullptr && this->sliceDetails_ != nullptr; };
    // audioSummarys Field Functions 
    bool hasAudioSummarys() const { return this->audioSummarys_ != nullptr;};
    void deleteAudioSummarys() { this->audioSummarys_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataAudioResultAudioSummarys> & audioSummarys() const { DARABONBA_PTR_GET_CONST(audioSummarys_, vector<Models::VideoModerationResultResponseBodyDataAudioResultAudioSummarys>) };
    inline vector<Models::VideoModerationResultResponseBodyDataAudioResultAudioSummarys> audioSummarys() { DARABONBA_PTR_GET(audioSummarys_, vector<Models::VideoModerationResultResponseBodyDataAudioResultAudioSummarys>) };
    inline VideoModerationResultResponseBodyDataAudioResult& setAudioSummarys(const vector<Models::VideoModerationResultResponseBodyDataAudioResultAudioSummarys> & audioSummarys) { DARABONBA_PTR_SET_VALUE(audioSummarys_, audioSummarys) };
    inline VideoModerationResultResponseBodyDataAudioResult& setAudioSummarys(vector<Models::VideoModerationResultResponseBodyDataAudioResultAudioSummarys> && audioSummarys) { DARABONBA_PTR_SET_RVALUE(audioSummarys_, audioSummarys) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline VideoModerationResultResponseBodyDataAudioResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sliceDetails Field Functions 
    bool hasSliceDetails() const { return this->sliceDetails_ != nullptr;};
    void deleteSliceDetails() { this->sliceDetails_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataAudioResultSliceDetails> & sliceDetails() const { DARABONBA_PTR_GET_CONST(sliceDetails_, vector<Models::VideoModerationResultResponseBodyDataAudioResultSliceDetails>) };
    inline vector<Models::VideoModerationResultResponseBodyDataAudioResultSliceDetails> sliceDetails() { DARABONBA_PTR_GET(sliceDetails_, vector<Models::VideoModerationResultResponseBodyDataAudioResultSliceDetails>) };
    inline VideoModerationResultResponseBodyDataAudioResult& setSliceDetails(const vector<Models::VideoModerationResultResponseBodyDataAudioResultSliceDetails> & sliceDetails) { DARABONBA_PTR_SET_VALUE(sliceDetails_, sliceDetails) };
    inline VideoModerationResultResponseBodyDataAudioResult& setSliceDetails(vector<Models::VideoModerationResultResponseBodyDataAudioResultSliceDetails> && sliceDetails) { DARABONBA_PTR_SET_RVALUE(sliceDetails_, sliceDetails) };


  protected:
    // Summary of voice labels.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataAudioResultAudioSummarys>> audioSummarys_ = nullptr;
    // Risk Level.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The details about the text in the moderated voice. The value is a JSON array that contains one or more elements. Each element corresponds to a text entry.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataAudioResultSliceDetails>> sliceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
