// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODY_HPP_
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
  class GetResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetResultResponseBody() = default ;
    GetResultResponseBody(const GetResultResponseBody &) = default ;
    GetResultResponseBody(GetResultResponseBody &&) = default ;
    GetResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBody() = default ;
    GetResultResponseBody& operator=(const GetResultResponseBody &) = default ;
    GetResultResponseBody& operator=(GetResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
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
      class ResultInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Agent, agent_);
          DARABONBA_PTR_TO_JSON(AsrResult, asrResult_);
          DARABONBA_PTR_TO_JSON(AssignmentTime, assignmentTime_);
          DARABONBA_PTR_TO_JSON(Comments, comments_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimeLong, createTimeLong_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(HitResult, hitResult_);
          DARABONBA_PTR_TO_JSON(HitScore, hitScore_);
          DARABONBA_PTR_TO_JSON(LastDataId, lastDataId_);
          DARABONBA_PTR_TO_JSON(Recording, recording_);
          DARABONBA_PTR_TO_JSON(Resolver, resolver_);
          DARABONBA_PTR_TO_JSON(ReviewHistoryList, reviewHistoryList_);
          DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
          DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
          DARABONBA_PTR_TO_JSON(ReviewTime, reviewTime_);
          DARABONBA_PTR_TO_JSON(ReviewTimeLong, reviewTimeLong_);
          DARABONBA_PTR_TO_JSON(ReviewType, reviewType_);
          DARABONBA_PTR_TO_JSON(ReviewTypeIdList, reviewTypeIdList_);
          DARABONBA_PTR_TO_JSON(Reviewer, reviewer_);
          DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
          DARABONBA_PTR_TO_JSON(SchemeNameList, schemeNameList_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(Vid, vid_);
        };
        friend void from_json(const Darabonba::Json& j, ResultInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Agent, agent_);
          DARABONBA_PTR_FROM_JSON(AsrResult, asrResult_);
          DARABONBA_PTR_FROM_JSON(AssignmentTime, assignmentTime_);
          DARABONBA_PTR_FROM_JSON(Comments, comments_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimeLong, createTimeLong_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(HitResult, hitResult_);
          DARABONBA_PTR_FROM_JSON(HitScore, hitScore_);
          DARABONBA_PTR_FROM_JSON(LastDataId, lastDataId_);
          DARABONBA_PTR_FROM_JSON(Recording, recording_);
          DARABONBA_PTR_FROM_JSON(Resolver, resolver_);
          DARABONBA_PTR_FROM_JSON(ReviewHistoryList, reviewHistoryList_);
          DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
          DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
          DARABONBA_PTR_FROM_JSON(ReviewTime, reviewTime_);
          DARABONBA_PTR_FROM_JSON(ReviewTimeLong, reviewTimeLong_);
          DARABONBA_PTR_FROM_JSON(ReviewType, reviewType_);
          DARABONBA_PTR_FROM_JSON(ReviewTypeIdList, reviewTypeIdList_);
          DARABONBA_PTR_FROM_JSON(Reviewer, reviewer_);
          DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
          DARABONBA_PTR_FROM_JSON(SchemeNameList, schemeNameList_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(Vid, vid_);
        };
        ResultInfo() = default ;
        ResultInfo(const ResultInfo &) = default ;
        ResultInfo(ResultInfo &&) = default ;
        ResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultInfo() = default ;
        ResultInfo& operator=(const ResultInfo &) = default ;
        ResultInfo& operator=(ResultInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SchemeNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SchemeNameList& obj) { 
            DARABONBA_PTR_TO_JSON(SchemeNameList, schemeNameList_);
          };
          friend void from_json(const Darabonba::Json& j, SchemeNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(SchemeNameList, schemeNameList_);
          };
          SchemeNameList() = default ;
          SchemeNameList(const SchemeNameList &) = default ;
          SchemeNameList(SchemeNameList &&) = default ;
          SchemeNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SchemeNameList() = default ;
          SchemeNameList& operator=(const SchemeNameList &) = default ;
          SchemeNameList& operator=(SchemeNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->schemeNameList_ == nullptr; };
          // schemeNameList Field Functions 
          bool hasSchemeNameList() const { return this->schemeNameList_ != nullptr;};
          void deleteSchemeNameList() { this->schemeNameList_ = nullptr;};
          inline const vector<string> & getSchemeNameList() const { DARABONBA_PTR_GET_CONST(schemeNameList_, vector<string>) };
          inline vector<string> getSchemeNameList() { DARABONBA_PTR_GET(schemeNameList_, vector<string>) };
          inline SchemeNameList& setSchemeNameList(const vector<string> & schemeNameList) { DARABONBA_PTR_SET_VALUE(schemeNameList_, schemeNameList) };
          inline SchemeNameList& setSchemeNameList(vector<string> && schemeNameList) { DARABONBA_PTR_SET_RVALUE(schemeNameList_, schemeNameList) };


        protected:
          shared_ptr<vector<string>> schemeNameList_ {};
        };

        class SchemeIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SchemeIdList& obj) { 
            DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
          };
          friend void from_json(const Darabonba::Json& j, SchemeIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
          };
          SchemeIdList() = default ;
          SchemeIdList(const SchemeIdList &) = default ;
          SchemeIdList(SchemeIdList &&) = default ;
          SchemeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SchemeIdList() = default ;
          SchemeIdList& operator=(const SchemeIdList &) = default ;
          SchemeIdList& operator=(SchemeIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->schemeIdList_ == nullptr; };
          // schemeIdList Field Functions 
          bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
          void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
          inline const vector<int64_t> & getSchemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, vector<int64_t>) };
          inline vector<int64_t> getSchemeIdList() { DARABONBA_PTR_GET(schemeIdList_, vector<int64_t>) };
          inline SchemeIdList& setSchemeIdList(const vector<int64_t> & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
          inline SchemeIdList& setSchemeIdList(vector<int64_t> && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


        protected:
          shared_ptr<vector<int64_t>> schemeIdList_ {};
        };

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

        class Recording : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Recording& obj) { 
            DARABONBA_PTR_TO_JSON(Business, business_);
            DARABONBA_PTR_TO_JSON(CallId, callId_);
            DARABONBA_PTR_TO_JSON(CallTime, callTime_);
            DARABONBA_PTR_TO_JSON(CallType, callType_);
            DARABONBA_PTR_TO_JSON(Callee, callee_);
            DARABONBA_PTR_TO_JSON(Caller, caller_);
            DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
            DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
            DARABONBA_PTR_TO_JSON(DialogueSize, dialogueSize_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
            DARABONBA_PTR_TO_JSON(Remark1, remark1_);
            DARABONBA_PTR_TO_JSON(Remark10, remark10_);
            DARABONBA_PTR_TO_JSON(Remark11, remark11_);
            DARABONBA_PTR_TO_JSON(Remark12, remark12_);
            DARABONBA_PTR_TO_JSON(Remark13, remark13_);
            DARABONBA_PTR_TO_JSON(Remark2, remark2_);
            DARABONBA_PTR_TO_JSON(Remark3, remark3_);
            DARABONBA_PTR_TO_JSON(Remark4, remark4_);
            DARABONBA_PTR_TO_JSON(Remark5, remark5_);
            DARABONBA_PTR_TO_JSON(Remark6, remark6_);
            DARABONBA_PTR_TO_JSON(Remark7, remark7_);
            DARABONBA_PTR_TO_JSON(Remark8, remark8_);
            DARABONBA_PTR_TO_JSON(Remark9, remark9_);
            DARABONBA_PTR_TO_JSON(TaskConfigId, taskConfigId_);
            DARABONBA_PTR_TO_JSON(TaskConfigName, taskConfigName_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Recording& obj) { 
            DARABONBA_PTR_FROM_JSON(Business, business_);
            DARABONBA_PTR_FROM_JSON(CallId, callId_);
            DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
            DARABONBA_PTR_FROM_JSON(CallType, callType_);
            DARABONBA_PTR_FROM_JSON(Callee, callee_);
            DARABONBA_PTR_FROM_JSON(Caller, caller_);
            DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
            DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
            DARABONBA_PTR_FROM_JSON(DialogueSize, dialogueSize_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
            DARABONBA_PTR_FROM_JSON(Remark1, remark1_);
            DARABONBA_PTR_FROM_JSON(Remark10, remark10_);
            DARABONBA_PTR_FROM_JSON(Remark11, remark11_);
            DARABONBA_PTR_FROM_JSON(Remark12, remark12_);
            DARABONBA_PTR_FROM_JSON(Remark13, remark13_);
            DARABONBA_PTR_FROM_JSON(Remark2, remark2_);
            DARABONBA_PTR_FROM_JSON(Remark3, remark3_);
            DARABONBA_PTR_FROM_JSON(Remark4, remark4_);
            DARABONBA_PTR_FROM_JSON(Remark5, remark5_);
            DARABONBA_PTR_FROM_JSON(Remark6, remark6_);
            DARABONBA_PTR_FROM_JSON(Remark7, remark7_);
            DARABONBA_PTR_FROM_JSON(Remark8, remark8_);
            DARABONBA_PTR_FROM_JSON(Remark9, remark9_);
            DARABONBA_PTR_FROM_JSON(TaskConfigId, taskConfigId_);
            DARABONBA_PTR_FROM_JSON(TaskConfigName, taskConfigName_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Recording() = default ;
          Recording(const Recording &) = default ;
          Recording(Recording &&) = default ;
          Recording(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Recording() = default ;
          Recording& operator=(const Recording &) = default ;
          Recording& operator=(Recording &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->business_ == nullptr
        && this->callId_ == nullptr && this->callTime_ == nullptr && this->callType_ == nullptr && this->callee_ == nullptr && this->caller_ == nullptr
        && this->customerName_ == nullptr && this->dataSetName_ == nullptr && this->dialogueSize_ == nullptr && this->duration_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->primaryId_ == nullptr && this->remark1_ == nullptr && this->remark10_ == nullptr && this->remark11_ == nullptr
        && this->remark12_ == nullptr && this->remark13_ == nullptr && this->remark2_ == nullptr && this->remark3_ == nullptr && this->remark4_ == nullptr
        && this->remark5_ == nullptr && this->remark6_ == nullptr && this->remark7_ == nullptr && this->remark8_ == nullptr && this->remark9_ == nullptr
        && this->taskConfigId_ == nullptr && this->taskConfigName_ == nullptr && this->url_ == nullptr; };
          // business Field Functions 
          bool hasBusiness() const { return this->business_ != nullptr;};
          void deleteBusiness() { this->business_ = nullptr;};
          inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
          inline Recording& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


          // callId Field Functions 
          bool hasCallId() const { return this->callId_ != nullptr;};
          void deleteCallId() { this->callId_ = nullptr;};
          inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
          inline Recording& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


          // callTime Field Functions 
          bool hasCallTime() const { return this->callTime_ != nullptr;};
          void deleteCallTime() { this->callTime_ = nullptr;};
          inline string getCallTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
          inline Recording& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


          // callType Field Functions 
          bool hasCallType() const { return this->callType_ != nullptr;};
          void deleteCallType() { this->callType_ = nullptr;};
          inline int32_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
          inline Recording& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


          // callee Field Functions 
          bool hasCallee() const { return this->callee_ != nullptr;};
          void deleteCallee() { this->callee_ = nullptr;};
          inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
          inline Recording& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


          // caller Field Functions 
          bool hasCaller() const { return this->caller_ != nullptr;};
          void deleteCaller() { this->caller_ = nullptr;};
          inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
          inline Recording& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


          // customerName Field Functions 
          bool hasCustomerName() const { return this->customerName_ != nullptr;};
          void deleteCustomerName() { this->customerName_ = nullptr;};
          inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
          inline Recording& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


          // dataSetName Field Functions 
          bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
          void deleteDataSetName() { this->dataSetName_ = nullptr;};
          inline string getDataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
          inline Recording& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


          // dialogueSize Field Functions 
          bool hasDialogueSize() const { return this->dialogueSize_ != nullptr;};
          void deleteDialogueSize() { this->dialogueSize_ = nullptr;};
          inline int32_t getDialogueSize() const { DARABONBA_PTR_GET_DEFAULT(dialogueSize_, 0) };
          inline Recording& setDialogueSize(int32_t dialogueSize) { DARABONBA_PTR_SET_VALUE(dialogueSize_, dialogueSize) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
          inline Recording& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Recording& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Recording& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // primaryId Field Functions 
          bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
          void deletePrimaryId() { this->primaryId_ = nullptr;};
          inline string getPrimaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, "") };
          inline Recording& setPrimaryId(string primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


          // remark1 Field Functions 
          bool hasRemark1() const { return this->remark1_ != nullptr;};
          void deleteRemark1() { this->remark1_ = nullptr;};
          inline string getRemark1() const { DARABONBA_PTR_GET_DEFAULT(remark1_, "") };
          inline Recording& setRemark1(string remark1) { DARABONBA_PTR_SET_VALUE(remark1_, remark1) };


          // remark10 Field Functions 
          bool hasRemark10() const { return this->remark10_ != nullptr;};
          void deleteRemark10() { this->remark10_ = nullptr;};
          inline string getRemark10() const { DARABONBA_PTR_GET_DEFAULT(remark10_, "") };
          inline Recording& setRemark10(string remark10) { DARABONBA_PTR_SET_VALUE(remark10_, remark10) };


          // remark11 Field Functions 
          bool hasRemark11() const { return this->remark11_ != nullptr;};
          void deleteRemark11() { this->remark11_ = nullptr;};
          inline string getRemark11() const { DARABONBA_PTR_GET_DEFAULT(remark11_, "") };
          inline Recording& setRemark11(string remark11) { DARABONBA_PTR_SET_VALUE(remark11_, remark11) };


          // remark12 Field Functions 
          bool hasRemark12() const { return this->remark12_ != nullptr;};
          void deleteRemark12() { this->remark12_ = nullptr;};
          inline string getRemark12() const { DARABONBA_PTR_GET_DEFAULT(remark12_, "") };
          inline Recording& setRemark12(string remark12) { DARABONBA_PTR_SET_VALUE(remark12_, remark12) };


          // remark13 Field Functions 
          bool hasRemark13() const { return this->remark13_ != nullptr;};
          void deleteRemark13() { this->remark13_ = nullptr;};
          inline string getRemark13() const { DARABONBA_PTR_GET_DEFAULT(remark13_, "") };
          inline Recording& setRemark13(string remark13) { DARABONBA_PTR_SET_VALUE(remark13_, remark13) };


          // remark2 Field Functions 
          bool hasRemark2() const { return this->remark2_ != nullptr;};
          void deleteRemark2() { this->remark2_ = nullptr;};
          inline string getRemark2() const { DARABONBA_PTR_GET_DEFAULT(remark2_, "") };
          inline Recording& setRemark2(string remark2) { DARABONBA_PTR_SET_VALUE(remark2_, remark2) };


          // remark3 Field Functions 
          bool hasRemark3() const { return this->remark3_ != nullptr;};
          void deleteRemark3() { this->remark3_ = nullptr;};
          inline string getRemark3() const { DARABONBA_PTR_GET_DEFAULT(remark3_, "") };
          inline Recording& setRemark3(string remark3) { DARABONBA_PTR_SET_VALUE(remark3_, remark3) };


          // remark4 Field Functions 
          bool hasRemark4() const { return this->remark4_ != nullptr;};
          void deleteRemark4() { this->remark4_ = nullptr;};
          inline string getRemark4() const { DARABONBA_PTR_GET_DEFAULT(remark4_, "") };
          inline Recording& setRemark4(string remark4) { DARABONBA_PTR_SET_VALUE(remark4_, remark4) };


          // remark5 Field Functions 
          bool hasRemark5() const { return this->remark5_ != nullptr;};
          void deleteRemark5() { this->remark5_ = nullptr;};
          inline int64_t getRemark5() const { DARABONBA_PTR_GET_DEFAULT(remark5_, 0L) };
          inline Recording& setRemark5(int64_t remark5) { DARABONBA_PTR_SET_VALUE(remark5_, remark5) };


          // remark6 Field Functions 
          bool hasRemark6() const { return this->remark6_ != nullptr;};
          void deleteRemark6() { this->remark6_ = nullptr;};
          inline string getRemark6() const { DARABONBA_PTR_GET_DEFAULT(remark6_, "") };
          inline Recording& setRemark6(string remark6) { DARABONBA_PTR_SET_VALUE(remark6_, remark6) };


          // remark7 Field Functions 
          bool hasRemark7() const { return this->remark7_ != nullptr;};
          void deleteRemark7() { this->remark7_ = nullptr;};
          inline string getRemark7() const { DARABONBA_PTR_GET_DEFAULT(remark7_, "") };
          inline Recording& setRemark7(string remark7) { DARABONBA_PTR_SET_VALUE(remark7_, remark7) };


          // remark8 Field Functions 
          bool hasRemark8() const { return this->remark8_ != nullptr;};
          void deleteRemark8() { this->remark8_ = nullptr;};
          inline string getRemark8() const { DARABONBA_PTR_GET_DEFAULT(remark8_, "") };
          inline Recording& setRemark8(string remark8) { DARABONBA_PTR_SET_VALUE(remark8_, remark8) };


          // remark9 Field Functions 
          bool hasRemark9() const { return this->remark9_ != nullptr;};
          void deleteRemark9() { this->remark9_ = nullptr;};
          inline string getRemark9() const { DARABONBA_PTR_GET_DEFAULT(remark9_, "") };
          inline Recording& setRemark9(string remark9) { DARABONBA_PTR_SET_VALUE(remark9_, remark9) };


          // taskConfigId Field Functions 
          bool hasTaskConfigId() const { return this->taskConfigId_ != nullptr;};
          void deleteTaskConfigId() { this->taskConfigId_ = nullptr;};
          inline int64_t getTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(taskConfigId_, 0L) };
          inline Recording& setTaskConfigId(int64_t taskConfigId) { DARABONBA_PTR_SET_VALUE(taskConfigId_, taskConfigId) };


          // taskConfigName Field Functions 
          bool hasTaskConfigName() const { return this->taskConfigName_ != nullptr;};
          void deleteTaskConfigName() { this->taskConfigName_ = nullptr;};
          inline string getTaskConfigName() const { DARABONBA_PTR_GET_DEFAULT(taskConfigName_, "") };
          inline Recording& setTaskConfigName(string taskConfigName) { DARABONBA_PTR_SET_VALUE(taskConfigName_, taskConfigName) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Recording& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> business_ {};
          shared_ptr<string> callId_ {};
          shared_ptr<string> callTime_ {};
          shared_ptr<int32_t> callType_ {};
          shared_ptr<string> callee_ {};
          shared_ptr<string> caller_ {};
          shared_ptr<string> customerName_ {};
          shared_ptr<string> dataSetName_ {};
          shared_ptr<int32_t> dialogueSize_ {};
          shared_ptr<int64_t> duration_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> primaryId_ {};
          shared_ptr<string> remark1_ {};
          shared_ptr<string> remark10_ {};
          shared_ptr<string> remark11_ {};
          shared_ptr<string> remark12_ {};
          shared_ptr<string> remark13_ {};
          shared_ptr<string> remark2_ {};
          shared_ptr<string> remark3_ {};
          shared_ptr<string> remark4_ {};
          shared_ptr<int64_t> remark5_ {};
          shared_ptr<string> remark6_ {};
          shared_ptr<string> remark7_ {};
          shared_ptr<string> remark8_ {};
          shared_ptr<string> remark9_ {};
          shared_ptr<int64_t> taskConfigId_ {};
          shared_ptr<string> taskConfigName_ {};
          shared_ptr<string> url_ {};
        };

        class HitScore : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HitScore& obj) { 
            DARABONBA_PTR_TO_JSON(HitScore, hitScore_);
          };
          friend void from_json(const Darabonba::Json& j, HitScore& obj) { 
            DARABONBA_PTR_FROM_JSON(HitScore, hitScore_);
          };
          HitScore() = default ;
          HitScore(const HitScore &) = default ;
          HitScore(HitScore &&) = default ;
          HitScore(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HitScore() = default ;
          HitScore& operator=(const HitScore &) = default ;
          HitScore& operator=(HitScore &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class HitScoreItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HitScoreItem& obj) { 
              DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
              DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
              DARABONBA_PTR_TO_JSON(ScoreName, scoreName_);
              DARABONBA_PTR_TO_JSON(ScoreNumber, scoreNumber_);
            };
            friend void from_json(const Darabonba::Json& j, HitScoreItem& obj) { 
              DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
              DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
              DARABONBA_PTR_FROM_JSON(ScoreName, scoreName_);
              DARABONBA_PTR_FROM_JSON(ScoreNumber, scoreNumber_);
            };
            HitScoreItem() = default ;
            HitScoreItem(const HitScoreItem &) = default ;
            HitScoreItem(HitScoreItem &&) = default ;
            HitScoreItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HitScoreItem() = default ;
            HitScoreItem& operator=(const HitScoreItem &) = default ;
            HitScoreItem& operator=(HitScoreItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ruleId_ == nullptr
        && this->scoreId_ == nullptr && this->scoreName_ == nullptr && this->scoreNumber_ == nullptr; };
            // ruleId Field Functions 
            bool hasRuleId() const { return this->ruleId_ != nullptr;};
            void deleteRuleId() { this->ruleId_ = nullptr;};
            inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
            inline HitScoreItem& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


            // scoreId Field Functions 
            bool hasScoreId() const { return this->scoreId_ != nullptr;};
            void deleteScoreId() { this->scoreId_ = nullptr;};
            inline string getScoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, "") };
            inline HitScoreItem& setScoreId(string scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


            // scoreName Field Functions 
            bool hasScoreName() const { return this->scoreName_ != nullptr;};
            void deleteScoreName() { this->scoreName_ = nullptr;};
            inline string getScoreName() const { DARABONBA_PTR_GET_DEFAULT(scoreName_, "") };
            inline HitScoreItem& setScoreName(string scoreName) { DARABONBA_PTR_SET_VALUE(scoreName_, scoreName) };


            // scoreNumber Field Functions 
            bool hasScoreNumber() const { return this->scoreNumber_ != nullptr;};
            void deleteScoreNumber() { this->scoreNumber_ = nullptr;};
            inline string getScoreNumber() const { DARABONBA_PTR_GET_DEFAULT(scoreNumber_, "") };
            inline HitScoreItem& setScoreNumber(string scoreNumber) { DARABONBA_PTR_SET_VALUE(scoreNumber_, scoreNumber) };


          protected:
            shared_ptr<string> ruleId_ {};
            shared_ptr<string> scoreId_ {};
            shared_ptr<string> scoreName_ {};
            shared_ptr<string> scoreNumber_ {};
          };

          virtual bool empty() const override { return this->hitScore_ == nullptr; };
          // hitScore Field Functions 
          bool hasHitScore() const { return this->hitScore_ != nullptr;};
          void deleteHitScore() { this->hitScore_ = nullptr;};
          inline const vector<HitScore::HitScoreItem> & getHitScore() const { DARABONBA_PTR_GET_CONST(hitScore_, vector<HitScore::HitScoreItem>) };
          inline vector<HitScore::HitScoreItem> getHitScore() { DARABONBA_PTR_GET(hitScore_, vector<HitScore::HitScoreItem>) };
          inline HitScore& setHitScore(const vector<HitScore::HitScoreItem> & hitScore) { DARABONBA_PTR_SET_VALUE(hitScore_, hitScore) };
          inline HitScore& setHitScore(vector<HitScore::HitScoreItem> && hitScore) { DARABONBA_PTR_SET_RVALUE(hitScore_, hitScore) };


        protected:
          shared_ptr<vector<HitScore::HitScoreItem>> hitScore_ {};
        };

        class HitResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HitResult& obj) { 
            DARABONBA_PTR_TO_JSON(HitResult, hitResult_);
          };
          friend void from_json(const Darabonba::Json& j, HitResult& obj) { 
            DARABONBA_PTR_FROM_JSON(HitResult, hitResult_);
          };
          HitResult() = default ;
          HitResult(const HitResult &) = default ;
          HitResult(HitResult &&) = default ;
          HitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HitResult() = default ;
          HitResult& operator=(const HitResult &) = default ;
          HitResult& operator=(HitResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class HitResultItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HitResultItem& obj) { 
              DARABONBA_PTR_TO_JSON(Conditions, conditions_);
              DARABONBA_PTR_TO_JSON(Hits, hits_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
              DARABONBA_PTR_TO_JSON(Rid, rid_);
              DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
              DARABONBA_PTR_TO_JSON(SchemeVersion, schemeVersion_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, HitResultItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
              DARABONBA_PTR_FROM_JSON(Hits, hits_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
              DARABONBA_PTR_FROM_JSON(Rid, rid_);
              DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
              DARABONBA_PTR_FROM_JSON(SchemeVersion, schemeVersion_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            HitResultItem() = default ;
            HitResultItem(const HitResultItem &) = default ;
            HitResultItem(HitResultItem &&) = default ;
            HitResultItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HitResultItem() = default ;
            HitResultItem& operator=(const HitResultItem &) = default ;
            HitResultItem& operator=(HitResultItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Hits : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Hits& obj) { 
                DARABONBA_PTR_TO_JSON(Hit, hit_);
              };
              friend void from_json(const Darabonba::Json& j, Hits& obj) { 
                DARABONBA_PTR_FROM_JSON(Hit, hit_);
              };
              Hits() = default ;
              Hits(const Hits &) = default ;
              Hits(Hits &&) = default ;
              Hits(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Hits() = default ;
              Hits& operator=(const Hits &) = default ;
              Hits& operator=(Hits &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Hit : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Hit& obj) { 
                  DARABONBA_PTR_TO_JSON(Cid, cid_);
                  DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
                  DARABONBA_PTR_TO_JSON(Phrase, phrase_);
                };
                friend void from_json(const Darabonba::Json& j, Hit& obj) { 
                  DARABONBA_PTR_FROM_JSON(Cid, cid_);
                  DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
                  DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
                };
                Hit() = default ;
                Hit(const Hit &) = default ;
                Hit(Hit &&) = default ;
                Hit(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Hit() = default ;
                Hit& operator=(const Hit &) = default ;
                Hit& operator=(Hit &&) = default ;
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
                    DARABONBA_PTR_TO_JSON(Role, role_);
                    DARABONBA_PTR_TO_JSON(Words, words_);
                  };
                  friend void from_json(const Darabonba::Json& j, Phrase& obj) { 
                    DARABONBA_PTR_FROM_JSON(Begin, begin_);
                    DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
                    DARABONBA_PTR_FROM_JSON(End, end_);
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
        && this->emotionValue_ == nullptr && this->end_ == nullptr && this->role_ == nullptr && this->words_ == nullptr; };
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
                  inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
                  inline Phrase& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


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
                  shared_ptr<int32_t> end_ {};
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
                      DARABONBA_PTR_TO_JSON(From, from_);
                      DARABONBA_PTR_TO_JSON(To, to_);
                      DARABONBA_PTR_TO_JSON(Val, val_);
                    };
                    friend void from_json(const Darabonba::Json& j, KeyWord& obj) { 
                      DARABONBA_PTR_FROM_JSON(Cid, cid_);
                      DARABONBA_PTR_FROM_JSON(From, from_);
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
        && this->from_ == nullptr && this->to_ == nullptr && this->val_ == nullptr; };
                    // cid Field Functions 
                    bool hasCid() const { return this->cid_ != nullptr;};
                    void deleteCid() { this->cid_ = nullptr;};
                    inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
                    inline KeyWord& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


                    // from Field Functions 
                    bool hasFrom() const { return this->from_ != nullptr;};
                    void deleteFrom() { this->from_ = nullptr;};
                    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
                    inline KeyWord& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


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
                    shared_ptr<int32_t> from_ {};
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
                inline const Hit::Cid & getCid() const { DARABONBA_PTR_GET_CONST(cid_, Hit::Cid) };
                inline Hit::Cid getCid() { DARABONBA_PTR_GET(cid_, Hit::Cid) };
                inline Hit& setCid(const Hit::Cid & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
                inline Hit& setCid(Hit::Cid && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


                // keyWords Field Functions 
                bool hasKeyWords() const { return this->keyWords_ != nullptr;};
                void deleteKeyWords() { this->keyWords_ = nullptr;};
                inline const Hit::KeyWords & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, Hit::KeyWords) };
                inline Hit::KeyWords getKeyWords() { DARABONBA_PTR_GET(keyWords_, Hit::KeyWords) };
                inline Hit& setKeyWords(const Hit::KeyWords & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
                inline Hit& setKeyWords(Hit::KeyWords && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


                // phrase Field Functions 
                bool hasPhrase() const { return this->phrase_ != nullptr;};
                void deletePhrase() { this->phrase_ = nullptr;};
                inline const Hit::Phrase & getPhrase() const { DARABONBA_PTR_GET_CONST(phrase_, Hit::Phrase) };
                inline Hit::Phrase getPhrase() { DARABONBA_PTR_GET(phrase_, Hit::Phrase) };
                inline Hit& setPhrase(const Hit::Phrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
                inline Hit& setPhrase(Hit::Phrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


              protected:
                shared_ptr<Hit::Cid> cid_ {};
                shared_ptr<Hit::KeyWords> keyWords_ {};
                shared_ptr<Hit::Phrase> phrase_ {};
              };

              virtual bool empty() const override { return this->hit_ == nullptr; };
              // hit Field Functions 
              bool hasHit() const { return this->hit_ != nullptr;};
              void deleteHit() { this->hit_ = nullptr;};
              inline const vector<Hits::Hit> & getHit() const { DARABONBA_PTR_GET_CONST(hit_, vector<Hits::Hit>) };
              inline vector<Hits::Hit> getHit() { DARABONBA_PTR_GET(hit_, vector<Hits::Hit>) };
              inline Hits& setHit(const vector<Hits::Hit> & hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };
              inline Hits& setHit(vector<Hits::Hit> && hit) { DARABONBA_PTR_SET_RVALUE(hit_, hit) };


            protected:
              shared_ptr<vector<Hits::Hit>> hit_ {};
            };

            class Conditions : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
                DARABONBA_PTR_TO_JSON(Conditions, conditions_);
              };
              friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
                DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
              };
              Conditions() = default ;
              Conditions(const Conditions &) = default ;
              Conditions(Conditions &&) = default ;
              Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Conditions() = default ;
              Conditions& operator=(const Conditions &) = default ;
              Conditions& operator=(Conditions &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ConditionsItem : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ConditionsItem& obj) { 
                  DARABONBA_PTR_TO_JSON(Check_range, checkRange_);
                  DARABONBA_PTR_TO_JSON(Cid, cid_);
                  DARABONBA_PTR_TO_JSON(Exclusion, exclusion_);
                  DARABONBA_PTR_TO_JSON(Id, id_);
                  DARABONBA_PTR_TO_JSON(Lambda, lambda_);
                  DARABONBA_PTR_TO_JSON(Operators, operators_);
                  DARABONBA_PTR_TO_JSON(Rid, rid_);
                };
                friend void from_json(const Darabonba::Json& j, ConditionsItem& obj) { 
                  DARABONBA_PTR_FROM_JSON(Check_range, checkRange_);
                  DARABONBA_PTR_FROM_JSON(Cid, cid_);
                  DARABONBA_PTR_FROM_JSON(Exclusion, exclusion_);
                  DARABONBA_PTR_FROM_JSON(Id, id_);
                  DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
                  DARABONBA_PTR_FROM_JSON(Operators, operators_);
                  DARABONBA_PTR_FROM_JSON(Rid, rid_);
                };
                ConditionsItem() = default ;
                ConditionsItem(const ConditionsItem &) = default ;
                ConditionsItem(ConditionsItem &&) = default ;
                ConditionsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ConditionsItem() = default ;
                ConditionsItem& operator=(const ConditionsItem &) = default ;
                ConditionsItem& operator=(ConditionsItem &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Operators : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Operators& obj) { 
                    DARABONBA_PTR_TO_JSON(Operator, operator_);
                  };
                  friend void from_json(const Darabonba::Json& j, Operators& obj) { 
                    DARABONBA_PTR_FROM_JSON(Operator, operator_);
                  };
                  Operators() = default ;
                  Operators(const Operators &) = default ;
                  Operators(Operators &&) = default ;
                  Operators(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Operators() = default ;
                  Operators& operator=(const Operators &) = default ;
                  Operators& operator=(Operators &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class Operator : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Operator& obj) { 
                      DARABONBA_PTR_TO_JSON(Id, id_);
                      DARABONBA_PTR_TO_JSON(Name, name_);
                      DARABONBA_PTR_TO_JSON(Oid, oid_);
                      DARABONBA_PTR_TO_JSON(Param, param_);
                      DARABONBA_PTR_TO_JSON(Type, type_);
                    };
                    friend void from_json(const Darabonba::Json& j, Operator& obj) { 
                      DARABONBA_PTR_FROM_JSON(Id, id_);
                      DARABONBA_PTR_FROM_JSON(Name, name_);
                      DARABONBA_PTR_FROM_JSON(Oid, oid_);
                      DARABONBA_PTR_FROM_JSON(Param, param_);
                      DARABONBA_PTR_FROM_JSON(Type, type_);
                    };
                    Operator() = default ;
                    Operator(const Operator &) = default ;
                    Operator(Operator &&) = default ;
                    Operator(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Operator() = default ;
                    Operator& operator=(const Operator &) = default ;
                    Operator& operator=(Operator &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    class Param : public Darabonba::Model {
                    public:
                      friend void to_json(Darabonba::Json& j, const Param& obj) { 
                        DARABONBA_PTR_TO_JSON(Average, average_);
                        DARABONBA_PTR_TO_JSON(BeginType, beginType_);
                        DARABONBA_PTR_TO_JSON(Case_sensitive, caseSensitive_);
                        DARABONBA_PTR_TO_JSON(CheckFirstSentence, checkFirstSentence_);
                        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
                        DARABONBA_PTR_TO_JSON(CompareOperator, compareOperator_);
                        DARABONBA_PTR_TO_JSON(ContextChatMatch, contextChatMatch_);
                        DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
                        DARABONBA_PTR_TO_JSON(EndType, endType_);
                        DARABONBA_PTR_TO_JSON(Excludes, excludes_);
                        DARABONBA_PTR_TO_JSON(FlowNodePrerequisiteParam, flowNodePrerequisiteParam_);
                        DARABONBA_PTR_TO_JSON(From, from_);
                        DARABONBA_PTR_TO_JSON(From_end, fromEnd_);
                        DARABONBA_PTR_TO_JSON(Hit_time, hitTime_);
                        DARABONBA_PTR_TO_JSON(In_sentence, inSentence_);
                        DARABONBA_PTR_TO_JSON(IntentModelCheckParm, intentModelCheckParm_);
                        DARABONBA_PTR_TO_JSON(Interval, interval_);
                        DARABONBA_PTR_TO_JSON(IntervalEnd, intervalEnd_);
                        DARABONBA_PTR_TO_JSON(KeywordExtension, keywordExtension_);
                        DARABONBA_PTR_TO_JSON(KeywordMatchSize, keywordMatchSize_);
                        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
                        DARABONBA_PTR_TO_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
                        DARABONBA_PTR_TO_JSON(MinWordSize, minWordSize_);
                        DARABONBA_PTR_TO_JSON(Near_dialogue, nearDialogue_);
                        DARABONBA_PTR_TO_JSON(NotRegex, notRegex_);
                        DARABONBA_PTR_TO_JSON(Phrase, phrase_);
                        DARABONBA_PTR_TO_JSON(Regex, regex_);
                        DARABONBA_PTR_TO_JSON(Target, target_);
                        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
                      };
                      friend void from_json(const Darabonba::Json& j, Param& obj) { 
                        DARABONBA_PTR_FROM_JSON(Average, average_);
                        DARABONBA_PTR_FROM_JSON(BeginType, beginType_);
                        DARABONBA_PTR_FROM_JSON(Case_sensitive, caseSensitive_);
                        DARABONBA_PTR_FROM_JSON(CheckFirstSentence, checkFirstSentence_);
                        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
                        DARABONBA_PTR_FROM_JSON(CompareOperator, compareOperator_);
                        DARABONBA_PTR_FROM_JSON(ContextChatMatch, contextChatMatch_);
                        DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
                        DARABONBA_PTR_FROM_JSON(EndType, endType_);
                        DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
                        DARABONBA_PTR_FROM_JSON(FlowNodePrerequisiteParam, flowNodePrerequisiteParam_);
                        DARABONBA_PTR_FROM_JSON(From, from_);
                        DARABONBA_PTR_FROM_JSON(From_end, fromEnd_);
                        DARABONBA_PTR_FROM_JSON(Hit_time, hitTime_);
                        DARABONBA_PTR_FROM_JSON(In_sentence, inSentence_);
                        DARABONBA_PTR_FROM_JSON(IntentModelCheckParm, intentModelCheckParm_);
                        DARABONBA_PTR_FROM_JSON(Interval, interval_);
                        DARABONBA_PTR_FROM_JSON(IntervalEnd, intervalEnd_);
                        DARABONBA_PTR_FROM_JSON(KeywordExtension, keywordExtension_);
                        DARABONBA_PTR_FROM_JSON(KeywordMatchSize, keywordMatchSize_);
                        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
                        DARABONBA_PTR_FROM_JSON(MaxEmotionChangeValue, maxEmotionChangeValue_);
                        DARABONBA_PTR_FROM_JSON(MinWordSize, minWordSize_);
                        DARABONBA_PTR_FROM_JSON(Near_dialogue, nearDialogue_);
                        DARABONBA_PTR_FROM_JSON(NotRegex, notRegex_);
                        DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
                        DARABONBA_PTR_FROM_JSON(Regex, regex_);
                        DARABONBA_PTR_FROM_JSON(Target, target_);
                        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
                      };
                      Param() = default ;
                      Param(const Param &) = default ;
                      Param(Param &&) = default ;
                      Param(const Darabonba::Json & obj) { from_json(obj, *this); };
                      virtual ~Param() = default ;
                      Param& operator=(const Param &) = default ;
                      Param& operator=(Param &&) = default ;
                      virtual void validate() const override {
                      };
                      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                      class Keywords : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const Keywords& obj) { 
                          DARABONBA_PTR_TO_JSON(Keyword, keyword_);
                        };
                        friend void from_json(const Darabonba::Json& j, Keywords& obj) { 
                          DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
                        };
                        Keywords() = default ;
                        Keywords(const Keywords &) = default ;
                        Keywords(Keywords &&) = default ;
                        Keywords(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~Keywords() = default ;
                        Keywords& operator=(const Keywords &) = default ;
                        Keywords& operator=(Keywords &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->keyword_ == nullptr; };
                        // keyword Field Functions 
                        bool hasKeyword() const { return this->keyword_ != nullptr;};
                        void deleteKeyword() { this->keyword_ = nullptr;};
                        inline const vector<string> & getKeyword() const { DARABONBA_PTR_GET_CONST(keyword_, vector<string>) };
                        inline vector<string> getKeyword() { DARABONBA_PTR_GET(keyword_, vector<string>) };
                        inline Keywords& setKeyword(const vector<string> & keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };
                        inline Keywords& setKeyword(vector<string> && keyword) { DARABONBA_PTR_SET_RVALUE(keyword_, keyword) };


                      protected:
                        shared_ptr<vector<string>> keyword_ {};
                      };

                      class IntentModelCheckParm : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const IntentModelCheckParm& obj) { 
                          DARABONBA_PTR_TO_JSON(Intents, intents_);
                          DARABONBA_PTR_TO_JSON(ModelScene, modelScene_);
                        };
                        friend void from_json(const Darabonba::Json& j, IntentModelCheckParm& obj) { 
                          DARABONBA_PTR_FROM_JSON(Intents, intents_);
                          DARABONBA_PTR_FROM_JSON(ModelScene, modelScene_);
                        };
                        IntentModelCheckParm() = default ;
                        IntentModelCheckParm(const IntentModelCheckParm &) = default ;
                        IntentModelCheckParm(IntentModelCheckParm &&) = default ;
                        IntentModelCheckParm(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~IntentModelCheckParm() = default ;
                        IntentModelCheckParm& operator=(const IntentModelCheckParm &) = default ;
                        IntentModelCheckParm& operator=(IntentModelCheckParm &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        class Intents : public Darabonba::Model {
                        public:
                          friend void to_json(Darabonba::Json& j, const Intents& obj) { 
                            DARABONBA_PTR_TO_JSON(Intent, intent_);
                          };
                          friend void from_json(const Darabonba::Json& j, Intents& obj) { 
                            DARABONBA_PTR_FROM_JSON(Intent, intent_);
                          };
                          Intents() = default ;
                          Intents(const Intents &) = default ;
                          Intents(Intents &&) = default ;
                          Intents(const Darabonba::Json & obj) { from_json(obj, *this); };
                          virtual ~Intents() = default ;
                          Intents& operator=(const Intents &) = default ;
                          Intents& operator=(Intents &&) = default ;
                          virtual void validate() const override {
                          };
                          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                          class Intent : public Darabonba::Model {
                          public:
                            friend void to_json(Darabonba::Json& j, const Intent& obj) { 
                              DARABONBA_PTR_TO_JSON(Id, id_);
                              DARABONBA_PTR_TO_JSON(Name, name_);
                            };
                            friend void from_json(const Darabonba::Json& j, Intent& obj) { 
                              DARABONBA_PTR_FROM_JSON(Id, id_);
                              DARABONBA_PTR_FROM_JSON(Name, name_);
                            };
                            Intent() = default ;
                            Intent(const Intent &) = default ;
                            Intent(Intent &&) = default ;
                            Intent(const Darabonba::Json & obj) { from_json(obj, *this); };
                            virtual ~Intent() = default ;
                            Intent& operator=(const Intent &) = default ;
                            Intent& operator=(Intent &&) = default ;
                            virtual void validate() const override {
                            };
                            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                            virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
                            // id Field Functions 
                            bool hasId() const { return this->id_ != nullptr;};
                            void deleteId() { this->id_ = nullptr;};
                            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
                            inline Intent& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


                            // name Field Functions 
                            bool hasName() const { return this->name_ != nullptr;};
                            void deleteName() { this->name_ = nullptr;};
                            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                            inline Intent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                          protected:
                            // 意图模型ID
                            shared_ptr<int64_t> id_ {};
                            // 意图模型名称
                            shared_ptr<string> name_ {};
                          };

                          virtual bool empty() const override { return this->intent_ == nullptr; };
                          // intent Field Functions 
                          bool hasIntent() const { return this->intent_ != nullptr;};
                          void deleteIntent() { this->intent_ = nullptr;};
                          inline const vector<Intents::Intent> & getIntent() const { DARABONBA_PTR_GET_CONST(intent_, vector<Intents::Intent>) };
                          inline vector<Intents::Intent> getIntent() { DARABONBA_PTR_GET(intent_, vector<Intents::Intent>) };
                          inline Intents& setIntent(const vector<Intents::Intent> & intent) { DARABONBA_PTR_SET_VALUE(intent_, intent) };
                          inline Intents& setIntent(vector<Intents::Intent> && intent) { DARABONBA_PTR_SET_RVALUE(intent_, intent) };


                        protected:
                          shared_ptr<vector<Intents::Intent>> intent_ {};
                        };

                        virtual bool empty() const override { return this->intents_ == nullptr
        && this->modelScene_ == nullptr; };
                        // intents Field Functions 
                        bool hasIntents() const { return this->intents_ != nullptr;};
                        void deleteIntents() { this->intents_ = nullptr;};
                        inline const IntentModelCheckParm::Intents & getIntents() const { DARABONBA_PTR_GET_CONST(intents_, IntentModelCheckParm::Intents) };
                        inline IntentModelCheckParm::Intents getIntents() { DARABONBA_PTR_GET(intents_, IntentModelCheckParm::Intents) };
                        inline IntentModelCheckParm& setIntents(const IntentModelCheckParm::Intents & intents) { DARABONBA_PTR_SET_VALUE(intents_, intents) };
                        inline IntentModelCheckParm& setIntents(IntentModelCheckParm::Intents && intents) { DARABONBA_PTR_SET_RVALUE(intents_, intents) };


                        // modelScene Field Functions 
                        bool hasModelScene() const { return this->modelScene_ != nullptr;};
                        void deleteModelScene() { this->modelScene_ = nullptr;};
                        inline string getModelScene() const { DARABONBA_PTR_GET_DEFAULT(modelScene_, "") };
                        inline IntentModelCheckParm& setModelScene(string modelScene) { DARABONBA_PTR_SET_VALUE(modelScene_, modelScene) };


                      protected:
                        // 引用的意图模型
                        shared_ptr<IntentModelCheckParm::Intents> intents_ {};
                        // 模型应用的场景 AGENT:客户场景、CUSTOMER:客服场景 (CUSTOMER: 客户场景, AGENT: 坐席场景)
                        shared_ptr<string> modelScene_ {};
                      };

                      class FlowNodePrerequisiteParam : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const FlowNodePrerequisiteParam& obj) { 
                          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
                          DARABONBA_PTR_TO_JSON(NodeMatchStatus, nodeMatchStatus_);
                          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
                        };
                        friend void from_json(const Darabonba::Json& j, FlowNodePrerequisiteParam& obj) { 
                          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
                          DARABONBA_PTR_FROM_JSON(NodeMatchStatus, nodeMatchStatus_);
                          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
                        };
                        FlowNodePrerequisiteParam() = default ;
                        FlowNodePrerequisiteParam(const FlowNodePrerequisiteParam &) = default ;
                        FlowNodePrerequisiteParam(FlowNodePrerequisiteParam &&) = default ;
                        FlowNodePrerequisiteParam(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~FlowNodePrerequisiteParam() = default ;
                        FlowNodePrerequisiteParam& operator=(const FlowNodePrerequisiteParam &) = default ;
                        FlowNodePrerequisiteParam& operator=(FlowNodePrerequisiteParam &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->nodeMatchStatus_ == nullptr && this->nodeName_ == nullptr; };
                        // nodeId Field Functions 
                        bool hasNodeId() const { return this->nodeId_ != nullptr;};
                        void deleteNodeId() { this->nodeId_ = nullptr;};
                        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
                        inline FlowNodePrerequisiteParam& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


                        // nodeMatchStatus Field Functions 
                        bool hasNodeMatchStatus() const { return this->nodeMatchStatus_ != nullptr;};
                        void deleteNodeMatchStatus() { this->nodeMatchStatus_ = nullptr;};
                        inline int32_t getNodeMatchStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeMatchStatus_, 0) };
                        inline FlowNodePrerequisiteParam& setNodeMatchStatus(int32_t nodeMatchStatus) { DARABONBA_PTR_SET_VALUE(nodeMatchStatus_, nodeMatchStatus) };


                        // nodeName Field Functions 
                        bool hasNodeName() const { return this->nodeName_ != nullptr;};
                        void deleteNodeName() { this->nodeName_ = nullptr;};
                        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
                        inline FlowNodePrerequisiteParam& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


                      protected:
                        // 节点id
                        shared_ptr<int64_t> nodeId_ {};
                        // 节点匹配状态。
                        shared_ptr<int32_t> nodeMatchStatus_ {};
                        // 冗余的节点名称
                        shared_ptr<string> nodeName_ {};
                      };

                      class Excludes : public Darabonba::Model {
                      public:
                        friend void to_json(Darabonba::Json& j, const Excludes& obj) { 
                          DARABONBA_PTR_TO_JSON(Exclude, exclude_);
                        };
                        friend void from_json(const Darabonba::Json& j, Excludes& obj) { 
                          DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
                        };
                        Excludes() = default ;
                        Excludes(const Excludes &) = default ;
                        Excludes(Excludes &&) = default ;
                        Excludes(const Darabonba::Json & obj) { from_json(obj, *this); };
                        virtual ~Excludes() = default ;
                        Excludes& operator=(const Excludes &) = default ;
                        Excludes& operator=(Excludes &&) = default ;
                        virtual void validate() const override {
                        };
                        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                        virtual bool empty() const override { return this->exclude_ == nullptr; };
                        // exclude Field Functions 
                        bool hasExclude() const { return this->exclude_ != nullptr;};
                        void deleteExclude() { this->exclude_ = nullptr;};
                        inline const vector<string> & getExclude() const { DARABONBA_PTR_GET_CONST(exclude_, vector<string>) };
                        inline vector<string> getExclude() { DARABONBA_PTR_GET(exclude_, vector<string>) };
                        inline Excludes& setExclude(const vector<string> & exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };
                        inline Excludes& setExclude(vector<string> && exclude) { DARABONBA_PTR_SET_RVALUE(exclude_, exclude) };


                      protected:
                        shared_ptr<vector<string>> exclude_ {};
                      };

                      virtual bool empty() const override { return this->average_ == nullptr
        && this->beginType_ == nullptr && this->caseSensitive_ == nullptr && this->checkFirstSentence_ == nullptr && this->checkType_ == nullptr && this->compareOperator_ == nullptr
        && this->contextChatMatch_ == nullptr && this->delayTime_ == nullptr && this->endType_ == nullptr && this->excludes_ == nullptr && this->flowNodePrerequisiteParam_ == nullptr
        && this->from_ == nullptr && this->fromEnd_ == nullptr && this->hitTime_ == nullptr && this->inSentence_ == nullptr && this->intentModelCheckParm_ == nullptr
        && this->interval_ == nullptr && this->intervalEnd_ == nullptr && this->keywordExtension_ == nullptr && this->keywordMatchSize_ == nullptr && this->keywords_ == nullptr
        && this->maxEmotionChangeValue_ == nullptr && this->minWordSize_ == nullptr && this->nearDialogue_ == nullptr && this->notRegex_ == nullptr && this->phrase_ == nullptr
        && this->regex_ == nullptr && this->target_ == nullptr && this->threshold_ == nullptr; };
                      // average Field Functions 
                      bool hasAverage() const { return this->average_ != nullptr;};
                      void deleteAverage() { this->average_ = nullptr;};
                      inline bool getAverage() const { DARABONBA_PTR_GET_DEFAULT(average_, false) };
                      inline Param& setAverage(bool average) { DARABONBA_PTR_SET_VALUE(average_, average) };


                      // beginType Field Functions 
                      bool hasBeginType() const { return this->beginType_ != nullptr;};
                      void deleteBeginType() { this->beginType_ = nullptr;};
                      inline string getBeginType() const { DARABONBA_PTR_GET_DEFAULT(beginType_, "") };
                      inline Param& setBeginType(string beginType) { DARABONBA_PTR_SET_VALUE(beginType_, beginType) };


                      // caseSensitive Field Functions 
                      bool hasCaseSensitive() const { return this->caseSensitive_ != nullptr;};
                      void deleteCaseSensitive() { this->caseSensitive_ = nullptr;};
                      inline bool getCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(caseSensitive_, false) };
                      inline Param& setCaseSensitive(bool caseSensitive) { DARABONBA_PTR_SET_VALUE(caseSensitive_, caseSensitive) };


                      // checkFirstSentence Field Functions 
                      bool hasCheckFirstSentence() const { return this->checkFirstSentence_ != nullptr;};
                      void deleteCheckFirstSentence() { this->checkFirstSentence_ = nullptr;};
                      inline bool getCheckFirstSentence() const { DARABONBA_PTR_GET_DEFAULT(checkFirstSentence_, false) };
                      inline Param& setCheckFirstSentence(bool checkFirstSentence) { DARABONBA_PTR_SET_VALUE(checkFirstSentence_, checkFirstSentence) };


                      // checkType Field Functions 
                      bool hasCheckType() const { return this->checkType_ != nullptr;};
                      void deleteCheckType() { this->checkType_ = nullptr;};
                      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
                      inline Param& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


                      // compareOperator Field Functions 
                      bool hasCompareOperator() const { return this->compareOperator_ != nullptr;};
                      void deleteCompareOperator() { this->compareOperator_ = nullptr;};
                      inline string getCompareOperator() const { DARABONBA_PTR_GET_DEFAULT(compareOperator_, "") };
                      inline Param& setCompareOperator(string compareOperator) { DARABONBA_PTR_SET_VALUE(compareOperator_, compareOperator) };


                      // contextChatMatch Field Functions 
                      bool hasContextChatMatch() const { return this->contextChatMatch_ != nullptr;};
                      void deleteContextChatMatch() { this->contextChatMatch_ = nullptr;};
                      inline bool getContextChatMatch() const { DARABONBA_PTR_GET_DEFAULT(contextChatMatch_, false) };
                      inline Param& setContextChatMatch(bool contextChatMatch) { DARABONBA_PTR_SET_VALUE(contextChatMatch_, contextChatMatch) };


                      // delayTime Field Functions 
                      bool hasDelayTime() const { return this->delayTime_ != nullptr;};
                      void deleteDelayTime() { this->delayTime_ = nullptr;};
                      inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
                      inline Param& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


                      // endType Field Functions 
                      bool hasEndType() const { return this->endType_ != nullptr;};
                      void deleteEndType() { this->endType_ = nullptr;};
                      inline string getEndType() const { DARABONBA_PTR_GET_DEFAULT(endType_, "") };
                      inline Param& setEndType(string endType) { DARABONBA_PTR_SET_VALUE(endType_, endType) };


                      // excludes Field Functions 
                      bool hasExcludes() const { return this->excludes_ != nullptr;};
                      void deleteExcludes() { this->excludes_ = nullptr;};
                      inline const Param::Excludes & getExcludes() const { DARABONBA_PTR_GET_CONST(excludes_, Param::Excludes) };
                      inline Param::Excludes getExcludes() { DARABONBA_PTR_GET(excludes_, Param::Excludes) };
                      inline Param& setExcludes(const Param::Excludes & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
                      inline Param& setExcludes(Param::Excludes && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


                      // flowNodePrerequisiteParam Field Functions 
                      bool hasFlowNodePrerequisiteParam() const { return this->flowNodePrerequisiteParam_ != nullptr;};
                      void deleteFlowNodePrerequisiteParam() { this->flowNodePrerequisiteParam_ = nullptr;};
                      inline const Param::FlowNodePrerequisiteParam & getFlowNodePrerequisiteParam() const { DARABONBA_PTR_GET_CONST(flowNodePrerequisiteParam_, Param::FlowNodePrerequisiteParam) };
                      inline Param::FlowNodePrerequisiteParam getFlowNodePrerequisiteParam() { DARABONBA_PTR_GET(flowNodePrerequisiteParam_, Param::FlowNodePrerequisiteParam) };
                      inline Param& setFlowNodePrerequisiteParam(const Param::FlowNodePrerequisiteParam & flowNodePrerequisiteParam) { DARABONBA_PTR_SET_VALUE(flowNodePrerequisiteParam_, flowNodePrerequisiteParam) };
                      inline Param& setFlowNodePrerequisiteParam(Param::FlowNodePrerequisiteParam && flowNodePrerequisiteParam) { DARABONBA_PTR_SET_RVALUE(flowNodePrerequisiteParam_, flowNodePrerequisiteParam) };


                      // from Field Functions 
                      bool hasFrom() const { return this->from_ != nullptr;};
                      void deleteFrom() { this->from_ = nullptr;};
                      inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
                      inline Param& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                      // fromEnd Field Functions 
                      bool hasFromEnd() const { return this->fromEnd_ != nullptr;};
                      void deleteFromEnd() { this->fromEnd_ = nullptr;};
                      inline bool getFromEnd() const { DARABONBA_PTR_GET_DEFAULT(fromEnd_, false) };
                      inline Param& setFromEnd(bool fromEnd) { DARABONBA_PTR_SET_VALUE(fromEnd_, fromEnd) };


                      // hitTime Field Functions 
                      bool hasHitTime() const { return this->hitTime_ != nullptr;};
                      void deleteHitTime() { this->hitTime_ = nullptr;};
                      inline int32_t getHitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
                      inline Param& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


                      // inSentence Field Functions 
                      bool hasInSentence() const { return this->inSentence_ != nullptr;};
                      void deleteInSentence() { this->inSentence_ = nullptr;};
                      inline bool getInSentence() const { DARABONBA_PTR_GET_DEFAULT(inSentence_, false) };
                      inline Param& setInSentence(bool inSentence) { DARABONBA_PTR_SET_VALUE(inSentence_, inSentence) };


                      // intentModelCheckParm Field Functions 
                      bool hasIntentModelCheckParm() const { return this->intentModelCheckParm_ != nullptr;};
                      void deleteIntentModelCheckParm() { this->intentModelCheckParm_ = nullptr;};
                      inline const Param::IntentModelCheckParm & getIntentModelCheckParm() const { DARABONBA_PTR_GET_CONST(intentModelCheckParm_, Param::IntentModelCheckParm) };
                      inline Param::IntentModelCheckParm getIntentModelCheckParm() { DARABONBA_PTR_GET(intentModelCheckParm_, Param::IntentModelCheckParm) };
                      inline Param& setIntentModelCheckParm(const Param::IntentModelCheckParm & intentModelCheckParm) { DARABONBA_PTR_SET_VALUE(intentModelCheckParm_, intentModelCheckParm) };
                      inline Param& setIntentModelCheckParm(Param::IntentModelCheckParm && intentModelCheckParm) { DARABONBA_PTR_SET_RVALUE(intentModelCheckParm_, intentModelCheckParm) };


                      // interval Field Functions 
                      bool hasInterval() const { return this->interval_ != nullptr;};
                      void deleteInterval() { this->interval_ = nullptr;};
                      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
                      inline Param& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


                      // intervalEnd Field Functions 
                      bool hasIntervalEnd() const { return this->intervalEnd_ != nullptr;};
                      void deleteIntervalEnd() { this->intervalEnd_ = nullptr;};
                      inline int32_t getIntervalEnd() const { DARABONBA_PTR_GET_DEFAULT(intervalEnd_, 0) };
                      inline Param& setIntervalEnd(int32_t intervalEnd) { DARABONBA_PTR_SET_VALUE(intervalEnd_, intervalEnd) };


                      // keywordExtension Field Functions 
                      bool hasKeywordExtension() const { return this->keywordExtension_ != nullptr;};
                      void deleteKeywordExtension() { this->keywordExtension_ = nullptr;};
                      inline int32_t getKeywordExtension() const { DARABONBA_PTR_GET_DEFAULT(keywordExtension_, 0) };
                      inline Param& setKeywordExtension(int32_t keywordExtension) { DARABONBA_PTR_SET_VALUE(keywordExtension_, keywordExtension) };


                      // keywordMatchSize Field Functions 
                      bool hasKeywordMatchSize() const { return this->keywordMatchSize_ != nullptr;};
                      void deleteKeywordMatchSize() { this->keywordMatchSize_ = nullptr;};
                      inline int32_t getKeywordMatchSize() const { DARABONBA_PTR_GET_DEFAULT(keywordMatchSize_, 0) };
                      inline Param& setKeywordMatchSize(int32_t keywordMatchSize) { DARABONBA_PTR_SET_VALUE(keywordMatchSize_, keywordMatchSize) };


                      // keywords Field Functions 
                      bool hasKeywords() const { return this->keywords_ != nullptr;};
                      void deleteKeywords() { this->keywords_ = nullptr;};
                      inline const Param::Keywords & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, Param::Keywords) };
                      inline Param::Keywords getKeywords() { DARABONBA_PTR_GET(keywords_, Param::Keywords) };
                      inline Param& setKeywords(const Param::Keywords & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
                      inline Param& setKeywords(Param::Keywords && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


                      // maxEmotionChangeValue Field Functions 
                      bool hasMaxEmotionChangeValue() const { return this->maxEmotionChangeValue_ != nullptr;};
                      void deleteMaxEmotionChangeValue() { this->maxEmotionChangeValue_ = nullptr;};
                      inline int32_t getMaxEmotionChangeValue() const { DARABONBA_PTR_GET_DEFAULT(maxEmotionChangeValue_, 0) };
                      inline Param& setMaxEmotionChangeValue(int32_t maxEmotionChangeValue) { DARABONBA_PTR_SET_VALUE(maxEmotionChangeValue_, maxEmotionChangeValue) };


                      // minWordSize Field Functions 
                      bool hasMinWordSize() const { return this->minWordSize_ != nullptr;};
                      void deleteMinWordSize() { this->minWordSize_ = nullptr;};
                      inline int32_t getMinWordSize() const { DARABONBA_PTR_GET_DEFAULT(minWordSize_, 0) };
                      inline Param& setMinWordSize(int32_t minWordSize) { DARABONBA_PTR_SET_VALUE(minWordSize_, minWordSize) };


                      // nearDialogue Field Functions 
                      bool hasNearDialogue() const { return this->nearDialogue_ != nullptr;};
                      void deleteNearDialogue() { this->nearDialogue_ = nullptr;};
                      inline bool getNearDialogue() const { DARABONBA_PTR_GET_DEFAULT(nearDialogue_, false) };
                      inline Param& setNearDialogue(bool nearDialogue) { DARABONBA_PTR_SET_VALUE(nearDialogue_, nearDialogue) };


                      // notRegex Field Functions 
                      bool hasNotRegex() const { return this->notRegex_ != nullptr;};
                      void deleteNotRegex() { this->notRegex_ = nullptr;};
                      inline string getNotRegex() const { DARABONBA_PTR_GET_DEFAULT(notRegex_, "") };
                      inline Param& setNotRegex(string notRegex) { DARABONBA_PTR_SET_VALUE(notRegex_, notRegex) };


                      // phrase Field Functions 
                      bool hasPhrase() const { return this->phrase_ != nullptr;};
                      void deletePhrase() { this->phrase_ = nullptr;};
                      inline string getPhrase() const { DARABONBA_PTR_GET_DEFAULT(phrase_, "") };
                      inline Param& setPhrase(string phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };


                      // regex Field Functions 
                      bool hasRegex() const { return this->regex_ != nullptr;};
                      void deleteRegex() { this->regex_ = nullptr;};
                      inline string getRegex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
                      inline Param& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


                      // target Field Functions 
                      bool hasTarget() const { return this->target_ != nullptr;};
                      void deleteTarget() { this->target_ = nullptr;};
                      inline int32_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
                      inline Param& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


                      // threshold Field Functions 
                      bool hasThreshold() const { return this->threshold_ != nullptr;};
                      void deleteThreshold() { this->threshold_ = nullptr;};
                      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
                      inline Param& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


                    protected:
                      // 语速检测，是否计算整个对话平均语速，默认false
                      shared_ptr<bool> average_ {};
                      // 时长算子，时长计算开始类型，录音开始，还是某句对话开始
                      shared_ptr<string> beginType_ {};
                      // 区分大小写
                      shared_ptr<bool> caseSensitive_ {};
                      // 静音检测：要不要检测第一句话
                      shared_ptr<bool> checkFirstSentence_ {};
                      // 检测方式，1 相邻句能量波动 2 最大能量跨度 默认1
                      shared_ptr<int32_t> checkType_ {};
                      // 大于，还是小于，gt/lt
                      shared_ptr<string> compareOperator_ {};
                      // 是否单句话匹配；
                      shared_ptr<bool> contextChatMatch_ {};
                      // 抢话算子 延时时长
                      shared_ptr<int32_t> delayTime_ {};
                      // 时长算子，时长计算结束类型，录音结束，还是某句对话结束
                      shared_ptr<string> endType_ {};
                      // 上下文重复算子：排除掉某些对话
                      shared_ptr<Param::Excludes> excludes_ {};
                      // 流程节点前置条件参数
                      shared_ptr<Param::FlowNodePrerequisiteParam> flowNodePrerequisiteParam_ {};
                      // 上下文重复算子：检测当前句的前from句是否有重复；0表示前面的所有句
                      shared_ptr<int32_t> from_ {};
                      // from_end
                      shared_ptr<bool> fromEnd_ {};
                      // 上下文重复算子：重复几次
                      shared_ptr<int32_t> hitTime_ {};
                      // 生效句子， true单个句子，false多个句子
                      shared_ptr<bool> inSentence_ {};
                      // 意图模型检查参数
                      shared_ptr<Param::IntentModelCheckParm> intentModelCheckParm_ {};
                      // interval代表区间范围开始
                      shared_ptr<int32_t> interval_ {};
                      // intervalEnd 代表区间范围结束
                      shared_ptr<int32_t> intervalEnd_ {};
                      // 关键字扩展
                      shared_ptr<int32_t> keywordExtension_ {};
                      // 匹配到的关键字数量
                      shared_ptr<int32_t> keywordMatchSize_ {};
                      // 关键词
                      shared_ptr<Param::Keywords> keywords_ {};
                      // 能量值变化，默认3, 1~9
                      shared_ptr<int32_t> maxEmotionChangeValue_ {};
                      // 句子中最少字数，小于此字数的句子不检查
                      shared_ptr<int32_t> minWordSize_ {};
                      // true表示取不同角色相邻的两句话，false表示取不同角色的第一句话比较响应时间（默认）
                      shared_ptr<bool> nearDialogue_ {};
                      // 排除的正则表达式
                      shared_ptr<string> notRegex_ {};
                      // 语句
                      shared_ptr<string> phrase_ {};
                      // 正则表达式
                      shared_ptr<string> regex_ {};
                      // target
                      shared_ptr<int32_t> target_ {};
                      // 阈值
                      shared_ptr<float> threshold_ {};
                    };

                    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->oid_ == nullptr && this->param_ == nullptr && this->type_ == nullptr; };
                    // id Field Functions 
                    bool hasId() const { return this->id_ != nullptr;};
                    void deleteId() { this->id_ = nullptr;};
                    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
                    inline Operator& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


                    // name Field Functions 
                    bool hasName() const { return this->name_ != nullptr;};
                    void deleteName() { this->name_ = nullptr;};
                    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                    inline Operator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                    // oid Field Functions 
                    bool hasOid() const { return this->oid_ != nullptr;};
                    void deleteOid() { this->oid_ = nullptr;};
                    inline string getOid() const { DARABONBA_PTR_GET_DEFAULT(oid_, "") };
                    inline Operator& setOid(string oid) { DARABONBA_PTR_SET_VALUE(oid_, oid) };


                    // param Field Functions 
                    bool hasParam() const { return this->param_ != nullptr;};
                    void deleteParam() { this->param_ = nullptr;};
                    inline const Operator::Param & getParam() const { DARABONBA_PTR_GET_CONST(param_, Operator::Param) };
                    inline Operator::Param getParam() { DARABONBA_PTR_GET(param_, Operator::Param) };
                    inline Operator& setParam(const Operator::Param & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
                    inline Operator& setParam(Operator::Param && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


                    // type Field Functions 
                    bool hasType() const { return this->type_ != nullptr;};
                    void deleteType() { this->type_ = nullptr;};
                    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                    inline Operator& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                  protected:
                    // 主键id
                    shared_ptr<int64_t> id_ {};
                    // 算子名
                    shared_ptr<string> name_ {};
                    // 可能是主键id，也可能是前端生成的id
                    shared_ptr<string> oid_ {};
                    // 算子参数
                    shared_ptr<Operator::Param> param_ {};
                    // 算子类别
                    shared_ptr<string> type_ {};
                  };

                  virtual bool empty() const override { return this->operator_ == nullptr; };
                  // operator Field Functions 
                  bool hasOperator() const { return this->operator_ != nullptr;};
                  void deleteOperator() { this->operator_ = nullptr;};
                  inline const vector<Operators::Operator> & getOperator() const { DARABONBA_PTR_GET_CONST(operator_, vector<Operators::Operator>) };
                  inline vector<Operators::Operator> getOperator() { DARABONBA_PTR_GET(operator_, vector<Operators::Operator>) };
                  inline Operators& setOperator(const vector<Operators::Operator> & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
                  inline Operators& setOperator(vector<Operators::Operator> && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


                protected:
                  shared_ptr<vector<Operators::Operator>> operator_ {};
                };

                class CheckRange : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const CheckRange& obj) { 
                    DARABONBA_PTR_TO_JSON(Absolute, absolute_);
                    DARABONBA_PTR_TO_JSON(AllSentencesSatisfy, allSentencesSatisfy_);
                    DARABONBA_PTR_TO_JSON(Anchor, anchor_);
                    DARABONBA_PTR_TO_JSON(Range, range_);
                    DARABONBA_PTR_TO_JSON(Role, role_);
                    DARABONBA_PTR_TO_JSON(RoleId, roleId_);
                    DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
                  };
                  friend void from_json(const Darabonba::Json& j, CheckRange& obj) { 
                    DARABONBA_PTR_FROM_JSON(Absolute, absolute_);
                    DARABONBA_PTR_FROM_JSON(AllSentencesSatisfy, allSentencesSatisfy_);
                    DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
                    DARABONBA_PTR_FROM_JSON(Range, range_);
                    DARABONBA_PTR_FROM_JSON(Role, role_);
                    DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
                    DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
                  };
                  CheckRange() = default ;
                  CheckRange(const CheckRange &) = default ;
                  CheckRange(CheckRange &&) = default ;
                  CheckRange(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~CheckRange() = default ;
                  CheckRange& operator=(const CheckRange &) = default ;
                  CheckRange& operator=(CheckRange &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class TimeRange : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const TimeRange& obj) { 
                      DARABONBA_PTR_TO_JSON(From, from_);
                      DARABONBA_PTR_TO_JSON(To, to_);
                    };
                    friend void from_json(const Darabonba::Json& j, TimeRange& obj) { 
                      DARABONBA_PTR_FROM_JSON(From, from_);
                      DARABONBA_PTR_FROM_JSON(To, to_);
                    };
                    TimeRange() = default ;
                    TimeRange(const TimeRange &) = default ;
                    TimeRange(TimeRange &&) = default ;
                    TimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~TimeRange() = default ;
                    TimeRange& operator=(const TimeRange &) = default ;
                    TimeRange& operator=(TimeRange &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->from_ == nullptr
        && this->to_ == nullptr; };
                    // from Field Functions 
                    bool hasFrom() const { return this->from_ != nullptr;};
                    void deleteFrom() { this->from_ = nullptr;};
                    inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
                    inline TimeRange& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                    // to Field Functions 
                    bool hasTo() const { return this->to_ != nullptr;};
                    void deleteTo() { this->to_ = nullptr;};
                    inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
                    inline TimeRange& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                  protected:
                    shared_ptr<int64_t> from_ {};
                    shared_ptr<int64_t> to_ {};
                  };

                  class Range : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Range& obj) { 
                      DARABONBA_PTR_TO_JSON(From, from_);
                      DARABONBA_PTR_TO_JSON(To, to_);
                    };
                    friend void from_json(const Darabonba::Json& j, Range& obj) { 
                      DARABONBA_PTR_FROM_JSON(From, from_);
                      DARABONBA_PTR_FROM_JSON(To, to_);
                    };
                    Range() = default ;
                    Range(const Range &) = default ;
                    Range(Range &&) = default ;
                    Range(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Range() = default ;
                    Range& operator=(const Range &) = default ;
                    Range& operator=(Range &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->from_ == nullptr
        && this->to_ == nullptr; };
                    // from Field Functions 
                    bool hasFrom() const { return this->from_ != nullptr;};
                    void deleteFrom() { this->from_ = nullptr;};
                    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
                    inline Range& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                    // to Field Functions 
                    bool hasTo() const { return this->to_ != nullptr;};
                    void deleteTo() { this->to_ = nullptr;};
                    inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
                    inline Range& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                  protected:
                    // 对话开始索引
                    shared_ptr<int32_t> from_ {};
                    // 对话结束索引
                    shared_ptr<int32_t> to_ {};
                  };

                  class Anchor : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Anchor& obj) { 
                      DARABONBA_PTR_TO_JSON(Cid, cid_);
                      DARABONBA_PTR_TO_JSON(Hit_time, hitTime_);
                      DARABONBA_PTR_TO_JSON(Location, location_);
                    };
                    friend void from_json(const Darabonba::Json& j, Anchor& obj) { 
                      DARABONBA_PTR_FROM_JSON(Cid, cid_);
                      DARABONBA_PTR_FROM_JSON(Hit_time, hitTime_);
                      DARABONBA_PTR_FROM_JSON(Location, location_);
                    };
                    Anchor() = default ;
                    Anchor(const Anchor &) = default ;
                    Anchor(Anchor &&) = default ;
                    Anchor(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Anchor() = default ;
                    Anchor& operator=(const Anchor &) = default ;
                    Anchor& operator=(Anchor &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->cid_ == nullptr
        && this->hitTime_ == nullptr && this->location_ == nullptr; };
                    // cid Field Functions 
                    bool hasCid() const { return this->cid_ != nullptr;};
                    void deleteCid() { this->cid_ = nullptr;};
                    inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
                    inline Anchor& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


                    // hitTime Field Functions 
                    bool hasHitTime() const { return this->hitTime_ != nullptr;};
                    void deleteHitTime() { this->hitTime_ = nullptr;};
                    inline int32_t getHitTime() const { DARABONBA_PTR_GET_DEFAULT(hitTime_, 0) };
                    inline Anchor& setHitTime(int32_t hitTime) { DARABONBA_PTR_SET_VALUE(hitTime_, hitTime) };


                    // location Field Functions 
                    bool hasLocation() const { return this->location_ != nullptr;};
                    void deleteLocation() { this->location_ = nullptr;};
                    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
                    inline Anchor& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


                  protected:
                    // 条件ID
                    shared_ptr<string> cid_ {};
                    // 命中次数
                    shared_ptr<int32_t> hitTime_ {};
                    // 位置
                    shared_ptr<string> location_ {};
                  };

                  virtual bool empty() const override { return this->absolute_ == nullptr
        && this->allSentencesSatisfy_ == nullptr && this->anchor_ == nullptr && this->range_ == nullptr && this->role_ == nullptr && this->roleId_ == nullptr
        && this->timeRange_ == nullptr; };
                  // absolute Field Functions 
                  bool hasAbsolute() const { return this->absolute_ != nullptr;};
                  void deleteAbsolute() { this->absolute_ = nullptr;};
                  inline bool getAbsolute() const { DARABONBA_PTR_GET_DEFAULT(absolute_, false) };
                  inline CheckRange& setAbsolute(bool absolute) { DARABONBA_PTR_SET_VALUE(absolute_, absolute) };


                  // allSentencesSatisfy Field Functions 
                  bool hasAllSentencesSatisfy() const { return this->allSentencesSatisfy_ != nullptr;};
                  void deleteAllSentencesSatisfy() { this->allSentencesSatisfy_ = nullptr;};
                  inline bool getAllSentencesSatisfy() const { DARABONBA_PTR_GET_DEFAULT(allSentencesSatisfy_, false) };
                  inline CheckRange& setAllSentencesSatisfy(bool allSentencesSatisfy) { DARABONBA_PTR_SET_VALUE(allSentencesSatisfy_, allSentencesSatisfy) };


                  // anchor Field Functions 
                  bool hasAnchor() const { return this->anchor_ != nullptr;};
                  void deleteAnchor() { this->anchor_ = nullptr;};
                  inline const CheckRange::Anchor & getAnchor() const { DARABONBA_PTR_GET_CONST(anchor_, CheckRange::Anchor) };
                  inline CheckRange::Anchor getAnchor() { DARABONBA_PTR_GET(anchor_, CheckRange::Anchor) };
                  inline CheckRange& setAnchor(const CheckRange::Anchor & anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };
                  inline CheckRange& setAnchor(CheckRange::Anchor && anchor) { DARABONBA_PTR_SET_RVALUE(anchor_, anchor) };


                  // range Field Functions 
                  bool hasRange() const { return this->range_ != nullptr;};
                  void deleteRange() { this->range_ = nullptr;};
                  inline const CheckRange::Range & getRange() const { DARABONBA_PTR_GET_CONST(range_, CheckRange::Range) };
                  inline CheckRange::Range getRange() { DARABONBA_PTR_GET(range_, CheckRange::Range) };
                  inline CheckRange& setRange(const CheckRange::Range & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
                  inline CheckRange& setRange(CheckRange::Range && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


                  // role Field Functions 
                  bool hasRole() const { return this->role_ != nullptr;};
                  void deleteRole() { this->role_ = nullptr;};
                  inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
                  inline CheckRange& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


                  // roleId Field Functions 
                  bool hasRoleId() const { return this->roleId_ != nullptr;};
                  void deleteRoleId() { this->roleId_ = nullptr;};
                  inline int32_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0) };
                  inline CheckRange& setRoleId(int32_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


                  // timeRange Field Functions 
                  bool hasTimeRange() const { return this->timeRange_ != nullptr;};
                  void deleteTimeRange() { this->timeRange_ = nullptr;};
                  inline const CheckRange::TimeRange & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, CheckRange::TimeRange) };
                  inline CheckRange::TimeRange getTimeRange() { DARABONBA_PTR_GET(timeRange_, CheckRange::TimeRange) };
                  inline CheckRange& setTimeRange(const CheckRange::TimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
                  inline CheckRange& setTimeRange(CheckRange::TimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


                protected:
                  // false: 相对位置; 会结合anchor以及角色来决定句子位置
                  shared_ptr<bool> absolute_ {};
                  // true: 每句话都必须满足条件；
                  shared_ptr<bool> allSentencesSatisfy_ {};
                  // 前置后置条件
                  shared_ptr<CheckRange::Anchor> anchor_ {};
                  // 相对范围
                  shared_ptr<CheckRange::Range> range_ {};
                  // 对应 RoleType.type
                  shared_ptr<string> role_ {};
                  // 对应 RoleType.id
                  shared_ptr<int32_t> roleId_ {};
                  shared_ptr<CheckRange::TimeRange> timeRange_ {};
                };

                virtual bool empty() const override { return this->checkRange_ == nullptr
        && this->cid_ == nullptr && this->exclusion_ == nullptr && this->id_ == nullptr && this->lambda_ == nullptr && this->operators_ == nullptr
        && this->rid_ == nullptr; };
                // checkRange Field Functions 
                bool hasCheckRange() const { return this->checkRange_ != nullptr;};
                void deleteCheckRange() { this->checkRange_ = nullptr;};
                inline const ConditionsItem::CheckRange & getCheckRange() const { DARABONBA_PTR_GET_CONST(checkRange_, ConditionsItem::CheckRange) };
                inline ConditionsItem::CheckRange getCheckRange() { DARABONBA_PTR_GET(checkRange_, ConditionsItem::CheckRange) };
                inline ConditionsItem& setCheckRange(const ConditionsItem::CheckRange & checkRange) { DARABONBA_PTR_SET_VALUE(checkRange_, checkRange) };
                inline ConditionsItem& setCheckRange(ConditionsItem::CheckRange && checkRange) { DARABONBA_PTR_SET_RVALUE(checkRange_, checkRange) };


                // cid Field Functions 
                bool hasCid() const { return this->cid_ != nullptr;};
                void deleteCid() { this->cid_ = nullptr;};
                inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
                inline ConditionsItem& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


                // exclusion Field Functions 
                bool hasExclusion() const { return this->exclusion_ != nullptr;};
                void deleteExclusion() { this->exclusion_ = nullptr;};
                inline int32_t getExclusion() const { DARABONBA_PTR_GET_DEFAULT(exclusion_, 0) };
                inline ConditionsItem& setExclusion(int32_t exclusion) { DARABONBA_PTR_SET_VALUE(exclusion_, exclusion) };


                // id Field Functions 
                bool hasId() const { return this->id_ != nullptr;};
                void deleteId() { this->id_ = nullptr;};
                inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
                inline ConditionsItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


                // lambda Field Functions 
                bool hasLambda() const { return this->lambda_ != nullptr;};
                void deleteLambda() { this->lambda_ = nullptr;};
                inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
                inline ConditionsItem& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


                // operators Field Functions 
                bool hasOperators() const { return this->operators_ != nullptr;};
                void deleteOperators() { this->operators_ = nullptr;};
                inline const ConditionsItem::Operators & getOperators() const { DARABONBA_PTR_GET_CONST(operators_, ConditionsItem::Operators) };
                inline ConditionsItem::Operators getOperators() { DARABONBA_PTR_GET(operators_, ConditionsItem::Operators) };
                inline ConditionsItem& setOperators(const ConditionsItem::Operators & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
                inline ConditionsItem& setOperators(ConditionsItem::Operators && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


                // rid Field Functions 
                bool hasRid() const { return this->rid_ != nullptr;};
                void deleteRid() { this->rid_ = nullptr;};
                inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
                inline ConditionsItem& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


              protected:
                // 检测范围
                shared_ptr<ConditionsItem::CheckRange> checkRange_ {};
                // 条件id，可能是db中的主键，也可能是转换成的a, b, c
                shared_ptr<string> cid_ {};
                // 排除
                shared_ptr<int32_t> exclusion_ {};
                // 在db中的主键
                shared_ptr<int64_t> id_ {};
                // Lambda表达式：例如:a&&b
                shared_ptr<string> lambda_ {};
                // 算子列表
                shared_ptr<ConditionsItem::Operators> operators_ {};
                // 条件所属的规则id
                shared_ptr<string> rid_ {};
              };

              virtual bool empty() const override { return this->conditions_ == nullptr; };
              // conditions Field Functions 
              bool hasConditions() const { return this->conditions_ != nullptr;};
              void deleteConditions() { this->conditions_ = nullptr;};
              inline const vector<Conditions::ConditionsItem> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Conditions::ConditionsItem>) };
              inline vector<Conditions::ConditionsItem> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Conditions::ConditionsItem>) };
              inline Conditions& setConditions(const vector<Conditions::ConditionsItem> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
              inline Conditions& setConditions(vector<Conditions::ConditionsItem> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


            protected:
              shared_ptr<vector<Conditions::ConditionsItem>> conditions_ {};
            };

            virtual bool empty() const override { return this->conditions_ == nullptr
        && this->hits_ == nullptr && this->name_ == nullptr && this->reviewResult_ == nullptr && this->rid_ == nullptr && this->schemeId_ == nullptr
        && this->schemeVersion_ == nullptr && this->score_ == nullptr && this->type_ == nullptr; };
            // conditions Field Functions 
            bool hasConditions() const { return this->conditions_ != nullptr;};
            void deleteConditions() { this->conditions_ = nullptr;};
            inline const HitResultItem::Conditions & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, HitResultItem::Conditions) };
            inline HitResultItem::Conditions getConditions() { DARABONBA_PTR_GET(conditions_, HitResultItem::Conditions) };
            inline HitResultItem& setConditions(const HitResultItem::Conditions & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
            inline HitResultItem& setConditions(HitResultItem::Conditions && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


            // hits Field Functions 
            bool hasHits() const { return this->hits_ != nullptr;};
            void deleteHits() { this->hits_ = nullptr;};
            inline const HitResultItem::Hits & getHits() const { DARABONBA_PTR_GET_CONST(hits_, HitResultItem::Hits) };
            inline HitResultItem::Hits getHits() { DARABONBA_PTR_GET(hits_, HitResultItem::Hits) };
            inline HitResultItem& setHits(const HitResultItem::Hits & hits) { DARABONBA_PTR_SET_VALUE(hits_, hits) };
            inline HitResultItem& setHits(HitResultItem::Hits && hits) { DARABONBA_PTR_SET_RVALUE(hits_, hits) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline HitResultItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // reviewResult Field Functions 
            bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
            void deleteReviewResult() { this->reviewResult_ = nullptr;};
            inline int32_t getReviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
            inline HitResultItem& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


            // rid Field Functions 
            bool hasRid() const { return this->rid_ != nullptr;};
            void deleteRid() { this->rid_ = nullptr;};
            inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
            inline HitResultItem& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


            // schemeId Field Functions 
            bool hasSchemeId() const { return this->schemeId_ != nullptr;};
            void deleteSchemeId() { this->schemeId_ = nullptr;};
            inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
            inline HitResultItem& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


            // schemeVersion Field Functions 
            bool hasSchemeVersion() const { return this->schemeVersion_ != nullptr;};
            void deleteSchemeVersion() { this->schemeVersion_ = nullptr;};
            inline int64_t getSchemeVersion() const { DARABONBA_PTR_GET_DEFAULT(schemeVersion_, 0L) };
            inline HitResultItem& setSchemeVersion(int64_t schemeVersion) { DARABONBA_PTR_SET_VALUE(schemeVersion_, schemeVersion) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
            inline HitResultItem& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline HitResultItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<HitResultItem::Conditions> conditions_ {};
            shared_ptr<HitResultItem::Hits> hits_ {};
            shared_ptr<string> name_ {};
            shared_ptr<int32_t> reviewResult_ {};
            shared_ptr<string> rid_ {};
            shared_ptr<int64_t> schemeId_ {};
            shared_ptr<int64_t> schemeVersion_ {};
            shared_ptr<int32_t> score_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->hitResult_ == nullptr; };
          // hitResult Field Functions 
          bool hasHitResult() const { return this->hitResult_ != nullptr;};
          void deleteHitResult() { this->hitResult_ = nullptr;};
          inline const vector<HitResult::HitResultItem> & getHitResult() const { DARABONBA_PTR_GET_CONST(hitResult_, vector<HitResult::HitResultItem>) };
          inline vector<HitResult::HitResultItem> getHitResult() { DARABONBA_PTR_GET(hitResult_, vector<HitResult::HitResultItem>) };
          inline HitResult& setHitResult(const vector<HitResult::HitResultItem> & hitResult) { DARABONBA_PTR_SET_VALUE(hitResult_, hitResult) };
          inline HitResult& setHitResult(vector<HitResult::HitResultItem> && hitResult) { DARABONBA_PTR_SET_RVALUE(hitResult_, hitResult) };


        protected:
          shared_ptr<vector<HitResult::HitResultItem>> hitResult_ {};
        };

        class AsrResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AsrResult& obj) { 
            DARABONBA_PTR_TO_JSON(AsrResult, asrResult_);
          };
          friend void from_json(const Darabonba::Json& j, AsrResult& obj) { 
            DARABONBA_PTR_FROM_JSON(AsrResult, asrResult_);
          };
          AsrResult() = default ;
          AsrResult(const AsrResult &) = default ;
          AsrResult(AsrResult &&) = default ;
          AsrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AsrResult() = default ;
          AsrResult& operator=(const AsrResult &) = default ;
          AsrResult& operator=(AsrResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AsrResultItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AsrResultItem& obj) { 
              DARABONBA_PTR_TO_JSON(Begin, begin_);
              DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
              DARABONBA_PTR_TO_JSON(End, end_);
              DARABONBA_PTR_TO_JSON(Identity, identity_);
              DARABONBA_PTR_TO_JSON(Role, role_);
              DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
              DARABONBA_PTR_TO_JSON(Words, words_);
            };
            friend void from_json(const Darabonba::Json& j, AsrResultItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Begin, begin_);
              DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
              DARABONBA_PTR_FROM_JSON(End, end_);
              DARABONBA_PTR_FROM_JSON(Identity, identity_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
              DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
              DARABONBA_PTR_FROM_JSON(Words, words_);
            };
            AsrResultItem() = default ;
            AsrResultItem(const AsrResultItem &) = default ;
            AsrResultItem(AsrResultItem &&) = default ;
            AsrResultItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AsrResultItem() = default ;
            AsrResultItem& operator=(const AsrResultItem &) = default ;
            AsrResultItem& operator=(AsrResultItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->begin_ == nullptr
        && this->emotionValue_ == nullptr && this->end_ == nullptr && this->identity_ == nullptr && this->role_ == nullptr && this->speechRate_ == nullptr
        && this->words_ == nullptr; };
            // begin Field Functions 
            bool hasBegin() const { return this->begin_ != nullptr;};
            void deleteBegin() { this->begin_ = nullptr;};
            inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
            inline AsrResultItem& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


            // emotionValue Field Functions 
            bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
            void deleteEmotionValue() { this->emotionValue_ = nullptr;};
            inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
            inline AsrResultItem& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


            // end Field Functions 
            bool hasEnd() const { return this->end_ != nullptr;};
            void deleteEnd() { this->end_ = nullptr;};
            inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
            inline AsrResultItem& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


            // identity Field Functions 
            bool hasIdentity() const { return this->identity_ != nullptr;};
            void deleteIdentity() { this->identity_ = nullptr;};
            inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
            inline AsrResultItem& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline AsrResultItem& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


            // speechRate Field Functions 
            bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
            void deleteSpeechRate() { this->speechRate_ = nullptr;};
            inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
            inline AsrResultItem& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


            // words Field Functions 
            bool hasWords() const { return this->words_ != nullptr;};
            void deleteWords() { this->words_ = nullptr;};
            inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
            inline AsrResultItem& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


          protected:
            shared_ptr<int64_t> begin_ {};
            shared_ptr<int32_t> emotionValue_ {};
            shared_ptr<int64_t> end_ {};
            shared_ptr<string> identity_ {};
            shared_ptr<string> role_ {};
            shared_ptr<int32_t> speechRate_ {};
            shared_ptr<string> words_ {};
          };

          virtual bool empty() const override { return this->asrResult_ == nullptr; };
          // asrResult Field Functions 
          bool hasAsrResult() const { return this->asrResult_ != nullptr;};
          void deleteAsrResult() { this->asrResult_ = nullptr;};
          inline const vector<AsrResult::AsrResultItem> & getAsrResult() const { DARABONBA_PTR_GET_CONST(asrResult_, vector<AsrResult::AsrResultItem>) };
          inline vector<AsrResult::AsrResultItem> getAsrResult() { DARABONBA_PTR_GET(asrResult_, vector<AsrResult::AsrResultItem>) };
          inline AsrResult& setAsrResult(const vector<AsrResult::AsrResultItem> & asrResult) { DARABONBA_PTR_SET_VALUE(asrResult_, asrResult) };
          inline AsrResult& setAsrResult(vector<AsrResult::AsrResultItem> && asrResult) { DARABONBA_PTR_SET_RVALUE(asrResult_, asrResult) };


        protected:
          shared_ptr<vector<AsrResult::AsrResultItem>> asrResult_ {};
        };

        class Agent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Agent& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
          };
          friend void from_json(const Darabonba::Json& j, Agent& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
          };
          Agent() = default ;
          Agent(const Agent &) = default ;
          Agent(Agent &&) = default ;
          Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Agent() = default ;
          Agent& operator=(const Agent &) = default ;
          Agent& operator=(Agent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->skillGroup_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Agent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Agent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // skillGroup Field Functions 
          bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
          void deleteSkillGroup() { this->skillGroup_ = nullptr;};
          inline string getSkillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, "") };
          inline Agent& setSkillGroup(string skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> skillGroup_ {};
        };

        virtual bool empty() const override { return this->agent_ == nullptr
        && this->asrResult_ == nullptr && this->assignmentTime_ == nullptr && this->comments_ == nullptr && this->createTime_ == nullptr && this->createTimeLong_ == nullptr
        && this->errorMessage_ == nullptr && this->hitResult_ == nullptr && this->hitScore_ == nullptr && this->lastDataId_ == nullptr && this->recording_ == nullptr
        && this->resolver_ == nullptr && this->reviewHistoryList_ == nullptr && this->reviewResult_ == nullptr && this->reviewStatus_ == nullptr && this->reviewTime_ == nullptr
        && this->reviewTimeLong_ == nullptr && this->reviewType_ == nullptr && this->reviewTypeIdList_ == nullptr && this->reviewer_ == nullptr && this->schemeIdList_ == nullptr
        && this->schemeNameList_ == nullptr && this->score_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->vid_ == nullptr; };
        // agent Field Functions 
        bool hasAgent() const { return this->agent_ != nullptr;};
        void deleteAgent() { this->agent_ = nullptr;};
        inline const ResultInfo::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, ResultInfo::Agent) };
        inline ResultInfo::Agent getAgent() { DARABONBA_PTR_GET(agent_, ResultInfo::Agent) };
        inline ResultInfo& setAgent(const ResultInfo::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
        inline ResultInfo& setAgent(ResultInfo::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


        // asrResult Field Functions 
        bool hasAsrResult() const { return this->asrResult_ != nullptr;};
        void deleteAsrResult() { this->asrResult_ = nullptr;};
        inline const ResultInfo::AsrResult & getAsrResult() const { DARABONBA_PTR_GET_CONST(asrResult_, ResultInfo::AsrResult) };
        inline ResultInfo::AsrResult getAsrResult() { DARABONBA_PTR_GET(asrResult_, ResultInfo::AsrResult) };
        inline ResultInfo& setAsrResult(const ResultInfo::AsrResult & asrResult) { DARABONBA_PTR_SET_VALUE(asrResult_, asrResult) };
        inline ResultInfo& setAsrResult(ResultInfo::AsrResult && asrResult) { DARABONBA_PTR_SET_RVALUE(asrResult_, asrResult) };


        // assignmentTime Field Functions 
        bool hasAssignmentTime() const { return this->assignmentTime_ != nullptr;};
        void deleteAssignmentTime() { this->assignmentTime_ = nullptr;};
        inline string getAssignmentTime() const { DARABONBA_PTR_GET_DEFAULT(assignmentTime_, "") };
        inline ResultInfo& setAssignmentTime(string assignmentTime) { DARABONBA_PTR_SET_VALUE(assignmentTime_, assignmentTime) };


        // comments Field Functions 
        bool hasComments() const { return this->comments_ != nullptr;};
        void deleteComments() { this->comments_ = nullptr;};
        inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
        inline ResultInfo& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ResultInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimeLong Field Functions 
        bool hasCreateTimeLong() const { return this->createTimeLong_ != nullptr;};
        void deleteCreateTimeLong() { this->createTimeLong_ = nullptr;};
        inline string getCreateTimeLong() const { DARABONBA_PTR_GET_DEFAULT(createTimeLong_, "") };
        inline ResultInfo& setCreateTimeLong(string createTimeLong) { DARABONBA_PTR_SET_VALUE(createTimeLong_, createTimeLong) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ResultInfo& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // hitResult Field Functions 
        bool hasHitResult() const { return this->hitResult_ != nullptr;};
        void deleteHitResult() { this->hitResult_ = nullptr;};
        inline const ResultInfo::HitResult & getHitResult() const { DARABONBA_PTR_GET_CONST(hitResult_, ResultInfo::HitResult) };
        inline ResultInfo::HitResult getHitResult() { DARABONBA_PTR_GET(hitResult_, ResultInfo::HitResult) };
        inline ResultInfo& setHitResult(const ResultInfo::HitResult & hitResult) { DARABONBA_PTR_SET_VALUE(hitResult_, hitResult) };
        inline ResultInfo& setHitResult(ResultInfo::HitResult && hitResult) { DARABONBA_PTR_SET_RVALUE(hitResult_, hitResult) };


        // hitScore Field Functions 
        bool hasHitScore() const { return this->hitScore_ != nullptr;};
        void deleteHitScore() { this->hitScore_ = nullptr;};
        inline const ResultInfo::HitScore & getHitScore() const { DARABONBA_PTR_GET_CONST(hitScore_, ResultInfo::HitScore) };
        inline ResultInfo::HitScore getHitScore() { DARABONBA_PTR_GET(hitScore_, ResultInfo::HitScore) };
        inline ResultInfo& setHitScore(const ResultInfo::HitScore & hitScore) { DARABONBA_PTR_SET_VALUE(hitScore_, hitScore) };
        inline ResultInfo& setHitScore(ResultInfo::HitScore && hitScore) { DARABONBA_PTR_SET_RVALUE(hitScore_, hitScore) };


        // lastDataId Field Functions 
        bool hasLastDataId() const { return this->lastDataId_ != nullptr;};
        void deleteLastDataId() { this->lastDataId_ = nullptr;};
        inline string getLastDataId() const { DARABONBA_PTR_GET_DEFAULT(lastDataId_, "") };
        inline ResultInfo& setLastDataId(string lastDataId) { DARABONBA_PTR_SET_VALUE(lastDataId_, lastDataId) };


        // recording Field Functions 
        bool hasRecording() const { return this->recording_ != nullptr;};
        void deleteRecording() { this->recording_ = nullptr;};
        inline const ResultInfo::Recording & getRecording() const { DARABONBA_PTR_GET_CONST(recording_, ResultInfo::Recording) };
        inline ResultInfo::Recording getRecording() { DARABONBA_PTR_GET(recording_, ResultInfo::Recording) };
        inline ResultInfo& setRecording(const ResultInfo::Recording & recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };
        inline ResultInfo& setRecording(ResultInfo::Recording && recording) { DARABONBA_PTR_SET_RVALUE(recording_, recording) };


        // resolver Field Functions 
        bool hasResolver() const { return this->resolver_ != nullptr;};
        void deleteResolver() { this->resolver_ = nullptr;};
        inline string getResolver() const { DARABONBA_PTR_GET_DEFAULT(resolver_, "") };
        inline ResultInfo& setResolver(string resolver) { DARABONBA_PTR_SET_VALUE(resolver_, resolver) };


        // reviewHistoryList Field Functions 
        bool hasReviewHistoryList() const { return this->reviewHistoryList_ != nullptr;};
        void deleteReviewHistoryList() { this->reviewHistoryList_ = nullptr;};
        inline const ResultInfo::ReviewHistoryList & getReviewHistoryList() const { DARABONBA_PTR_GET_CONST(reviewHistoryList_, ResultInfo::ReviewHistoryList) };
        inline ResultInfo::ReviewHistoryList getReviewHistoryList() { DARABONBA_PTR_GET(reviewHistoryList_, ResultInfo::ReviewHistoryList) };
        inline ResultInfo& setReviewHistoryList(const ResultInfo::ReviewHistoryList & reviewHistoryList) { DARABONBA_PTR_SET_VALUE(reviewHistoryList_, reviewHistoryList) };
        inline ResultInfo& setReviewHistoryList(ResultInfo::ReviewHistoryList && reviewHistoryList) { DARABONBA_PTR_SET_RVALUE(reviewHistoryList_, reviewHistoryList) };


        // reviewResult Field Functions 
        bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
        void deleteReviewResult() { this->reviewResult_ = nullptr;};
        inline int32_t getReviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
        inline ResultInfo& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


        // reviewStatus Field Functions 
        bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
        void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
        inline int32_t getReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, 0) };
        inline ResultInfo& setReviewStatus(int32_t reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


        // reviewTime Field Functions 
        bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
        void deleteReviewTime() { this->reviewTime_ = nullptr;};
        inline string getReviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, "") };
        inline ResultInfo& setReviewTime(string reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


        // reviewTimeLong Field Functions 
        bool hasReviewTimeLong() const { return this->reviewTimeLong_ != nullptr;};
        void deleteReviewTimeLong() { this->reviewTimeLong_ = nullptr;};
        inline string getReviewTimeLong() const { DARABONBA_PTR_GET_DEFAULT(reviewTimeLong_, "") };
        inline ResultInfo& setReviewTimeLong(string reviewTimeLong) { DARABONBA_PTR_SET_VALUE(reviewTimeLong_, reviewTimeLong) };


        // reviewType Field Functions 
        bool hasReviewType() const { return this->reviewType_ != nullptr;};
        void deleteReviewType() { this->reviewType_ = nullptr;};
        inline int32_t getReviewType() const { DARABONBA_PTR_GET_DEFAULT(reviewType_, 0) };
        inline ResultInfo& setReviewType(int32_t reviewType) { DARABONBA_PTR_SET_VALUE(reviewType_, reviewType) };


        // reviewTypeIdList Field Functions 
        bool hasReviewTypeIdList() const { return this->reviewTypeIdList_ != nullptr;};
        void deleteReviewTypeIdList() { this->reviewTypeIdList_ = nullptr;};
        inline const ResultInfo::ReviewTypeIdList & getReviewTypeIdList() const { DARABONBA_PTR_GET_CONST(reviewTypeIdList_, ResultInfo::ReviewTypeIdList) };
        inline ResultInfo::ReviewTypeIdList getReviewTypeIdList() { DARABONBA_PTR_GET(reviewTypeIdList_, ResultInfo::ReviewTypeIdList) };
        inline ResultInfo& setReviewTypeIdList(const ResultInfo::ReviewTypeIdList & reviewTypeIdList) { DARABONBA_PTR_SET_VALUE(reviewTypeIdList_, reviewTypeIdList) };
        inline ResultInfo& setReviewTypeIdList(ResultInfo::ReviewTypeIdList && reviewTypeIdList) { DARABONBA_PTR_SET_RVALUE(reviewTypeIdList_, reviewTypeIdList) };


        // reviewer Field Functions 
        bool hasReviewer() const { return this->reviewer_ != nullptr;};
        void deleteReviewer() { this->reviewer_ = nullptr;};
        inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
        inline ResultInfo& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


        // schemeIdList Field Functions 
        bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
        void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
        inline const ResultInfo::SchemeIdList & getSchemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, ResultInfo::SchemeIdList) };
        inline ResultInfo::SchemeIdList getSchemeIdList() { DARABONBA_PTR_GET(schemeIdList_, ResultInfo::SchemeIdList) };
        inline ResultInfo& setSchemeIdList(const ResultInfo::SchemeIdList & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
        inline ResultInfo& setSchemeIdList(ResultInfo::SchemeIdList && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


        // schemeNameList Field Functions 
        bool hasSchemeNameList() const { return this->schemeNameList_ != nullptr;};
        void deleteSchemeNameList() { this->schemeNameList_ = nullptr;};
        inline const ResultInfo::SchemeNameList & getSchemeNameList() const { DARABONBA_PTR_GET_CONST(schemeNameList_, ResultInfo::SchemeNameList) };
        inline ResultInfo::SchemeNameList getSchemeNameList() { DARABONBA_PTR_GET(schemeNameList_, ResultInfo::SchemeNameList) };
        inline ResultInfo& setSchemeNameList(const ResultInfo::SchemeNameList & schemeNameList) { DARABONBA_PTR_SET_VALUE(schemeNameList_, schemeNameList) };
        inline ResultInfo& setSchemeNameList(ResultInfo::SchemeNameList && schemeNameList) { DARABONBA_PTR_SET_RVALUE(schemeNameList_, schemeNameList) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline ResultInfo& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ResultInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline ResultInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline ResultInfo& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // vid Field Functions 
        bool hasVid() const { return this->vid_ != nullptr;};
        void deleteVid() { this->vid_ = nullptr;};
        inline string getVid() const { DARABONBA_PTR_GET_DEFAULT(vid_, "") };
        inline ResultInfo& setVid(string vid) { DARABONBA_PTR_SET_VALUE(vid_, vid) };


      protected:
        shared_ptr<ResultInfo::Agent> agent_ {};
        shared_ptr<ResultInfo::AsrResult> asrResult_ {};
        shared_ptr<string> assignmentTime_ {};
        shared_ptr<string> comments_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> createTimeLong_ {};
        shared_ptr<string> errorMessage_ {};
        shared_ptr<ResultInfo::HitResult> hitResult_ {};
        shared_ptr<ResultInfo::HitScore> hitScore_ {};
        shared_ptr<string> lastDataId_ {};
        shared_ptr<ResultInfo::Recording> recording_ {};
        shared_ptr<string> resolver_ {};
        shared_ptr<ResultInfo::ReviewHistoryList> reviewHistoryList_ {};
        shared_ptr<int32_t> reviewResult_ {};
        shared_ptr<int32_t> reviewStatus_ {};
        shared_ptr<string> reviewTime_ {};
        shared_ptr<string> reviewTimeLong_ {};
        shared_ptr<int32_t> reviewType_ {};
        shared_ptr<ResultInfo::ReviewTypeIdList> reviewTypeIdList_ {};
        shared_ptr<string> reviewer_ {};
        shared_ptr<ResultInfo::SchemeIdList> schemeIdList_ {};
        shared_ptr<ResultInfo::SchemeNameList> schemeNameList_ {};
        shared_ptr<int32_t> score_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> taskName_ {};
        shared_ptr<string> vid_ {};
      };

      virtual bool empty() const override { return this->resultInfo_ == nullptr; };
      // resultInfo Field Functions 
      bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
      void deleteResultInfo() { this->resultInfo_ = nullptr;};
      inline const vector<Data::ResultInfo> & getResultInfo() const { DARABONBA_PTR_GET_CONST(resultInfo_, vector<Data::ResultInfo>) };
      inline vector<Data::ResultInfo> getResultInfo() { DARABONBA_PTR_GET(resultInfo_, vector<Data::ResultInfo>) };
      inline Data& setResultInfo(const vector<Data::ResultInfo> & resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };
      inline Data& setResultInfo(vector<Data::ResultInfo> && resultInfo) { DARABONBA_PTR_SET_RVALUE(resultInfo_, resultInfo) };


    protected:
      shared_ptr<vector<Data::ResultInfo>> resultInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->resultCountId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetResultResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetResultResponseBody::Data) };
    inline GetResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetResultResponseBody::Data) };
    inline GetResultResponseBody& setData(const GetResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResultResponseBody& setData(GetResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetResultResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCountId Field Functions 
    bool hasResultCountId() const { return this->resultCountId_ != nullptr;};
    void deleteResultCountId() { this->resultCountId_ = nullptr;};
    inline string getResultCountId() const { DARABONBA_PTR_GET_DEFAULT(resultCountId_, "") };
    inline GetResultResponseBody& setResultCountId(string resultCountId) { DARABONBA_PTR_SET_VALUE(resultCountId_, resultCountId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<GetResultResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCountId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
