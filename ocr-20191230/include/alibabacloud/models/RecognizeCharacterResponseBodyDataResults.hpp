// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZECHARACTERRESPONSEBODYDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZECHARACTERRESPONSEBODYDATARESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeCharacterResponseBodyDataResultsTextRectangles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeCharacterResponseBodyDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeCharacterResponseBodyDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(Probability, probability_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(TextRectangles, textRectangles_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeCharacterResponseBodyDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Probability, probability_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(TextRectangles, textRectangles_);
    };
    RecognizeCharacterResponseBodyDataResults() = default ;
    RecognizeCharacterResponseBodyDataResults(const RecognizeCharacterResponseBodyDataResults &) = default ;
    RecognizeCharacterResponseBodyDataResults(RecognizeCharacterResponseBodyDataResults &&) = default ;
    RecognizeCharacterResponseBodyDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeCharacterResponseBodyDataResults() = default ;
    RecognizeCharacterResponseBodyDataResults& operator=(const RecognizeCharacterResponseBodyDataResults &) = default ;
    RecognizeCharacterResponseBodyDataResults& operator=(RecognizeCharacterResponseBodyDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->probability_ != nullptr
        && this->text_ != nullptr && this->textRectangles_ != nullptr; };
    // probability Field Functions 
    bool hasProbability() const { return this->probability_ != nullptr;};
    void deleteProbability() { this->probability_ = nullptr;};
    inline float probability() const { DARABONBA_PTR_GET_DEFAULT(probability_, 0.0) };
    inline RecognizeCharacterResponseBodyDataResults& setProbability(float probability) { DARABONBA_PTR_SET_VALUE(probability_, probability) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RecognizeCharacterResponseBodyDataResults& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // textRectangles Field Functions 
    bool hasTextRectangles() const { return this->textRectangles_ != nullptr;};
    void deleteTextRectangles() { this->textRectangles_ = nullptr;};
    inline const Models::RecognizeCharacterResponseBodyDataResultsTextRectangles & textRectangles() const { DARABONBA_PTR_GET_CONST(textRectangles_, Models::RecognizeCharacterResponseBodyDataResultsTextRectangles) };
    inline Models::RecognizeCharacterResponseBodyDataResultsTextRectangles textRectangles() { DARABONBA_PTR_GET(textRectangles_, Models::RecognizeCharacterResponseBodyDataResultsTextRectangles) };
    inline RecognizeCharacterResponseBodyDataResults& setTextRectangles(const Models::RecognizeCharacterResponseBodyDataResultsTextRectangles & textRectangles) { DARABONBA_PTR_SET_VALUE(textRectangles_, textRectangles) };
    inline RecognizeCharacterResponseBodyDataResults& setTextRectangles(Models::RecognizeCharacterResponseBodyDataResultsTextRectangles && textRectangles) { DARABONBA_PTR_SET_RVALUE(textRectangles_, textRectangles) };


  protected:
    std::shared_ptr<float> probability_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<Models::RecognizeCharacterResponseBodyDataResultsTextRectangles> textRectangles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
