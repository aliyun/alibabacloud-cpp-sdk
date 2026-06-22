// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTANALYSISOPTION_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTANALYSISOPTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DocumentChapterSummarizeOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetDocumentAnalysisOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentAnalysisOption& obj) { 
      DARABONBA_PTR_TO_JSON(ChapterSummary, chapterSummary_);
      DARABONBA_PTR_TO_JSON(ChapterSummaryOption, chapterSummaryOption_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Layouts, layouts_);
      DARABONBA_PTR_TO_JSON(Narrator, narrator_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentAnalysisOption& obj) { 
      DARABONBA_PTR_FROM_JSON(ChapterSummary, chapterSummary_);
      DARABONBA_PTR_FROM_JSON(ChapterSummaryOption, chapterSummaryOption_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Layouts, layouts_);
      DARABONBA_PTR_FROM_JSON(Narrator, narrator_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    GetDocumentAnalysisOption() = default ;
    GetDocumentAnalysisOption(const GetDocumentAnalysisOption &) = default ;
    GetDocumentAnalysisOption(GetDocumentAnalysisOption &&) = default ;
    GetDocumentAnalysisOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentAnalysisOption() = default ;
    GetDocumentAnalysisOption& operator=(const GetDocumentAnalysisOption &) = default ;
    GetDocumentAnalysisOption& operator=(GetDocumentAnalysisOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chapterSummary_ == nullptr
        && this->chapterSummaryOption_ == nullptr && this->images_ == nullptr && this->keyword_ == nullptr && this->layouts_ == nullptr && this->narrator_ == nullptr
        && this->question_ == nullptr && this->summary_ == nullptr; };
    // chapterSummary Field Functions 
    bool hasChapterSummary() const { return this->chapterSummary_ != nullptr;};
    void deleteChapterSummary() { this->chapterSummary_ = nullptr;};
    inline bool getChapterSummary() const { DARABONBA_PTR_GET_DEFAULT(chapterSummary_, false) };
    inline GetDocumentAnalysisOption& setChapterSummary(bool chapterSummary) { DARABONBA_PTR_SET_VALUE(chapterSummary_, chapterSummary) };


    // chapterSummaryOption Field Functions 
    bool hasChapterSummaryOption() const { return this->chapterSummaryOption_ != nullptr;};
    void deleteChapterSummaryOption() { this->chapterSummaryOption_ = nullptr;};
    inline const DocumentChapterSummarizeOption & getChapterSummaryOption() const { DARABONBA_PTR_GET_CONST(chapterSummaryOption_, DocumentChapterSummarizeOption) };
    inline DocumentChapterSummarizeOption getChapterSummaryOption() { DARABONBA_PTR_GET(chapterSummaryOption_, DocumentChapterSummarizeOption) };
    inline GetDocumentAnalysisOption& setChapterSummaryOption(const DocumentChapterSummarizeOption & chapterSummaryOption) { DARABONBA_PTR_SET_VALUE(chapterSummaryOption_, chapterSummaryOption) };
    inline GetDocumentAnalysisOption& setChapterSummaryOption(DocumentChapterSummarizeOption && chapterSummaryOption) { DARABONBA_PTR_SET_RVALUE(chapterSummaryOption_, chapterSummaryOption) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline bool getImages() const { DARABONBA_PTR_GET_DEFAULT(images_, false) };
    inline GetDocumentAnalysisOption& setImages(bool images) { DARABONBA_PTR_SET_VALUE(images_, images) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline bool getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, false) };
    inline GetDocumentAnalysisOption& setKeyword(bool keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // layouts Field Functions 
    bool hasLayouts() const { return this->layouts_ != nullptr;};
    void deleteLayouts() { this->layouts_ = nullptr;};
    inline bool getLayouts() const { DARABONBA_PTR_GET_DEFAULT(layouts_, false) };
    inline GetDocumentAnalysisOption& setLayouts(bool layouts) { DARABONBA_PTR_SET_VALUE(layouts_, layouts) };


    // narrator Field Functions 
    bool hasNarrator() const { return this->narrator_ != nullptr;};
    void deleteNarrator() { this->narrator_ = nullptr;};
    inline bool getNarrator() const { DARABONBA_PTR_GET_DEFAULT(narrator_, false) };
    inline GetDocumentAnalysisOption& setNarrator(bool narrator) { DARABONBA_PTR_SET_VALUE(narrator_, narrator) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline bool getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, false) };
    inline GetDocumentAnalysisOption& setQuestion(bool question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline bool getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, false) };
    inline GetDocumentAnalysisOption& setSummary(bool summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    // Specifies whether to generate summaries for each chapter. Set to `true` to enable this feature. Use `ChapterSummaryOption` to configure detailed options. Defaults to `false`.
    shared_ptr<bool> chapterSummary_ {};
    shared_ptr<DocumentChapterSummarizeOption> chapterSummaryOption_ {};
    // Specifies whether to analyze each image within the document. Set to `true` to enable this feature. Defaults to `false`.
    shared_ptr<bool> images_ {};
    // Specifies whether to extract keywords from the document. Set to `true` to enable this feature. Defaults to `false`.
    shared_ptr<bool> keyword_ {};
    // Specifies whether to analyze the document layout. Set to `true` to enable this feature. Defaults to `false`.
    shared_ptr<bool> layouts_ {};
    // Specifies whether to identify the narrator in the document. Set to `true` to enable this feature. Defaults to `false`.
    shared_ptr<bool> narrator_ {};
    // Specifies whether to generate questions based on the document content. Set to `true` to enable this feature. Defaults to `false`.
    shared_ptr<bool> question_ {};
    // Specifies whether to generate a summary for the document. Set to `true` to enable this feature. Defaults to `false`.
    shared_ptr<bool> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
