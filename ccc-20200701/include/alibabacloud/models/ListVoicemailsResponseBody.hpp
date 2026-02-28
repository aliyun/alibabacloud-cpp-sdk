// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOICEMAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVOICEMAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListVoicemailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVoicemailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVoicemailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVoicemailsResponseBody() = default ;
    ListVoicemailsResponseBody(const ListVoicemailsResponseBody &) = default ;
    ListVoicemailsResponseBody(ListVoicemailsResponseBody &&) = default ;
    ListVoicemailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVoicemailsResponseBody() = default ;
    ListVoicemailsResponseBody& operator=(const ListVoicemailsResponseBody &) = default ;
    ListVoicemailsResponseBody& operator=(ListVoicemailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Callee, callee_);
          DARABONBA_PTR_TO_JSON(Caller, caller_);
          DARABONBA_PTR_TO_JSON(CdrStartTime, cdrStartTime_);
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RecordingDuration, recordingDuration_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Callee, callee_);
          DARABONBA_PTR_FROM_JSON(Caller, caller_);
          DARABONBA_PTR_FROM_JSON(CdrStartTime, cdrStartTime_);
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RecordingDuration, recordingDuration_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
        virtual bool empty() const override { return this->callee_ == nullptr
        && this->caller_ == nullptr && this->cdrStartTime_ == nullptr && this->contactId_ == nullptr && this->duration_ == nullptr && this->instanceId_ == nullptr
        && this->name_ == nullptr && this->recordingDuration_ == nullptr && this->startTime_ == nullptr; };
        // callee Field Functions 
        bool hasCallee() const { return this->callee_ != nullptr;};
        void deleteCallee() { this->callee_ = nullptr;};
        inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
        inline List& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


        // caller Field Functions 
        bool hasCaller() const { return this->caller_ != nullptr;};
        void deleteCaller() { this->caller_ = nullptr;};
        inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
        inline List& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


        // cdrStartTime Field Functions 
        bool hasCdrStartTime() const { return this->cdrStartTime_ != nullptr;};
        void deleteCdrStartTime() { this->cdrStartTime_ = nullptr;};
        inline int64_t getCdrStartTime() const { DARABONBA_PTR_GET_DEFAULT(cdrStartTime_, 0L) };
        inline List& setCdrStartTime(int64_t cdrStartTime) { DARABONBA_PTR_SET_VALUE(cdrStartTime_, cdrStartTime) };


        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
        inline List& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline List& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // recordingDuration Field Functions 
        bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
        void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
        inline int64_t getRecordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0L) };
        inline List& setRecordingDuration(int64_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline List& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> callee_ {};
        shared_ptr<string> caller_ {};
        shared_ptr<int64_t> cdrStartTime_ {};
        shared_ptr<string> contactId_ {};
        shared_ptr<int64_t> duration_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> recordingDuration_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListVoicemailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListVoicemailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListVoicemailsResponseBody::Data) };
    inline ListVoicemailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListVoicemailsResponseBody::Data) };
    inline ListVoicemailsResponseBody& setData(const ListVoicemailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVoicemailsResponseBody& setData(ListVoicemailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListVoicemailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVoicemailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVoicemailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListVoicemailsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
