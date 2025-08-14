// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSPOSITIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_TRANSPOSITIONRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class TranspositionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranspositionResult& obj) { 
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslatedText, translatedText_);
    };
    friend void from_json(const Darabonba::Json& j, TranspositionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslatedText, translatedText_);
    };
    TranspositionResult() = default ;
    TranspositionResult(const TranspositionResult &) = default ;
    TranspositionResult(TranspositionResult &&) = default ;
    TranspositionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranspositionResult() = default ;
    TranspositionResult& operator=(const TranspositionResult &) = default ;
    TranspositionResult& operator=(TranspositionResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetLanguage_ != nullptr
        && this->translatedText_ != nullptr; };
    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string targetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TranspositionResult& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translatedText Field Functions 
    bool hasTranslatedText() const { return this->translatedText_ != nullptr;};
    void deleteTranslatedText() { this->translatedText_ = nullptr;};
    inline string translatedText() const { DARABONBA_PTR_GET_DEFAULT(translatedText_, "") };
    inline TranspositionResult& setTranslatedText(string translatedText) { DARABONBA_PTR_SET_VALUE(translatedText_, translatedText) };


  protected:
    std::shared_ptr<string> targetLanguage_ = nullptr;
    std::shared_ptr<string> translatedText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
