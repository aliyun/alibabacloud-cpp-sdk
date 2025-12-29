// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListTicketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListTicketsResponseBody() = default ;
    ListTicketsResponseBody(const ListTicketsResponseBody &) = default ;
    ListTicketsResponseBody(ListTicketsResponseBody &&) = default ;
    ListTicketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsResponseBody() = default ;
    ListTicketsResponseBody& operator=(const ListTicketsResponseBody &) = default ;
    ListTicketsResponseBody& operator=(ListTicketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(AssignedHandler, assignedHandler_);
        DARABONBA_PTR_TO_JSON(ChargesRemark, chargesRemark_);
        DARABONBA_PTR_TO_JSON(CompleteRemark, completeRemark_);
        DARABONBA_PTR_TO_JSON(Dialogs, dialogs_);
        DARABONBA_PTR_TO_JSON(GmtCalled, gmtCalled_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtDelayed, gmtDelayed_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GroupKey, groupKey_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsAcceptedCharges, isAcceptedCharges_);
        DARABONBA_PTR_TO_JSON(IsDelayed, isDelayed_);
        DARABONBA_PTR_TO_JSON(IsNeedCallback, isNeedCallback_);
        DARABONBA_PTR_TO_JSON(IsNeedCharges, isNeedCharges_);
        DARABONBA_PTR_TO_JSON(Operations, operations_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(AssignedHandler, assignedHandler_);
        DARABONBA_PTR_FROM_JSON(ChargesRemark, chargesRemark_);
        DARABONBA_PTR_FROM_JSON(CompleteRemark, completeRemark_);
        DARABONBA_PTR_FROM_JSON(Dialogs, dialogs_);
        DARABONBA_PTR_FROM_JSON(GmtCalled, gmtCalled_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtDelayed, gmtDelayed_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GroupKey, groupKey_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsAcceptedCharges, isAcceptedCharges_);
        DARABONBA_PTR_FROM_JSON(IsDelayed, isDelayed_);
        DARABONBA_PTR_FROM_JSON(IsNeedCallback, isNeedCallback_);
        DARABONBA_PTR_FROM_JSON(IsNeedCharges, isNeedCharges_);
        DARABONBA_PTR_FROM_JSON(Operations, operations_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dialogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dialogs& obj) { 
          DARABONBA_PTR_TO_JSON(Answer, answer_);
          DARABONBA_PTR_TO_JSON(Question, question_);
        };
        friend void from_json(const Darabonba::Json& j, Dialogs& obj) { 
          DARABONBA_PTR_FROM_JSON(Answer, answer_);
          DARABONBA_PTR_FROM_JSON(Question, question_);
        };
        Dialogs() = default ;
        Dialogs(const Dialogs &) = default ;
        Dialogs(Dialogs &&) = default ;
        Dialogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dialogs() = default ;
        Dialogs& operator=(const Dialogs &) = default ;
        Dialogs& operator=(Dialogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answer_ == nullptr
        && this->question_ == nullptr; };
        // answer Field Functions 
        bool hasAnswer() const { return this->answer_ != nullptr;};
        void deleteAnswer() { this->answer_ = nullptr;};
        inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
        inline Dialogs& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


        // question Field Functions 
        bool hasQuestion() const { return this->question_ != nullptr;};
        void deleteQuestion() { this->question_ = nullptr;};
        inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
        inline Dialogs& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


      protected:
        shared_ptr<string> answer_ {};
        shared_ptr<string> question_ {};
      };

      virtual bool empty() const override { return this->action_ == nullptr
        && this->assignedHandler_ == nullptr && this->chargesRemark_ == nullptr && this->completeRemark_ == nullptr && this->dialogs_ == nullptr && this->gmtCalled_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtDelayed_ == nullptr && this->gmtModified_ == nullptr && this->groupKey_ == nullptr && this->id_ == nullptr
        && this->isAcceptedCharges_ == nullptr && this->isDelayed_ == nullptr && this->isNeedCallback_ == nullptr && this->isNeedCharges_ == nullptr && this->operations_ == nullptr
        && this->remark_ == nullptr && this->roomNo_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline bool getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, false) };
      inline Result& setAction(bool action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // assignedHandler Field Functions 
      bool hasAssignedHandler() const { return this->assignedHandler_ != nullptr;};
      void deleteAssignedHandler() { this->assignedHandler_ = nullptr;};
      inline string getAssignedHandler() const { DARABONBA_PTR_GET_DEFAULT(assignedHandler_, "") };
      inline Result& setAssignedHandler(string assignedHandler) { DARABONBA_PTR_SET_VALUE(assignedHandler_, assignedHandler) };


      // chargesRemark Field Functions 
      bool hasChargesRemark() const { return this->chargesRemark_ != nullptr;};
      void deleteChargesRemark() { this->chargesRemark_ = nullptr;};
      inline string getChargesRemark() const { DARABONBA_PTR_GET_DEFAULT(chargesRemark_, "") };
      inline Result& setChargesRemark(string chargesRemark) { DARABONBA_PTR_SET_VALUE(chargesRemark_, chargesRemark) };


      // completeRemark Field Functions 
      bool hasCompleteRemark() const { return this->completeRemark_ != nullptr;};
      void deleteCompleteRemark() { this->completeRemark_ = nullptr;};
      inline string getCompleteRemark() const { DARABONBA_PTR_GET_DEFAULT(completeRemark_, "") };
      inline Result& setCompleteRemark(string completeRemark) { DARABONBA_PTR_SET_VALUE(completeRemark_, completeRemark) };


      // dialogs Field Functions 
      bool hasDialogs() const { return this->dialogs_ != nullptr;};
      void deleteDialogs() { this->dialogs_ = nullptr;};
      inline const vector<Result::Dialogs> & getDialogs() const { DARABONBA_PTR_GET_CONST(dialogs_, vector<Result::Dialogs>) };
      inline vector<Result::Dialogs> getDialogs() { DARABONBA_PTR_GET(dialogs_, vector<Result::Dialogs>) };
      inline Result& setDialogs(const vector<Result::Dialogs> & dialogs) { DARABONBA_PTR_SET_VALUE(dialogs_, dialogs) };
      inline Result& setDialogs(vector<Result::Dialogs> && dialogs) { DARABONBA_PTR_SET_RVALUE(dialogs_, dialogs) };


      // gmtCalled Field Functions 
      bool hasGmtCalled() const { return this->gmtCalled_ != nullptr;};
      void deleteGmtCalled() { this->gmtCalled_ = nullptr;};
      inline string getGmtCalled() const { DARABONBA_PTR_GET_DEFAULT(gmtCalled_, "") };
      inline Result& setGmtCalled(string gmtCalled) { DARABONBA_PTR_SET_VALUE(gmtCalled_, gmtCalled) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtDelayed Field Functions 
      bool hasGmtDelayed() const { return this->gmtDelayed_ != nullptr;};
      void deleteGmtDelayed() { this->gmtDelayed_ = nullptr;};
      inline string getGmtDelayed() const { DARABONBA_PTR_GET_DEFAULT(gmtDelayed_, "") };
      inline Result& setGmtDelayed(string gmtDelayed) { DARABONBA_PTR_SET_VALUE(gmtDelayed_, gmtDelayed) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // groupKey Field Functions 
      bool hasGroupKey() const { return this->groupKey_ != nullptr;};
      void deleteGroupKey() { this->groupKey_ = nullptr;};
      inline string getGroupKey() const { DARABONBA_PTR_GET_DEFAULT(groupKey_, "") };
      inline Result& setGroupKey(string groupKey) { DARABONBA_PTR_SET_VALUE(groupKey_, groupKey) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isAcceptedCharges Field Functions 
      bool hasIsAcceptedCharges() const { return this->isAcceptedCharges_ != nullptr;};
      void deleteIsAcceptedCharges() { this->isAcceptedCharges_ = nullptr;};
      inline bool getIsAcceptedCharges() const { DARABONBA_PTR_GET_DEFAULT(isAcceptedCharges_, false) };
      inline Result& setIsAcceptedCharges(bool isAcceptedCharges) { DARABONBA_PTR_SET_VALUE(isAcceptedCharges_, isAcceptedCharges) };


      // isDelayed Field Functions 
      bool hasIsDelayed() const { return this->isDelayed_ != nullptr;};
      void deleteIsDelayed() { this->isDelayed_ = nullptr;};
      inline bool getIsDelayed() const { DARABONBA_PTR_GET_DEFAULT(isDelayed_, false) };
      inline Result& setIsDelayed(bool isDelayed) { DARABONBA_PTR_SET_VALUE(isDelayed_, isDelayed) };


      // isNeedCallback Field Functions 
      bool hasIsNeedCallback() const { return this->isNeedCallback_ != nullptr;};
      void deleteIsNeedCallback() { this->isNeedCallback_ = nullptr;};
      inline bool getIsNeedCallback() const { DARABONBA_PTR_GET_DEFAULT(isNeedCallback_, false) };
      inline Result& setIsNeedCallback(bool isNeedCallback) { DARABONBA_PTR_SET_VALUE(isNeedCallback_, isNeedCallback) };


      // isNeedCharges Field Functions 
      bool hasIsNeedCharges() const { return this->isNeedCharges_ != nullptr;};
      void deleteIsNeedCharges() { this->isNeedCharges_ = nullptr;};
      inline bool getIsNeedCharges() const { DARABONBA_PTR_GET_DEFAULT(isNeedCharges_, false) };
      inline Result& setIsNeedCharges(bool isNeedCharges) { DARABONBA_PTR_SET_VALUE(isNeedCharges_, isNeedCharges) };


      // operations Field Functions 
      bool hasOperations() const { return this->operations_ != nullptr;};
      void deleteOperations() { this->operations_ = nullptr;};
      inline const vector<Darabonba::Json> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getOperations() { DARABONBA_PTR_GET(operations_, vector<Darabonba::Json>) };
      inline Result& setOperations(const vector<Darabonba::Json> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
      inline Result& setOperations(vector<Darabonba::Json> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Result& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Result& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<bool> action_ {};
      shared_ptr<string> assignedHandler_ {};
      shared_ptr<string> chargesRemark_ {};
      shared_ptr<string> completeRemark_ {};
      shared_ptr<vector<Result::Dialogs>> dialogs_ {};
      shared_ptr<string> gmtCalled_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtDelayed_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> groupKey_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<bool> isAcceptedCharges_ {};
      shared_ptr<bool> isDelayed_ {};
      shared_ptr<bool> isNeedCallback_ {};
      shared_ptr<bool> isNeedCharges_ {};
      shared_ptr<vector<Darabonba::Json>> operations_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> roomNo_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Page& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTicketsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListTicketsResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListTicketsResponseBody::Page) };
    inline ListTicketsResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, ListTicketsResponseBody::Page) };
    inline ListTicketsResponseBody& setPage(const ListTicketsResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListTicketsResponseBody& setPage(ListTicketsResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTicketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListTicketsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListTicketsResponseBody::Result>) };
    inline vector<ListTicketsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListTicketsResponseBody::Result>) };
    inline ListTicketsResponseBody& setResult(const vector<ListTicketsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListTicketsResponseBody& setResult(vector<ListTicketsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListTicketsResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<ListTicketsResponseBody::Page> page_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTicketsResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
