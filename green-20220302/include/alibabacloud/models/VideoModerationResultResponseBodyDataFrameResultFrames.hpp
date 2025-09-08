// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMES_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFramesResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataFrameResultFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataFrameResultFrames& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(TempUrl, tempUrl_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataFrameResultFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(TempUrl, tempUrl_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    VideoModerationResultResponseBodyDataFrameResultFrames() = default ;
    VideoModerationResultResponseBodyDataFrameResultFrames(const VideoModerationResultResponseBodyDataFrameResultFrames &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFrames(VideoModerationResultResponseBodyDataFrameResultFrames &&) = default ;
    VideoModerationResultResponseBodyDataFrameResultFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataFrameResultFrames() = default ;
    VideoModerationResultResponseBodyDataFrameResultFrames& operator=(const VideoModerationResultResponseBodyDataFrameResultFrames &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFrames& operator=(VideoModerationResultResponseBodyDataFrameResultFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offset_ != nullptr
        && this->results_ != nullptr && this->riskLevel_ != nullptr && this->tempUrl_ != nullptr && this->timestamp_ != nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline float offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0.0) };
    inline VideoModerationResultResponseBodyDataFrameResultFrames& setOffset(float offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResults>) };
    inline vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResults> results() { DARABONBA_PTR_GET(results_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResults>) };
    inline VideoModerationResultResponseBodyDataFrameResultFrames& setResults(const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline VideoModerationResultResponseBodyDataFrameResultFrames& setResults(vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline VideoModerationResultResponseBodyDataFrameResultFrames& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // tempUrl Field Functions 
    bool hasTempUrl() const { return this->tempUrl_ != nullptr;};
    void deleteTempUrl() { this->tempUrl_ = nullptr;};
    inline string tempUrl() const { DARABONBA_PTR_GET_DEFAULT(tempUrl_, "") };
    inline VideoModerationResultResponseBodyDataFrameResultFrames& setTempUrl(string tempUrl) { DARABONBA_PTR_SET_VALUE(tempUrl_, tempUrl) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline VideoModerationResultResponseBodyDataFrameResultFrames& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The interval between the start of the video file and the captured frame. Unit: seconds.
    std::shared_ptr<float> offset_ = nullptr;
    // The results of frame moderation parameters such as the label parameter and the confidence parameter.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResults>> results_ = nullptr;
    // Risk Level.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The temporary URL of a captured frame.
    std::shared_ptr<string> tempUrl_ = nullptr;
    // The absolute timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
