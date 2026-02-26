// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTPARSESUMMARYOPTION_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTPARSESUMMARYOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DocumentParseSummaryOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentParseSummaryOption& obj) { 
      DARABONBA_PTR_TO_JSON(ChapterSummarize, chapterSummarize_);
      DARABONBA_PTR_TO_JSON(Summarize, summarize_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentParseSummaryOption& obj) { 
      DARABONBA_PTR_FROM_JSON(ChapterSummarize, chapterSummarize_);
      DARABONBA_PTR_FROM_JSON(Summarize, summarize_);
    };
    DocumentParseSummaryOption() = default ;
    DocumentParseSummaryOption(const DocumentParseSummaryOption &) = default ;
    DocumentParseSummaryOption(DocumentParseSummaryOption &&) = default ;
    DocumentParseSummaryOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentParseSummaryOption() = default ;
    DocumentParseSummaryOption& operator=(const DocumentParseSummaryOption &) = default ;
    DocumentParseSummaryOption& operator=(DocumentParseSummaryOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chapterSummarize_ == nullptr
        && this->summarize_ == nullptr; };
    // chapterSummarize Field Functions 
    bool hasChapterSummarize() const { return this->chapterSummarize_ != nullptr;};
    void deleteChapterSummarize() { this->chapterSummarize_ = nullptr;};
    inline bool getChapterSummarize() const { DARABONBA_PTR_GET_DEFAULT(chapterSummarize_, false) };
    inline DocumentParseSummaryOption& setChapterSummarize(bool chapterSummarize) { DARABONBA_PTR_SET_VALUE(chapterSummarize_, chapterSummarize) };


    // summarize Field Functions 
    bool hasSummarize() const { return this->summarize_ != nullptr;};
    void deleteSummarize() { this->summarize_ = nullptr;};
    inline bool getSummarize() const { DARABONBA_PTR_GET_DEFAULT(summarize_, false) };
    inline DocumentParseSummaryOption& setSummarize(bool summarize) { DARABONBA_PTR_SET_VALUE(summarize_, summarize) };


  protected:
    shared_ptr<bool> chapterSummarize_ {};
    shared_ptr<bool> summarize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
