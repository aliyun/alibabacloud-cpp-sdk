// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MARKRESULT_HPP_
#define ALIBABACLOUD_MODELS_MARKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class MarkResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MarkResult& obj) { 
      DARABONBA_PTR_TO_JSON(IsNeedVoteJudge, isNeedVoteJudge_);
      DARABONBA_PTR_TO_JSON(MarkResult, markResult_);
      DARABONBA_PTR_TO_JSON(MarkResultId, markResultId_);
      DARABONBA_PTR_TO_JSON(MarkTime, markTime_);
      DARABONBA_PTR_TO_JSON(MarkTitle, markTitle_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(QuestionId, questionId_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(UserMarkResultId, userMarkResultId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, MarkResult& obj) { 
      DARABONBA_PTR_FROM_JSON(IsNeedVoteJudge, isNeedVoteJudge_);
      DARABONBA_PTR_FROM_JSON(MarkResult, markResult_);
      DARABONBA_PTR_FROM_JSON(MarkResultId, markResultId_);
      DARABONBA_PTR_FROM_JSON(MarkTime, markTime_);
      DARABONBA_PTR_FROM_JSON(MarkTitle, markTitle_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(QuestionId, questionId_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(UserMarkResultId, userMarkResultId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    MarkResult() = default ;
    MarkResult(const MarkResult &) = default ;
    MarkResult(MarkResult &&) = default ;
    MarkResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MarkResult() = default ;
    MarkResult& operator=(const MarkResult &) = default ;
    MarkResult& operator=(MarkResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isNeedVoteJudge_ == nullptr
        && this->markResult_ == nullptr && this->markResultId_ == nullptr && this->markTime_ == nullptr && this->markTitle_ == nullptr && this->progress_ == nullptr
        && this->questionId_ == nullptr && this->resultType_ == nullptr && this->userMarkResultId_ == nullptr && this->version_ == nullptr; };
    // isNeedVoteJudge Field Functions 
    bool hasIsNeedVoteJudge() const { return this->isNeedVoteJudge_ != nullptr;};
    void deleteIsNeedVoteJudge() { this->isNeedVoteJudge_ = nullptr;};
    inline bool getIsNeedVoteJudge() const { DARABONBA_PTR_GET_DEFAULT(isNeedVoteJudge_, false) };
    inline MarkResult& setIsNeedVoteJudge(bool isNeedVoteJudge) { DARABONBA_PTR_SET_VALUE(isNeedVoteJudge_, isNeedVoteJudge) };


    // markResult Field Functions 
    bool hasMarkResult() const { return this->markResult_ != nullptr;};
    void deleteMarkResult() { this->markResult_ = nullptr;};
    inline string getMarkResult() const { DARABONBA_PTR_GET_DEFAULT(markResult_, "") };
    inline MarkResult& setMarkResult(string markResult) { DARABONBA_PTR_SET_VALUE(markResult_, markResult) };


    // markResultId Field Functions 
    bool hasMarkResultId() const { return this->markResultId_ != nullptr;};
    void deleteMarkResultId() { this->markResultId_ = nullptr;};
    inline string getMarkResultId() const { DARABONBA_PTR_GET_DEFAULT(markResultId_, "") };
    inline MarkResult& setMarkResultId(string markResultId) { DARABONBA_PTR_SET_VALUE(markResultId_, markResultId) };


    // markTime Field Functions 
    bool hasMarkTime() const { return this->markTime_ != nullptr;};
    void deleteMarkTime() { this->markTime_ = nullptr;};
    inline string getMarkTime() const { DARABONBA_PTR_GET_DEFAULT(markTime_, "") };
    inline MarkResult& setMarkTime(string markTime) { DARABONBA_PTR_SET_VALUE(markTime_, markTime) };


    // markTitle Field Functions 
    bool hasMarkTitle() const { return this->markTitle_ != nullptr;};
    void deleteMarkTitle() { this->markTitle_ = nullptr;};
    inline string getMarkTitle() const { DARABONBA_PTR_GET_DEFAULT(markTitle_, "") };
    inline MarkResult& setMarkTitle(string markTitle) { DARABONBA_PTR_SET_VALUE(markTitle_, markTitle) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline MarkResult& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // questionId Field Functions 
    bool hasQuestionId() const { return this->questionId_ != nullptr;};
    void deleteQuestionId() { this->questionId_ = nullptr;};
    inline string getQuestionId() const { DARABONBA_PTR_GET_DEFAULT(questionId_, "") };
    inline MarkResult& setQuestionId(string questionId) { DARABONBA_PTR_SET_VALUE(questionId_, questionId) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline MarkResult& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // userMarkResultId Field Functions 
    bool hasUserMarkResultId() const { return this->userMarkResultId_ != nullptr;};
    void deleteUserMarkResultId() { this->userMarkResultId_ = nullptr;};
    inline string getUserMarkResultId() const { DARABONBA_PTR_GET_DEFAULT(userMarkResultId_, "") };
    inline MarkResult& setUserMarkResultId(string userMarkResultId) { DARABONBA_PTR_SET_VALUE(userMarkResultId_, userMarkResultId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline MarkResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Indicates whether voting is required. Valid values:  
    // - True: Yes  
    // - False: No
    shared_ptr<bool> isNeedVoteJudge_ {};
    // Question result.
    shared_ptr<string> markResult_ {};
    // Question ID.
    shared_ptr<string> markResultId_ {};
    // Annotation time.
    shared_ptr<string> markTime_ {};
    // Question name.
    shared_ptr<string> markTitle_ {};
    // Progress. The return value is either None or data of JSON type. It includes:  
    // - Total: total number of results.  
    // - Finished: number of completed results.
    shared_ptr<string> progress_ {};
    // Attached question.
    shared_ptr<string> questionId_ {};
    // Result type. Valid values:  
    // - RADIO: Radio  
    // - SLOT: Segment  
    // - INPUT: Fill-in-the-blank  
    // - CHECKBOX: Multiple Choice
    shared_ptr<string> resultType_ {};
    // User annotation result ID.
    shared_ptr<string> userMarkResultId_ {};
    // Version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
