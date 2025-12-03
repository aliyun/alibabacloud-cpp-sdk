// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTITLEDIAGNOSERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTITLEDIAGNOSERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetTitleDiagnoseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTitleDiagnoseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AllUppercaseWords, allUppercaseWords_);
      DARABONBA_PTR_TO_JSON(ContainCoreClasses, containCoreClasses_);
      DARABONBA_PTR_TO_JSON(DisableWords, disableWords_);
      DARABONBA_PTR_TO_JSON(DuplicateWords, duplicateWords_);
      DARABONBA_PTR_TO_JSON(LanguageQualityScore, languageQualityScore_);
      DARABONBA_PTR_TO_JSON(NoFirstUppercaseList, noFirstUppercaseList_);
      DARABONBA_PTR_TO_JSON(OverLengthLimit, overLengthLimit_);
      DARABONBA_PTR_TO_JSON(TotalScore, totalScore_);
      DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
      DARABONBA_PTR_TO_JSON(WordSpelledCorrectError, wordSpelledCorrectError_);
    };
    friend void from_json(const Darabonba::Json& j, GetTitleDiagnoseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AllUppercaseWords, allUppercaseWords_);
      DARABONBA_PTR_FROM_JSON(ContainCoreClasses, containCoreClasses_);
      DARABONBA_PTR_FROM_JSON(DisableWords, disableWords_);
      DARABONBA_PTR_FROM_JSON(DuplicateWords, duplicateWords_);
      DARABONBA_PTR_FROM_JSON(LanguageQualityScore, languageQualityScore_);
      DARABONBA_PTR_FROM_JSON(NoFirstUppercaseList, noFirstUppercaseList_);
      DARABONBA_PTR_FROM_JSON(OverLengthLimit, overLengthLimit_);
      DARABONBA_PTR_FROM_JSON(TotalScore, totalScore_);
      DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
      DARABONBA_PTR_FROM_JSON(WordSpelledCorrectError, wordSpelledCorrectError_);
    };
    GetTitleDiagnoseResponseBodyData() = default ;
    GetTitleDiagnoseResponseBodyData(const GetTitleDiagnoseResponseBodyData &) = default ;
    GetTitleDiagnoseResponseBodyData(GetTitleDiagnoseResponseBodyData &&) = default ;
    GetTitleDiagnoseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTitleDiagnoseResponseBodyData() = default ;
    GetTitleDiagnoseResponseBodyData& operator=(const GetTitleDiagnoseResponseBodyData &) = default ;
    GetTitleDiagnoseResponseBodyData& operator=(GetTitleDiagnoseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allUppercaseWords_ == nullptr
        && return this->containCoreClasses_ == nullptr && return this->disableWords_ == nullptr && return this->duplicateWords_ == nullptr && return this->languageQualityScore_ == nullptr && return this->noFirstUppercaseList_ == nullptr
        && return this->overLengthLimit_ == nullptr && return this->totalScore_ == nullptr && return this->wordCount_ == nullptr && return this->wordSpelledCorrectError_ == nullptr; };
    // allUppercaseWords Field Functions 
    bool hasAllUppercaseWords() const { return this->allUppercaseWords_ != nullptr;};
    void deleteAllUppercaseWords() { this->allUppercaseWords_ = nullptr;};
    inline string allUppercaseWords() const { DARABONBA_PTR_GET_DEFAULT(allUppercaseWords_, "") };
    inline GetTitleDiagnoseResponseBodyData& setAllUppercaseWords(string allUppercaseWords) { DARABONBA_PTR_SET_VALUE(allUppercaseWords_, allUppercaseWords) };


    // containCoreClasses Field Functions 
    bool hasContainCoreClasses() const { return this->containCoreClasses_ != nullptr;};
    void deleteContainCoreClasses() { this->containCoreClasses_ = nullptr;};
    inline string containCoreClasses() const { DARABONBA_PTR_GET_DEFAULT(containCoreClasses_, "") };
    inline GetTitleDiagnoseResponseBodyData& setContainCoreClasses(string containCoreClasses) { DARABONBA_PTR_SET_VALUE(containCoreClasses_, containCoreClasses) };


    // disableWords Field Functions 
    bool hasDisableWords() const { return this->disableWords_ != nullptr;};
    void deleteDisableWords() { this->disableWords_ = nullptr;};
    inline string disableWords() const { DARABONBA_PTR_GET_DEFAULT(disableWords_, "") };
    inline GetTitleDiagnoseResponseBodyData& setDisableWords(string disableWords) { DARABONBA_PTR_SET_VALUE(disableWords_, disableWords) };


    // duplicateWords Field Functions 
    bool hasDuplicateWords() const { return this->duplicateWords_ != nullptr;};
    void deleteDuplicateWords() { this->duplicateWords_ = nullptr;};
    inline string duplicateWords() const { DARABONBA_PTR_GET_DEFAULT(duplicateWords_, "") };
    inline GetTitleDiagnoseResponseBodyData& setDuplicateWords(string duplicateWords) { DARABONBA_PTR_SET_VALUE(duplicateWords_, duplicateWords) };


    // languageQualityScore Field Functions 
    bool hasLanguageQualityScore() const { return this->languageQualityScore_ != nullptr;};
    void deleteLanguageQualityScore() { this->languageQualityScore_ = nullptr;};
    inline string languageQualityScore() const { DARABONBA_PTR_GET_DEFAULT(languageQualityScore_, "") };
    inline GetTitleDiagnoseResponseBodyData& setLanguageQualityScore(string languageQualityScore) { DARABONBA_PTR_SET_VALUE(languageQualityScore_, languageQualityScore) };


    // noFirstUppercaseList Field Functions 
    bool hasNoFirstUppercaseList() const { return this->noFirstUppercaseList_ != nullptr;};
    void deleteNoFirstUppercaseList() { this->noFirstUppercaseList_ = nullptr;};
    inline string noFirstUppercaseList() const { DARABONBA_PTR_GET_DEFAULT(noFirstUppercaseList_, "") };
    inline GetTitleDiagnoseResponseBodyData& setNoFirstUppercaseList(string noFirstUppercaseList) { DARABONBA_PTR_SET_VALUE(noFirstUppercaseList_, noFirstUppercaseList) };


    // overLengthLimit Field Functions 
    bool hasOverLengthLimit() const { return this->overLengthLimit_ != nullptr;};
    void deleteOverLengthLimit() { this->overLengthLimit_ = nullptr;};
    inline string overLengthLimit() const { DARABONBA_PTR_GET_DEFAULT(overLengthLimit_, "") };
    inline GetTitleDiagnoseResponseBodyData& setOverLengthLimit(string overLengthLimit) { DARABONBA_PTR_SET_VALUE(overLengthLimit_, overLengthLimit) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline string totalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, "") };
    inline GetTitleDiagnoseResponseBodyData& setTotalScore(string totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


    // wordCount Field Functions 
    bool hasWordCount() const { return this->wordCount_ != nullptr;};
    void deleteWordCount() { this->wordCount_ = nullptr;};
    inline string wordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, "") };
    inline GetTitleDiagnoseResponseBodyData& setWordCount(string wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


    // wordSpelledCorrectError Field Functions 
    bool hasWordSpelledCorrectError() const { return this->wordSpelledCorrectError_ != nullptr;};
    void deleteWordSpelledCorrectError() { this->wordSpelledCorrectError_ = nullptr;};
    inline string wordSpelledCorrectError() const { DARABONBA_PTR_GET_DEFAULT(wordSpelledCorrectError_, "") };
    inline GetTitleDiagnoseResponseBodyData& setWordSpelledCorrectError(string wordSpelledCorrectError) { DARABONBA_PTR_SET_VALUE(wordSpelledCorrectError_, wordSpelledCorrectError) };


  protected:
    std::shared_ptr<string> allUppercaseWords_ = nullptr;
    std::shared_ptr<string> containCoreClasses_ = nullptr;
    std::shared_ptr<string> disableWords_ = nullptr;
    std::shared_ptr<string> duplicateWords_ = nullptr;
    std::shared_ptr<string> languageQualityScore_ = nullptr;
    std::shared_ptr<string> noFirstUppercaseList_ = nullptr;
    std::shared_ptr<string> overLengthLimit_ = nullptr;
    std::shared_ptr<string> totalScore_ = nullptr;
    std::shared_ptr<string> wordCount_ = nullptr;
    std::shared_ptr<string> wordSpelledCorrectError_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
