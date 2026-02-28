// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLEGACYAGENTEVENTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLEGACYAGENTEVENTLOGSRESPONSEBODY_HPP_
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
  class ListLegacyAgentEventLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLegacyAgentEventLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLegacyAgentEventLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLegacyAgentEventLogsResponseBody() = default ;
    ListLegacyAgentEventLogsResponseBody(const ListLegacyAgentEventLogsResponseBody &) = default ;
    ListLegacyAgentEventLogsResponseBody(ListLegacyAgentEventLogsResponseBody &&) = default ;
    ListLegacyAgentEventLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLegacyAgentEventLogsResponseBody() = default ;
    ListLegacyAgentEventLogsResponseBody& operator=(const ListLegacyAgentEventLogsResponseBody &) = default ;
    ListLegacyAgentEventLogsResponseBody& operator=(ListLegacyAgentEventLogsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AgentDropCall, agentDropCall_);
          DARABONBA_PTR_TO_JSON(AgentNo, agentNo_);
          DARABONBA_PTR_TO_JSON(CallDir, callDir_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallMode, callMode_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CalleeId, calleeId_);
          DARABONBA_PTR_TO_JSON(CallerId, callerId_);
          DARABONBA_PTR_TO_JSON(ConnId, connId_);
          DARABONBA_PTR_TO_JSON(Event, event_);
          DARABONBA_PTR_TO_JSON(GroupNo, groupNo_);
          DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
          DARABONBA_PTR_TO_JSON(PhoneNo, phoneNo_);
          DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
          DARABONBA_PTR_TO_JSON(TargetRequest, targetRequest_);
          DARABONBA_PTR_TO_JSON(TargetSelect, targetSelect_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(TransferNumber, transferNumber_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentDropCall, agentDropCall_);
          DARABONBA_PTR_FROM_JSON(AgentNo, agentNo_);
          DARABONBA_PTR_FROM_JSON(CallDir, callDir_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallMode, callMode_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CalleeId, calleeId_);
          DARABONBA_PTR_FROM_JSON(CallerId, callerId_);
          DARABONBA_PTR_FROM_JSON(ConnId, connId_);
          DARABONBA_PTR_FROM_JSON(Event, event_);
          DARABONBA_PTR_FROM_JSON(GroupNo, groupNo_);
          DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
          DARABONBA_PTR_FROM_JSON(PhoneNo, phoneNo_);
          DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
          DARABONBA_PTR_FROM_JSON(TargetRequest, targetRequest_);
          DARABONBA_PTR_FROM_JSON(TargetSelect, targetSelect_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(TransferNumber, transferNumber_);
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
        virtual bool empty() const override { return this->agentDropCall_ == nullptr
        && this->agentNo_ == nullptr && this->callDir_ == nullptr && this->callId_ == nullptr && this->callMode_ == nullptr && this->callType_ == nullptr
        && this->calleeId_ == nullptr && this->callerId_ == nullptr && this->connId_ == nullptr && this->event_ == nullptr && this->groupNo_ == nullptr
        && this->outboundScenario_ == nullptr && this->phoneNo_ == nullptr && this->statisticDate_ == nullptr && this->targetRequest_ == nullptr && this->targetSelect_ == nullptr
        && this->tenantId_ == nullptr && this->transferNumber_ == nullptr; };
        // agentDropCall Field Functions 
        bool hasAgentDropCall() const { return this->agentDropCall_ != nullptr;};
        void deleteAgentDropCall() { this->agentDropCall_ = nullptr;};
        inline string getAgentDropCall() const { DARABONBA_PTR_GET_DEFAULT(agentDropCall_, "") };
        inline List& setAgentDropCall(string agentDropCall) { DARABONBA_PTR_SET_VALUE(agentDropCall_, agentDropCall) };


        // agentNo Field Functions 
        bool hasAgentNo() const { return this->agentNo_ != nullptr;};
        void deleteAgentNo() { this->agentNo_ = nullptr;};
        inline string getAgentNo() const { DARABONBA_PTR_GET_DEFAULT(agentNo_, "") };
        inline List& setAgentNo(string agentNo) { DARABONBA_PTR_SET_VALUE(agentNo_, agentNo) };


        // callDir Field Functions 
        bool hasCallDir() const { return this->callDir_ != nullptr;};
        void deleteCallDir() { this->callDir_ = nullptr;};
        inline string getCallDir() const { DARABONBA_PTR_GET_DEFAULT(callDir_, "") };
        inline List& setCallDir(string callDir) { DARABONBA_PTR_SET_VALUE(callDir_, callDir) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline List& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callMode Field Functions 
        bool hasCallMode() const { return this->callMode_ != nullptr;};
        void deleteCallMode() { this->callMode_ = nullptr;};
        inline string getCallMode() const { DARABONBA_PTR_GET_DEFAULT(callMode_, "") };
        inline List& setCallMode(string callMode) { DARABONBA_PTR_SET_VALUE(callMode_, callMode) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline List& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // calleeId Field Functions 
        bool hasCalleeId() const { return this->calleeId_ != nullptr;};
        void deleteCalleeId() { this->calleeId_ = nullptr;};
        inline string getCalleeId() const { DARABONBA_PTR_GET_DEFAULT(calleeId_, "") };
        inline List& setCalleeId(string calleeId) { DARABONBA_PTR_SET_VALUE(calleeId_, calleeId) };


        // callerId Field Functions 
        bool hasCallerId() const { return this->callerId_ != nullptr;};
        void deleteCallerId() { this->callerId_ = nullptr;};
        inline string getCallerId() const { DARABONBA_PTR_GET_DEFAULT(callerId_, "") };
        inline List& setCallerId(string callerId) { DARABONBA_PTR_SET_VALUE(callerId_, callerId) };


        // connId Field Functions 
        bool hasConnId() const { return this->connId_ != nullptr;};
        void deleteConnId() { this->connId_ = nullptr;};
        inline string getConnId() const { DARABONBA_PTR_GET_DEFAULT(connId_, "") };
        inline List& setConnId(string connId) { DARABONBA_PTR_SET_VALUE(connId_, connId) };


        // event Field Functions 
        bool hasEvent() const { return this->event_ != nullptr;};
        void deleteEvent() { this->event_ = nullptr;};
        inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
        inline List& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


        // groupNo Field Functions 
        bool hasGroupNo() const { return this->groupNo_ != nullptr;};
        void deleteGroupNo() { this->groupNo_ = nullptr;};
        inline string getGroupNo() const { DARABONBA_PTR_GET_DEFAULT(groupNo_, "") };
        inline List& setGroupNo(string groupNo) { DARABONBA_PTR_SET_VALUE(groupNo_, groupNo) };


        // outboundScenario Field Functions 
        bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
        void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
        inline bool getOutboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
        inline List& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


        // phoneNo Field Functions 
        bool hasPhoneNo() const { return this->phoneNo_ != nullptr;};
        void deletePhoneNo() { this->phoneNo_ = nullptr;};
        inline string getPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(phoneNo_, "") };
        inline List& setPhoneNo(string phoneNo) { DARABONBA_PTR_SET_VALUE(phoneNo_, phoneNo) };


        // statisticDate Field Functions 
        bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
        void deleteStatisticDate() { this->statisticDate_ = nullptr;};
        inline string getStatisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
        inline List& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


        // targetRequest Field Functions 
        bool hasTargetRequest() const { return this->targetRequest_ != nullptr;};
        void deleteTargetRequest() { this->targetRequest_ = nullptr;};
        inline string getTargetRequest() const { DARABONBA_PTR_GET_DEFAULT(targetRequest_, "") };
        inline List& setTargetRequest(string targetRequest) { DARABONBA_PTR_SET_VALUE(targetRequest_, targetRequest) };


        // targetSelect Field Functions 
        bool hasTargetSelect() const { return this->targetSelect_ != nullptr;};
        void deleteTargetSelect() { this->targetSelect_ = nullptr;};
        inline string getTargetSelect() const { DARABONBA_PTR_GET_DEFAULT(targetSelect_, "") };
        inline List& setTargetSelect(string targetSelect) { DARABONBA_PTR_SET_VALUE(targetSelect_, targetSelect) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline List& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // transferNumber Field Functions 
        bool hasTransferNumber() const { return this->transferNumber_ != nullptr;};
        void deleteTransferNumber() { this->transferNumber_ = nullptr;};
        inline string getTransferNumber() const { DARABONBA_PTR_GET_DEFAULT(transferNumber_, "") };
        inline List& setTransferNumber(string transferNumber) { DARABONBA_PTR_SET_VALUE(transferNumber_, transferNumber) };


      protected:
        shared_ptr<string> agentDropCall_ {};
        shared_ptr<string> agentNo_ {};
        shared_ptr<string> callDir_ {};
        shared_ptr<string> callId_ {};
        shared_ptr<string> callMode_ {};
        shared_ptr<string> callType_ {};
        shared_ptr<string> calleeId_ {};
        shared_ptr<string> callerId_ {};
        shared_ptr<string> connId_ {};
        shared_ptr<string> event_ {};
        shared_ptr<string> groupNo_ {};
        shared_ptr<bool> outboundScenario_ {};
        shared_ptr<string> phoneNo_ {};
        shared_ptr<string> statisticDate_ {};
        shared_ptr<string> targetRequest_ {};
        shared_ptr<string> targetSelect_ {};
        shared_ptr<string> tenantId_ {};
        shared_ptr<string> transferNumber_ {};
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
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLegacyAgentEventLogsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListLegacyAgentEventLogsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListLegacyAgentEventLogsResponseBody::Data) };
    inline ListLegacyAgentEventLogsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListLegacyAgentEventLogsResponseBody::Data) };
    inline ListLegacyAgentEventLogsResponseBody& setData(const ListLegacyAgentEventLogsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLegacyAgentEventLogsResponseBody& setData(ListLegacyAgentEventLogsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListLegacyAgentEventLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLegacyAgentEventLogsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLegacyAgentEventLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLegacyAgentEventLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListLegacyAgentEventLogsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
