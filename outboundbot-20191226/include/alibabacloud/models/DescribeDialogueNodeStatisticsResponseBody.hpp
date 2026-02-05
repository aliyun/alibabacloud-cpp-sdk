// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIALOGUENODESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIALOGUENODESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeDialogueNodeStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDialogueNodeStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HangUpDialogueNodes, hangUpDialogueNodes_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NoAnswerDialogueNodes, noAnswerDialogueNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCompleted, totalCompleted_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDialogueNodeStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HangUpDialogueNodes, hangUpDialogueNodes_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NoAnswerDialogueNodes, noAnswerDialogueNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCompleted, totalCompleted_);
    };
    DescribeDialogueNodeStatisticsResponseBody() = default ;
    DescribeDialogueNodeStatisticsResponseBody(const DescribeDialogueNodeStatisticsResponseBody &) = default ;
    DescribeDialogueNodeStatisticsResponseBody(DescribeDialogueNodeStatisticsResponseBody &&) = default ;
    DescribeDialogueNodeStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDialogueNodeStatisticsResponseBody() = default ;
    DescribeDialogueNodeStatisticsResponseBody& operator=(const DescribeDialogueNodeStatisticsResponseBody &) = default ;
    DescribeDialogueNodeStatisticsResponseBody& operator=(DescribeDialogueNodeStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NoAnswerDialogueNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NoAnswerDialogueNodes& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(HangUpNum, hangUpNum_);
        DARABONBA_PTR_TO_JSON(HitNum, hitNum_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NoAnswerNum, noAnswerNum_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      };
      friend void from_json(const Darabonba::Json& j, NoAnswerDialogueNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(HangUpNum, hangUpNum_);
        DARABONBA_PTR_FROM_JSON(HitNum, hitNum_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NoAnswerNum, noAnswerNum_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      };
      NoAnswerDialogueNodes() = default ;
      NoAnswerDialogueNodes(const NoAnswerDialogueNodes &) = default ;
      NoAnswerDialogueNodes(NoAnswerDialogueNodes &&) = default ;
      NoAnswerDialogueNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NoAnswerDialogueNodes() = default ;
      NoAnswerDialogueNodes& operator=(const NoAnswerDialogueNodes &) = default ;
      NoAnswerDialogueNodes& operator=(NoAnswerDialogueNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->hangUpNum_ == nullptr && this->hitNum_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->noAnswerNum_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline NoAnswerDialogueNodes& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // hangUpNum Field Functions 
      bool hasHangUpNum() const { return this->hangUpNum_ != nullptr;};
      void deleteHangUpNum() { this->hangUpNum_ = nullptr;};
      inline int32_t getHangUpNum() const { DARABONBA_PTR_GET_DEFAULT(hangUpNum_, 0) };
      inline NoAnswerDialogueNodes& setHangUpNum(int32_t hangUpNum) { DARABONBA_PTR_SET_VALUE(hangUpNum_, hangUpNum) };


      // hitNum Field Functions 
      bool hasHitNum() const { return this->hitNum_ != nullptr;};
      void deleteHitNum() { this->hitNum_ = nullptr;};
      inline int32_t getHitNum() const { DARABONBA_PTR_GET_DEFAULT(hitNum_, 0) };
      inline NoAnswerDialogueNodes& setHitNum(int32_t hitNum) { DARABONBA_PTR_SET_VALUE(hitNum_, hitNum) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline NoAnswerDialogueNodes& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NoAnswerDialogueNodes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // noAnswerNum Field Functions 
      bool hasNoAnswerNum() const { return this->noAnswerNum_ != nullptr;};
      void deleteNoAnswerNum() { this->noAnswerNum_ = nullptr;};
      inline int32_t getNoAnswerNum() const { DARABONBA_PTR_GET_DEFAULT(noAnswerNum_, 0) };
      inline NoAnswerDialogueNodes& setNoAnswerNum(int32_t noAnswerNum) { DARABONBA_PTR_SET_VALUE(noAnswerNum_, noAnswerNum) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline NoAnswerDialogueNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline NoAnswerDialogueNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    protected:
      shared_ptr<string> groupId_ {};
      shared_ptr<int32_t> hangUpNum_ {};
      shared_ptr<int32_t> hitNum_ {};
      // id
      shared_ptr<string> id_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int32_t> noAnswerNum_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> nodeName_ {};
    };

    class HangUpDialogueNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HangUpDialogueNodes& obj) { 
        DARABONBA_PTR_TO_JSON(HangUpNum, hangUpNum_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(RateDisplay, rateDisplay_);
      };
      friend void from_json(const Darabonba::Json& j, HangUpDialogueNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(HangUpNum, hangUpNum_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(RateDisplay, rateDisplay_);
      };
      HangUpDialogueNodes() = default ;
      HangUpDialogueNodes(const HangUpDialogueNodes &) = default ;
      HangUpDialogueNodes(HangUpDialogueNodes &&) = default ;
      HangUpDialogueNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HangUpDialogueNodes() = default ;
      HangUpDialogueNodes& operator=(const HangUpDialogueNodes &) = default ;
      HangUpDialogueNodes& operator=(HangUpDialogueNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hangUpNum_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->rateDisplay_ == nullptr; };
      // hangUpNum Field Functions 
      bool hasHangUpNum() const { return this->hangUpNum_ != nullptr;};
      void deleteHangUpNum() { this->hangUpNum_ = nullptr;};
      inline int32_t getHangUpNum() const { DARABONBA_PTR_GET_DEFAULT(hangUpNum_, 0) };
      inline HangUpDialogueNodes& setHangUpNum(int32_t hangUpNum) { DARABONBA_PTR_SET_VALUE(hangUpNum_, hangUpNum) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline HangUpDialogueNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline HangUpDialogueNodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // rateDisplay Field Functions 
      bool hasRateDisplay() const { return this->rateDisplay_ != nullptr;};
      void deleteRateDisplay() { this->rateDisplay_ = nullptr;};
      inline string getRateDisplay() const { DARABONBA_PTR_GET_DEFAULT(rateDisplay_, "") };
      inline HangUpDialogueNodes& setRateDisplay(string rateDisplay) { DARABONBA_PTR_SET_VALUE(rateDisplay_, rateDisplay) };


    protected:
      shared_ptr<int32_t> hangUpNum_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> nodeName_ {};
      shared_ptr<string> rateDisplay_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->groupId_ == nullptr && this->hangUpDialogueNodes_ == nullptr && this->httpStatusCode_ == nullptr && this->instanceId_ == nullptr && this->message_ == nullptr
        && this->noAnswerDialogueNodes_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCompleted_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hangUpDialogueNodes Field Functions 
    bool hasHangUpDialogueNodes() const { return this->hangUpDialogueNodes_ != nullptr;};
    void deleteHangUpDialogueNodes() { this->hangUpDialogueNodes_ = nullptr;};
    inline const vector<DescribeDialogueNodeStatisticsResponseBody::HangUpDialogueNodes> & getHangUpDialogueNodes() const { DARABONBA_PTR_GET_CONST(hangUpDialogueNodes_, vector<DescribeDialogueNodeStatisticsResponseBody::HangUpDialogueNodes>) };
    inline vector<DescribeDialogueNodeStatisticsResponseBody::HangUpDialogueNodes> getHangUpDialogueNodes() { DARABONBA_PTR_GET(hangUpDialogueNodes_, vector<DescribeDialogueNodeStatisticsResponseBody::HangUpDialogueNodes>) };
    inline DescribeDialogueNodeStatisticsResponseBody& setHangUpDialogueNodes(const vector<DescribeDialogueNodeStatisticsResponseBody::HangUpDialogueNodes> & hangUpDialogueNodes) { DARABONBA_PTR_SET_VALUE(hangUpDialogueNodes_, hangUpDialogueNodes) };
    inline DescribeDialogueNodeStatisticsResponseBody& setHangUpDialogueNodes(vector<DescribeDialogueNodeStatisticsResponseBody::HangUpDialogueNodes> && hangUpDialogueNodes) { DARABONBA_PTR_SET_RVALUE(hangUpDialogueNodes_, hangUpDialogueNodes) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDialogueNodeStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // noAnswerDialogueNodes Field Functions 
    bool hasNoAnswerDialogueNodes() const { return this->noAnswerDialogueNodes_ != nullptr;};
    void deleteNoAnswerDialogueNodes() { this->noAnswerDialogueNodes_ = nullptr;};
    inline const vector<DescribeDialogueNodeStatisticsResponseBody::NoAnswerDialogueNodes> & getNoAnswerDialogueNodes() const { DARABONBA_PTR_GET_CONST(noAnswerDialogueNodes_, vector<DescribeDialogueNodeStatisticsResponseBody::NoAnswerDialogueNodes>) };
    inline vector<DescribeDialogueNodeStatisticsResponseBody::NoAnswerDialogueNodes> getNoAnswerDialogueNodes() { DARABONBA_PTR_GET(noAnswerDialogueNodes_, vector<DescribeDialogueNodeStatisticsResponseBody::NoAnswerDialogueNodes>) };
    inline DescribeDialogueNodeStatisticsResponseBody& setNoAnswerDialogueNodes(const vector<DescribeDialogueNodeStatisticsResponseBody::NoAnswerDialogueNodes> & noAnswerDialogueNodes) { DARABONBA_PTR_SET_VALUE(noAnswerDialogueNodes_, noAnswerDialogueNodes) };
    inline DescribeDialogueNodeStatisticsResponseBody& setNoAnswerDialogueNodes(vector<DescribeDialogueNodeStatisticsResponseBody::NoAnswerDialogueNodes> && noAnswerDialogueNodes) { DARABONBA_PTR_SET_RVALUE(noAnswerDialogueNodes_, noAnswerDialogueNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDialogueNodeStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDialogueNodeStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCompleted Field Functions 
    bool hasTotalCompleted() const { return this->totalCompleted_ != nullptr;};
    void deleteTotalCompleted() { this->totalCompleted_ = nullptr;};
    inline int32_t getTotalCompleted() const { DARABONBA_PTR_GET_DEFAULT(totalCompleted_, 0) };
    inline DescribeDialogueNodeStatisticsResponseBody& setTotalCompleted(int32_t totalCompleted) { DARABONBA_PTR_SET_VALUE(totalCompleted_, totalCompleted) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<vector<DescribeDialogueNodeStatisticsResponseBody::HangUpDialogueNodes>> hangUpDialogueNodes_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<DescribeDialogueNodeStatisticsResponseBody::NoAnswerDialogueNodes>> noAnswerDialogueNodes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCompleted_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
