// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYWATCHTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYWATCHTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListQualityWatchTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityWatchTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityWatchTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListQualityWatchTasksResponseBody() = default ;
    ListQualityWatchTasksResponseBody(const ListQualityWatchTasksResponseBody &) = default ;
    ListQualityWatchTasksResponseBody(ListQualityWatchTasksResponseBody &&) = default ;
    ListQualityWatchTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityWatchTasksResponseBody() = default ;
    ListQualityWatchTasksResponseBody& operator=(const ListQualityWatchTasksResponseBody &) = default ;
    ListQualityWatchTasksResponseBody& operator=(ListQualityWatchTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(QualityWatchTaskList, qualityWatchTaskList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(QualityWatchTaskList, qualityWatchTaskList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QualityWatchTaskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QualityWatchTaskList& obj) { 
          DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
          DARABONBA_PTR_TO_JSON(BizDateFormat, bizDateFormat_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(QualityOwner, qualityOwner_);
          DARABONBA_PTR_TO_JSON(QualityOwnerName, qualityOwnerName_);
          DARABONBA_PTR_TO_JSON(RuleCountInfo, ruleCountInfo_);
          DARABONBA_PTR_TO_JSON(RuleIdList, ruleIdList_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(WatchId, watchId_);
        };
        friend void from_json(const Darabonba::Json& j, QualityWatchTaskList& obj) { 
          DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
          DARABONBA_PTR_FROM_JSON(BizDateFormat, bizDateFormat_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(QualityOwner, qualityOwner_);
          DARABONBA_PTR_FROM_JSON(QualityOwnerName, qualityOwnerName_);
          DARABONBA_PTR_FROM_JSON(RuleCountInfo, ruleCountInfo_);
          DARABONBA_PTR_FROM_JSON(RuleIdList, ruleIdList_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
        };
        QualityWatchTaskList() = default ;
        QualityWatchTaskList(const QualityWatchTaskList &) = default ;
        QualityWatchTaskList(QualityWatchTaskList &&) = default ;
        QualityWatchTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QualityWatchTaskList() = default ;
        QualityWatchTaskList& operator=(const QualityWatchTaskList &) = default ;
        QualityWatchTaskList& operator=(QualityWatchTaskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuleCountInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleCountInfo& obj) { 
            DARABONBA_PTR_TO_JSON(StrongRuleCount, strongRuleCount_);
            DARABONBA_PTR_TO_JSON(ValidateRuleCount, validateRuleCount_);
            DARABONBA_PTR_TO_JSON(WeakRuleCount, weakRuleCount_);
          };
          friend void from_json(const Darabonba::Json& j, RuleCountInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(StrongRuleCount, strongRuleCount_);
            DARABONBA_PTR_FROM_JSON(ValidateRuleCount, validateRuleCount_);
            DARABONBA_PTR_FROM_JSON(WeakRuleCount, weakRuleCount_);
          };
          RuleCountInfo() = default ;
          RuleCountInfo(const RuleCountInfo &) = default ;
          RuleCountInfo(RuleCountInfo &&) = default ;
          RuleCountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleCountInfo() = default ;
          RuleCountInfo& operator=(const RuleCountInfo &) = default ;
          RuleCountInfo& operator=(RuleCountInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class WeakRuleCount : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WeakRuleCount& obj) { 
              DARABONBA_PTR_TO_JSON(ErrorRuleCount, errorRuleCount_);
              DARABONBA_PTR_TO_JSON(FinishedRuleCount, finishedRuleCount_);
              DARABONBA_PTR_TO_JSON(SuccessRuleCount, successRuleCount_);
              DARABONBA_PTR_TO_JSON(TotalRuleCount, totalRuleCount_);
            };
            friend void from_json(const Darabonba::Json& j, WeakRuleCount& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrorRuleCount, errorRuleCount_);
              DARABONBA_PTR_FROM_JSON(FinishedRuleCount, finishedRuleCount_);
              DARABONBA_PTR_FROM_JSON(SuccessRuleCount, successRuleCount_);
              DARABONBA_PTR_FROM_JSON(TotalRuleCount, totalRuleCount_);
            };
            WeakRuleCount() = default ;
            WeakRuleCount(const WeakRuleCount &) = default ;
            WeakRuleCount(WeakRuleCount &&) = default ;
            WeakRuleCount(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WeakRuleCount() = default ;
            WeakRuleCount& operator=(const WeakRuleCount &) = default ;
            WeakRuleCount& operator=(WeakRuleCount &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errorRuleCount_ == nullptr
        && this->finishedRuleCount_ == nullptr && this->successRuleCount_ == nullptr && this->totalRuleCount_ == nullptr; };
            // errorRuleCount Field Functions 
            bool hasErrorRuleCount() const { return this->errorRuleCount_ != nullptr;};
            void deleteErrorRuleCount() { this->errorRuleCount_ = nullptr;};
            inline int64_t getErrorRuleCount() const { DARABONBA_PTR_GET_DEFAULT(errorRuleCount_, 0L) };
            inline WeakRuleCount& setErrorRuleCount(int64_t errorRuleCount) { DARABONBA_PTR_SET_VALUE(errorRuleCount_, errorRuleCount) };


            // finishedRuleCount Field Functions 
            bool hasFinishedRuleCount() const { return this->finishedRuleCount_ != nullptr;};
            void deleteFinishedRuleCount() { this->finishedRuleCount_ = nullptr;};
            inline int64_t getFinishedRuleCount() const { DARABONBA_PTR_GET_DEFAULT(finishedRuleCount_, 0L) };
            inline WeakRuleCount& setFinishedRuleCount(int64_t finishedRuleCount) { DARABONBA_PTR_SET_VALUE(finishedRuleCount_, finishedRuleCount) };


            // successRuleCount Field Functions 
            bool hasSuccessRuleCount() const { return this->successRuleCount_ != nullptr;};
            void deleteSuccessRuleCount() { this->successRuleCount_ = nullptr;};
            inline int64_t getSuccessRuleCount() const { DARABONBA_PTR_GET_DEFAULT(successRuleCount_, 0L) };
            inline WeakRuleCount& setSuccessRuleCount(int64_t successRuleCount) { DARABONBA_PTR_SET_VALUE(successRuleCount_, successRuleCount) };


            // totalRuleCount Field Functions 
            bool hasTotalRuleCount() const { return this->totalRuleCount_ != nullptr;};
            void deleteTotalRuleCount() { this->totalRuleCount_ = nullptr;};
            inline int64_t getTotalRuleCount() const { DARABONBA_PTR_GET_DEFAULT(totalRuleCount_, 0L) };
            inline WeakRuleCount& setTotalRuleCount(int64_t totalRuleCount) { DARABONBA_PTR_SET_VALUE(totalRuleCount_, totalRuleCount) };


          protected:
            shared_ptr<int64_t> errorRuleCount_ {};
            shared_ptr<int64_t> finishedRuleCount_ {};
            shared_ptr<int64_t> successRuleCount_ {};
            shared_ptr<int64_t> totalRuleCount_ {};
          };

          class ValidateRuleCount : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ValidateRuleCount& obj) { 
              DARABONBA_PTR_TO_JSON(ErrorRuleCount, errorRuleCount_);
              DARABONBA_PTR_TO_JSON(FinishedRuleCount, finishedRuleCount_);
              DARABONBA_PTR_TO_JSON(SuccessRuleCount, successRuleCount_);
              DARABONBA_PTR_TO_JSON(TotalRuleCount, totalRuleCount_);
            };
            friend void from_json(const Darabonba::Json& j, ValidateRuleCount& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrorRuleCount, errorRuleCount_);
              DARABONBA_PTR_FROM_JSON(FinishedRuleCount, finishedRuleCount_);
              DARABONBA_PTR_FROM_JSON(SuccessRuleCount, successRuleCount_);
              DARABONBA_PTR_FROM_JSON(TotalRuleCount, totalRuleCount_);
            };
            ValidateRuleCount() = default ;
            ValidateRuleCount(const ValidateRuleCount &) = default ;
            ValidateRuleCount(ValidateRuleCount &&) = default ;
            ValidateRuleCount(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ValidateRuleCount() = default ;
            ValidateRuleCount& operator=(const ValidateRuleCount &) = default ;
            ValidateRuleCount& operator=(ValidateRuleCount &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errorRuleCount_ == nullptr
        && this->finishedRuleCount_ == nullptr && this->successRuleCount_ == nullptr && this->totalRuleCount_ == nullptr; };
            // errorRuleCount Field Functions 
            bool hasErrorRuleCount() const { return this->errorRuleCount_ != nullptr;};
            void deleteErrorRuleCount() { this->errorRuleCount_ = nullptr;};
            inline int64_t getErrorRuleCount() const { DARABONBA_PTR_GET_DEFAULT(errorRuleCount_, 0L) };
            inline ValidateRuleCount& setErrorRuleCount(int64_t errorRuleCount) { DARABONBA_PTR_SET_VALUE(errorRuleCount_, errorRuleCount) };


            // finishedRuleCount Field Functions 
            bool hasFinishedRuleCount() const { return this->finishedRuleCount_ != nullptr;};
            void deleteFinishedRuleCount() { this->finishedRuleCount_ = nullptr;};
            inline int64_t getFinishedRuleCount() const { DARABONBA_PTR_GET_DEFAULT(finishedRuleCount_, 0L) };
            inline ValidateRuleCount& setFinishedRuleCount(int64_t finishedRuleCount) { DARABONBA_PTR_SET_VALUE(finishedRuleCount_, finishedRuleCount) };


            // successRuleCount Field Functions 
            bool hasSuccessRuleCount() const { return this->successRuleCount_ != nullptr;};
            void deleteSuccessRuleCount() { this->successRuleCount_ = nullptr;};
            inline int64_t getSuccessRuleCount() const { DARABONBA_PTR_GET_DEFAULT(successRuleCount_, 0L) };
            inline ValidateRuleCount& setSuccessRuleCount(int64_t successRuleCount) { DARABONBA_PTR_SET_VALUE(successRuleCount_, successRuleCount) };


            // totalRuleCount Field Functions 
            bool hasTotalRuleCount() const { return this->totalRuleCount_ != nullptr;};
            void deleteTotalRuleCount() { this->totalRuleCount_ = nullptr;};
            inline int64_t getTotalRuleCount() const { DARABONBA_PTR_GET_DEFAULT(totalRuleCount_, 0L) };
            inline ValidateRuleCount& setTotalRuleCount(int64_t totalRuleCount) { DARABONBA_PTR_SET_VALUE(totalRuleCount_, totalRuleCount) };


          protected:
            shared_ptr<int64_t> errorRuleCount_ {};
            shared_ptr<int64_t> finishedRuleCount_ {};
            shared_ptr<int64_t> successRuleCount_ {};
            shared_ptr<int64_t> totalRuleCount_ {};
          };

          class StrongRuleCount : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StrongRuleCount& obj) { 
              DARABONBA_PTR_TO_JSON(ErrorRuleCount, errorRuleCount_);
              DARABONBA_PTR_TO_JSON(FinishedRuleCount, finishedRuleCount_);
              DARABONBA_PTR_TO_JSON(SuccessRuleCount, successRuleCount_);
              DARABONBA_PTR_TO_JSON(TotalRuleCount, totalRuleCount_);
            };
            friend void from_json(const Darabonba::Json& j, StrongRuleCount& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrorRuleCount, errorRuleCount_);
              DARABONBA_PTR_FROM_JSON(FinishedRuleCount, finishedRuleCount_);
              DARABONBA_PTR_FROM_JSON(SuccessRuleCount, successRuleCount_);
              DARABONBA_PTR_FROM_JSON(TotalRuleCount, totalRuleCount_);
            };
            StrongRuleCount() = default ;
            StrongRuleCount(const StrongRuleCount &) = default ;
            StrongRuleCount(StrongRuleCount &&) = default ;
            StrongRuleCount(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StrongRuleCount() = default ;
            StrongRuleCount& operator=(const StrongRuleCount &) = default ;
            StrongRuleCount& operator=(StrongRuleCount &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errorRuleCount_ == nullptr
        && this->finishedRuleCount_ == nullptr && this->successRuleCount_ == nullptr && this->totalRuleCount_ == nullptr; };
            // errorRuleCount Field Functions 
            bool hasErrorRuleCount() const { return this->errorRuleCount_ != nullptr;};
            void deleteErrorRuleCount() { this->errorRuleCount_ = nullptr;};
            inline int64_t getErrorRuleCount() const { DARABONBA_PTR_GET_DEFAULT(errorRuleCount_, 0L) };
            inline StrongRuleCount& setErrorRuleCount(int64_t errorRuleCount) { DARABONBA_PTR_SET_VALUE(errorRuleCount_, errorRuleCount) };


            // finishedRuleCount Field Functions 
            bool hasFinishedRuleCount() const { return this->finishedRuleCount_ != nullptr;};
            void deleteFinishedRuleCount() { this->finishedRuleCount_ = nullptr;};
            inline int64_t getFinishedRuleCount() const { DARABONBA_PTR_GET_DEFAULT(finishedRuleCount_, 0L) };
            inline StrongRuleCount& setFinishedRuleCount(int64_t finishedRuleCount) { DARABONBA_PTR_SET_VALUE(finishedRuleCount_, finishedRuleCount) };


            // successRuleCount Field Functions 
            bool hasSuccessRuleCount() const { return this->successRuleCount_ != nullptr;};
            void deleteSuccessRuleCount() { this->successRuleCount_ = nullptr;};
            inline int64_t getSuccessRuleCount() const { DARABONBA_PTR_GET_DEFAULT(successRuleCount_, 0L) };
            inline StrongRuleCount& setSuccessRuleCount(int64_t successRuleCount) { DARABONBA_PTR_SET_VALUE(successRuleCount_, successRuleCount) };


            // totalRuleCount Field Functions 
            bool hasTotalRuleCount() const { return this->totalRuleCount_ != nullptr;};
            void deleteTotalRuleCount() { this->totalRuleCount_ = nullptr;};
            inline int64_t getTotalRuleCount() const { DARABONBA_PTR_GET_DEFAULT(totalRuleCount_, 0L) };
            inline StrongRuleCount& setTotalRuleCount(int64_t totalRuleCount) { DARABONBA_PTR_SET_VALUE(totalRuleCount_, totalRuleCount) };


          protected:
            shared_ptr<int64_t> errorRuleCount_ {};
            shared_ptr<int64_t> finishedRuleCount_ {};
            shared_ptr<int64_t> successRuleCount_ {};
            shared_ptr<int64_t> totalRuleCount_ {};
          };

          virtual bool empty() const override { return this->strongRuleCount_ == nullptr
        && this->validateRuleCount_ == nullptr && this->weakRuleCount_ == nullptr; };
          // strongRuleCount Field Functions 
          bool hasStrongRuleCount() const { return this->strongRuleCount_ != nullptr;};
          void deleteStrongRuleCount() { this->strongRuleCount_ = nullptr;};
          inline const RuleCountInfo::StrongRuleCount & getStrongRuleCount() const { DARABONBA_PTR_GET_CONST(strongRuleCount_, RuleCountInfo::StrongRuleCount) };
          inline RuleCountInfo::StrongRuleCount getStrongRuleCount() { DARABONBA_PTR_GET(strongRuleCount_, RuleCountInfo::StrongRuleCount) };
          inline RuleCountInfo& setStrongRuleCount(const RuleCountInfo::StrongRuleCount & strongRuleCount) { DARABONBA_PTR_SET_VALUE(strongRuleCount_, strongRuleCount) };
          inline RuleCountInfo& setStrongRuleCount(RuleCountInfo::StrongRuleCount && strongRuleCount) { DARABONBA_PTR_SET_RVALUE(strongRuleCount_, strongRuleCount) };


          // validateRuleCount Field Functions 
          bool hasValidateRuleCount() const { return this->validateRuleCount_ != nullptr;};
          void deleteValidateRuleCount() { this->validateRuleCount_ = nullptr;};
          inline const RuleCountInfo::ValidateRuleCount & getValidateRuleCount() const { DARABONBA_PTR_GET_CONST(validateRuleCount_, RuleCountInfo::ValidateRuleCount) };
          inline RuleCountInfo::ValidateRuleCount getValidateRuleCount() { DARABONBA_PTR_GET(validateRuleCount_, RuleCountInfo::ValidateRuleCount) };
          inline RuleCountInfo& setValidateRuleCount(const RuleCountInfo::ValidateRuleCount & validateRuleCount) { DARABONBA_PTR_SET_VALUE(validateRuleCount_, validateRuleCount) };
          inline RuleCountInfo& setValidateRuleCount(RuleCountInfo::ValidateRuleCount && validateRuleCount) { DARABONBA_PTR_SET_RVALUE(validateRuleCount_, validateRuleCount) };


          // weakRuleCount Field Functions 
          bool hasWeakRuleCount() const { return this->weakRuleCount_ != nullptr;};
          void deleteWeakRuleCount() { this->weakRuleCount_ = nullptr;};
          inline const RuleCountInfo::WeakRuleCount & getWeakRuleCount() const { DARABONBA_PTR_GET_CONST(weakRuleCount_, RuleCountInfo::WeakRuleCount) };
          inline RuleCountInfo::WeakRuleCount getWeakRuleCount() { DARABONBA_PTR_GET(weakRuleCount_, RuleCountInfo::WeakRuleCount) };
          inline RuleCountInfo& setWeakRuleCount(const RuleCountInfo::WeakRuleCount & weakRuleCount) { DARABONBA_PTR_SET_VALUE(weakRuleCount_, weakRuleCount) };
          inline RuleCountInfo& setWeakRuleCount(RuleCountInfo::WeakRuleCount && weakRuleCount) { DARABONBA_PTR_SET_RVALUE(weakRuleCount_, weakRuleCount) };


        protected:
          shared_ptr<RuleCountInfo::StrongRuleCount> strongRuleCount_ {};
          shared_ptr<RuleCountInfo::ValidateRuleCount> validateRuleCount_ {};
          shared_ptr<RuleCountInfo::WeakRuleCount> weakRuleCount_ {};
        };

        virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->bizDateFormat_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr
        && this->modifier_ == nullptr && this->modifyTime_ == nullptr && this->qualityOwner_ == nullptr && this->qualityOwnerName_ == nullptr && this->ruleCountInfo_ == nullptr
        && this->ruleIdList_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->watchId_ == nullptr; };
        // bizDate Field Functions 
        bool hasBizDate() const { return this->bizDate_ != nullptr;};
        void deleteBizDate() { this->bizDate_ = nullptr;};
        inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
        inline QualityWatchTaskList& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


        // bizDateFormat Field Functions 
        bool hasBizDateFormat() const { return this->bizDateFormat_ != nullptr;};
        void deleteBizDateFormat() { this->bizDateFormat_ = nullptr;};
        inline string getBizDateFormat() const { DARABONBA_PTR_GET_DEFAULT(bizDateFormat_, "") };
        inline QualityWatchTaskList& setBizDateFormat(string bizDateFormat) { DARABONBA_PTR_SET_VALUE(bizDateFormat_, bizDateFormat) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline QualityWatchTaskList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline QualityWatchTaskList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline QualityWatchTaskList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline QualityWatchTaskList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline QualityWatchTaskList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline QualityWatchTaskList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // qualityOwner Field Functions 
        bool hasQualityOwner() const { return this->qualityOwner_ != nullptr;};
        void deleteQualityOwner() { this->qualityOwner_ = nullptr;};
        inline string getQualityOwner() const { DARABONBA_PTR_GET_DEFAULT(qualityOwner_, "") };
        inline QualityWatchTaskList& setQualityOwner(string qualityOwner) { DARABONBA_PTR_SET_VALUE(qualityOwner_, qualityOwner) };


        // qualityOwnerName Field Functions 
        bool hasQualityOwnerName() const { return this->qualityOwnerName_ != nullptr;};
        void deleteQualityOwnerName() { this->qualityOwnerName_ = nullptr;};
        inline string getQualityOwnerName() const { DARABONBA_PTR_GET_DEFAULT(qualityOwnerName_, "") };
        inline QualityWatchTaskList& setQualityOwnerName(string qualityOwnerName) { DARABONBA_PTR_SET_VALUE(qualityOwnerName_, qualityOwnerName) };


        // ruleCountInfo Field Functions 
        bool hasRuleCountInfo() const { return this->ruleCountInfo_ != nullptr;};
        void deleteRuleCountInfo() { this->ruleCountInfo_ = nullptr;};
        inline const QualityWatchTaskList::RuleCountInfo & getRuleCountInfo() const { DARABONBA_PTR_GET_CONST(ruleCountInfo_, QualityWatchTaskList::RuleCountInfo) };
        inline QualityWatchTaskList::RuleCountInfo getRuleCountInfo() { DARABONBA_PTR_GET(ruleCountInfo_, QualityWatchTaskList::RuleCountInfo) };
        inline QualityWatchTaskList& setRuleCountInfo(const QualityWatchTaskList::RuleCountInfo & ruleCountInfo) { DARABONBA_PTR_SET_VALUE(ruleCountInfo_, ruleCountInfo) };
        inline QualityWatchTaskList& setRuleCountInfo(QualityWatchTaskList::RuleCountInfo && ruleCountInfo) { DARABONBA_PTR_SET_RVALUE(ruleCountInfo_, ruleCountInfo) };


        // ruleIdList Field Functions 
        bool hasRuleIdList() const { return this->ruleIdList_ != nullptr;};
        void deleteRuleIdList() { this->ruleIdList_ = nullptr;};
        inline const vector<int64_t> & getRuleIdList() const { DARABONBA_PTR_GET_CONST(ruleIdList_, vector<int64_t>) };
        inline vector<int64_t> getRuleIdList() { DARABONBA_PTR_GET(ruleIdList_, vector<int64_t>) };
        inline QualityWatchTaskList& setRuleIdList(const vector<int64_t> & ruleIdList) { DARABONBA_PTR_SET_VALUE(ruleIdList_, ruleIdList) };
        inline QualityWatchTaskList& setRuleIdList(vector<int64_t> && ruleIdList) { DARABONBA_PTR_SET_RVALUE(ruleIdList_, ruleIdList) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline QualityWatchTaskList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline QualityWatchTaskList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // watchId Field Functions 
        bool hasWatchId() const { return this->watchId_ != nullptr;};
        void deleteWatchId() { this->watchId_ = nullptr;};
        inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
        inline QualityWatchTaskList& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


      protected:
        shared_ptr<string> bizDate_ {};
        shared_ptr<string> bizDateFormat_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<string> modifyTime_ {};
        shared_ptr<string> qualityOwner_ {};
        shared_ptr<string> qualityOwnerName_ {};
        shared_ptr<QualityWatchTaskList::RuleCountInfo> ruleCountInfo_ {};
        shared_ptr<vector<int64_t>> ruleIdList_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> watchId_ {};
      };

      virtual bool empty() const override { return this->qualityWatchTaskList_ == nullptr
        && this->totalCount_ == nullptr; };
      // qualityWatchTaskList Field Functions 
      bool hasQualityWatchTaskList() const { return this->qualityWatchTaskList_ != nullptr;};
      void deleteQualityWatchTaskList() { this->qualityWatchTaskList_ = nullptr;};
      inline const vector<PageResult::QualityWatchTaskList> & getQualityWatchTaskList() const { DARABONBA_PTR_GET_CONST(qualityWatchTaskList_, vector<PageResult::QualityWatchTaskList>) };
      inline vector<PageResult::QualityWatchTaskList> getQualityWatchTaskList() { DARABONBA_PTR_GET(qualityWatchTaskList_, vector<PageResult::QualityWatchTaskList>) };
      inline PageResult& setQualityWatchTaskList(const vector<PageResult::QualityWatchTaskList> & qualityWatchTaskList) { DARABONBA_PTR_SET_VALUE(qualityWatchTaskList_, qualityWatchTaskList) };
      inline PageResult& setQualityWatchTaskList(vector<PageResult::QualityWatchTaskList> && qualityWatchTaskList) { DARABONBA_PTR_SET_RVALUE(qualityWatchTaskList_, qualityWatchTaskList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::QualityWatchTaskList>> qualityWatchTaskList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListQualityWatchTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListQualityWatchTasksResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListQualityWatchTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListQualityWatchTasksResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListQualityWatchTasksResponseBody::PageResult) };
    inline ListQualityWatchTasksResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListQualityWatchTasksResponseBody::PageResult) };
    inline ListQualityWatchTasksResponseBody& setPageResult(const ListQualityWatchTasksResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListQualityWatchTasksResponseBody& setPageResult(ListQualityWatchTasksResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQualityWatchTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListQualityWatchTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListQualityWatchTasksResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
