// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTCALLDETAILRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTCALLDETAILRECORDSRESPONSEBODY_HPP_
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
  class ListRecentCallDetailRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentCallDetailRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentCallDetailRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecentCallDetailRecordsResponseBody() = default ;
    ListRecentCallDetailRecordsResponseBody(const ListRecentCallDetailRecordsResponseBody &) = default ;
    ListRecentCallDetailRecordsResponseBody(ListRecentCallDetailRecordsResponseBody &&) = default ;
    ListRecentCallDetailRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentCallDetailRecordsResponseBody() = default ;
    ListRecentCallDetailRecordsResponseBody& operator=(const ListRecentCallDetailRecordsResponseBody &) = default ;
    ListRecentCallDetailRecordsResponseBody& operator=(ListRecentCallDetailRecordsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
          DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
          DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
          DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
          DARABONBA_PTR_TO_JSON(ContactDisposition, contactDisposition_);
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(ContactType, contactType_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(SkillGroupIds, skillGroupIds_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
          DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
          DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
          DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
          DARABONBA_PTR_FROM_JSON(ContactDisposition, contactDisposition_);
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(SkillGroupIds, skillGroupIds_);
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
        virtual bool empty() const override { return this->agentIds_ == nullptr
        && this->callDuration_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr && this->contactDisposition_ == nullptr && this->contactId_ == nullptr
        && this->contactType_ == nullptr && this->duration_ == nullptr && this->instanceId_ == nullptr && this->skillGroupIds_ == nullptr && this->startTime_ == nullptr; };
        // agentIds Field Functions 
        bool hasAgentIds() const { return this->agentIds_ != nullptr;};
        void deleteAgentIds() { this->agentIds_ = nullptr;};
        inline string getAgentIds() const { DARABONBA_PTR_GET_DEFAULT(agentIds_, "") };
        inline List& setAgentIds(string agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };


        // callDuration Field Functions 
        bool hasCallDuration() const { return this->callDuration_ != nullptr;};
        void deleteCallDuration() { this->callDuration_ = nullptr;};
        inline string getCallDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, "") };
        inline List& setCallDuration(string callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


        // calledNumber Field Functions 
        bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
        void deleteCalledNumber() { this->calledNumber_ = nullptr;};
        inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
        inline List& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


        // callingNumber Field Functions 
        bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
        void deleteCallingNumber() { this->callingNumber_ = nullptr;};
        inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
        inline List& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


        // contactDisposition Field Functions 
        bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
        void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
        inline string getContactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
        inline List& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
        inline List& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // contactType Field Functions 
        bool hasContactType() const { return this->contactType_ != nullptr;};
        void deleteContactType() { this->contactType_ = nullptr;};
        inline string getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
        inline List& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


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


        // skillGroupIds Field Functions 
        bool hasSkillGroupIds() const { return this->skillGroupIds_ != nullptr;};
        void deleteSkillGroupIds() { this->skillGroupIds_ = nullptr;};
        inline string getSkillGroupIds() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIds_, "") };
        inline List& setSkillGroupIds(string skillGroupIds) { DARABONBA_PTR_SET_VALUE(skillGroupIds_, skillGroupIds) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline List& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> agentIds_ {};
        shared_ptr<string> callDuration_ {};
        shared_ptr<string> calledNumber_ {};
        shared_ptr<string> callingNumber_ {};
        shared_ptr<string> contactDisposition_ {};
        shared_ptr<string> contactId_ {};
        shared_ptr<string> contactType_ {};
        shared_ptr<int64_t> duration_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> skillGroupIds_ {};
        shared_ptr<int64_t> startTime_ {};
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
    inline ListRecentCallDetailRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRecentCallDetailRecordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRecentCallDetailRecordsResponseBody::Data) };
    inline ListRecentCallDetailRecordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRecentCallDetailRecordsResponseBody::Data) };
    inline ListRecentCallDetailRecordsResponseBody& setData(const ListRecentCallDetailRecordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRecentCallDetailRecordsResponseBody& setData(ListRecentCallDetailRecordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListRecentCallDetailRecordsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRecentCallDetailRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentCallDetailRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListRecentCallDetailRecordsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
