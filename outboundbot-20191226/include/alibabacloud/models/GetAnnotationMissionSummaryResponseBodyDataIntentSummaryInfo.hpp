// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODYDATAINTENTSUMMARYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODYDATAINTENTSUMMARYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationCorrectCount, annotationCorrectCount_);
      DARABONBA_PTR_TO_JSON(AnnotationInvalid, annotationInvalid_);
      DARABONBA_PTR_TO_JSON(ChatTotalCount, chatTotalCount_);
      DARABONBA_PTR_TO_JSON(IntentUserSayCount, intentUserSayCount_);
      DARABONBA_PTR_TO_JSON(IntentionNotCoveredCount, intentionNotCoveredCount_);
      DARABONBA_PTR_TO_JSON(MatchErrorCount, matchErrorCount_);
      DARABONBA_PTR_TO_JSON(NoAnnotation, noAnnotation_);
      DARABONBA_PTR_TO_JSON(TranslationUnrecognizedCount, translationUnrecognizedCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationCorrectCount, annotationCorrectCount_);
      DARABONBA_PTR_FROM_JSON(AnnotationInvalid, annotationInvalid_);
      DARABONBA_PTR_FROM_JSON(ChatTotalCount, chatTotalCount_);
      DARABONBA_PTR_FROM_JSON(IntentUserSayCount, intentUserSayCount_);
      DARABONBA_PTR_FROM_JSON(IntentionNotCoveredCount, intentionNotCoveredCount_);
      DARABONBA_PTR_FROM_JSON(MatchErrorCount, matchErrorCount_);
      DARABONBA_PTR_FROM_JSON(NoAnnotation, noAnnotation_);
      DARABONBA_PTR_FROM_JSON(TranslationUnrecognizedCount, translationUnrecognizedCount_);
    };
    GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo() = default ;
    GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo(const GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo &) = default ;
    GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo(GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo &&) = default ;
    GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo() = default ;
    GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& operator=(const GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo &) = default ;
    GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& operator=(GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationCorrectCount_ == nullptr
        && return this->annotationInvalid_ == nullptr && return this->chatTotalCount_ == nullptr && return this->intentUserSayCount_ == nullptr && return this->intentionNotCoveredCount_ == nullptr && return this->matchErrorCount_ == nullptr
        && return this->noAnnotation_ == nullptr && return this->translationUnrecognizedCount_ == nullptr; };
    // annotationCorrectCount Field Functions 
    bool hasAnnotationCorrectCount() const { return this->annotationCorrectCount_ != nullptr;};
    void deleteAnnotationCorrectCount() { this->annotationCorrectCount_ = nullptr;};
    inline int32_t annotationCorrectCount() const { DARABONBA_PTR_GET_DEFAULT(annotationCorrectCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& setAnnotationCorrectCount(int32_t annotationCorrectCount) { DARABONBA_PTR_SET_VALUE(annotationCorrectCount_, annotationCorrectCount) };


    // annotationInvalid Field Functions 
    bool hasAnnotationInvalid() const { return this->annotationInvalid_ != nullptr;};
    void deleteAnnotationInvalid() { this->annotationInvalid_ = nullptr;};
    inline int32_t annotationInvalid() const { DARABONBA_PTR_GET_DEFAULT(annotationInvalid_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& setAnnotationInvalid(int32_t annotationInvalid) { DARABONBA_PTR_SET_VALUE(annotationInvalid_, annotationInvalid) };


    // chatTotalCount Field Functions 
    bool hasChatTotalCount() const { return this->chatTotalCount_ != nullptr;};
    void deleteChatTotalCount() { this->chatTotalCount_ = nullptr;};
    inline int32_t chatTotalCount() const { DARABONBA_PTR_GET_DEFAULT(chatTotalCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& setChatTotalCount(int32_t chatTotalCount) { DARABONBA_PTR_SET_VALUE(chatTotalCount_, chatTotalCount) };


    // intentUserSayCount Field Functions 
    bool hasIntentUserSayCount() const { return this->intentUserSayCount_ != nullptr;};
    void deleteIntentUserSayCount() { this->intentUserSayCount_ = nullptr;};
    inline int32_t intentUserSayCount() const { DARABONBA_PTR_GET_DEFAULT(intentUserSayCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& setIntentUserSayCount(int32_t intentUserSayCount) { DARABONBA_PTR_SET_VALUE(intentUserSayCount_, intentUserSayCount) };


    // intentionNotCoveredCount Field Functions 
    bool hasIntentionNotCoveredCount() const { return this->intentionNotCoveredCount_ != nullptr;};
    void deleteIntentionNotCoveredCount() { this->intentionNotCoveredCount_ = nullptr;};
    inline int32_t intentionNotCoveredCount() const { DARABONBA_PTR_GET_DEFAULT(intentionNotCoveredCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& setIntentionNotCoveredCount(int32_t intentionNotCoveredCount) { DARABONBA_PTR_SET_VALUE(intentionNotCoveredCount_, intentionNotCoveredCount) };


    // matchErrorCount Field Functions 
    bool hasMatchErrorCount() const { return this->matchErrorCount_ != nullptr;};
    void deleteMatchErrorCount() { this->matchErrorCount_ = nullptr;};
    inline int32_t matchErrorCount() const { DARABONBA_PTR_GET_DEFAULT(matchErrorCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& setMatchErrorCount(int32_t matchErrorCount) { DARABONBA_PTR_SET_VALUE(matchErrorCount_, matchErrorCount) };


    // noAnnotation Field Functions 
    bool hasNoAnnotation() const { return this->noAnnotation_ != nullptr;};
    void deleteNoAnnotation() { this->noAnnotation_ = nullptr;};
    inline int32_t noAnnotation() const { DARABONBA_PTR_GET_DEFAULT(noAnnotation_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& setNoAnnotation(int32_t noAnnotation) { DARABONBA_PTR_SET_VALUE(noAnnotation_, noAnnotation) };


    // translationUnrecognizedCount Field Functions 
    bool hasTranslationUnrecognizedCount() const { return this->translationUnrecognizedCount_ != nullptr;};
    void deleteTranslationUnrecognizedCount() { this->translationUnrecognizedCount_ = nullptr;};
    inline int32_t translationUnrecognizedCount() const { DARABONBA_PTR_GET_DEFAULT(translationUnrecognizedCount_, 0) };
    inline GetAnnotationMissionSummaryResponseBodyDataIntentSummaryInfo& setTranslationUnrecognizedCount(int32_t translationUnrecognizedCount) { DARABONBA_PTR_SET_VALUE(translationUnrecognizedCount_, translationUnrecognizedCount) };


  protected:
    std::shared_ptr<int32_t> annotationCorrectCount_ = nullptr;
    std::shared_ptr<int32_t> annotationInvalid_ = nullptr;
    std::shared_ptr<int32_t> chatTotalCount_ = nullptr;
    std::shared_ptr<int32_t> intentUserSayCount_ = nullptr;
    std::shared_ptr<int32_t> intentionNotCoveredCount_ = nullptr;
    std::shared_ptr<int32_t> matchErrorCount_ = nullptr;
    std::shared_ptr<int32_t> noAnnotation_ = nullptr;
    std::shared_ptr<int32_t> translationUnrecognizedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
