// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULT_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFrameSummarys.hpp>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFrames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataFrameResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataFrameResult& obj) { 
      DARABONBA_PTR_TO_JSON(FrameNum, frameNum_);
      DARABONBA_PTR_TO_JSON(FrameSummarys, frameSummarys_);
      DARABONBA_PTR_TO_JSON(Frames, frames_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataFrameResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameNum, frameNum_);
      DARABONBA_PTR_FROM_JSON(FrameSummarys, frameSummarys_);
      DARABONBA_PTR_FROM_JSON(Frames, frames_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    VideoModerationResultResponseBodyDataFrameResult() = default ;
    VideoModerationResultResponseBodyDataFrameResult(const VideoModerationResultResponseBodyDataFrameResult &) = default ;
    VideoModerationResultResponseBodyDataFrameResult(VideoModerationResultResponseBodyDataFrameResult &&) = default ;
    VideoModerationResultResponseBodyDataFrameResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataFrameResult() = default ;
    VideoModerationResultResponseBodyDataFrameResult& operator=(const VideoModerationResultResponseBodyDataFrameResult &) = default ;
    VideoModerationResultResponseBodyDataFrameResult& operator=(VideoModerationResultResponseBodyDataFrameResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frameNum_ != nullptr
        && this->frameSummarys_ != nullptr && this->frames_ != nullptr && this->riskLevel_ != nullptr; };
    // frameNum Field Functions 
    bool hasFrameNum() const { return this->frameNum_ != nullptr;};
    void deleteFrameNum() { this->frameNum_ = nullptr;};
    inline int32_t frameNum() const { DARABONBA_PTR_GET_DEFAULT(frameNum_, 0) };
    inline VideoModerationResultResponseBodyDataFrameResult& setFrameNum(int32_t frameNum) { DARABONBA_PTR_SET_VALUE(frameNum_, frameNum) };


    // frameSummarys Field Functions 
    bool hasFrameSummarys() const { return this->frameSummarys_ != nullptr;};
    void deleteFrameSummarys() { this->frameSummarys_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataFrameResultFrameSummarys> & frameSummarys() const { DARABONBA_PTR_GET_CONST(frameSummarys_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFrameSummarys>) };
    inline vector<Models::VideoModerationResultResponseBodyDataFrameResultFrameSummarys> frameSummarys() { DARABONBA_PTR_GET(frameSummarys_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFrameSummarys>) };
    inline VideoModerationResultResponseBodyDataFrameResult& setFrameSummarys(const vector<Models::VideoModerationResultResponseBodyDataFrameResultFrameSummarys> & frameSummarys) { DARABONBA_PTR_SET_VALUE(frameSummarys_, frameSummarys) };
    inline VideoModerationResultResponseBodyDataFrameResult& setFrameSummarys(vector<Models::VideoModerationResultResponseBodyDataFrameResultFrameSummarys> && frameSummarys) { DARABONBA_PTR_SET_RVALUE(frameSummarys_, frameSummarys) };


    // frames Field Functions 
    bool hasFrames() const { return this->frames_ != nullptr;};
    void deleteFrames() { this->frames_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataFrameResultFrames> & frames() const { DARABONBA_PTR_GET_CONST(frames_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFrames>) };
    inline vector<Models::VideoModerationResultResponseBodyDataFrameResultFrames> frames() { DARABONBA_PTR_GET(frames_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFrames>) };
    inline VideoModerationResultResponseBodyDataFrameResult& setFrames(const vector<Models::VideoModerationResultResponseBodyDataFrameResultFrames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
    inline VideoModerationResultResponseBodyDataFrameResult& setFrames(vector<Models::VideoModerationResultResponseBodyDataFrameResultFrames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline VideoModerationResultResponseBodyDataFrameResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The number of captured frames that are returned for the video file.
    std::shared_ptr<int32_t> frameNum_ = nullptr;
    // The summary of the labels against which captured frames are matched.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataFrameResultFrameSummarys>> frameSummarys_ = nullptr;
    // The information about the frames that match the labels.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataFrameResultFrames>> frames_ = nullptr;
    // Risk Level.
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
