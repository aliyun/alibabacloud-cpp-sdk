// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERRESPONSEBODYDATAFRAMESELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERRESPONSEBODYDATAFRAMESELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVideoCharacterResponseBodyDataFramesElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCharacterResponseBodyDataFramesElements& obj) { 
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(TextRectangles, textRectangles_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCharacterResponseBodyDataFramesElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(TextRectangles, textRectangles_);
    };
    RecognizeVideoCharacterResponseBodyDataFramesElements() = default ;
    RecognizeVideoCharacterResponseBodyDataFramesElements(const RecognizeVideoCharacterResponseBodyDataFramesElements &) = default ;
    RecognizeVideoCharacterResponseBodyDataFramesElements(RecognizeVideoCharacterResponseBodyDataFramesElements &&) = default ;
    RecognizeVideoCharacterResponseBodyDataFramesElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCharacterResponseBodyDataFramesElements() = default ;
    RecognizeVideoCharacterResponseBodyDataFramesElements& operator=(const RecognizeVideoCharacterResponseBodyDataFramesElements &) = default ;
    RecognizeVideoCharacterResponseBodyDataFramesElements& operator=(RecognizeVideoCharacterResponseBodyDataFramesElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->score_ == nullptr
        && return this->text_ == nullptr && return this->textRectangles_ == nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline RecognizeVideoCharacterResponseBodyDataFramesElements& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RecognizeVideoCharacterResponseBodyDataFramesElements& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // textRectangles Field Functions 
    bool hasTextRectangles() const { return this->textRectangles_ != nullptr;};
    void deleteTextRectangles() { this->textRectangles_ = nullptr;};
    inline const vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles> & textRectangles() const { DARABONBA_PTR_GET_CONST(textRectangles_, vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles>) };
    inline vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles> textRectangles() { DARABONBA_PTR_GET(textRectangles_, vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles>) };
    inline RecognizeVideoCharacterResponseBodyDataFramesElements& setTextRectangles(const vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles> & textRectangles) { DARABONBA_PTR_SET_VALUE(textRectangles_, textRectangles) };
    inline RecognizeVideoCharacterResponseBodyDataFramesElements& setTextRectangles(vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles> && textRectangles) { DARABONBA_PTR_SET_RVALUE(textRectangles_, textRectangles) };


  protected:
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles>> textRectangles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
