// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTWORD_HPP_
#define ALIBABACLOUD_MODELS_HOTWORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TranspositionResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class Hotword : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Hotword& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(TranspositionResultList, transpositionResultList_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, Hotword& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(TranspositionResultList, transpositionResultList_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    Hotword() = default ;
    Hotword(const Hotword &) = default ;
    Hotword(Hotword &&) = default ;
    Hotword(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Hotword() = default ;
    Hotword& operator=(const Hotword &) = default ;
    Hotword& operator=(Hotword &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && this->text_ == nullptr && this->transpositionResultList_ == nullptr && this->weight_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline Hotword& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline Hotword& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // transpositionResultList Field Functions 
    bool hasTranspositionResultList() const { return this->transpositionResultList_ != nullptr;};
    void deleteTranspositionResultList() { this->transpositionResultList_ = nullptr;};
    inline const vector<TranspositionResult> & getTranspositionResultList() const { DARABONBA_PTR_GET_CONST(transpositionResultList_, vector<TranspositionResult>) };
    inline vector<TranspositionResult> getTranspositionResultList() { DARABONBA_PTR_GET(transpositionResultList_, vector<TranspositionResult>) };
    inline Hotword& setTranspositionResultList(const vector<TranspositionResult> & transpositionResultList) { DARABONBA_PTR_SET_VALUE(transpositionResultList_, transpositionResultList) };
    inline Hotword& setTranspositionResultList(vector<TranspositionResult> && transpositionResultList) { DARABONBA_PTR_SET_RVALUE(transpositionResultList_, transpositionResultList) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline Hotword& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The language of the hotword text. Valid values:
    // 
    // *   For structured media analysis and ASR: zh: Chinese en: English
    // *   For video translation: Supports 53 languages.
    // *
    shared_ptr<string> language_ {};
    // The text of the hotword.
    // 
    // *   For structured media analysis and ASR:
    // *   *   Chinese: Up to 15 characters.
    // *   *   English: Up to 10 words, separated by spaces.
    // *   *   Mixed: Each letter is counted as one character (following the Chinese limit).
    // *   For video translation: Up to 100 characters.
    // *
    shared_ptr<string> text_ {};
    // *   Predefined translation results for the hotword.
    // *   This field is only used in translation-related scenarios.
    shared_ptr<vector<TranspositionResult>> transpositionResultList_ {};
    // The weight of the hotword.
    // 
    // 1.  Valid values: [-6,5].
    // 2.  A positive value increases the likelihood of the word being recognized, while a negative value decreases the likelihood.
    // 3.  A value of -6 specifies that recognition of this word should be minimized.
    // 4.  Recommended value: 2.
    // 5.  If the desired effect is not achieved, you can increase the weight. However, excessively high weights may negatively impact the recognition accuracy of other words.
    shared_ptr<int32_t> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
