// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATAOCRRESULTSDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATAOCRRESULTSDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Boxes, boxes_);
      DARABONBA_PTR_TO_JSON(CharProbs, charProbs_);
      DARABONBA_PTR_TO_JSON(FrameIndex, frameIndex_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(TextProb, textProb_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TrackId, trackId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
      DARABONBA_PTR_FROM_JSON(CharProbs, charProbs_);
      DARABONBA_PTR_FROM_JSON(FrameIndex, frameIndex_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(TextProb, textProb_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
    };
    RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo() = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo(const RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo(RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo &&) = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo() = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& operator=(const RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& operator=(RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boxes_ != nullptr
        && this->charProbs_ != nullptr && this->frameIndex_ != nullptr && this->position_ != nullptr && this->score_ != nullptr && this->text_ != nullptr
        && this->textProb_ != nullptr && this->timeStamp_ != nullptr && this->trackId_ != nullptr; };
    // boxes Field Functions 
    bool hasBoxes() const { return this->boxes_ != nullptr;};
    void deleteBoxes() { this->boxes_ = nullptr;};
    inline const vector<int32_t> & boxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<int32_t>) };
    inline vector<int32_t> boxes() { DARABONBA_PTR_GET(boxes_, vector<int32_t>) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setBoxes(const vector<int32_t> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setBoxes(vector<int32_t> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


    // charProbs Field Functions 
    bool hasCharProbs() const { return this->charProbs_ != nullptr;};
    void deleteCharProbs() { this->charProbs_ = nullptr;};
    inline const vector<vector<float>> & charProbs() const { DARABONBA_PTR_GET_CONST(charProbs_, vector<vector<float>>) };
    inline vector<vector<float>> charProbs() { DARABONBA_PTR_GET(charProbs_, vector<vector<float>>) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setCharProbs(const vector<vector<float>> & charProbs) { DARABONBA_PTR_SET_VALUE(charProbs_, charProbs) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setCharProbs(vector<vector<float>> && charProbs) { DARABONBA_PTR_SET_RVALUE(charProbs_, charProbs) };


    // frameIndex Field Functions 
    bool hasFrameIndex() const { return this->frameIndex_ != nullptr;};
    void deleteFrameIndex() { this->frameIndex_ = nullptr;};
    inline int64_t frameIndex() const { DARABONBA_PTR_GET_DEFAULT(frameIndex_, 0L) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setFrameIndex(int64_t frameIndex) { DARABONBA_PTR_SET_VALUE(frameIndex_, frameIndex) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline const vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition> & position() const { DARABONBA_PTR_GET_CONST(position_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition>) };
    inline vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition> position() { DARABONBA_PTR_GET(position_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition>) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setPosition(const vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setPosition(vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // textProb Field Functions 
    bool hasTextProb() const { return this->textProb_ != nullptr;};
    void deleteTextProb() { this->textProb_ = nullptr;};
    inline float textProb() const { DARABONBA_PTR_GET_DEFAULT(textProb_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setTextProb(float textProb) { DARABONBA_PTR_SET_VALUE(textProb_, textProb) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline float timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setTimeStamp(float timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // trackId Field Functions 
    bool hasTrackId() const { return this->trackId_ != nullptr;};
    void deleteTrackId() { this->trackId_ = nullptr;};
    inline int64_t trackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, 0L) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo& setTrackId(int64_t trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


  protected:
    std::shared_ptr<vector<int32_t>> boxes_ = nullptr;
    std::shared_ptr<vector<vector<float>>> charProbs_ = nullptr;
    std::shared_ptr<int64_t> frameIndex_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfoPosition>> position_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<float> textProb_ = nullptr;
    std::shared_ptr<float> timeStamp_ = nullptr;
    std::shared_ptr<int64_t> trackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
