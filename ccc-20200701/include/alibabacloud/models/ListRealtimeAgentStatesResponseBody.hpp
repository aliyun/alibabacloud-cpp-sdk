// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMEAGENTSTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMEAGENTSTATESRESPONSEBODY_HPP_
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
  class ListRealtimeAgentStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeAgentStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeAgentStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRealtimeAgentStatesResponseBody() = default ;
    ListRealtimeAgentStatesResponseBody(const ListRealtimeAgentStatesResponseBody &) = default ;
    ListRealtimeAgentStatesResponseBody(ListRealtimeAgentStatesResponseBody &&) = default ;
    ListRealtimeAgentStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeAgentStatesResponseBody() = default ;
    ListRealtimeAgentStatesResponseBody& operator=(const ListRealtimeAgentStatesResponseBody &) = default ;
    ListRealtimeAgentStatesResponseBody& operator=(ListRealtimeAgentStatesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(CounterParty, counterParty_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(OutboundScenario, outboundScenario_);
          DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdList_);
          DARABONBA_PTR_TO_JSON(SkillGroupNameList, skillGroupNameList_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(StateCode, stateCode_);
          DARABONBA_PTR_TO_JSON(StateTime, stateTime_);
          DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(CounterParty, counterParty_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(OutboundScenario, outboundScenario_);
          DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdList_);
          DARABONBA_PTR_FROM_JSON(SkillGroupNameList, skillGroupNameList_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(StateCode, stateCode_);
          DARABONBA_PTR_FROM_JSON(StateTime, stateTime_);
          DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
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
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->breakCode_ == nullptr && this->callType_ == nullptr && this->counterParty_ == nullptr && this->duration_ == nullptr
        && this->extension_ == nullptr && this->instanceId_ == nullptr && this->mobile_ == nullptr && this->outboundScenario_ == nullptr && this->skillGroupIdList_ == nullptr
        && this->skillGroupNameList_ == nullptr && this->state_ == nullptr && this->stateCode_ == nullptr && this->stateTime_ == nullptr && this->workMode_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline List& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // breakCode Field Functions 
        bool hasBreakCode() const { return this->breakCode_ != nullptr;};
        void deleteBreakCode() { this->breakCode_ = nullptr;};
        inline string getBreakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
        inline List& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline List& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // counterParty Field Functions 
        bool hasCounterParty() const { return this->counterParty_ != nullptr;};
        void deleteCounterParty() { this->counterParty_ = nullptr;};
        inline string getCounterParty() const { DARABONBA_PTR_GET_DEFAULT(counterParty_, "") };
        inline List& setCounterParty(string counterParty) { DARABONBA_PTR_SET_VALUE(counterParty_, counterParty) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline List& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline List& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline List& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // outboundScenario Field Functions 
        bool hasOutboundScenario() const { return this->outboundScenario_ != nullptr;};
        void deleteOutboundScenario() { this->outboundScenario_ = nullptr;};
        inline bool getOutboundScenario() const { DARABONBA_PTR_GET_DEFAULT(outboundScenario_, false) };
        inline List& setOutboundScenario(bool outboundScenario) { DARABONBA_PTR_SET_VALUE(outboundScenario_, outboundScenario) };


        // skillGroupIdList Field Functions 
        bool hasSkillGroupIdList() const { return this->skillGroupIdList_ != nullptr;};
        void deleteSkillGroupIdList() { this->skillGroupIdList_ = nullptr;};
        inline const vector<string> & getSkillGroupIdList() const { DARABONBA_PTR_GET_CONST(skillGroupIdList_, vector<string>) };
        inline vector<string> getSkillGroupIdList() { DARABONBA_PTR_GET(skillGroupIdList_, vector<string>) };
        inline List& setSkillGroupIdList(const vector<string> & skillGroupIdList) { DARABONBA_PTR_SET_VALUE(skillGroupIdList_, skillGroupIdList) };
        inline List& setSkillGroupIdList(vector<string> && skillGroupIdList) { DARABONBA_PTR_SET_RVALUE(skillGroupIdList_, skillGroupIdList) };


        // skillGroupNameList Field Functions 
        bool hasSkillGroupNameList() const { return this->skillGroupNameList_ != nullptr;};
        void deleteSkillGroupNameList() { this->skillGroupNameList_ = nullptr;};
        inline const vector<string> & getSkillGroupNameList() const { DARABONBA_PTR_GET_CONST(skillGroupNameList_, vector<string>) };
        inline vector<string> getSkillGroupNameList() { DARABONBA_PTR_GET(skillGroupNameList_, vector<string>) };
        inline List& setSkillGroupNameList(const vector<string> & skillGroupNameList) { DARABONBA_PTR_SET_VALUE(skillGroupNameList_, skillGroupNameList) };
        inline List& setSkillGroupNameList(vector<string> && skillGroupNameList) { DARABONBA_PTR_SET_RVALUE(skillGroupNameList_, skillGroupNameList) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline List& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // stateCode Field Functions 
        bool hasStateCode() const { return this->stateCode_ != nullptr;};
        void deleteStateCode() { this->stateCode_ = nullptr;};
        inline string getStateCode() const { DARABONBA_PTR_GET_DEFAULT(stateCode_, "") };
        inline List& setStateCode(string stateCode) { DARABONBA_PTR_SET_VALUE(stateCode_, stateCode) };


        // stateTime Field Functions 
        bool hasStateTime() const { return this->stateTime_ != nullptr;};
        void deleteStateTime() { this->stateTime_ = nullptr;};
        inline int64_t getStateTime() const { DARABONBA_PTR_GET_DEFAULT(stateTime_, 0L) };
        inline List& setStateTime(int64_t stateTime) { DARABONBA_PTR_SET_VALUE(stateTime_, stateTime) };


        // workMode Field Functions 
        bool hasWorkMode() const { return this->workMode_ != nullptr;};
        void deleteWorkMode() { this->workMode_ = nullptr;};
        inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
        inline List& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> agentName_ {};
        shared_ptr<string> breakCode_ {};
        shared_ptr<string> callType_ {};
        shared_ptr<string> counterParty_ {};
        shared_ptr<int64_t> duration_ {};
        shared_ptr<string> extension_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> mobile_ {};
        shared_ptr<bool> outboundScenario_ {};
        shared_ptr<vector<string>> skillGroupIdList_ {};
        shared_ptr<vector<string>> skillGroupNameList_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> stateCode_ {};
        shared_ptr<int64_t> stateTime_ {};
        shared_ptr<string> workMode_ {};
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
    inline ListRealtimeAgentStatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRealtimeAgentStatesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRealtimeAgentStatesResponseBody::Data) };
    inline ListRealtimeAgentStatesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRealtimeAgentStatesResponseBody::Data) };
    inline ListRealtimeAgentStatesResponseBody& setData(const ListRealtimeAgentStatesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRealtimeAgentStatesResponseBody& setData(ListRealtimeAgentStatesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListRealtimeAgentStatesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRealtimeAgentStatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRealtimeAgentStatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListRealtimeAgentStatesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
