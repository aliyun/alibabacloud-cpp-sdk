// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEETINGFLASHMINUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MEETINGFLASHMINUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class MeetingFlashMinutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MeetingFlashMinutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(basicInfo, basicInfo_);
      DARABONBA_PTR_TO_JSON(flashMinutesUrl, flashMinutesUrl_);
      DARABONBA_PTR_TO_JSON(fullSummary, fullSummary_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(todos, todos_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, MeetingFlashMinutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(basicInfo, basicInfo_);
      DARABONBA_PTR_FROM_JSON(flashMinutesUrl, flashMinutesUrl_);
      DARABONBA_PTR_FROM_JSON(fullSummary, fullSummary_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(todos, todos_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    MeetingFlashMinutesResponseBody() = default ;
    MeetingFlashMinutesResponseBody(const MeetingFlashMinutesResponseBody &) = default ;
    MeetingFlashMinutesResponseBody(MeetingFlashMinutesResponseBody &&) = default ;
    MeetingFlashMinutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MeetingFlashMinutesResponseBody() = default ;
    MeetingFlashMinutesResponseBody& operator=(const MeetingFlashMinutesResponseBody &) = default ;
    MeetingFlashMinutesResponseBody& operator=(MeetingFlashMinutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Todos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Todos& obj) { 
        DARABONBA_PTR_TO_JSON(actions, actions_);
        DARABONBA_PTR_TO_JSON(dingtalkTodoList, dingtalkTodoList_);
      };
      friend void from_json(const Darabonba::Json& j, Todos& obj) { 
        DARABONBA_PTR_FROM_JSON(actions, actions_);
        DARABONBA_PTR_FROM_JSON(dingtalkTodoList, dingtalkTodoList_);
      };
      Todos() = default ;
      Todos(const Todos &) = default ;
      Todos(Todos &&) = default ;
      Todos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Todos() = default ;
      Todos& operator=(const Todos &) = default ;
      Todos& operator=(Todos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DingtalkTodoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DingtalkTodoList& obj) { 
          DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
          DARABONBA_PTR_TO_JSON(creatorUnionId, creatorUnionId_);
          DARABONBA_PTR_TO_JSON(deadline, deadline_);
          DARABONBA_PTR_TO_JSON(dingtalkTodoId, dingtalkTodoId_);
          DARABONBA_PTR_TO_JSON(executorList, executorList_);
          DARABONBA_PTR_TO_JSON(isDone, isDone_);
          DARABONBA_PTR_TO_JSON(minutesTodoId, minutesTodoId_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, DingtalkTodoList& obj) { 
          DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(creatorUnionId, creatorUnionId_);
          DARABONBA_PTR_FROM_JSON(deadline, deadline_);
          DARABONBA_PTR_FROM_JSON(dingtalkTodoId, dingtalkTodoId_);
          DARABONBA_PTR_FROM_JSON(executorList, executorList_);
          DARABONBA_PTR_FROM_JSON(isDone, isDone_);
          DARABONBA_PTR_FROM_JSON(minutesTodoId, minutesTodoId_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        DingtalkTodoList() = default ;
        DingtalkTodoList(const DingtalkTodoList &) = default ;
        DingtalkTodoList(DingtalkTodoList &&) = default ;
        DingtalkTodoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DingtalkTodoList() = default ;
        DingtalkTodoList& operator=(const DingtalkTodoList &) = default ;
        DingtalkTodoList& operator=(DingtalkTodoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExecutorList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExecutorList& obj) { 
            DARABONBA_PTR_TO_JSON(avatar, avatar_);
            DARABONBA_PTR_TO_JSON(nick, nick_);
            DARABONBA_PTR_TO_JSON(unionId, unionId_);
          };
          friend void from_json(const Darabonba::Json& j, ExecutorList& obj) { 
            DARABONBA_PTR_FROM_JSON(avatar, avatar_);
            DARABONBA_PTR_FROM_JSON(nick, nick_);
            DARABONBA_PTR_FROM_JSON(unionId, unionId_);
          };
          ExecutorList() = default ;
          ExecutorList(const ExecutorList &) = default ;
          ExecutorList(ExecutorList &&) = default ;
          ExecutorList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExecutorList() = default ;
          ExecutorList& operator=(const ExecutorList &) = default ;
          ExecutorList& operator=(ExecutorList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->avatar_ == nullptr
        && this->nick_ == nullptr && this->unionId_ == nullptr; };
          // avatar Field Functions 
          bool hasAvatar() const { return this->avatar_ != nullptr;};
          void deleteAvatar() { this->avatar_ = nullptr;};
          inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
          inline ExecutorList& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


          // nick Field Functions 
          bool hasNick() const { return this->nick_ != nullptr;};
          void deleteNick() { this->nick_ = nullptr;};
          inline string getNick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
          inline ExecutorList& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


          // unionId Field Functions 
          bool hasUnionId() const { return this->unionId_ != nullptr;};
          void deleteUnionId() { this->unionId_ = nullptr;};
          inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
          inline ExecutorList& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


        protected:
          shared_ptr<string> avatar_ {};
          shared_ptr<string> nick_ {};
          shared_ptr<string> unionId_ {};
        };

        virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->creatorUnionId_ == nullptr && this->deadline_ == nullptr && this->dingtalkTodoId_ == nullptr && this->executorList_ == nullptr && this->isDone_ == nullptr
        && this->minutesTodoId_ == nullptr && this->title_ == nullptr; };
        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline DingtalkTodoList& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // creatorUnionId Field Functions 
        bool hasCreatorUnionId() const { return this->creatorUnionId_ != nullptr;};
        void deleteCreatorUnionId() { this->creatorUnionId_ = nullptr;};
        inline string getCreatorUnionId() const { DARABONBA_PTR_GET_DEFAULT(creatorUnionId_, "") };
        inline DingtalkTodoList& setCreatorUnionId(string creatorUnionId) { DARABONBA_PTR_SET_VALUE(creatorUnionId_, creatorUnionId) };


        // deadline Field Functions 
        bool hasDeadline() const { return this->deadline_ != nullptr;};
        void deleteDeadline() { this->deadline_ = nullptr;};
        inline string getDeadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, "") };
        inline DingtalkTodoList& setDeadline(string deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


        // dingtalkTodoId Field Functions 
        bool hasDingtalkTodoId() const { return this->dingtalkTodoId_ != nullptr;};
        void deleteDingtalkTodoId() { this->dingtalkTodoId_ = nullptr;};
        inline string getDingtalkTodoId() const { DARABONBA_PTR_GET_DEFAULT(dingtalkTodoId_, "") };
        inline DingtalkTodoList& setDingtalkTodoId(string dingtalkTodoId) { DARABONBA_PTR_SET_VALUE(dingtalkTodoId_, dingtalkTodoId) };


        // executorList Field Functions 
        bool hasExecutorList() const { return this->executorList_ != nullptr;};
        void deleteExecutorList() { this->executorList_ = nullptr;};
        inline const vector<DingtalkTodoList::ExecutorList> & getExecutorList() const { DARABONBA_PTR_GET_CONST(executorList_, vector<DingtalkTodoList::ExecutorList>) };
        inline vector<DingtalkTodoList::ExecutorList> getExecutorList() { DARABONBA_PTR_GET(executorList_, vector<DingtalkTodoList::ExecutorList>) };
        inline DingtalkTodoList& setExecutorList(const vector<DingtalkTodoList::ExecutorList> & executorList) { DARABONBA_PTR_SET_VALUE(executorList_, executorList) };
        inline DingtalkTodoList& setExecutorList(vector<DingtalkTodoList::ExecutorList> && executorList) { DARABONBA_PTR_SET_RVALUE(executorList_, executorList) };


        // isDone Field Functions 
        bool hasIsDone() const { return this->isDone_ != nullptr;};
        void deleteIsDone() { this->isDone_ = nullptr;};
        inline bool getIsDone() const { DARABONBA_PTR_GET_DEFAULT(isDone_, false) };
        inline DingtalkTodoList& setIsDone(bool isDone) { DARABONBA_PTR_SET_VALUE(isDone_, isDone) };


        // minutesTodoId Field Functions 
        bool hasMinutesTodoId() const { return this->minutesTodoId_ != nullptr;};
        void deleteMinutesTodoId() { this->minutesTodoId_ = nullptr;};
        inline string getMinutesTodoId() const { DARABONBA_PTR_GET_DEFAULT(minutesTodoId_, "") };
        inline DingtalkTodoList& setMinutesTodoId(string minutesTodoId) { DARABONBA_PTR_SET_VALUE(minutesTodoId_, minutesTodoId) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline DingtalkTodoList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<int64_t> createdTime_ {};
        shared_ptr<string> creatorUnionId_ {};
        shared_ptr<string> deadline_ {};
        shared_ptr<string> dingtalkTodoId_ {};
        shared_ptr<vector<DingtalkTodoList::ExecutorList>> executorList_ {};
        shared_ptr<bool> isDone_ {};
        shared_ptr<string> minutesTodoId_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->actions_ == nullptr
        && this->dingtalkTodoList_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
      inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
      inline Todos& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline Todos& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // dingtalkTodoList Field Functions 
      bool hasDingtalkTodoList() const { return this->dingtalkTodoList_ != nullptr;};
      void deleteDingtalkTodoList() { this->dingtalkTodoList_ = nullptr;};
      inline const vector<Todos::DingtalkTodoList> & getDingtalkTodoList() const { DARABONBA_PTR_GET_CONST(dingtalkTodoList_, vector<Todos::DingtalkTodoList>) };
      inline vector<Todos::DingtalkTodoList> getDingtalkTodoList() { DARABONBA_PTR_GET(dingtalkTodoList_, vector<Todos::DingtalkTodoList>) };
      inline Todos& setDingtalkTodoList(const vector<Todos::DingtalkTodoList> & dingtalkTodoList) { DARABONBA_PTR_SET_VALUE(dingtalkTodoList_, dingtalkTodoList) };
      inline Todos& setDingtalkTodoList(vector<Todos::DingtalkTodoList> && dingtalkTodoList) { DARABONBA_PTR_SET_RVALUE(dingtalkTodoList_, dingtalkTodoList) };


    protected:
      shared_ptr<vector<string>> actions_ {};
      shared_ptr<vector<Todos::DingtalkTodoList>> dingtalkTodoList_ {};
    };

    class BasicInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BasicInfo& obj) { 
        DARABONBA_PTR_TO_JSON(duration, duration_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(taskCreator, taskCreator_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, BasicInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(duration, duration_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(taskCreator, taskCreator_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(url, url_);
      };
      BasicInfo() = default ;
      BasicInfo(const BasicInfo &) = default ;
      BasicInfo(BasicInfo &&) = default ;
      BasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BasicInfo() = default ;
      BasicInfo& operator=(const BasicInfo &) = default ;
      BasicInfo& operator=(BasicInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr && this->taskCreator_ == nullptr && this->title_ == nullptr && this->url_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline BasicInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline BasicInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline BasicInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskCreator Field Functions 
      bool hasTaskCreator() const { return this->taskCreator_ != nullptr;};
      void deleteTaskCreator() { this->taskCreator_ = nullptr;};
      inline string getTaskCreator() const { DARABONBA_PTR_GET_DEFAULT(taskCreator_, "") };
      inline BasicInfo& setTaskCreator(string taskCreator) { DARABONBA_PTR_SET_VALUE(taskCreator_, taskCreator) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline BasicInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline BasicInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<int64_t> duration_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> taskCreator_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->basicInfo_ == nullptr
        && this->flashMinutesUrl_ == nullptr && this->fullSummary_ == nullptr && this->requestId_ == nullptr && this->todos_ == nullptr && this->vendorRequestId_ == nullptr
        && this->vendorType_ == nullptr; };
    // basicInfo Field Functions 
    bool hasBasicInfo() const { return this->basicInfo_ != nullptr;};
    void deleteBasicInfo() { this->basicInfo_ = nullptr;};
    inline const MeetingFlashMinutesResponseBody::BasicInfo & getBasicInfo() const { DARABONBA_PTR_GET_CONST(basicInfo_, MeetingFlashMinutesResponseBody::BasicInfo) };
    inline MeetingFlashMinutesResponseBody::BasicInfo getBasicInfo() { DARABONBA_PTR_GET(basicInfo_, MeetingFlashMinutesResponseBody::BasicInfo) };
    inline MeetingFlashMinutesResponseBody& setBasicInfo(const MeetingFlashMinutesResponseBody::BasicInfo & basicInfo) { DARABONBA_PTR_SET_VALUE(basicInfo_, basicInfo) };
    inline MeetingFlashMinutesResponseBody& setBasicInfo(MeetingFlashMinutesResponseBody::BasicInfo && basicInfo) { DARABONBA_PTR_SET_RVALUE(basicInfo_, basicInfo) };


    // flashMinutesUrl Field Functions 
    bool hasFlashMinutesUrl() const { return this->flashMinutesUrl_ != nullptr;};
    void deleteFlashMinutesUrl() { this->flashMinutesUrl_ = nullptr;};
    inline string getFlashMinutesUrl() const { DARABONBA_PTR_GET_DEFAULT(flashMinutesUrl_, "") };
    inline MeetingFlashMinutesResponseBody& setFlashMinutesUrl(string flashMinutesUrl) { DARABONBA_PTR_SET_VALUE(flashMinutesUrl_, flashMinutesUrl) };


    // fullSummary Field Functions 
    bool hasFullSummary() const { return this->fullSummary_ != nullptr;};
    void deleteFullSummary() { this->fullSummary_ = nullptr;};
    inline string getFullSummary() const { DARABONBA_PTR_GET_DEFAULT(fullSummary_, "") };
    inline MeetingFlashMinutesResponseBody& setFullSummary(string fullSummary) { DARABONBA_PTR_SET_VALUE(fullSummary_, fullSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MeetingFlashMinutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // todos Field Functions 
    bool hasTodos() const { return this->todos_ != nullptr;};
    void deleteTodos() { this->todos_ = nullptr;};
    inline const MeetingFlashMinutesResponseBody::Todos & getTodos() const { DARABONBA_PTR_GET_CONST(todos_, MeetingFlashMinutesResponseBody::Todos) };
    inline MeetingFlashMinutesResponseBody::Todos getTodos() { DARABONBA_PTR_GET(todos_, MeetingFlashMinutesResponseBody::Todos) };
    inline MeetingFlashMinutesResponseBody& setTodos(const MeetingFlashMinutesResponseBody::Todos & todos) { DARABONBA_PTR_SET_VALUE(todos_, todos) };
    inline MeetingFlashMinutesResponseBody& setTodos(MeetingFlashMinutesResponseBody::Todos && todos) { DARABONBA_PTR_SET_RVALUE(todos_, todos) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline MeetingFlashMinutesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline MeetingFlashMinutesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<MeetingFlashMinutesResponseBody::BasicInfo> basicInfo_ {};
    shared_ptr<string> flashMinutesUrl_ {};
    shared_ptr<string> fullSummary_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<MeetingFlashMinutesResponseBody::Todos> todos_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
