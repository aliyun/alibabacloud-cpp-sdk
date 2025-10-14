// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONHISTORYRESPONSEBODYCONVERSATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONHISTORYRESPONSEBODYCONVERSATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachTaskSessionHistoryResponseBodyConversationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachTaskSessionHistoryResponseBodyConversationList& obj) { 
      DARABONBA_PTR_TO_JSON(audioUrl, audioUrl_);
      DARABONBA_PTR_TO_JSON(dateLabel, dateLabel_);
      DARABONBA_PTR_TO_JSON(evaluationFeedback, evaluationFeedback_);
      DARABONBA_PTR_TO_JSON(evaluationResult, evaluationResult_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(recordId, recordId_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachTaskSessionHistoryResponseBodyConversationList& obj) { 
      DARABONBA_PTR_FROM_JSON(audioUrl, audioUrl_);
      DARABONBA_PTR_FROM_JSON(dateLabel, dateLabel_);
      DARABONBA_PTR_FROM_JSON(evaluationFeedback, evaluationFeedback_);
      DARABONBA_PTR_FROM_JSON(evaluationResult, evaluationResult_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(recordId, recordId_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    GetAICoachTaskSessionHistoryResponseBodyConversationList() = default ;
    GetAICoachTaskSessionHistoryResponseBodyConversationList(const GetAICoachTaskSessionHistoryResponseBodyConversationList &) = default ;
    GetAICoachTaskSessionHistoryResponseBodyConversationList(GetAICoachTaskSessionHistoryResponseBodyConversationList &&) = default ;
    GetAICoachTaskSessionHistoryResponseBodyConversationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachTaskSessionHistoryResponseBodyConversationList() = default ;
    GetAICoachTaskSessionHistoryResponseBodyConversationList& operator=(const GetAICoachTaskSessionHistoryResponseBodyConversationList &) = default ;
    GetAICoachTaskSessionHistoryResponseBodyConversationList& operator=(GetAICoachTaskSessionHistoryResponseBodyConversationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioUrl_ == nullptr
        && return this->dateLabel_ == nullptr && return this->evaluationFeedback_ == nullptr && return this->evaluationResult_ == nullptr && return this->message_ == nullptr && return this->recordId_ == nullptr
        && return this->role_ == nullptr; };
    // audioUrl Field Functions 
    bool hasAudioUrl() const { return this->audioUrl_ != nullptr;};
    void deleteAudioUrl() { this->audioUrl_ = nullptr;};
    inline string audioUrl() const { DARABONBA_PTR_GET_DEFAULT(audioUrl_, "") };
    inline GetAICoachTaskSessionHistoryResponseBodyConversationList& setAudioUrl(string audioUrl) { DARABONBA_PTR_SET_VALUE(audioUrl_, audioUrl) };


    // dateLabel Field Functions 
    bool hasDateLabel() const { return this->dateLabel_ != nullptr;};
    void deleteDateLabel() { this->dateLabel_ = nullptr;};
    inline string dateLabel() const { DARABONBA_PTR_GET_DEFAULT(dateLabel_, "") };
    inline GetAICoachTaskSessionHistoryResponseBodyConversationList& setDateLabel(string dateLabel) { DARABONBA_PTR_SET_VALUE(dateLabel_, dateLabel) };


    // evaluationFeedback Field Functions 
    bool hasEvaluationFeedback() const { return this->evaluationFeedback_ != nullptr;};
    void deleteEvaluationFeedback() { this->evaluationFeedback_ = nullptr;};
    inline string evaluationFeedback() const { DARABONBA_PTR_GET_DEFAULT(evaluationFeedback_, "") };
    inline GetAICoachTaskSessionHistoryResponseBodyConversationList& setEvaluationFeedback(string evaluationFeedback) { DARABONBA_PTR_SET_VALUE(evaluationFeedback_, evaluationFeedback) };


    // evaluationResult Field Functions 
    bool hasEvaluationResult() const { return this->evaluationResult_ != nullptr;};
    void deleteEvaluationResult() { this->evaluationResult_ = nullptr;};
    inline string evaluationResult() const { DARABONBA_PTR_GET_DEFAULT(evaluationResult_, "") };
    inline GetAICoachTaskSessionHistoryResponseBodyConversationList& setEvaluationResult(string evaluationResult) { DARABONBA_PTR_SET_VALUE(evaluationResult_, evaluationResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAICoachTaskSessionHistoryResponseBodyConversationList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline GetAICoachTaskSessionHistoryResponseBodyConversationList& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetAICoachTaskSessionHistoryResponseBodyConversationList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> audioUrl_ = nullptr;
    std::shared_ptr<string> dateLabel_ = nullptr;
    std::shared_ptr<string> evaluationFeedback_ = nullptr;
    std::shared_ptr<string> evaluationResult_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> recordId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
