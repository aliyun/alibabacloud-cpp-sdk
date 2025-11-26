// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODYDATAASRSUMMARYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODYDATAASRSUMMARYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AddCustomizationDataCount, addCustomizationDataCount_);
      DARABONBA_PTR_TO_JSON(AddVocabularyDataCount, addVocabularyDataCount_);
      DARABONBA_PTR_TO_JSON(AnnotationInvalid, annotationInvalid_);
      DARABONBA_PTR_TO_JSON(CharacterCorrectRate, characterCorrectRate_);
      DARABONBA_PTR_TO_JSON(CharacterErrorRate, characterErrorRate_);
      DARABONBA_PTR_TO_JSON(ChatTotalCount, chatTotalCount_);
      DARABONBA_PTR_TO_JSON(NoAnnotation, noAnnotation_);
      DARABONBA_PTR_TO_JSON(SentenceErrorRate, sentenceErrorRate_);
      DARABONBA_PTR_TO_JSON(WordErrorRate, wordErrorRate_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCustomizationDataCount, addCustomizationDataCount_);
      DARABONBA_PTR_FROM_JSON(AddVocabularyDataCount, addVocabularyDataCount_);
      DARABONBA_PTR_FROM_JSON(AnnotationInvalid, annotationInvalid_);
      DARABONBA_PTR_FROM_JSON(CharacterCorrectRate, characterCorrectRate_);
      DARABONBA_PTR_FROM_JSON(CharacterErrorRate, characterErrorRate_);
      DARABONBA_PTR_FROM_JSON(ChatTotalCount, chatTotalCount_);
      DARABONBA_PTR_FROM_JSON(NoAnnotation, noAnnotation_);
      DARABONBA_PTR_FROM_JSON(SentenceErrorRate, sentenceErrorRate_);
      DARABONBA_PTR_FROM_JSON(WordErrorRate, wordErrorRate_);
    };
    GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo() = default ;
    GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo(const GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo &) = default ;
    GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo(GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo &&) = default ;
    GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo() = default ;
    GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& operator=(const GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo &) = default ;
    GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& operator=(GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addCustomizationDataCount_ == nullptr
        && return this->addVocabularyDataCount_ == nullptr && return this->annotationInvalid_ == nullptr && return this->characterCorrectRate_ == nullptr && return this->characterErrorRate_ == nullptr && return this->chatTotalCount_ == nullptr
        && return this->noAnnotation_ == nullptr && return this->sentenceErrorRate_ == nullptr && return this->wordErrorRate_ == nullptr; };
    // addCustomizationDataCount Field Functions 
    bool hasAddCustomizationDataCount() const { return this->addCustomizationDataCount_ != nullptr;};
    void deleteAddCustomizationDataCount() { this->addCustomizationDataCount_ = nullptr;};
    inline int32_t addCustomizationDataCount() const { DARABONBA_PTR_GET_DEFAULT(addCustomizationDataCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setAddCustomizationDataCount(int32_t addCustomizationDataCount) { DARABONBA_PTR_SET_VALUE(addCustomizationDataCount_, addCustomizationDataCount) };


    // addVocabularyDataCount Field Functions 
    bool hasAddVocabularyDataCount() const { return this->addVocabularyDataCount_ != nullptr;};
    void deleteAddVocabularyDataCount() { this->addVocabularyDataCount_ = nullptr;};
    inline int32_t addVocabularyDataCount() const { DARABONBA_PTR_GET_DEFAULT(addVocabularyDataCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setAddVocabularyDataCount(int32_t addVocabularyDataCount) { DARABONBA_PTR_SET_VALUE(addVocabularyDataCount_, addVocabularyDataCount) };


    // annotationInvalid Field Functions 
    bool hasAnnotationInvalid() const { return this->annotationInvalid_ != nullptr;};
    void deleteAnnotationInvalid() { this->annotationInvalid_ = nullptr;};
    inline int32_t annotationInvalid() const { DARABONBA_PTR_GET_DEFAULT(annotationInvalid_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setAnnotationInvalid(int32_t annotationInvalid) { DARABONBA_PTR_SET_VALUE(annotationInvalid_, annotationInvalid) };


    // characterCorrectRate Field Functions 
    bool hasCharacterCorrectRate() const { return this->characterCorrectRate_ != nullptr;};
    void deleteCharacterCorrectRate() { this->characterCorrectRate_ = nullptr;};
    inline int32_t characterCorrectRate() const { DARABONBA_PTR_GET_DEFAULT(characterCorrectRate_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setCharacterCorrectRate(int32_t characterCorrectRate) { DARABONBA_PTR_SET_VALUE(characterCorrectRate_, characterCorrectRate) };


    // characterErrorRate Field Functions 
    bool hasCharacterErrorRate() const { return this->characterErrorRate_ != nullptr;};
    void deleteCharacterErrorRate() { this->characterErrorRate_ = nullptr;};
    inline int32_t characterErrorRate() const { DARABONBA_PTR_GET_DEFAULT(characterErrorRate_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setCharacterErrorRate(int32_t characterErrorRate) { DARABONBA_PTR_SET_VALUE(characterErrorRate_, characterErrorRate) };


    // chatTotalCount Field Functions 
    bool hasChatTotalCount() const { return this->chatTotalCount_ != nullptr;};
    void deleteChatTotalCount() { this->chatTotalCount_ = nullptr;};
    inline int32_t chatTotalCount() const { DARABONBA_PTR_GET_DEFAULT(chatTotalCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setChatTotalCount(int32_t chatTotalCount) { DARABONBA_PTR_SET_VALUE(chatTotalCount_, chatTotalCount) };


    // noAnnotation Field Functions 
    bool hasNoAnnotation() const { return this->noAnnotation_ != nullptr;};
    void deleteNoAnnotation() { this->noAnnotation_ = nullptr;};
    inline int32_t noAnnotation() const { DARABONBA_PTR_GET_DEFAULT(noAnnotation_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setNoAnnotation(int32_t noAnnotation) { DARABONBA_PTR_SET_VALUE(noAnnotation_, noAnnotation) };


    // sentenceErrorRate Field Functions 
    bool hasSentenceErrorRate() const { return this->sentenceErrorRate_ != nullptr;};
    void deleteSentenceErrorRate() { this->sentenceErrorRate_ = nullptr;};
    inline int32_t sentenceErrorRate() const { DARABONBA_PTR_GET_DEFAULT(sentenceErrorRate_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setSentenceErrorRate(int32_t sentenceErrorRate) { DARABONBA_PTR_SET_VALUE(sentenceErrorRate_, sentenceErrorRate) };


    // wordErrorRate Field Functions 
    bool hasWordErrorRate() const { return this->wordErrorRate_ != nullptr;};
    void deleteWordErrorRate() { this->wordErrorRate_ = nullptr;};
    inline int32_t wordErrorRate() const { DARABONBA_PTR_GET_DEFAULT(wordErrorRate_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataAsrSummaryInfo& setWordErrorRate(int32_t wordErrorRate) { DARABONBA_PTR_SET_VALUE(wordErrorRate_, wordErrorRate) };


  protected:
    std::shared_ptr<int32_t> addCustomizationDataCount_ = nullptr;
    std::shared_ptr<int32_t> addVocabularyDataCount_ = nullptr;
    std::shared_ptr<int32_t> annotationInvalid_ = nullptr;
    std::shared_ptr<int32_t> characterCorrectRate_ = nullptr;
    std::shared_ptr<int32_t> characterErrorRate_ = nullptr;
    std::shared_ptr<int32_t> chatTotalCount_ = nullptr;
    std::shared_ptr<int32_t> noAnnotation_ = nullptr;
    std::shared_ptr<int32_t> sentenceErrorRate_ = nullptr;
    std::shared_ptr<int32_t> wordErrorRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
