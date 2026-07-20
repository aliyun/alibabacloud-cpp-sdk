// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERNOTELISTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERNOTELISTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class CustomerNoteListDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerNoteListDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerNoteListDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CustomerNoteListDetailResponseBody() = default ;
    CustomerNoteListDetailResponseBody(const CustomerNoteListDetailResponseBody &) = default ;
    CustomerNoteListDetailResponseBody(CustomerNoteListDetailResponseBody &&) = default ;
    CustomerNoteListDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerNoteListDetailResponseBody() = default ;
    CustomerNoteListDetailResponseBody& operator=(const CustomerNoteListDetailResponseBody &) = default ;
    CustomerNoteListDetailResponseBody& operator=(CustomerNoteListDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AiResult, aiResult_);
        DARABONBA_PTR_TO_JSON(Attachment, attachment_);
        DARABONBA_PTR_TO_JSON(ContactInformation, contactInformation_);
        DARABONBA_PTR_TO_JSON(ContactName, contactName_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
        DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(NoteContent, noteContent_);
        DARABONBA_PTR_TO_JSON(NoteId, noteId_);
        DARABONBA_PTR_TO_JSON(NoteType, noteType_);
        DARABONBA_PTR_TO_JSON(NoteTypeLabel, noteTypeLabel_);
        DARABONBA_PTR_TO_JSON(TouchDate, touchDate_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AiResult, aiResult_);
        DARABONBA_PTR_FROM_JSON(Attachment, attachment_);
        DARABONBA_PTR_FROM_JSON(ContactInformation, contactInformation_);
        DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
        DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(NoteContent, noteContent_);
        DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
        DARABONBA_PTR_FROM_JSON(NoteType, noteType_);
        DARABONBA_PTR_FROM_JSON(NoteTypeLabel, noteTypeLabel_);
        DARABONBA_PTR_FROM_JSON(TouchDate, touchDate_);
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
      class Attachment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Attachment& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Signature, signature_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Attachment& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Signature, signature_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Attachment() = default ;
        Attachment(const Attachment &) = default ;
        Attachment(Attachment &&) = default ;
        Attachment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Attachment() = default ;
        Attachment& operator=(const Attachment &) = default ;
        Attachment& operator=(Attachment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->signature_ == nullptr && this->size_ == nullptr && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Attachment& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Attachment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // signature Field Functions 
        bool hasSignature() const { return this->signature_ != nullptr;};
        void deleteSignature() { this->signature_ = nullptr;};
        inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
        inline Attachment& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Attachment& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Attachment& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> signature_ {};
        shared_ptr<int64_t> size_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->aiResult_ == nullptr
        && this->attachment_ == nullptr && this->contactInformation_ == nullptr && this->contactName_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr
        && this->customerName_ == nullptr && this->customerUid_ == nullptr && this->gmtCreate_ == nullptr && this->noteContent_ == nullptr && this->noteId_ == nullptr
        && this->noteType_ == nullptr && this->noteTypeLabel_ == nullptr && this->touchDate_ == nullptr; };
      // aiResult Field Functions 
      bool hasAiResult() const { return this->aiResult_ != nullptr;};
      void deleteAiResult() { this->aiResult_ = nullptr;};
      inline string getAiResult() const { DARABONBA_PTR_GET_DEFAULT(aiResult_, "") };
      inline Data& setAiResult(string aiResult) { DARABONBA_PTR_SET_VALUE(aiResult_, aiResult) };


      // attachment Field Functions 
      bool hasAttachment() const { return this->attachment_ != nullptr;};
      void deleteAttachment() { this->attachment_ = nullptr;};
      inline const vector<Data::Attachment> & getAttachment() const { DARABONBA_PTR_GET_CONST(attachment_, vector<Data::Attachment>) };
      inline vector<Data::Attachment> getAttachment() { DARABONBA_PTR_GET(attachment_, vector<Data::Attachment>) };
      inline Data& setAttachment(const vector<Data::Attachment> & attachment) { DARABONBA_PTR_SET_VALUE(attachment_, attachment) };
      inline Data& setAttachment(vector<Data::Attachment> && attachment) { DARABONBA_PTR_SET_RVALUE(attachment_, attachment) };


      // contactInformation Field Functions 
      bool hasContactInformation() const { return this->contactInformation_ != nullptr;};
      void deleteContactInformation() { this->contactInformation_ = nullptr;};
      inline string getContactInformation() const { DARABONBA_PTR_GET_DEFAULT(contactInformation_, "") };
      inline Data& setContactInformation(string contactInformation) { DARABONBA_PTR_SET_VALUE(contactInformation_, contactInformation) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline Data& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline int64_t getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
      inline Data& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Data& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // customerName Field Functions 
      bool hasCustomerName() const { return this->customerName_ != nullptr;};
      void deleteCustomerName() { this->customerName_ = nullptr;};
      inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
      inline Data& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


      // customerUid Field Functions 
      bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
      void deleteCustomerUid() { this->customerUid_ = nullptr;};
      inline int64_t getCustomerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, 0L) };
      inline Data& setCustomerUid(int64_t customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // noteContent Field Functions 
      bool hasNoteContent() const { return this->noteContent_ != nullptr;};
      void deleteNoteContent() { this->noteContent_ = nullptr;};
      inline string getNoteContent() const { DARABONBA_PTR_GET_DEFAULT(noteContent_, "") };
      inline Data& setNoteContent(string noteContent) { DARABONBA_PTR_SET_VALUE(noteContent_, noteContent) };


      // noteId Field Functions 
      bool hasNoteId() const { return this->noteId_ != nullptr;};
      void deleteNoteId() { this->noteId_ = nullptr;};
      inline int64_t getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, 0L) };
      inline Data& setNoteId(int64_t noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


      // noteType Field Functions 
      bool hasNoteType() const { return this->noteType_ != nullptr;};
      void deleteNoteType() { this->noteType_ = nullptr;};
      inline string getNoteType() const { DARABONBA_PTR_GET_DEFAULT(noteType_, "") };
      inline Data& setNoteType(string noteType) { DARABONBA_PTR_SET_VALUE(noteType_, noteType) };


      // noteTypeLabel Field Functions 
      bool hasNoteTypeLabel() const { return this->noteTypeLabel_ != nullptr;};
      void deleteNoteTypeLabel() { this->noteTypeLabel_ = nullptr;};
      inline string getNoteTypeLabel() const { DARABONBA_PTR_GET_DEFAULT(noteTypeLabel_, "") };
      inline Data& setNoteTypeLabel(string noteTypeLabel) { DARABONBA_PTR_SET_VALUE(noteTypeLabel_, noteTypeLabel) };


      // touchDate Field Functions 
      bool hasTouchDate() const { return this->touchDate_ != nullptr;};
      void deleteTouchDate() { this->touchDate_ = nullptr;};
      inline string getTouchDate() const { DARABONBA_PTR_GET_DEFAULT(touchDate_, "") };
      inline Data& setTouchDate(string touchDate) { DARABONBA_PTR_SET_VALUE(touchDate_, touchDate) };


    protected:
      shared_ptr<string> aiResult_ {};
      shared_ptr<vector<Data::Attachment>> attachment_ {};
      shared_ptr<string> contactInformation_ {};
      shared_ptr<string> contactName_ {};
      shared_ptr<int64_t> creator_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<string> customerName_ {};
      shared_ptr<int64_t> customerUid_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> noteContent_ {};
      shared_ptr<int64_t> noteId_ {};
      shared_ptr<string> noteType_ {};
      shared_ptr<string> noteTypeLabel_ {};
      shared_ptr<string> touchDate_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->msg_ == nullptr
        && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CustomerNoteListDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CustomerNoteListDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CustomerNoteListDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CustomerNoteListDetailResponseBody::Data) };
    inline CustomerNoteListDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CustomerNoteListDetailResponseBody::Data) };
    inline CustomerNoteListDetailResponseBody& setData(const CustomerNoteListDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CustomerNoteListDetailResponseBody& setData(CustomerNoteListDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CustomerNoteListDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CustomerNoteListDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline CustomerNoteListDetailResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CustomerNoteListDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CustomerNoteListDetailResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
