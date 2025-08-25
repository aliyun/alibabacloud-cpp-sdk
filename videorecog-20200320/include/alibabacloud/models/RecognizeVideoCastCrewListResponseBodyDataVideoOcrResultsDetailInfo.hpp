// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATAVIDEOOCRRESULTSDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATAVIDEOOCRRESULTSDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Boxes, boxes_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(TextType, textType_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(TextType, textType_);
    };
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo() = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo(const RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo(RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo &&) = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo() = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& operator=(const RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& operator=(RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boxes_ != nullptr
        && this->position_ != nullptr && this->score_ != nullptr && this->text_ != nullptr && this->textType_ != nullptr; };
    // boxes Field Functions 
    bool hasBoxes() const { return this->boxes_ != nullptr;};
    void deleteBoxes() { this->boxes_ = nullptr;};
    inline const vector<int64_t> & boxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<int64_t>) };
    inline vector<int64_t> boxes() { DARABONBA_PTR_GET(boxes_, vector<int64_t>) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& setBoxes(const vector<int64_t> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& setBoxes(vector<int64_t> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline const vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition> & position() const { DARABONBA_PTR_GET_CONST(position_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition>) };
    inline vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition> position() { DARABONBA_PTR_GET(position_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition>) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& setPosition(const vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& setPosition(vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // textType Field Functions 
    bool hasTextType() const { return this->textType_ != nullptr;};
    void deleteTextType() { this->textType_ = nullptr;};
    inline int64_t textType() const { DARABONBA_PTR_GET_DEFAULT(textType_, 0L) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo& setTextType(int64_t textType) { DARABONBA_PTR_SET_VALUE(textType_, textType) };


  protected:
    std::shared_ptr<vector<int64_t>> boxes_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfoPosition>> position_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<int64_t> textType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
