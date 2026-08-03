// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHDEBUGRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHDEBUGRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachDebugResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachDebugResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunSubId, aliyunSubId_);
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(finishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptDebugId, scriptDebugId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskReport, taskReport_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachDebugResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunSubId, aliyunSubId_);
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(finishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptDebugId, scriptDebugId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskReport, taskReport_);
    };
    GetAICoachDebugResultResponseBody() = default ;
    GetAICoachDebugResultResponseBody(const GetAICoachDebugResultResponseBody &) = default ;
    GetAICoachDebugResultResponseBody(GetAICoachDebugResultResponseBody &&) = default ;
    GetAICoachDebugResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachDebugResultResponseBody() = default ;
    GetAICoachDebugResultResponseBody& operator=(const GetAICoachDebugResultResponseBody &) = default ;
    GetAICoachDebugResultResponseBody& operator=(GetAICoachDebugResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskReport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskReport& obj) { 
        DARABONBA_PTR_TO_JSON(deductionRule, deductionRule_);
        DARABONBA_PTR_TO_JSON(expressiveness, expressiveness_);
        DARABONBA_PTR_TO_JSON(point, point_);
      };
      friend void from_json(const Darabonba::Json& j, TaskReport& obj) { 
        DARABONBA_PTR_FROM_JSON(deductionRule, deductionRule_);
        DARABONBA_PTR_FROM_JSON(expressiveness, expressiveness_);
        DARABONBA_PTR_FROM_JSON(point, point_);
      };
      TaskReport() = default ;
      TaskReport(const TaskReport &) = default ;
      TaskReport(TaskReport &&) = default ;
      TaskReport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskReport() = default ;
      TaskReport& operator=(const TaskReport &) = default ;
      TaskReport& operator=(TaskReport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Point : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Point& obj) { 
          DARABONBA_PTR_TO_JSON(answerList, answerList_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Point& obj) { 
          DARABONBA_PTR_FROM_JSON(answerList, answerList_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        Point() = default ;
        Point(const Point &) = default ;
        Point(Point &&) = default ;
        Point(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Point() = default ;
        Point& operator=(const Point &) = default ;
        Point& operator=(Point &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AnswerList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnswerList& obj) { 
            DARABONBA_PTR_TO_JSON(reason, reason_);
            DARABONBA_PTR_TO_JSON(status, status_);
          };
          friend void from_json(const Darabonba::Json& j, AnswerList& obj) { 
            DARABONBA_PTR_FROM_JSON(reason, reason_);
            DARABONBA_PTR_FROM_JSON(status, status_);
          };
          AnswerList() = default ;
          AnswerList(const AnswerList &) = default ;
          AnswerList(AnswerList &&) = default ;
          AnswerList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnswerList() = default ;
          AnswerList& operator=(const AnswerList &) = default ;
          AnswerList& operator=(AnswerList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reason_ == nullptr
        && this->status_ == nullptr; };
          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline const vector<string> & getReason() const { DARABONBA_PTR_GET_CONST(reason_, vector<string>) };
          inline vector<string> getReason() { DARABONBA_PTR_GET(reason_, vector<string>) };
          inline AnswerList& setReason(const vector<string> & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
          inline AnswerList& setReason(vector<string> && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline AnswerList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<vector<string>> reason_ {};
          shared_ptr<int64_t> status_ {};
        };

        virtual bool empty() const override { return this->answerList_ == nullptr
        && this->name_ == nullptr; };
        // answerList Field Functions 
        bool hasAnswerList() const { return this->answerList_ != nullptr;};
        void deleteAnswerList() { this->answerList_ = nullptr;};
        inline const vector<Point::AnswerList> & getAnswerList() const { DARABONBA_PTR_GET_CONST(answerList_, vector<Point::AnswerList>) };
        inline vector<Point::AnswerList> getAnswerList() { DARABONBA_PTR_GET(answerList_, vector<Point::AnswerList>) };
        inline Point& setAnswerList(const vector<Point::AnswerList> & answerList) { DARABONBA_PTR_SET_VALUE(answerList_, answerList) };
        inline Point& setAnswerList(vector<Point::AnswerList> && answerList) { DARABONBA_PTR_SET_RVALUE(answerList_, answerList) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Point& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<vector<Point::AnswerList>> answerList_ {};
        shared_ptr<string> name_ {};
      };

      class Expressiveness : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Expressiveness& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(reason, reason_);
          DARABONBA_PTR_TO_JSON(scoreRounds, scoreRounds_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(totalRounds, totalRounds_);
        };
        friend void from_json(const Darabonba::Json& j, Expressiveness& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(reason, reason_);
          DARABONBA_PTR_FROM_JSON(scoreRounds, scoreRounds_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(totalRounds, totalRounds_);
        };
        Expressiveness() = default ;
        Expressiveness(const Expressiveness &) = default ;
        Expressiveness(Expressiveness &&) = default ;
        Expressiveness(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Expressiveness() = default ;
        Expressiveness& operator=(const Expressiveness &) = default ;
        Expressiveness& operator=(Expressiveness &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->reason_ == nullptr && this->scoreRounds_ == nullptr && this->status_ == nullptr && this->totalRounds_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Expressiveness& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline const vector<string> & getReason() const { DARABONBA_PTR_GET_CONST(reason_, vector<string>) };
        inline vector<string> getReason() { DARABONBA_PTR_GET(reason_, vector<string>) };
        inline Expressiveness& setReason(const vector<string> & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
        inline Expressiveness& setReason(vector<string> && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


        // scoreRounds Field Functions 
        bool hasScoreRounds() const { return this->scoreRounds_ != nullptr;};
        void deleteScoreRounds() { this->scoreRounds_ = nullptr;};
        inline int32_t getScoreRounds() const { DARABONBA_PTR_GET_DEFAULT(scoreRounds_, 0) };
        inline Expressiveness& setScoreRounds(int32_t scoreRounds) { DARABONBA_PTR_SET_VALUE(scoreRounds_, scoreRounds) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Expressiveness& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalRounds Field Functions 
        bool hasTotalRounds() const { return this->totalRounds_ != nullptr;};
        void deleteTotalRounds() { this->totalRounds_ = nullptr;};
        inline int32_t getTotalRounds() const { DARABONBA_PTR_GET_DEFAULT(totalRounds_, 0) };
        inline Expressiveness& setTotalRounds(int32_t totalRounds) { DARABONBA_PTR_SET_VALUE(totalRounds_, totalRounds) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<vector<string>> reason_ {};
        shared_ptr<int32_t> scoreRounds_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int32_t> totalRounds_ {};
      };

      class DeductionRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeductionRule& obj) { 
          DARABONBA_PTR_TO_JSON(hit, hit_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, DeductionRule& obj) { 
          DARABONBA_PTR_FROM_JSON(hit, hit_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(reason, reason_);
        };
        DeductionRule() = default ;
        DeductionRule(const DeductionRule &) = default ;
        DeductionRule(DeductionRule &&) = default ;
        DeductionRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeductionRule() = default ;
        DeductionRule& operator=(const DeductionRule &) = default ;
        DeductionRule& operator=(DeductionRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hit_ == nullptr
        && this->name_ == nullptr && this->reason_ == nullptr; };
        // hit Field Functions 
        bool hasHit() const { return this->hit_ != nullptr;};
        void deleteHit() { this->hit_ = nullptr;};
        inline bool getHit() const { DARABONBA_PTR_GET_DEFAULT(hit_, false) };
        inline DeductionRule& setHit(bool hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DeductionRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline const vector<string> & getReason() const { DARABONBA_PTR_GET_CONST(reason_, vector<string>) };
        inline vector<string> getReason() { DARABONBA_PTR_GET(reason_, vector<string>) };
        inline DeductionRule& setReason(const vector<string> & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
        inline DeductionRule& setReason(vector<string> && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


      protected:
        shared_ptr<bool> hit_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<string>> reason_ {};
      };

      virtual bool empty() const override { return this->deductionRule_ == nullptr
        && this->expressiveness_ == nullptr && this->point_ == nullptr; };
      // deductionRule Field Functions 
      bool hasDeductionRule() const { return this->deductionRule_ != nullptr;};
      void deleteDeductionRule() { this->deductionRule_ = nullptr;};
      inline const TaskReport::DeductionRule & getDeductionRule() const { DARABONBA_PTR_GET_CONST(deductionRule_, TaskReport::DeductionRule) };
      inline TaskReport::DeductionRule getDeductionRule() { DARABONBA_PTR_GET(deductionRule_, TaskReport::DeductionRule) };
      inline TaskReport& setDeductionRule(const TaskReport::DeductionRule & deductionRule) { DARABONBA_PTR_SET_VALUE(deductionRule_, deductionRule) };
      inline TaskReport& setDeductionRule(TaskReport::DeductionRule && deductionRule) { DARABONBA_PTR_SET_RVALUE(deductionRule_, deductionRule) };


      // expressiveness Field Functions 
      bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
      void deleteExpressiveness() { this->expressiveness_ = nullptr;};
      inline const TaskReport::Expressiveness & getExpressiveness() const { DARABONBA_PTR_GET_CONST(expressiveness_, TaskReport::Expressiveness) };
      inline TaskReport::Expressiveness getExpressiveness() { DARABONBA_PTR_GET(expressiveness_, TaskReport::Expressiveness) };
      inline TaskReport& setExpressiveness(const TaskReport::Expressiveness & expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };
      inline TaskReport& setExpressiveness(TaskReport::Expressiveness && expressiveness) { DARABONBA_PTR_SET_RVALUE(expressiveness_, expressiveness) };


      // point Field Functions 
      bool hasPoint() const { return this->point_ != nullptr;};
      void deletePoint() { this->point_ = nullptr;};
      inline const TaskReport::Point & getPoint() const { DARABONBA_PTR_GET_CONST(point_, TaskReport::Point) };
      inline TaskReport::Point getPoint() { DARABONBA_PTR_GET(point_, TaskReport::Point) };
      inline TaskReport& setPoint(const TaskReport::Point & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
      inline TaskReport& setPoint(TaskReport::Point && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


    protected:
      shared_ptr<TaskReport::DeductionRule> deductionRule_ {};
      shared_ptr<TaskReport::Expressiveness> expressiveness_ {};
      shared_ptr<TaskReport::Point> point_ {};
    };

    class DialogueList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      DialogueList() = default ;
      DialogueList(const DialogueList &) = default ;
      DialogueList(DialogueList &&) = default ;
      DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DialogueList() = default ;
      DialogueList& operator=(const DialogueList &) = default ;
      DialogueList& operator=(DialogueList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->role_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DialogueList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline DialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->aliyunSubId_ == nullptr
        && this->dataId_ == nullptr && this->dataType_ == nullptr && this->dialogueList_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr
        && this->finishTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->requestId_ == nullptr && this->scriptDebugId_ == nullptr
        && this->status_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr && this->taskReport_ == nullptr; };
    // aliyunSubId Field Functions 
    bool hasAliyunSubId() const { return this->aliyunSubId_ != nullptr;};
    void deleteAliyunSubId() { this->aliyunSubId_ = nullptr;};
    inline string getAliyunSubId() const { DARABONBA_PTR_GET_DEFAULT(aliyunSubId_, "") };
    inline GetAICoachDebugResultResponseBody& setAliyunSubId(string aliyunSubId) { DARABONBA_PTR_SET_VALUE(aliyunSubId_, aliyunSubId) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline GetAICoachDebugResultResponseBody& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int64_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0L) };
    inline GetAICoachDebugResultResponseBody& setDataType(int64_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // dialogueList Field Functions 
    bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
    void deleteDialogueList() { this->dialogueList_ = nullptr;};
    inline const vector<GetAICoachDebugResultResponseBody::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<GetAICoachDebugResultResponseBody::DialogueList>) };
    inline vector<GetAICoachDebugResultResponseBody::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<GetAICoachDebugResultResponseBody::DialogueList>) };
    inline GetAICoachDebugResultResponseBody& setDialogueList(const vector<GetAICoachDebugResultResponseBody::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
    inline GetAICoachDebugResultResponseBody& setDialogueList(vector<GetAICoachDebugResultResponseBody::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAICoachDebugResultResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAICoachDebugResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetAICoachDebugResultResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetAICoachDebugResultResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetAICoachDebugResultResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachDebugResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptDebugId Field Functions 
    bool hasScriptDebugId() const { return this->scriptDebugId_ != nullptr;};
    void deleteScriptDebugId() { this->scriptDebugId_ = nullptr;};
    inline string getScriptDebugId() const { DARABONBA_PTR_GET_DEFAULT(scriptDebugId_, "") };
    inline GetAICoachDebugResultResponseBody& setScriptDebugId(string scriptDebugId) { DARABONBA_PTR_SET_VALUE(scriptDebugId_, scriptDebugId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GetAICoachDebugResultResponseBody& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAICoachDebugResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAICoachDebugResultResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskReport Field Functions 
    bool hasTaskReport() const { return this->taskReport_ != nullptr;};
    void deleteTaskReport() { this->taskReport_ = nullptr;};
    inline const GetAICoachDebugResultResponseBody::TaskReport & getTaskReport() const { DARABONBA_PTR_GET_CONST(taskReport_, GetAICoachDebugResultResponseBody::TaskReport) };
    inline GetAICoachDebugResultResponseBody::TaskReport getTaskReport() { DARABONBA_PTR_GET(taskReport_, GetAICoachDebugResultResponseBody::TaskReport) };
    inline GetAICoachDebugResultResponseBody& setTaskReport(const GetAICoachDebugResultResponseBody::TaskReport & taskReport) { DARABONBA_PTR_SET_VALUE(taskReport_, taskReport) };
    inline GetAICoachDebugResultResponseBody& setTaskReport(GetAICoachDebugResultResponseBody::TaskReport && taskReport) { DARABONBA_PTR_SET_RVALUE(taskReport_, taskReport) };


  protected:
    shared_ptr<string> aliyunSubId_ {};
    shared_ptr<string> dataId_ {};
    shared_ptr<int64_t> dataType_ {};
    shared_ptr<vector<GetAICoachDebugResultResponseBody::DialogueList>> dialogueList_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> finishTime_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scriptDebugId_ {};
    shared_ptr<int64_t> status_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<GetAICoachDebugResultResponseBody::TaskReport> taskReport_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
