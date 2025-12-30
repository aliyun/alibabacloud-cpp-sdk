// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetResultToReviewResponseBody() = default ;
    GetResultToReviewResponseBody(const GetResultToReviewResponseBody &) = default ;
    GetResultToReviewResponseBody(GetResultToReviewResponseBody &&) = default ;
    GetResultToReviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBody() = default ;
    GetResultToReviewResponseBody& operator=(const GetResultToReviewResponseBody &) = default ;
    GetResultToReviewResponseBody& operator=(GetResultToReviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AudioScheme, audioScheme_);
        DARABONBA_PTR_TO_JSON(AudioURL, audioURL_);
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(FileMergeName, fileMergeName_);
        DARABONBA_PTR_TO_JSON(HitRuleReviewInfoList, hitRuleReviewInfoList_);
        DARABONBA_PTR_TO_JSON(ManualScoreInfoList, manualScoreInfoList_);
        DARABONBA_PTR_TO_JSON(ReviewHistoryList, reviewHistoryList_);
        DARABONBA_PTR_TO_JSON(ReviewTypeIdList, reviewTypeIdList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalScore, totalScore_);
        DARABONBA_PTR_TO_JSON(Vid, vid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioScheme, audioScheme_);
        DARABONBA_PTR_FROM_JSON(AudioURL, audioURL_);
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(FileMergeName, fileMergeName_);
        DARABONBA_PTR_FROM_JSON(HitRuleReviewInfoList, hitRuleReviewInfoList_);
        DARABONBA_PTR_FROM_JSON(ManualScoreInfoList, manualScoreInfoList_);
        DARABONBA_PTR_FROM_JSON(ReviewHistoryList, reviewHistoryList_);
        DARABONBA_PTR_FROM_JSON(ReviewTypeIdList, reviewTypeIdList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalScore, totalScore_);
        DARABONBA_PTR_FROM_JSON(Vid, vid_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReviewTypeIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReviewTypeIdList& obj) { 
          DARABONBA_PTR_TO_JSON(ReviewTypeIdList, reviewTypeIdList_);
        };
        friend void from_json(const Darabonba::Json& j, ReviewTypeIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(ReviewTypeIdList, reviewTypeIdList_);
        };
        ReviewTypeIdList() = default ;
        ReviewTypeIdList(const ReviewTypeIdList &) = default ;
        ReviewTypeIdList(ReviewTypeIdList &&) = default ;
        ReviewTypeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReviewTypeIdList() = default ;
        ReviewTypeIdList& operator=(const ReviewTypeIdList &) = default ;
        ReviewTypeIdList& operator=(ReviewTypeIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReviewTypeIdListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReviewTypeIdListItem& obj) { 
            DARABONBA_PTR_TO_JSON(ReviewKeyIdList, reviewKeyIdList_);
            DARABONBA_PTR_TO_JSON(ReviewTypeId, reviewTypeId_);
          };
          friend void from_json(const Darabonba::Json& j, ReviewTypeIdListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(ReviewKeyIdList, reviewKeyIdList_);
            DARABONBA_PTR_FROM_JSON(ReviewTypeId, reviewTypeId_);
          };
          ReviewTypeIdListItem() = default ;
          ReviewTypeIdListItem(const ReviewTypeIdListItem &) = default ;
          ReviewTypeIdListItem(ReviewTypeIdListItem &&) = default ;
          ReviewTypeIdListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReviewTypeIdListItem() = default ;
          ReviewTypeIdListItem& operator=(const ReviewTypeIdListItem &) = default ;
          ReviewTypeIdListItem& operator=(ReviewTypeIdListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReviewKeyIdList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReviewKeyIdList& obj) { 
              DARABONBA_PTR_TO_JSON(ReviewKeyIdList, reviewKeyIdList_);
            };
            friend void from_json(const Darabonba::Json& j, ReviewKeyIdList& obj) { 
              DARABONBA_PTR_FROM_JSON(ReviewKeyIdList, reviewKeyIdList_);
            };
            ReviewKeyIdList() = default ;
            ReviewKeyIdList(const ReviewKeyIdList &) = default ;
            ReviewKeyIdList(ReviewKeyIdList &&) = default ;
            ReviewKeyIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReviewKeyIdList() = default ;
            ReviewKeyIdList& operator=(const ReviewKeyIdList &) = default ;
            ReviewKeyIdList& operator=(ReviewKeyIdList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->reviewKeyIdList_ == nullptr; };
            // reviewKeyIdList Field Functions 
            bool hasReviewKeyIdList() const { return this->reviewKeyIdList_ != nullptr;};
            void deleteReviewKeyIdList() { this->reviewKeyIdList_ = nullptr;};
            inline const vector<int64_t> & getReviewKeyIdList() const { DARABONBA_PTR_GET_CONST(reviewKeyIdList_, vector<int64_t>) };
            inline vector<int64_t> getReviewKeyIdList() { DARABONBA_PTR_GET(reviewKeyIdList_, vector<int64_t>) };
            inline ReviewKeyIdList& setReviewKeyIdList(const vector<int64_t> & reviewKeyIdList) { DARABONBA_PTR_SET_VALUE(reviewKeyIdList_, reviewKeyIdList) };
            inline ReviewKeyIdList& setReviewKeyIdList(vector<int64_t> && reviewKeyIdList) { DARABONBA_PTR_SET_RVALUE(reviewKeyIdList_, reviewKeyIdList) };


          protected:
            shared_ptr<vector<int64_t>> reviewKeyIdList_ {};
          };

          virtual bool empty() const override { return this->reviewKeyIdList_ == nullptr
        && this->reviewTypeId_ == nullptr; };
          // reviewKeyIdList Field Functions 
          bool hasReviewKeyIdList() const { return this->reviewKeyIdList_ != nullptr;};
          void deleteReviewKeyIdList() { this->reviewKeyIdList_ = nullptr;};
          inline const ReviewTypeIdListItem::ReviewKeyIdList & getReviewKeyIdList() const { DARABONBA_PTR_GET_CONST(reviewKeyIdList_, ReviewTypeIdListItem::ReviewKeyIdList) };
          inline ReviewTypeIdListItem::ReviewKeyIdList getReviewKeyIdList() { DARABONBA_PTR_GET(reviewKeyIdList_, ReviewTypeIdListItem::ReviewKeyIdList) };
          inline ReviewTypeIdListItem& setReviewKeyIdList(const ReviewTypeIdListItem::ReviewKeyIdList & reviewKeyIdList) { DARABONBA_PTR_SET_VALUE(reviewKeyIdList_, reviewKeyIdList) };
          inline ReviewTypeIdListItem& setReviewKeyIdList(ReviewTypeIdListItem::ReviewKeyIdList && reviewKeyIdList) { DARABONBA_PTR_SET_RVALUE(reviewKeyIdList_, reviewKeyIdList) };


          // reviewTypeId Field Functions 
          bool hasReviewTypeId() const { return this->reviewTypeId_ != nullptr;};
          void deleteReviewTypeId() { this->reviewTypeId_ = nullptr;};
          inline int64_t getReviewTypeId() const { DARABONBA_PTR_GET_DEFAULT(reviewTypeId_, 0L) };
          inline ReviewTypeIdListItem& setReviewTypeId(int64_t reviewTypeId) { DARABONBA_PTR_SET_VALUE(reviewTypeId_, reviewTypeId) };


        protected:
          shared_ptr<ReviewTypeIdListItem::ReviewKeyIdList> reviewKeyIdList_ {};
          shared_ptr<int64_t> reviewTypeId_ {};
        };

        virtual bool empty() const override { return this->reviewTypeIdList_ == nullptr; };
        // reviewTypeIdList Field Functions 
        bool hasReviewTypeIdList() const { return this->reviewTypeIdList_ != nullptr;};
        void deleteReviewTypeIdList() { this->reviewTypeIdList_ = nullptr;};
        inline const vector<ReviewTypeIdList::ReviewTypeIdListItem> & getReviewTypeIdList() const { DARABONBA_PTR_GET_CONST(reviewTypeIdList_, vector<ReviewTypeIdList::ReviewTypeIdListItem>) };
        inline vector<ReviewTypeIdList::ReviewTypeIdListItem> getReviewTypeIdList() { DARABONBA_PTR_GET(reviewTypeIdList_, vector<ReviewTypeIdList::ReviewTypeIdListItem>) };
        inline ReviewTypeIdList& setReviewTypeIdList(const vector<ReviewTypeIdList::ReviewTypeIdListItem> & reviewTypeIdList) { DARABONBA_PTR_SET_VALUE(reviewTypeIdList_, reviewTypeIdList) };
        inline ReviewTypeIdList& setReviewTypeIdList(vector<ReviewTypeIdList::ReviewTypeIdListItem> && reviewTypeIdList) { DARABONBA_PTR_SET_RVALUE(reviewTypeIdList_, reviewTypeIdList) };


      protected:
        shared_ptr<vector<ReviewTypeIdList::ReviewTypeIdListItem>> reviewTypeIdList_ {};
      };

      class ReviewHistoryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReviewHistoryList& obj) { 
          DARABONBA_PTR_TO_JSON(ReviewHistory, reviewHistory_);
        };
        friend void from_json(const Darabonba::Json& j, ReviewHistoryList& obj) { 
          DARABONBA_PTR_FROM_JSON(ReviewHistory, reviewHistory_);
        };
        ReviewHistoryList() = default ;
        ReviewHistoryList(const ReviewHistoryList &) = default ;
        ReviewHistoryList(ReviewHistoryList &&) = default ;
        ReviewHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReviewHistoryList() = default ;
        ReviewHistoryList& operator=(const ReviewHistoryList &) = default ;
        ReviewHistoryList& operator=(ReviewHistoryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReviewHistory : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReviewHistory& obj) { 
            DARABONBA_PTR_TO_JSON(Comments, comments_);
            DARABONBA_PTR_TO_JSON(ComplainResult, complainResult_);
            DARABONBA_PTR_TO_JSON(OldScore, oldScore_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
            DARABONBA_PTR_TO_JSON(ReviewManagerType, reviewManagerType_);
            DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
            DARABONBA_PTR_TO_JSON(ReviewRightRule, reviewRightRule_);
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(Time, time_);
            DARABONBA_PTR_TO_JSON(TimeStr, timeStr_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, ReviewHistory& obj) { 
            DARABONBA_PTR_FROM_JSON(Comments, comments_);
            DARABONBA_PTR_FROM_JSON(ComplainResult, complainResult_);
            DARABONBA_PTR_FROM_JSON(OldScore, oldScore_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
            DARABONBA_PTR_FROM_JSON(ReviewManagerType, reviewManagerType_);
            DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
            DARABONBA_PTR_FROM_JSON(ReviewRightRule, reviewRightRule_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(Time, time_);
            DARABONBA_PTR_FROM_JSON(TimeStr, timeStr_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          ReviewHistory() = default ;
          ReviewHistory(const ReviewHistory &) = default ;
          ReviewHistory(ReviewHistory &&) = default ;
          ReviewHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReviewHistory() = default ;
          ReviewHistory& operator=(const ReviewHistory &) = default ;
          ReviewHistory& operator=(ReviewHistory &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReviewRightRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReviewRightRule& obj) { 
              DARABONBA_PTR_TO_JSON(ReviewRightRule, reviewRightRule_);
            };
            friend void from_json(const Darabonba::Json& j, ReviewRightRule& obj) { 
              DARABONBA_PTR_FROM_JSON(ReviewRightRule, reviewRightRule_);
            };
            ReviewRightRule() = default ;
            ReviewRightRule(const ReviewRightRule &) = default ;
            ReviewRightRule(ReviewRightRule &&) = default ;
            ReviewRightRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReviewRightRule() = default ;
            ReviewRightRule& operator=(const ReviewRightRule &) = default ;
            ReviewRightRule& operator=(ReviewRightRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ReviewRightRuleItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ReviewRightRuleItem& obj) { 
                DARABONBA_PTR_TO_JSON(rid, rid_);
                DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
              };
              friend void from_json(const Darabonba::Json& j, ReviewRightRuleItem& obj) { 
                DARABONBA_PTR_FROM_JSON(rid, rid_);
                DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
              };
              ReviewRightRuleItem() = default ;
              ReviewRightRuleItem(const ReviewRightRuleItem &) = default ;
              ReviewRightRuleItem(ReviewRightRuleItem &&) = default ;
              ReviewRightRuleItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ReviewRightRuleItem() = default ;
              ReviewRightRuleItem& operator=(const ReviewRightRuleItem &) = default ;
              ReviewRightRuleItem& operator=(ReviewRightRuleItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->rid_ == nullptr
        && this->ruleName_ == nullptr; };
              // rid Field Functions 
              bool hasRid() const { return this->rid_ != nullptr;};
              void deleteRid() { this->rid_ = nullptr;};
              inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
              inline ReviewRightRuleItem& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


              // ruleName Field Functions 
              bool hasRuleName() const { return this->ruleName_ != nullptr;};
              void deleteRuleName() { this->ruleName_ = nullptr;};
              inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
              inline ReviewRightRuleItem& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


            protected:
              shared_ptr<int64_t> rid_ {};
              shared_ptr<string> ruleName_ {};
            };

            virtual bool empty() const override { return this->reviewRightRule_ == nullptr; };
            // reviewRightRule Field Functions 
            bool hasReviewRightRule() const { return this->reviewRightRule_ != nullptr;};
            void deleteReviewRightRule() { this->reviewRightRule_ = nullptr;};
            inline const vector<ReviewRightRule::ReviewRightRuleItem> & getReviewRightRule() const { DARABONBA_PTR_GET_CONST(reviewRightRule_, vector<ReviewRightRule::ReviewRightRuleItem>) };
            inline vector<ReviewRightRule::ReviewRightRuleItem> getReviewRightRule() { DARABONBA_PTR_GET(reviewRightRule_, vector<ReviewRightRule::ReviewRightRuleItem>) };
            inline ReviewRightRule& setReviewRightRule(const vector<ReviewRightRule::ReviewRightRuleItem> & reviewRightRule) { DARABONBA_PTR_SET_VALUE(reviewRightRule_, reviewRightRule) };
            inline ReviewRightRule& setReviewRightRule(vector<ReviewRightRule::ReviewRightRuleItem> && reviewRightRule) { DARABONBA_PTR_SET_RVALUE(reviewRightRule_, reviewRightRule) };


          protected:
            shared_ptr<vector<ReviewRightRule::ReviewRightRuleItem>> reviewRightRule_ {};
          };

          virtual bool empty() const override { return this->comments_ == nullptr
        && this->complainResult_ == nullptr && this->oldScore_ == nullptr && this->operator_ == nullptr && this->operatorName_ == nullptr && this->reviewManagerType_ == nullptr
        && this->reviewResult_ == nullptr && this->reviewRightRule_ == nullptr && this->score_ == nullptr && this->time_ == nullptr && this->timeStr_ == nullptr
        && this->type_ == nullptr; };
          // comments Field Functions 
          bool hasComments() const { return this->comments_ != nullptr;};
          void deleteComments() { this->comments_ = nullptr;};
          inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
          inline ReviewHistory& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


          // complainResult Field Functions 
          bool hasComplainResult() const { return this->complainResult_ != nullptr;};
          void deleteComplainResult() { this->complainResult_ = nullptr;};
          inline int32_t getComplainResult() const { DARABONBA_PTR_GET_DEFAULT(complainResult_, 0) };
          inline ReviewHistory& setComplainResult(int32_t complainResult) { DARABONBA_PTR_SET_VALUE(complainResult_, complainResult) };


          // oldScore Field Functions 
          bool hasOldScore() const { return this->oldScore_ != nullptr;};
          void deleteOldScore() { this->oldScore_ = nullptr;};
          inline int32_t getOldScore() const { DARABONBA_PTR_GET_DEFAULT(oldScore_, 0) };
          inline ReviewHistory& setOldScore(int32_t oldScore) { DARABONBA_PTR_SET_VALUE(oldScore_, oldScore) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline int64_t getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
          inline ReviewHistory& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // operatorName Field Functions 
          bool hasOperatorName() const { return this->operatorName_ != nullptr;};
          void deleteOperatorName() { this->operatorName_ = nullptr;};
          inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
          inline ReviewHistory& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


          // reviewManagerType Field Functions 
          bool hasReviewManagerType() const { return this->reviewManagerType_ != nullptr;};
          void deleteReviewManagerType() { this->reviewManagerType_ = nullptr;};
          inline string getReviewManagerType() const { DARABONBA_PTR_GET_DEFAULT(reviewManagerType_, "") };
          inline ReviewHistory& setReviewManagerType(string reviewManagerType) { DARABONBA_PTR_SET_VALUE(reviewManagerType_, reviewManagerType) };


          // reviewResult Field Functions 
          bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
          void deleteReviewResult() { this->reviewResult_ = nullptr;};
          inline int32_t getReviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
          inline ReviewHistory& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


          // reviewRightRule Field Functions 
          bool hasReviewRightRule() const { return this->reviewRightRule_ != nullptr;};
          void deleteReviewRightRule() { this->reviewRightRule_ = nullptr;};
          inline const ReviewHistory::ReviewRightRule & getReviewRightRule() const { DARABONBA_PTR_GET_CONST(reviewRightRule_, ReviewHistory::ReviewRightRule) };
          inline ReviewHistory::ReviewRightRule getReviewRightRule() { DARABONBA_PTR_GET(reviewRightRule_, ReviewHistory::ReviewRightRule) };
          inline ReviewHistory& setReviewRightRule(const ReviewHistory::ReviewRightRule & reviewRightRule) { DARABONBA_PTR_SET_VALUE(reviewRightRule_, reviewRightRule) };
          inline ReviewHistory& setReviewRightRule(ReviewHistory::ReviewRightRule && reviewRightRule) { DARABONBA_PTR_SET_RVALUE(reviewRightRule_, reviewRightRule) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
          inline ReviewHistory& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // time Field Functions 
          bool hasTime() const { return this->time_ != nullptr;};
          void deleteTime() { this->time_ = nullptr;};
          inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
          inline ReviewHistory& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


          // timeStr Field Functions 
          bool hasTimeStr() const { return this->timeStr_ != nullptr;};
          void deleteTimeStr() { this->timeStr_ = nullptr;};
          inline string getTimeStr() const { DARABONBA_PTR_GET_DEFAULT(timeStr_, "") };
          inline ReviewHistory& setTimeStr(string timeStr) { DARABONBA_PTR_SET_VALUE(timeStr_, timeStr) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline ReviewHistory& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> comments_ {};
          shared_ptr<int32_t> complainResult_ {};
          shared_ptr<int32_t> oldScore_ {};
          shared_ptr<int64_t> operator_ {};
          shared_ptr<string> operatorName_ {};
          shared_ptr<string> reviewManagerType_ {};
          shared_ptr<int32_t> reviewResult_ {};
          shared_ptr<ReviewHistory::ReviewRightRule> reviewRightRule_ {};
          shared_ptr<int32_t> score_ {};
          shared_ptr<int64_t> time_ {};
          shared_ptr<string> timeStr_ {};
          shared_ptr<int32_t> type_ {};
        };

        virtual bool empty() const override { return this->reviewHistory_ == nullptr; };
        // reviewHistory Field Functions 
        bool hasReviewHistory() const { return this->reviewHistory_ != nullptr;};
        void deleteReviewHistory() { this->reviewHistory_ = nullptr;};
        inline const vector<ReviewHistoryList::ReviewHistory> & getReviewHistory() const { DARABONBA_PTR_GET_CONST(reviewHistory_, vector<ReviewHistoryList::ReviewHistory>) };
        inline vector<ReviewHistoryList::ReviewHistory> getReviewHistory() { DARABONBA_PTR_GET(reviewHistory_, vector<ReviewHistoryList::ReviewHistory>) };
        inline ReviewHistoryList& setReviewHistory(const vector<ReviewHistoryList::ReviewHistory> & reviewHistory) { DARABONBA_PTR_SET_VALUE(reviewHistory_, reviewHistory) };
        inline ReviewHistoryList& setReviewHistory(vector<ReviewHistoryList::ReviewHistory> && reviewHistory) { DARABONBA_PTR_SET_RVALUE(reviewHistory_, reviewHistory) };


      protected:
        shared_ptr<vector<ReviewHistoryList::ReviewHistory>> reviewHistory_ {};
      };

      class ManualScoreInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManualScoreInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(ManualScoreInfo, manualScoreInfo_);
        };
        friend void from_json(const Darabonba::Json& j, ManualScoreInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(ManualScoreInfo, manualScoreInfo_);
        };
        ManualScoreInfoList() = default ;
        ManualScoreInfoList(const ManualScoreInfoList &) = default ;
        ManualScoreInfoList(ManualScoreInfoList &&) = default ;
        ManualScoreInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManualScoreInfoList() = default ;
        ManualScoreInfoList& operator=(const ManualScoreInfoList &) = default ;
        ManualScoreInfoList& operator=(ManualScoreInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ManualScoreInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ManualScoreInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ComplainHistories, complainHistories_);
            DARABONBA_PTR_TO_JSON(Complainable, complainable_);
            DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
            DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
            DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
            DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
          };
          friend void from_json(const Darabonba::Json& j, ManualScoreInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ComplainHistories, complainHistories_);
            DARABONBA_PTR_FROM_JSON(Complainable, complainable_);
            DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
            DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
            DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
            DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
          };
          ManualScoreInfo() = default ;
          ManualScoreInfo(const ManualScoreInfo &) = default ;
          ManualScoreInfo(ManualScoreInfo &&) = default ;
          ManualScoreInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ManualScoreInfo() = default ;
          ManualScoreInfo& operator=(const ManualScoreInfo &) = default ;
          ManualScoreInfo& operator=(ManualScoreInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ComplainHistories : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ComplainHistories& obj) { 
              DARABONBA_PTR_TO_JSON(ComplainHistories, complainHistories_);
            };
            friend void from_json(const Darabonba::Json& j, ComplainHistories& obj) { 
              DARABONBA_PTR_FROM_JSON(ComplainHistories, complainHistories_);
            };
            ComplainHistories() = default ;
            ComplainHistories(const ComplainHistories &) = default ;
            ComplainHistories(ComplainHistories &&) = default ;
            ComplainHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ComplainHistories() = default ;
            ComplainHistories& operator=(const ComplainHistories &) = default ;
            ComplainHistories& operator=(ComplainHistories &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ComplainHistoriesItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ComplainHistoriesItem& obj) { 
                DARABONBA_PTR_TO_JSON(Comments, comments_);
                DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
                DARABONBA_PTR_TO_JSON(OperationType, operationType_);
                DARABONBA_PTR_TO_JSON(Operator, operator_);
                DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
              };
              friend void from_json(const Darabonba::Json& j, ComplainHistoriesItem& obj) { 
                DARABONBA_PTR_FROM_JSON(Comments, comments_);
                DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
                DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
                DARABONBA_PTR_FROM_JSON(Operator, operator_);
                DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
              };
              ComplainHistoriesItem() = default ;
              ComplainHistoriesItem(const ComplainHistoriesItem &) = default ;
              ComplainHistoriesItem(ComplainHistoriesItem &&) = default ;
              ComplainHistoriesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ComplainHistoriesItem() = default ;
              ComplainHistoriesItem& operator=(const ComplainHistoriesItem &) = default ;
              ComplainHistoriesItem& operator=(ComplainHistoriesItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->comments_ == nullptr
        && this->operationTime_ == nullptr && this->operationType_ == nullptr && this->operator_ == nullptr && this->operatorName_ == nullptr; };
              // comments Field Functions 
              bool hasComments() const { return this->comments_ != nullptr;};
              void deleteComments() { this->comments_ = nullptr;};
              inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
              inline ComplainHistoriesItem& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


              // operationTime Field Functions 
              bool hasOperationTime() const { return this->operationTime_ != nullptr;};
              void deleteOperationTime() { this->operationTime_ = nullptr;};
              inline string getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
              inline ComplainHistoriesItem& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


              // operationType Field Functions 
              bool hasOperationType() const { return this->operationType_ != nullptr;};
              void deleteOperationType() { this->operationType_ = nullptr;};
              inline int32_t getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, 0) };
              inline ComplainHistoriesItem& setOperationType(int32_t operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


              // operator Field Functions 
              bool hasOperator() const { return this->operator_ != nullptr;};
              void deleteOperator() { this->operator_ = nullptr;};
              inline int64_t getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
              inline ComplainHistoriesItem& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


              // operatorName Field Functions 
              bool hasOperatorName() const { return this->operatorName_ != nullptr;};
              void deleteOperatorName() { this->operatorName_ = nullptr;};
              inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
              inline ComplainHistoriesItem& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


            protected:
              shared_ptr<string> comments_ {};
              shared_ptr<string> operationTime_ {};
              shared_ptr<int32_t> operationType_ {};
              shared_ptr<int64_t> operator_ {};
              shared_ptr<string> operatorName_ {};
            };

            virtual bool empty() const override { return this->complainHistories_ == nullptr; };
            // complainHistories Field Functions 
            bool hasComplainHistories() const { return this->complainHistories_ != nullptr;};
            void deleteComplainHistories() { this->complainHistories_ = nullptr;};
            inline const vector<ComplainHistories::ComplainHistoriesItem> & getComplainHistories() const { DARABONBA_PTR_GET_CONST(complainHistories_, vector<ComplainHistories::ComplainHistoriesItem>) };
            inline vector<ComplainHistories::ComplainHistoriesItem> getComplainHistories() { DARABONBA_PTR_GET(complainHistories_, vector<ComplainHistories::ComplainHistoriesItem>) };
            inline ComplainHistories& setComplainHistories(const vector<ComplainHistories::ComplainHistoriesItem> & complainHistories) { DARABONBA_PTR_SET_VALUE(complainHistories_, complainHistories) };
            inline ComplainHistories& setComplainHistories(vector<ComplainHistories::ComplainHistoriesItem> && complainHistories) { DARABONBA_PTR_SET_RVALUE(complainHistories_, complainHistories) };


          protected:
            shared_ptr<vector<ComplainHistories::ComplainHistoriesItem>> complainHistories_ {};
          };

          virtual bool empty() const override { return this->complainHistories_ == nullptr
        && this->complainable_ == nullptr && this->scoreId_ == nullptr && this->scoreNum_ == nullptr && this->scoreSubId_ == nullptr && this->scoreSubName_ == nullptr; };
          // complainHistories Field Functions 
          bool hasComplainHistories() const { return this->complainHistories_ != nullptr;};
          void deleteComplainHistories() { this->complainHistories_ = nullptr;};
          inline const ManualScoreInfo::ComplainHistories & getComplainHistories() const { DARABONBA_PTR_GET_CONST(complainHistories_, ManualScoreInfo::ComplainHistories) };
          inline ManualScoreInfo::ComplainHistories getComplainHistories() { DARABONBA_PTR_GET(complainHistories_, ManualScoreInfo::ComplainHistories) };
          inline ManualScoreInfo& setComplainHistories(const ManualScoreInfo::ComplainHistories & complainHistories) { DARABONBA_PTR_SET_VALUE(complainHistories_, complainHistories) };
          inline ManualScoreInfo& setComplainHistories(ManualScoreInfo::ComplainHistories && complainHistories) { DARABONBA_PTR_SET_RVALUE(complainHistories_, complainHistories) };


          // complainable Field Functions 
          bool hasComplainable() const { return this->complainable_ != nullptr;};
          void deleteComplainable() { this->complainable_ = nullptr;};
          inline bool getComplainable() const { DARABONBA_PTR_GET_DEFAULT(complainable_, false) };
          inline ManualScoreInfo& setComplainable(bool complainable) { DARABONBA_PTR_SET_VALUE(complainable_, complainable) };


          // scoreId Field Functions 
          bool hasScoreId() const { return this->scoreId_ != nullptr;};
          void deleteScoreId() { this->scoreId_ = nullptr;};
          inline int64_t getScoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0L) };
          inline ManualScoreInfo& setScoreId(int64_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


          // scoreNum Field Functions 
          bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
          void deleteScoreNum() { this->scoreNum_ = nullptr;};
          inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
          inline ManualScoreInfo& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


          // scoreSubId Field Functions 
          bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
          void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
          inline int64_t getScoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0L) };
          inline ManualScoreInfo& setScoreSubId(int64_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


          // scoreSubName Field Functions 
          bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
          void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
          inline string getScoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
          inline ManualScoreInfo& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


        protected:
          shared_ptr<ManualScoreInfo::ComplainHistories> complainHistories_ {};
          shared_ptr<bool> complainable_ {};
          shared_ptr<int64_t> scoreId_ {};
          shared_ptr<int32_t> scoreNum_ {};
          shared_ptr<int64_t> scoreSubId_ {};
          shared_ptr<string> scoreSubName_ {};
        };

        virtual bool empty() const override { return this->manualScoreInfo_ == nullptr; };
        // manualScoreInfo Field Functions 
        bool hasManualScoreInfo() const { return this->manualScoreInfo_ != nullptr;};
        void deleteManualScoreInfo() { this->manualScoreInfo_ = nullptr;};
        inline const vector<ManualScoreInfoList::ManualScoreInfo> & getManualScoreInfo() const { DARABONBA_PTR_GET_CONST(manualScoreInfo_, vector<ManualScoreInfoList::ManualScoreInfo>) };
        inline vector<ManualScoreInfoList::ManualScoreInfo> getManualScoreInfo() { DARABONBA_PTR_GET(manualScoreInfo_, vector<ManualScoreInfoList::ManualScoreInfo>) };
        inline ManualScoreInfoList& setManualScoreInfo(const vector<ManualScoreInfoList::ManualScoreInfo> & manualScoreInfo) { DARABONBA_PTR_SET_VALUE(manualScoreInfo_, manualScoreInfo) };
        inline ManualScoreInfoList& setManualScoreInfo(vector<ManualScoreInfoList::ManualScoreInfo> && manualScoreInfo) { DARABONBA_PTR_SET_RVALUE(manualScoreInfo_, manualScoreInfo) };


      protected:
        shared_ptr<vector<ManualScoreInfoList::ManualScoreInfo>> manualScoreInfo_ {};
      };

      class HitRuleReviewInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HitRuleReviewInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(HitRuleReviewInfo, hitRuleReviewInfo_);
        };
        friend void from_json(const Darabonba::Json& j, HitRuleReviewInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(HitRuleReviewInfo, hitRuleReviewInfo_);
        };
        HitRuleReviewInfoList() = default ;
        HitRuleReviewInfoList(const HitRuleReviewInfoList &) = default ;
        HitRuleReviewInfoList(HitRuleReviewInfoList &&) = default ;
        HitRuleReviewInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HitRuleReviewInfoList() = default ;
        HitRuleReviewInfoList& operator=(const HitRuleReviewInfoList &) = default ;
        HitRuleReviewInfoList& operator=(HitRuleReviewInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HitRuleReviewInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HitRuleReviewInfo& obj) { 
            DARABONBA_PTR_TO_JSON(AutoReview, autoReview_);
            DARABONBA_PTR_TO_JSON(ComplainHistories, complainHistories_);
            DARABONBA_PTR_TO_JSON(Complainable, complainable_);
            DARABONBA_PTR_TO_JSON(ConditionHitInfoList, conditionHitInfoList_);
            DARABONBA_PTR_TO_JSON(MachineHitResult, machineHitResult_);
            DARABONBA_PTR_TO_JSON(ReviewHitResult, reviewHitResult_);
            DARABONBA_PTR_TO_JSON(ReviewInfo, reviewInfo_);
            DARABONBA_PTR_TO_JSON(Rid, rid_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
            DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
            DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
            DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
          };
          friend void from_json(const Darabonba::Json& j, HitRuleReviewInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoReview, autoReview_);
            DARABONBA_PTR_FROM_JSON(ComplainHistories, complainHistories_);
            DARABONBA_PTR_FROM_JSON(Complainable, complainable_);
            DARABONBA_PTR_FROM_JSON(ConditionHitInfoList, conditionHitInfoList_);
            DARABONBA_PTR_FROM_JSON(MachineHitResult, machineHitResult_);
            DARABONBA_PTR_FROM_JSON(ReviewHitResult, reviewHitResult_);
            DARABONBA_PTR_FROM_JSON(ReviewInfo, reviewInfo_);
            DARABONBA_PTR_FROM_JSON(Rid, rid_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
            DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
            DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
            DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
          };
          HitRuleReviewInfo() = default ;
          HitRuleReviewInfo(const HitRuleReviewInfo &) = default ;
          HitRuleReviewInfo(HitRuleReviewInfo &&) = default ;
          HitRuleReviewInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HitRuleReviewInfo() = default ;
          HitRuleReviewInfo& operator=(const HitRuleReviewInfo &) = default ;
          HitRuleReviewInfo& operator=(HitRuleReviewInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReviewInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReviewInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Comment, comment_);
              DARABONBA_PTR_TO_JSON(HitId, hitId_);
              DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
              DARABONBA_PTR_TO_JSON(ReviewTime, reviewTime_);
              DARABONBA_PTR_TO_JSON(Reviewer, reviewer_);
              DARABONBA_PTR_TO_JSON(Rid, rid_);
              DARABONBA_PTR_TO_JSON(SentenceReviewResults, sentenceReviewResults_);
            };
            friend void from_json(const Darabonba::Json& j, ReviewInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Comment, comment_);
              DARABONBA_PTR_FROM_JSON(HitId, hitId_);
              DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
              DARABONBA_PTR_FROM_JSON(ReviewTime, reviewTime_);
              DARABONBA_PTR_FROM_JSON(Reviewer, reviewer_);
              DARABONBA_PTR_FROM_JSON(Rid, rid_);
              DARABONBA_PTR_FROM_JSON(SentenceReviewResults, sentenceReviewResults_);
            };
            ReviewInfo() = default ;
            ReviewInfo(const ReviewInfo &) = default ;
            ReviewInfo(ReviewInfo &&) = default ;
            ReviewInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReviewInfo() = default ;
            ReviewInfo& operator=(const ReviewInfo &) = default ;
            ReviewInfo& operator=(ReviewInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SentenceReviewResults : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SentenceReviewResults& obj) { 
                DARABONBA_PTR_TO_JSON(SentenceReviewResults, sentenceReviewResults_);
              };
              friend void from_json(const Darabonba::Json& j, SentenceReviewResults& obj) { 
                DARABONBA_PTR_FROM_JSON(SentenceReviewResults, sentenceReviewResults_);
              };
              SentenceReviewResults() = default ;
              SentenceReviewResults(const SentenceReviewResults &) = default ;
              SentenceReviewResults(SentenceReviewResults &&) = default ;
              SentenceReviewResults(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SentenceReviewResults() = default ;
              SentenceReviewResults& operator=(const SentenceReviewResults &) = default ;
              SentenceReviewResults& operator=(SentenceReviewResults &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class SentenceReviewResultsItem : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const SentenceReviewResultsItem& obj) { 
                  DARABONBA_PTR_TO_JSON(Changed, changed_);
                  DARABONBA_PTR_TO_JSON(Cid, cid_);
                  DARABONBA_PTR_TO_JSON(Comment, comment_);
                  DARABONBA_PTR_TO_JSON(HitStatus, hitStatus_);
                  DARABONBA_PTR_TO_JSON(OriginTaskId, originTaskId_);
                  DARABONBA_PTR_TO_JSON(OriginVid, originVid_);
                  DARABONBA_PTR_TO_JSON(Pid, pid_);
                  DARABONBA_PTR_TO_JSON(ReviewDimensionType, reviewDimensionType_);
                  DARABONBA_PTR_TO_JSON(Rid, rid_);
                  DARABONBA_PTR_TO_JSON(Sid, sid_);
                };
                friend void from_json(const Darabonba::Json& j, SentenceReviewResultsItem& obj) { 
                  DARABONBA_PTR_FROM_JSON(Changed, changed_);
                  DARABONBA_PTR_FROM_JSON(Cid, cid_);
                  DARABONBA_PTR_FROM_JSON(Comment, comment_);
                  DARABONBA_PTR_FROM_JSON(HitStatus, hitStatus_);
                  DARABONBA_PTR_FROM_JSON(OriginTaskId, originTaskId_);
                  DARABONBA_PTR_FROM_JSON(OriginVid, originVid_);
                  DARABONBA_PTR_FROM_JSON(Pid, pid_);
                  DARABONBA_PTR_FROM_JSON(ReviewDimensionType, reviewDimensionType_);
                  DARABONBA_PTR_FROM_JSON(Rid, rid_);
                  DARABONBA_PTR_FROM_JSON(Sid, sid_);
                };
                SentenceReviewResultsItem() = default ;
                SentenceReviewResultsItem(const SentenceReviewResultsItem &) = default ;
                SentenceReviewResultsItem(SentenceReviewResultsItem &&) = default ;
                SentenceReviewResultsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~SentenceReviewResultsItem() = default ;
                SentenceReviewResultsItem& operator=(const SentenceReviewResultsItem &) = default ;
                SentenceReviewResultsItem& operator=(SentenceReviewResultsItem &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->changed_ == nullptr
        && this->cid_ == nullptr && this->comment_ == nullptr && this->hitStatus_ == nullptr && this->originTaskId_ == nullptr && this->originVid_ == nullptr
        && this->pid_ == nullptr && this->reviewDimensionType_ == nullptr && this->rid_ == nullptr && this->sid_ == nullptr; };
                // changed Field Functions 
                bool hasChanged() const { return this->changed_ != nullptr;};
                void deleteChanged() { this->changed_ = nullptr;};
                inline bool getChanged() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
                inline SentenceReviewResultsItem& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


                // cid Field Functions 
                bool hasCid() const { return this->cid_ != nullptr;};
                void deleteCid() { this->cid_ = nullptr;};
                inline int64_t getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, 0L) };
                inline SentenceReviewResultsItem& setCid(int64_t cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


                // comment Field Functions 
                bool hasComment() const { return this->comment_ != nullptr;};
                void deleteComment() { this->comment_ = nullptr;};
                inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
                inline SentenceReviewResultsItem& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


                // hitStatus Field Functions 
                bool hasHitStatus() const { return this->hitStatus_ != nullptr;};
                void deleteHitStatus() { this->hitStatus_ = nullptr;};
                inline int32_t getHitStatus() const { DARABONBA_PTR_GET_DEFAULT(hitStatus_, 0) };
                inline SentenceReviewResultsItem& setHitStatus(int32_t hitStatus) { DARABONBA_PTR_SET_VALUE(hitStatus_, hitStatus) };


                // originTaskId Field Functions 
                bool hasOriginTaskId() const { return this->originTaskId_ != nullptr;};
                void deleteOriginTaskId() { this->originTaskId_ = nullptr;};
                inline string getOriginTaskId() const { DARABONBA_PTR_GET_DEFAULT(originTaskId_, "") };
                inline SentenceReviewResultsItem& setOriginTaskId(string originTaskId) { DARABONBA_PTR_SET_VALUE(originTaskId_, originTaskId) };


                // originVid Field Functions 
                bool hasOriginVid() const { return this->originVid_ != nullptr;};
                void deleteOriginVid() { this->originVid_ = nullptr;};
                inline string getOriginVid() const { DARABONBA_PTR_GET_DEFAULT(originVid_, "") };
                inline SentenceReviewResultsItem& setOriginVid(string originVid) { DARABONBA_PTR_SET_VALUE(originVid_, originVid) };


                // pid Field Functions 
                bool hasPid() const { return this->pid_ != nullptr;};
                void deletePid() { this->pid_ = nullptr;};
                inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
                inline SentenceReviewResultsItem& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


                // reviewDimensionType Field Functions 
                bool hasReviewDimensionType() const { return this->reviewDimensionType_ != nullptr;};
                void deleteReviewDimensionType() { this->reviewDimensionType_ = nullptr;};
                inline string getReviewDimensionType() const { DARABONBA_PTR_GET_DEFAULT(reviewDimensionType_, "") };
                inline SentenceReviewResultsItem& setReviewDimensionType(string reviewDimensionType) { DARABONBA_PTR_SET_VALUE(reviewDimensionType_, reviewDimensionType) };


                // rid Field Functions 
                bool hasRid() const { return this->rid_ != nullptr;};
                void deleteRid() { this->rid_ = nullptr;};
                inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
                inline SentenceReviewResultsItem& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


                // sid Field Functions 
                bool hasSid() const { return this->sid_ != nullptr;};
                void deleteSid() { this->sid_ = nullptr;};
                inline int64_t getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, 0L) };
                inline SentenceReviewResultsItem& setSid(int64_t sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


              protected:
                shared_ptr<bool> changed_ {};
                shared_ptr<int64_t> cid_ {};
                shared_ptr<string> comment_ {};
                shared_ptr<int32_t> hitStatus_ {};
                shared_ptr<string> originTaskId_ {};
                shared_ptr<string> originVid_ {};
                shared_ptr<string> pid_ {};
                shared_ptr<string> reviewDimensionType_ {};
                shared_ptr<int64_t> rid_ {};
                shared_ptr<int64_t> sid_ {};
              };

              virtual bool empty() const override { return this->sentenceReviewResults_ == nullptr; };
              // sentenceReviewResults Field Functions 
              bool hasSentenceReviewResults() const { return this->sentenceReviewResults_ != nullptr;};
              void deleteSentenceReviewResults() { this->sentenceReviewResults_ = nullptr;};
              inline const vector<SentenceReviewResults::SentenceReviewResultsItem> & getSentenceReviewResults() const { DARABONBA_PTR_GET_CONST(sentenceReviewResults_, vector<SentenceReviewResults::SentenceReviewResultsItem>) };
              inline vector<SentenceReviewResults::SentenceReviewResultsItem> getSentenceReviewResults() { DARABONBA_PTR_GET(sentenceReviewResults_, vector<SentenceReviewResults::SentenceReviewResultsItem>) };
              inline SentenceReviewResults& setSentenceReviewResults(const vector<SentenceReviewResults::SentenceReviewResultsItem> & sentenceReviewResults) { DARABONBA_PTR_SET_VALUE(sentenceReviewResults_, sentenceReviewResults) };
              inline SentenceReviewResults& setSentenceReviewResults(vector<SentenceReviewResults::SentenceReviewResultsItem> && sentenceReviewResults) { DARABONBA_PTR_SET_RVALUE(sentenceReviewResults_, sentenceReviewResults) };


            protected:
              shared_ptr<vector<SentenceReviewResults::SentenceReviewResultsItem>> sentenceReviewResults_ {};
            };

            virtual bool empty() const override { return this->comment_ == nullptr
        && this->hitId_ == nullptr && this->reviewResult_ == nullptr && this->reviewTime_ == nullptr && this->reviewer_ == nullptr && this->rid_ == nullptr
        && this->sentenceReviewResults_ == nullptr; };
            // comment Field Functions 
            bool hasComment() const { return this->comment_ != nullptr;};
            void deleteComment() { this->comment_ = nullptr;};
            inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
            inline ReviewInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


            // hitId Field Functions 
            bool hasHitId() const { return this->hitId_ != nullptr;};
            void deleteHitId() { this->hitId_ = nullptr;};
            inline string getHitId() const { DARABONBA_PTR_GET_DEFAULT(hitId_, "") };
            inline ReviewInfo& setHitId(string hitId) { DARABONBA_PTR_SET_VALUE(hitId_, hitId) };


            // reviewResult Field Functions 
            bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
            void deleteReviewResult() { this->reviewResult_ = nullptr;};
            inline int32_t getReviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
            inline ReviewInfo& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


            // reviewTime Field Functions 
            bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
            void deleteReviewTime() { this->reviewTime_ = nullptr;};
            inline string getReviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, "") };
            inline ReviewInfo& setReviewTime(string reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


            // reviewer Field Functions 
            bool hasReviewer() const { return this->reviewer_ != nullptr;};
            void deleteReviewer() { this->reviewer_ = nullptr;};
            inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
            inline ReviewInfo& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


            // rid Field Functions 
            bool hasRid() const { return this->rid_ != nullptr;};
            void deleteRid() { this->rid_ = nullptr;};
            inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
            inline ReviewInfo& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


            // sentenceReviewResults Field Functions 
            bool hasSentenceReviewResults() const { return this->sentenceReviewResults_ != nullptr;};
            void deleteSentenceReviewResults() { this->sentenceReviewResults_ = nullptr;};
            inline const ReviewInfo::SentenceReviewResults & getSentenceReviewResults() const { DARABONBA_PTR_GET_CONST(sentenceReviewResults_, ReviewInfo::SentenceReviewResults) };
            inline ReviewInfo::SentenceReviewResults getSentenceReviewResults() { DARABONBA_PTR_GET(sentenceReviewResults_, ReviewInfo::SentenceReviewResults) };
            inline ReviewInfo& setSentenceReviewResults(const ReviewInfo::SentenceReviewResults & sentenceReviewResults) { DARABONBA_PTR_SET_VALUE(sentenceReviewResults_, sentenceReviewResults) };
            inline ReviewInfo& setSentenceReviewResults(ReviewInfo::SentenceReviewResults && sentenceReviewResults) { DARABONBA_PTR_SET_RVALUE(sentenceReviewResults_, sentenceReviewResults) };


          protected:
            shared_ptr<string> comment_ {};
            shared_ptr<string> hitId_ {};
            shared_ptr<int32_t> reviewResult_ {};
            shared_ptr<string> reviewTime_ {};
            shared_ptr<string> reviewer_ {};
            shared_ptr<int64_t> rid_ {};
            shared_ptr<ReviewInfo::SentenceReviewResults> sentenceReviewResults_ {};
          };

          class ConditionHitInfoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConditionHitInfoList& obj) { 
              DARABONBA_PTR_TO_JSON(ConditionHitInfo, conditionHitInfo_);
            };
            friend void from_json(const Darabonba::Json& j, ConditionHitInfoList& obj) { 
              DARABONBA_PTR_FROM_JSON(ConditionHitInfo, conditionHitInfo_);
            };
            ConditionHitInfoList() = default ;
            ConditionHitInfoList(const ConditionHitInfoList &) = default ;
            ConditionHitInfoList(ConditionHitInfoList &&) = default ;
            ConditionHitInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConditionHitInfoList() = default ;
            ConditionHitInfoList& operator=(const ConditionHitInfoList &) = default ;
            ConditionHitInfoList& operator=(ConditionHitInfoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ConditionHitInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ConditionHitInfo& obj) { 
                DARABONBA_PTR_TO_JSON(Cid, cid_);
                DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
                DARABONBA_PTR_TO_JSON(Phrase, phrase_);
              };
              friend void from_json(const Darabonba::Json& j, ConditionHitInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(Cid, cid_);
                DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
                DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
              };
              ConditionHitInfo() = default ;
              ConditionHitInfo(const ConditionHitInfo &) = default ;
              ConditionHitInfo(ConditionHitInfo &&) = default ;
              ConditionHitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ConditionHitInfo() = default ;
              ConditionHitInfo& operator=(const ConditionHitInfo &) = default ;
              ConditionHitInfo& operator=(ConditionHitInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Phrase : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Phrase& obj) { 
                  DARABONBA_PTR_TO_JSON(Begin, begin_);
                  DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
                  DARABONBA_PTR_TO_JSON(End, end_);
                  DARABONBA_PTR_TO_JSON(Identity, identity_);
                  DARABONBA_PTR_TO_JSON(Pid, pid_);
                  DARABONBA_PTR_TO_JSON(Role, role_);
                  DARABONBA_PTR_TO_JSON(Words, words_);
                };
                friend void from_json(const Darabonba::Json& j, Phrase& obj) { 
                  DARABONBA_PTR_FROM_JSON(Begin, begin_);
                  DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
                  DARABONBA_PTR_FROM_JSON(End, end_);
                  DARABONBA_PTR_FROM_JSON(Identity, identity_);
                  DARABONBA_PTR_FROM_JSON(Pid, pid_);
                  DARABONBA_PTR_FROM_JSON(Role, role_);
                  DARABONBA_PTR_FROM_JSON(Words, words_);
                };
                Phrase() = default ;
                Phrase(const Phrase &) = default ;
                Phrase(Phrase &&) = default ;
                Phrase(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Phrase() = default ;
                Phrase& operator=(const Phrase &) = default ;
                Phrase& operator=(Phrase &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->begin_ == nullptr
        && this->emotionValue_ == nullptr && this->end_ == nullptr && this->identity_ == nullptr && this->pid_ == nullptr && this->role_ == nullptr
        && this->words_ == nullptr; };
                // begin Field Functions 
                bool hasBegin() const { return this->begin_ != nullptr;};
                void deleteBegin() { this->begin_ = nullptr;};
                inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
                inline Phrase& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


                // emotionValue Field Functions 
                bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
                void deleteEmotionValue() { this->emotionValue_ = nullptr;};
                inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
                inline Phrase& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


                // end Field Functions 
                bool hasEnd() const { return this->end_ != nullptr;};
                void deleteEnd() { this->end_ = nullptr;};
                inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
                inline Phrase& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


                // identity Field Functions 
                bool hasIdentity() const { return this->identity_ != nullptr;};
                void deleteIdentity() { this->identity_ = nullptr;};
                inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
                inline Phrase& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


                // pid Field Functions 
                bool hasPid() const { return this->pid_ != nullptr;};
                void deletePid() { this->pid_ = nullptr;};
                inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
                inline Phrase& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


                // role Field Functions 
                bool hasRole() const { return this->role_ != nullptr;};
                void deleteRole() { this->role_ = nullptr;};
                inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
                inline Phrase& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


                // words Field Functions 
                bool hasWords() const { return this->words_ != nullptr;};
                void deleteWords() { this->words_ = nullptr;};
                inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
                inline Phrase& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


              protected:
                shared_ptr<int64_t> begin_ {};
                shared_ptr<int32_t> emotionValue_ {};
                shared_ptr<int64_t> end_ {};
                shared_ptr<string> identity_ {};
                shared_ptr<int32_t> pid_ {};
                shared_ptr<string> role_ {};
                shared_ptr<string> words_ {};
              };

              class KeyWords : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const KeyWords& obj) { 
                  DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
                };
                friend void from_json(const Darabonba::Json& j, KeyWords& obj) { 
                  DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
                };
                KeyWords() = default ;
                KeyWords(const KeyWords &) = default ;
                KeyWords(KeyWords &&) = default ;
                KeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~KeyWords() = default ;
                KeyWords& operator=(const KeyWords &) = default ;
                KeyWords& operator=(KeyWords &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class KeyWord : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const KeyWord& obj) { 
                    DARABONBA_PTR_TO_JSON(Cid, cid_);
                    DARABONBA_PTR_TO_JSON(CustomizeCode, customizeCode_);
                    DARABONBA_PTR_TO_JSON(From, from_);
                    DARABONBA_PTR_TO_JSON(IsMatch, isMatch_);
                    DARABONBA_PTR_TO_JSON(Pid, pid_);
                    DARABONBA_PTR_TO_JSON(Tid, tid_);
                    DARABONBA_PTR_TO_JSON(To, to_);
                    DARABONBA_PTR_TO_JSON(Val, val_);
                  };
                  friend void from_json(const Darabonba::Json& j, KeyWord& obj) { 
                    DARABONBA_PTR_FROM_JSON(Cid, cid_);
                    DARABONBA_PTR_FROM_JSON(CustomizeCode, customizeCode_);
                    DARABONBA_PTR_FROM_JSON(From, from_);
                    DARABONBA_PTR_FROM_JSON(IsMatch, isMatch_);
                    DARABONBA_PTR_FROM_JSON(Pid, pid_);
                    DARABONBA_PTR_FROM_JSON(Tid, tid_);
                    DARABONBA_PTR_FROM_JSON(To, to_);
                    DARABONBA_PTR_FROM_JSON(Val, val_);
                  };
                  KeyWord() = default ;
                  KeyWord(const KeyWord &) = default ;
                  KeyWord(KeyWord &&) = default ;
                  KeyWord(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~KeyWord() = default ;
                  KeyWord& operator=(const KeyWord &) = default ;
                  KeyWord& operator=(KeyWord &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->cid_ == nullptr
        && this->customizeCode_ == nullptr && this->from_ == nullptr && this->isMatch_ == nullptr && this->pid_ == nullptr && this->tid_ == nullptr
        && this->to_ == nullptr && this->val_ == nullptr; };
                  // cid Field Functions 
                  bool hasCid() const { return this->cid_ != nullptr;};
                  void deleteCid() { this->cid_ = nullptr;};
                  inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
                  inline KeyWord& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


                  // customizeCode Field Functions 
                  bool hasCustomizeCode() const { return this->customizeCode_ != nullptr;};
                  void deleteCustomizeCode() { this->customizeCode_ = nullptr;};
                  inline string getCustomizeCode() const { DARABONBA_PTR_GET_DEFAULT(customizeCode_, "") };
                  inline KeyWord& setCustomizeCode(string customizeCode) { DARABONBA_PTR_SET_VALUE(customizeCode_, customizeCode) };


                  // from Field Functions 
                  bool hasFrom() const { return this->from_ != nullptr;};
                  void deleteFrom() { this->from_ = nullptr;};
                  inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
                  inline KeyWord& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                  // isMatch Field Functions 
                  bool hasIsMatch() const { return this->isMatch_ != nullptr;};
                  void deleteIsMatch() { this->isMatch_ = nullptr;};
                  inline bool getIsMatch() const { DARABONBA_PTR_GET_DEFAULT(isMatch_, false) };
                  inline KeyWord& setIsMatch(bool isMatch) { DARABONBA_PTR_SET_VALUE(isMatch_, isMatch) };


                  // pid Field Functions 
                  bool hasPid() const { return this->pid_ != nullptr;};
                  void deletePid() { this->pid_ = nullptr;};
                  inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
                  inline KeyWord& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


                  // tid Field Functions 
                  bool hasTid() const { return this->tid_ != nullptr;};
                  void deleteTid() { this->tid_ = nullptr;};
                  inline string getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
                  inline KeyWord& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


                  // to Field Functions 
                  bool hasTo() const { return this->to_ != nullptr;};
                  void deleteTo() { this->to_ = nullptr;};
                  inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
                  inline KeyWord& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                  // val Field Functions 
                  bool hasVal() const { return this->val_ != nullptr;};
                  void deleteVal() { this->val_ = nullptr;};
                  inline string getVal() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
                  inline KeyWord& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


                protected:
                  shared_ptr<string> cid_ {};
                  shared_ptr<string> customizeCode_ {};
                  shared_ptr<int32_t> from_ {};
                  shared_ptr<bool> isMatch_ {};
                  shared_ptr<int32_t> pid_ {};
                  shared_ptr<string> tid_ {};
                  shared_ptr<int32_t> to_ {};
                  shared_ptr<string> val_ {};
                };

                virtual bool empty() const override { return this->keyWord_ == nullptr; };
                // keyWord Field Functions 
                bool hasKeyWord() const { return this->keyWord_ != nullptr;};
                void deleteKeyWord() { this->keyWord_ = nullptr;};
                inline const vector<KeyWords::KeyWord> & getKeyWord() const { DARABONBA_PTR_GET_CONST(keyWord_, vector<KeyWords::KeyWord>) };
                inline vector<KeyWords::KeyWord> getKeyWord() { DARABONBA_PTR_GET(keyWord_, vector<KeyWords::KeyWord>) };
                inline KeyWords& setKeyWord(const vector<KeyWords::KeyWord> & keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };
                inline KeyWords& setKeyWord(vector<KeyWords::KeyWord> && keyWord) { DARABONBA_PTR_SET_RVALUE(keyWord_, keyWord) };


              protected:
                shared_ptr<vector<KeyWords::KeyWord>> keyWord_ {};
              };

              class Cid : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Cid& obj) { 
                  DARABONBA_PTR_TO_JSON(Cid, cid_);
                };
                friend void from_json(const Darabonba::Json& j, Cid& obj) { 
                  DARABONBA_PTR_FROM_JSON(Cid, cid_);
                };
                Cid() = default ;
                Cid(const Cid &) = default ;
                Cid(Cid &&) = default ;
                Cid(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Cid() = default ;
                Cid& operator=(const Cid &) = default ;
                Cid& operator=(Cid &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->cid_ == nullptr; };
                // cid Field Functions 
                bool hasCid() const { return this->cid_ != nullptr;};
                void deleteCid() { this->cid_ = nullptr;};
                inline const vector<string> & getCid() const { DARABONBA_PTR_GET_CONST(cid_, vector<string>) };
                inline vector<string> getCid() { DARABONBA_PTR_GET(cid_, vector<string>) };
                inline Cid& setCid(const vector<string> & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
                inline Cid& setCid(vector<string> && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


              protected:
                shared_ptr<vector<string>> cid_ {};
              };

              virtual bool empty() const override { return this->cid_ == nullptr
        && this->keyWords_ == nullptr && this->phrase_ == nullptr; };
              // cid Field Functions 
              bool hasCid() const { return this->cid_ != nullptr;};
              void deleteCid() { this->cid_ = nullptr;};
              inline const ConditionHitInfo::Cid & getCid() const { DARABONBA_PTR_GET_CONST(cid_, ConditionHitInfo::Cid) };
              inline ConditionHitInfo::Cid getCid() { DARABONBA_PTR_GET(cid_, ConditionHitInfo::Cid) };
              inline ConditionHitInfo& setCid(const ConditionHitInfo::Cid & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
              inline ConditionHitInfo& setCid(ConditionHitInfo::Cid && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


              // keyWords Field Functions 
              bool hasKeyWords() const { return this->keyWords_ != nullptr;};
              void deleteKeyWords() { this->keyWords_ = nullptr;};
              inline const ConditionHitInfo::KeyWords & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, ConditionHitInfo::KeyWords) };
              inline ConditionHitInfo::KeyWords getKeyWords() { DARABONBA_PTR_GET(keyWords_, ConditionHitInfo::KeyWords) };
              inline ConditionHitInfo& setKeyWords(const ConditionHitInfo::KeyWords & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
              inline ConditionHitInfo& setKeyWords(ConditionHitInfo::KeyWords && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


              // phrase Field Functions 
              bool hasPhrase() const { return this->phrase_ != nullptr;};
              void deletePhrase() { this->phrase_ = nullptr;};
              inline const ConditionHitInfo::Phrase & getPhrase() const { DARABONBA_PTR_GET_CONST(phrase_, ConditionHitInfo::Phrase) };
              inline ConditionHitInfo::Phrase getPhrase() { DARABONBA_PTR_GET(phrase_, ConditionHitInfo::Phrase) };
              inline ConditionHitInfo& setPhrase(const ConditionHitInfo::Phrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
              inline ConditionHitInfo& setPhrase(ConditionHitInfo::Phrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


            protected:
              shared_ptr<ConditionHitInfo::Cid> cid_ {};
              shared_ptr<ConditionHitInfo::KeyWords> keyWords_ {};
              shared_ptr<ConditionHitInfo::Phrase> phrase_ {};
            };

            virtual bool empty() const override { return this->conditionHitInfo_ == nullptr; };
            // conditionHitInfo Field Functions 
            bool hasConditionHitInfo() const { return this->conditionHitInfo_ != nullptr;};
            void deleteConditionHitInfo() { this->conditionHitInfo_ = nullptr;};
            inline const vector<ConditionHitInfoList::ConditionHitInfo> & getConditionHitInfo() const { DARABONBA_PTR_GET_CONST(conditionHitInfo_, vector<ConditionHitInfoList::ConditionHitInfo>) };
            inline vector<ConditionHitInfoList::ConditionHitInfo> getConditionHitInfo() { DARABONBA_PTR_GET(conditionHitInfo_, vector<ConditionHitInfoList::ConditionHitInfo>) };
            inline ConditionHitInfoList& setConditionHitInfo(const vector<ConditionHitInfoList::ConditionHitInfo> & conditionHitInfo) { DARABONBA_PTR_SET_VALUE(conditionHitInfo_, conditionHitInfo) };
            inline ConditionHitInfoList& setConditionHitInfo(vector<ConditionHitInfoList::ConditionHitInfo> && conditionHitInfo) { DARABONBA_PTR_SET_RVALUE(conditionHitInfo_, conditionHitInfo) };


          protected:
            shared_ptr<vector<ConditionHitInfoList::ConditionHitInfo>> conditionHitInfo_ {};
          };

          class ComplainHistories : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ComplainHistories& obj) { 
              DARABONBA_PTR_TO_JSON(ComplainHistories, complainHistories_);
            };
            friend void from_json(const Darabonba::Json& j, ComplainHistories& obj) { 
              DARABONBA_PTR_FROM_JSON(ComplainHistories, complainHistories_);
            };
            ComplainHistories() = default ;
            ComplainHistories(const ComplainHistories &) = default ;
            ComplainHistories(ComplainHistories &&) = default ;
            ComplainHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ComplainHistories() = default ;
            ComplainHistories& operator=(const ComplainHistories &) = default ;
            ComplainHistories& operator=(ComplainHistories &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ComplainHistoriesItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ComplainHistoriesItem& obj) { 
                DARABONBA_PTR_TO_JSON(Comments, comments_);
                DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
                DARABONBA_PTR_TO_JSON(OperationType, operationType_);
                DARABONBA_PTR_TO_JSON(Operator, operator_);
                DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
              };
              friend void from_json(const Darabonba::Json& j, ComplainHistoriesItem& obj) { 
                DARABONBA_PTR_FROM_JSON(Comments, comments_);
                DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
                DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
                DARABONBA_PTR_FROM_JSON(Operator, operator_);
                DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
              };
              ComplainHistoriesItem() = default ;
              ComplainHistoriesItem(const ComplainHistoriesItem &) = default ;
              ComplainHistoriesItem(ComplainHistoriesItem &&) = default ;
              ComplainHistoriesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ComplainHistoriesItem() = default ;
              ComplainHistoriesItem& operator=(const ComplainHistoriesItem &) = default ;
              ComplainHistoriesItem& operator=(ComplainHistoriesItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->comments_ == nullptr
        && this->operationTime_ == nullptr && this->operationType_ == nullptr && this->operator_ == nullptr && this->operatorName_ == nullptr; };
              // comments Field Functions 
              bool hasComments() const { return this->comments_ != nullptr;};
              void deleteComments() { this->comments_ = nullptr;};
              inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
              inline ComplainHistoriesItem& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


              // operationTime Field Functions 
              bool hasOperationTime() const { return this->operationTime_ != nullptr;};
              void deleteOperationTime() { this->operationTime_ = nullptr;};
              inline string getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
              inline ComplainHistoriesItem& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


              // operationType Field Functions 
              bool hasOperationType() const { return this->operationType_ != nullptr;};
              void deleteOperationType() { this->operationType_ = nullptr;};
              inline int32_t getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, 0) };
              inline ComplainHistoriesItem& setOperationType(int32_t operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


              // operator Field Functions 
              bool hasOperator() const { return this->operator_ != nullptr;};
              void deleteOperator() { this->operator_ = nullptr;};
              inline int64_t getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
              inline ComplainHistoriesItem& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


              // operatorName Field Functions 
              bool hasOperatorName() const { return this->operatorName_ != nullptr;};
              void deleteOperatorName() { this->operatorName_ = nullptr;};
              inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
              inline ComplainHistoriesItem& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


            protected:
              shared_ptr<string> comments_ {};
              shared_ptr<string> operationTime_ {};
              shared_ptr<int32_t> operationType_ {};
              shared_ptr<int64_t> operator_ {};
              shared_ptr<string> operatorName_ {};
            };

            virtual bool empty() const override { return this->complainHistories_ == nullptr; };
            // complainHistories Field Functions 
            bool hasComplainHistories() const { return this->complainHistories_ != nullptr;};
            void deleteComplainHistories() { this->complainHistories_ = nullptr;};
            inline const vector<ComplainHistories::ComplainHistoriesItem> & getComplainHistories() const { DARABONBA_PTR_GET_CONST(complainHistories_, vector<ComplainHistories::ComplainHistoriesItem>) };
            inline vector<ComplainHistories::ComplainHistoriesItem> getComplainHistories() { DARABONBA_PTR_GET(complainHistories_, vector<ComplainHistories::ComplainHistoriesItem>) };
            inline ComplainHistories& setComplainHistories(const vector<ComplainHistories::ComplainHistoriesItem> & complainHistories) { DARABONBA_PTR_SET_VALUE(complainHistories_, complainHistories) };
            inline ComplainHistories& setComplainHistories(vector<ComplainHistories::ComplainHistoriesItem> && complainHistories) { DARABONBA_PTR_SET_RVALUE(complainHistories_, complainHistories) };


          protected:
            shared_ptr<vector<ComplainHistories::ComplainHistoriesItem>> complainHistories_ {};
          };

          virtual bool empty() const override { return this->autoReview_ == nullptr
        && this->complainHistories_ == nullptr && this->complainable_ == nullptr && this->conditionHitInfoList_ == nullptr && this->machineHitResult_ == nullptr && this->reviewHitResult_ == nullptr
        && this->reviewInfo_ == nullptr && this->rid_ == nullptr && this->ruleName_ == nullptr && this->scoreId_ == nullptr && this->scoreNum_ == nullptr
        && this->scoreSubId_ == nullptr && this->scoreSubName_ == nullptr; };
          // autoReview Field Functions 
          bool hasAutoReview() const { return this->autoReview_ != nullptr;};
          void deleteAutoReview() { this->autoReview_ = nullptr;};
          inline int32_t getAutoReview() const { DARABONBA_PTR_GET_DEFAULT(autoReview_, 0) };
          inline HitRuleReviewInfo& setAutoReview(int32_t autoReview) { DARABONBA_PTR_SET_VALUE(autoReview_, autoReview) };


          // complainHistories Field Functions 
          bool hasComplainHistories() const { return this->complainHistories_ != nullptr;};
          void deleteComplainHistories() { this->complainHistories_ = nullptr;};
          inline const HitRuleReviewInfo::ComplainHistories & getComplainHistories() const { DARABONBA_PTR_GET_CONST(complainHistories_, HitRuleReviewInfo::ComplainHistories) };
          inline HitRuleReviewInfo::ComplainHistories getComplainHistories() { DARABONBA_PTR_GET(complainHistories_, HitRuleReviewInfo::ComplainHistories) };
          inline HitRuleReviewInfo& setComplainHistories(const HitRuleReviewInfo::ComplainHistories & complainHistories) { DARABONBA_PTR_SET_VALUE(complainHistories_, complainHistories) };
          inline HitRuleReviewInfo& setComplainHistories(HitRuleReviewInfo::ComplainHistories && complainHistories) { DARABONBA_PTR_SET_RVALUE(complainHistories_, complainHistories) };


          // complainable Field Functions 
          bool hasComplainable() const { return this->complainable_ != nullptr;};
          void deleteComplainable() { this->complainable_ = nullptr;};
          inline bool getComplainable() const { DARABONBA_PTR_GET_DEFAULT(complainable_, false) };
          inline HitRuleReviewInfo& setComplainable(bool complainable) { DARABONBA_PTR_SET_VALUE(complainable_, complainable) };


          // conditionHitInfoList Field Functions 
          bool hasConditionHitInfoList() const { return this->conditionHitInfoList_ != nullptr;};
          void deleteConditionHitInfoList() { this->conditionHitInfoList_ = nullptr;};
          inline const HitRuleReviewInfo::ConditionHitInfoList & getConditionHitInfoList() const { DARABONBA_PTR_GET_CONST(conditionHitInfoList_, HitRuleReviewInfo::ConditionHitInfoList) };
          inline HitRuleReviewInfo::ConditionHitInfoList getConditionHitInfoList() { DARABONBA_PTR_GET(conditionHitInfoList_, HitRuleReviewInfo::ConditionHitInfoList) };
          inline HitRuleReviewInfo& setConditionHitInfoList(const HitRuleReviewInfo::ConditionHitInfoList & conditionHitInfoList) { DARABONBA_PTR_SET_VALUE(conditionHitInfoList_, conditionHitInfoList) };
          inline HitRuleReviewInfo& setConditionHitInfoList(HitRuleReviewInfo::ConditionHitInfoList && conditionHitInfoList) { DARABONBA_PTR_SET_RVALUE(conditionHitInfoList_, conditionHitInfoList) };


          // machineHitResult Field Functions 
          bool hasMachineHitResult() const { return this->machineHitResult_ != nullptr;};
          void deleteMachineHitResult() { this->machineHitResult_ = nullptr;};
          inline int32_t getMachineHitResult() const { DARABONBA_PTR_GET_DEFAULT(machineHitResult_, 0) };
          inline HitRuleReviewInfo& setMachineHitResult(int32_t machineHitResult) { DARABONBA_PTR_SET_VALUE(machineHitResult_, machineHitResult) };


          // reviewHitResult Field Functions 
          bool hasReviewHitResult() const { return this->reviewHitResult_ != nullptr;};
          void deleteReviewHitResult() { this->reviewHitResult_ = nullptr;};
          inline int32_t getReviewHitResult() const { DARABONBA_PTR_GET_DEFAULT(reviewHitResult_, 0) };
          inline HitRuleReviewInfo& setReviewHitResult(int32_t reviewHitResult) { DARABONBA_PTR_SET_VALUE(reviewHitResult_, reviewHitResult) };


          // reviewInfo Field Functions 
          bool hasReviewInfo() const { return this->reviewInfo_ != nullptr;};
          void deleteReviewInfo() { this->reviewInfo_ = nullptr;};
          inline const HitRuleReviewInfo::ReviewInfo & getReviewInfo() const { DARABONBA_PTR_GET_CONST(reviewInfo_, HitRuleReviewInfo::ReviewInfo) };
          inline HitRuleReviewInfo::ReviewInfo getReviewInfo() { DARABONBA_PTR_GET(reviewInfo_, HitRuleReviewInfo::ReviewInfo) };
          inline HitRuleReviewInfo& setReviewInfo(const HitRuleReviewInfo::ReviewInfo & reviewInfo) { DARABONBA_PTR_SET_VALUE(reviewInfo_, reviewInfo) };
          inline HitRuleReviewInfo& setReviewInfo(HitRuleReviewInfo::ReviewInfo && reviewInfo) { DARABONBA_PTR_SET_RVALUE(reviewInfo_, reviewInfo) };


          // rid Field Functions 
          bool hasRid() const { return this->rid_ != nullptr;};
          void deleteRid() { this->rid_ = nullptr;};
          inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
          inline HitRuleReviewInfo& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline HitRuleReviewInfo& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // scoreId Field Functions 
          bool hasScoreId() const { return this->scoreId_ != nullptr;};
          void deleteScoreId() { this->scoreId_ = nullptr;};
          inline int64_t getScoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0L) };
          inline HitRuleReviewInfo& setScoreId(int64_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


          // scoreNum Field Functions 
          bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
          void deleteScoreNum() { this->scoreNum_ = nullptr;};
          inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
          inline HitRuleReviewInfo& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


          // scoreSubId Field Functions 
          bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
          void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
          inline int64_t getScoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0L) };
          inline HitRuleReviewInfo& setScoreSubId(int64_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


          // scoreSubName Field Functions 
          bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
          void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
          inline string getScoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
          inline HitRuleReviewInfo& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


        protected:
          shared_ptr<int32_t> autoReview_ {};
          shared_ptr<HitRuleReviewInfo::ComplainHistories> complainHistories_ {};
          shared_ptr<bool> complainable_ {};
          shared_ptr<HitRuleReviewInfo::ConditionHitInfoList> conditionHitInfoList_ {};
          shared_ptr<int32_t> machineHitResult_ {};
          shared_ptr<int32_t> reviewHitResult_ {};
          shared_ptr<HitRuleReviewInfo::ReviewInfo> reviewInfo_ {};
          shared_ptr<int64_t> rid_ {};
          shared_ptr<string> ruleName_ {};
          shared_ptr<int64_t> scoreId_ {};
          shared_ptr<int32_t> scoreNum_ {};
          shared_ptr<int64_t> scoreSubId_ {};
          shared_ptr<string> scoreSubName_ {};
        };

        virtual bool empty() const override { return this->hitRuleReviewInfo_ == nullptr; };
        // hitRuleReviewInfo Field Functions 
        bool hasHitRuleReviewInfo() const { return this->hitRuleReviewInfo_ != nullptr;};
        void deleteHitRuleReviewInfo() { this->hitRuleReviewInfo_ = nullptr;};
        inline const vector<HitRuleReviewInfoList::HitRuleReviewInfo> & getHitRuleReviewInfo() const { DARABONBA_PTR_GET_CONST(hitRuleReviewInfo_, vector<HitRuleReviewInfoList::HitRuleReviewInfo>) };
        inline vector<HitRuleReviewInfoList::HitRuleReviewInfo> getHitRuleReviewInfo() { DARABONBA_PTR_GET(hitRuleReviewInfo_, vector<HitRuleReviewInfoList::HitRuleReviewInfo>) };
        inline HitRuleReviewInfoList& setHitRuleReviewInfo(const vector<HitRuleReviewInfoList::HitRuleReviewInfo> & hitRuleReviewInfo) { DARABONBA_PTR_SET_VALUE(hitRuleReviewInfo_, hitRuleReviewInfo) };
        inline HitRuleReviewInfoList& setHitRuleReviewInfo(vector<HitRuleReviewInfoList::HitRuleReviewInfo> && hitRuleReviewInfo) { DARABONBA_PTR_SET_RVALUE(hitRuleReviewInfo_, hitRuleReviewInfo) };


      protected:
        shared_ptr<vector<HitRuleReviewInfoList::HitRuleReviewInfo>> hitRuleReviewInfo_ {};
      };

      class Dialogues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dialogues& obj) { 
          DARABONBA_PTR_TO_JSON(Dialogue, dialogue_);
        };
        friend void from_json(const Darabonba::Json& j, Dialogues& obj) { 
          DARABONBA_PTR_FROM_JSON(Dialogue, dialogue_);
        };
        Dialogues() = default ;
        Dialogues(const Dialogues &) = default ;
        Dialogues(Dialogues &&) = default ;
        Dialogues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dialogues() = default ;
        Dialogues& operator=(const Dialogues &) = default ;
        Dialogues& operator=(Dialogues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Dialogue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Dialogue& obj) { 
            DARABONBA_PTR_TO_JSON(Begin, begin_);
            DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
            DARABONBA_PTR_TO_JSON(BeginTimeMs, beginTimeMs_);
            DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
            DARABONBA_PTR_TO_JSON(End, end_);
            DARABONBA_PTR_TO_JSON(HourMinSec, hourMinSec_);
            DARABONBA_PTR_TO_JSON(Identity, identity_);
            DARABONBA_PTR_TO_JSON(Role, role_);
            DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
            DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
            DARABONBA_PTR_TO_JSON(Words, words_);
          };
          friend void from_json(const Darabonba::Json& j, Dialogue& obj) { 
            DARABONBA_PTR_FROM_JSON(Begin, begin_);
            DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
            DARABONBA_PTR_FROM_JSON(BeginTimeMs, beginTimeMs_);
            DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
            DARABONBA_PTR_FROM_JSON(End, end_);
            DARABONBA_PTR_FROM_JSON(HourMinSec, hourMinSec_);
            DARABONBA_PTR_FROM_JSON(Identity, identity_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
            DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
            DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
            DARABONBA_PTR_FROM_JSON(Words, words_);
          };
          Dialogue() = default ;
          Dialogue(const Dialogue &) = default ;
          Dialogue(Dialogue &&) = default ;
          Dialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Dialogue() = default ;
          Dialogue& operator=(const Dialogue &) = default ;
          Dialogue& operator=(Dialogue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->begin_ == nullptr
        && this->beginTime_ == nullptr && this->beginTimeMs_ == nullptr && this->emotionValue_ == nullptr && this->end_ == nullptr && this->hourMinSec_ == nullptr
        && this->identity_ == nullptr && this->role_ == nullptr && this->silenceDuration_ == nullptr && this->speechRate_ == nullptr && this->words_ == nullptr; };
          // begin Field Functions 
          bool hasBegin() const { return this->begin_ != nullptr;};
          void deleteBegin() { this->begin_ = nullptr;};
          inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
          inline Dialogue& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


          // beginTime Field Functions 
          bool hasBeginTime() const { return this->beginTime_ != nullptr;};
          void deleteBeginTime() { this->beginTime_ = nullptr;};
          inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
          inline Dialogue& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


          // beginTimeMs Field Functions 
          bool hasBeginTimeMs() const { return this->beginTimeMs_ != nullptr;};
          void deleteBeginTimeMs() { this->beginTimeMs_ = nullptr;};
          inline int64_t getBeginTimeMs() const { DARABONBA_PTR_GET_DEFAULT(beginTimeMs_, 0L) };
          inline Dialogue& setBeginTimeMs(int64_t beginTimeMs) { DARABONBA_PTR_SET_VALUE(beginTimeMs_, beginTimeMs) };


          // emotionValue Field Functions 
          bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
          void deleteEmotionValue() { this->emotionValue_ = nullptr;};
          inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
          inline Dialogue& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
          inline Dialogue& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


          // hourMinSec Field Functions 
          bool hasHourMinSec() const { return this->hourMinSec_ != nullptr;};
          void deleteHourMinSec() { this->hourMinSec_ = nullptr;};
          inline string getHourMinSec() const { DARABONBA_PTR_GET_DEFAULT(hourMinSec_, "") };
          inline Dialogue& setHourMinSec(string hourMinSec) { DARABONBA_PTR_SET_VALUE(hourMinSec_, hourMinSec) };


          // identity Field Functions 
          bool hasIdentity() const { return this->identity_ != nullptr;};
          void deleteIdentity() { this->identity_ = nullptr;};
          inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
          inline Dialogue& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Dialogue& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // silenceDuration Field Functions 
          bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
          void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
          inline int32_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0) };
          inline Dialogue& setSilenceDuration(int32_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


          // speechRate Field Functions 
          bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
          void deleteSpeechRate() { this->speechRate_ = nullptr;};
          inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
          inline Dialogue& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


          // words Field Functions 
          bool hasWords() const { return this->words_ != nullptr;};
          void deleteWords() { this->words_ = nullptr;};
          inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
          inline Dialogue& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


        protected:
          shared_ptr<int64_t> begin_ {};
          shared_ptr<string> beginTime_ {};
          shared_ptr<int64_t> beginTimeMs_ {};
          shared_ptr<int32_t> emotionValue_ {};
          shared_ptr<int64_t> end_ {};
          shared_ptr<string> hourMinSec_ {};
          shared_ptr<string> identity_ {};
          shared_ptr<string> role_ {};
          shared_ptr<int32_t> silenceDuration_ {};
          shared_ptr<int32_t> speechRate_ {};
          shared_ptr<string> words_ {};
        };

        virtual bool empty() const override { return this->dialogue_ == nullptr; };
        // dialogue Field Functions 
        bool hasDialogue() const { return this->dialogue_ != nullptr;};
        void deleteDialogue() { this->dialogue_ = nullptr;};
        inline const vector<Dialogues::Dialogue> & getDialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, vector<Dialogues::Dialogue>) };
        inline vector<Dialogues::Dialogue> getDialogue() { DARABONBA_PTR_GET(dialogue_, vector<Dialogues::Dialogue>) };
        inline Dialogues& setDialogue(const vector<Dialogues::Dialogue> & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
        inline Dialogues& setDialogue(vector<Dialogues::Dialogue> && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


      protected:
        shared_ptr<vector<Dialogues::Dialogue>> dialogue_ {};
      };

      virtual bool empty() const override { return this->audioScheme_ == nullptr
        && this->audioURL_ == nullptr && this->comments_ == nullptr && this->dialogues_ == nullptr && this->fileId_ == nullptr && this->fileMergeName_ == nullptr
        && this->hitRuleReviewInfoList_ == nullptr && this->manualScoreInfoList_ == nullptr && this->reviewHistoryList_ == nullptr && this->reviewTypeIdList_ == nullptr && this->status_ == nullptr
        && this->totalScore_ == nullptr && this->vid_ == nullptr; };
      // audioScheme Field Functions 
      bool hasAudioScheme() const { return this->audioScheme_ != nullptr;};
      void deleteAudioScheme() { this->audioScheme_ = nullptr;};
      inline string getAudioScheme() const { DARABONBA_PTR_GET_DEFAULT(audioScheme_, "") };
      inline Data& setAudioScheme(string audioScheme) { DARABONBA_PTR_SET_VALUE(audioScheme_, audioScheme) };


      // audioURL Field Functions 
      bool hasAudioURL() const { return this->audioURL_ != nullptr;};
      void deleteAudioURL() { this->audioURL_ = nullptr;};
      inline string getAudioURL() const { DARABONBA_PTR_GET_DEFAULT(audioURL_, "") };
      inline Data& setAudioURL(string audioURL) { DARABONBA_PTR_SET_VALUE(audioURL_, audioURL) };


      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
      inline Data& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


      // dialogues Field Functions 
      bool hasDialogues() const { return this->dialogues_ != nullptr;};
      void deleteDialogues() { this->dialogues_ = nullptr;};
      inline const Data::Dialogues & getDialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, Data::Dialogues) };
      inline Data::Dialogues getDialogues() { DARABONBA_PTR_GET(dialogues_, Data::Dialogues) };
      inline Data& setDialogues(const Data::Dialogues & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
      inline Data& setDialogues(Data::Dialogues && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // fileMergeName Field Functions 
      bool hasFileMergeName() const { return this->fileMergeName_ != nullptr;};
      void deleteFileMergeName() { this->fileMergeName_ = nullptr;};
      inline string getFileMergeName() const { DARABONBA_PTR_GET_DEFAULT(fileMergeName_, "") };
      inline Data& setFileMergeName(string fileMergeName) { DARABONBA_PTR_SET_VALUE(fileMergeName_, fileMergeName) };


      // hitRuleReviewInfoList Field Functions 
      bool hasHitRuleReviewInfoList() const { return this->hitRuleReviewInfoList_ != nullptr;};
      void deleteHitRuleReviewInfoList() { this->hitRuleReviewInfoList_ = nullptr;};
      inline const Data::HitRuleReviewInfoList & getHitRuleReviewInfoList() const { DARABONBA_PTR_GET_CONST(hitRuleReviewInfoList_, Data::HitRuleReviewInfoList) };
      inline Data::HitRuleReviewInfoList getHitRuleReviewInfoList() { DARABONBA_PTR_GET(hitRuleReviewInfoList_, Data::HitRuleReviewInfoList) };
      inline Data& setHitRuleReviewInfoList(const Data::HitRuleReviewInfoList & hitRuleReviewInfoList) { DARABONBA_PTR_SET_VALUE(hitRuleReviewInfoList_, hitRuleReviewInfoList) };
      inline Data& setHitRuleReviewInfoList(Data::HitRuleReviewInfoList && hitRuleReviewInfoList) { DARABONBA_PTR_SET_RVALUE(hitRuleReviewInfoList_, hitRuleReviewInfoList) };


      // manualScoreInfoList Field Functions 
      bool hasManualScoreInfoList() const { return this->manualScoreInfoList_ != nullptr;};
      void deleteManualScoreInfoList() { this->manualScoreInfoList_ = nullptr;};
      inline const Data::ManualScoreInfoList & getManualScoreInfoList() const { DARABONBA_PTR_GET_CONST(manualScoreInfoList_, Data::ManualScoreInfoList) };
      inline Data::ManualScoreInfoList getManualScoreInfoList() { DARABONBA_PTR_GET(manualScoreInfoList_, Data::ManualScoreInfoList) };
      inline Data& setManualScoreInfoList(const Data::ManualScoreInfoList & manualScoreInfoList) { DARABONBA_PTR_SET_VALUE(manualScoreInfoList_, manualScoreInfoList) };
      inline Data& setManualScoreInfoList(Data::ManualScoreInfoList && manualScoreInfoList) { DARABONBA_PTR_SET_RVALUE(manualScoreInfoList_, manualScoreInfoList) };


      // reviewHistoryList Field Functions 
      bool hasReviewHistoryList() const { return this->reviewHistoryList_ != nullptr;};
      void deleteReviewHistoryList() { this->reviewHistoryList_ = nullptr;};
      inline const Data::ReviewHistoryList & getReviewHistoryList() const { DARABONBA_PTR_GET_CONST(reviewHistoryList_, Data::ReviewHistoryList) };
      inline Data::ReviewHistoryList getReviewHistoryList() { DARABONBA_PTR_GET(reviewHistoryList_, Data::ReviewHistoryList) };
      inline Data& setReviewHistoryList(const Data::ReviewHistoryList & reviewHistoryList) { DARABONBA_PTR_SET_VALUE(reviewHistoryList_, reviewHistoryList) };
      inline Data& setReviewHistoryList(Data::ReviewHistoryList && reviewHistoryList) { DARABONBA_PTR_SET_RVALUE(reviewHistoryList_, reviewHistoryList) };


      // reviewTypeIdList Field Functions 
      bool hasReviewTypeIdList() const { return this->reviewTypeIdList_ != nullptr;};
      void deleteReviewTypeIdList() { this->reviewTypeIdList_ = nullptr;};
      inline const Data::ReviewTypeIdList & getReviewTypeIdList() const { DARABONBA_PTR_GET_CONST(reviewTypeIdList_, Data::ReviewTypeIdList) };
      inline Data::ReviewTypeIdList getReviewTypeIdList() { DARABONBA_PTR_GET(reviewTypeIdList_, Data::ReviewTypeIdList) };
      inline Data& setReviewTypeIdList(const Data::ReviewTypeIdList & reviewTypeIdList) { DARABONBA_PTR_SET_VALUE(reviewTypeIdList_, reviewTypeIdList) };
      inline Data& setReviewTypeIdList(Data::ReviewTypeIdList && reviewTypeIdList) { DARABONBA_PTR_SET_RVALUE(reviewTypeIdList_, reviewTypeIdList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalScore Field Functions 
      bool hasTotalScore() const { return this->totalScore_ != nullptr;};
      void deleteTotalScore() { this->totalScore_ = nullptr;};
      inline int32_t getTotalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0) };
      inline Data& setTotalScore(int32_t totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


      // vid Field Functions 
      bool hasVid() const { return this->vid_ != nullptr;};
      void deleteVid() { this->vid_ = nullptr;};
      inline string getVid() const { DARABONBA_PTR_GET_DEFAULT(vid_, "") };
      inline Data& setVid(string vid) { DARABONBA_PTR_SET_VALUE(vid_, vid) };


    protected:
      shared_ptr<string> audioScheme_ {};
      shared_ptr<string> audioURL_ {};
      shared_ptr<string> comments_ {};
      shared_ptr<Data::Dialogues> dialogues_ {};
      shared_ptr<string> fileId_ {};
      shared_ptr<string> fileMergeName_ {};
      shared_ptr<Data::HitRuleReviewInfoList> hitRuleReviewInfoList_ {};
      shared_ptr<Data::ManualScoreInfoList> manualScoreInfoList_ {};
      shared_ptr<Data::ReviewHistoryList> reviewHistoryList_ {};
      shared_ptr<Data::ReviewTypeIdList> reviewTypeIdList_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int32_t> totalScore_ {};
      shared_ptr<string> vid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResultToReviewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResultToReviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetResultToReviewResponseBody::Data) };
    inline GetResultToReviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetResultToReviewResponseBody::Data) };
    inline GetResultToReviewResponseBody& setData(const GetResultToReviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResultToReviewResponseBody& setData(GetResultToReviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResultToReviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResultToReviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetResultToReviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetResultToReviewResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
