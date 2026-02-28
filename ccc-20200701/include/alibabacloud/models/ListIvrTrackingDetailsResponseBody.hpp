// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIVRTRACKINGDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIVRTRACKINGDETAILSRESPONSEBODY_HPP_
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
  class ListIvrTrackingDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIvrTrackingDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIvrTrackingDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIvrTrackingDetailsResponseBody() = default ;
    ListIvrTrackingDetailsResponseBody(const ListIvrTrackingDetailsResponseBody &) = default ;
    ListIvrTrackingDetailsResponseBody(ListIvrTrackingDetailsResponseBody &&) = default ;
    ListIvrTrackingDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIvrTrackingDetailsResponseBody() = default ;
    ListIvrTrackingDetailsResponseBody& operator=(const ListIvrTrackingDetailsResponseBody &) = default ;
    ListIvrTrackingDetailsResponseBody& operator=(ListIvrTrackingDetailsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(ChannelVariables, channelVariables_);
          DARABONBA_PTR_TO_JSON(ContactId, contactId_);
          DARABONBA_PTR_TO_JSON(EnterTime, enterTime_);
          DARABONBA_PTR_TO_JSON(FlowId, flowId_);
          DARABONBA_PTR_TO_JSON(FlowName, flowName_);
          DARABONBA_PTR_TO_JSON(Instance, instance_);
          DARABONBA_PTR_TO_JSON(LeaveTime, leaveTime_);
          DARABONBA_PTR_TO_JSON(NodeExitCode, nodeExitCode_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_ANY_TO_JSON(NodeProperties, nodeProperties_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_ANY_TO_JSON(NodeVariables, nodeVariables_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Callee, callee_);
          DARABONBA_PTR_FROM_JSON(Caller, caller_);
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(ChannelVariables, channelVariables_);
          DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
          DARABONBA_PTR_FROM_JSON(EnterTime, enterTime_);
          DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
          DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
          DARABONBA_PTR_FROM_JSON(Instance, instance_);
          DARABONBA_PTR_FROM_JSON(LeaveTime, leaveTime_);
          DARABONBA_PTR_FROM_JSON(NodeExitCode, nodeExitCode_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_ANY_FROM_JSON(NodeProperties, nodeProperties_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_ANY_FROM_JSON(NodeVariables, nodeVariables_);
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
        && this->caller_ == nullptr && this->channelId_ == nullptr && this->channelVariables_ == nullptr && this->contactId_ == nullptr && this->enterTime_ == nullptr
        && this->flowId_ == nullptr && this->flowName_ == nullptr && this->instance_ == nullptr && this->leaveTime_ == nullptr && this->nodeExitCode_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeProperties_ == nullptr && this->nodeType_ == nullptr && this->nodeVariables_ == nullptr; };
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


        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline List& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // channelVariables Field Functions 
        bool hasChannelVariables() const { return this->channelVariables_ != nullptr;};
        void deleteChannelVariables() { this->channelVariables_ = nullptr;};
        inline string getChannelVariables() const { DARABONBA_PTR_GET_DEFAULT(channelVariables_, "") };
        inline List& setChannelVariables(string channelVariables) { DARABONBA_PTR_SET_VALUE(channelVariables_, channelVariables) };


        // contactId Field Functions 
        bool hasContactId() const { return this->contactId_ != nullptr;};
        void deleteContactId() { this->contactId_ = nullptr;};
        inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
        inline List& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


        // enterTime Field Functions 
        bool hasEnterTime() const { return this->enterTime_ != nullptr;};
        void deleteEnterTime() { this->enterTime_ = nullptr;};
        inline int64_t getEnterTime() const { DARABONBA_PTR_GET_DEFAULT(enterTime_, 0L) };
        inline List& setEnterTime(int64_t enterTime) { DARABONBA_PTR_SET_VALUE(enterTime_, enterTime) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
        inline List& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // flowName Field Functions 
        bool hasFlowName() const { return this->flowName_ != nullptr;};
        void deleteFlowName() { this->flowName_ = nullptr;};
        inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
        inline List& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
        inline List& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


        // leaveTime Field Functions 
        bool hasLeaveTime() const { return this->leaveTime_ != nullptr;};
        void deleteLeaveTime() { this->leaveTime_ = nullptr;};
        inline int64_t getLeaveTime() const { DARABONBA_PTR_GET_DEFAULT(leaveTime_, 0L) };
        inline List& setLeaveTime(int64_t leaveTime) { DARABONBA_PTR_SET_VALUE(leaveTime_, leaveTime) };


        // nodeExitCode Field Functions 
        bool hasNodeExitCode() const { return this->nodeExitCode_ != nullptr;};
        void deleteNodeExitCode() { this->nodeExitCode_ = nullptr;};
        inline string getNodeExitCode() const { DARABONBA_PTR_GET_DEFAULT(nodeExitCode_, "") };
        inline List& setNodeExitCode(string nodeExitCode) { DARABONBA_PTR_SET_VALUE(nodeExitCode_, nodeExitCode) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline List& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline List& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeProperties Field Functions 
        bool hasNodeProperties() const { return this->nodeProperties_ != nullptr;};
        void deleteNodeProperties() { this->nodeProperties_ = nullptr;};
        inline         const Darabonba::Json & getNodeProperties() const { DARABONBA_GET(nodeProperties_) };
        Darabonba::Json & getNodeProperties() { DARABONBA_GET(nodeProperties_) };
        inline List& setNodeProperties(const Darabonba::Json & nodeProperties) { DARABONBA_SET_VALUE(nodeProperties_, nodeProperties) };
        inline List& setNodeProperties(Darabonba::Json && nodeProperties) { DARABONBA_SET_RVALUE(nodeProperties_, nodeProperties) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline List& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // nodeVariables Field Functions 
        bool hasNodeVariables() const { return this->nodeVariables_ != nullptr;};
        void deleteNodeVariables() { this->nodeVariables_ = nullptr;};
        inline         const Darabonba::Json & getNodeVariables() const { DARABONBA_GET(nodeVariables_) };
        Darabonba::Json & getNodeVariables() { DARABONBA_GET(nodeVariables_) };
        inline List& setNodeVariables(const Darabonba::Json & nodeVariables) { DARABONBA_SET_VALUE(nodeVariables_, nodeVariables) };
        inline List& setNodeVariables(Darabonba::Json && nodeVariables) { DARABONBA_SET_RVALUE(nodeVariables_, nodeVariables) };


      protected:
        shared_ptr<string> callee_ {};
        shared_ptr<string> caller_ {};
        shared_ptr<string> channelId_ {};
        shared_ptr<string> channelVariables_ {};
        shared_ptr<string> contactId_ {};
        shared_ptr<int64_t> enterTime_ {};
        shared_ptr<string> flowId_ {};
        shared_ptr<string> flowName_ {};
        shared_ptr<string> instance_ {};
        shared_ptr<int64_t> leaveTime_ {};
        shared_ptr<string> nodeExitCode_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeName_ {};
        Darabonba::Json nodeProperties_ {};
        shared_ptr<string> nodeType_ {};
        Darabonba::Json nodeVariables_ {};
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
    inline ListIvrTrackingDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListIvrTrackingDetailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListIvrTrackingDetailsResponseBody::Data) };
    inline ListIvrTrackingDetailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListIvrTrackingDetailsResponseBody::Data) };
    inline ListIvrTrackingDetailsResponseBody& setData(const ListIvrTrackingDetailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIvrTrackingDetailsResponseBody& setData(ListIvrTrackingDetailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListIvrTrackingDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIvrTrackingDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIvrTrackingDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListIvrTrackingDetailsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
