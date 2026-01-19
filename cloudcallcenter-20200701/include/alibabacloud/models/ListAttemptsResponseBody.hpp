// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTEMPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATTEMPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class ListAttemptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttemptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttemptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAttemptsResponseBody() = default ;
    ListAttemptsResponseBody(const ListAttemptsResponseBody &) = default ;
    ListAttemptsResponseBody(ListAttemptsResponseBody &&) = default ;
    ListAttemptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttemptsResponseBody() = default ;
    ListAttemptsResponseBody& operator=(const ListAttemptsResponseBody &) = default ;
    ListAttemptsResponseBody& operator=(ListAttemptsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AgentEstablishedTime, agentEstablishedTime_);
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentRingDuration, agentRingDuration_);
          DARABONBA_PTR_TO_JSON(AssignAgentTime, assignAgentTime_);
          DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
          DARABONBA_PTR_TO_JSON(Callee, callee_);
          DARABONBA_PTR_TO_JSON(Caller, caller_);
          DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
          DARABONBA_PTR_TO_JSON(CaseId, caseId_);
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(CustomerEstablishedTime, customerEstablishedTime_);
          DARABONBA_PTR_TO_JSON(CustomerReleasedTime, customerReleasedTime_);
          DARABONBA_PTR_TO_JSON(DialDuration, dialDuration_);
          DARABONBA_PTR_TO_JSON(DialTime, dialTime_);
          DARABONBA_PTR_TO_JSON(EnqueueTime, enqueueTime_);
          DARABONBA_PTR_TO_JSON(EnterIvrTime, enterIvrTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IvrDuration, ivrDuration_);
          DARABONBA_PTR_TO_JSON(QueueDuration, queueDuration_);
          DARABONBA_PTR_TO_JSON(QueueId, queueId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentEstablishedTime, agentEstablishedTime_);
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentRingDuration, agentRingDuration_);
          DARABONBA_PTR_FROM_JSON(AssignAgentTime, assignAgentTime_);
          DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
          DARABONBA_PTR_FROM_JSON(Callee, callee_);
          DARABONBA_PTR_FROM_JSON(Caller, caller_);
          DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
          DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(CustomerEstablishedTime, customerEstablishedTime_);
          DARABONBA_PTR_FROM_JSON(CustomerReleasedTime, customerReleasedTime_);
          DARABONBA_PTR_FROM_JSON(DialDuration, dialDuration_);
          DARABONBA_PTR_FROM_JSON(DialTime, dialTime_);
          DARABONBA_PTR_FROM_JSON(EnqueueTime, enqueueTime_);
          DARABONBA_PTR_FROM_JSON(EnterIvrTime, enterIvrTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IvrDuration, ivrDuration_);
          DARABONBA_PTR_FROM_JSON(QueueDuration, queueDuration_);
          DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
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
        virtual bool empty() const override { return this->agentEstablishedTime_ == nullptr
        && this->agentId_ == nullptr && this->agentRingDuration_ == nullptr && this->assignAgentTime_ == nullptr && this->attemptId_ == nullptr && this->callee_ == nullptr
        && this->caller_ == nullptr && this->campaignId_ == nullptr && this->caseId_ == nullptr && this->contactId_ == nullptr && this->customerEstablishedTime_ == nullptr
        && this->customerReleasedTime_ == nullptr && this->dialDuration_ == nullptr && this->dialTime_ == nullptr && this->enqueueTime_ == nullptr && this->enterIvrTime_ == nullptr
        && this->instanceId_ == nullptr && this->ivrDuration_ == nullptr && this->queueDuration_ == nullptr && this->queueId_ == nullptr; };
        // agentEstablishedTime Field Functions 
        bool hasAgentEstablishedTime() const { return this->agentEstablishedTime_ != nullptr;};
        void deleteAgentEstablishedTime() { this->agentEstablishedTime_ = nullptr;};
        inline int64_t getAgentEstablishedTime() const { DARABONBA_PTR_GET_DEFAULT(agentEstablishedTime_, 0L) };
        inline List& setAgentEstablishedTime(int64_t agentEstablishedTime) { DARABONBA_PTR_SET_VALUE(agentEstablishedTime_, agentEstablishedTime) };


        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline List& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentRingDuration Field Functions 
        bool hasAgentRingDuration() const { return this->agentRingDuration_ != nullptr;};
        void deleteAgentRingDuration() { this->agentRingDuration_ = nullptr;};
        inline int64_t getAgentRingDuration() const { DARABONBA_PTR_GET_DEFAULT(agentRingDuration_, 0L) };
        inline List& setAgentRingDuration(int64_t agentRingDuration) { DARABONBA_PTR_SET_VALUE(agentRingDuration_, agentRingDuration) };


        // assignAgentTime Field Functions 
        bool hasAssignAgentTime() const { return this->assignAgentTime_ != nullptr;};
        void deleteAssignAgentTime() { this->assignAgentTime_ = nullptr;};
        inline int64_t getAssignAgentTime() const { DARABONBA_PTR_GET_DEFAULT(assignAgentTime_, 0L) };
        inline List& setAssignAgentTime(int64_t assignAgentTime) { DARABONBA_PTR_SET_VALUE(assignAgentTime_, assignAgentTime) };


        // attemptId Field Functions 
        bool hasAttemptId() const { return this->attemptId_ != nullptr;};
        void deleteAttemptId() { this->attemptId_ = nullptr;};
        inline string getAttemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
        inline List& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


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


        // campaignId Field Functions 
        bool hasCampaignId() const { return this->campaignId_ != nullptr;};
        void deleteCampaignId() { this->campaignId_ = nullptr;};
        inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
        inline List& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


        // caseId Field Functions 
        bool hasCaseId() const { return this->caseId_ != nullptr;};
        void deleteCaseId() { this->caseId_ = nullptr;};
        inline string getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
        inline List& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
        inline List& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // customerEstablishedTime Field Functions 
        bool hasCustomerEstablishedTime() const { return this->customerEstablishedTime_ != nullptr;};
        void deleteCustomerEstablishedTime() { this->customerEstablishedTime_ = nullptr;};
        inline int64_t getCustomerEstablishedTime() const { DARABONBA_PTR_GET_DEFAULT(customerEstablishedTime_, 0L) };
        inline List& setCustomerEstablishedTime(int64_t customerEstablishedTime) { DARABONBA_PTR_SET_VALUE(customerEstablishedTime_, customerEstablishedTime) };


        // customerReleasedTime Field Functions 
        bool hasCustomerReleasedTime() const { return this->customerReleasedTime_ != nullptr;};
        void deleteCustomerReleasedTime() { this->customerReleasedTime_ = nullptr;};
        inline int64_t getCustomerReleasedTime() const { DARABONBA_PTR_GET_DEFAULT(customerReleasedTime_, 0L) };
        inline List& setCustomerReleasedTime(int64_t customerReleasedTime) { DARABONBA_PTR_SET_VALUE(customerReleasedTime_, customerReleasedTime) };


        // dialDuration Field Functions 
        bool hasDialDuration() const { return this->dialDuration_ != nullptr;};
        void deleteDialDuration() { this->dialDuration_ = nullptr;};
        inline int64_t getDialDuration() const { DARABONBA_PTR_GET_DEFAULT(dialDuration_, 0L) };
        inline List& setDialDuration(int64_t dialDuration) { DARABONBA_PTR_SET_VALUE(dialDuration_, dialDuration) };


        // dialTime Field Functions 
        bool hasDialTime() const { return this->dialTime_ != nullptr;};
        void deleteDialTime() { this->dialTime_ = nullptr;};
        inline int64_t getDialTime() const { DARABONBA_PTR_GET_DEFAULT(dialTime_, 0L) };
        inline List& setDialTime(int64_t dialTime) { DARABONBA_PTR_SET_VALUE(dialTime_, dialTime) };


        // enqueueTime Field Functions 
        bool hasEnqueueTime() const { return this->enqueueTime_ != nullptr;};
        void deleteEnqueueTime() { this->enqueueTime_ = nullptr;};
        inline int64_t getEnqueueTime() const { DARABONBA_PTR_GET_DEFAULT(enqueueTime_, 0L) };
        inline List& setEnqueueTime(int64_t enqueueTime) { DARABONBA_PTR_SET_VALUE(enqueueTime_, enqueueTime) };


        // enterIvrTime Field Functions 
        bool hasEnterIvrTime() const { return this->enterIvrTime_ != nullptr;};
        void deleteEnterIvrTime() { this->enterIvrTime_ = nullptr;};
        inline int64_t getEnterIvrTime() const { DARABONBA_PTR_GET_DEFAULT(enterIvrTime_, 0L) };
        inline List& setEnterIvrTime(int64_t enterIvrTime) { DARABONBA_PTR_SET_VALUE(enterIvrTime_, enterIvrTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ivrDuration Field Functions 
        bool hasIvrDuration() const { return this->ivrDuration_ != nullptr;};
        void deleteIvrDuration() { this->ivrDuration_ = nullptr;};
        inline int64_t getIvrDuration() const { DARABONBA_PTR_GET_DEFAULT(ivrDuration_, 0L) };
        inline List& setIvrDuration(int64_t ivrDuration) { DARABONBA_PTR_SET_VALUE(ivrDuration_, ivrDuration) };


        // queueDuration Field Functions 
        bool hasQueueDuration() const { return this->queueDuration_ != nullptr;};
        void deleteQueueDuration() { this->queueDuration_ = nullptr;};
        inline int64_t getQueueDuration() const { DARABONBA_PTR_GET_DEFAULT(queueDuration_, 0L) };
        inline List& setQueueDuration(int64_t queueDuration) { DARABONBA_PTR_SET_VALUE(queueDuration_, queueDuration) };


        // queueId Field Functions 
        bool hasQueueId() const { return this->queueId_ != nullptr;};
        void deleteQueueId() { this->queueId_ = nullptr;};
        inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
        inline List& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


      protected:
        shared_ptr<int64_t> agentEstablishedTime_ {};
        shared_ptr<string> agentId_ {};
        shared_ptr<int64_t> agentRingDuration_ {};
        shared_ptr<int64_t> assignAgentTime_ {};
        shared_ptr<string> attemptId_ {};
        shared_ptr<string> callee_ {};
        shared_ptr<string> caller_ {};
        shared_ptr<string> campaignId_ {};
        shared_ptr<string> caseId_ {};
        shared_ptr<string> contactId_ {};
        shared_ptr<int64_t> customerEstablishedTime_ {};
        shared_ptr<int64_t> customerReleasedTime_ {};
        shared_ptr<int64_t> dialDuration_ {};
        shared_ptr<int64_t> dialTime_ {};
        shared_ptr<int64_t> enqueueTime_ {};
        shared_ptr<int64_t> enterIvrTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> ivrDuration_ {};
        shared_ptr<int64_t> queueDuration_ {};
        shared_ptr<string> queueId_ {};
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
    inline ListAttemptsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAttemptsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAttemptsResponseBody::Data) };
    inline ListAttemptsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAttemptsResponseBody::Data) };
    inline ListAttemptsResponseBody& setData(const ListAttemptsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAttemptsResponseBody& setData(ListAttemptsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAttemptsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAttemptsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAttemptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListAttemptsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
