// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISOPTION_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetVideoAnalysisOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisOption& obj) { 
      DARABONBA_PTR_TO_JSON(ChapterSummary, chapterSummary_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PPT, PPT_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Transcript, transcript_);
      DARABONBA_PTR_TO_JSON(TranscriptChapterSummary, transcriptChapterSummary_);
      DARABONBA_PTR_TO_JSON(TranscriptSummary, transcriptSummary_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisOption& obj) { 
      DARABONBA_PTR_FROM_JSON(ChapterSummary, chapterSummary_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PPT, PPT_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Transcript, transcript_);
      DARABONBA_PTR_FROM_JSON(TranscriptChapterSummary, transcriptChapterSummary_);
      DARABONBA_PTR_FROM_JSON(TranscriptSummary, transcriptSummary_);
    };
    GetVideoAnalysisOption() = default ;
    GetVideoAnalysisOption(const GetVideoAnalysisOption &) = default ;
    GetVideoAnalysisOption(GetVideoAnalysisOption &&) = default ;
    GetVideoAnalysisOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisOption() = default ;
    GetVideoAnalysisOption& operator=(const GetVideoAnalysisOption &) = default ;
    GetVideoAnalysisOption& operator=(GetVideoAnalysisOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chapterSummary_ == nullptr
        && this->keyword_ == nullptr && this->PPT_ == nullptr && this->question_ == nullptr && this->summary_ == nullptr && this->transcript_ == nullptr
        && this->transcriptChapterSummary_ == nullptr && this->transcriptSummary_ == nullptr; };
    // chapterSummary Field Functions 
    bool hasChapterSummary() const { return this->chapterSummary_ != nullptr;};
    void deleteChapterSummary() { this->chapterSummary_ = nullptr;};
    inline bool getChapterSummary() const { DARABONBA_PTR_GET_DEFAULT(chapterSummary_, false) };
    inline GetVideoAnalysisOption& setChapterSummary(bool chapterSummary) { DARABONBA_PTR_SET_VALUE(chapterSummary_, chapterSummary) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline bool getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, false) };
    inline GetVideoAnalysisOption& setKeyword(bool keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // PPT Field Functions 
    bool hasPPT() const { return this->PPT_ != nullptr;};
    void deletePPT() { this->PPT_ = nullptr;};
    inline bool getPPT() const { DARABONBA_PTR_GET_DEFAULT(PPT_, false) };
    inline GetVideoAnalysisOption& setPPT(bool PPT) { DARABONBA_PTR_SET_VALUE(PPT_, PPT) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline bool getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, false) };
    inline GetVideoAnalysisOption& setQuestion(bool question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline bool getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, false) };
    inline GetVideoAnalysisOption& setSummary(bool summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // transcript Field Functions 
    bool hasTranscript() const { return this->transcript_ != nullptr;};
    void deleteTranscript() { this->transcript_ = nullptr;};
    inline bool getTranscript() const { DARABONBA_PTR_GET_DEFAULT(transcript_, false) };
    inline GetVideoAnalysisOption& setTranscript(bool transcript) { DARABONBA_PTR_SET_VALUE(transcript_, transcript) };


    // transcriptChapterSummary Field Functions 
    bool hasTranscriptChapterSummary() const { return this->transcriptChapterSummary_ != nullptr;};
    void deleteTranscriptChapterSummary() { this->transcriptChapterSummary_ = nullptr;};
    inline bool getTranscriptChapterSummary() const { DARABONBA_PTR_GET_DEFAULT(transcriptChapterSummary_, false) };
    inline GetVideoAnalysisOption& setTranscriptChapterSummary(bool transcriptChapterSummary) { DARABONBA_PTR_SET_VALUE(transcriptChapterSummary_, transcriptChapterSummary) };


    // transcriptSummary Field Functions 
    bool hasTranscriptSummary() const { return this->transcriptSummary_ != nullptr;};
    void deleteTranscriptSummary() { this->transcriptSummary_ = nullptr;};
    inline bool getTranscriptSummary() const { DARABONBA_PTR_GET_DEFAULT(transcriptSummary_, false) };
    inline GetVideoAnalysisOption& setTranscriptSummary(bool transcriptSummary) { DARABONBA_PTR_SET_VALUE(transcriptSummary_, transcriptSummary) };


  protected:
    // Specifies whether to generate a chapter summary for each segment of the video.
    shared_ptr<bool> chapterSummary_ {};
    // Specifies whether to extract relevant keywords from the video.
    shared_ptr<bool> keyword_ {};
    // Specifies whether to generate a presentation (PPT) file based on the video analysis.
    shared_ptr<bool> PPT_ {};
    // Specifies whether to generate potential questions about the video.
    shared_ptr<bool> question_ {};
    // Specifies whether to generate a concise video summary.
    shared_ptr<bool> summary_ {};
    // Specifies whether to transcribe the spoken audio in the video to text.
    shared_ptr<bool> transcript_ {};
    // Specifies whether to generate a chapter-based summary from the video transcript.
    shared_ptr<bool> transcriptChapterSummary_ {};
    // Specifies whether to generate a summary of the video transcript.
    shared_ptr<bool> transcriptSummary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
