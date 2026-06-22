// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOREADOPTION_HPP_
#define ALIBABACLOUD_MODELS_VIDEOREADOPTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VideoReadKeywordOption.hpp>
#include <alibabacloud/models/VideoReadPPTOption.hpp>
#include <alibabacloud/models/VideoReadQuestionOption.hpp>
#include <alibabacloud/models/VideoReadSummaryOption.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoReadOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoReadOption& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PPT, PPT_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, VideoReadOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PPT, PPT_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    VideoReadOption() = default ;
    VideoReadOption(const VideoReadOption &) = default ;
    VideoReadOption(VideoReadOption &&) = default ;
    VideoReadOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoReadOption() = default ;
    VideoReadOption& operator=(const VideoReadOption &) = default ;
    VideoReadOption& operator=(VideoReadOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->PPT_ == nullptr && this->question_ == nullptr && this->summary_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline const VideoReadKeywordOption & getKeyword() const { DARABONBA_PTR_GET_CONST(keyword_, VideoReadKeywordOption) };
    inline VideoReadKeywordOption getKeyword() { DARABONBA_PTR_GET(keyword_, VideoReadKeywordOption) };
    inline VideoReadOption& setKeyword(const VideoReadKeywordOption & keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };
    inline VideoReadOption& setKeyword(VideoReadKeywordOption && keyword) { DARABONBA_PTR_SET_RVALUE(keyword_, keyword) };


    // PPT Field Functions 
    bool hasPPT() const { return this->PPT_ != nullptr;};
    void deletePPT() { this->PPT_ = nullptr;};
    inline const VideoReadPPTOption & getPPT() const { DARABONBA_PTR_GET_CONST(PPT_, VideoReadPPTOption) };
    inline VideoReadPPTOption getPPT() { DARABONBA_PTR_GET(PPT_, VideoReadPPTOption) };
    inline VideoReadOption& setPPT(const VideoReadPPTOption & PPT) { DARABONBA_PTR_SET_VALUE(PPT_, PPT) };
    inline VideoReadOption& setPPT(VideoReadPPTOption && PPT) { DARABONBA_PTR_SET_RVALUE(PPT_, PPT) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline const VideoReadQuestionOption & getQuestion() const { DARABONBA_PTR_GET_CONST(question_, VideoReadQuestionOption) };
    inline VideoReadQuestionOption getQuestion() { DARABONBA_PTR_GET(question_, VideoReadQuestionOption) };
    inline VideoReadOption& setQuestion(const VideoReadQuestionOption & question) { DARABONBA_PTR_SET_VALUE(question_, question) };
    inline VideoReadOption& setQuestion(VideoReadQuestionOption && question) { DARABONBA_PTR_SET_RVALUE(question_, question) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const VideoReadSummaryOption & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, VideoReadSummaryOption) };
    inline VideoReadSummaryOption getSummary() { DARABONBA_PTR_GET(summary_, VideoReadSummaryOption) };
    inline VideoReadOption& setSummary(const VideoReadSummaryOption & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline VideoReadOption& setSummary(VideoReadSummaryOption && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    shared_ptr<VideoReadKeywordOption> keyword_ {};
    shared_ptr<VideoReadPPTOption> PPT_ {};
    shared_ptr<VideoReadQuestionOption> question_ {};
    shared_ptr<VideoReadSummaryOption> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
