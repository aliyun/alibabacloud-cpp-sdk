// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTREADSUMMARYOPTION_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTREADSUMMARYOPTION_HPP_
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
  class DocumentReadSummaryOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentReadSummaryOption& obj) { 
      DARABONBA_PTR_TO_JSON(ChapterSummarize, chapterSummarize_);
      DARABONBA_PTR_TO_JSON(ChapterSummarizeOption, chapterSummarizeOption_);
      DARABONBA_PTR_TO_JSON(Summarize, summarize_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentReadSummaryOption& obj) { 
      DARABONBA_PTR_FROM_JSON(ChapterSummarize, chapterSummarize_);
      DARABONBA_PTR_FROM_JSON(ChapterSummarizeOption, chapterSummarizeOption_);
      DARABONBA_PTR_FROM_JSON(Summarize, summarize_);
    };
    DocumentReadSummaryOption() = default ;
    DocumentReadSummaryOption(const DocumentReadSummaryOption &) = default ;
    DocumentReadSummaryOption(DocumentReadSummaryOption &&) = default ;
    DocumentReadSummaryOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentReadSummaryOption() = default ;
    DocumentReadSummaryOption& operator=(const DocumentReadSummaryOption &) = default ;
    DocumentReadSummaryOption& operator=(DocumentReadSummaryOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chapterSummarize_ == nullptr
        && this->chapterSummarizeOption_ == nullptr && this->summarize_ == nullptr; };
    // chapterSummarize Field Functions 
    bool hasChapterSummarize() const { return this->chapterSummarize_ != nullptr;};
    void deleteChapterSummarize() { this->chapterSummarize_ = nullptr;};
    inline bool getChapterSummarize() const { DARABONBA_PTR_GET_DEFAULT(chapterSummarize_, false) };
    inline DocumentReadSummaryOption& setChapterSummarize(bool chapterSummarize) { DARABONBA_PTR_SET_VALUE(chapterSummarize_, chapterSummarize) };


    // chapterSummarizeOption Field Functions 
    bool hasChapterSummarizeOption() const { return this->chapterSummarizeOption_ != nullptr;};
    void deleteChapterSummarizeOption() { this->chapterSummarizeOption_ = nullptr;};
    inline const DocumentChapterSummarizeOption & getChapterSummarizeOption() const { DARABONBA_PTR_GET_CONST(chapterSummarizeOption_, DocumentChapterSummarizeOption) };
    inline DocumentChapterSummarizeOption getChapterSummarizeOption() { DARABONBA_PTR_GET(chapterSummarizeOption_, DocumentChapterSummarizeOption) };
    inline DocumentReadSummaryOption& setChapterSummarizeOption(const DocumentChapterSummarizeOption & chapterSummarizeOption) { DARABONBA_PTR_SET_VALUE(chapterSummarizeOption_, chapterSummarizeOption) };
    inline DocumentReadSummaryOption& setChapterSummarizeOption(DocumentChapterSummarizeOption && chapterSummarizeOption) { DARABONBA_PTR_SET_RVALUE(chapterSummarizeOption_, chapterSummarizeOption) };


    // summarize Field Functions 
    bool hasSummarize() const { return this->summarize_ != nullptr;};
    void deleteSummarize() { this->summarize_ = nullptr;};
    inline bool getSummarize() const { DARABONBA_PTR_GET_DEFAULT(summarize_, false) };
    inline DocumentReadSummaryOption& setSummarize(bool summarize) { DARABONBA_PTR_SET_VALUE(summarize_, summarize) };


  protected:
    // Specifies whether to extract the chapter-level summary of the article.
    shared_ptr<bool> chapterSummarize_ {};
    // The chapter-level summary options for the article.
    shared_ptr<DocumentChapterSummarizeOption> chapterSummarizeOption_ {};
    // Specifies whether to extract the article summary.
    shared_ptr<bool> summarize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
