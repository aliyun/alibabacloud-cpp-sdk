// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPNODEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPNODEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppNodeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppNodeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(EventData, eventData_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppNodeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(EventData, eventData_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    GetAiAppNodeDetailResponseBody() = default ;
    GetAiAppNodeDetailResponseBody(const GetAiAppNodeDetailResponseBody &) = default ;
    GetAiAppNodeDetailResponseBody(GetAiAppNodeDetailResponseBody &&) = default ;
    GetAiAppNodeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppNodeDetailResponseBody() = default ;
    GetAiAppNodeDetailResponseBody& operator=(const GetAiAppNodeDetailResponseBody &) = default ;
    GetAiAppNodeDetailResponseBody& operator=(GetAiAppNodeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventData& obj) { 
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EventData& obj) { 
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      EventData() = default ;
      EventData(const EventData &) = default ;
      EventData(EventData &&) = default ;
      EventData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventData() = default ;
      EventData& operator=(const EventData &) = default ;
      EventData& operator=(EventData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(LabelDesc, labelDesc_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(LabelDesc, labelDesc_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->labelDesc_ == nullptr && this->riskLevel_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Labels& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // labelDesc Field Functions 
        bool hasLabelDesc() const { return this->labelDesc_ != nullptr;};
        void deleteLabelDesc() { this->labelDesc_ = nullptr;};
        inline string getLabelDesc() const { DARABONBA_PTR_GET_DEFAULT(labelDesc_, "") };
        inline Labels& setLabelDesc(string labelDesc) { DARABONBA_PTR_SET_VALUE(labelDesc_, labelDesc) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline Labels& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The label name.
        shared_ptr<string> label_ {};
        // The label description.
        shared_ptr<string> labelDesc_ {};
        // The risk level.
        shared_ptr<string> riskLevel_ {};
      };

      virtual bool empty() const override { return this->channel_ == nullptr
        && this->labels_ == nullptr && this->name_ == nullptr && this->riskLevel_ == nullptr && this->time_ == nullptr && this->traceId_ == nullptr
        && this->type_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline EventData& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<EventData::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<EventData::Labels>) };
      inline vector<EventData::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<EventData::Labels>) };
      inline EventData& setLabels(const vector<EventData::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline EventData& setLabels(vector<EventData::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EventData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline EventData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline EventData& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline EventData& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EventData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The channel.
      shared_ptr<string> channel_ {};
      // The list of labels.
      shared_ptr<vector<EventData::Labels>> labels_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The risk level.
      shared_ptr<string> riskLevel_ {};
      // The time when the event occurred.
      shared_ptr<string> time_ {};
      // The trace ID, which is used to query the exact call information.
      shared_ptr<string> traceId_ {};
      // The event type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channel_ == nullptr && this->eventData_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeType_ == nullptr
        && this->requestId_ == nullptr && this->riskLevel_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAiAppNodeDetailResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetAiAppNodeDetailResponseBody& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // eventData Field Functions 
    bool hasEventData() const { return this->eventData_ != nullptr;};
    void deleteEventData() { this->eventData_ = nullptr;};
    inline const vector<GetAiAppNodeDetailResponseBody::EventData> & getEventData() const { DARABONBA_PTR_GET_CONST(eventData_, vector<GetAiAppNodeDetailResponseBody::EventData>) };
    inline vector<GetAiAppNodeDetailResponseBody::EventData> getEventData() { DARABONBA_PTR_GET(eventData_, vector<GetAiAppNodeDetailResponseBody::EventData>) };
    inline GetAiAppNodeDetailResponseBody& setEventData(const vector<GetAiAppNodeDetailResponseBody::EventData> & eventData) { DARABONBA_PTR_SET_VALUE(eventData_, eventData) };
    inline GetAiAppNodeDetailResponseBody& setEventData(vector<GetAiAppNodeDetailResponseBody::EventData> && eventData) { DARABONBA_PTR_SET_RVALUE(eventData_, eventData) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetAiAppNodeDetailResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetAiAppNodeDetailResponseBody& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetAiAppNodeDetailResponseBody& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiAppNodeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetAiAppNodeDetailResponseBody& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The application ID.
    shared_ptr<string> appId_ {};
    // The channel information.
    shared_ptr<string> channel_ {};
    // The list of event data.
    shared_ptr<vector<GetAiAppNodeDetailResponseBody::EventData>> eventData_ {};
    // The node ID.
    shared_ptr<string> nodeId_ {};
    // The node name.
    shared_ptr<string> nodeName_ {};
    // The node type.
    shared_ptr<string> nodeType_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The risk level.
    shared_ptr<string> riskLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
