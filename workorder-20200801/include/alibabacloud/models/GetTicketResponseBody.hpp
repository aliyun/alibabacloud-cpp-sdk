// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200801
{
namespace Models
{
  class GetTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NotifyTimeRange, notifyTimeRange_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(TicketStatus, ticketStatus_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NotifyTimeRange, notifyTimeRange_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(TicketStatus, ticketStatus_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetTicketResponseBody() = default ;
    GetTicketResponseBody(const GetTicketResponseBody &) = default ;
    GetTicketResponseBody(GetTicketResponseBody &&) = default ;
    GetTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketResponseBody() = default ;
    GetTicketResponseBody& operator=(const GetTicketResponseBody &) = default ;
    GetTicketResponseBody& operator=(GetTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(AttachList, attachList_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(FromOfficial, fromOfficial_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(NoteId, noteId_);
        DARABONBA_PTR_TO_JSON(Special, special_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachList, attachList_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(FromOfficial, fromOfficial_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
        DARABONBA_PTR_FROM_JSON(Special, special_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachList_ == nullptr
        && this->content_ == nullptr && this->fromOfficial_ == nullptr && this->gmtCreated_ == nullptr && this->noteId_ == nullptr && this->special_ == nullptr; };
      // attachList Field Functions 
      bool hasAttachList() const { return this->attachList_ != nullptr;};
      void deleteAttachList() { this->attachList_ = nullptr;};
      inline const vector<string> & getAttachList() const { DARABONBA_PTR_GET_CONST(attachList_, vector<string>) };
      inline vector<string> getAttachList() { DARABONBA_PTR_GET(attachList_, vector<string>) };
      inline List& setAttachList(const vector<string> & attachList) { DARABONBA_PTR_SET_VALUE(attachList_, attachList) };
      inline List& setAttachList(vector<string> && attachList) { DARABONBA_PTR_SET_RVALUE(attachList_, attachList) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline List& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // fromOfficial Field Functions 
      bool hasFromOfficial() const { return this->fromOfficial_ != nullptr;};
      void deleteFromOfficial() { this->fromOfficial_ = nullptr;};
      inline bool getFromOfficial() const { DARABONBA_PTR_GET_DEFAULT(fromOfficial_, false) };
      inline List& setFromOfficial(bool fromOfficial) { DARABONBA_PTR_SET_VALUE(fromOfficial_, fromOfficial) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline List& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // noteId Field Functions 
      bool hasNoteId() const { return this->noteId_ != nullptr;};
      void deleteNoteId() { this->noteId_ = nullptr;};
      inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
      inline List& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


      // special Field Functions 
      bool hasSpecial() const { return this->special_ != nullptr;};
      void deleteSpecial() { this->special_ = nullptr;};
      inline bool getSpecial() const { DARABONBA_PTR_GET_DEFAULT(special_, false) };
      inline List& setSpecial(bool special) { DARABONBA_PTR_SET_VALUE(special_, special) };


    protected:
      shared_ptr<vector<string>> attachList_ {};
      shared_ptr<string> content_ {};
      shared_ptr<bool> fromOfficial_ {};
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> noteId_ {};
      shared_ptr<bool> special_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->createTime_ == nullptr && this->email_ == nullptr && this->list_ == nullptr && this->message_ == nullptr
        && this->notifyTimeRange_ == nullptr && this->phone_ == nullptr && this->productCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->ticketId_ == nullptr && this->ticketStatus_ == nullptr && this->title_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetTicketResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTicketResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTicketResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetTicketResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<GetTicketResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<GetTicketResponseBody::List>) };
    inline vector<GetTicketResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<GetTicketResponseBody::List>) };
    inline GetTicketResponseBody& setList(const vector<GetTicketResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetTicketResponseBody& setList(vector<GetTicketResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTicketResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // notifyTimeRange Field Functions 
    bool hasNotifyTimeRange() const { return this->notifyTimeRange_ != nullptr;};
    void deleteNotifyTimeRange() { this->notifyTimeRange_ = nullptr;};
    inline string getNotifyTimeRange() const { DARABONBA_PTR_GET_DEFAULT(notifyTimeRange_, "") };
    inline GetTicketResponseBody& setNotifyTimeRange(string notifyTimeRange) { DARABONBA_PTR_SET_VALUE(notifyTimeRange_, notifyTimeRange) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetTicketResponseBody& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetTicketResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTicketResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string getTicketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline GetTicketResponseBody& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline GetTicketResponseBody& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTicketResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> email_ {};
    shared_ptr<vector<GetTicketResponseBody::List>> list_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> notifyTimeRange_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> ticketId_ {};
    shared_ptr<string> ticketStatus_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200801
#endif
