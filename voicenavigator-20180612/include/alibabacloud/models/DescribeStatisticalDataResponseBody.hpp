// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTATISTICALDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTATISTICALDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DescribeStatisticalDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStatisticalDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationTotalNum, conversationTotalNum_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResolvedQuestionTotalNum, resolvedQuestionTotalNum_);
      DARABONBA_PTR_TO_JSON(StatisticalDataReports, statisticalDataReports_);
      DARABONBA_PTR_TO_JSON(TotalDialoguePassRate, totalDialoguePassRate_);
      DARABONBA_PTR_TO_JSON(TotalKnowledgeHitRate, totalKnowledgeHitRate_);
      DARABONBA_PTR_TO_JSON(TotalResolutionRate, totalResolutionRate_);
      DARABONBA_PTR_TO_JSON(TotalValidAnswerRate, totalValidAnswerRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStatisticalDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationTotalNum, conversationTotalNum_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResolvedQuestionTotalNum, resolvedQuestionTotalNum_);
      DARABONBA_PTR_FROM_JSON(StatisticalDataReports, statisticalDataReports_);
      DARABONBA_PTR_FROM_JSON(TotalDialoguePassRate, totalDialoguePassRate_);
      DARABONBA_PTR_FROM_JSON(TotalKnowledgeHitRate, totalKnowledgeHitRate_);
      DARABONBA_PTR_FROM_JSON(TotalResolutionRate, totalResolutionRate_);
      DARABONBA_PTR_FROM_JSON(TotalValidAnswerRate, totalValidAnswerRate_);
    };
    DescribeStatisticalDataResponseBody() = default ;
    DescribeStatisticalDataResponseBody(const DescribeStatisticalDataResponseBody &) = default ;
    DescribeStatisticalDataResponseBody(DescribeStatisticalDataResponseBody &&) = default ;
    DescribeStatisticalDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStatisticalDataResponseBody() = default ;
    DescribeStatisticalDataResponseBody& operator=(const DescribeStatisticalDataResponseBody &) = default ;
    DescribeStatisticalDataResponseBody& operator=(DescribeStatisticalDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatisticalDataReports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatisticalDataReports& obj) { 
        DARABONBA_PTR_TO_JSON(DialoguePassRate, dialoguePassRate_);
        DARABONBA_PTR_TO_JSON(KnowledgeHitRate, knowledgeHitRate_);
        DARABONBA_PTR_TO_JSON(ResolutionRate, resolutionRate_);
        DARABONBA_PTR_TO_JSON(ResolvedQuestionNum, resolvedQuestionNum_);
        DARABONBA_PTR_TO_JSON(StatisticalDate, statisticalDate_);
        DARABONBA_PTR_TO_JSON(TotalConversationNum, totalConversationNum_);
        DARABONBA_PTR_TO_JSON(ValidAnswerRate, validAnswerRate_);
      };
      friend void from_json(const Darabonba::Json& j, StatisticalDataReports& obj) { 
        DARABONBA_PTR_FROM_JSON(DialoguePassRate, dialoguePassRate_);
        DARABONBA_PTR_FROM_JSON(KnowledgeHitRate, knowledgeHitRate_);
        DARABONBA_PTR_FROM_JSON(ResolutionRate, resolutionRate_);
        DARABONBA_PTR_FROM_JSON(ResolvedQuestionNum, resolvedQuestionNum_);
        DARABONBA_PTR_FROM_JSON(StatisticalDate, statisticalDate_);
        DARABONBA_PTR_FROM_JSON(TotalConversationNum, totalConversationNum_);
        DARABONBA_PTR_FROM_JSON(ValidAnswerRate, validAnswerRate_);
      };
      StatisticalDataReports() = default ;
      StatisticalDataReports(const StatisticalDataReports &) = default ;
      StatisticalDataReports(StatisticalDataReports &&) = default ;
      StatisticalDataReports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatisticalDataReports() = default ;
      StatisticalDataReports& operator=(const StatisticalDataReports &) = default ;
      StatisticalDataReports& operator=(StatisticalDataReports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dialoguePassRate_ == nullptr
        && this->knowledgeHitRate_ == nullptr && this->resolutionRate_ == nullptr && this->resolvedQuestionNum_ == nullptr && this->statisticalDate_ == nullptr && this->totalConversationNum_ == nullptr
        && this->validAnswerRate_ == nullptr; };
      // dialoguePassRate Field Functions 
      bool hasDialoguePassRate() const { return this->dialoguePassRate_ != nullptr;};
      void deleteDialoguePassRate() { this->dialoguePassRate_ = nullptr;};
      inline string getDialoguePassRate() const { DARABONBA_PTR_GET_DEFAULT(dialoguePassRate_, "") };
      inline StatisticalDataReports& setDialoguePassRate(string dialoguePassRate) { DARABONBA_PTR_SET_VALUE(dialoguePassRate_, dialoguePassRate) };


      // knowledgeHitRate Field Functions 
      bool hasKnowledgeHitRate() const { return this->knowledgeHitRate_ != nullptr;};
      void deleteKnowledgeHitRate() { this->knowledgeHitRate_ = nullptr;};
      inline string getKnowledgeHitRate() const { DARABONBA_PTR_GET_DEFAULT(knowledgeHitRate_, "") };
      inline StatisticalDataReports& setKnowledgeHitRate(string knowledgeHitRate) { DARABONBA_PTR_SET_VALUE(knowledgeHitRate_, knowledgeHitRate) };


      // resolutionRate Field Functions 
      bool hasResolutionRate() const { return this->resolutionRate_ != nullptr;};
      void deleteResolutionRate() { this->resolutionRate_ = nullptr;};
      inline string getResolutionRate() const { DARABONBA_PTR_GET_DEFAULT(resolutionRate_, "") };
      inline StatisticalDataReports& setResolutionRate(string resolutionRate) { DARABONBA_PTR_SET_VALUE(resolutionRate_, resolutionRate) };


      // resolvedQuestionNum Field Functions 
      bool hasResolvedQuestionNum() const { return this->resolvedQuestionNum_ != nullptr;};
      void deleteResolvedQuestionNum() { this->resolvedQuestionNum_ = nullptr;};
      inline int32_t getResolvedQuestionNum() const { DARABONBA_PTR_GET_DEFAULT(resolvedQuestionNum_, 0) };
      inline StatisticalDataReports& setResolvedQuestionNum(int32_t resolvedQuestionNum) { DARABONBA_PTR_SET_VALUE(resolvedQuestionNum_, resolvedQuestionNum) };


      // statisticalDate Field Functions 
      bool hasStatisticalDate() const { return this->statisticalDate_ != nullptr;};
      void deleteStatisticalDate() { this->statisticalDate_ = nullptr;};
      inline string getStatisticalDate() const { DARABONBA_PTR_GET_DEFAULT(statisticalDate_, "") };
      inline StatisticalDataReports& setStatisticalDate(string statisticalDate) { DARABONBA_PTR_SET_VALUE(statisticalDate_, statisticalDate) };


      // totalConversationNum Field Functions 
      bool hasTotalConversationNum() const { return this->totalConversationNum_ != nullptr;};
      void deleteTotalConversationNum() { this->totalConversationNum_ = nullptr;};
      inline int32_t getTotalConversationNum() const { DARABONBA_PTR_GET_DEFAULT(totalConversationNum_, 0) };
      inline StatisticalDataReports& setTotalConversationNum(int32_t totalConversationNum) { DARABONBA_PTR_SET_VALUE(totalConversationNum_, totalConversationNum) };


      // validAnswerRate Field Functions 
      bool hasValidAnswerRate() const { return this->validAnswerRate_ != nullptr;};
      void deleteValidAnswerRate() { this->validAnswerRate_ = nullptr;};
      inline string getValidAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(validAnswerRate_, "") };
      inline StatisticalDataReports& setValidAnswerRate(string validAnswerRate) { DARABONBA_PTR_SET_VALUE(validAnswerRate_, validAnswerRate) };


    protected:
      shared_ptr<string> dialoguePassRate_ {};
      shared_ptr<string> knowledgeHitRate_ {};
      shared_ptr<string> resolutionRate_ {};
      shared_ptr<int32_t> resolvedQuestionNum_ {};
      shared_ptr<string> statisticalDate_ {};
      shared_ptr<int32_t> totalConversationNum_ {};
      shared_ptr<string> validAnswerRate_ {};
    };

    virtual bool empty() const override { return this->conversationTotalNum_ == nullptr
        && this->requestId_ == nullptr && this->resolvedQuestionTotalNum_ == nullptr && this->statisticalDataReports_ == nullptr && this->totalDialoguePassRate_ == nullptr && this->totalKnowledgeHitRate_ == nullptr
        && this->totalResolutionRate_ == nullptr && this->totalValidAnswerRate_ == nullptr; };
    // conversationTotalNum Field Functions 
    bool hasConversationTotalNum() const { return this->conversationTotalNum_ != nullptr;};
    void deleteConversationTotalNum() { this->conversationTotalNum_ = nullptr;};
    inline int64_t getConversationTotalNum() const { DARABONBA_PTR_GET_DEFAULT(conversationTotalNum_, 0L) };
    inline DescribeStatisticalDataResponseBody& setConversationTotalNum(int64_t conversationTotalNum) { DARABONBA_PTR_SET_VALUE(conversationTotalNum_, conversationTotalNum) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStatisticalDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resolvedQuestionTotalNum Field Functions 
    bool hasResolvedQuestionTotalNum() const { return this->resolvedQuestionTotalNum_ != nullptr;};
    void deleteResolvedQuestionTotalNum() { this->resolvedQuestionTotalNum_ = nullptr;};
    inline int64_t getResolvedQuestionTotalNum() const { DARABONBA_PTR_GET_DEFAULT(resolvedQuestionTotalNum_, 0L) };
    inline DescribeStatisticalDataResponseBody& setResolvedQuestionTotalNum(int64_t resolvedQuestionTotalNum) { DARABONBA_PTR_SET_VALUE(resolvedQuestionTotalNum_, resolvedQuestionTotalNum) };


    // statisticalDataReports Field Functions 
    bool hasStatisticalDataReports() const { return this->statisticalDataReports_ != nullptr;};
    void deleteStatisticalDataReports() { this->statisticalDataReports_ = nullptr;};
    inline const vector<DescribeStatisticalDataResponseBody::StatisticalDataReports> & getStatisticalDataReports() const { DARABONBA_PTR_GET_CONST(statisticalDataReports_, vector<DescribeStatisticalDataResponseBody::StatisticalDataReports>) };
    inline vector<DescribeStatisticalDataResponseBody::StatisticalDataReports> getStatisticalDataReports() { DARABONBA_PTR_GET(statisticalDataReports_, vector<DescribeStatisticalDataResponseBody::StatisticalDataReports>) };
    inline DescribeStatisticalDataResponseBody& setStatisticalDataReports(const vector<DescribeStatisticalDataResponseBody::StatisticalDataReports> & statisticalDataReports) { DARABONBA_PTR_SET_VALUE(statisticalDataReports_, statisticalDataReports) };
    inline DescribeStatisticalDataResponseBody& setStatisticalDataReports(vector<DescribeStatisticalDataResponseBody::StatisticalDataReports> && statisticalDataReports) { DARABONBA_PTR_SET_RVALUE(statisticalDataReports_, statisticalDataReports) };


    // totalDialoguePassRate Field Functions 
    bool hasTotalDialoguePassRate() const { return this->totalDialoguePassRate_ != nullptr;};
    void deleteTotalDialoguePassRate() { this->totalDialoguePassRate_ = nullptr;};
    inline string getTotalDialoguePassRate() const { DARABONBA_PTR_GET_DEFAULT(totalDialoguePassRate_, "") };
    inline DescribeStatisticalDataResponseBody& setTotalDialoguePassRate(string totalDialoguePassRate) { DARABONBA_PTR_SET_VALUE(totalDialoguePassRate_, totalDialoguePassRate) };


    // totalKnowledgeHitRate Field Functions 
    bool hasTotalKnowledgeHitRate() const { return this->totalKnowledgeHitRate_ != nullptr;};
    void deleteTotalKnowledgeHitRate() { this->totalKnowledgeHitRate_ = nullptr;};
    inline string getTotalKnowledgeHitRate() const { DARABONBA_PTR_GET_DEFAULT(totalKnowledgeHitRate_, "") };
    inline DescribeStatisticalDataResponseBody& setTotalKnowledgeHitRate(string totalKnowledgeHitRate) { DARABONBA_PTR_SET_VALUE(totalKnowledgeHitRate_, totalKnowledgeHitRate) };


    // totalResolutionRate Field Functions 
    bool hasTotalResolutionRate() const { return this->totalResolutionRate_ != nullptr;};
    void deleteTotalResolutionRate() { this->totalResolutionRate_ = nullptr;};
    inline string getTotalResolutionRate() const { DARABONBA_PTR_GET_DEFAULT(totalResolutionRate_, "") };
    inline DescribeStatisticalDataResponseBody& setTotalResolutionRate(string totalResolutionRate) { DARABONBA_PTR_SET_VALUE(totalResolutionRate_, totalResolutionRate) };


    // totalValidAnswerRate Field Functions 
    bool hasTotalValidAnswerRate() const { return this->totalValidAnswerRate_ != nullptr;};
    void deleteTotalValidAnswerRate() { this->totalValidAnswerRate_ = nullptr;};
    inline string getTotalValidAnswerRate() const { DARABONBA_PTR_GET_DEFAULT(totalValidAnswerRate_, "") };
    inline DescribeStatisticalDataResponseBody& setTotalValidAnswerRate(string totalValidAnswerRate) { DARABONBA_PTR_SET_VALUE(totalValidAnswerRate_, totalValidAnswerRate) };


  protected:
    shared_ptr<int64_t> conversationTotalNum_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> resolvedQuestionTotalNum_ {};
    shared_ptr<vector<DescribeStatisticalDataResponseBody::StatisticalDataReports>> statisticalDataReports_ {};
    shared_ptr<string> totalDialoguePassRate_ {};
    shared_ptr<string> totalKnowledgeHitRate_ {};
    shared_ptr<string> totalResolutionRate_ {};
    shared_ptr<string> totalValidAnswerRate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
